
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_controller_vdsl_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_controller_vdsl_oper {

VdslOperData::VdslOperData()
    :
    vdsl_info(this, {"slot_num", "subslot_num"})
{

    yang_name = "vdsl-oper-data"; yang_parent_name = "Cisco-IOS-XE-controller-vdsl-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

VdslOperData::~VdslOperData()
{
}

bool VdslOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vdsl_info.len(); index++)
    {
        if(vdsl_info[index]->has_data())
            return true;
    }
    return false;
}

bool VdslOperData::has_operation() const
{
    for (std::size_t index=0; index<vdsl_info.len(); index++)
    {
        if(vdsl_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VdslOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller-vdsl-oper:vdsl-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VdslOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VdslOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vdsl-info")
    {
        auto c = std::make_shared<VdslOperData::VdslInfo>();
        c->parent = this;
        vdsl_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VdslOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vdsl_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VdslOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VdslOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> VdslOperData::clone_ptr() const
{
    return std::make_shared<VdslOperData>();
}

std::string VdslOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string VdslOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function VdslOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VdslOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool VdslOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vdsl-info")
        return true;
    return false;
}

VdslOperData::VdslInfo::VdslInfo()
    :
    slot_num{YType::uint32, "slot-num"},
    subslot_num{YType::uint32, "subslot-num"},
    state{YType::enumeration, "state"},
    mode{YType::enumeration, "mode"},
    modem_status{YType::str, "modem-status"},
    trained_mode{YType::str, "trained-mode"},
    firmware_version{YType::str, "firmware-version"},
    phy_version{YType::str, "phy-version"}
        ,
    cpe_stats(std::make_shared<VdslOperData::VdslInfo::CpeStats>())
    , co_stats(std::make_shared<VdslOperData::VdslInfo::CoStats>())
{
    cpe_stats->parent = this;
    co_stats->parent = this;

    yang_name = "vdsl-info"; yang_parent_name = "vdsl-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

VdslOperData::VdslInfo::~VdslInfo()
{
}

bool VdslOperData::VdslInfo::has_data() const
{
    if (is_presence_container) return true;
    return slot_num.is_set
	|| subslot_num.is_set
	|| state.is_set
	|| mode.is_set
	|| modem_status.is_set
	|| trained_mode.is_set
	|| firmware_version.is_set
	|| phy_version.is_set
	|| (cpe_stats !=  nullptr && cpe_stats->has_data())
	|| (co_stats !=  nullptr && co_stats->has_data());
}

bool VdslOperData::VdslInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(subslot_num.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(modem_status.yfilter)
	|| ydk::is_set(trained_mode.yfilter)
	|| ydk::is_set(firmware_version.yfilter)
	|| ydk::is_set(phy_version.yfilter)
	|| (cpe_stats !=  nullptr && cpe_stats->has_operation())
	|| (co_stats !=  nullptr && co_stats->has_operation());
}

std::string VdslOperData::VdslInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller-vdsl-oper:vdsl-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string VdslOperData::VdslInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vdsl-info";
    ADD_KEY_TOKEN(slot_num, "slot-num");
    ADD_KEY_TOKEN(subslot_num, "subslot-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VdslOperData::VdslInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (subslot_num.is_set || is_set(subslot_num.yfilter)) leaf_name_data.push_back(subslot_num.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (modem_status.is_set || is_set(modem_status.yfilter)) leaf_name_data.push_back(modem_status.get_name_leafdata());
    if (trained_mode.is_set || is_set(trained_mode.yfilter)) leaf_name_data.push_back(trained_mode.get_name_leafdata());
    if (firmware_version.is_set || is_set(firmware_version.yfilter)) leaf_name_data.push_back(firmware_version.get_name_leafdata());
    if (phy_version.is_set || is_set(phy_version.yfilter)) leaf_name_data.push_back(phy_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VdslOperData::VdslInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpe-stats")
    {
        if(cpe_stats == nullptr)
        {
            cpe_stats = std::make_shared<VdslOperData::VdslInfo::CpeStats>();
        }
        return cpe_stats;
    }

    if(child_yang_name == "co-stats")
    {
        if(co_stats == nullptr)
        {
            co_stats = std::make_shared<VdslOperData::VdslInfo::CoStats>();
        }
        return co_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VdslOperData::VdslInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpe_stats != nullptr)
    {
        children["cpe-stats"] = cpe_stats;
    }

    if(co_stats != nullptr)
    {
        children["co-stats"] = co_stats;
    }

    return children;
}

void VdslOperData::VdslInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subslot-num")
    {
        subslot_num = value;
        subslot_num.value_namespace = name_space;
        subslot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modem-status")
    {
        modem_status = value;
        modem_status.value_namespace = name_space;
        modem_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trained-mode")
    {
        trained_mode = value;
        trained_mode.value_namespace = name_space;
        trained_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-version")
    {
        firmware_version = value;
        firmware_version.value_namespace = name_space;
        firmware_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-version")
    {
        phy_version = value;
        phy_version.value_namespace = name_space;
        phy_version.value_namespace_prefix = name_space_prefix;
    }
}

void VdslOperData::VdslInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "subslot-num")
    {
        subslot_num.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "modem-status")
    {
        modem_status.yfilter = yfilter;
    }
    if(value_path == "trained-mode")
    {
        trained_mode.yfilter = yfilter;
    }
    if(value_path == "firmware-version")
    {
        firmware_version.yfilter = yfilter;
    }
    if(value_path == "phy-version")
    {
        phy_version.yfilter = yfilter;
    }
}

bool VdslOperData::VdslInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpe-stats" || name == "co-stats" || name == "slot-num" || name == "subslot-num" || name == "state" || name == "mode" || name == "modem-status" || name == "trained-mode" || name == "firmware-version" || name == "phy-version")
        return true;
    return false;
}

VdslOperData::VdslInfo::CpeStats::CpeStats()
    :
    chip_vendor{YType::str, "chip-vendor"},
    line_attenuation{YType::str, "line-attenuation"},
    noise_margin{YType::str, "noise-margin"},
    attainable_rate{YType::uint32, "attainable-rate"},
    actual_power{YType::str, "actual-power"},
    speed{YType::uint32, "speed"}
{

    yang_name = "cpe-stats"; yang_parent_name = "vdsl-info"; is_top_level_class = false; has_list_ancestor = true; 
}

VdslOperData::VdslInfo::CpeStats::~CpeStats()
{
}

bool VdslOperData::VdslInfo::CpeStats::has_data() const
{
    if (is_presence_container) return true;
    return chip_vendor.is_set
	|| line_attenuation.is_set
	|| noise_margin.is_set
	|| attainable_rate.is_set
	|| actual_power.is_set
	|| speed.is_set;
}

bool VdslOperData::VdslInfo::CpeStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chip_vendor.yfilter)
	|| ydk::is_set(line_attenuation.yfilter)
	|| ydk::is_set(noise_margin.yfilter)
	|| ydk::is_set(attainable_rate.yfilter)
	|| ydk::is_set(actual_power.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string VdslOperData::VdslInfo::CpeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpe-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VdslOperData::VdslInfo::CpeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chip_vendor.is_set || is_set(chip_vendor.yfilter)) leaf_name_data.push_back(chip_vendor.get_name_leafdata());
    if (line_attenuation.is_set || is_set(line_attenuation.yfilter)) leaf_name_data.push_back(line_attenuation.get_name_leafdata());
    if (noise_margin.is_set || is_set(noise_margin.yfilter)) leaf_name_data.push_back(noise_margin.get_name_leafdata());
    if (attainable_rate.is_set || is_set(attainable_rate.yfilter)) leaf_name_data.push_back(attainable_rate.get_name_leafdata());
    if (actual_power.is_set || is_set(actual_power.yfilter)) leaf_name_data.push_back(actual_power.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VdslOperData::VdslInfo::CpeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VdslOperData::VdslInfo::CpeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VdslOperData::VdslInfo::CpeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chip-vendor")
    {
        chip_vendor = value;
        chip_vendor.value_namespace = name_space;
        chip_vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-attenuation")
    {
        line_attenuation = value;
        line_attenuation.value_namespace = name_space;
        line_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noise-margin")
    {
        noise_margin = value;
        noise_margin.value_namespace = name_space;
        noise_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attainable-rate")
    {
        attainable_rate = value;
        attainable_rate.value_namespace = name_space;
        attainable_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-power")
    {
        actual_power = value;
        actual_power.value_namespace = name_space;
        actual_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void VdslOperData::VdslInfo::CpeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chip-vendor")
    {
        chip_vendor.yfilter = yfilter;
    }
    if(value_path == "line-attenuation")
    {
        line_attenuation.yfilter = yfilter;
    }
    if(value_path == "noise-margin")
    {
        noise_margin.yfilter = yfilter;
    }
    if(value_path == "attainable-rate")
    {
        attainable_rate.yfilter = yfilter;
    }
    if(value_path == "actual-power")
    {
        actual_power.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool VdslOperData::VdslInfo::CpeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chip-vendor" || name == "line-attenuation" || name == "noise-margin" || name == "attainable-rate" || name == "actual-power" || name == "speed")
        return true;
    return false;
}

VdslOperData::VdslInfo::CoStats::CoStats()
    :
    chip_vendor{YType::str, "chip-vendor"},
    line_attenuation{YType::str, "line-attenuation"},
    noise_margin{YType::str, "noise-margin"},
    attainable_rate{YType::uint32, "attainable-rate"},
    actual_power{YType::str, "actual-power"},
    speed{YType::uint32, "speed"}
{

    yang_name = "co-stats"; yang_parent_name = "vdsl-info"; is_top_level_class = false; has_list_ancestor = true; 
}

VdslOperData::VdslInfo::CoStats::~CoStats()
{
}

bool VdslOperData::VdslInfo::CoStats::has_data() const
{
    if (is_presence_container) return true;
    return chip_vendor.is_set
	|| line_attenuation.is_set
	|| noise_margin.is_set
	|| attainable_rate.is_set
	|| actual_power.is_set
	|| speed.is_set;
}

bool VdslOperData::VdslInfo::CoStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chip_vendor.yfilter)
	|| ydk::is_set(line_attenuation.yfilter)
	|| ydk::is_set(noise_margin.yfilter)
	|| ydk::is_set(attainable_rate.yfilter)
	|| ydk::is_set(actual_power.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string VdslOperData::VdslInfo::CoStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "co-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VdslOperData::VdslInfo::CoStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chip_vendor.is_set || is_set(chip_vendor.yfilter)) leaf_name_data.push_back(chip_vendor.get_name_leafdata());
    if (line_attenuation.is_set || is_set(line_attenuation.yfilter)) leaf_name_data.push_back(line_attenuation.get_name_leafdata());
    if (noise_margin.is_set || is_set(noise_margin.yfilter)) leaf_name_data.push_back(noise_margin.get_name_leafdata());
    if (attainable_rate.is_set || is_set(attainable_rate.yfilter)) leaf_name_data.push_back(attainable_rate.get_name_leafdata());
    if (actual_power.is_set || is_set(actual_power.yfilter)) leaf_name_data.push_back(actual_power.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VdslOperData::VdslInfo::CoStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VdslOperData::VdslInfo::CoStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VdslOperData::VdslInfo::CoStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chip-vendor")
    {
        chip_vendor = value;
        chip_vendor.value_namespace = name_space;
        chip_vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-attenuation")
    {
        line_attenuation = value;
        line_attenuation.value_namespace = name_space;
        line_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noise-margin")
    {
        noise_margin = value;
        noise_margin.value_namespace = name_space;
        noise_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attainable-rate")
    {
        attainable_rate = value;
        attainable_rate.value_namespace = name_space;
        attainable_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-power")
    {
        actual_power = value;
        actual_power.value_namespace = name_space;
        actual_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void VdslOperData::VdslInfo::CoStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chip-vendor")
    {
        chip_vendor.yfilter = yfilter;
    }
    if(value_path == "line-attenuation")
    {
        line_attenuation.yfilter = yfilter;
    }
    if(value_path == "noise-margin")
    {
        noise_margin.yfilter = yfilter;
    }
    if(value_path == "attainable-rate")
    {
        attainable_rate.yfilter = yfilter;
    }
    if(value_path == "actual-power")
    {
        actual_power.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool VdslOperData::VdslInfo::CoStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chip-vendor" || name == "line-attenuation" || name == "noise-margin" || name == "attainable-rate" || name == "actual-power" || name == "speed")
        return true;
    return false;
}

const Enum::YLeaf IdbStates::down {0, "down"};
const Enum::YLeaf IdbStates::going_down {1, "going-down"};
const Enum::YLeaf IdbStates::init {2, "init"};
const Enum::YLeaf IdbStates::testing {3, "testing"};
const Enum::YLeaf IdbStates::up {4, "up"};
const Enum::YLeaf IdbStates::reset {5, "reset"};
const Enum::YLeaf IdbStates::admindown {6, "admindown"};
const Enum::YLeaf IdbStates::deleted {7, "deleted"};

const Enum::YLeaf ModeTc::ptm {0, "ptm"};
const Enum::YLeaf ModeTc::atm {1, "atm"};


}
}

