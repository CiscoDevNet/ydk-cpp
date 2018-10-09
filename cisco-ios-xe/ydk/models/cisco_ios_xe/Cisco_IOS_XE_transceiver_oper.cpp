
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_transceiver_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_transceiver_oper {

TransceiverOperData::TransceiverOperData()
    :
    transceiver(this, {"name"})
{

    yang_name = "transceiver-oper-data"; yang_parent_name = "Cisco-IOS-XE-transceiver-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

TransceiverOperData::~TransceiverOperData()
{
}

bool TransceiverOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<transceiver.len(); index++)
    {
        if(transceiver[index]->has_data())
            return true;
    }
    return false;
}

bool TransceiverOperData::has_operation() const
{
    for (std::size_t index=0; index<transceiver.len(); index++)
    {
        if(transceiver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TransceiverOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-transceiver-oper:transceiver-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transceiver")
    {
        auto c = std::make_shared<TransceiverOperData::Transceiver>();
        c->parent = this;
        transceiver.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : transceiver.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TransceiverOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TransceiverOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TransceiverOperData::clone_ptr() const
{
    return std::make_shared<TransceiverOperData>();
}

std::string TransceiverOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TransceiverOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TransceiverOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TransceiverOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TransceiverOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transceiver")
        return true;
    return false;
}

TransceiverOperData::Transceiver::Transceiver()
    :
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"},
    present{YType::boolean, "present"},
    identifier{YType::str, "identifier"},
    connector{YType::str, "connector"},
    ethernet_pmd{YType::str, "ethernet-pmd"},
    vendor{YType::str, "vendor"},
    vendor_part{YType::str, "vendor-part"},
    vendor_rev{YType::str, "vendor-rev"},
    serial_no{YType::str, "serial-no"},
    fault_condition{YType::boolean, "fault-condition"},
    date{YType::str, "date"},
    sonet{YType::enumeration, "sonet"},
    otn{YType::enumeration, "otn"},
    internal_temp{YType::str, "internal-temp"}
        ,
    output_power(std::make_shared<TransceiverOperData::Transceiver::OutputPower>())
    , input_power(std::make_shared<TransceiverOperData::Transceiver::InputPower>())
    , laser_bias_current(std::make_shared<TransceiverOperData::Transceiver::LaserBiasCurrent>())
    , xcvr_physical_channel(this, {"index_"})
{
    output_power->parent = this;
    input_power->parent = this;
    laser_bias_current->parent = this;

    yang_name = "transceiver"; yang_parent_name = "transceiver-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

TransceiverOperData::Transceiver::~Transceiver()
{
}

bool TransceiverOperData::Transceiver::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xcvr_physical_channel.len(); index++)
    {
        if(xcvr_physical_channel[index]->has_data())
            return true;
    }
    return name.is_set
	|| enabled.is_set
	|| present.is_set
	|| identifier.is_set
	|| connector.is_set
	|| ethernet_pmd.is_set
	|| vendor.is_set
	|| vendor_part.is_set
	|| vendor_rev.is_set
	|| serial_no.is_set
	|| fault_condition.is_set
	|| date.is_set
	|| sonet.is_set
	|| otn.is_set
	|| internal_temp.is_set
	|| (output_power !=  nullptr && output_power->has_data())
	|| (input_power !=  nullptr && input_power->has_data())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_data());
}

bool TransceiverOperData::Transceiver::has_operation() const
{
    for (std::size_t index=0; index<xcvr_physical_channel.len(); index++)
    {
        if(xcvr_physical_channel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(present.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(connector.yfilter)
	|| ydk::is_set(ethernet_pmd.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(vendor_part.yfilter)
	|| ydk::is_set(vendor_rev.yfilter)
	|| ydk::is_set(serial_no.yfilter)
	|| ydk::is_set(fault_condition.yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(sonet.yfilter)
	|| ydk::is_set(otn.yfilter)
	|| ydk::is_set(internal_temp.yfilter)
	|| (output_power !=  nullptr && output_power->has_operation())
	|| (input_power !=  nullptr && input_power->has_operation())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_operation());
}

std::string TransceiverOperData::Transceiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-transceiver-oper:transceiver-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string TransceiverOperData::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (present.is_set || is_set(present.yfilter)) leaf_name_data.push_back(present.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (connector.is_set || is_set(connector.yfilter)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (ethernet_pmd.is_set || is_set(ethernet_pmd.yfilter)) leaf_name_data.push_back(ethernet_pmd.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (vendor_part.is_set || is_set(vendor_part.yfilter)) leaf_name_data.push_back(vendor_part.get_name_leafdata());
    if (vendor_rev.is_set || is_set(vendor_rev.yfilter)) leaf_name_data.push_back(vendor_rev.get_name_leafdata());
    if (serial_no.is_set || is_set(serial_no.yfilter)) leaf_name_data.push_back(serial_no.get_name_leafdata());
    if (fault_condition.is_set || is_set(fault_condition.yfilter)) leaf_name_data.push_back(fault_condition.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());
    if (otn.is_set || is_set(otn.yfilter)) leaf_name_data.push_back(otn.get_name_leafdata());
    if (internal_temp.is_set || is_set(internal_temp.yfilter)) leaf_name_data.push_back(internal_temp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-power")
    {
        if(output_power == nullptr)
        {
            output_power = std::make_shared<TransceiverOperData::Transceiver::OutputPower>();
        }
        return output_power;
    }

    if(child_yang_name == "input-power")
    {
        if(input_power == nullptr)
        {
            input_power = std::make_shared<TransceiverOperData::Transceiver::InputPower>();
        }
        return input_power;
    }

    if(child_yang_name == "laser-bias-current")
    {
        if(laser_bias_current == nullptr)
        {
            laser_bias_current = std::make_shared<TransceiverOperData::Transceiver::LaserBiasCurrent>();
        }
        return laser_bias_current;
    }

    if(child_yang_name == "xcvr-physical-channel")
    {
        auto c = std::make_shared<TransceiverOperData::Transceiver::XcvrPhysicalChannel>();
        c->parent = this;
        xcvr_physical_channel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output_power != nullptr)
    {
        children["output-power"] = output_power;
    }

    if(input_power != nullptr)
    {
        children["input-power"] = input_power;
    }

    if(laser_bias_current != nullptr)
    {
        children["laser-bias-current"] = laser_bias_current;
    }

    count = 0;
    for (auto c : xcvr_physical_channel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TransceiverOperData::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "present")
    {
        present = value;
        present.value_namespace = name_space;
        present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector")
    {
        connector = value;
        connector.value_namespace = name_space;
        connector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-pmd")
    {
        ethernet_pmd = value;
        ethernet_pmd.value_namespace = name_space;
        ethernet_pmd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-part")
    {
        vendor_part = value;
        vendor_part.value_namespace = name_space;
        vendor_part.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-rev")
    {
        vendor_rev = value;
        vendor_rev.value_namespace = name_space;
        vendor_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-no")
    {
        serial_no = value;
        serial_no.value_namespace = name_space;
        serial_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-condition")
    {
        fault_condition = value;
        fault_condition.value_namespace = name_space;
        fault_condition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn")
    {
        otn = value;
        otn.value_namespace = name_space;
        otn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-temp")
    {
        internal_temp = value;
        internal_temp.value_namespace = name_space;
        internal_temp.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "present")
    {
        present.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "connector")
    {
        connector.yfilter = yfilter;
    }
    if(value_path == "ethernet-pmd")
    {
        ethernet_pmd.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "vendor-part")
    {
        vendor_part.yfilter = yfilter;
    }
    if(value_path == "vendor-rev")
    {
        vendor_rev.yfilter = yfilter;
    }
    if(value_path == "serial-no")
    {
        serial_no.yfilter = yfilter;
    }
    if(value_path == "fault-condition")
    {
        fault_condition.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "sonet")
    {
        sonet.yfilter = yfilter;
    }
    if(value_path == "otn")
    {
        otn.yfilter = yfilter;
    }
    if(value_path == "internal-temp")
    {
        internal_temp.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-power" || name == "input-power" || name == "laser-bias-current" || name == "xcvr-physical-channel" || name == "name" || name == "enabled" || name == "present" || name == "identifier" || name == "connector" || name == "ethernet-pmd" || name == "vendor" || name == "vendor-part" || name == "vendor-rev" || name == "serial-no" || name == "fault-condition" || name == "date" || name == "sonet" || name == "otn" || name == "internal-temp")
        return true;
    return false;
}

TransceiverOperData::Transceiver::OutputPower::OutputPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{

    yang_name = "output-power"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = true; 
}

TransceiverOperData::Transceiver::OutputPower::~OutputPower()
{
}

bool TransceiverOperData::Transceiver::OutputPower::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| max.is_set
	|| min.is_set;
}

bool TransceiverOperData::Transceiver::OutputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string TransceiverOperData::Transceiver::OutputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::OutputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::OutputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::OutputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TransceiverOperData::Transceiver::OutputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::OutputPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::OutputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "max" || name == "min")
        return true;
    return false;
}

TransceiverOperData::Transceiver::InputPower::InputPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{

    yang_name = "input-power"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = true; 
}

TransceiverOperData::Transceiver::InputPower::~InputPower()
{
}

bool TransceiverOperData::Transceiver::InputPower::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| max.is_set
	|| min.is_set;
}

bool TransceiverOperData::Transceiver::InputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string TransceiverOperData::Transceiver::InputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::InputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::InputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::InputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TransceiverOperData::Transceiver::InputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::InputPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::InputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "max" || name == "min")
        return true;
    return false;
}

TransceiverOperData::Transceiver::LaserBiasCurrent::LaserBiasCurrent()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{

    yang_name = "laser-bias-current"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = true; 
}

TransceiverOperData::Transceiver::LaserBiasCurrent::~LaserBiasCurrent()
{
}

bool TransceiverOperData::Transceiver::LaserBiasCurrent::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| max.is_set
	|| min.is_set;
}

bool TransceiverOperData::Transceiver::LaserBiasCurrent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string TransceiverOperData::Transceiver::LaserBiasCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-bias-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::LaserBiasCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::LaserBiasCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::LaserBiasCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TransceiverOperData::Transceiver::LaserBiasCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::LaserBiasCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::LaserBiasCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "max" || name == "min")
        return true;
    return false;
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::XcvrPhysicalChannel()
    :
    index_{YType::uint16, "index"},
    description{YType::str, "description"},
    tx_laser{YType::boolean, "tx-laser"},
    target_output_power{YType::str, "target-output-power"},
    output_frequency{YType::uint64, "output-frequency"}
        ,
    output_power(std::make_shared<TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower>())
    , input_power(std::make_shared<TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower>())
    , laser_bias_current(std::make_shared<TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent>())
{
    output_power->parent = this;
    input_power->parent = this;
    laser_bias_current->parent = this;

    yang_name = "xcvr-physical-channel"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = true; 
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::~XcvrPhysicalChannel()
{
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| description.is_set
	|| tx_laser.is_set
	|| target_output_power.is_set
	|| output_frequency.is_set
	|| (output_power !=  nullptr && output_power->has_data())
	|| (input_power !=  nullptr && input_power->has_data())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_data());
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(tx_laser.yfilter)
	|| ydk::is_set(target_output_power.yfilter)
	|| ydk::is_set(output_frequency.yfilter)
	|| (output_power !=  nullptr && output_power->has_operation())
	|| (input_power !=  nullptr && input_power->has_operation())
	|| (laser_bias_current !=  nullptr && laser_bias_current->has_operation());
}

std::string TransceiverOperData::Transceiver::XcvrPhysicalChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xcvr-physical-channel";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::XcvrPhysicalChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (tx_laser.is_set || is_set(tx_laser.yfilter)) leaf_name_data.push_back(tx_laser.get_name_leafdata());
    if (target_output_power.is_set || is_set(target_output_power.yfilter)) leaf_name_data.push_back(target_output_power.get_name_leafdata());
    if (output_frequency.is_set || is_set(output_frequency.yfilter)) leaf_name_data.push_back(output_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::XcvrPhysicalChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-power")
    {
        if(output_power == nullptr)
        {
            output_power = std::make_shared<TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower>();
        }
        return output_power;
    }

    if(child_yang_name == "input-power")
    {
        if(input_power == nullptr)
        {
            input_power = std::make_shared<TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower>();
        }
        return input_power;
    }

    if(child_yang_name == "laser-bias-current")
    {
        if(laser_bias_current == nullptr)
        {
            laser_bias_current = std::make_shared<TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent>();
        }
        return laser_bias_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::XcvrPhysicalChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output_power != nullptr)
    {
        children["output-power"] = output_power;
    }

    if(input_power != nullptr)
    {
        children["input-power"] = input_power;
    }

    if(laser_bias_current != nullptr)
    {
        children["laser-bias-current"] = laser_bias_current;
    }

    return children;
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "tx-laser")
    {
        tx_laser = value;
        tx_laser.value_namespace = name_space;
        tx_laser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-output-power")
    {
        target_output_power = value;
        target_output_power.value_namespace = name_space;
        target_output_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-frequency")
    {
        output_frequency = value;
        output_frequency.value_namespace = name_space;
        output_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "tx-laser")
    {
        tx_laser.yfilter = yfilter;
    }
    if(value_path == "target-output-power")
    {
        target_output_power.yfilter = yfilter;
    }
    if(value_path == "output-frequency")
    {
        output_frequency.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-power" || name == "input-power" || name == "laser-bias-current" || name == "index" || name == "description" || name == "tx-laser" || name == "target-output-power" || name == "output-frequency")
        return true;
    return false;
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::OutputPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{

    yang_name = "output-power"; yang_parent_name = "xcvr-physical-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::~OutputPower()
{
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| max.is_set
	|| min.is_set;
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::OutputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "max" || name == "min")
        return true;
    return false;
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::InputPower()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{

    yang_name = "input-power"; yang_parent_name = "xcvr-physical-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::~InputPower()
{
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| max.is_set
	|| min.is_set;
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::InputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "max" || name == "min")
        return true;
    return false;
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::LaserBiasCurrent()
    :
    instant{YType::str, "instant"},
    avg{YType::str, "avg"},
    max{YType::str, "max"},
    min{YType::str, "min"}
{

    yang_name = "laser-bias-current"; yang_parent_name = "xcvr-physical-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::~LaserBiasCurrent()
{
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::has_data() const
{
    if (is_presence_container) return true;
    return instant.is_set
	|| avg.is_set
	|| max.is_set
	|| min.is_set;
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-bias-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool TransceiverOperData::Transceiver::XcvrPhysicalChannel::LaserBiasCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instant" || name == "avg" || name == "max" || name == "min")
        return true;
    return false;
}

const Enum::YLeaf XcvrSonetCode::oc_48_short_reach {0, "oc-48-short-reach"};
const Enum::YLeaf XcvrSonetCode::oc_48_intermediate_reach {1, "oc-48-intermediate-reach"};
const Enum::YLeaf XcvrSonetCode::oc_48_long_reach {2, "oc-48-long-reach"};
const Enum::YLeaf XcvrSonetCode::sonet_sr_compliant {3, "sonet-sr-compliant"};
const Enum::YLeaf XcvrSonetCode::sonet_lr_compliant {4, "sonet-lr-compliant"};
const Enum::YLeaf XcvrSonetCode::oc_192_short_reach {5, "oc-192-short-reach"};
const Enum::YLeaf XcvrSonetCode::escon_smf_1310_laser {6, "escon-smf-1310-laser"};
const Enum::YLeaf XcvrSonetCode::escon_mmf_1310_led {7, "escon-mmf-1310-led"};
const Enum::YLeaf XcvrSonetCode::unknown {8, "unknown"};

const Enum::YLeaf XcvrOtnCode::p1l1_2d1 {0, "p1l1-2d1"};
const Enum::YLeaf XcvrOtnCode::p1s1_2d2 {1, "p1s1-2d2"};
const Enum::YLeaf XcvrOtnCode::p1l1_2d2 {2, "p1l1-2d2"};
const Enum::YLeaf XcvrOtnCode::otn_undefined {3, "otn-undefined"};


}
}

