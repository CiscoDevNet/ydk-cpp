
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_statsd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_statsd_oper {

InfraStatistics::InfraStatistics()
    :
    interfaces(std::make_shared<InfraStatistics::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "infra-statistics"; yang_parent_name = "Cisco-IOS-XR-infra-statsd-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

InfraStatistics::~InfraStatistics()
{
}

bool InfraStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool InfraStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string InfraStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-oper:infra-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<InfraStatistics::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void InfraStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> InfraStatistics::clone_ptr() const
{
    return std::make_shared<InfraStatistics>();
}

std::string InfraStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InfraStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InfraStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> InfraStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InfraStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "infra-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

InfraStatistics::Interfaces::~Interfaces()
{
}

bool InfraStatistics::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InfraStatistics::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-oper:infra-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string InfraStatistics::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<InfraStatistics::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::get_children() const
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

void InfraStatistics::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    cache(std::make_shared<InfraStatistics::Interfaces::Interface::Cache>())
    , latest(std::make_shared<InfraStatistics::Interfaces::Interface::Latest>())
    , total(std::make_shared<InfraStatistics::Interfaces::Interface::Total>())
    , protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Protocols>())
    , interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::InterfacesMibCounters>())
    , data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::DataRate>())
    , generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::GenericCounters>())
{
    cache->parent = this;
    latest->parent = this;
    total->parent = this;
    protocols->parent = this;
    interfaces_mib_counters->parent = this;
    data_rate->parent = this;
    generic_counters->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

InfraStatistics::Interfaces::Interface::~Interface()
{
}

bool InfraStatistics::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (latest !=  nullptr && latest->has_data())
	|| (total !=  nullptr && total->has_data())
	|| (protocols !=  nullptr && protocols->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data());
}

bool InfraStatistics::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (latest !=  nullptr && latest->has_operation())
	|| (total !=  nullptr && total->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-oper:infra-statistics/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string InfraStatistics::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<InfraStatistics::Interfaces::Interface::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "latest")
    {
        if(latest == nullptr)
        {
            latest = std::make_shared<InfraStatistics::Interfaces::Interface::Latest>();
        }
        return latest;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<InfraStatistics::Interfaces::Interface::Total>();
        }
        return total;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Protocols>();
        }
        return protocols;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::GenericCounters>();
        }
        return generic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cache != nullptr)
    {
        _children["cache"] = cache;
    }

    if(latest != nullptr)
    {
        _children["latest"] = latest;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    if(protocols != nullptr)
    {
        _children["protocols"] = protocols;
    }

    if(interfaces_mib_counters != nullptr)
    {
        _children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(data_rate != nullptr)
    {
        _children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        _children["generic-counters"] = generic_counters;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "latest" || name == "total" || name == "protocols" || name == "interfaces-mib-counters" || name == "data-rate" || name == "generic-counters" || name == "interface-name")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Cache::Cache()
    :
    protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::Protocols>())
    , interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters>())
    , data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::DataRate>())
    , generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Cache::GenericCounters>())
{
    protocols->parent = this;
    interfaces_mib_counters->parent = this;
    data_rate->parent = this;
    generic_counters->parent = this;

    yang_name = "cache"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Cache::~Cache()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::has_data() const
{
    if (is_presence_container) return true;
    return (protocols !=  nullptr && protocols->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data());
}

bool InfraStatistics::Interfaces::Interface::Cache::has_operation() const
{
    return is_set(yfilter)
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::Protocols>();
        }
        return protocols;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::GenericCounters>();
        }
        return generic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocols != nullptr)
    {
        _children["protocols"] = protocols;
    }

    if(interfaces_mib_counters != nullptr)
    {
        _children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(data_rate != nullptr)
    {
        _children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        _children["generic-counters"] = generic_counters;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::Interface::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::Interface::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols" || name == "interfaces-mib-counters" || name == "data-rate" || name == "generic-counters")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocols()
    :
    protocol(this, {"protocol_name"})
{

    yang_name = "protocols"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Cache::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Cache::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Cache::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Cache::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::Cache::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::Interface::Cache::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_received{YType::uint64, "packets-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"},
    last_data_time{YType::uint64, "last-data-time"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"}
{

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| bytes_received.is_set
	|| packets_received.is_set
	|| bytes_sent.is_set
	|| packets_sent.is_set
	|| protocol.is_set
	|| last_data_time.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "bytes-received" || name == "packets-received" || name == "bytes-sent" || name == "packets-sent" || name == "protocol" || name == "last-data-time" || name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::InterfacesMibCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "interfaces-mib-counters"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Cache::DataRate::DataRate()
    :
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    bandwidth{YType::uint32, "bandwidth"},
    load_interval{YType::uint32, "load-interval"},
    output_load{YType::uint8, "output-load"},
    input_load{YType::uint8, "input-load"},
    reliability{YType::uint8, "reliability"}
{

    yang_name = "data-rate"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Cache::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::DataRate::has_data() const
{
    if (is_presence_container) return true;
    return input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| bandwidth.is_set
	|| load_interval.is_set
	|| output_load.is_set
	|| input_load.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::DataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter)
	|| ydk::is_set(peak_input_data_rate.yfilter)
	|| ydk::is_set(peak_input_packet_rate.yfilter)
	|| ydk::is_set(peak_output_data_rate.yfilter)
	|| ydk::is_set(peak_output_packet_rate.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(output_load.yfilter)
	|| ydk::is_set(input_load.yfilter)
	|| ydk::is_set(reliability.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Cache::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Cache::DataRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.yfilter)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.yfilter)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.yfilter)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.yfilter)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.yfilter)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.yfilter)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Cache::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Cache::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Cache::DataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
        peak_input_data_rate.value_namespace = name_space;
        peak_input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
        peak_input_packet_rate.value_namespace = name_space;
        peak_input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
        peak_output_data_rate.value_namespace = name_space;
        peak_output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
        peak_output_packet_rate.value_namespace = name_space;
        peak_output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-load")
    {
        output_load = value;
        output_load.value_namespace = name_space;
        output_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-load")
    {
        input_load = value;
        input_load.value_namespace = name_space;
        input_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Cache::DataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "output-load")
    {
        output_load.yfilter = yfilter;
    }
    if(value_path == "input-load")
    {
        input_load.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Cache::DataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate" || name == "peak-input-data-rate" || name == "peak-input-packet-rate" || name == "peak-output-data-rate" || name == "peak-output-packet-rate" || name == "bandwidth" || name == "load-interval" || name == "output-load" || name == "input-load" || name == "reliability")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Cache::GenericCounters::GenericCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "generic-counters"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Cache::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Cache::GenericCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::Cache::GenericCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Cache::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Cache::GenericCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Cache::GenericCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Cache::GenericCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Latest::Latest()
    :
    protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::Protocols>())
    , interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters>())
    , data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::DataRate>())
    , generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Latest::GenericCounters>())
{
    protocols->parent = this;
    interfaces_mib_counters->parent = this;
    data_rate->parent = this;
    generic_counters->parent = this;

    yang_name = "latest"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Latest::~Latest()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::has_data() const
{
    if (is_presence_container) return true;
    return (protocols !=  nullptr && protocols->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data());
}

bool InfraStatistics::Interfaces::Interface::Latest::has_operation() const
{
    return is_set(yfilter)
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::Latest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Latest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Latest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::Protocols>();
        }
        return protocols;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::GenericCounters>();
        }
        return generic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Latest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocols != nullptr)
    {
        _children["protocols"] = protocols;
    }

    if(interfaces_mib_counters != nullptr)
    {
        _children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(data_rate != nullptr)
    {
        _children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        _children["generic-counters"] = generic_counters;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::Latest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::Interface::Latest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::Interface::Latest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols" || name == "interfaces-mib-counters" || name == "data-rate" || name == "generic-counters")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocols()
    :
    protocol(this, {"protocol_name"})
{

    yang_name = "protocols"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Latest::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Latest::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Latest::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Latest::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::Latest::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::Interface::Latest::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_received{YType::uint64, "packets-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"},
    last_data_time{YType::uint64, "last-data-time"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"}
{

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| bytes_received.is_set
	|| packets_received.is_set
	|| bytes_sent.is_set
	|| packets_sent.is_set
	|| protocol.is_set
	|| last_data_time.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "bytes-received" || name == "packets-received" || name == "bytes-sent" || name == "packets-sent" || name == "protocol" || name == "last-data-time" || name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::InterfacesMibCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "interfaces-mib-counters"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Latest::DataRate::DataRate()
    :
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    bandwidth{YType::uint32, "bandwidth"},
    load_interval{YType::uint32, "load-interval"},
    output_load{YType::uint8, "output-load"},
    input_load{YType::uint8, "input-load"},
    reliability{YType::uint8, "reliability"}
{

    yang_name = "data-rate"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Latest::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::DataRate::has_data() const
{
    if (is_presence_container) return true;
    return input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| bandwidth.is_set
	|| load_interval.is_set
	|| output_load.is_set
	|| input_load.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::DataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter)
	|| ydk::is_set(peak_input_data_rate.yfilter)
	|| ydk::is_set(peak_input_packet_rate.yfilter)
	|| ydk::is_set(peak_output_data_rate.yfilter)
	|| ydk::is_set(peak_output_packet_rate.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(output_load.yfilter)
	|| ydk::is_set(input_load.yfilter)
	|| ydk::is_set(reliability.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Latest::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Latest::DataRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.yfilter)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.yfilter)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.yfilter)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.yfilter)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.yfilter)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.yfilter)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Latest::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Latest::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Latest::DataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
        peak_input_data_rate.value_namespace = name_space;
        peak_input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
        peak_input_packet_rate.value_namespace = name_space;
        peak_input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
        peak_output_data_rate.value_namespace = name_space;
        peak_output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
        peak_output_packet_rate.value_namespace = name_space;
        peak_output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-load")
    {
        output_load = value;
        output_load.value_namespace = name_space;
        output_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-load")
    {
        input_load = value;
        input_load.value_namespace = name_space;
        input_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Latest::DataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "output-load")
    {
        output_load.yfilter = yfilter;
    }
    if(value_path == "input-load")
    {
        input_load.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Latest::DataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate" || name == "peak-input-data-rate" || name == "peak-input-packet-rate" || name == "peak-output-data-rate" || name == "peak-output-packet-rate" || name == "bandwidth" || name == "load-interval" || name == "output-load" || name == "input-load" || name == "reliability")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Latest::GenericCounters::GenericCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "generic-counters"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Latest::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Latest::GenericCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::Latest::GenericCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Latest::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Latest::GenericCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Latest::GenericCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Latest::GenericCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Total::Total()
    :
    protocols(std::make_shared<InfraStatistics::Interfaces::Interface::Total::Protocols>())
    , interfaces_mib_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters>())
    , data_rate(std::make_shared<InfraStatistics::Interfaces::Interface::Total::DataRate>())
    , generic_counters(std::make_shared<InfraStatistics::Interfaces::Interface::Total::GenericCounters>())
{
    protocols->parent = this;
    interfaces_mib_counters->parent = this;
    data_rate->parent = this;
    generic_counters->parent = this;

    yang_name = "total"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Total::~Total()
{
}

bool InfraStatistics::Interfaces::Interface::Total::has_data() const
{
    if (is_presence_container) return true;
    return (protocols !=  nullptr && protocols->has_data())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_data())
	|| (data_rate !=  nullptr && data_rate->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data());
}

bool InfraStatistics::Interfaces::Interface::Total::has_operation() const
{
    return is_set(yfilter)
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (interfaces_mib_counters !=  nullptr && interfaces_mib_counters->has_operation())
	|| (data_rate !=  nullptr && data_rate->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation());
}

std::string InfraStatistics::Interfaces::Interface::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<InfraStatistics::Interfaces::Interface::Total::Protocols>();
        }
        return protocols;
    }

    if(child_yang_name == "interfaces-mib-counters")
    {
        if(interfaces_mib_counters == nullptr)
        {
            interfaces_mib_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters>();
        }
        return interfaces_mib_counters;
    }

    if(child_yang_name == "data-rate")
    {
        if(data_rate == nullptr)
        {
            data_rate = std::make_shared<InfraStatistics::Interfaces::Interface::Total::DataRate>();
        }
        return data_rate;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<InfraStatistics::Interfaces::Interface::Total::GenericCounters>();
        }
        return generic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocols != nullptr)
    {
        _children["protocols"] = protocols;
    }

    if(interfaces_mib_counters != nullptr)
    {
        _children["interfaces-mib-counters"] = interfaces_mib_counters;
    }

    if(data_rate != nullptr)
    {
        _children["data-rate"] = data_rate;
    }

    if(generic_counters != nullptr)
    {
        _children["generic-counters"] = generic_counters;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::Interface::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::Interface::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols" || name == "interfaces-mib-counters" || name == "data-rate" || name == "generic-counters")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Total::Protocols::Protocols()
    :
    protocol(this, {"protocol_name"})
{

    yang_name = "protocols"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Total::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Total::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Total::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Total::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Total::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::Total::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::Interface::Total::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_received{YType::uint64, "packets-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"},
    last_data_time{YType::uint64, "last-data-time"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"}
{

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| bytes_received.is_set
	|| packets_received.is_set
	|| bytes_sent.is_set
	|| packets_sent.is_set
	|| protocol.is_set
	|| last_data_time.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "bytes-received" || name == "packets-received" || name == "bytes-sent" || name == "packets-sent" || name == "protocol" || name == "last-data-time" || name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::InterfacesMibCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "interfaces-mib-counters"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Total::DataRate::DataRate()
    :
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    bandwidth{YType::uint32, "bandwidth"},
    load_interval{YType::uint32, "load-interval"},
    output_load{YType::uint8, "output-load"},
    input_load{YType::uint8, "input-load"},
    reliability{YType::uint8, "reliability"}
{

    yang_name = "data-rate"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Total::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::Total::DataRate::has_data() const
{
    if (is_presence_container) return true;
    return input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| bandwidth.is_set
	|| load_interval.is_set
	|| output_load.is_set
	|| input_load.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::DataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter)
	|| ydk::is_set(peak_input_data_rate.yfilter)
	|| ydk::is_set(peak_input_packet_rate.yfilter)
	|| ydk::is_set(peak_output_data_rate.yfilter)
	|| ydk::is_set(peak_output_packet_rate.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(output_load.yfilter)
	|| ydk::is_set(input_load.yfilter)
	|| ydk::is_set(reliability.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Total::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Total::DataRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.yfilter)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.yfilter)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.yfilter)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.yfilter)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.yfilter)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.yfilter)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Total::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Total::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Total::DataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
        peak_input_data_rate.value_namespace = name_space;
        peak_input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
        peak_input_packet_rate.value_namespace = name_space;
        peak_input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
        peak_output_data_rate.value_namespace = name_space;
        peak_output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
        peak_output_packet_rate.value_namespace = name_space;
        peak_output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-load")
    {
        output_load = value;
        output_load.value_namespace = name_space;
        output_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-load")
    {
        input_load = value;
        input_load.value_namespace = name_space;
        input_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Total::DataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "output-load")
    {
        output_load.yfilter = yfilter;
    }
    if(value_path == "input-load")
    {
        input_load.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Total::DataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate" || name == "peak-input-data-rate" || name == "peak-input-packet-rate" || name == "peak-output-data-rate" || name == "peak-output-packet-rate" || name == "bandwidth" || name == "load-interval" || name == "output-load" || name == "input-load" || name == "reliability")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Total::GenericCounters::GenericCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "generic-counters"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Total::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::Total::GenericCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::Total::GenericCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Total::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Total::GenericCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Total::GenericCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Total::GenericCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Protocols::Protocols()
    :
    protocol(this, {"protocol_name"})
{

    yang_name = "protocols"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Protocols::~Protocols()
{
}

bool InfraStatistics::Interfaces::Interface::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InfraStatistics::Interfaces::Interface::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<InfraStatistics::Interfaces::Interface::Protocols::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InfraStatistics::Interfaces::Interface::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InfraStatistics::Interfaces::Interface::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InfraStatistics::Interfaces::Interface::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::str, "protocol-name"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_received{YType::uint64, "packets-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    packets_sent{YType::uint64, "packets-sent"},
    protocol{YType::uint32, "protocol"},
    last_data_time{YType::uint64, "last-data-time"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"}
{

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::Protocols::Protocol::~Protocol()
{
}

bool InfraStatistics::Interfaces::Interface::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol_name.is_set
	|| bytes_received.is_set
	|| packets_received.is_set
	|| bytes_sent.is_set
	|| packets_sent.is_set
	|| protocol.is_set
	|| last_data_time.is_set
	|| input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set;
}

bool InfraStatistics::Interfaces::Interface::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "bytes-received" || name == "packets-received" || name == "bytes-sent" || name == "packets-sent" || name == "protocol" || name == "last-data-time" || name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::InterfacesMibCounters::InterfacesMibCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "interfaces-mib-counters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::InterfacesMibCounters::~InterfacesMibCounters()
{
}

bool InfraStatistics::Interfaces::Interface::InterfacesMibCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::InterfacesMibCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-mib-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::InterfacesMibCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::InterfacesMibCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::InterfacesMibCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::InterfacesMibCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::DataRate::DataRate()
    :
    input_data_rate{YType::uint64, "input-data-rate"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    bandwidth{YType::uint32, "bandwidth"},
    load_interval{YType::uint32, "load-interval"},
    output_load{YType::uint8, "output-load"},
    input_load{YType::uint8, "input-load"},
    reliability{YType::uint8, "reliability"}
{

    yang_name = "data-rate"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::DataRate::~DataRate()
{
}

bool InfraStatistics::Interfaces::Interface::DataRate::has_data() const
{
    if (is_presence_container) return true;
    return input_data_rate.is_set
	|| input_packet_rate.is_set
	|| output_data_rate.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| bandwidth.is_set
	|| load_interval.is_set
	|| output_load.is_set
	|| input_load.is_set
	|| reliability.is_set;
}

bool InfraStatistics::Interfaces::Interface::DataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter)
	|| ydk::is_set(peak_input_data_rate.yfilter)
	|| ydk::is_set(peak_input_packet_rate.yfilter)
	|| ydk::is_set(peak_output_data_rate.yfilter)
	|| ydk::is_set(peak_output_packet_rate.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(output_load.yfilter)
	|| ydk::is_set(input_load.yfilter)
	|| ydk::is_set(reliability.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::DataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::DataRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.yfilter)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.yfilter)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.yfilter)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.yfilter)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.yfilter)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.yfilter)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::DataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::DataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::DataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
        peak_input_data_rate.value_namespace = name_space;
        peak_input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
        peak_input_packet_rate.value_namespace = name_space;
        peak_input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
        peak_output_data_rate.value_namespace = name_space;
        peak_output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
        peak_output_packet_rate.value_namespace = name_space;
        peak_output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-load")
    {
        output_load = value;
        output_load.value_namespace = name_space;
        output_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-load")
    {
        input_load = value;
        input_load.value_namespace = name_space;
        input_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::DataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "output-load")
    {
        output_load.yfilter = yfilter;
    }
    if(value_path == "input-load")
    {
        input_load.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::DataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-data-rate" || name == "input-packet-rate" || name == "output-data-rate" || name == "output-packet-rate" || name == "peak-input-data-rate" || name == "peak-input-packet-rate" || name == "peak-output-data-rate" || name == "peak-output-packet-rate" || name == "bandwidth" || name == "load-interval" || name == "output-load" || name == "input-load" || name == "reliability")
        return true;
    return false;
}

InfraStatistics::Interfaces::Interface::GenericCounters::GenericCounters()
    :
    packets_received{YType::uint64, "packets-received"},
    bytes_received{YType::uint64, "bytes-received"},
    packets_sent{YType::uint64, "packets-sent"},
    bytes_sent{YType::uint64, "bytes-sent"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    output_drops{YType::uint32, "output-drops"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    input_drops{YType::uint32, "input-drops"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"},
    input_errors{YType::uint32, "input-errors"},
    crc_errors{YType::uint32, "crc-errors"},
    input_overruns{YType::uint32, "input-overruns"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_aborts{YType::uint32, "input-aborts"},
    output_errors{YType::uint32, "output-errors"},
    output_underruns{YType::uint32, "output-underruns"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    applique{YType::uint32, "applique"},
    resets{YType::uint32, "resets"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    availability_flag{YType::uint32, "availability-flag"},
    last_data_time{YType::uint32, "last-data-time"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"}
{

    yang_name = "generic-counters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

InfraStatistics::Interfaces::Interface::GenericCounters::~GenericCounters()
{
}

bool InfraStatistics::Interfaces::Interface::GenericCounters::has_data() const
{
    if (is_presence_container) return true;
    return packets_received.is_set
	|| bytes_received.is_set
	|| packets_sent.is_set
	|| bytes_sent.is_set
	|| multicast_packets_received.is_set
	|| broadcast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| broadcast_packets_sent.is_set
	|| output_drops.is_set
	|| output_queue_drops.is_set
	|| input_drops.is_set
	|| input_queue_drops.is_set
	|| runt_packets_received.is_set
	|| giant_packets_received.is_set
	|| throttled_packets_received.is_set
	|| parity_packets_received.is_set
	|| unknown_protocol_packets_received.is_set
	|| input_errors.is_set
	|| crc_errors.is_set
	|| input_overruns.is_set
	|| framing_errors_received.is_set
	|| input_ignored_packets.is_set
	|| input_aborts.is_set
	|| output_errors.is_set
	|| output_underruns.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| applique.is_set
	|| resets.is_set
	|| carrier_transitions.is_set
	|| availability_flag.is_set
	|| last_data_time.is_set
	|| seconds_since_last_clear_counters.is_set
	|| last_discontinuity_time.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set;
}

bool InfraStatistics::Interfaces::Interface::GenericCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter);
}

std::string InfraStatistics::Interfaces::Interface::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InfraStatistics::Interfaces::Interface::GenericCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InfraStatistics::Interfaces::Interface::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InfraStatistics::Interfaces::Interface::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InfraStatistics::Interfaces::Interface::GenericCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
}

void InfraStatistics::Interfaces::Interface::GenericCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
}

bool InfraStatistics::Interfaces::Interface::GenericCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets-received" || name == "bytes-received" || name == "packets-sent" || name == "bytes-sent" || name == "multicast-packets-received" || name == "broadcast-packets-received" || name == "multicast-packets-sent" || name == "broadcast-packets-sent" || name == "output-drops" || name == "output-queue-drops" || name == "input-drops" || name == "input-queue-drops" || name == "runt-packets-received" || name == "giant-packets-received" || name == "throttled-packets-received" || name == "parity-packets-received" || name == "unknown-protocol-packets-received" || name == "input-errors" || name == "crc-errors" || name == "input-overruns" || name == "framing-errors-received" || name == "input-ignored-packets" || name == "input-aborts" || name == "output-errors" || name == "output-underruns" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "applique" || name == "resets" || name == "carrier-transitions" || name == "availability-flag" || name == "last-data-time" || name == "seconds-since-last-clear-counters" || name == "last-discontinuity-time" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent")
        return true;
    return false;
}


}
}

