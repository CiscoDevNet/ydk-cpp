
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_sc_diag_admin_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_sc_diag_admin_oper {

Diag::Diag()
    :
    racks(std::make_shared<Diag::Racks>())
{
    racks->parent = this;

    yang_name = "diag"; yang_parent_name = "Cisco-IOS-XR-asr9k-sc-diag-admin-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Diag::~Diag()
{
}

bool Diag::has_data() const
{
    if (is_presence_container) return true;
    return (racks !=  nullptr && racks->has_data());
}

bool Diag::has_operation() const
{
    return is_set(yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Diag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-diag-admin-oper:diag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<Diag::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(racks != nullptr)
    {
        _children["racks"] = racks;
    }

    return _children;
}

void Diag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Diag::clone_ptr() const
{
    return std::make_shared<Diag>();
}

std::string Diag::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Diag::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Diag::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Diag::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Diag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
}

Diag::Racks::Racks()
    :
    rack(this, {"rack_name"})
{

    yang_name = "racks"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Racks::~Racks()
{
}

bool Diag::Racks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-diag-admin-oper:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Diag::Racks::Rack::Rack()
    :
    rack_name{YType::uint32, "rack-name"}
        ,
    fan_trays(std::make_shared<Diag::Racks::Rack::FanTrays>())
    , power_supplies(std::make_shared<Diag::Racks::Rack::PowerSupplies>())
    , slots(std::make_shared<Diag::Racks::Rack::Slots>())
    , chassis(std::make_shared<Diag::Racks::Rack::Chassis>())
    , summary(std::make_shared<Diag::Racks::Rack::Summary>())
{
    fan_trays->parent = this;
    power_supplies->parent = this;
    slots->parent = this;
    chassis->parent = this;
    summary->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Racks::Rack::~Rack()
{
}

bool Diag::Racks::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack_name.is_set
	|| (fan_trays !=  nullptr && fan_trays->has_data())
	|| (power_supplies !=  nullptr && power_supplies->has_data())
	|| (slots !=  nullptr && slots->has_data())
	|| (chassis !=  nullptr && chassis->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Diag::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_name.yfilter)
	|| (fan_trays !=  nullptr && fan_trays->has_operation())
	|| (power_supplies !=  nullptr && power_supplies->has_operation())
	|| (slots !=  nullptr && slots->has_operation())
	|| (chassis !=  nullptr && chassis->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Diag::Racks::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-diag-admin-oper:diag/racks/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_name, "rack-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_name.is_set || is_set(rack_name.yfilter)) leaf_name_data.push_back(rack_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan-trays")
    {
        if(fan_trays == nullptr)
        {
            fan_trays = std::make_shared<Diag::Racks::Rack::FanTrays>();
        }
        return fan_trays;
    }

    if(child_yang_name == "power-supplies")
    {
        if(power_supplies == nullptr)
        {
            power_supplies = std::make_shared<Diag::Racks::Rack::PowerSupplies>();
        }
        return power_supplies;
    }

    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<Diag::Racks::Rack::Slots>();
        }
        return slots;
    }

    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Diag::Racks::Rack::Chassis>();
        }
        return chassis;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Diag::Racks::Rack::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fan_trays != nullptr)
    {
        _children["fan-trays"] = fan_trays;
    }

    if(power_supplies != nullptr)
    {
        _children["power-supplies"] = power_supplies;
    }

    if(slots != nullptr)
    {
        _children["slots"] = slots;
    }

    if(chassis != nullptr)
    {
        _children["chassis"] = chassis;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void Diag::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-name")
    {
        rack_name = value;
        rack_name.value_namespace = name_space;
        rack_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-name")
    {
        rack_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan-trays" || name == "power-supplies" || name == "slots" || name == "chassis" || name == "summary" || name == "rack-name")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTrays()
    :
    fan_tray(this, {"fan_tray_name"})
{

    yang_name = "fan-trays"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::~FanTrays()
{
}

bool Diag::Racks::Rack::FanTrays::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_tray.len(); index++)
    {
        if(fan_tray[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::FanTrays::has_operation() const
{
    for (std::size_t index=0; index<fan_tray.len(); index++)
    {
        if(fan_tray[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::FanTrays::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-trays";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan-tray")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray>();
        ent_->parent = this;
        fan_tray.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fan_tray.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::FanTrays::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::FanTrays::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan-tray")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::FanTray()
    :
    fan_tray_name{YType::str, "fan-tray-name"}
        ,
    detail(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail>())
{
    detail->parent = this;

    yang_name = "fan-tray"; yang_parent_name = "fan-trays"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::~FanTray()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::has_data() const
{
    if (is_presence_container) return true;
    return fan_tray_name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fan_tray_name.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-tray";
    ADD_KEY_TOKEN(fan_tray_name, "fan-tray-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fan_tray_name.is_set || is_set(fan_tray_name.yfilter)) leaf_name_data.push_back(fan_tray_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fan-tray-name")
    {
        fan_tray_name = value;
        fan_tray_name.value_namespace = name_space;
        fan_tray_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fan-tray-name")
    {
        fan_tray_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "fan-tray-name")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Detail()
    :
    node(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node>())
    , spa(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa>())
{
    node->parent = this;
    spa->parent = this;

    yang_name = "detail"; yang_parent_name = "fan-tray"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::~Detail()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::has_data() const
{
    if (is_presence_container) return true;
    return (node !=  nullptr && node->has_data())
	|| (spa !=  nullptr && spa->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (node !=  nullptr && node->has_operation())
	|| (spa !=  nullptr && spa->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node>();
        }
        return node;
    }

    if(child_yang_name == "spa")
    {
        if(spa == nullptr)
        {
            spa = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa>();
        }
        return spa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node != nullptr)
    {
        _children["node"] = node;
    }

    if(spa != nullptr)
    {
        _children["spa"] = spa;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "spa")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Node()
    :
    description{YType::str, "description"},
    serial_number{YType::str, "serial-number"},
    tan{YType::str, "tan"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    new_deviation_number{YType::uint32, "new-deviation-number"},
    clei{YType::str, "clei"},
    board_state{YType::enumeration, "board-state"},
    pld_motherboard{YType::str, "pld-motherboard"},
    pld_power{YType::str, "pld-power"},
    monlib{YType::str, "monlib"},
    rommon{YType::str, "rommon"},
    cpu0{YType::enumeration, "cpu0"}
        ,
    pld(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision>())
    , cbc_active_partition(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition>())
    , cbc_inactive_partition(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition>())
{
    pld->parent = this;
    hardware_revision->parent = this;
    cbc_active_partition->parent = this;
    cbc_inactive_partition->parent = this;

    yang_name = "node"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::~Node()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| serial_number.is_set
	|| tan.is_set
	|| pid.is_set
	|| vid.is_set
	|| chip_hardware_revision.is_set
	|| new_deviation_number.is_set
	|| clei.is_set
	|| board_state.is_set
	|| pld_motherboard.is_set
	|| pld_power.is_set
	|| monlib.is_set
	|| rommon.is_set
	|| cpu0.is_set
	|| (pld !=  nullptr && pld->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_data())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(board_state.yfilter)
	|| ydk::is_set(pld_motherboard.yfilter)
	|| ydk::is_set(pld_power.yfilter)
	|| ydk::is_set(monlib.yfilter)
	|| ydk::is_set(rommon.yfilter)
	|| ydk::is_set(cpu0.yfilter)
	|| (pld !=  nullptr && pld->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_operation())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (board_state.is_set || is_set(board_state.yfilter)) leaf_name_data.push_back(board_state.get_name_leafdata());
    if (pld_motherboard.is_set || is_set(pld_motherboard.yfilter)) leaf_name_data.push_back(pld_motherboard.get_name_leafdata());
    if (pld_power.is_set || is_set(pld_power.yfilter)) leaf_name_data.push_back(pld_power.get_name_leafdata());
    if (monlib.is_set || is_set(monlib.yfilter)) leaf_name_data.push_back(monlib.get_name_leafdata());
    if (rommon.is_set || is_set(rommon.yfilter)) leaf_name_data.push_back(rommon.get_name_leafdata());
    if (cpu0.is_set || is_set(cpu0.yfilter)) leaf_name_data.push_back(cpu0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pld")
    {
        if(pld == nullptr)
        {
            pld = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld>();
        }
        return pld;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision>();
        }
        return hardware_revision;
    }

    if(child_yang_name == "cbc-active-partition")
    {
        if(cbc_active_partition == nullptr)
        {
            cbc_active_partition = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition>();
        }
        return cbc_active_partition;
    }

    if(child_yang_name == "cbc-inactive-partition")
    {
        if(cbc_inactive_partition == nullptr)
        {
            cbc_inactive_partition = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition>();
        }
        return cbc_inactive_partition;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pld != nullptr)
    {
        _children["pld"] = pld;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    if(cbc_active_partition != nullptr)
    {
        _children["cbc-active-partition"] = cbc_active_partition;
    }

    if(cbc_inactive_partition != nullptr)
    {
        _children["cbc-inactive-partition"] = cbc_inactive_partition;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "board-state")
    {
        board_state = value;
        board_state.value_namespace = name_space;
        board_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard = value;
        pld_motherboard.value_namespace = name_space;
        pld_motherboard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-power")
    {
        pld_power = value;
        pld_power.value_namespace = name_space;
        pld_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monlib")
    {
        monlib = value;
        monlib.value_namespace = name_space;
        monlib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rommon")
    {
        rommon = value;
        rommon.value_namespace = name_space;
        rommon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu0")
    {
        cpu0 = value;
        cpu0.value_namespace = name_space;
        cpu0.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "board-state")
    {
        board_state.yfilter = yfilter;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard.yfilter = yfilter;
    }
    if(value_path == "pld-power")
    {
        pld_power.yfilter = yfilter;
    }
    if(value_path == "monlib")
    {
        monlib.yfilter = yfilter;
    }
    if(value_path == "rommon")
    {
        rommon.yfilter = yfilter;
    }
    if(value_path == "cpu0")
    {
        cpu0.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pld" || name == "hardware-revision" || name == "cbc-active-partition" || name == "cbc-inactive-partition" || name == "description" || name == "serial-number" || name == "tan" || name == "pid" || name == "vid" || name == "chip-hardware-revision" || name == "new-deviation-number" || name == "clei" || name == "board-state" || name == "pld-motherboard" || name == "pld-power" || name == "monlib" || name == "rommon" || name == "cpu0")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::Pld()
    :
    type{YType::uint32, "type"},
    processor_higher_version{YType::uint32, "processor-higher-version"},
    processor_lower_version{YType::uint32, "processor-lower-version"}
{

    yang_name = "pld"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::~Pld()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| processor_higher_version.is_set
	|| processor_lower_version.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(processor_higher_version.yfilter)
	|| ydk::is_set(processor_lower_version.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (processor_higher_version.is_set || is_set(processor_higher_version.yfilter)) leaf_name_data.push_back(processor_higher_version.get_name_leafdata());
    if (processor_lower_version.is_set || is_set(processor_lower_version.yfilter)) leaf_name_data.push_back(processor_lower_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version = value;
        processor_higher_version.value_namespace = name_space;
        processor_higher_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version = value;
        processor_lower_version.value_namespace = name_space;
        processor_lower_version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version.yfilter = yfilter;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::Pld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "processor-higher-version" || name == "processor-lower-version")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::CbcActivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-active-partition"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::~CbcActivePartition()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-active-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcActivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::CbcInactivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-inactive-partition"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::~CbcInactivePartition()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-inactive-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Node::CbcInactivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Spa()
    :
    node{YType::str, "node"},
    name{YType::str, "name"},
    pca_unit_number{YType::str, "pca-unit-number"},
    pca_revision{YType::str, "pca-revision"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    clei{YType::str, "clei"},
    node_state{YType::enumeration, "node-state"}
        ,
    main(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision>())
{
    main->parent = this;
    hardware_revision->parent = this;

    yang_name = "spa"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::~Spa()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| name.is_set
	|| pca_unit_number.is_set
	|| pca_revision.is_set
	|| pid.is_set
	|| vid.is_set
	|| clei.is_set
	|| node_state.is_set
	|| (main !=  nullptr && main->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pca_unit_number.yfilter)
	|| ydk::is_set(pca_revision.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| (main !=  nullptr && main->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pca_unit_number.is_set || is_set(pca_unit_number.yfilter)) leaf_name_data.push_back(pca_unit_number.get_name_leafdata());
    if (pca_revision.is_set || is_set(pca_revision.yfilter)) leaf_name_data.push_back(pca_revision.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main")
    {
        if(main == nullptr)
        {
            main = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main>();
        }
        return main;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision>();
        }
        return hardware_revision;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main != nullptr)
    {
        _children["main"] = main;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number = value;
        pca_unit_number.value_namespace = name_space;
        pca_unit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-revision")
    {
        pca_revision = value;
        pca_revision.value_namespace = name_space;
        pca_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number.yfilter = yfilter;
    }
    if(value_path == "pca-revision")
    {
        pca_revision.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main" || name == "hardware-revision" || name == "node" || name == "name" || name == "pca-unit-number" || name == "pca-revision" || name == "pid" || name == "vid" || name == "clei" || name == "node-state")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::Main()
    :
    board_type{YType::uint32, "board-type"},
    tan{YType::str, "tan"},
    tan_revision{YType::str, "tan-revision"},
    deviation_number{YType::uint32, "deviation-number"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "main"; yang_parent_name = "spa"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::~Main()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::has_data() const
{
    if (is_presence_container) return true;
    return board_type.is_set
	|| tan.is_set
	|| tan_revision.is_set
	|| deviation_number.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(board_type.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(tan_revision.yfilter)
	|| ydk::is_set(deviation_number.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (board_type.is_set || is_set(board_type.yfilter)) leaf_name_data.push_back(board_type.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (tan_revision.is_set || is_set(tan_revision.yfilter)) leaf_name_data.push_back(tan_revision.get_name_leafdata());
    if (deviation_number.is_set || is_set(deviation_number.yfilter)) leaf_name_data.push_back(deviation_number.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "board-type")
    {
        board_type = value;
        board_type.value_namespace = name_space;
        board_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan-revision")
    {
        tan_revision = value;
        tan_revision.value_namespace = name_space;
        tan_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviation-number")
    {
        deviation_number = value;
        deviation_number.value_namespace = name_space;
        deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "board-type")
    {
        board_type.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "tan-revision")
    {
        tan_revision.yfilter = yfilter;
    }
    if(value_path == "deviation-number")
    {
        deviation_number.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::Main::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "board-type" || name == "tan" || name == "tan-revision" || name == "deviation-number" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "spa"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::FanTrays::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupplies()
    :
    power_supply(this, {"power_supply_name"})
{

    yang_name = "power-supplies"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::~PowerSupplies()
{
}

bool Diag::Racks::Rack::PowerSupplies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<power_supply.len(); index++)
    {
        if(power_supply[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::PowerSupplies::has_operation() const
{
    for (std::size_t index=0; index<power_supply.len(); index++)
    {
        if(power_supply[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supplies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "power-supply")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply>();
        ent_->parent = this;
        power_supply.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : power_supply.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::PowerSupplies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::PowerSupplies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "power-supply")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::PowerSupply()
    :
    power_supply_name{YType::str, "power-supply-name"}
        ,
    detail(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail>())
{
    detail->parent = this;

    yang_name = "power-supply"; yang_parent_name = "power-supplies"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::~PowerSupply()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::has_data() const
{
    if (is_presence_container) return true;
    return power_supply_name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(power_supply_name.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply";
    ADD_KEY_TOKEN(power_supply_name, "power-supply-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (power_supply_name.is_set || is_set(power_supply_name.yfilter)) leaf_name_data.push_back(power_supply_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "power-supply-name")
    {
        power_supply_name = value;
        power_supply_name.value_namespace = name_space;
        power_supply_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "power-supply-name")
    {
        power_supply_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "power-supply-name")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Detail()
    :
    node(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node>())
    , spa(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa>())
{
    node->parent = this;
    spa->parent = this;

    yang_name = "detail"; yang_parent_name = "power-supply"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::~Detail()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::has_data() const
{
    if (is_presence_container) return true;
    return (node !=  nullptr && node->has_data())
	|| (spa !=  nullptr && spa->has_data());
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (node !=  nullptr && node->has_operation())
	|| (spa !=  nullptr && spa->has_operation());
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node>();
        }
        return node;
    }

    if(child_yang_name == "spa")
    {
        if(spa == nullptr)
        {
            spa = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa>();
        }
        return spa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node != nullptr)
    {
        _children["node"] = node;
    }

    if(spa != nullptr)
    {
        _children["spa"] = spa;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "spa")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Node()
    :
    description{YType::str, "description"},
    serial_number{YType::str, "serial-number"},
    tan{YType::str, "tan"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    new_deviation_number{YType::uint32, "new-deviation-number"},
    clei{YType::str, "clei"},
    board_state{YType::enumeration, "board-state"},
    pld_motherboard{YType::str, "pld-motherboard"},
    pld_power{YType::str, "pld-power"},
    monlib{YType::str, "monlib"},
    rommon{YType::str, "rommon"},
    cpu0{YType::enumeration, "cpu0"}
        ,
    pld(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision>())
    , cbc_active_partition(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition>())
    , cbc_inactive_partition(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition>())
{
    pld->parent = this;
    hardware_revision->parent = this;
    cbc_active_partition->parent = this;
    cbc_inactive_partition->parent = this;

    yang_name = "node"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::~Node()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| serial_number.is_set
	|| tan.is_set
	|| pid.is_set
	|| vid.is_set
	|| chip_hardware_revision.is_set
	|| new_deviation_number.is_set
	|| clei.is_set
	|| board_state.is_set
	|| pld_motherboard.is_set
	|| pld_power.is_set
	|| monlib.is_set
	|| rommon.is_set
	|| cpu0.is_set
	|| (pld !=  nullptr && pld->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_data())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_data());
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(board_state.yfilter)
	|| ydk::is_set(pld_motherboard.yfilter)
	|| ydk::is_set(pld_power.yfilter)
	|| ydk::is_set(monlib.yfilter)
	|| ydk::is_set(rommon.yfilter)
	|| ydk::is_set(cpu0.yfilter)
	|| (pld !=  nullptr && pld->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_operation())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_operation());
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (board_state.is_set || is_set(board_state.yfilter)) leaf_name_data.push_back(board_state.get_name_leafdata());
    if (pld_motherboard.is_set || is_set(pld_motherboard.yfilter)) leaf_name_data.push_back(pld_motherboard.get_name_leafdata());
    if (pld_power.is_set || is_set(pld_power.yfilter)) leaf_name_data.push_back(pld_power.get_name_leafdata());
    if (monlib.is_set || is_set(monlib.yfilter)) leaf_name_data.push_back(monlib.get_name_leafdata());
    if (rommon.is_set || is_set(rommon.yfilter)) leaf_name_data.push_back(rommon.get_name_leafdata());
    if (cpu0.is_set || is_set(cpu0.yfilter)) leaf_name_data.push_back(cpu0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pld")
    {
        if(pld == nullptr)
        {
            pld = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld>();
        }
        return pld;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision>();
        }
        return hardware_revision;
    }

    if(child_yang_name == "cbc-active-partition")
    {
        if(cbc_active_partition == nullptr)
        {
            cbc_active_partition = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition>();
        }
        return cbc_active_partition;
    }

    if(child_yang_name == "cbc-inactive-partition")
    {
        if(cbc_inactive_partition == nullptr)
        {
            cbc_inactive_partition = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition>();
        }
        return cbc_inactive_partition;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pld != nullptr)
    {
        _children["pld"] = pld;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    if(cbc_active_partition != nullptr)
    {
        _children["cbc-active-partition"] = cbc_active_partition;
    }

    if(cbc_inactive_partition != nullptr)
    {
        _children["cbc-inactive-partition"] = cbc_inactive_partition;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "board-state")
    {
        board_state = value;
        board_state.value_namespace = name_space;
        board_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard = value;
        pld_motherboard.value_namespace = name_space;
        pld_motherboard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-power")
    {
        pld_power = value;
        pld_power.value_namespace = name_space;
        pld_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monlib")
    {
        monlib = value;
        monlib.value_namespace = name_space;
        monlib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rommon")
    {
        rommon = value;
        rommon.value_namespace = name_space;
        rommon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu0")
    {
        cpu0 = value;
        cpu0.value_namespace = name_space;
        cpu0.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "board-state")
    {
        board_state.yfilter = yfilter;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard.yfilter = yfilter;
    }
    if(value_path == "pld-power")
    {
        pld_power.yfilter = yfilter;
    }
    if(value_path == "monlib")
    {
        monlib.yfilter = yfilter;
    }
    if(value_path == "rommon")
    {
        rommon.yfilter = yfilter;
    }
    if(value_path == "cpu0")
    {
        cpu0.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pld" || name == "hardware-revision" || name == "cbc-active-partition" || name == "cbc-inactive-partition" || name == "description" || name == "serial-number" || name == "tan" || name == "pid" || name == "vid" || name == "chip-hardware-revision" || name == "new-deviation-number" || name == "clei" || name == "board-state" || name == "pld-motherboard" || name == "pld-power" || name == "monlib" || name == "rommon" || name == "cpu0")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::Pld()
    :
    type{YType::uint32, "type"},
    processor_higher_version{YType::uint32, "processor-higher-version"},
    processor_lower_version{YType::uint32, "processor-lower-version"}
{

    yang_name = "pld"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::~Pld()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| processor_higher_version.is_set
	|| processor_lower_version.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(processor_higher_version.yfilter)
	|| ydk::is_set(processor_lower_version.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (processor_higher_version.is_set || is_set(processor_higher_version.yfilter)) leaf_name_data.push_back(processor_higher_version.get_name_leafdata());
    if (processor_lower_version.is_set || is_set(processor_lower_version.yfilter)) leaf_name_data.push_back(processor_lower_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version = value;
        processor_higher_version.value_namespace = name_space;
        processor_higher_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version = value;
        processor_lower_version.value_namespace = name_space;
        processor_lower_version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version.yfilter = yfilter;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "processor-higher-version" || name == "processor-lower-version")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::CbcActivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-active-partition"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::~CbcActivePartition()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-active-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::CbcInactivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-inactive-partition"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::~CbcInactivePartition()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-inactive-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Spa()
    :
    node{YType::str, "node"},
    name{YType::str, "name"},
    pca_unit_number{YType::str, "pca-unit-number"},
    pca_revision{YType::str, "pca-revision"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    clei{YType::str, "clei"},
    node_state{YType::enumeration, "node-state"}
        ,
    main(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision>())
{
    main->parent = this;
    hardware_revision->parent = this;

    yang_name = "spa"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::~Spa()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| name.is_set
	|| pca_unit_number.is_set
	|| pca_revision.is_set
	|| pid.is_set
	|| vid.is_set
	|| clei.is_set
	|| node_state.is_set
	|| (main !=  nullptr && main->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data());
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pca_unit_number.yfilter)
	|| ydk::is_set(pca_revision.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| (main !=  nullptr && main->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation());
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pca_unit_number.is_set || is_set(pca_unit_number.yfilter)) leaf_name_data.push_back(pca_unit_number.get_name_leafdata());
    if (pca_revision.is_set || is_set(pca_revision.yfilter)) leaf_name_data.push_back(pca_revision.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main")
    {
        if(main == nullptr)
        {
            main = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main>();
        }
        return main;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision>();
        }
        return hardware_revision;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main != nullptr)
    {
        _children["main"] = main;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number = value;
        pca_unit_number.value_namespace = name_space;
        pca_unit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-revision")
    {
        pca_revision = value;
        pca_revision.value_namespace = name_space;
        pca_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number.yfilter = yfilter;
    }
    if(value_path == "pca-revision")
    {
        pca_revision.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main" || name == "hardware-revision" || name == "node" || name == "name" || name == "pca-unit-number" || name == "pca-revision" || name == "pid" || name == "vid" || name == "clei" || name == "node-state")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::Main()
    :
    board_type{YType::uint32, "board-type"},
    tan{YType::str, "tan"},
    tan_revision{YType::str, "tan-revision"},
    deviation_number{YType::uint32, "deviation-number"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "main"; yang_parent_name = "spa"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::~Main()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::has_data() const
{
    if (is_presence_container) return true;
    return board_type.is_set
	|| tan.is_set
	|| tan_revision.is_set
	|| deviation_number.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(board_type.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(tan_revision.yfilter)
	|| ydk::is_set(deviation_number.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (board_type.is_set || is_set(board_type.yfilter)) leaf_name_data.push_back(board_type.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (tan_revision.is_set || is_set(tan_revision.yfilter)) leaf_name_data.push_back(tan_revision.get_name_leafdata());
    if (deviation_number.is_set || is_set(deviation_number.yfilter)) leaf_name_data.push_back(deviation_number.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "board-type")
    {
        board_type = value;
        board_type.value_namespace = name_space;
        board_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan-revision")
    {
        tan_revision = value;
        tan_revision.value_namespace = name_space;
        tan_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviation-number")
    {
        deviation_number = value;
        deviation_number.value_namespace = name_space;
        deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "board-type")
    {
        board_type.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "tan-revision")
    {
        tan_revision.yfilter = yfilter;
    }
    if(value_path == "deviation-number")
    {
        deviation_number.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "board-type" || name == "tan" || name == "tan-revision" || name == "deviation-number" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "spa"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slots()
    :
    slot(this, {"slot_name"})
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::~Slots()
{
}

bool Diag::Racks::Rack::Slots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot>();
        ent_->parent = this;
        slot.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slot.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Slot()
    :
    slot_name{YType::str, "slot-name"}
        ,
    detail(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail>())
    , instances(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances>())
{
    detail->parent = this;
    instances->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Diag::Racks::Rack::Slots::Slot::has_data() const
{
    if (is_presence_container) return true;
    return slot_name.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (instances !=  nullptr && instances->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_name.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    ADD_KEY_TOKEN(slot_name, "slot-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_name.is_set || is_set(slot_name.yfilter)) leaf_name_data.push_back(slot_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    if(instances != nullptr)
    {
        _children["instances"] = instances;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-name")
    {
        slot_name = value;
        slot_name.value_namespace = name_space;
        slot_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-name")
    {
        slot_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "instances" || name == "slot-name")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::Detail()
    :
    node_detail(this, {})
    , spa_detail(this, {})
{

    yang_name = "detail"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::~Detail()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_detail.len(); index++)
    {
        if(node_detail[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spa_detail.len(); index++)
    {
        if(spa_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::has_operation() const
{
    for (std::size_t index=0; index<node_detail.len(); index++)
    {
        if(node_detail[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spa_detail.len(); index++)
    {
        if(spa_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-detail")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail>();
        ent_->parent = this;
        node_detail.append(ent_);
        return ent_;
    }

    if(child_yang_name == "spa-detail")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail>();
        ent_->parent = this;
        spa_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : spa_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-detail" || name == "spa-detail")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::NodeDetail()
    :
    description{YType::str, "description"},
    serial_number{YType::str, "serial-number"},
    tan{YType::str, "tan"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    new_deviation_number{YType::uint32, "new-deviation-number"},
    clei{YType::str, "clei"},
    board_state{YType::enumeration, "board-state"},
    pld_motherboard{YType::str, "pld-motherboard"},
    pld_power{YType::str, "pld-power"},
    monlib{YType::str, "monlib"},
    rommon{YType::str, "rommon"},
    cpu0{YType::enumeration, "cpu0"}
        ,
    pld(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision>())
    , cbc_active_partition(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition>())
    , cbc_inactive_partition(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition>())
{
    pld->parent = this;
    hardware_revision->parent = this;
    cbc_active_partition->parent = this;
    cbc_inactive_partition->parent = this;

    yang_name = "node-detail"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::~NodeDetail()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| serial_number.is_set
	|| tan.is_set
	|| pid.is_set
	|| vid.is_set
	|| chip_hardware_revision.is_set
	|| new_deviation_number.is_set
	|| clei.is_set
	|| board_state.is_set
	|| pld_motherboard.is_set
	|| pld_power.is_set
	|| monlib.is_set
	|| rommon.is_set
	|| cpu0.is_set
	|| (pld !=  nullptr && pld->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_data())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(board_state.yfilter)
	|| ydk::is_set(pld_motherboard.yfilter)
	|| ydk::is_set(pld_power.yfilter)
	|| ydk::is_set(monlib.yfilter)
	|| ydk::is_set(rommon.yfilter)
	|| ydk::is_set(cpu0.yfilter)
	|| (pld !=  nullptr && pld->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_operation())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (board_state.is_set || is_set(board_state.yfilter)) leaf_name_data.push_back(board_state.get_name_leafdata());
    if (pld_motherboard.is_set || is_set(pld_motherboard.yfilter)) leaf_name_data.push_back(pld_motherboard.get_name_leafdata());
    if (pld_power.is_set || is_set(pld_power.yfilter)) leaf_name_data.push_back(pld_power.get_name_leafdata());
    if (monlib.is_set || is_set(monlib.yfilter)) leaf_name_data.push_back(monlib.get_name_leafdata());
    if (rommon.is_set || is_set(rommon.yfilter)) leaf_name_data.push_back(rommon.get_name_leafdata());
    if (cpu0.is_set || is_set(cpu0.yfilter)) leaf_name_data.push_back(cpu0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pld")
    {
        if(pld == nullptr)
        {
            pld = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld>();
        }
        return pld;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision>();
        }
        return hardware_revision;
    }

    if(child_yang_name == "cbc-active-partition")
    {
        if(cbc_active_partition == nullptr)
        {
            cbc_active_partition = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition>();
        }
        return cbc_active_partition;
    }

    if(child_yang_name == "cbc-inactive-partition")
    {
        if(cbc_inactive_partition == nullptr)
        {
            cbc_inactive_partition = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition>();
        }
        return cbc_inactive_partition;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pld != nullptr)
    {
        _children["pld"] = pld;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    if(cbc_active_partition != nullptr)
    {
        _children["cbc-active-partition"] = cbc_active_partition;
    }

    if(cbc_inactive_partition != nullptr)
    {
        _children["cbc-inactive-partition"] = cbc_inactive_partition;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "board-state")
    {
        board_state = value;
        board_state.value_namespace = name_space;
        board_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard = value;
        pld_motherboard.value_namespace = name_space;
        pld_motherboard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-power")
    {
        pld_power = value;
        pld_power.value_namespace = name_space;
        pld_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monlib")
    {
        monlib = value;
        monlib.value_namespace = name_space;
        monlib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rommon")
    {
        rommon = value;
        rommon.value_namespace = name_space;
        rommon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu0")
    {
        cpu0 = value;
        cpu0.value_namespace = name_space;
        cpu0.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "board-state")
    {
        board_state.yfilter = yfilter;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard.yfilter = yfilter;
    }
    if(value_path == "pld-power")
    {
        pld_power.yfilter = yfilter;
    }
    if(value_path == "monlib")
    {
        monlib.yfilter = yfilter;
    }
    if(value_path == "rommon")
    {
        rommon.yfilter = yfilter;
    }
    if(value_path == "cpu0")
    {
        cpu0.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pld" || name == "hardware-revision" || name == "cbc-active-partition" || name == "cbc-inactive-partition" || name == "description" || name == "serial-number" || name == "tan" || name == "pid" || name == "vid" || name == "chip-hardware-revision" || name == "new-deviation-number" || name == "clei" || name == "board-state" || name == "pld-motherboard" || name == "pld-power" || name == "monlib" || name == "rommon" || name == "cpu0")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::Pld()
    :
    type{YType::uint32, "type"},
    processor_higher_version{YType::uint32, "processor-higher-version"},
    processor_lower_version{YType::uint32, "processor-lower-version"}
{

    yang_name = "pld"; yang_parent_name = "node-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::~Pld()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| processor_higher_version.is_set
	|| processor_lower_version.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(processor_higher_version.yfilter)
	|| ydk::is_set(processor_lower_version.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (processor_higher_version.is_set || is_set(processor_higher_version.yfilter)) leaf_name_data.push_back(processor_higher_version.get_name_leafdata());
    if (processor_lower_version.is_set || is_set(processor_lower_version.yfilter)) leaf_name_data.push_back(processor_lower_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version = value;
        processor_higher_version.value_namespace = name_space;
        processor_higher_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version = value;
        processor_lower_version.value_namespace = name_space;
        processor_lower_version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version.yfilter = yfilter;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "processor-higher-version" || name == "processor-lower-version")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "node-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::CbcActivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-active-partition"; yang_parent_name = "node-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::~CbcActivePartition()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-active-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::CbcInactivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-inactive-partition"; yang_parent_name = "node-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::~CbcInactivePartition()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-inactive-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::SpaDetail()
    :
    node{YType::str, "node"},
    name{YType::str, "name"},
    pca_unit_number{YType::str, "pca-unit-number"},
    pca_revision{YType::str, "pca-revision"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    clei{YType::str, "clei"},
    node_state{YType::enumeration, "node-state"}
        ,
    main(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision>())
{
    main->parent = this;
    hardware_revision->parent = this;

    yang_name = "spa-detail"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::~SpaDetail()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| name.is_set
	|| pca_unit_number.is_set
	|| pca_revision.is_set
	|| pid.is_set
	|| vid.is_set
	|| clei.is_set
	|| node_state.is_set
	|| (main !=  nullptr && main->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pca_unit_number.yfilter)
	|| ydk::is_set(pca_revision.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| (main !=  nullptr && main->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pca_unit_number.is_set || is_set(pca_unit_number.yfilter)) leaf_name_data.push_back(pca_unit_number.get_name_leafdata());
    if (pca_revision.is_set || is_set(pca_revision.yfilter)) leaf_name_data.push_back(pca_revision.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main")
    {
        if(main == nullptr)
        {
            main = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main>();
        }
        return main;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision>();
        }
        return hardware_revision;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main != nullptr)
    {
        _children["main"] = main;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number = value;
        pca_unit_number.value_namespace = name_space;
        pca_unit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-revision")
    {
        pca_revision = value;
        pca_revision.value_namespace = name_space;
        pca_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number.yfilter = yfilter;
    }
    if(value_path == "pca-revision")
    {
        pca_revision.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main" || name == "hardware-revision" || name == "node" || name == "name" || name == "pca-unit-number" || name == "pca-revision" || name == "pid" || name == "vid" || name == "clei" || name == "node-state")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::Main()
    :
    board_type{YType::uint32, "board-type"},
    tan{YType::str, "tan"},
    tan_revision{YType::str, "tan-revision"},
    deviation_number{YType::uint32, "deviation-number"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "main"; yang_parent_name = "spa-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::~Main()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::has_data() const
{
    if (is_presence_container) return true;
    return board_type.is_set
	|| tan.is_set
	|| tan_revision.is_set
	|| deviation_number.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(board_type.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(tan_revision.yfilter)
	|| ydk::is_set(deviation_number.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (board_type.is_set || is_set(board_type.yfilter)) leaf_name_data.push_back(board_type.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (tan_revision.is_set || is_set(tan_revision.yfilter)) leaf_name_data.push_back(tan_revision.get_name_leafdata());
    if (deviation_number.is_set || is_set(deviation_number.yfilter)) leaf_name_data.push_back(deviation_number.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "board-type")
    {
        board_type = value;
        board_type.value_namespace = name_space;
        board_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan-revision")
    {
        tan_revision = value;
        tan_revision.value_namespace = name_space;
        tan_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviation-number")
    {
        deviation_number = value;
        deviation_number.value_namespace = name_space;
        deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "board-type")
    {
        board_type.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "tan-revision")
    {
        tan_revision.yfilter = yfilter;
    }
    if(value_path == "deviation-number")
    {
        deviation_number.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "board-type" || name == "tan" || name == "tan-revision" || name == "deviation-number" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "spa-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instances()
    :
    instance(this, {"instance_name"})
{

    yang_name = "instances"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::~Instances()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    detail(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail>())
{
    detail->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::~Instance()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "instance-name")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Detail()
    :
    node(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node>())
    , spa(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa>())
{
    node->parent = this;
    spa->parent = this;

    yang_name = "detail"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::~Detail()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_data() const
{
    if (is_presence_container) return true;
    return (node !=  nullptr && node->has_data())
	|| (spa !=  nullptr && spa->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (node !=  nullptr && node->has_operation())
	|| (spa !=  nullptr && spa->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node>();
        }
        return node;
    }

    if(child_yang_name == "spa")
    {
        if(spa == nullptr)
        {
            spa = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa>();
        }
        return spa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node != nullptr)
    {
        _children["node"] = node;
    }

    if(spa != nullptr)
    {
        _children["spa"] = spa;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "spa")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Node()
    :
    description{YType::str, "description"},
    serial_number{YType::str, "serial-number"},
    tan{YType::str, "tan"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    new_deviation_number{YType::uint32, "new-deviation-number"},
    clei{YType::str, "clei"},
    board_state{YType::enumeration, "board-state"},
    pld_motherboard{YType::str, "pld-motherboard"},
    pld_power{YType::str, "pld-power"},
    monlib{YType::str, "monlib"},
    rommon{YType::str, "rommon"},
    cpu0{YType::enumeration, "cpu0"}
        ,
    pld(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision>())
    , cbc_active_partition(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition>())
    , cbc_inactive_partition(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition>())
{
    pld->parent = this;
    hardware_revision->parent = this;
    cbc_active_partition->parent = this;
    cbc_inactive_partition->parent = this;

    yang_name = "node"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::~Node()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| serial_number.is_set
	|| tan.is_set
	|| pid.is_set
	|| vid.is_set
	|| chip_hardware_revision.is_set
	|| new_deviation_number.is_set
	|| clei.is_set
	|| board_state.is_set
	|| pld_motherboard.is_set
	|| pld_power.is_set
	|| monlib.is_set
	|| rommon.is_set
	|| cpu0.is_set
	|| (pld !=  nullptr && pld->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_data())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(board_state.yfilter)
	|| ydk::is_set(pld_motherboard.yfilter)
	|| ydk::is_set(pld_power.yfilter)
	|| ydk::is_set(monlib.yfilter)
	|| ydk::is_set(rommon.yfilter)
	|| ydk::is_set(cpu0.yfilter)
	|| (pld !=  nullptr && pld->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation())
	|| (cbc_active_partition !=  nullptr && cbc_active_partition->has_operation())
	|| (cbc_inactive_partition !=  nullptr && cbc_inactive_partition->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (board_state.is_set || is_set(board_state.yfilter)) leaf_name_data.push_back(board_state.get_name_leafdata());
    if (pld_motherboard.is_set || is_set(pld_motherboard.yfilter)) leaf_name_data.push_back(pld_motherboard.get_name_leafdata());
    if (pld_power.is_set || is_set(pld_power.yfilter)) leaf_name_data.push_back(pld_power.get_name_leafdata());
    if (monlib.is_set || is_set(monlib.yfilter)) leaf_name_data.push_back(monlib.get_name_leafdata());
    if (rommon.is_set || is_set(rommon.yfilter)) leaf_name_data.push_back(rommon.get_name_leafdata());
    if (cpu0.is_set || is_set(cpu0.yfilter)) leaf_name_data.push_back(cpu0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pld")
    {
        if(pld == nullptr)
        {
            pld = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld>();
        }
        return pld;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision>();
        }
        return hardware_revision;
    }

    if(child_yang_name == "cbc-active-partition")
    {
        if(cbc_active_partition == nullptr)
        {
            cbc_active_partition = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition>();
        }
        return cbc_active_partition;
    }

    if(child_yang_name == "cbc-inactive-partition")
    {
        if(cbc_inactive_partition == nullptr)
        {
            cbc_inactive_partition = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition>();
        }
        return cbc_inactive_partition;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pld != nullptr)
    {
        _children["pld"] = pld;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    if(cbc_active_partition != nullptr)
    {
        _children["cbc-active-partition"] = cbc_active_partition;
    }

    if(cbc_inactive_partition != nullptr)
    {
        _children["cbc-inactive-partition"] = cbc_inactive_partition;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "board-state")
    {
        board_state = value;
        board_state.value_namespace = name_space;
        board_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard = value;
        pld_motherboard.value_namespace = name_space;
        pld_motherboard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pld-power")
    {
        pld_power = value;
        pld_power.value_namespace = name_space;
        pld_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monlib")
    {
        monlib = value;
        monlib.value_namespace = name_space;
        monlib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rommon")
    {
        rommon = value;
        rommon.value_namespace = name_space;
        rommon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu0")
    {
        cpu0 = value;
        cpu0.value_namespace = name_space;
        cpu0.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "board-state")
    {
        board_state.yfilter = yfilter;
    }
    if(value_path == "pld-motherboard")
    {
        pld_motherboard.yfilter = yfilter;
    }
    if(value_path == "pld-power")
    {
        pld_power.yfilter = yfilter;
    }
    if(value_path == "monlib")
    {
        monlib.yfilter = yfilter;
    }
    if(value_path == "rommon")
    {
        rommon.yfilter = yfilter;
    }
    if(value_path == "cpu0")
    {
        cpu0.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pld" || name == "hardware-revision" || name == "cbc-active-partition" || name == "cbc-inactive-partition" || name == "description" || name == "serial-number" || name == "tan" || name == "pid" || name == "vid" || name == "chip-hardware-revision" || name == "new-deviation-number" || name == "clei" || name == "board-state" || name == "pld-motherboard" || name == "pld-power" || name == "monlib" || name == "rommon" || name == "cpu0")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::Pld()
    :
    type{YType::uint32, "type"},
    processor_higher_version{YType::uint32, "processor-higher-version"},
    processor_lower_version{YType::uint32, "processor-lower-version"}
{

    yang_name = "pld"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::~Pld()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| processor_higher_version.is_set
	|| processor_lower_version.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(processor_higher_version.yfilter)
	|| ydk::is_set(processor_lower_version.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (processor_higher_version.is_set || is_set(processor_higher_version.yfilter)) leaf_name_data.push_back(processor_higher_version.get_name_leafdata());
    if (processor_lower_version.is_set || is_set(processor_lower_version.yfilter)) leaf_name_data.push_back(processor_lower_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version = value;
        processor_higher_version.value_namespace = name_space;
        processor_higher_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version = value;
        processor_lower_version.value_namespace = name_space;
        processor_lower_version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "processor-higher-version")
    {
        processor_higher_version.yfilter = yfilter;
    }
    if(value_path == "processor-lower-version")
    {
        processor_lower_version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "processor-higher-version" || name == "processor-lower-version")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::CbcActivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-active-partition"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::~CbcActivePartition()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-active-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::CbcInactivePartition()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "cbc-inactive-partition"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::~CbcInactivePartition()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbc-inactive-partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Spa()
    :
    node{YType::str, "node"},
    name{YType::str, "name"},
    pca_unit_number{YType::str, "pca-unit-number"},
    pca_revision{YType::str, "pca-revision"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    clei{YType::str, "clei"},
    node_state{YType::enumeration, "node-state"}
        ,
    main(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main>())
    , hardware_revision(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision>())
{
    main->parent = this;
    hardware_revision->parent = this;

    yang_name = "spa"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::~Spa()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| name.is_set
	|| pca_unit_number.is_set
	|| pca_revision.is_set
	|| pid.is_set
	|| vid.is_set
	|| clei.is_set
	|| node_state.is_set
	|| (main !=  nullptr && main->has_data())
	|| (hardware_revision !=  nullptr && hardware_revision->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pca_unit_number.yfilter)
	|| ydk::is_set(pca_revision.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| (main !=  nullptr && main->has_operation())
	|| (hardware_revision !=  nullptr && hardware_revision->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pca_unit_number.is_set || is_set(pca_unit_number.yfilter)) leaf_name_data.push_back(pca_unit_number.get_name_leafdata());
    if (pca_revision.is_set || is_set(pca_revision.yfilter)) leaf_name_data.push_back(pca_revision.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main")
    {
        if(main == nullptr)
        {
            main = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main>();
        }
        return main;
    }

    if(child_yang_name == "hardware-revision")
    {
        if(hardware_revision == nullptr)
        {
            hardware_revision = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision>();
        }
        return hardware_revision;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main != nullptr)
    {
        _children["main"] = main;
    }

    if(hardware_revision != nullptr)
    {
        _children["hardware-revision"] = hardware_revision;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number = value;
        pca_unit_number.value_namespace = name_space;
        pca_unit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pca-revision")
    {
        pca_revision = value;
        pca_revision.value_namespace = name_space;
        pca_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pca-unit-number")
    {
        pca_unit_number.yfilter = yfilter;
    }
    if(value_path == "pca-revision")
    {
        pca_revision.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main" || name == "hardware-revision" || name == "node" || name == "name" || name == "pca-unit-number" || name == "pca-revision" || name == "pid" || name == "vid" || name == "clei" || name == "node-state")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::Main()
    :
    board_type{YType::uint32, "board-type"},
    tan{YType::str, "tan"},
    tan_revision{YType::str, "tan-revision"},
    deviation_number{YType::uint32, "deviation-number"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "main"; yang_parent_name = "spa"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::~Main()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::has_data() const
{
    if (is_presence_container) return true;
    return board_type.is_set
	|| tan.is_set
	|| tan_revision.is_set
	|| deviation_number.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(board_type.yfilter)
	|| ydk::is_set(tan.yfilter)
	|| ydk::is_set(tan_revision.yfilter)
	|| ydk::is_set(deviation_number.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (board_type.is_set || is_set(board_type.yfilter)) leaf_name_data.push_back(board_type.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());
    if (tan_revision.is_set || is_set(tan_revision.yfilter)) leaf_name_data.push_back(tan_revision.get_name_leafdata());
    if (deviation_number.is_set || is_set(deviation_number.yfilter)) leaf_name_data.push_back(deviation_number.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "board-type")
    {
        board_type = value;
        board_type.value_namespace = name_space;
        board_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan-revision")
    {
        tan_revision = value;
        tan_revision.value_namespace = name_space;
        tan_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviation-number")
    {
        deviation_number = value;
        deviation_number.value_namespace = name_space;
        deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "board-type")
    {
        board_type.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
    if(value_path == "tan-revision")
    {
        tan_revision.yfilter = yfilter;
    }
    if(value_path == "deviation-number")
    {
        deviation_number.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "board-type" || name == "tan" || name == "tan-revision" || name == "deviation-number" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision()
    :
    hardware_revision(this, {})
{

    yang_name = "hardware-revision"; yang_parent_name = "spa"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::~HardwareRevision()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::has_operation() const
{
    for (std::size_t index=0; index<hardware_revision.len(); index++)
    {
        if(hardware_revision[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-revision")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_>();
        ent_->parent = this;
        hardware_revision.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hardware_revision.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HardwareRevision_()
    :
    node_description{YType::str, "node-description"},
    version{YType::str, "version"}
        ,
    hw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev>())
    , fw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev>())
    , sw_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev>())
    , dimm_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev>())
    , ssd_rev(std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev>())
{
    hw_rev->parent = this;
    fw_rev->parent = this;
    sw_rev->parent = this;
    dimm_rev->parent = this;
    ssd_rev->parent = this;

    yang_name = "hardware-revision"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::~HardwareRevision_()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::has_data() const
{
    if (is_presence_container) return true;
    return node_description.is_set
	|| version.is_set
	|| (hw_rev !=  nullptr && hw_rev->has_data())
	|| (fw_rev !=  nullptr && fw_rev->has_data())
	|| (sw_rev !=  nullptr && sw_rev->has_data())
	|| (dimm_rev !=  nullptr && dimm_rev->has_data())
	|| (ssd_rev !=  nullptr && ssd_rev->has_data());
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_description.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (hw_rev !=  nullptr && hw_rev->has_operation())
	|| (fw_rev !=  nullptr && fw_rev->has_operation())
	|| (sw_rev !=  nullptr && sw_rev->has_operation())
	|| (dimm_rev !=  nullptr && dimm_rev->has_operation())
	|| (ssd_rev !=  nullptr && ssd_rev->has_operation());
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-revision";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_description.is_set || is_set(node_description.yfilter)) leaf_name_data.push_back(node_description.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-rev")
    {
        if(hw_rev == nullptr)
        {
            hw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev>();
        }
        return hw_rev;
    }

    if(child_yang_name == "fw-rev")
    {
        if(fw_rev == nullptr)
        {
            fw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev>();
        }
        return fw_rev;
    }

    if(child_yang_name == "sw-rev")
    {
        if(sw_rev == nullptr)
        {
            sw_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev>();
        }
        return sw_rev;
    }

    if(child_yang_name == "dimm-rev")
    {
        if(dimm_rev == nullptr)
        {
            dimm_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev>();
        }
        return dimm_rev;
    }

    if(child_yang_name == "ssd-rev")
    {
        if(ssd_rev == nullptr)
        {
            ssd_rev = std::make_shared<Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev>();
        }
        return ssd_rev;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_rev != nullptr)
    {
        _children["hw-rev"] = hw_rev;
    }

    if(fw_rev != nullptr)
    {
        _children["fw-rev"] = fw_rev;
    }

    if(sw_rev != nullptr)
    {
        _children["sw-rev"] = sw_rev;
    }

    if(dimm_rev != nullptr)
    {
        _children["dimm-rev"] = dimm_rev;
    }

    if(ssd_rev != nullptr)
    {
        _children["ssd-rev"] = ssd_rev;
    }

    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-description")
    {
        node_description = value;
        node_description.value_namespace = name_space;
        node_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-description")
    {
        node_description.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-rev" || name == "fw-rev" || name == "sw-rev" || name == "dimm-rev" || name == "ssd-rev" || name == "node-description" || name == "version")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::HwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "hw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::~HwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::FwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "fw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::~FwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::SwRev()
    :
    major_revision{YType::uint32, "major-revision"},
    minor_revision{YType::uint32, "minor-revision"}
{

    yang_name = "sw-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::~SwRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_data() const
{
    if (is_presence_container) return true;
    return major_revision.is_set
	|| minor_revision.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(major_revision.yfilter)
	|| ydk::is_set(minor_revision.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (major_revision.is_set || is_set(major_revision.yfilter)) leaf_name_data.push_back(major_revision.get_name_leafdata());
    if (minor_revision.is_set || is_set(minor_revision.yfilter)) leaf_name_data.push_back(minor_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "major-revision")
    {
        major_revision = value;
        major_revision.value_namespace = name_space;
        major_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor-revision")
    {
        minor_revision = value;
        minor_revision.value_namespace = name_space;
        minor_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "major-revision")
    {
        major_revision.yfilter = yfilter;
    }
    if(value_path == "minor-revision")
    {
        minor_revision.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "major-revision" || name == "minor-revision")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::DimmRev()
    :
    size{YType::uint32, "size"},
    speed{YType::uint32, "speed"},
    locator{YType::str, "locator"},
    cas{YType::uint32, "cas"}
{

    yang_name = "dimm-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::~DimmRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| speed.is_set
	|| locator.is_set
	|| cas.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| ydk::is_set(cas.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "speed" || name == "locator" || name == "cas")
        return true;
    return false;
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::SsdRev()
    :
    number{YType::str, "number"},
    fw_rev{YType::str, "fw-rev"},
    serial_number{YType::str, "serial-number"}
{

    yang_name = "ssd-rev"; yang_parent_name = "hardware-revision"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::~SsdRev()
{
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| fw_rev.is_set
	|| serial_number.is_set;
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(fw_rev.yfilter)
	|| ydk::is_set(serial_number.yfilter);
}

std::string Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssd-rev";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (fw_rev.is_set || is_set(fw_rev.yfilter)) leaf_name_data.push_back(fw_rev.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fw-rev")
    {
        fw_rev = value;
        fw_rev.value_namespace = name_space;
        fw_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "fw-rev")
    {
        fw_rev.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "fw-rev" || name == "serial-number")
        return true;
    return false;
}

Diag::Racks::Rack::Chassis::Chassis()
    :
    serial_number{YType::str, "serial-number"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    description{YType::str, "description"},
    clei{YType::str, "clei"},
    tan{YType::str, "tan"}
{

    yang_name = "chassis"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Chassis::~Chassis()
{
}

bool Diag::Racks::Rack::Chassis::has_data() const
{
    if (is_presence_container) return true;
    return serial_number.is_set
	|| pid.is_set
	|| vid.is_set
	|| description.is_set
	|| clei.is_set
	|| tan.is_set;
}

bool Diag::Racks::Rack::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(tan.yfilter);
}

std::string Diag::Racks::Rack::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (tan.is_set || is_set(tan.yfilter)) leaf_name_data.push_back(tan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tan")
    {
        tan = value;
        tan.value_namespace = name_space;
        tan.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "tan")
    {
        tan.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial-number" || name == "pid" || name == "vid" || name == "description" || name == "clei" || name == "tan")
        return true;
    return false;
}

Diag::Racks::Rack::Summary::Summary()
    :
    summary(this, {})
{

    yang_name = "summary"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Summary::~Summary()
{
}

bool Diag::Racks::Rack::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Racks::Rack::Summary::has_operation() const
{
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Racks::Rack::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        auto ent_ = std::make_shared<Diag::Racks::Rack::Summary::Summary_>();
        ent_->parent = this;
        summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Diag::Racks::Rack::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Racks::Rack::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Racks::Rack::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

Diag::Racks::Rack::Summary::Summary_::Summary_()
    :
    type{YType::enumeration, "type"},
    node{YType::str, "node"},
    slot_type{YType::enumeration, "slot-type"},
    description{YType::str, "description"}
{

    yang_name = "summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Racks::Rack::Summary::Summary_::~Summary_()
{
}

bool Diag::Racks::Rack::Summary::Summary_::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| node.is_set
	|| slot_type.is_set
	|| description.is_set;
}

bool Diag::Racks::Rack::Summary::Summary_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(slot_type.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Diag::Racks::Rack::Summary::Summary_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Racks::Rack::Summary::Summary_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (slot_type.is_set || is_set(slot_type.yfilter)) leaf_name_data.push_back(slot_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Diag::Racks::Rack::Summary::Summary_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Diag::Racks::Rack::Summary::Summary_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Diag::Racks::Rack::Summary::Summary_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-type")
    {
        slot_type = value;
        slot_type.value_namespace = name_space;
        slot_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Racks::Rack::Summary::Summary_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "slot-type")
    {
        slot_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Diag::Racks::Rack::Summary::Summary_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "node" || name == "slot-type" || name == "description")
        return true;
    return false;
}

const Enum::YLeaf DiagProcessor::mpc8614d {0, "mpc8614d"};

const Enum::YLeaf DiagSlot::fan_tray {0, "fan-tray"};
const Enum::YLeaf DiagSlot::power_module {1, "power-module"};
const Enum::YLeaf DiagSlot::module {2, "module"};

const Enum::YLeaf NodeState::not_present {0, "not-present"};
const Enum::YLeaf NodeState::present {1, "present"};
const Enum::YLeaf NodeState::reset {2, "reset"};
const Enum::YLeaf NodeState::rommon {3, "rommon"};
const Enum::YLeaf NodeState::mbi_boot {4, "mbi-boot"};
const Enum::YLeaf NodeState::mbi_run {5, "mbi-run"};
const Enum::YLeaf NodeState::xr_run {6, "xr-run"};
const Enum::YLeaf NodeState::bring_down {7, "bring-down"};
const Enum::YLeaf NodeState::xr_fail {8, "xr-fail"};
const Enum::YLeaf NodeState::fdiag_run {9, "fdiag-run"};
const Enum::YLeaf NodeState::fdiag_fail {10, "fdiag-fail"};
const Enum::YLeaf NodeState::power {11, "power"};
const Enum::YLeaf NodeState::unpower {12, "unpower"};
const Enum::YLeaf NodeState::mdr_warm_reload {13, "mdr-warm-reload"};
const Enum::YLeaf NodeState::mdr_mbi_run {14, "mdr-mbi-run"};
const Enum::YLeaf NodeState::maintenance_mode {15, "maintenance-mode"};
const Enum::YLeaf NodeState::admin_down {16, "admin-down"};
const Enum::YLeaf NodeState::not_monitor {17, "not-monitor"};
const Enum::YLeaf NodeState::unknown_card {18, "unknown-card"};
const Enum::YLeaf NodeState::failed {19, "failed"};
const Enum::YLeaf NodeState::ok {20, "ok"};
const Enum::YLeaf NodeState::missing {21, "missing"};
const Enum::YLeaf NodeState::diag_download {22, "diag-download"};
const Enum::YLeaf NodeState::diag_not_monitor {23, "diag-not-monitor"};
const Enum::YLeaf NodeState::fabric_diag_not_monitor {24, "fabric-diag-not-monitor"};
const Enum::YLeaf NodeState::diag_rp_launch {25, "diag-rp-launch"};
const Enum::YLeaf NodeState::diag_run {26, "diag-run"};
const Enum::YLeaf NodeState::diag_pass {27, "diag-pass"};
const Enum::YLeaf NodeState::diag_fail {28, "diag-fail"};
const Enum::YLeaf NodeState::diag_timeout {29, "diag-timeout"};
const Enum::YLeaf NodeState::disable {30, "disable"};
const Enum::YLeaf NodeState::spa_boot {31, "spa-boot"};
const Enum::YLeaf NodeState::not_allowed_online {32, "not-allowed-online"};
const Enum::YLeaf NodeState::stop {33, "stop"};
const Enum::YLeaf NodeState::incomp_version {34, "incomp-version"};
const Enum::YLeaf NodeState::fpd_hold {35, "fpd-hold"};
const Enum::YLeaf NodeState::xr_preparation {36, "xr-preparation"};
const Enum::YLeaf NodeState::sync_ready {37, "sync-ready"};
const Enum::YLeaf NodeState::xr_isolate {38, "xr-isolate"};
const Enum::YLeaf NodeState::ready {39, "ready"};
const Enum::YLeaf NodeState::invalid {40, "invalid"};
const Enum::YLeaf NodeState::operational {41, "operational"};
const Enum::YLeaf NodeState::operational_lock {42, "operational-lock"};
const Enum::YLeaf NodeState::going_down {43, "going-down"};
const Enum::YLeaf NodeState::going_offline {44, "going-offline"};
const Enum::YLeaf NodeState::going_online {45, "going-online"};
const Enum::YLeaf NodeState::offline {46, "offline"};
const Enum::YLeaf NodeState::up {47, "up"};
const Enum::YLeaf NodeState::down {48, "down"};
const Enum::YLeaf NodeState::max {49, "max"};
const Enum::YLeaf NodeState::unknown {50, "unknown"};

const Enum::YLeaf DiagNode::node {0, "node"};
const Enum::YLeaf DiagNode::spa {1, "spa"};


}
}

