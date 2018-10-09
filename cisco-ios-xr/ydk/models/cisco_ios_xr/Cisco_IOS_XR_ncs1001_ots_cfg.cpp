
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1001_ots_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1001_ots_cfg {

HardwareModule::HardwareModule()
    :
    node(this, {"location"})
{

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-ncs1001-ots-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-cfg:hardware-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<HardwareModule::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HardwareModule::clone_ptr() const
{
    return std::make_shared<HardwareModule>();
}

std::string HardwareModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModule::Node::Node()
    :
    location{YType::str, "location"}
        ,
    slot(this, {"slot_id"})
{

    yang_name = "node"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Node::~Node()
{
}

bool HardwareModule::Node::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool HardwareModule::Node::has_operation() const
{
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string HardwareModule::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-cfg:hardware-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        auto c = std::make_shared<HardwareModule::Node::Slot>();
        c->parent = this;
        slot.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : slot.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModule::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HardwareModule::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot" || name == "location")
        return true;
    return false;
}

HardwareModule::Node::Slot::Slot()
    :
    slot_id{YType::uint32, "slot-id"}
        ,
    otdrs(std::make_shared<HardwareModule::Node::Slot::Otdrs>())
    , otdr_thresholds(std::make_shared<HardwareModule::Node::Slot::OtdrThresholds>())
    , amplifier(std::make_shared<HardwareModule::Node::Slot::Amplifier>())
    , psm(std::make_shared<HardwareModule::Node::Slot::Psm>())
{
    otdrs->parent = this;
    otdr_thresholds->parent = this;
    amplifier->parent = this;
    psm->parent = this;

    yang_name = "slot"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::~Slot()
{
}

bool HardwareModule::Node::Slot::has_data() const
{
    if (is_presence_container) return true;
    return slot_id.is_set
	|| (otdrs !=  nullptr && otdrs->has_data())
	|| (otdr_thresholds !=  nullptr && otdr_thresholds->has_data())
	|| (amplifier !=  nullptr && amplifier->has_data())
	|| (psm !=  nullptr && psm->has_data());
}

bool HardwareModule::Node::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter)
	|| (otdrs !=  nullptr && otdrs->has_operation())
	|| (otdr_thresholds !=  nullptr && otdr_thresholds->has_operation())
	|| (amplifier !=  nullptr && amplifier->has_operation())
	|| (psm !=  nullptr && psm->has_operation());
}

std::string HardwareModule::Node::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    ADD_KEY_TOKEN(slot_id, "slot-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdrs")
    {
        if(otdrs == nullptr)
        {
            otdrs = std::make_shared<HardwareModule::Node::Slot::Otdrs>();
        }
        return otdrs;
    }

    if(child_yang_name == "otdr-thresholds")
    {
        if(otdr_thresholds == nullptr)
        {
            otdr_thresholds = std::make_shared<HardwareModule::Node::Slot::OtdrThresholds>();
        }
        return otdr_thresholds;
    }

    if(child_yang_name == "amplifier")
    {
        if(amplifier == nullptr)
        {
            amplifier = std::make_shared<HardwareModule::Node::Slot::Amplifier>();
        }
        return amplifier;
    }

    if(child_yang_name == "psm")
    {
        if(psm == nullptr)
        {
            psm = std::make_shared<HardwareModule::Node::Slot::Psm>();
        }
        return psm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otdrs != nullptr)
    {
        children["otdrs"] = otdrs;
    }

    if(otdr_thresholds != nullptr)
    {
        children["otdr-thresholds"] = otdr_thresholds;
    }

    if(amplifier != nullptr)
    {
        children["amplifier"] = amplifier;
    }

    if(psm != nullptr)
    {
        children["psm"] = psm;
    }

    return children;
}

void HardwareModule::Node::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdrs" || name == "otdr-thresholds" || name == "amplifier" || name == "psm" || name == "slot-id")
        return true;
    return false;
}

HardwareModule::Node::Slot::Otdrs::Otdrs()
    :
    otdr(this, {"port", "direction"})
{

    yang_name = "otdrs"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::Otdrs::~Otdrs()
{
}

bool HardwareModule::Node::Slot::Otdrs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr.len(); index++)
    {
        if(otdr[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Node::Slot::Otdrs::has_operation() const
{
    for (std::size_t index=0; index<otdr.len(); index++)
    {
        if(otdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::Node::Slot::Otdrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::Otdrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Otdrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr")
    {
        auto c = std::make_shared<HardwareModule::Node::Slot::Otdrs::Otdr>();
        c->parent = this;
        otdr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Otdrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : otdr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModule::Node::Slot::Otdrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Node::Slot::Otdrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Node::Slot::Otdrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr")
        return true;
    return false;
}

HardwareModule::Node::Slot::Otdrs::Otdr::Otdr()
    :
    port{YType::uint32, "port"},
    direction{YType::enumeration, "direction"},
    total_loss{YType::uint32, "total-loss"}
        ,
    mode_auto(std::make_shared<HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto>())
    , mode_expert(std::make_shared<HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert>())
{
    mode_auto->parent = this;
    mode_expert->parent = this;

    yang_name = "otdr"; yang_parent_name = "otdrs"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::Otdrs::Otdr::~Otdr()
{
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| direction.is_set
	|| total_loss.is_set
	|| (mode_auto !=  nullptr && mode_auto->has_data())
	|| (mode_expert !=  nullptr && mode_expert->has_data());
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(total_loss.yfilter)
	|| (mode_auto !=  nullptr && mode_auto->has_operation())
	|| (mode_expert !=  nullptr && mode_expert->has_operation());
}

std::string HardwareModule::Node::Slot::Otdrs::Otdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr";
    ADD_KEY_TOKEN(port, "port");
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::Otdrs::Otdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (total_loss.is_set || is_set(total_loss.yfilter)) leaf_name_data.push_back(total_loss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Otdrs::Otdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-auto")
    {
        if(mode_auto == nullptr)
        {
            mode_auto = std::make_shared<HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto>();
        }
        return mode_auto;
    }

    if(child_yang_name == "mode-expert")
    {
        if(mode_expert == nullptr)
        {
            mode_expert = std::make_shared<HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert>();
        }
        return mode_expert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Otdrs::Otdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode_auto != nullptr)
    {
        children["mode-auto"] = mode_auto;
    }

    if(mode_expert != nullptr)
    {
        children["mode-expert"] = mode_expert;
    }

    return children;
}

void HardwareModule::Node::Slot::Otdrs::Otdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-loss")
    {
        total_loss = value;
        total_loss.value_namespace = name_space;
        total_loss.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::Otdrs::Otdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "total-loss")
    {
        total_loss.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-auto" || name == "mode-expert" || name == "port" || name == "direction" || name == "total-loss")
        return true;
    return false;
}

HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::ModeAuto()
    :
    loss_sensitivity{YType::uint32, "loss-sensitivity"},
    reflection_sensitivity{YType::int32, "reflection-sensitivity"}
{

    yang_name = "mode-auto"; yang_parent_name = "otdr"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::~ModeAuto()
{
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::has_data() const
{
    if (is_presence_container) return true;
    return loss_sensitivity.is_set
	|| reflection_sensitivity.is_set;
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loss_sensitivity.yfilter)
	|| ydk::is_set(reflection_sensitivity.yfilter);
}

std::string HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_sensitivity.is_set || is_set(loss_sensitivity.yfilter)) leaf_name_data.push_back(loss_sensitivity.get_name_leafdata());
    if (reflection_sensitivity.is_set || is_set(reflection_sensitivity.yfilter)) leaf_name_data.push_back(reflection_sensitivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loss-sensitivity")
    {
        loss_sensitivity = value;
        loss_sensitivity.value_namespace = name_space;
        loss_sensitivity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reflection-sensitivity")
    {
        reflection_sensitivity = value;
        reflection_sensitivity.value_namespace = name_space;
        reflection_sensitivity.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loss-sensitivity")
    {
        loss_sensitivity.yfilter = yfilter;
    }
    if(value_path == "reflection-sensitivity")
    {
        reflection_sensitivity.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::ModeAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-sensitivity" || name == "reflection-sensitivity")
        return true;
    return false;
}

HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::ModeExpert()
    :
    fiber_resolution{YType::uint32, "fiber-resolution"},
    capture_length{YType::uint32, "capture-length"},
    pulse_width{YType::uint32, "pulse-width"},
    measure_time{YType::uint32, "measure-time"},
    loss_sensitivity{YType::uint32, "loss-sensitivity"},
    capture_offset{YType::uint32, "capture-offset"},
    span_length{YType::uint32, "span-length"},
    reflection_sensitivity{YType::int32, "reflection-sensitivity"}
{

    yang_name = "mode-expert"; yang_parent_name = "otdr"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::~ModeExpert()
{
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::has_data() const
{
    if (is_presence_container) return true;
    return fiber_resolution.is_set
	|| capture_length.is_set
	|| pulse_width.is_set
	|| measure_time.is_set
	|| loss_sensitivity.is_set
	|| capture_offset.is_set
	|| span_length.is_set
	|| reflection_sensitivity.is_set;
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fiber_resolution.yfilter)
	|| ydk::is_set(capture_length.yfilter)
	|| ydk::is_set(pulse_width.yfilter)
	|| ydk::is_set(measure_time.yfilter)
	|| ydk::is_set(loss_sensitivity.yfilter)
	|| ydk::is_set(capture_offset.yfilter)
	|| ydk::is_set(span_length.yfilter)
	|| ydk::is_set(reflection_sensitivity.yfilter);
}

std::string HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-expert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fiber_resolution.is_set || is_set(fiber_resolution.yfilter)) leaf_name_data.push_back(fiber_resolution.get_name_leafdata());
    if (capture_length.is_set || is_set(capture_length.yfilter)) leaf_name_data.push_back(capture_length.get_name_leafdata());
    if (pulse_width.is_set || is_set(pulse_width.yfilter)) leaf_name_data.push_back(pulse_width.get_name_leafdata());
    if (measure_time.is_set || is_set(measure_time.yfilter)) leaf_name_data.push_back(measure_time.get_name_leafdata());
    if (loss_sensitivity.is_set || is_set(loss_sensitivity.yfilter)) leaf_name_data.push_back(loss_sensitivity.get_name_leafdata());
    if (capture_offset.is_set || is_set(capture_offset.yfilter)) leaf_name_data.push_back(capture_offset.get_name_leafdata());
    if (span_length.is_set || is_set(span_length.yfilter)) leaf_name_data.push_back(span_length.get_name_leafdata());
    if (reflection_sensitivity.is_set || is_set(reflection_sensitivity.yfilter)) leaf_name_data.push_back(reflection_sensitivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fiber-resolution")
    {
        fiber_resolution = value;
        fiber_resolution.value_namespace = name_space;
        fiber_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capture-length")
    {
        capture_length = value;
        capture_length.value_namespace = name_space;
        capture_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pulse-width")
    {
        pulse_width = value;
        pulse_width.value_namespace = name_space;
        pulse_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "measure-time")
    {
        measure_time = value;
        measure_time.value_namespace = name_space;
        measure_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-sensitivity")
    {
        loss_sensitivity = value;
        loss_sensitivity.value_namespace = name_space;
        loss_sensitivity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capture-offset")
    {
        capture_offset = value;
        capture_offset.value_namespace = name_space;
        capture_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-length")
    {
        span_length = value;
        span_length.value_namespace = name_space;
        span_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reflection-sensitivity")
    {
        reflection_sensitivity = value;
        reflection_sensitivity.value_namespace = name_space;
        reflection_sensitivity.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fiber-resolution")
    {
        fiber_resolution.yfilter = yfilter;
    }
    if(value_path == "capture-length")
    {
        capture_length.yfilter = yfilter;
    }
    if(value_path == "pulse-width")
    {
        pulse_width.yfilter = yfilter;
    }
    if(value_path == "measure-time")
    {
        measure_time.yfilter = yfilter;
    }
    if(value_path == "loss-sensitivity")
    {
        loss_sensitivity.yfilter = yfilter;
    }
    if(value_path == "capture-offset")
    {
        capture_offset.yfilter = yfilter;
    }
    if(value_path == "span-length")
    {
        span_length.yfilter = yfilter;
    }
    if(value_path == "reflection-sensitivity")
    {
        reflection_sensitivity.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::Otdrs::Otdr::ModeExpert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fiber-resolution" || name == "capture-length" || name == "pulse-width" || name == "measure-time" || name == "loss-sensitivity" || name == "capture-offset" || name == "span-length" || name == "reflection-sensitivity")
        return true;
    return false;
}

HardwareModule::Node::Slot::OtdrThresholds::OtdrThresholds()
    :
    otdr_threshold(this, {"port"})
{

    yang_name = "otdr-thresholds"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::OtdrThresholds::~OtdrThresholds()
{
}

bool HardwareModule::Node::Slot::OtdrThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr_threshold.len(); index++)
    {
        if(otdr_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Node::Slot::OtdrThresholds::has_operation() const
{
    for (std::size_t index=0; index<otdr_threshold.len(); index++)
    {
        if(otdr_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::Node::Slot::OtdrThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::OtdrThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::OtdrThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr-threshold")
    {
        auto c = std::make_shared<HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold>();
        c->parent = this;
        otdr_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::OtdrThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : otdr_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModule::Node::Slot::OtdrThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Node::Slot::OtdrThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Node::Slot::OtdrThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-threshold")
        return true;
    return false;
}

HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::OtdrThreshold()
    :
    port{YType::uint32, "port"},
    loss_abs_threshold{YType::uint32, "loss-abs-threshold"},
    reflection_abs_threshold{YType::int32, "reflection-abs-threshold"},
    orl_abs_threshold{YType::uint32, "orl-abs-threshold"}
{

    yang_name = "otdr-threshold"; yang_parent_name = "otdr-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::~OtdrThreshold()
{
}

bool HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| loss_abs_threshold.is_set
	|| reflection_abs_threshold.is_set
	|| orl_abs_threshold.is_set;
}

bool HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(loss_abs_threshold.yfilter)
	|| ydk::is_set(reflection_abs_threshold.yfilter)
	|| ydk::is_set(orl_abs_threshold.yfilter);
}

std::string HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-threshold";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (loss_abs_threshold.is_set || is_set(loss_abs_threshold.yfilter)) leaf_name_data.push_back(loss_abs_threshold.get_name_leafdata());
    if (reflection_abs_threshold.is_set || is_set(reflection_abs_threshold.yfilter)) leaf_name_data.push_back(reflection_abs_threshold.get_name_leafdata());
    if (orl_abs_threshold.is_set || is_set(orl_abs_threshold.yfilter)) leaf_name_data.push_back(orl_abs_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-abs-threshold")
    {
        loss_abs_threshold = value;
        loss_abs_threshold.value_namespace = name_space;
        loss_abs_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reflection-abs-threshold")
    {
        reflection_abs_threshold = value;
        reflection_abs_threshold.value_namespace = name_space;
        reflection_abs_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orl-abs-threshold")
    {
        orl_abs_threshold = value;
        orl_abs_threshold.value_namespace = name_space;
        orl_abs_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "loss-abs-threshold")
    {
        loss_abs_threshold.yfilter = yfilter;
    }
    if(value_path == "reflection-abs-threshold")
    {
        reflection_abs_threshold.yfilter = yfilter;
    }
    if(value_path == "orl-abs-threshold")
    {
        orl_abs_threshold.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::OtdrThresholds::OtdrThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "loss-abs-threshold" || name == "reflection-abs-threshold" || name == "orl-abs-threshold")
        return true;
    return false;
}

HardwareModule::Node::Slot::Amplifier::Amplifier()
    :
    node_type{YType::enumeration, "node-type"},
    grid_mode{YType::enumeration, "grid-mode"},
    udc_vlan{YType::uint32, "udc-vlan"},
    span_loss{YType::boolean, "span-loss"}
        ,
    remote_node(std::make_shared<HardwareModule::Node::Slot::Amplifier::RemoteNode>())
{
    remote_node->parent = this;

    yang_name = "amplifier"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::Amplifier::~Amplifier()
{
}

bool HardwareModule::Node::Slot::Amplifier::has_data() const
{
    if (is_presence_container) return true;
    return node_type.is_set
	|| grid_mode.is_set
	|| udc_vlan.is_set
	|| span_loss.is_set
	|| (remote_node !=  nullptr && remote_node->has_data());
}

bool HardwareModule::Node::Slot::Amplifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(grid_mode.yfilter)
	|| ydk::is_set(udc_vlan.yfilter)
	|| ydk::is_set(span_loss.yfilter)
	|| (remote_node !=  nullptr && remote_node->has_operation());
}

std::string HardwareModule::Node::Slot::Amplifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amplifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::Amplifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (grid_mode.is_set || is_set(grid_mode.yfilter)) leaf_name_data.push_back(grid_mode.get_name_leafdata());
    if (udc_vlan.is_set || is_set(udc_vlan.yfilter)) leaf_name_data.push_back(udc_vlan.get_name_leafdata());
    if (span_loss.is_set || is_set(span_loss.yfilter)) leaf_name_data.push_back(span_loss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Amplifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-node")
    {
        if(remote_node == nullptr)
        {
            remote_node = std::make_shared<HardwareModule::Node::Slot::Amplifier::RemoteNode>();
        }
        return remote_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Amplifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_node != nullptr)
    {
        children["remote-node"] = remote_node;
    }

    return children;
}

void HardwareModule::Node::Slot::Amplifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid-mode")
    {
        grid_mode = value;
        grid_mode.value_namespace = name_space;
        grid_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udc-vlan")
    {
        udc_vlan = value;
        udc_vlan.value_namespace = name_space;
        udc_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span-loss")
    {
        span_loss = value;
        span_loss.value_namespace = name_space;
        span_loss.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::Amplifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "grid-mode")
    {
        grid_mode.yfilter = yfilter;
    }
    if(value_path == "udc-vlan")
    {
        udc_vlan.yfilter = yfilter;
    }
    if(value_path == "span-loss")
    {
        span_loss.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::Amplifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-node" || name == "node-type" || name == "grid-mode" || name == "udc-vlan" || name == "span-loss")
        return true;
    return false;
}

HardwareModule::Node::Slot::Amplifier::RemoteNode::RemoteNode()
    :
    local_ip_address{YType::str, "local-ip-address"},
    remote_ip_address{YType::str, "remote-ip-address"},
    remote_slot_id{YType::uint32, "remote-slot-id"}
{

    yang_name = "remote-node"; yang_parent_name = "amplifier"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::Amplifier::RemoteNode::~RemoteNode()
{
}

bool HardwareModule::Node::Slot::Amplifier::RemoteNode::has_data() const
{
    if (is_presence_container) return true;
    return local_ip_address.is_set
	|| remote_ip_address.is_set
	|| remote_slot_id.is_set;
}

bool HardwareModule::Node::Slot::Amplifier::RemoteNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip_address.yfilter)
	|| ydk::is_set(remote_ip_address.yfilter)
	|| ydk::is_set(remote_slot_id.yfilter);
}

std::string HardwareModule::Node::Slot::Amplifier::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::Amplifier::RemoteNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (remote_ip_address.is_set || is_set(remote_ip_address.yfilter)) leaf_name_data.push_back(remote_ip_address.get_name_leafdata());
    if (remote_slot_id.is_set || is_set(remote_slot_id.yfilter)) leaf_name_data.push_back(remote_slot_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Amplifier::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Amplifier::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModule::Node::Slot::Amplifier::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address = value;
        remote_ip_address.value_namespace = name_space;
        remote_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-slot-id")
    {
        remote_slot_id = value;
        remote_slot_id.value_namespace = name_space;
        remote_slot_id.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::Amplifier::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address.yfilter = yfilter;
    }
    if(value_path == "remote-slot-id")
    {
        remote_slot_id.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::Amplifier::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip-address" || name == "remote-ip-address" || name == "remote-slot-id")
        return true;
    return false;
}

HardwareModule::Node::Slot::Psm::Psm()
    :
    mono_dir{YType::boolean, "mono-dir"},
    auto_threshold{YType::boolean, "auto-threshold"},
    path_protection{YType::boolean, "path-protection"},
    section_protection{YType::boolean, "section-protection"},
    lockout_from{YType::enumeration, "lockout-from"}
{

    yang_name = "psm"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slot::Psm::~Psm()
{
}

bool HardwareModule::Node::Slot::Psm::has_data() const
{
    if (is_presence_container) return true;
    return mono_dir.is_set
	|| auto_threshold.is_set
	|| path_protection.is_set
	|| section_protection.is_set
	|| lockout_from.is_set;
}

bool HardwareModule::Node::Slot::Psm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mono_dir.yfilter)
	|| ydk::is_set(auto_threshold.yfilter)
	|| ydk::is_set(path_protection.yfilter)
	|| ydk::is_set(section_protection.yfilter)
	|| ydk::is_set(lockout_from.yfilter);
}

std::string HardwareModule::Node::Slot::Psm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slot::Psm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mono_dir.is_set || is_set(mono_dir.yfilter)) leaf_name_data.push_back(mono_dir.get_name_leafdata());
    if (auto_threshold.is_set || is_set(auto_threshold.yfilter)) leaf_name_data.push_back(auto_threshold.get_name_leafdata());
    if (path_protection.is_set || is_set(path_protection.yfilter)) leaf_name_data.push_back(path_protection.get_name_leafdata());
    if (section_protection.is_set || is_set(section_protection.yfilter)) leaf_name_data.push_back(section_protection.get_name_leafdata());
    if (lockout_from.is_set || is_set(lockout_from.yfilter)) leaf_name_data.push_back(lockout_from.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Psm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Psm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModule::Node::Slot::Psm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mono-dir")
    {
        mono_dir = value;
        mono_dir.value_namespace = name_space;
        mono_dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-threshold")
    {
        auto_threshold = value;
        auto_threshold.value_namespace = name_space;
        auto_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection")
    {
        path_protection = value;
        path_protection.value_namespace = name_space;
        path_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "section-protection")
    {
        section_protection = value;
        section_protection.value_namespace = name_space;
        section_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-from")
    {
        lockout_from = value;
        lockout_from.value_namespace = name_space;
        lockout_from.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slot::Psm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mono-dir")
    {
        mono_dir.yfilter = yfilter;
    }
    if(value_path == "auto-threshold")
    {
        auto_threshold.yfilter = yfilter;
    }
    if(value_path == "path-protection")
    {
        path_protection.yfilter = yfilter;
    }
    if(value_path == "section-protection")
    {
        section_protection.yfilter = yfilter;
    }
    if(value_path == "lockout-from")
    {
        lockout_from.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slot::Psm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mono-dir" || name == "auto-threshold" || name == "path-protection" || name == "section-protection" || name == "lockout-from")
        return true;
    return false;
}

const Enum::YLeaf OtsOtdrDirection::tx {0, "tx"};
const Enum::YLeaf OtsOtdrDirection::rx {1, "rx"};

const Enum::YLeaf OtsPsmLockoutFrom::working {1, "working"};
const Enum::YLeaf OtsPsmLockoutFrom::protected_ {2, "protected"};

const Enum::YLeaf OtsAmplifierGridMode::Y_100g_hz {0, "100g-hz"};
const Enum::YLeaf OtsAmplifierGridMode::Y_50g_hz {1, "50g-hz"};
const Enum::YLeaf OtsAmplifierGridMode::gr_idle_ss {2, "gr-idle-ss"};

const Enum::YLeaf OtsAmplifierNode::term {0, "term"};
const Enum::YLeaf OtsAmplifierNode::ila {1, "ila"};
const Enum::YLeaf OtsAmplifierNode::roadm {2, "roadm"};


}
}

