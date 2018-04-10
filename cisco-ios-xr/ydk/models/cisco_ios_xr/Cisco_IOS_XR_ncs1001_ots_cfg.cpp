
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
{

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-ncs1001-ots-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
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
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
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
{

    yang_name = "node"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false;
}

HardwareModule::Node::~Node()
{
}

bool HardwareModule::Node::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool HardwareModule::Node::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
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
    path_buffer << "node" <<"[location='" <<location <<"']";
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
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : slot)
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
    amplifier(std::make_shared<HardwareModule::Node::Slot::Amplifier>())
	,psm(std::make_shared<HardwareModule::Node::Slot::Psm>())
{
    amplifier->parent = this;
    psm->parent = this;

    yang_name = "slot"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Node::Slot::~Slot()
{
}

bool HardwareModule::Node::Slot::has_data() const
{
    return slot_id.is_set
	|| (amplifier !=  nullptr && amplifier->has_data())
	|| (psm !=  nullptr && psm->has_data());
}

bool HardwareModule::Node::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter)
	|| (amplifier !=  nullptr && amplifier->has_operation())
	|| (psm !=  nullptr && psm->has_operation());
}

std::string HardwareModule::Node::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot-id='" <<slot_id <<"']";
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
    if(name == "amplifier" || name == "psm" || name == "slot-id")
        return true;
    return false;
}

HardwareModule::Node::Slot::Amplifier::Amplifier()
    :
    node_type{YType::enumeration, "node-type"},
    grid_mode{YType::enumeration, "grid-mode"},
    udc_vlan{YType::uint32, "udc-vlan"}
{

    yang_name = "amplifier"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Node::Slot::Amplifier::~Amplifier()
{
}

bool HardwareModule::Node::Slot::Amplifier::has_data() const
{
    return node_type.is_set
	|| grid_mode.is_set
	|| udc_vlan.is_set;
}

bool HardwareModule::Node::Slot::Amplifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(grid_mode.yfilter)
	|| ydk::is_set(udc_vlan.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Node::Slot::Amplifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Node::Slot::Amplifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
}

bool HardwareModule::Node::Slot::Amplifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-type" || name == "grid-mode" || name == "udc-vlan")
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

const Enum::YLeaf OtsAmplifierNode::term {0, "term"};
const Enum::YLeaf OtsAmplifierNode::ila {1, "ila"};
const Enum::YLeaf OtsAmplifierNode::roadm {2, "roadm"};

const Enum::YLeaf OtsAmplifierGridMode::Y_100g_hz {0, "100g-hz"};
const Enum::YLeaf OtsAmplifierGridMode::Y_50g_hz {1, "50g-hz"};
const Enum::YLeaf OtsAmplifierGridMode::gr_idle_ss {2, "gr-idle-ss"};

const Enum::YLeaf OtsPsmLockoutFrom::working {1, "working"};
const Enum::YLeaf OtsPsmLockoutFrom::protected_ {2, "protected"};


}
}

