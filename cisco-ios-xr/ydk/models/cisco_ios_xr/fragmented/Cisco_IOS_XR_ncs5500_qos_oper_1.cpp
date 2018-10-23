
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5500_qos_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_qos_oper {

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_match_type.yfilter)
	|| ydk::is_set(hardware_min_threshold_bytes.yfilter)
	|| ydk::is_set(hardware_max_threshold_bytes.yfilter)
	|| ydk::is_set(first_segment.yfilter)
	|| ydk::is_set(segment_size.yfilter)
	|| (wred_match_value !=  nullptr && wred_match_value->has_operation())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_operation())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_operation());
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wred_match_value != nullptr)
    {
        _children["wred-match-value"] = wred_match_value;
    }

    if(config_min_threshold != nullptr)
    {
        _children["config-min-threshold"] = config_min_threshold;
    }

    if(config_max_threshold != nullptr)
    {
        _children["config-max-threshold"] = config_max_threshold;
    }

    return _children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
        wred_match_type.value_namespace = name_space;
        wred_match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
        hardware_min_threshold_bytes.value_namespace = name_space;
        hardware_min_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
        hardware_max_threshold_bytes.value_namespace = name_space;
        hardware_max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-segment")
    {
        first_segment = value;
        first_segment.value_namespace = name_space;
        first_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
        segment_size.value_namespace = name_space;
        segment_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type.yfilter = yfilter;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "first-segment")
    {
        first_segment.yfilter = yfilter;
    }
    if(value_path == "segment-size")
    {
        segment_size.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        ent_->parent = this;
        dnx_qosea_show_red_match_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dnx_qosea_show_red_match_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingles()
    :
    bundle_interface_single(this, {"interface_name"})
{

    yang_name = "bundle-interface-singles"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::~BundleInterfaceSingles()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_interface_single.len(); index++)
    {
        if(bundle_interface_single[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface_single.len(); index++)
    {
        if(bundle_interface_single[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface-singles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface-single")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle>();
        ent_->parent = this;
        bundle_interface_single.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_interface_single.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface-single")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::BundleInterfaceSingle()
    :
    interface_name{YType::str, "interface-name"}
        ,
    policy_details(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails>())
    , member_interfaces(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces>())
    , class_table(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable>())
{
    policy_details->parent = this;
    member_interfaces->parent = this;
    class_table->parent = this;

    yang_name = "bundle-interface-single"; yang_parent_name = "bundle-interface-singles"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::~BundleInterfaceSingle()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (member_interfaces !=  nullptr && member_interfaces->has_data())
	|| (class_table !=  nullptr && class_table->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation())
	|| (class_table !=  nullptr && class_table->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface-single";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-details")
    {
        if(policy_details == nullptr)
        {
            policy_details = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails>();
        }
        return policy_details;
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces == nullptr)
        {
            member_interfaces = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces>();
        }
        return member_interfaces;
    }

    if(child_yang_name == "class-table")
    {
        if(class_table == nullptr)
        {
            class_table = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable>();
        }
        return class_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_details != nullptr)
    {
        _children["policy-details"] = policy_details;
    }

    if(member_interfaces != nullptr)
    {
        _children["member-interfaces"] = member_interfaces;
    }

    if(class_table != nullptr)
    {
        _children["class-table"] = class_table;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-details" || name == "member-interfaces" || name == "class-table" || name == "interface-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::PolicyDetails()
    :
    npu_id{YType::uint32, "npu-id"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
    policy_name{YType::str, "policy-name"},
    total_number_of_classes{YType::uint16, "total-number-of-classes"},
    voq_base_address{YType::uint32, "voq-base-address"},
    voq_stats_handle{YType::uint64, "voq-stats-handle"},
    stats_accounting_type{YType::enumeration, "stats-accounting-type"},
    policy_status{YType::enumeration, "policy-status"},
    interface_status{YType::enumeration, "interface-status"}
{

    yang_name = "policy-details"; yang_parent_name = "bundle-interface-single"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::has_data() const
{
    if (is_presence_container) return true;
    return npu_id.is_set
	|| interface_handle.is_set
	|| interface_bandwidth_kbps.is_set
	|| policy_name.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set
	|| stats_accounting_type.is_set
	|| policy_status.is_set
	|| interface_status.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_bandwidth_kbps.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(total_number_of_classes.yfilter)
	|| ydk::is_set(voq_base_address.yfilter)
	|| ydk::is_set(voq_stats_handle.yfilter)
	|| ydk::is_set(stats_accounting_type.yfilter)
	|| ydk::is_set(policy_status.yfilter)
	|| ydk::is_set(interface_status.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.yfilter)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.yfilter)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.yfilter)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.yfilter)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.yfilter)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.yfilter)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.yfilter)) leaf_name_data.push_back(interface_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
        interface_bandwidth_kbps.value_namespace = name_space;
        interface_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
        total_number_of_classes.value_namespace = name_space;
        total_number_of_classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
        voq_base_address.value_namespace = name_space;
        voq_base_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
        voq_stats_handle.value_namespace = name_space;
        voq_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
        stats_accounting_type.value_namespace = name_space;
        stats_accounting_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
        policy_status.value_namespace = name_space;
        policy_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
        interface_status.value_namespace = name_space;
        interface_status.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes.yfilter = yfilter;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address.yfilter = yfilter;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle.yfilter = yfilter;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type.yfilter = yfilter;
    }
    if(value_path == "policy-status")
    {
        policy_status.yfilter = yfilter;
    }
    if(value_path == "interface-status")
    {
        interface_status.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-id" || name == "interface-handle" || name == "interface-bandwidth-kbps" || name == "policy-name" || name == "total-number-of-classes" || name == "voq-base-address" || name == "voq-stats-handle" || name == "stats-accounting-type" || name == "policy-status" || name == "interface-status")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterfaces()
    :
    member_interface(this, {"interface_name"})
{

    yang_name = "member-interfaces"; yang_parent_name = "bundle-interface-single"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_interface.len(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.len(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-interface")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface>();
        ent_->parent = this;
        member_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::MemberInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    policy_details(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails>())
    , class_table(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable>())
{
    policy_details->parent = this;
    class_table->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (class_table !=  nullptr && class_table->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (class_table !=  nullptr && class_table->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-details")
    {
        if(policy_details == nullptr)
        {
            policy_details = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails>();
        }
        return policy_details;
    }

    if(child_yang_name == "class-table")
    {
        if(class_table == nullptr)
        {
            class_table = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable>();
        }
        return class_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_details != nullptr)
    {
        _children["policy-details"] = policy_details;
    }

    if(class_table != nullptr)
    {
        _children["class-table"] = class_table;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-details" || name == "class-table" || name == "interface-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::PolicyDetails()
    :
    npu_id{YType::uint32, "npu-id"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
    policy_name{YType::str, "policy-name"},
    total_number_of_classes{YType::uint16, "total-number-of-classes"},
    voq_base_address{YType::uint32, "voq-base-address"},
    voq_stats_handle{YType::uint64, "voq-stats-handle"},
    stats_accounting_type{YType::enumeration, "stats-accounting-type"},
    policy_status{YType::enumeration, "policy-status"},
    interface_status{YType::enumeration, "interface-status"}
{

    yang_name = "policy-details"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::has_data() const
{
    if (is_presence_container) return true;
    return npu_id.is_set
	|| interface_handle.is_set
	|| interface_bandwidth_kbps.is_set
	|| policy_name.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set
	|| stats_accounting_type.is_set
	|| policy_status.is_set
	|| interface_status.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_bandwidth_kbps.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(total_number_of_classes.yfilter)
	|| ydk::is_set(voq_base_address.yfilter)
	|| ydk::is_set(voq_stats_handle.yfilter)
	|| ydk::is_set(stats_accounting_type.yfilter)
	|| ydk::is_set(policy_status.yfilter)
	|| ydk::is_set(interface_status.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.yfilter)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.yfilter)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.yfilter)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.yfilter)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.yfilter)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.yfilter)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.yfilter)) leaf_name_data.push_back(interface_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
        interface_bandwidth_kbps.value_namespace = name_space;
        interface_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
        total_number_of_classes.value_namespace = name_space;
        total_number_of_classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
        voq_base_address.value_namespace = name_space;
        voq_base_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
        voq_stats_handle.value_namespace = name_space;
        voq_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
        stats_accounting_type.value_namespace = name_space;
        stats_accounting_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
        policy_status.value_namespace = name_space;
        policy_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
        interface_status.value_namespace = name_space;
        interface_status.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes.yfilter = yfilter;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address.yfilter = yfilter;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle.yfilter = yfilter;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type.yfilter = yfilter;
    }
    if(value_path == "policy-status")
    {
        policy_status.yfilter = yfilter;
    }
    if(value_path == "interface-status")
    {
        interface_status.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-id" || name == "interface-handle" || name == "interface-bandwidth-kbps" || name == "policy-name" || name == "total-number-of-classes" || name == "voq-base-address" || name == "voq-stats-handle" || name == "stats-accounting-type" || name == "policy-status" || name == "interface-status")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::ClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "class-table"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::~ClassTable()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Class()
    :
    level_one_class_name{YType::str, "level-one-class-name"},
    level_two_class_name{YType::str, "level-two-class-name"},
    class_level{YType::enumeration, "class-level"},
    egress_queue_id{YType::int32, "egress-queue-id"},
    queue_type{YType::enumeration, "queue-type"},
    priority_level{YType::enumeration, "priority-level"},
    hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
    hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
    config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
    config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
    hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
    network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
    hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
    hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
    policer_bucket_id{YType::uint32, "policer-bucket-id"},
    policer_stats_handle{YType::uint64, "policer-stats-handle"},
    hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
    hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
    hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
    hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"}
        ,
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
{
    config_max_rate->parent = this;
    config_min_rate->parent = this;
    config_queue_limit->parent = this;
    config_policer_average_rate->parent = this;
    config_policer_peak_rate->parent = this;
    config_policer_conform_burst->parent = this;
    config_policer_excess_burst->parent = this;
    conform_action->parent = this;
    exceed_action->parent = this;
    violate_action->parent = this;

    yang_name = "class"; yang_parent_name = "class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| level_two_class_name.is_set
	|| class_level.is_set
	|| egress_queue_id.is_set
	|| queue_type.is_set
	|| priority_level.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| network_min_bandwidth_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level_one_class_name.yfilter)
	|| ydk::is_set(level_two_class_name.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(egress_queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(hardware_max_rate_kbps.yfilter)
	|| ydk::is_set(hardware_min_rate_kbps.yfilter)
	|| ydk::is_set(config_excess_bandwidth_percent.yfilter)
	|| ydk::is_set(config_excess_bandwidth_unit.yfilter)
	|| ydk::is_set(hardware_excess_bandwidth_weight.yfilter)
	|| ydk::is_set(network_min_bandwidth_kbps.yfilter)
	|| ydk::is_set(hardware_queue_limit_bytes.yfilter)
	|| ydk::is_set(hardware_queue_limit_microseconds.yfilter)
	|| ydk::is_set(policer_bucket_id.yfilter)
	|| ydk::is_set(policer_stats_handle.yfilter)
	|| ydk::is_set(hardware_policer_average_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_peak_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_conform_burst_bytes.yfilter)
	|| ydk::is_set(hardware_policer_excess_burst_bytes.yfilter)
	|| (config_max_rate !=  nullptr && config_max_rate->has_operation())
	|| (config_min_rate !=  nullptr && config_min_rate->has_operation())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_operation())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_operation())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_operation())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_operation())
	|| (conform_action !=  nullptr && conform_action->has_operation())
	|| (exceed_action !=  nullptr && exceed_action->has_operation())
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.yfilter)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.yfilter)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.yfilter)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.yfilter)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.yfilter)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.yfilter)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.yfilter)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.yfilter)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.yfilter)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark>();
        ent_->parent = this;
        ip_mark.append(ent_);
        return ent_;
    }

    if(child_yang_name == "common-mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark>();
        ent_->parent = this;
        common_mark.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark>();
        ent_->parent = this;
        mpls_mark.append(ent_);
        return ent_;
    }

    if(child_yang_name == "wred")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred>();
        ent_->parent = this;
        wred.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_max_rate != nullptr)
    {
        _children["config-max-rate"] = config_max_rate;
    }

    if(config_min_rate != nullptr)
    {
        _children["config-min-rate"] = config_min_rate;
    }

    if(config_queue_limit != nullptr)
    {
        _children["config-queue-limit"] = config_queue_limit;
    }

    if(config_policer_average_rate != nullptr)
    {
        _children["config-policer-average-rate"] = config_policer_average_rate;
    }

    if(config_policer_peak_rate != nullptr)
    {
        _children["config-policer-peak-rate"] = config_policer_peak_rate;
    }

    if(config_policer_conform_burst != nullptr)
    {
        _children["config-policer-conform-burst"] = config_policer_conform_burst;
    }

    if(config_policer_excess_burst != nullptr)
    {
        _children["config-policer-excess-burst"] = config_policer_excess_burst;
    }

    if(conform_action != nullptr)
    {
        _children["conform-action"] = conform_action;
    }

    if(exceed_action != nullptr)
    {
        _children["exceed-action"] = exceed_action;
    }

    if(violate_action != nullptr)
    {
        _children["violate-action"] = violate_action;
    }

    count_ = 0;
    for (auto ent_ : ip_mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : common_mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mpls_mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : wred.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
        level_one_class_name.value_namespace = name_space;
        level_one_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
        level_two_class_name.value_namespace = name_space;
        level_two_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
        egress_queue_id.value_namespace = name_space;
        egress_queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
        hardware_max_rate_kbps.value_namespace = name_space;
        hardware_max_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
        hardware_min_rate_kbps.value_namespace = name_space;
        hardware_min_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
        config_excess_bandwidth_percent.value_namespace = name_space;
        config_excess_bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
        config_excess_bandwidth_unit.value_namespace = name_space;
        config_excess_bandwidth_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
        hardware_excess_bandwidth_weight.value_namespace = name_space;
        hardware_excess_bandwidth_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
        network_min_bandwidth_kbps.value_namespace = name_space;
        network_min_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
        hardware_queue_limit_bytes.value_namespace = name_space;
        hardware_queue_limit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
        hardware_queue_limit_microseconds.value_namespace = name_space;
        hardware_queue_limit_microseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
        policer_bucket_id.value_namespace = name_space;
        policer_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
        policer_stats_handle.value_namespace = name_space;
        policer_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
        hardware_policer_average_rate_kbps.value_namespace = name_space;
        hardware_policer_average_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
        hardware_policer_peak_rate_kbps.value_namespace = name_space;
        hardware_policer_peak_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
        hardware_policer_conform_burst_bytes.value_namespace = name_space;
        hardware_policer_conform_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
        hardware_policer_excess_burst_bytes.value_namespace = name_space;
        hardware_policer_excess_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name.yfilter = yfilter;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit.yfilter = yfilter;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight.yfilter = yfilter;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds.yfilter = yfilter;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id.yfilter = yfilter;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark>();
        ent_->parent = this;
        mark.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark>();
        ent_->parent = this;
        mark.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark>();
        ent_->parent = this;
        mark.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_match_type.yfilter)
	|| ydk::is_set(hardware_min_threshold_bytes.yfilter)
	|| ydk::is_set(hardware_max_threshold_bytes.yfilter)
	|| ydk::is_set(first_segment.yfilter)
	|| ydk::is_set(segment_size.yfilter)
	|| (wred_match_value !=  nullptr && wred_match_value->has_operation())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_operation())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wred_match_value != nullptr)
    {
        _children["wred-match-value"] = wred_match_value;
    }

    if(config_min_threshold != nullptr)
    {
        _children["config-min-threshold"] = config_min_threshold;
    }

    if(config_max_threshold != nullptr)
    {
        _children["config-max-threshold"] = config_max_threshold;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
        wred_match_type.value_namespace = name_space;
        wred_match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
        hardware_min_threshold_bytes.value_namespace = name_space;
        hardware_min_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
        hardware_max_threshold_bytes.value_namespace = name_space;
        hardware_max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-segment")
    {
        first_segment = value;
        first_segment.value_namespace = name_space;
        first_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
        segment_size.value_namespace = name_space;
        segment_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type.yfilter = yfilter;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "first-segment")
    {
        first_segment.yfilter = yfilter;
    }
    if(value_path == "segment-size")
    {
        segment_size.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        ent_->parent = this;
        dnx_qosea_show_red_match_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dnx_qosea_show_red_match_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::ClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "class-table"; yang_parent_name = "bundle-interface-single"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::~ClassTable()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Class()
    :
    level_one_class_name{YType::str, "level-one-class-name"},
    level_two_class_name{YType::str, "level-two-class-name"},
    class_level{YType::enumeration, "class-level"},
    egress_queue_id{YType::int32, "egress-queue-id"},
    queue_type{YType::enumeration, "queue-type"},
    priority_level{YType::enumeration, "priority-level"},
    hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
    hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
    config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
    config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
    hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
    network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
    hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
    hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
    policer_bucket_id{YType::uint32, "policer-bucket-id"},
    policer_stats_handle{YType::uint64, "policer-stats-handle"},
    hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
    hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
    hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
    hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"}
        ,
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
{
    config_max_rate->parent = this;
    config_min_rate->parent = this;
    config_queue_limit->parent = this;
    config_policer_average_rate->parent = this;
    config_policer_peak_rate->parent = this;
    config_policer_conform_burst->parent = this;
    config_policer_excess_burst->parent = this;
    conform_action->parent = this;
    exceed_action->parent = this;
    violate_action->parent = this;

    yang_name = "class"; yang_parent_name = "class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| level_two_class_name.is_set
	|| class_level.is_set
	|| egress_queue_id.is_set
	|| queue_type.is_set
	|| priority_level.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| network_min_bandwidth_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level_one_class_name.yfilter)
	|| ydk::is_set(level_two_class_name.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(egress_queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(hardware_max_rate_kbps.yfilter)
	|| ydk::is_set(hardware_min_rate_kbps.yfilter)
	|| ydk::is_set(config_excess_bandwidth_percent.yfilter)
	|| ydk::is_set(config_excess_bandwidth_unit.yfilter)
	|| ydk::is_set(hardware_excess_bandwidth_weight.yfilter)
	|| ydk::is_set(network_min_bandwidth_kbps.yfilter)
	|| ydk::is_set(hardware_queue_limit_bytes.yfilter)
	|| ydk::is_set(hardware_queue_limit_microseconds.yfilter)
	|| ydk::is_set(policer_bucket_id.yfilter)
	|| ydk::is_set(policer_stats_handle.yfilter)
	|| ydk::is_set(hardware_policer_average_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_peak_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_conform_burst_bytes.yfilter)
	|| ydk::is_set(hardware_policer_excess_burst_bytes.yfilter)
	|| (config_max_rate !=  nullptr && config_max_rate->has_operation())
	|| (config_min_rate !=  nullptr && config_min_rate->has_operation())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_operation())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_operation())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_operation())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_operation())
	|| (conform_action !=  nullptr && conform_action->has_operation())
	|| (exceed_action !=  nullptr && exceed_action->has_operation())
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.yfilter)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.yfilter)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.yfilter)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.yfilter)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.yfilter)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.yfilter)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.yfilter)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.yfilter)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.yfilter)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark>();
        ent_->parent = this;
        ip_mark.append(ent_);
        return ent_;
    }

    if(child_yang_name == "common-mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark>();
        ent_->parent = this;
        common_mark.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark>();
        ent_->parent = this;
        mpls_mark.append(ent_);
        return ent_;
    }

    if(child_yang_name == "wred")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred>();
        ent_->parent = this;
        wred.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_max_rate != nullptr)
    {
        _children["config-max-rate"] = config_max_rate;
    }

    if(config_min_rate != nullptr)
    {
        _children["config-min-rate"] = config_min_rate;
    }

    if(config_queue_limit != nullptr)
    {
        _children["config-queue-limit"] = config_queue_limit;
    }

    if(config_policer_average_rate != nullptr)
    {
        _children["config-policer-average-rate"] = config_policer_average_rate;
    }

    if(config_policer_peak_rate != nullptr)
    {
        _children["config-policer-peak-rate"] = config_policer_peak_rate;
    }

    if(config_policer_conform_burst != nullptr)
    {
        _children["config-policer-conform-burst"] = config_policer_conform_burst;
    }

    if(config_policer_excess_burst != nullptr)
    {
        _children["config-policer-excess-burst"] = config_policer_excess_burst;
    }

    if(conform_action != nullptr)
    {
        _children["conform-action"] = conform_action;
    }

    if(exceed_action != nullptr)
    {
        _children["exceed-action"] = exceed_action;
    }

    if(violate_action != nullptr)
    {
        _children["violate-action"] = violate_action;
    }

    count_ = 0;
    for (auto ent_ : ip_mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : common_mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mpls_mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : wred.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
        level_one_class_name.value_namespace = name_space;
        level_one_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
        level_two_class_name.value_namespace = name_space;
        level_two_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
        egress_queue_id.value_namespace = name_space;
        egress_queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
        hardware_max_rate_kbps.value_namespace = name_space;
        hardware_max_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
        hardware_min_rate_kbps.value_namespace = name_space;
        hardware_min_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
        config_excess_bandwidth_percent.value_namespace = name_space;
        config_excess_bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
        config_excess_bandwidth_unit.value_namespace = name_space;
        config_excess_bandwidth_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
        hardware_excess_bandwidth_weight.value_namespace = name_space;
        hardware_excess_bandwidth_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
        network_min_bandwidth_kbps.value_namespace = name_space;
        network_min_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
        hardware_queue_limit_bytes.value_namespace = name_space;
        hardware_queue_limit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
        hardware_queue_limit_microseconds.value_namespace = name_space;
        hardware_queue_limit_microseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
        policer_bucket_id.value_namespace = name_space;
        policer_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
        policer_stats_handle.value_namespace = name_space;
        policer_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
        hardware_policer_average_rate_kbps.value_namespace = name_space;
        hardware_policer_average_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
        hardware_policer_peak_rate_kbps.value_namespace = name_space;
        hardware_policer_peak_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
        hardware_policer_conform_burst_bytes.value_namespace = name_space;
        hardware_policer_conform_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
        hardware_policer_excess_burst_bytes.value_namespace = name_space;
        hardware_policer_excess_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name.yfilter = yfilter;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit.yfilter = yfilter;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight.yfilter = yfilter;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds.yfilter = yfilter;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id.yfilter = yfilter;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark>();
        ent_->parent = this;
        mark.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark>();
        ent_->parent = this;
        mark.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark>();
        ent_->parent = this;
        mark.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mark.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_match_type.yfilter)
	|| ydk::is_set(hardware_min_threshold_bytes.yfilter)
	|| ydk::is_set(hardware_max_threshold_bytes.yfilter)
	|| ydk::is_set(first_segment.yfilter)
	|| ydk::is_set(segment_size.yfilter)
	|| (wred_match_value !=  nullptr && wred_match_value->has_operation())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_operation())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wred_match_value != nullptr)
    {
        _children["wred-match-value"] = wred_match_value;
    }

    if(config_min_threshold != nullptr)
    {
        _children["config-min-threshold"] = config_min_threshold;
    }

    if(config_max_threshold != nullptr)
    {
        _children["config-max-threshold"] = config_max_threshold;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
        wred_match_type.value_namespace = name_space;
        wred_match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
        hardware_min_threshold_bytes.value_namespace = name_space;
        hardware_min_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
        hardware_max_threshold_bytes.value_namespace = name_space;
        hardware_max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-segment")
    {
        first_segment = value;
        first_segment.value_namespace = name_space;
        first_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
        segment_size.value_namespace = name_space;
        segment_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type.yfilter = yfilter;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "first-segment")
    {
        first_segment.yfilter = yfilter;
    }
    if(value_path == "segment-size")
    {
        segment_size.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        ent_->parent = this;
        dnx_qosea_show_red_match_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dnx_qosea_show_red_match_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterfaces()
    :
    remote_interface(this, {"interface_name"})
{

    yang_name = "remote-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::RemoteInterfaces::~RemoteInterfaces()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_interface.len(); index++)
    {
        if(remote_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_operation() const
{
    for (std::size_t index=0; index<remote_interface.len(); index++)
    {
        if(remote_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::RemoteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-interface")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface>();
        ent_->parent = this;
        remote_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::RemoteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-interface")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteInterface()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    virtual_output_queue_statistics_handle{YType::uint64, "virtual-output-queue-statistics-handle"},
    interface_handle{YType::uint32, "interface-handle"},
    number_of_virtual_output_queues{YType::uint32, "number-of-virtual-output-queues"},
    number_of_classes{YType::uint32, "number-of-classes"}
        ,
    remote_class(this, {})
{

    yang_name = "remote-interface"; yang_parent_name = "remote-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::~RemoteInterface()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_class.len(); index++)
    {
        if(remote_class[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| policy_name.is_set
	|| virtual_output_queue_statistics_handle.is_set
	|| interface_handle.is_set
	|| number_of_virtual_output_queues.is_set
	|| number_of_classes.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_operation() const
{
    for (std::size_t index=0; index<remote_class.len(); index++)
    {
        if(remote_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(virtual_output_queue_statistics_handle.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(number_of_virtual_output_queues.yfilter)
	|| ydk::is_set(number_of_classes.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (virtual_output_queue_statistics_handle.is_set || is_set(virtual_output_queue_statistics_handle.yfilter)) leaf_name_data.push_back(virtual_output_queue_statistics_handle.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (number_of_virtual_output_queues.is_set || is_set(number_of_virtual_output_queues.yfilter)) leaf_name_data.push_back(number_of_virtual_output_queues.get_name_leafdata());
    if (number_of_classes.is_set || is_set(number_of_classes.yfilter)) leaf_name_data.push_back(number_of_classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-class")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass>();
        ent_->parent = this;
        remote_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-output-queue-statistics-handle")
    {
        virtual_output_queue_statistics_handle = value;
        virtual_output_queue_statistics_handle.value_namespace = name_space;
        virtual_output_queue_statistics_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-virtual-output-queues")
    {
        number_of_virtual_output_queues = value;
        number_of_virtual_output_queues.value_namespace = name_space;
        number_of_virtual_output_queues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-classes")
    {
        number_of_classes = value;
        number_of_classes.value_namespace = name_space;
        number_of_classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "virtual-output-queue-statistics-handle")
    {
        virtual_output_queue_statistics_handle.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "number-of-virtual-output-queues")
    {
        number_of_virtual_output_queues.yfilter = yfilter;
    }
    if(value_path == "number-of-classes")
    {
        number_of_classes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-class" || name == "interface-name" || name == "policy-name" || name == "virtual-output-queue-statistics-handle" || name == "interface-handle" || name == "number-of-virtual-output-queues" || name == "number-of-classes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::RemoteClass()
    :
    class_name{YType::str, "class-name"},
    class_id{YType::uint32, "class-id"},
    cos_q{YType::uint32, "cos-q"},
    queue_limit{YType::uint32, "queue-limit"},
    hardware_queue_limit{YType::uint32, "hardware-queue-limit"}
        ,
    wred(this, {})
    , hw_wred(this, {})
{

    yang_name = "remote-class"; yang_parent_name = "remote-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::~RemoteClass()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wred.len(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<hw_wred.len(); index++)
    {
        if(hw_wred[index]->has_data())
            return true;
    }
    return class_name.is_set
	|| class_id.is_set
	|| cos_q.is_set
	|| queue_limit.is_set
	|| hardware_queue_limit.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_operation() const
{
    for (std::size_t index=0; index<wred.len(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<hw_wred.len(); index++)
    {
        if(hw_wred[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(class_id.yfilter)
	|| ydk::is_set(cos_q.yfilter)
	|| ydk::is_set(queue_limit.yfilter)
	|| ydk::is_set(hardware_queue_limit.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (class_id.is_set || is_set(class_id.yfilter)) leaf_name_data.push_back(class_id.get_name_leafdata());
    if (cos_q.is_set || is_set(cos_q.yfilter)) leaf_name_data.push_back(cos_q.get_name_leafdata());
    if (queue_limit.is_set || is_set(queue_limit.yfilter)) leaf_name_data.push_back(queue_limit.get_name_leafdata());
    if (hardware_queue_limit.is_set || is_set(hardware_queue_limit.yfilter)) leaf_name_data.push_back(hardware_queue_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred>();
        ent_->parent = this;
        wred.append(ent_);
        return ent_;
    }

    if(child_yang_name == "hw-wred")
    {
        auto ent_ = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred>();
        ent_->parent = this;
        hw_wred.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wred.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : hw_wred.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-id")
    {
        class_id = value;
        class_id.value_namespace = name_space;
        class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-q")
    {
        cos_q = value;
        cos_q.value_namespace = name_space;
        cos_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-limit")
    {
        queue_limit = value;
        queue_limit.value_namespace = name_space;
        queue_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit")
    {
        hardware_queue_limit = value;
        hardware_queue_limit.value_namespace = name_space;
        hardware_queue_limit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "class-id")
    {
        class_id.yfilter = yfilter;
    }
    if(value_path == "cos-q")
    {
        cos_q.yfilter = yfilter;
    }
    if(value_path == "queue-limit")
    {
        queue_limit.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit")
    {
        hardware_queue_limit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred" || name == "hw-wred" || name == "class-name" || name == "class-id" || name == "cos-q" || name == "queue-limit" || name == "hardware-queue-limit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::Wred()
    :
    min_threshold{YType::uint32, "min-threshold"},
    max_threshold{YType::uint32, "max-threshold"},
    drop_probability{YType::uint32, "drop-probability"}
{

    yang_name = "wred"; yang_parent_name = "remote-class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_data() const
{
    if (is_presence_container) return true;
    return min_threshold.is_set
	|| max_threshold.is_set
	|| drop_probability.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(drop_probability.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (drop_probability.is_set || is_set(drop_probability.yfilter)) leaf_name_data.push_back(drop_probability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-probability")
    {
        drop_probability = value;
        drop_probability.value_namespace = name_space;
        drop_probability.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "drop-probability")
    {
        drop_probability.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-threshold" || name == "max-threshold" || name == "drop-probability")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::HwWred()
    :
    min_threshold{YType::uint32, "min-threshold"},
    max_threshold{YType::uint32, "max-threshold"},
    drop_probability{YType::uint32, "drop-probability"}
{

    yang_name = "hw-wred"; yang_parent_name = "remote-class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::~HwWred()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_data() const
{
    if (is_presence_container) return true;
    return min_threshold.is_set
	|| max_threshold.is_set
	|| drop_probability.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(drop_probability.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (drop_probability.is_set || is_set(drop_probability.yfilter)) leaf_name_data.push_back(drop_probability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-probability")
    {
        drop_probability = value;
        drop_probability.value_namespace = name_space;
        drop_probability.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "drop-probability")
    {
        drop_probability.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-threshold" || name == "max-threshold" || name == "drop-probability")
        return true;
    return false;
}


}
}

