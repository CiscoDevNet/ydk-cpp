
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_22.hpp"
#include "Cisco_NX_OS_device_23.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::SnmpItems::InstItems::TrapsItems::LicenseItems::LicenseItems()
    :
    notifylicenseexpiry_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems>())
    , notifylicenseexpirywarning_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems>())
    , notifylicensefilemissing_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems>())
    , notifynolicenseforfeature_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems>())
{
    notifylicenseexpiry_items->parent = this;
    notifylicenseexpirywarning_items->parent = this;
    notifylicensefilemissing_items->parent = this;
    notifynolicenseforfeature_items->parent = this;

    yang_name = "license-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::~LicenseItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::has_data() const
{
    if (is_presence_container) return true;
    return (notifylicenseexpiry_items !=  nullptr && notifylicenseexpiry_items->has_data())
	|| (notifylicenseexpirywarning_items !=  nullptr && notifylicenseexpirywarning_items->has_data())
	|| (notifylicensefilemissing_items !=  nullptr && notifylicensefilemissing_items->has_data())
	|| (notifynolicenseforfeature_items !=  nullptr && notifynolicenseforfeature_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::has_operation() const
{
    return is_set(yfilter)
	|| (notifylicenseexpiry_items !=  nullptr && notifylicenseexpiry_items->has_operation())
	|| (notifylicenseexpirywarning_items !=  nullptr && notifylicenseexpirywarning_items->has_operation())
	|| (notifylicensefilemissing_items !=  nullptr && notifylicensefilemissing_items->has_operation())
	|| (notifynolicenseforfeature_items !=  nullptr && notifynolicenseforfeature_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notifylicenseexpiry-items")
    {
        if(notifylicenseexpiry_items == nullptr)
        {
            notifylicenseexpiry_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems>();
        }
        return notifylicenseexpiry_items;
    }

    if(child_yang_name == "notifylicenseexpirywarning-items")
    {
        if(notifylicenseexpirywarning_items == nullptr)
        {
            notifylicenseexpirywarning_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems>();
        }
        return notifylicenseexpirywarning_items;
    }

    if(child_yang_name == "notifylicensefilemissing-items")
    {
        if(notifylicensefilemissing_items == nullptr)
        {
            notifylicensefilemissing_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems>();
        }
        return notifylicensefilemissing_items;
    }

    if(child_yang_name == "notifynolicenseforfeature-items")
    {
        if(notifynolicenseforfeature_items == nullptr)
        {
            notifynolicenseforfeature_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems>();
        }
        return notifynolicenseforfeature_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(notifylicenseexpiry_items != nullptr)
    {
        children["notifylicenseexpiry-items"] = notifylicenseexpiry_items;
    }

    if(notifylicenseexpirywarning_items != nullptr)
    {
        children["notifylicenseexpirywarning-items"] = notifylicenseexpirywarning_items;
    }

    if(notifylicensefilemissing_items != nullptr)
    {
        children["notifylicensefilemissing-items"] = notifylicensefilemissing_items;
    }

    if(notifynolicenseforfeature_items != nullptr)
    {
        children["notifynolicenseforfeature-items"] = notifynolicenseforfeature_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifylicenseexpiry-items" || name == "notifylicenseexpirywarning-items" || name == "notifylicensefilemissing-items" || name == "notifynolicenseforfeature-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::NotifylicenseexpiryItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifylicenseexpiry-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::~NotifylicenseexpiryItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifylicenseexpiry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::NotifylicenseexpirywarningItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifylicenseexpirywarning-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::~NotifylicenseexpirywarningItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifylicenseexpirywarning-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::NotifylicensefilemissingItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifylicensefilemissing-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::~NotifylicensefilemissingItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifylicensefilemissing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::NotifynolicenseforfeatureItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifynolicenseforfeature-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::~NotifynolicenseforfeatureItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifynolicenseforfeature-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::PoeItems()
    :
    policenotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems>())
    , controlenable_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems>())
{
    policenotify_items->parent = this;
    controlenable_items->parent = this;

    yang_name = "poe-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::~PoeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::has_data() const
{
    if (is_presence_container) return true;
    return (policenotify_items !=  nullptr && policenotify_items->has_data())
	|| (controlenable_items !=  nullptr && controlenable_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::has_operation() const
{
    return is_set(yfilter)
	|| (policenotify_items !=  nullptr && policenotify_items->has_operation())
	|| (controlenable_items !=  nullptr && controlenable_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policenotify-items")
    {
        if(policenotify_items == nullptr)
        {
            policenotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems>();
        }
        return policenotify_items;
    }

    if(child_yang_name == "controlenable-items")
    {
        if(controlenable_items == nullptr)
        {
            controlenable_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems>();
        }
        return controlenable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policenotify_items != nullptr)
    {
        children["policenotify-items"] = policenotify_items;
    }

    if(controlenable_items != nullptr)
    {
        children["controlenable-items"] = controlenable_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policenotify-items" || name == "controlenable-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::PolicenotifyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "policenotify-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::~PolicenotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policenotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::ControlenableItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "controlenable-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::~ControlenableItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controlenable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkItems()
    :
    ciscoxcvrmonstatuschg_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems>())
    , linkdown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems>())
    , linkup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems>())
    , extendedlinkdown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems>())
    , extendedlinkup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems>())
    , cielinkdown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems>())
    , cielinkup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems>())
    , delayedlinkstatechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems>())
    , cerrdisableinterfaceeventrev1_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items>())
{
    ciscoxcvrmonstatuschg_items->parent = this;
    linkdown_items->parent = this;
    linkup_items->parent = this;
    extendedlinkdown_items->parent = this;
    extendedlinkup_items->parent = this;
    cielinkdown_items->parent = this;
    cielinkup_items->parent = this;
    delayedlinkstatechange_items->parent = this;
    cerrdisableinterfaceeventrev1_items->parent = this;

    yang_name = "link-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::~LinkItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoxcvrmonstatuschg_items !=  nullptr && ciscoxcvrmonstatuschg_items->has_data())
	|| (linkdown_items !=  nullptr && linkdown_items->has_data())
	|| (linkup_items !=  nullptr && linkup_items->has_data())
	|| (extendedlinkdown_items !=  nullptr && extendedlinkdown_items->has_data())
	|| (extendedlinkup_items !=  nullptr && extendedlinkup_items->has_data())
	|| (cielinkdown_items !=  nullptr && cielinkdown_items->has_data())
	|| (cielinkup_items !=  nullptr && cielinkup_items->has_data())
	|| (delayedlinkstatechange_items !=  nullptr && delayedlinkstatechange_items->has_data())
	|| (cerrdisableinterfaceeventrev1_items !=  nullptr && cerrdisableinterfaceeventrev1_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoxcvrmonstatuschg_items !=  nullptr && ciscoxcvrmonstatuschg_items->has_operation())
	|| (linkdown_items !=  nullptr && linkdown_items->has_operation())
	|| (linkup_items !=  nullptr && linkup_items->has_operation())
	|| (extendedlinkdown_items !=  nullptr && extendedlinkdown_items->has_operation())
	|| (extendedlinkup_items !=  nullptr && extendedlinkup_items->has_operation())
	|| (cielinkdown_items !=  nullptr && cielinkdown_items->has_operation())
	|| (cielinkup_items !=  nullptr && cielinkup_items->has_operation())
	|| (delayedlinkstatechange_items !=  nullptr && delayedlinkstatechange_items->has_operation())
	|| (cerrdisableinterfaceeventrev1_items !=  nullptr && cerrdisableinterfaceeventrev1_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoxcvrmonstatuschg-items")
    {
        if(ciscoxcvrmonstatuschg_items == nullptr)
        {
            ciscoxcvrmonstatuschg_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems>();
        }
        return ciscoxcvrmonstatuschg_items;
    }

    if(child_yang_name == "linkDown-items")
    {
        if(linkdown_items == nullptr)
        {
            linkdown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems>();
        }
        return linkdown_items;
    }

    if(child_yang_name == "linkUp-items")
    {
        if(linkup_items == nullptr)
        {
            linkup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems>();
        }
        return linkup_items;
    }

    if(child_yang_name == "extendedlinkDown-items")
    {
        if(extendedlinkdown_items == nullptr)
        {
            extendedlinkdown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems>();
        }
        return extendedlinkdown_items;
    }

    if(child_yang_name == "extendedlinkUp-items")
    {
        if(extendedlinkup_items == nullptr)
        {
            extendedlinkup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems>();
        }
        return extendedlinkup_items;
    }

    if(child_yang_name == "cieLinkDown-items")
    {
        if(cielinkdown_items == nullptr)
        {
            cielinkdown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems>();
        }
        return cielinkdown_items;
    }

    if(child_yang_name == "cieLinkUp-items")
    {
        if(cielinkup_items == nullptr)
        {
            cielinkup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems>();
        }
        return cielinkup_items;
    }

    if(child_yang_name == "delayedlinkstatechange-items")
    {
        if(delayedlinkstatechange_items == nullptr)
        {
            delayedlinkstatechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems>();
        }
        return delayedlinkstatechange_items;
    }

    if(child_yang_name == "cErrDisableInterfaceEventRev1-items")
    {
        if(cerrdisableinterfaceeventrev1_items == nullptr)
        {
            cerrdisableinterfaceeventrev1_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items>();
        }
        return cerrdisableinterfaceeventrev1_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscoxcvrmonstatuschg_items != nullptr)
    {
        children["ciscoxcvrmonstatuschg-items"] = ciscoxcvrmonstatuschg_items;
    }

    if(linkdown_items != nullptr)
    {
        children["linkDown-items"] = linkdown_items;
    }

    if(linkup_items != nullptr)
    {
        children["linkUp-items"] = linkup_items;
    }

    if(extendedlinkdown_items != nullptr)
    {
        children["extendedlinkDown-items"] = extendedlinkdown_items;
    }

    if(extendedlinkup_items != nullptr)
    {
        children["extendedlinkUp-items"] = extendedlinkup_items;
    }

    if(cielinkdown_items != nullptr)
    {
        children["cieLinkDown-items"] = cielinkdown_items;
    }

    if(cielinkup_items != nullptr)
    {
        children["cieLinkUp-items"] = cielinkup_items;
    }

    if(delayedlinkstatechange_items != nullptr)
    {
        children["delayedlinkstatechange-items"] = delayedlinkstatechange_items;
    }

    if(cerrdisableinterfaceeventrev1_items != nullptr)
    {
        children["cErrDisableInterfaceEventRev1-items"] = cerrdisableinterfaceeventrev1_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoxcvrmonstatuschg-items" || name == "linkDown-items" || name == "linkUp-items" || name == "extendedlinkDown-items" || name == "extendedlinkUp-items" || name == "cieLinkDown-items" || name == "cieLinkUp-items" || name == "delayedlinkstatechange-items" || name == "cErrDisableInterfaceEventRev1-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::CiscoxcvrmonstatuschgItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ciscoxcvrmonstatuschg-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::~CiscoxcvrmonstatuschgItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoxcvrmonstatuschg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::LinkDownItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "linkDown-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::~LinkDownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linkDown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::LinkUpItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "linkUp-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::~LinkUpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linkUp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::ExtendedlinkDownItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "extendedlinkDown-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::~ExtendedlinkDownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extendedlinkDown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::ExtendedlinkUpItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "extendedlinkUp-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::~ExtendedlinkUpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extendedlinkUp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::CieLinkDownItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cieLinkDown-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::~CieLinkDownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieLinkDown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::CieLinkUpItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cieLinkUp-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::~CieLinkUpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieLinkUp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::DelayedlinkstatechangeItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "delayedlinkstatechange-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::~DelayedlinkstatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayedlinkstatechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::CErrDisableInterfaceEventRev1Items()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cErrDisableInterfaceEventRev1-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::~CErrDisableInterfaceEventRev1Items()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cErrDisableInterfaceEventRev1-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpItems()
    :
    lldpremtableschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems>())
{
    lldpremtableschange_items->parent = this;

    yang_name = "lldp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::~LldpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::has_data() const
{
    if (is_presence_container) return true;
    return (lldpremtableschange_items !=  nullptr && lldpremtableschange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::has_operation() const
{
    return is_set(yfilter)
	|| (lldpremtableschange_items !=  nullptr && lldpremtableschange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LldpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemTablesChange-items")
    {
        if(lldpremtableschange_items == nullptr)
        {
            lldpremtableschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems>();
        }
        return lldpremtableschange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lldpremtableschange_items != nullptr)
    {
        children["lldpRemTablesChange-items"] = lldpremtableschange_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTablesChange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::LldpRemTablesChangeItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "lldpRemTablesChange-items"; yang_parent_name = "lldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::~LldpRemTablesChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/lldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemTablesChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpItems()
    :
    msdpbackwardtransition_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems>())
{
    msdpbackwardtransition_items->parent = this;

    yang_name = "msdp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::~MsdpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::has_data() const
{
    if (is_presence_container) return true;
    return (msdpbackwardtransition_items !=  nullptr && msdpbackwardtransition_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::has_operation() const
{
    return is_set(yfilter)
	|| (msdpbackwardtransition_items !=  nullptr && msdpbackwardtransition_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpBackwardTransition-items")
    {
        if(msdpbackwardtransition_items == nullptr)
        {
            msdpbackwardtransition_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems>();
        }
        return msdpbackwardtransition_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(msdpbackwardtransition_items != nullptr)
    {
        children["msdpBackwardTransition-items"] = msdpbackwardtransition_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpBackwardTransition-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::MsdpBackwardTransitionItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "msdpBackwardTransition-items"; yang_parent_name = "msdp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::~MsdpBackwardTransitionItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/msdp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpBackwardTransition-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::MmodeItems()
    :
    csemaintmodechangenotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems>())
    , csenormalmodechangenotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems>())
{
    csemaintmodechangenotify_items->parent = this;
    csenormalmodechangenotify_items->parent = this;

    yang_name = "mmode-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::~MmodeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::has_data() const
{
    if (is_presence_container) return true;
    return (csemaintmodechangenotify_items !=  nullptr && csemaintmodechangenotify_items->has_data())
	|| (csenormalmodechangenotify_items !=  nullptr && csenormalmodechangenotify_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::has_operation() const
{
    return is_set(yfilter)
	|| (csemaintmodechangenotify_items !=  nullptr && csemaintmodechangenotify_items->has_operation())
	|| (csenormalmodechangenotify_items !=  nullptr && csenormalmodechangenotify_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mmode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cseMaintModeChangeNotify-items")
    {
        if(csemaintmodechangenotify_items == nullptr)
        {
            csemaintmodechangenotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems>();
        }
        return csemaintmodechangenotify_items;
    }

    if(child_yang_name == "cseNormalModeChangeNotify-items")
    {
        if(csenormalmodechangenotify_items == nullptr)
        {
            csenormalmodechangenotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems>();
        }
        return csenormalmodechangenotify_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(csemaintmodechangenotify_items != nullptr)
    {
        children["cseMaintModeChangeNotify-items"] = csemaintmodechangenotify_items;
    }

    if(csenormalmodechangenotify_items != nullptr)
    {
        children["cseNormalModeChangeNotify-items"] = csenormalmodechangenotify_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cseMaintModeChangeNotify-items" || name == "cseNormalModeChangeNotify-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::CseMaintModeChangeNotifyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cseMaintModeChangeNotify-items"; yang_parent_name = "mmode-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::~CseMaintModeChangeNotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mmode-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cseMaintModeChangeNotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::CseNormalModeChangeNotifyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cseNormalModeChangeNotify-items"; yang_parent_name = "mmode-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::~CseNormalModeChangeNotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mmode-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cseNormalModeChangeNotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PimItems::PimItems()
    :
    pimneighborloss_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems>())
{
    pimneighborloss_items->parent = this;

    yang_name = "pim-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PimItems::~PimItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::has_data() const
{
    if (is_presence_container) return true;
    return (pimneighborloss_items !=  nullptr && pimneighborloss_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::has_operation() const
{
    return is_set(yfilter)
	|| (pimneighborloss_items !=  nullptr && pimneighborloss_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PimItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PimItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimNeighborLoss-items")
    {
        if(pimneighborloss_items == nullptr)
        {
            pimneighborloss_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems>();
        }
        return pimneighborloss_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PimItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pimneighborloss_items != nullptr)
    {
        children["pimNeighborLoss-items"] = pimneighborloss_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborLoss-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::PimNeighborLossItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "pimNeighborLoss-items"; yang_parent_name = "pim-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::~PimNeighborLossItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/pim-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborLoss-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RfItems::RfItems()
    :
    redundancyframework_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems>())
{
    redundancyframework_items->parent = this;

    yang_name = "rf-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RfItems::~RfItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::has_data() const
{
    if (is_presence_container) return true;
    return (redundancyframework_items !=  nullptr && redundancyframework_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::has_operation() const
{
    return is_set(yfilter)
	|| (redundancyframework_items !=  nullptr && redundancyframework_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::RfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancyframework-items")
    {
        if(redundancyframework_items == nullptr)
        {
            redundancyframework_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems>();
        }
        return redundancyframework_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::RfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redundancyframework_items != nullptr)
    {
        children["redundancyframework-items"] = redundancyframework_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancyframework-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::RedundancyframeworkItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "redundancyframework-items"; yang_parent_name = "rf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::~RedundancyframeworkItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancyframework-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::RmonItems()
    :
    risingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems>())
    , fallingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems>())
    , hcrisingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems>())
    , hcfallingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems>())
{
    risingalarm_items->parent = this;
    fallingalarm_items->parent = this;
    hcrisingalarm_items->parent = this;
    hcfallingalarm_items->parent = this;

    yang_name = "rmon-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::~RmonItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::has_data() const
{
    if (is_presence_container) return true;
    return (risingalarm_items !=  nullptr && risingalarm_items->has_data())
	|| (fallingalarm_items !=  nullptr && fallingalarm_items->has_data())
	|| (hcrisingalarm_items !=  nullptr && hcrisingalarm_items->has_data())
	|| (hcfallingalarm_items !=  nullptr && hcfallingalarm_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::has_operation() const
{
    return is_set(yfilter)
	|| (risingalarm_items !=  nullptr && risingalarm_items->has_operation())
	|| (fallingalarm_items !=  nullptr && fallingalarm_items->has_operation())
	|| (hcrisingalarm_items !=  nullptr && hcrisingalarm_items->has_operation())
	|| (hcfallingalarm_items !=  nullptr && hcfallingalarm_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "risingAlarm-items")
    {
        if(risingalarm_items == nullptr)
        {
            risingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems>();
        }
        return risingalarm_items;
    }

    if(child_yang_name == "fallingAlarm-items")
    {
        if(fallingalarm_items == nullptr)
        {
            fallingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems>();
        }
        return fallingalarm_items;
    }

    if(child_yang_name == "hcRisingAlarm-items")
    {
        if(hcrisingalarm_items == nullptr)
        {
            hcrisingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems>();
        }
        return hcrisingalarm_items;
    }

    if(child_yang_name == "hcFallingAlarm-items")
    {
        if(hcfallingalarm_items == nullptr)
        {
            hcfallingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems>();
        }
        return hcfallingalarm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(risingalarm_items != nullptr)
    {
        children["risingAlarm-items"] = risingalarm_items;
    }

    if(fallingalarm_items != nullptr)
    {
        children["fallingAlarm-items"] = fallingalarm_items;
    }

    if(hcrisingalarm_items != nullptr)
    {
        children["hcRisingAlarm-items"] = hcrisingalarm_items;
    }

    if(hcfallingalarm_items != nullptr)
    {
        children["hcFallingAlarm-items"] = hcfallingalarm_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "risingAlarm-items" || name == "fallingAlarm-items" || name == "hcRisingAlarm-items" || name == "hcFallingAlarm-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::RisingAlarmItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "risingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::~RisingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "risingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::FallingAlarmItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "fallingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::~FallingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::HcRisingAlarmItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "hcRisingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::~HcRisingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hcRisingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::HcFallingAlarmItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "hcFallingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::~HcFallingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hcFallingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::SnmpItems_()
    :
    authentication_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems>())
{
    authentication_items->parent = this;

    yang_name = "snmp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::~SnmpItems_()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::has_data() const
{
    if (is_presence_container) return true;
    return (authentication_items !=  nullptr && authentication_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::has_operation() const
{
    return is_set(yfilter)
	|| (authentication_items !=  nullptr && authentication_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-items")
    {
        if(authentication_items == nullptr)
        {
            authentication_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems>();
        }
        return authentication_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication_items != nullptr)
    {
        children["authentication-items"] = authentication_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::AuthenticationItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "authentication-items"; yang_parent_name = "snmp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::~AuthenticationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/snmp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::StpxItems()
    :
    inconsistency_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems>())
    , rootinconsistency_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems>())
    , loopinconsistency_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems>())
{
    inconsistency_items->parent = this;
    rootinconsistency_items->parent = this;
    loopinconsistency_items->parent = this;

    yang_name = "stpx-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::~StpxItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::has_data() const
{
    if (is_presence_container) return true;
    return (inconsistency_items !=  nullptr && inconsistency_items->has_data())
	|| (rootinconsistency_items !=  nullptr && rootinconsistency_items->has_data())
	|| (loopinconsistency_items !=  nullptr && loopinconsistency_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::has_operation() const
{
    return is_set(yfilter)
	|| (inconsistency_items !=  nullptr && inconsistency_items->has_operation())
	|| (rootinconsistency_items !=  nullptr && rootinconsistency_items->has_operation())
	|| (loopinconsistency_items !=  nullptr && loopinconsistency_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inconsistency-items")
    {
        if(inconsistency_items == nullptr)
        {
            inconsistency_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems>();
        }
        return inconsistency_items;
    }

    if(child_yang_name == "rootinconsistency-items")
    {
        if(rootinconsistency_items == nullptr)
        {
            rootinconsistency_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems>();
        }
        return rootinconsistency_items;
    }

    if(child_yang_name == "loopinconsistency-items")
    {
        if(loopinconsistency_items == nullptr)
        {
            loopinconsistency_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems>();
        }
        return loopinconsistency_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inconsistency_items != nullptr)
    {
        children["inconsistency-items"] = inconsistency_items;
    }

    if(rootinconsistency_items != nullptr)
    {
        children["rootinconsistency-items"] = rootinconsistency_items;
    }

    if(loopinconsistency_items != nullptr)
    {
        children["loopinconsistency-items"] = loopinconsistency_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inconsistency-items" || name == "rootinconsistency-items" || name == "loopinconsistency-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::InconsistencyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "inconsistency-items"; yang_parent_name = "stpx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::~InconsistencyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stpx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inconsistency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::RootinconsistencyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "rootinconsistency-items"; yang_parent_name = "stpx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::~RootinconsistencyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stpx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rootinconsistency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::LoopinconsistencyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "loopinconsistency-items"; yang_parent_name = "stpx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::~LoopinconsistencyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stpx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopinconsistency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::SysmgrItems()
    :
    csefailswcorenotifyextended_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems>())
{
    csefailswcorenotifyextended_items->parent = this;

    yang_name = "sysmgr-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::~SysmgrItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return (csefailswcorenotifyextended_items !=  nullptr && csefailswcorenotifyextended_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| (csefailswcorenotifyextended_items !=  nullptr && csefailswcorenotifyextended_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cseFailSwCoreNotifyExtended-items")
    {
        if(csefailswcorenotifyextended_items == nullptr)
        {
            csefailswcorenotifyextended_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems>();
        }
        return csefailswcorenotifyextended_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(csefailswcorenotifyextended_items != nullptr)
    {
        children["cseFailSwCoreNotifyExtended-items"] = csefailswcorenotifyextended_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cseFailSwCoreNotifyExtended-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::CseFailSwCoreNotifyExtendedItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cseFailSwCoreNotifyExtended-items"; yang_parent_name = "sysmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::~CseFailSwCoreNotifyExtendedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/sysmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cseFailSwCoreNotifyExtended-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::SystemItems()
    :
    clockchangenotification_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems>())
{
    clockchangenotification_items->parent = this;

    yang_name = "system-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::~SystemItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::has_data() const
{
    if (is_presence_container) return true;
    return (clockchangenotification_items !=  nullptr && clockchangenotification_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::has_operation() const
{
    return is_set(yfilter)
	|| (clockchangenotification_items !=  nullptr && clockchangenotification_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SystemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::SystemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Clockchangenotification-items")
    {
        if(clockchangenotification_items == nullptr)
        {
            clockchangenotification_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems>();
        }
        return clockchangenotification_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::SystemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clockchangenotification_items != nullptr)
    {
        children["Clockchangenotification-items"] = clockchangenotification_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Clockchangenotification-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::ClockchangenotificationItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "Clockchangenotification-items"; yang_parent_name = "system-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::~ClockchangenotificationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/system-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Clockchangenotification-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeItems()
    :
    upgradejobstatusnotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems>())
{
    upgradejobstatusnotify_items->parent = this;

    yang_name = "upgrade-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::~UpgradeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::has_data() const
{
    if (is_presence_container) return true;
    return (upgradejobstatusnotify_items !=  nullptr && upgradejobstatusnotify_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::has_operation() const
{
    return is_set(yfilter)
	|| (upgradejobstatusnotify_items !=  nullptr && upgradejobstatusnotify_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UpgradeJobStatusNotify-items")
    {
        if(upgradejobstatusnotify_items == nullptr)
        {
            upgradejobstatusnotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems>();
        }
        return upgradejobstatusnotify_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(upgradejobstatusnotify_items != nullptr)
    {
        children["UpgradeJobStatusNotify-items"] = upgradejobstatusnotify_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UpgradeJobStatusNotify-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::UpgradeJobStatusNotifyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "UpgradeJobStatusNotify-items"; yang_parent_name = "upgrade-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::~UpgradeJobStatusNotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/upgrade-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UpgradeJobStatusNotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanItems()
    :
    vsanportmembershipchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems>())
    , vsanstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems>())
{
    vsanportmembershipchange_items->parent = this;
    vsanstatuschange_items->parent = this;

    yang_name = "vsan-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::~VsanItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    return (vsanportmembershipchange_items !=  nullptr && vsanportmembershipchange_items->has_data())
	|| (vsanstatuschange_items !=  nullptr && vsanstatuschange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::has_operation() const
{
    return is_set(yfilter)
	|| (vsanportmembershipchange_items !=  nullptr && vsanportmembershipchange_items->has_operation())
	|| (vsanstatuschange_items !=  nullptr && vsanstatuschange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsanPortMembershipChange-items")
    {
        if(vsanportmembershipchange_items == nullptr)
        {
            vsanportmembershipchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems>();
        }
        return vsanportmembershipchange_items;
    }

    if(child_yang_name == "vsanStatusChange-items")
    {
        if(vsanstatuschange_items == nullptr)
        {
            vsanstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems>();
        }
        return vsanstatuschange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vsanportmembershipchange_items != nullptr)
    {
        children["vsanPortMembershipChange-items"] = vsanportmembershipchange_items;
    }

    if(vsanstatuschange_items != nullptr)
    {
        children["vsanStatusChange-items"] = vsanstatuschange_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsanPortMembershipChange-items" || name == "vsanStatusChange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::VsanPortMembershipChangeItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vsanPortMembershipChange-items"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::~VsanPortMembershipChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vsan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanPortMembershipChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::VsanStatusChangeItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vsanStatusChange-items"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::~VsanStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vsan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VtpItems()
    :
    notifs_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems>())
    , vlancreate_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems>())
    , vlandelete_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems>())
{
    notifs_items->parent = this;
    vlancreate_items->parent = this;
    vlandelete_items->parent = this;

    yang_name = "vtp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::~VtpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::has_data() const
{
    if (is_presence_container) return true;
    return (notifs_items !=  nullptr && notifs_items->has_data())
	|| (vlancreate_items !=  nullptr && vlancreate_items->has_data())
	|| (vlandelete_items !=  nullptr && vlandelete_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::has_operation() const
{
    return is_set(yfilter)
	|| (notifs_items !=  nullptr && notifs_items->has_operation())
	|| (vlancreate_items !=  nullptr && vlancreate_items->has_operation())
	|| (vlandelete_items !=  nullptr && vlandelete_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notifs-items")
    {
        if(notifs_items == nullptr)
        {
            notifs_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems>();
        }
        return notifs_items;
    }

    if(child_yang_name == "vlancreate-items")
    {
        if(vlancreate_items == nullptr)
        {
            vlancreate_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems>();
        }
        return vlancreate_items;
    }

    if(child_yang_name == "vlandelete-items")
    {
        if(vlandelete_items == nullptr)
        {
            vlandelete_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems>();
        }
        return vlandelete_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(notifs_items != nullptr)
    {
        children["notifs-items"] = notifs_items;
    }

    if(vlancreate_items != nullptr)
    {
        children["vlancreate-items"] = vlancreate_items;
    }

    if(vlandelete_items != nullptr)
    {
        children["vlandelete-items"] = vlandelete_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifs-items" || name == "vlancreate-items" || name == "vlandelete-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::NotifsItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifs-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::~NotifsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::VlancreateItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vlancreate-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::~VlancreateItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlancreate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::VlandeleteItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vlandelete-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::~VlandeleteItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlandelete-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::PortsecurityItems()
    :
    accesssecuremacviolation_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems>())
    , trunksecuremacviolation_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems>())
{
    accesssecuremacviolation_items->parent = this;
    trunksecuremacviolation_items->parent = this;

    yang_name = "portsecurity-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::~PortsecurityItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::has_data() const
{
    if (is_presence_container) return true;
    return (accesssecuremacviolation_items !=  nullptr && accesssecuremacviolation_items->has_data())
	|| (trunksecuremacviolation_items !=  nullptr && trunksecuremacviolation_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::has_operation() const
{
    return is_set(yfilter)
	|| (accesssecuremacviolation_items !=  nullptr && accesssecuremacviolation_items->has_operation())
	|| (trunksecuremacviolation_items !=  nullptr && trunksecuremacviolation_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portsecurity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesssecuremacviolation-items")
    {
        if(accesssecuremacviolation_items == nullptr)
        {
            accesssecuremacviolation_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems>();
        }
        return accesssecuremacviolation_items;
    }

    if(child_yang_name == "trunksecuremacviolation-items")
    {
        if(trunksecuremacviolation_items == nullptr)
        {
            trunksecuremacviolation_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems>();
        }
        return trunksecuremacviolation_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accesssecuremacviolation_items != nullptr)
    {
        children["accesssecuremacviolation-items"] = accesssecuremacviolation_items;
    }

    if(trunksecuremacviolation_items != nullptr)
    {
        children["trunksecuremacviolation-items"] = trunksecuremacviolation_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesssecuremacviolation-items" || name == "trunksecuremacviolation-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::AccesssecuremacviolationItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "accesssecuremacviolation-items"; yang_parent_name = "portsecurity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::~AccesssecuremacviolationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/portsecurity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesssecuremacviolation-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::TrunksecuremacviolationItems()
    :
    trapconfigstatus{YType::enumeration, "trapConfigStatus"},
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "trunksecuremacviolation-items"; yang_parent_name = "portsecurity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::~TrunksecuremacviolationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapconfigstatus.is_set
	|| togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapconfigstatus.yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/portsecurity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunksecuremacviolation-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapconfigstatus.is_set || is_set(trapconfigstatus.yfilter)) leaf_name_data.push_back(trapconfigstatus.get_name_leafdata());
    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus = value;
        trapconfigstatus.value_namespace = name_space;
        trapconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapConfigStatus")
    {
        trapconfigstatus.yfilter = yfilter;
    }
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapConfigStatus" || name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmtUserItems::RmtUserItems()
    :
    remoteuser_list(this, {"username", "usrengineid"})
{

    yang_name = "rmtUser-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmtUserItems::~RmtUserItems()
{
}

bool System::SnmpItems::InstItems::RmtUserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::RmtUserItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::RmtUserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmtUserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmtUser-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmtUserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::RmtUserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUser-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::RmtUserItems::RemoteUserList>();
        c->parent = this;
        remoteuser_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::RmtUserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remoteuser_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::RmtUserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmtUserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmtUserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUser-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::RemoteUserList()
    :
    username{YType::str, "userName"},
    usrengineid{YType::str, "usrengineId"},
    authpwd{YType::str, "authpwd"},
    encauthpwd{YType::str, "encAuthpwd"},
    authpwdlen{YType::uint32, "authPwdLen"},
    authtype{YType::enumeration, "authtype"},
    privpwd{YType::str, "privpwd"},
    encprivpwd{YType::str, "encPrivpwd"},
    privpwdlen{YType::uint32, "privPwdLen"},
    privtype{YType::enumeration, "privtype"},
    islocalizedkey{YType::boolean, "islocalizedkey"},
    isenforcepriv{YType::boolean, "isenforcepriv"},
    usrengineidlen{YType::uint8, "usrengineIdlen"},
    isaaanotify{YType::enumeration, "isAaaNotify"}
{

    yang_name = "RemoteUser-list"; yang_parent_name = "rmtUser-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::~RemoteUserList()
{
}

bool System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| usrengineid.is_set
	|| authpwd.is_set
	|| encauthpwd.is_set
	|| authpwdlen.is_set
	|| authtype.is_set
	|| privpwd.is_set
	|| encprivpwd.is_set
	|| privpwdlen.is_set
	|| privtype.is_set
	|| islocalizedkey.is_set
	|| isenforcepriv.is_set
	|| usrengineidlen.is_set
	|| isaaanotify.is_set;
}

bool System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(usrengineid.yfilter)
	|| ydk::is_set(authpwd.yfilter)
	|| ydk::is_set(encauthpwd.yfilter)
	|| ydk::is_set(authpwdlen.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(privpwd.yfilter)
	|| ydk::is_set(encprivpwd.yfilter)
	|| ydk::is_set(privpwdlen.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(islocalizedkey.yfilter)
	|| ydk::is_set(isenforcepriv.yfilter)
	|| ydk::is_set(usrengineidlen.yfilter)
	|| ydk::is_set(isaaanotify.yfilter);
}

std::string System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmtUser-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUser-list";
    ADD_KEY_TOKEN(username, "userName");
    ADD_KEY_TOKEN(usrengineid, "usrengineId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (usrengineid.is_set || is_set(usrengineid.yfilter)) leaf_name_data.push_back(usrengineid.get_name_leafdata());
    if (authpwd.is_set || is_set(authpwd.yfilter)) leaf_name_data.push_back(authpwd.get_name_leafdata());
    if (encauthpwd.is_set || is_set(encauthpwd.yfilter)) leaf_name_data.push_back(encauthpwd.get_name_leafdata());
    if (authpwdlen.is_set || is_set(authpwdlen.yfilter)) leaf_name_data.push_back(authpwdlen.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (privpwd.is_set || is_set(privpwd.yfilter)) leaf_name_data.push_back(privpwd.get_name_leafdata());
    if (encprivpwd.is_set || is_set(encprivpwd.yfilter)) leaf_name_data.push_back(encprivpwd.get_name_leafdata());
    if (privpwdlen.is_set || is_set(privpwdlen.yfilter)) leaf_name_data.push_back(privpwdlen.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (islocalizedkey.is_set || is_set(islocalizedkey.yfilter)) leaf_name_data.push_back(islocalizedkey.get_name_leafdata());
    if (isenforcepriv.is_set || is_set(isenforcepriv.yfilter)) leaf_name_data.push_back(isenforcepriv.get_name_leafdata());
    if (usrengineidlen.is_set || is_set(usrengineidlen.yfilter)) leaf_name_data.push_back(usrengineidlen.get_name_leafdata());
    if (isaaanotify.is_set || is_set(isaaanotify.yfilter)) leaf_name_data.push_back(isaaanotify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "userName")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineId")
    {
        usrengineid = value;
        usrengineid.value_namespace = name_space;
        usrengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authpwd")
    {
        authpwd = value;
        authpwd.value_namespace = name_space;
        authpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encAuthpwd")
    {
        encauthpwd = value;
        encauthpwd.value_namespace = name_space;
        encauthpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authPwdLen")
    {
        authpwdlen = value;
        authpwdlen.value_namespace = name_space;
        authpwdlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authtype")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privpwd")
    {
        privpwd = value;
        privpwd.value_namespace = name_space;
        privpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encPrivpwd")
    {
        encprivpwd = value;
        encprivpwd.value_namespace = name_space;
        encprivpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privPwdLen")
    {
        privpwdlen = value;
        privpwdlen.value_namespace = name_space;
        privpwdlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privtype")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey = value;
        islocalizedkey.value_namespace = name_space;
        islocalizedkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv = value;
        isenforcepriv.value_namespace = name_space;
        isenforcepriv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen = value;
        usrengineidlen.value_namespace = name_space;
        usrengineidlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isAaaNotify")
    {
        isaaanotify = value;
        isaaanotify.value_namespace = name_space;
        isaaanotify.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "userName")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "usrengineId")
    {
        usrengineid.yfilter = yfilter;
    }
    if(value_path == "authpwd")
    {
        authpwd.yfilter = yfilter;
    }
    if(value_path == "encAuthpwd")
    {
        encauthpwd.yfilter = yfilter;
    }
    if(value_path == "authPwdLen")
    {
        authpwdlen.yfilter = yfilter;
    }
    if(value_path == "authtype")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "privpwd")
    {
        privpwd.yfilter = yfilter;
    }
    if(value_path == "encPrivpwd")
    {
        encprivpwd.yfilter = yfilter;
    }
    if(value_path == "privPwdLen")
    {
        privpwdlen.yfilter = yfilter;
    }
    if(value_path == "privtype")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey.yfilter = yfilter;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv.yfilter = yfilter;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen.yfilter = yfilter;
    }
    if(value_path == "isAaaNotify")
    {
        isaaanotify.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "userName" || name == "usrengineId" || name == "authpwd" || name == "encAuthpwd" || name == "authPwdLen" || name == "authtype" || name == "privpwd" || name == "encPrivpwd" || name == "privPwdLen" || name == "privtype" || name == "islocalizedkey" || name == "isenforcepriv" || name == "usrengineIdlen" || name == "isAaaNotify")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LclUserItems()
    :
    localuser_list(this, {"username"})
{

    yang_name = "lclUser-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::LclUserItems::~LclUserItems()
{
}

bool System::SnmpItems::InstItems::LclUserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<localuser_list.len(); index++)
    {
        if(localuser_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::LclUserItems::has_operation() const
{
    for (std::size_t index=0; index<localuser_list.len(); index++)
    {
        if(localuser_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::LclUserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::LclUserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lclUser-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::LclUserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocalUser-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList>();
        c->parent = this;
        localuser_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::LclUserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : localuser_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::LclUserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::LclUserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::LclUserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocalUser-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::LocalUserList()
    :
    username{YType::str, "userName"},
    authpwd{YType::str, "authpwd"},
    encauthpwd{YType::str, "encAuthpwd"},
    authpwdlen{YType::uint32, "authPwdLen"},
    authtype{YType::enumeration, "authtype"},
    privpwd{YType::str, "privpwd"},
    encprivpwd{YType::str, "encPrivpwd"},
    privpwdlen{YType::uint32, "privPwdLen"},
    privtype{YType::enumeration, "privtype"},
    islocalizedkey{YType::boolean, "islocalizedkey"},
    isenforcepriv{YType::boolean, "isenforcepriv"},
    usrengineid{YType::str, "usrengineId"},
    usrengineidlen{YType::uint8, "usrengineIdlen"},
    isaaanotify{YType::enumeration, "isAaaNotify"}
        ,
    group_items(std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "LocalUser-list"; yang_parent_name = "lclUser-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::~LocalUserList()
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| authpwd.is_set
	|| encauthpwd.is_set
	|| authpwdlen.is_set
	|| authtype.is_set
	|| privpwd.is_set
	|| encprivpwd.is_set
	|| privpwdlen.is_set
	|| privtype.is_set
	|| islocalizedkey.is_set
	|| isenforcepriv.is_set
	|| usrengineid.is_set
	|| usrengineidlen.is_set
	|| isaaanotify.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(authpwd.yfilter)
	|| ydk::is_set(encauthpwd.yfilter)
	|| ydk::is_set(authpwdlen.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(privpwd.yfilter)
	|| ydk::is_set(encprivpwd.yfilter)
	|| ydk::is_set(privpwdlen.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(islocalizedkey.yfilter)
	|| ydk::is_set(isenforcepriv.yfilter)
	|| ydk::is_set(usrengineid.yfilter)
	|| ydk::is_set(usrengineidlen.yfilter)
	|| ydk::is_set(isaaanotify.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/lclUser-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocalUser-list";
    ADD_KEY_TOKEN(username, "userName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (authpwd.is_set || is_set(authpwd.yfilter)) leaf_name_data.push_back(authpwd.get_name_leafdata());
    if (encauthpwd.is_set || is_set(encauthpwd.yfilter)) leaf_name_data.push_back(encauthpwd.get_name_leafdata());
    if (authpwdlen.is_set || is_set(authpwdlen.yfilter)) leaf_name_data.push_back(authpwdlen.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (privpwd.is_set || is_set(privpwd.yfilter)) leaf_name_data.push_back(privpwd.get_name_leafdata());
    if (encprivpwd.is_set || is_set(encprivpwd.yfilter)) leaf_name_data.push_back(encprivpwd.get_name_leafdata());
    if (privpwdlen.is_set || is_set(privpwdlen.yfilter)) leaf_name_data.push_back(privpwdlen.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (islocalizedkey.is_set || is_set(islocalizedkey.yfilter)) leaf_name_data.push_back(islocalizedkey.get_name_leafdata());
    if (isenforcepriv.is_set || is_set(isenforcepriv.yfilter)) leaf_name_data.push_back(isenforcepriv.get_name_leafdata());
    if (usrengineid.is_set || is_set(usrengineid.yfilter)) leaf_name_data.push_back(usrengineid.get_name_leafdata());
    if (usrengineidlen.is_set || is_set(usrengineidlen.yfilter)) leaf_name_data.push_back(usrengineidlen.get_name_leafdata());
    if (isaaanotify.is_set || is_set(isaaanotify.yfilter)) leaf_name_data.push_back(isaaanotify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    return children;
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "userName")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authpwd")
    {
        authpwd = value;
        authpwd.value_namespace = name_space;
        authpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encAuthpwd")
    {
        encauthpwd = value;
        encauthpwd.value_namespace = name_space;
        encauthpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authPwdLen")
    {
        authpwdlen = value;
        authpwdlen.value_namespace = name_space;
        authpwdlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authtype")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privpwd")
    {
        privpwd = value;
        privpwd.value_namespace = name_space;
        privpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encPrivpwd")
    {
        encprivpwd = value;
        encprivpwd.value_namespace = name_space;
        encprivpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privPwdLen")
    {
        privpwdlen = value;
        privpwdlen.value_namespace = name_space;
        privpwdlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privtype")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey = value;
        islocalizedkey.value_namespace = name_space;
        islocalizedkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv = value;
        isenforcepriv.value_namespace = name_space;
        isenforcepriv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineId")
    {
        usrengineid = value;
        usrengineid.value_namespace = name_space;
        usrengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen = value;
        usrengineidlen.value_namespace = name_space;
        usrengineidlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isAaaNotify")
    {
        isaaanotify = value;
        isaaanotify.value_namespace = name_space;
        isaaanotify.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "userName")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "authpwd")
    {
        authpwd.yfilter = yfilter;
    }
    if(value_path == "encAuthpwd")
    {
        encauthpwd.yfilter = yfilter;
    }
    if(value_path == "authPwdLen")
    {
        authpwdlen.yfilter = yfilter;
    }
    if(value_path == "authtype")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "privpwd")
    {
        privpwd.yfilter = yfilter;
    }
    if(value_path == "encPrivpwd")
    {
        encprivpwd.yfilter = yfilter;
    }
    if(value_path == "privPwdLen")
    {
        privpwdlen.yfilter = yfilter;
    }
    if(value_path == "privtype")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey.yfilter = yfilter;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv.yfilter = yfilter;
    }
    if(value_path == "usrengineId")
    {
        usrengineid.yfilter = yfilter;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen.yfilter = yfilter;
    }
    if(value_path == "isAaaNotify")
    {
        isaaanotify.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "userName" || name == "authpwd" || name == "encAuthpwd" || name == "authPwdLen" || name == "authtype" || name == "privpwd" || name == "encPrivpwd" || name == "privPwdLen" || name == "privtype" || name == "islocalizedkey" || name == "isenforcepriv" || name == "usrengineId" || name == "usrengineIdlen" || name == "isAaaNotify")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::GroupItems()
    :
    usergroup_list(this, {"groupname"})
{

    yang_name = "group-items"; yang_parent_name = "LocalUser-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::~GroupItems()
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usergroup_list.len(); index++)
    {
        if(usergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<usergroup_list.len(); index++)
    {
        if(usergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserGroup-list")
    {
        auto c = std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList>();
        c->parent = this;
        usergroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usergroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserGroup-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::UserGroupList()
    :
    groupname{YType::str, "groupName"}
{

    yang_name = "UserGroup-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::~UserGroupList()
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::has_data() const
{
    if (is_presence_container) return true;
    return groupname.is_set;
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groupname.yfilter);
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserGroup-list";
    ADD_KEY_TOKEN(groupname, "groupName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groupname.is_set || is_set(groupname.yfilter)) leaf_name_data.push_back(groupname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groupName")
    {
        groupname = value;
        groupname.value_namespace = name_space;
        groupname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groupName")
    {
        groupname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groupName")
        return true;
    return false;
}

System::SyslogacctItems::SyslogacctItems()
    :
    timertick{YType::uint32, "timerTick"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
{

    yang_name = "syslogacct-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogacctItems::~SyslogacctItems()
{
}

bool System::SyslogacctItems::has_data() const
{
    if (is_presence_container) return true;
    return timertick.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set;
}

bool System::SyslogacctItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timertick.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SyslogacctItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogacctItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslogacct-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogacctItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timertick.is_set || is_set(timertick.yfilter)) leaf_name_data.push_back(timertick.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogacctItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogacctItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogacctItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timerTick")
    {
        timertick = value;
        timertick.value_namespace = name_space;
        timertick.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogacctItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timerTick")
    {
        timertick.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::SyslogacctItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timerTick" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SyslogItems::SyslogItems()
    :
    timestamp_items(std::make_shared<System::SyslogItems::TimestampItems>())
    , level_items(std::make_shared<System::SyslogItems::LevelItems>())
    , monitor_items(std::make_shared<System::SyslogItems::MonitorItems>())
    , console_items(std::make_shared<System::SyslogItems::ConsoleItems>())
    , rdst_items(std::make_shared<System::SyslogItems::RdstItems>())
    , source_items(std::make_shared<System::SyslogItems::SourceItems>())
    , file_items(std::make_shared<System::SyslogItems::FileItems>())
    , inst_items(std::make_shared<System::SyslogItems::InstItems>())
{
    timestamp_items->parent = this;
    level_items->parent = this;
    monitor_items->parent = this;
    console_items->parent = this;
    rdst_items->parent = this;
    source_items->parent = this;
    file_items->parent = this;
    inst_items->parent = this;

    yang_name = "syslog-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::~SyslogItems()
{
}

bool System::SyslogItems::has_data() const
{
    if (is_presence_container) return true;
    return (timestamp_items !=  nullptr && timestamp_items->has_data())
	|| (level_items !=  nullptr && level_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data())
	|| (console_items !=  nullptr && console_items->has_data())
	|| (rdst_items !=  nullptr && rdst_items->has_data())
	|| (source_items !=  nullptr && source_items->has_data())
	|| (file_items !=  nullptr && file_items->has_data())
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::SyslogItems::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp_items !=  nullptr && timestamp_items->has_operation())
	|| (level_items !=  nullptr && level_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation())
	|| (console_items !=  nullptr && console_items->has_operation())
	|| (rdst_items !=  nullptr && rdst_items->has_operation())
	|| (source_items !=  nullptr && source_items->has_operation())
	|| (file_items !=  nullptr && file_items->has_operation())
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::SyslogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp-items")
    {
        if(timestamp_items == nullptr)
        {
            timestamp_items = std::make_shared<System::SyslogItems::TimestampItems>();
        }
        return timestamp_items;
    }

    if(child_yang_name == "level-items")
    {
        if(level_items == nullptr)
        {
            level_items = std::make_shared<System::SyslogItems::LevelItems>();
        }
        return level_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::SyslogItems::MonitorItems>();
        }
        return monitor_items;
    }

    if(child_yang_name == "console-items")
    {
        if(console_items == nullptr)
        {
            console_items = std::make_shared<System::SyslogItems::ConsoleItems>();
        }
        return console_items;
    }

    if(child_yang_name == "rdst-items")
    {
        if(rdst_items == nullptr)
        {
            rdst_items = std::make_shared<System::SyslogItems::RdstItems>();
        }
        return rdst_items;
    }

    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::SyslogItems::SourceItems>();
        }
        return source_items;
    }

    if(child_yang_name == "file-items")
    {
        if(file_items == nullptr)
        {
            file_items = std::make_shared<System::SyslogItems::FileItems>();
        }
        return file_items;
    }

    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SyslogItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timestamp_items != nullptr)
    {
        children["timestamp-items"] = timestamp_items;
    }

    if(level_items != nullptr)
    {
        children["level-items"] = level_items;
    }

    if(monitor_items != nullptr)
    {
        children["monitor-items"] = monitor_items;
    }

    if(console_items != nullptr)
    {
        children["console-items"] = console_items;
    }

    if(rdst_items != nullptr)
    {
        children["rdst-items"] = rdst_items;
    }

    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    if(file_items != nullptr)
    {
        children["file-items"] = file_items;
    }

    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::SyslogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-items" || name == "level-items" || name == "monitor-items" || name == "console-items" || name == "rdst-items" || name == "source-items" || name == "file-items" || name == "inst-items")
        return true;
    return false;
}

System::SyslogItems::TimestampItems::TimestampItems()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "timestamp-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::TimestampItems::~TimestampItems()
{
}

bool System::SyslogItems::TimestampItems::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set;
}

bool System::SyslogItems::TimestampItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string System::SyslogItems::TimestampItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::TimestampItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::TimestampItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::TimestampItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::TimestampItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::TimestampItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::TimestampItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool System::SyslogItems::TimestampItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

System::SyslogItems::LevelItems::LevelItems()
    :
    level_list(this, {"facility"})
{

    yang_name = "level-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::LevelItems::~LevelItems()
{
}

bool System::SyslogItems::LevelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level_list.len(); index++)
    {
        if(level_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::LevelItems::has_operation() const
{
    for (std::size_t index=0; index<level_list.len(); index++)
    {
        if(level_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::LevelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::LevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::LevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::LevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Level-list")
    {
        auto c = std::make_shared<System::SyslogItems::LevelItems::LevelList>();
        c->parent = this;
        level_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::LevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : level_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SyslogItems::LevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::LevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::LevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Level-list")
        return true;
    return false;
}

System::SyslogItems::LevelItems::LevelList::LevelList()
    :
    facility{YType::enumeration, "facility"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "Level-list"; yang_parent_name = "level-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::LevelItems::LevelList::~LevelList()
{
}

bool System::SyslogItems::LevelItems::LevelList::has_data() const
{
    if (is_presence_container) return true;
    return facility.is_set
	|| severity.is_set;
}

bool System::SyslogItems::LevelItems::LevelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string System::SyslogItems::LevelItems::LevelList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/level-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::LevelItems::LevelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Level-list";
    ADD_KEY_TOKEN(facility, "facility");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::LevelItems::LevelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::LevelItems::LevelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::LevelItems::LevelList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::LevelItems::LevelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::LevelItems::LevelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool System::SyslogItems::LevelItems::LevelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "facility" || name == "severity")
        return true;
    return false;
}

System::SyslogItems::MonitorItems::MonitorItems()
    :
    adminstate{YType::enumeration, "adminState"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "monitor-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::MonitorItems::~MonitorItems()
{
}

bool System::SyslogItems::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| severity.is_set;
}

bool System::SyslogItems::MonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string System::SyslogItems::MonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool System::SyslogItems::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "severity")
        return true;
    return false;
}

System::SyslogItems::ConsoleItems::ConsoleItems()
    :
    adminstate{YType::enumeration, "adminState"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "console-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::ConsoleItems::~ConsoleItems()
{
}

bool System::SyslogItems::ConsoleItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| severity.is_set;
}

bool System::SyslogItems::ConsoleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string System::SyslogItems::ConsoleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::ConsoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::ConsoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::ConsoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::ConsoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::ConsoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::ConsoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool System::SyslogItems::ConsoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "severity")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RdstItems()
    :
    remotedest_list(this, {"host"})
{

    yang_name = "rdst-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::RdstItems::~RdstItems()
{
}

bool System::SyslogItems::RdstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remotedest_list.len(); index++)
    {
        if(remotedest_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::RdstItems::has_operation() const
{
    for (std::size_t index=0; index<remotedest_list.len(); index++)
    {
        if(remotedest_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::RdstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::RdstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rdst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::RdstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteDest-list")
    {
        auto c = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList>();
        c->parent = this;
        remotedest_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::RdstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remotedest_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SyslogItems::RdstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::RdstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::RdstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteDest-list")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::RemoteDestList()
    :
    host{YType::str, "host"},
    severity{YType::enumeration, "severity"},
    port{YType::uint32, "port"},
    forwardingfacility{YType::enumeration, "forwardingFacility"},
    adminstate{YType::enumeration, "adminState"},
    vrfid{YType::uint32, "vrfId"},
    ip{YType::str, "ip"},
    operstate{YType::enumeration, "operState"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    epgdn{YType::str, "epgDn"},
    vrfname{YType::str, "vrfName"}
        ,
    destst_items(std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems>())
{
    destst_items->parent = this;

    yang_name = "RemoteDest-list"; yang_parent_name = "rdst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::RdstItems::RemoteDestList::~RemoteDestList()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| severity.is_set
	|| port.is_set
	|| forwardingfacility.is_set
	|| adminstate.is_set
	|| vrfid.is_set
	|| ip.is_set
	|| operstate.is_set
	|| name.is_set
	|| descr.is_set
	|| epgdn.is_set
	|| vrfname.is_set
	|| (destst_items !=  nullptr && destst_items->has_data());
}

bool System::SyslogItems::RdstItems::RemoteDestList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(forwardingfacility.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| (destst_items !=  nullptr && destst_items->has_operation());
}

std::string System::SyslogItems::RdstItems::RemoteDestList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/rdst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::RdstItems::RemoteDestList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteDest-list";
    ADD_KEY_TOKEN(host, "host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (forwardingfacility.is_set || is_set(forwardingfacility.yfilter)) leaf_name_data.push_back(forwardingfacility.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::RdstItems::RemoteDestList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destst-items")
    {
        if(destst_items == nullptr)
        {
            destst_items = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems>();
        }
        return destst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::RdstItems::RemoteDestList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destst_items != nullptr)
    {
        children["destst-items"] = destst_items;
    }

    return children;
}

void System::SyslogItems::RdstItems::RemoteDestList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwardingFacility")
    {
        forwardingfacility = value;
        forwardingfacility.value_namespace = name_space;
        forwardingfacility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfId")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::RdstItems::RemoteDestList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "forwardingFacility")
    {
        forwardingfacility.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "vrfId")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::SyslogItems::RdstItems::RemoteDestList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destst-items" || name == "host" || name == "severity" || name == "port" || name == "forwardingFacility" || name == "adminState" || name == "vrfId" || name == "ip" || name == "operState" || name == "name" || name == "descr" || name == "epgDn" || name == "vrfName")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DeststItems()
    :
    deststate_list(this, {"name"})
{

    yang_name = "destst-items"; yang_parent_name = "RemoteDest-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::~DeststItems()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<deststate_list.len(); index++)
    {
        if(deststate_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::has_operation() const
{
    for (std::size_t index=0; index<deststate_list.len(); index++)
    {
        if(deststate_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DestState-list")
    {
        auto c = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList>();
        c->parent = this;
        deststate_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : deststate_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DestState-list")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::DestStateList()
    :
    name{YType::str, "name"},
    operstate{YType::enumeration, "operState"},
    vrfid{YType::uint32, "vrfId"},
    ip{YType::str, "ip"},
    totalbufferedmsgs{YType::uint32, "totalBufferedMsgs"},
    totaldroppedmsgs{YType::uint32, "totalDroppedMsgs"},
    descr{YType::str, "descr"}
        ,
    msg_items(std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems>())
{
    msg_items->parent = this;

    yang_name = "DestState-list"; yang_parent_name = "destst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::~DestStateList()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operstate.is_set
	|| vrfid.is_set
	|| ip.is_set
	|| totalbufferedmsgs.is_set
	|| totaldroppedmsgs.is_set
	|| descr.is_set
	|| (msg_items !=  nullptr && msg_items->has_data());
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(totalbufferedmsgs.yfilter)
	|| ydk::is_set(totaldroppedmsgs.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (msg_items !=  nullptr && msg_items->has_operation());
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DestState-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (totalbufferedmsgs.is_set || is_set(totalbufferedmsgs.yfilter)) leaf_name_data.push_back(totalbufferedmsgs.get_name_leafdata());
    if (totaldroppedmsgs.is_set || is_set(totaldroppedmsgs.yfilter)) leaf_name_data.push_back(totaldroppedmsgs.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msg-items")
    {
        if(msg_items == nullptr)
        {
            msg_items = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems>();
        }
        return msg_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(msg_items != nullptr)
    {
        children["msg-items"] = msg_items;
    }

    return children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfId")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalBufferedMsgs")
    {
        totalbufferedmsgs = value;
        totalbufferedmsgs.value_namespace = name_space;
        totalbufferedmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalDroppedMsgs")
    {
        totaldroppedmsgs = value;
        totaldroppedmsgs.value_namespace = name_space;
        totaldroppedmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "vrfId")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "totalBufferedMsgs")
    {
        totalbufferedmsgs.yfilter = yfilter;
    }
    if(value_path == "totalDroppedMsgs")
    {
        totaldroppedmsgs.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-items" || name == "name" || name == "operState" || name == "vrfId" || name == "ip" || name == "totalBufferedMsgs" || name == "totalDroppedMsgs" || name == "descr")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::MsgItems()
    :
    logmsg_list(this, {"index_"})
{

    yang_name = "msg-items"; yang_parent_name = "DestState-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::~MsgItems()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logmsg_list.len(); index++)
    {
        if(logmsg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::has_operation() const
{
    for (std::size_t index=0; index<logmsg_list.len(); index++)
    {
        if(logmsg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LogMsg-list")
    {
        auto c = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList>();
        c->parent = this;
        logmsg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : logmsg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LogMsg-list")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::LogMsgList()
    :
    index_{YType::uint32, "index"},
    message{YType::str, "message"},
    facility{YType::str, "facility"},
    severity{YType::uint16, "severity"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "LogMsg-list"; yang_parent_name = "msg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::~LogMsgList()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| message.is_set
	|| facility.is_set
	|| severity.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LogMsg-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "message" || name == "facility" || name == "severity" || name == "name" || name == "descr")
        return true;
    return false;
}

System::SyslogItems::SourceItems::SourceItems()
    :
    adminstate{YType::enumeration, "adminState"},
    ifname{YType::str, "ifName"},
    operstate{YType::enumeration, "operState"}
{

    yang_name = "source-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::SourceItems::~SourceItems()
{
}

bool System::SyslogItems::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| ifname.is_set
	|| operstate.is_set;
}

bool System::SyslogItems::SourceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(operstate.yfilter);
}

std::string System::SyslogItems::SourceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
}

bool System::SyslogItems::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "ifName" || name == "operState")
        return true;
    return false;
}

System::SyslogItems::FileItems::FileItems()
    :
    adminstate{YType::enumeration, "adminState"},
    severity{YType::enumeration, "severity"},
    size{YType::uint32, "size"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "file-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::FileItems::~FileItems()
{
}

bool System::SyslogItems::FileItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| severity.is_set
	|| size.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::SyslogItems::FileItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SyslogItems::FileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::FileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::FileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::FileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::FileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::FileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::FileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SyslogItems::FileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "severity" || name == "size" || name == "name" || name == "descr")
        return true;
    return false;
}

System::SyslogItems::InstItems::InstItems()
    :
    modadminstate{YType::enumeration, "modAdminState"},
    modseverity{YType::enumeration, "modSeverity"}
{

    yang_name = "inst-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::InstItems::~InstItems()
{
}

bool System::SyslogItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return modadminstate.is_set
	|| modseverity.is_set;
}

bool System::SyslogItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modadminstate.yfilter)
	|| ydk::is_set(modseverity.yfilter);
}

std::string System::SyslogItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modadminstate.is_set || is_set(modadminstate.yfilter)) leaf_name_data.push_back(modadminstate.get_name_leafdata());
    if (modseverity.is_set || is_set(modseverity.yfilter)) leaf_name_data.push_back(modseverity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SyslogItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SyslogItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SyslogItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modAdminState")
    {
        modadminstate = value;
        modadminstate.value_namespace = name_space;
        modadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modSeverity")
    {
        modseverity = value;
        modseverity.value_namespace = name_space;
        modseverity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modAdminState")
    {
        modadminstate.yfilter = yfilter;
    }
    if(value_path == "modSeverity")
    {
        modseverity.yfilter = yfilter;
    }
}

bool System::SyslogItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modAdminState" || name == "modSeverity")
        return true;
    return false;
}

System::NatItems::NatItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::NatItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "nat-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::~NatItems()
{
}

bool System::NatItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::NatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::NatItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::NatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::NatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::NatItems::InstItems::InstItems()
    :
    tcptimeout{YType::uint32, "tcpTimeout"},
    udptimeout{YType::uint32, "udpTimeout"},
    timeout{YType::uint32, "timeout"},
    maxtranslation{YType::uint32, "maxtranslation"},
    allhost{YType::uint32, "allhost"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    pool_items(std::make_shared<System::NatItems::InstItems::PoolItems>())
{
    pool_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "nat-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::~InstItems()
{
}

bool System::NatItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return tcptimeout.is_set
	|| udptimeout.is_set
	|| timeout.is_set
	|| maxtranslation.is_set
	|| allhost.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (pool_items !=  nullptr && pool_items->has_data());
}

bool System::NatItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcptimeout.yfilter)
	|| ydk::is_set(udptimeout.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(maxtranslation.yfilter)
	|| ydk::is_set(allhost.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (pool_items !=  nullptr && pool_items->has_operation());
}

std::string System::NatItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcptimeout.is_set || is_set(tcptimeout.yfilter)) leaf_name_data.push_back(tcptimeout.get_name_leafdata());
    if (udptimeout.is_set || is_set(udptimeout.yfilter)) leaf_name_data.push_back(udptimeout.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (maxtranslation.is_set || is_set(maxtranslation.yfilter)) leaf_name_data.push_back(maxtranslation.get_name_leafdata());
    if (allhost.is_set || is_set(allhost.yfilter)) leaf_name_data.push_back(allhost.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NatItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool-items")
    {
        if(pool_items == nullptr)
        {
            pool_items = std::make_shared<System::NatItems::InstItems::PoolItems>();
        }
        return pool_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NatItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pool_items != nullptr)
    {
        children["pool-items"] = pool_items;
    }

    return children;
}

void System::NatItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpTimeout")
    {
        tcptimeout = value;
        tcptimeout.value_namespace = name_space;
        tcptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpTimeout")
    {
        udptimeout = value;
        udptimeout.value_namespace = name_space;
        udptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxtranslation")
    {
        maxtranslation = value;
        maxtranslation.value_namespace = name_space;
        maxtranslation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allhost")
    {
        allhost = value;
        allhost.value_namespace = name_space;
        allhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpTimeout")
    {
        tcptimeout.yfilter = yfilter;
    }
    if(value_path == "udpTimeout")
    {
        udptimeout.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "maxtranslation")
    {
        maxtranslation.yfilter = yfilter;
    }
    if(value_path == "allhost")
    {
        allhost.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-items" || name == "tcpTimeout" || name == "udpTimeout" || name == "timeout" || name == "maxtranslation" || name == "allhost" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolItems()
    :
    pool_list(this, {"poolname"})
{

    yang_name = "pool-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::PoolItems::~PoolItems()
{
}

bool System::NatItems::InstItems::PoolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::PoolItems::has_operation() const
{
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::PoolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::PoolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NatItems::InstItems::PoolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Pool-list")
    {
        auto c = std::make_shared<System::NatItems::InstItems::PoolItems::PoolList>();
        c->parent = this;
        pool_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NatItems::InstItems::PoolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pool_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NatItems::InstItems::PoolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::PoolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::PoolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Pool-list")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolList::PoolList()
    :
    poolname{YType::str, "poolname"},
    mask{YType::str, "mask"},
    prefixlen{YType::uint32, "prefixlen"},
    noalias{YType::boolean, "noalias"}
        ,
    startip_items(std::make_shared<System::NatItems::InstItems::PoolItems::PoolList::StartipItems>())
{
    startip_items->parent = this;

    yang_name = "Pool-list"; yang_parent_name = "pool-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::PoolItems::PoolList::~PoolList()
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return poolname.is_set
	|| mask.is_set
	|| prefixlen.is_set
	|| noalias.is_set
	|| (startip_items !=  nullptr && startip_items->has_data());
}

bool System::NatItems::InstItems::PoolItems::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(poolname.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefixlen.yfilter)
	|| ydk::is_set(noalias.yfilter)
	|| (startip_items !=  nullptr && startip_items->has_operation());
}

std::string System::NatItems::InstItems::PoolItems::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/pool-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::PoolItems::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Pool-list";
    ADD_KEY_TOKEN(poolname, "poolname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (poolname.is_set || is_set(poolname.yfilter)) leaf_name_data.push_back(poolname.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefixlen.is_set || is_set(prefixlen.yfilter)) leaf_name_data.push_back(prefixlen.get_name_leafdata());
    if (noalias.is_set || is_set(noalias.yfilter)) leaf_name_data.push_back(noalias.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NatItems::InstItems::PoolItems::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "startip-items")
    {
        if(startip_items == nullptr)
        {
            startip_items = std::make_shared<System::NatItems::InstItems::PoolItems::PoolList::StartipItems>();
        }
        return startip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NatItems::InstItems::PoolItems::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(startip_items != nullptr)
    {
        children["startip-items"] = startip_items;
    }

    return children;
}

void System::NatItems::InstItems::PoolItems::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poolname")
    {
        poolname = value;
        poolname.value_namespace = name_space;
        poolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixlen")
    {
        prefixlen = value;
        prefixlen.value_namespace = name_space;
        prefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noalias")
    {
        noalias = value;
        noalias.value_namespace = name_space;
        noalias.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::PoolItems::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poolname")
    {
        poolname.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefixlen")
    {
        prefixlen.yfilter = yfilter;
    }
    if(value_path == "noalias")
    {
        noalias.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::PoolItems::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startip-items" || name == "poolname" || name == "mask" || name == "prefixlen" || name == "noalias")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::StartipItems()
    :
    pooladdress_list(this, {"startip", "endip"})
{

    yang_name = "startip-items"; yang_parent_name = "Pool-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::~StartipItems()
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pooladdress_list.len(); index++)
    {
        if(pooladdress_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::has_operation() const
{
    for (std::size_t index=0; index<pooladdress_list.len(); index++)
    {
        if(pooladdress_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PoolAddress-list")
    {
        auto c = std::make_shared<System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList>();
        c->parent = this;
        pooladdress_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pooladdress_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PoolAddress-list")
        return true;
    return false;
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::PoolAddressList()
    :
    startip{YType::str, "startip"},
    endip{YType::str, "endip"},
    configerr{YType::str, "configErr"},
    casttomodify{YType::boolean, "castToModify"},
    pooladdrdeleted{YType::boolean, "poolAddrDeleted"}
{

    yang_name = "PoolAddress-list"; yang_parent_name = "startip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::~PoolAddressList()
{
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_data() const
{
    if (is_presence_container) return true;
    return startip.is_set
	|| endip.is_set
	|| configerr.is_set
	|| casttomodify.is_set
	|| pooladdrdeleted.is_set;
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(startip.yfilter)
	|| ydk::is_set(endip.yfilter)
	|| ydk::is_set(configerr.yfilter)
	|| ydk::is_set(casttomodify.yfilter)
	|| ydk::is_set(pooladdrdeleted.yfilter);
}

std::string System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PoolAddress-list";
    ADD_KEY_TOKEN(startip, "startip");
    ADD_KEY_TOKEN(endip, "endip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (startip.is_set || is_set(startip.yfilter)) leaf_name_data.push_back(startip.get_name_leafdata());
    if (endip.is_set || is_set(endip.yfilter)) leaf_name_data.push_back(endip.get_name_leafdata());
    if (configerr.is_set || is_set(configerr.yfilter)) leaf_name_data.push_back(configerr.get_name_leafdata());
    if (casttomodify.is_set || is_set(casttomodify.yfilter)) leaf_name_data.push_back(casttomodify.get_name_leafdata());
    if (pooladdrdeleted.is_set || is_set(pooladdrdeleted.yfilter)) leaf_name_data.push_back(pooladdrdeleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "startip")
    {
        startip = value;
        startip.value_namespace = name_space;
        startip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endip")
    {
        endip = value;
        endip.value_namespace = name_space;
        endip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErr")
    {
        configerr = value;
        configerr.value_namespace = name_space;
        configerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "castToModify")
    {
        casttomodify = value;
        casttomodify.value_namespace = name_space;
        casttomodify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poolAddrDeleted")
    {
        pooladdrdeleted = value;
        pooladdrdeleted.value_namespace = name_space;
        pooladdrdeleted.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "startip")
    {
        startip.yfilter = yfilter;
    }
    if(value_path == "endip")
    {
        endip.yfilter = yfilter;
    }
    if(value_path == "configErr")
    {
        configerr.yfilter = yfilter;
    }
    if(value_path == "castToModify")
    {
        casttomodify.yfilter = yfilter;
    }
    if(value_path == "poolAddrDeleted")
    {
        pooladdrdeleted.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startip" || name == "endip" || name == "configErr" || name == "castToModify" || name == "poolAddrDeleted")
        return true;
    return false;
}

System::OdcreqItems::OdcreqItems()
    :
    odevcmdreq_list(this, {"devid", "sessid", "cmdid"})
{

    yang_name = "odcreq-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcreqItems::~OdcreqItems()
{
}

bool System::OdcreqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odevcmdreq_list.len(); index++)
    {
        if(odevcmdreq_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OdcreqItems::has_operation() const
{
    for (std::size_t index=0; index<odevcmdreq_list.len(); index++)
    {
        if(odevcmdreq_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OdcreqItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcreqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odcreq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcreqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OdcreqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODevCmdReq-list")
    {
        auto c = std::make_shared<System::OdcreqItems::ODevCmdReqList>();
        c->parent = this;
        odevcmdreq_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OdcreqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : odevcmdreq_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OdcreqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OdcreqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OdcreqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODevCmdReq-list")
        return true;
    return false;
}

System::OdcreqItems::ODevCmdReqList::ODevCmdReqList()
    :
    devid{YType::uint32, "devId"},
    sessid{YType::uint32, "sessId"},
    cmdid{YType::uint32, "cmdId"},
    req{YType::str, "req"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "ODevCmdReq-list"; yang_parent_name = "odcreq-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcreqItems::ODevCmdReqList::~ODevCmdReqList()
{
}

bool System::OdcreqItems::ODevCmdReqList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| sessid.is_set
	|| cmdid.is_set
	|| req.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::OdcreqItems::ODevCmdReqList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(sessid.yfilter)
	|| ydk::is_set(cmdid.yfilter)
	|| ydk::is_set(req.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::OdcreqItems::ODevCmdReqList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/odcreq-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcreqItems::ODevCmdReqList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODevCmdReq-list";
    ADD_KEY_TOKEN(devid, "devId");
    ADD_KEY_TOKEN(sessid, "sessId");
    ADD_KEY_TOKEN(cmdid, "cmdId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcreqItems::ODevCmdReqList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (sessid.is_set || is_set(sessid.yfilter)) leaf_name_data.push_back(sessid.get_name_leafdata());
    if (cmdid.is_set || is_set(cmdid.yfilter)) leaf_name_data.push_back(cmdid.get_name_leafdata());
    if (req.is_set || is_set(req.yfilter)) leaf_name_data.push_back(req.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OdcreqItems::ODevCmdReqList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OdcreqItems::ODevCmdReqList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OdcreqItems::ODevCmdReqList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessId")
    {
        sessid = value;
        sessid.value_namespace = name_space;
        sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdId")
    {
        cmdid = value;
        cmdid.value_namespace = name_space;
        cmdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req")
    {
        req = value;
        req.value_namespace = name_space;
        req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::OdcreqItems::ODevCmdReqList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "sessId")
    {
        sessid.yfilter = yfilter;
    }
    if(value_path == "cmdId")
    {
        cmdid.yfilter = yfilter;
    }
    if(value_path == "req")
    {
        req.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::OdcreqItems::ODevCmdReqList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "devId" || name == "sessId" || name == "cmdId" || name == "req" || name == "name" || name == "id")
        return true;
    return false;
}

System::OdcrespItems::OdcrespItems()
    :
    odevcmdresp_list(this, {"devid", "sessid", "cmdid"})
{

    yang_name = "odcresp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcrespItems::~OdcrespItems()
{
}

bool System::OdcrespItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odevcmdresp_list.len(); index++)
    {
        if(odevcmdresp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OdcrespItems::has_operation() const
{
    for (std::size_t index=0; index<odevcmdresp_list.len(); index++)
    {
        if(odevcmdresp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OdcrespItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcrespItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odcresp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcrespItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OdcrespItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODevCmdResp-list")
    {
        auto c = std::make_shared<System::OdcrespItems::ODevCmdRespList>();
        c->parent = this;
        odevcmdresp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OdcrespItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : odevcmdresp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OdcrespItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OdcrespItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OdcrespItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODevCmdResp-list")
        return true;
    return false;
}

System::OdcrespItems::ODevCmdRespList::ODevCmdRespList()
    :
    devid{YType::uint32, "devId"},
    sessid{YType::uint32, "sessId"},
    cmdid{YType::uint32, "cmdId"},
    resp{YType::str, "resp"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "ODevCmdResp-list"; yang_parent_name = "odcresp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OdcrespItems::ODevCmdRespList::~ODevCmdRespList()
{
}

bool System::OdcrespItems::ODevCmdRespList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| sessid.is_set
	|| cmdid.is_set
	|| resp.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::OdcrespItems::ODevCmdRespList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(sessid.yfilter)
	|| ydk::is_set(cmdid.yfilter)
	|| ydk::is_set(resp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::OdcrespItems::ODevCmdRespList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/odcresp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OdcrespItems::ODevCmdRespList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODevCmdResp-list";
    ADD_KEY_TOKEN(devid, "devId");
    ADD_KEY_TOKEN(sessid, "sessId");
    ADD_KEY_TOKEN(cmdid, "cmdId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OdcrespItems::ODevCmdRespList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (sessid.is_set || is_set(sessid.yfilter)) leaf_name_data.push_back(sessid.get_name_leafdata());
    if (cmdid.is_set || is_set(cmdid.yfilter)) leaf_name_data.push_back(cmdid.get_name_leafdata());
    if (resp.is_set || is_set(resp.yfilter)) leaf_name_data.push_back(resp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OdcrespItems::ODevCmdRespList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OdcrespItems::ODevCmdRespList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OdcrespItems::ODevCmdRespList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessId")
    {
        sessid = value;
        sessid.value_namespace = name_space;
        sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdId")
    {
        cmdid = value;
        cmdid.value_namespace = name_space;
        cmdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp")
    {
        resp = value;
        resp.value_namespace = name_space;
        resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::OdcrespItems::ODevCmdRespList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "sessId")
    {
        sessid.yfilter = yfilter;
    }
    if(value_path == "cmdId")
    {
        cmdid.yfilter = yfilter;
    }
    if(value_path == "resp")
    {
        resp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::OdcrespItems::ODevCmdRespList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "devId" || name == "sessId" || name == "cmdId" || name == "resp" || name == "name" || name == "id")
        return true;
    return false;
}

System::OspfItems::OspfItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::OspfItems::InstItems>())
    , if_items(std::make_shared<System::OspfItems::IfItems>())
{
    inst_items->parent = this;
    if_items->parent = this;

    yang_name = "ospf-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::~OspfItems()
{
}

bool System::OspfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::OspfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::OspfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::OspfItems::InstItems>();
        }
        return inst_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::OspfItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::OspfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::OspfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "if-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::OspfItems::InstItems::InstItems()
    :
    inst_list(this, {"name"})
{

    yang_name = "inst-items"; yang_parent_name = "ospf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::InstItems::~InstItems()
{
}

bool System::OspfItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : inst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::InstList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    memalert{YType::enumeration, "memAlert"},
    deletedviacli{YType::boolean, "deletedViaCLI"}
        ,
    dom_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems>())
    , evtlogs_items(std::make_shared<System::OspfItems::InstItems::InstList::EvtlogsItems>())
{
    dom_items->parent = this;
    evtlogs_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::InstItems::InstList::~InstList()
{
}

bool System::OspfItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| memalert.is_set
	|| deletedviacli.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_data());
}

bool System::OspfItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(memalert.yfilter)
	|| ydk::is_set(deletedviacli.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospf-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (memalert.is_set || is_set(memalert.yfilter)) leaf_name_data.push_back(memalert.get_name_leafdata());
    if (deletedviacli.is_set || is_set(deletedviacli.yfilter)) leaf_name_data.push_back(deletedviacli.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "evtlogs-items")
    {
        if(evtlogs_items == nullptr)
        {
            evtlogs_items = std::make_shared<System::OspfItems::InstItems::InstList::EvtlogsItems>();
        }
        return evtlogs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(evtlogs_items != nullptr)
    {
        children["evtlogs-items"] = evtlogs_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memAlert")
    {
        memalert = value;
        memalert.value_namespace = name_space;
        memalert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli = value;
        deletedviacli.value_namespace = name_space;
        deletedviacli.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "memAlert")
    {
        memalert.yfilter = yfilter;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "evtlogs-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "memAlert" || name == "deletedViaCLI")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::~DomItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    rtrid{YType::str, "rtrId"},
    ctrl{YType::str, "ctrl"},
    adminst{YType::enumeration, "adminSt"},
    dist{YType::uint8, "dist"},
    maxecmp{YType::uint8, "maxEcmp"},
    bwref{YType::uint32, "bwRef"},
    bwrefunit{YType::enumeration, "bwRefUnit"},
    defmetric{YType::uint32, "defMetric"},
    rfc1583compat{YType::boolean, "rfc1583Compat"},
    deletedviacli{YType::boolean, "deletedViaCLI"},
    adjchangeloglevel{YType::enumeration, "adjChangeLogLevel"},
    operst{YType::enumeration, "operSt"},
    operrtrid{YType::str, "operRtrId"},
    discardroute{YType::str, "discardRoute"},
    downbitignore{YType::boolean, "downbitIgnore"},
    capvrflite{YType::enumeration, "capVrfLite"}
        ,
    area_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems>())
    , db_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems>())
    , spfcomp_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems>())
    , lsactrl_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems>())
    , domstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems>())
    , gr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems>())
    , if_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems>())
    , maxlsap_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems>())
    , maxmetriclsap_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems>())
    , defrtleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems>())
    , interleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems>())
    , leakctrl_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems>())
    , ribleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems>())
    , extrtsum_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems>())
    , trstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems>())
{
    area_items->parent = this;
    db_items->parent = this;
    spfcomp_items->parent = this;
    lsactrl_items->parent = this;
    domstats_items->parent = this;
    gr_items->parent = this;
    if_items->parent = this;
    maxlsap_items->parent = this;
    maxmetriclsap_items->parent = this;
    defrtleak_items->parent = this;
    interleak_items->parent = this;
    leakctrl_items->parent = this;
    ribleak_items->parent = this;
    extrtsum_items->parent = this;
    trstats_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::~DomList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rtrid.is_set
	|| ctrl.is_set
	|| adminst.is_set
	|| dist.is_set
	|| maxecmp.is_set
	|| bwref.is_set
	|| bwrefunit.is_set
	|| defmetric.is_set
	|| rfc1583compat.is_set
	|| deletedviacli.is_set
	|| adjchangeloglevel.is_set
	|| operst.is_set
	|| operrtrid.is_set
	|| discardroute.is_set
	|| downbitignore.is_set
	|| capvrflite.is_set
	|| (area_items !=  nullptr && area_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_data())
	|| (lsactrl_items !=  nullptr && lsactrl_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (maxlsap_items !=  nullptr && maxlsap_items->has_data())
	|| (maxmetriclsap_items !=  nullptr && maxmetriclsap_items->has_data())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data())
	|| (interleak_items !=  nullptr && interleak_items->has_data())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_data())
	|| (ribleak_items !=  nullptr && ribleak_items->has_data())
	|| (extrtsum_items !=  nullptr && extrtsum_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rtrid.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(maxecmp.yfilter)
	|| ydk::is_set(bwref.yfilter)
	|| ydk::is_set(bwrefunit.yfilter)
	|| ydk::is_set(defmetric.yfilter)
	|| ydk::is_set(rfc1583compat.yfilter)
	|| ydk::is_set(deletedviacli.yfilter)
	|| ydk::is_set(adjchangeloglevel.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operrtrid.yfilter)
	|| ydk::is_set(discardroute.yfilter)
	|| ydk::is_set(downbitignore.yfilter)
	|| ydk::is_set(capvrflite.yfilter)
	|| (area_items !=  nullptr && area_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_operation())
	|| (lsactrl_items !=  nullptr && lsactrl_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (maxlsap_items !=  nullptr && maxlsap_items->has_operation())
	|| (maxmetriclsap_items !=  nullptr && maxmetriclsap_items->has_operation())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation())
	|| (interleak_items !=  nullptr && interleak_items->has_operation())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_operation())
	|| (ribleak_items !=  nullptr && ribleak_items->has_operation())
	|| (extrtsum_items !=  nullptr && extrtsum_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rtrid.is_set || is_set(rtrid.yfilter)) leaf_name_data.push_back(rtrid.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (maxecmp.is_set || is_set(maxecmp.yfilter)) leaf_name_data.push_back(maxecmp.get_name_leafdata());
    if (bwref.is_set || is_set(bwref.yfilter)) leaf_name_data.push_back(bwref.get_name_leafdata());
    if (bwrefunit.is_set || is_set(bwrefunit.yfilter)) leaf_name_data.push_back(bwrefunit.get_name_leafdata());
    if (defmetric.is_set || is_set(defmetric.yfilter)) leaf_name_data.push_back(defmetric.get_name_leafdata());
    if (rfc1583compat.is_set || is_set(rfc1583compat.yfilter)) leaf_name_data.push_back(rfc1583compat.get_name_leafdata());
    if (deletedviacli.is_set || is_set(deletedviacli.yfilter)) leaf_name_data.push_back(deletedviacli.get_name_leafdata());
    if (adjchangeloglevel.is_set || is_set(adjchangeloglevel.yfilter)) leaf_name_data.push_back(adjchangeloglevel.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operrtrid.is_set || is_set(operrtrid.yfilter)) leaf_name_data.push_back(operrtrid.get_name_leafdata());
    if (discardroute.is_set || is_set(discardroute.yfilter)) leaf_name_data.push_back(discardroute.get_name_leafdata());
    if (downbitignore.is_set || is_set(downbitignore.yfilter)) leaf_name_data.push_back(downbitignore.get_name_leafdata());
    if (capvrflite.is_set || is_set(capvrflite.yfilter)) leaf_name_data.push_back(capvrflite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-items")
    {
        if(area_items == nullptr)
        {
            area_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems>();
        }
        return area_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "spfcomp-items")
    {
        if(spfcomp_items == nullptr)
        {
            spfcomp_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems>();
        }
        return spfcomp_items;
    }

    if(child_yang_name == "lsactrl-items")
    {
        if(lsactrl_items == nullptr)
        {
            lsactrl_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems>();
        }
        return lsactrl_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems>();
        }
        return gr_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "maxlsap-items")
    {
        if(maxlsap_items == nullptr)
        {
            maxlsap_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems>();
        }
        return maxlsap_items;
    }

    if(child_yang_name == "maxmetriclsap-items")
    {
        if(maxmetriclsap_items == nullptr)
        {
            maxmetriclsap_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems>();
        }
        return maxmetriclsap_items;
    }

    if(child_yang_name == "defrtleak-items")
    {
        if(defrtleak_items == nullptr)
        {
            defrtleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems>();
        }
        return defrtleak_items;
    }

    if(child_yang_name == "interleak-items")
    {
        if(interleak_items == nullptr)
        {
            interleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems>();
        }
        return interleak_items;
    }

    if(child_yang_name == "leakctrl-items")
    {
        if(leakctrl_items == nullptr)
        {
            leakctrl_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems>();
        }
        return leakctrl_items;
    }

    if(child_yang_name == "ribleak-items")
    {
        if(ribleak_items == nullptr)
        {
            ribleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems>();
        }
        return ribleak_items;
    }

    if(child_yang_name == "extrtsum-items")
    {
        if(extrtsum_items == nullptr)
        {
            extrtsum_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems>();
        }
        return extrtsum_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems>();
        }
        return trstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_items != nullptr)
    {
        children["area-items"] = area_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(spfcomp_items != nullptr)
    {
        children["spfcomp-items"] = spfcomp_items;
    }

    if(lsactrl_items != nullptr)
    {
        children["lsactrl-items"] = lsactrl_items;
    }

    if(domstats_items != nullptr)
    {
        children["domstats-items"] = domstats_items;
    }

    if(gr_items != nullptr)
    {
        children["gr-items"] = gr_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(maxlsap_items != nullptr)
    {
        children["maxlsap-items"] = maxlsap_items;
    }

    if(maxmetriclsap_items != nullptr)
    {
        children["maxmetriclsap-items"] = maxmetriclsap_items;
    }

    if(defrtleak_items != nullptr)
    {
        children["defrtleak-items"] = defrtleak_items;
    }

    if(interleak_items != nullptr)
    {
        children["interleak-items"] = interleak_items;
    }

    if(leakctrl_items != nullptr)
    {
        children["leakctrl-items"] = leakctrl_items;
    }

    if(ribleak_items != nullptr)
    {
        children["ribleak-items"] = ribleak_items;
    }

    if(extrtsum_items != nullptr)
    {
        children["extrtsum-items"] = extrtsum_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrId")
    {
        rtrid = value;
        rtrid.value_namespace = name_space;
        rtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp = value;
        maxecmp.value_namespace = name_space;
        maxecmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwRef")
    {
        bwref = value;
        bwref.value_namespace = name_space;
        bwref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwRefUnit")
    {
        bwrefunit = value;
        bwrefunit.value_namespace = name_space;
        bwrefunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defMetric")
    {
        defmetric = value;
        defmetric.value_namespace = name_space;
        defmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc1583Compat")
    {
        rfc1583compat = value;
        rfc1583compat.value_namespace = name_space;
        rfc1583compat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli = value;
        deletedviacli.value_namespace = name_space;
        deletedviacli.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjChangeLogLevel")
    {
        adjchangeloglevel = value;
        adjchangeloglevel.value_namespace = name_space;
        adjchangeloglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRtrId")
    {
        operrtrid = value;
        operrtrid.value_namespace = name_space;
        operrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discardRoute")
    {
        discardroute = value;
        discardroute.value_namespace = name_space;
        discardroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downbitIgnore")
    {
        downbitignore = value;
        downbitignore.value_namespace = name_space;
        downbitignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capVrfLite")
    {
        capvrflite = value;
        capvrflite.value_namespace = name_space;
        capvrflite.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rtrId")
    {
        rtrid.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp.yfilter = yfilter;
    }
    if(value_path == "bwRef")
    {
        bwref.yfilter = yfilter;
    }
    if(value_path == "bwRefUnit")
    {
        bwrefunit.yfilter = yfilter;
    }
    if(value_path == "defMetric")
    {
        defmetric.yfilter = yfilter;
    }
    if(value_path == "rfc1583Compat")
    {
        rfc1583compat.yfilter = yfilter;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli.yfilter = yfilter;
    }
    if(value_path == "adjChangeLogLevel")
    {
        adjchangeloglevel.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operRtrId")
    {
        operrtrid.yfilter = yfilter;
    }
    if(value_path == "discardRoute")
    {
        discardroute.yfilter = yfilter;
    }
    if(value_path == "downbitIgnore")
    {
        downbitignore.yfilter = yfilter;
    }
    if(value_path == "capVrfLite")
    {
        capvrflite.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-items" || name == "db-items" || name == "spfcomp-items" || name == "lsactrl-items" || name == "domstats-items" || name == "gr-items" || name == "if-items" || name == "maxlsap-items" || name == "maxmetriclsap-items" || name == "defrtleak-items" || name == "interleak-items" || name == "leakctrl-items" || name == "ribleak-items" || name == "extrtsum-items" || name == "trstats-items" || name == "name" || name == "rtrId" || name == "ctrl" || name == "adminSt" || name == "dist" || name == "maxEcmp" || name == "bwRef" || name == "bwRefUnit" || name == "defMetric" || name == "rfc1583Compat" || name == "deletedViaCLI" || name == "adjChangeLogLevel" || name == "operSt" || name == "operRtrId" || name == "discardRoute" || name == "downbitIgnore" || name == "capVrfLite")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaItems()
    :
    area_list(this, {"id"})
{

    yang_name = "area-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::~AreaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area_list.len(); index++)
    {
        if(area_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::has_operation() const
{
    for (std::size_t index=0; index<area_list.len(); index++)
    {
        if(area_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Area-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList>();
        c->parent = this;
        area_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : area_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Area-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    cost{YType::uint32, "cost"},
    nssatransrole{YType::enumeration, "nssaTransRole"},
    brcnt{YType::uint32, "brCnt"},
    asbrcnt{YType::uint32, "asbrCnt"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    nssatransst{YType::enumeration, "nssaTransSt"},
    nssatransstabintvl{YType::uint32, "nssaTransStabIntvl"},
    authtype{YType::enumeration, "authType"}
        ,
    areastats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems>())
    , db_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems>())
    , vlink_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems>())
    , slink_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems>())
    , lsaleakp_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems>())
    , lsaleakctrlp_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems>())
    , defrtleak_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems>())
    , iartsum_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems>())
{
    areastats_items->parent = this;
    db_items->parent = this;
    vlink_items->parent = this;
    slink_items->parent = this;
    lsaleakp_items->parent = this;
    lsaleakctrlp_items->parent = this;
    defrtleak_items->parent = this;
    iartsum_items->parent = this;

    yang_name = "Area-list"; yang_parent_name = "area-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::~AreaList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| type.is_set
	|| ctrl.is_set
	|| cost.is_set
	|| nssatransrole.is_set
	|| brcnt.is_set
	|| asbrcnt.is_set
	|| lsacksumsum.is_set
	|| nssatransst.is_set
	|| nssatransstabintvl.is_set
	|| authtype.is_set
	|| (areastats_items !=  nullptr && areastats_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (vlink_items !=  nullptr && vlink_items->has_data())
	|| (slink_items !=  nullptr && slink_items->has_data())
	|| (lsaleakp_items !=  nullptr && lsaleakp_items->has_data())
	|| (lsaleakctrlp_items !=  nullptr && lsaleakctrlp_items->has_data())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data())
	|| (iartsum_items !=  nullptr && iartsum_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(nssatransrole.yfilter)
	|| ydk::is_set(brcnt.yfilter)
	|| ydk::is_set(asbrcnt.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(nssatransst.yfilter)
	|| ydk::is_set(nssatransstabintvl.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| (areastats_items !=  nullptr && areastats_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (vlink_items !=  nullptr && vlink_items->has_operation())
	|| (slink_items !=  nullptr && slink_items->has_operation())
	|| (lsaleakp_items !=  nullptr && lsaleakp_items->has_operation())
	|| (lsaleakctrlp_items !=  nullptr && lsaleakctrlp_items->has_operation())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation())
	|| (iartsum_items !=  nullptr && iartsum_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Area-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (nssatransrole.is_set || is_set(nssatransrole.yfilter)) leaf_name_data.push_back(nssatransrole.get_name_leafdata());
    if (brcnt.is_set || is_set(brcnt.yfilter)) leaf_name_data.push_back(brcnt.get_name_leafdata());
    if (asbrcnt.is_set || is_set(asbrcnt.yfilter)) leaf_name_data.push_back(asbrcnt.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (nssatransst.is_set || is_set(nssatransst.yfilter)) leaf_name_data.push_back(nssatransst.get_name_leafdata());
    if (nssatransstabintvl.is_set || is_set(nssatransstabintvl.yfilter)) leaf_name_data.push_back(nssatransstabintvl.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areastats-items")
    {
        if(areastats_items == nullptr)
        {
            areastats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems>();
        }
        return areastats_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "vlink-items")
    {
        if(vlink_items == nullptr)
        {
            vlink_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems>();
        }
        return vlink_items;
    }

    if(child_yang_name == "slink-items")
    {
        if(slink_items == nullptr)
        {
            slink_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems>();
        }
        return slink_items;
    }

    if(child_yang_name == "lsaleakp-items")
    {
        if(lsaleakp_items == nullptr)
        {
            lsaleakp_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems>();
        }
        return lsaleakp_items;
    }

    if(child_yang_name == "lsaleakctrlp-items")
    {
        if(lsaleakctrlp_items == nullptr)
        {
            lsaleakctrlp_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems>();
        }
        return lsaleakctrlp_items;
    }

    if(child_yang_name == "defrtleak-items")
    {
        if(defrtleak_items == nullptr)
        {
            defrtleak_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems>();
        }
        return defrtleak_items;
    }

    if(child_yang_name == "iartsum-items")
    {
        if(iartsum_items == nullptr)
        {
            iartsum_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems>();
        }
        return iartsum_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(areastats_items != nullptr)
    {
        children["areastats-items"] = areastats_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(vlink_items != nullptr)
    {
        children["vlink-items"] = vlink_items;
    }

    if(slink_items != nullptr)
    {
        children["slink-items"] = slink_items;
    }

    if(lsaleakp_items != nullptr)
    {
        children["lsaleakp-items"] = lsaleakp_items;
    }

    if(lsaleakctrlp_items != nullptr)
    {
        children["lsaleakctrlp-items"] = lsaleakctrlp_items;
    }

    if(defrtleak_items != nullptr)
    {
        children["defrtleak-items"] = defrtleak_items;
    }

    if(iartsum_items != nullptr)
    {
        children["iartsum-items"] = iartsum_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransRole")
    {
        nssatransrole = value;
        nssatransrole.value_namespace = name_space;
        nssatransrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brCnt")
    {
        brcnt = value;
        brcnt.value_namespace = name_space;
        brcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asbrCnt")
    {
        asbrcnt = value;
        asbrcnt.value_namespace = name_space;
        asbrcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransSt")
    {
        nssatransst = value;
        nssatransst.value_namespace = name_space;
        nssatransst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransStabIntvl")
    {
        nssatransstabintvl = value;
        nssatransstabintvl.value_namespace = name_space;
        nssatransstabintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "nssaTransRole")
    {
        nssatransrole.yfilter = yfilter;
    }
    if(value_path == "brCnt")
    {
        brcnt.yfilter = yfilter;
    }
    if(value_path == "asbrCnt")
    {
        asbrcnt.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "nssaTransSt")
    {
        nssatransst.yfilter = yfilter;
    }
    if(value_path == "nssaTransStabIntvl")
    {
        nssatransstabintvl.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areastats-items" || name == "db-items" || name == "vlink-items" || name == "slink-items" || name == "lsaleakp-items" || name == "lsaleakctrlp-items" || name == "defrtleak-items" || name == "iartsum-items" || name == "id" || name == "name" || name == "type" || name == "ctrl" || name == "cost" || name == "nssaTransRole" || name == "brCnt" || name == "asbrCnt" || name == "lsaCksumSum" || name == "nssaTransSt" || name == "nssaTransStabIntvl" || name == "authType")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::AreastatsItems()
    :
    areacreatedts{YType::str, "areaCreatedTs"},
    spfruns{YType::uint32, "spfRuns"},
    lsacnt{YType::uint32, "lsaCnt"},
    lastspfduration{YType::uint32, "lastSpfDuration"},
    ifcnt{YType::uint32, "ifCnt"},
    activeifcnt{YType::uint32, "activeIfCnt"},
    passiveifcnt{YType::uint32, "passiveIfCnt"},
    lpbkifcnt{YType::uint32, "lpbkIfCnt"},
    adjcnt{YType::uint32, "adjCnt"},
    grhelperpeercnt{YType::uint32, "grHelperPeerCnt"}
{

    yang_name = "areastats-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::~AreastatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_data() const
{
    if (is_presence_container) return true;
    return areacreatedts.is_set
	|| spfruns.is_set
	|| lsacnt.is_set
	|| lastspfduration.is_set
	|| ifcnt.is_set
	|| activeifcnt.is_set
	|| passiveifcnt.is_set
	|| lpbkifcnt.is_set
	|| adjcnt.is_set
	|| grhelperpeercnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(areacreatedts.yfilter)
	|| ydk::is_set(spfruns.yfilter)
	|| ydk::is_set(lsacnt.yfilter)
	|| ydk::is_set(lastspfduration.yfilter)
	|| ydk::is_set(ifcnt.yfilter)
	|| ydk::is_set(activeifcnt.yfilter)
	|| ydk::is_set(passiveifcnt.yfilter)
	|| ydk::is_set(lpbkifcnt.yfilter)
	|| ydk::is_set(adjcnt.yfilter)
	|| ydk::is_set(grhelperpeercnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areastats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (areacreatedts.is_set || is_set(areacreatedts.yfilter)) leaf_name_data.push_back(areacreatedts.get_name_leafdata());
    if (spfruns.is_set || is_set(spfruns.yfilter)) leaf_name_data.push_back(spfruns.get_name_leafdata());
    if (lsacnt.is_set || is_set(lsacnt.yfilter)) leaf_name_data.push_back(lsacnt.get_name_leafdata());
    if (lastspfduration.is_set || is_set(lastspfduration.yfilter)) leaf_name_data.push_back(lastspfduration.get_name_leafdata());
    if (ifcnt.is_set || is_set(ifcnt.yfilter)) leaf_name_data.push_back(ifcnt.get_name_leafdata());
    if (activeifcnt.is_set || is_set(activeifcnt.yfilter)) leaf_name_data.push_back(activeifcnt.get_name_leafdata());
    if (passiveifcnt.is_set || is_set(passiveifcnt.yfilter)) leaf_name_data.push_back(passiveifcnt.get_name_leafdata());
    if (lpbkifcnt.is_set || is_set(lpbkifcnt.yfilter)) leaf_name_data.push_back(lpbkifcnt.get_name_leafdata());
    if (adjcnt.is_set || is_set(adjcnt.yfilter)) leaf_name_data.push_back(adjcnt.get_name_leafdata());
    if (grhelperpeercnt.is_set || is_set(grhelperpeercnt.yfilter)) leaf_name_data.push_back(grhelperpeercnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "areaCreatedTs")
    {
        areacreatedts = value;
        areacreatedts.value_namespace = name_space;
        areacreatedts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spfRuns")
    {
        spfruns = value;
        spfruns.value_namespace = name_space;
        spfruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt = value;
        lsacnt.value_namespace = name_space;
        lsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastSpfDuration")
    {
        lastspfduration = value;
        lastspfduration.value_namespace = name_space;
        lastspfduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifCnt")
    {
        ifcnt = value;
        ifcnt.value_namespace = name_space;
        ifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeIfCnt")
    {
        activeifcnt = value;
        activeifcnt.value_namespace = name_space;
        activeifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIfCnt")
    {
        passiveifcnt = value;
        passiveifcnt.value_namespace = name_space;
        passiveifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpbkIfCnt")
    {
        lpbkifcnt = value;
        lpbkifcnt.value_namespace = name_space;
        lpbkifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCnt")
    {
        adjcnt = value;
        adjcnt.value_namespace = name_space;
        adjcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt = value;
        grhelperpeercnt.value_namespace = name_space;
        grhelperpeercnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "areaCreatedTs")
    {
        areacreatedts.yfilter = yfilter;
    }
    if(value_path == "spfRuns")
    {
        spfruns.yfilter = yfilter;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt.yfilter = yfilter;
    }
    if(value_path == "lastSpfDuration")
    {
        lastspfduration.yfilter = yfilter;
    }
    if(value_path == "ifCnt")
    {
        ifcnt.yfilter = yfilter;
    }
    if(value_path == "activeIfCnt")
    {
        activeifcnt.yfilter = yfilter;
    }
    if(value_path == "passiveIfCnt")
    {
        passiveifcnt.yfilter = yfilter;
    }
    if(value_path == "lpbkIfCnt")
    {
        lpbkifcnt.yfilter = yfilter;
    }
    if(value_path == "adjCnt")
    {
        adjcnt.yfilter = yfilter;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areaCreatedTs" || name == "spfRuns" || name == "lsaCnt" || name == "lastSpfDuration" || name == "ifCnt" || name == "activeIfCnt" || name == "passiveIfCnt" || name == "lpbkIfCnt" || name == "adjCnt" || name == "grHelperPeerCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::~DbItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::~DbList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_items != nullptr)
    {
        children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList>();
        c->parent = this;
        lsarec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsarec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    name{YType::str, "name"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
{

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| name.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "advRtr" || name == "name" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"}
        ,
    ucnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ucnh_items != nullptr)
    {
        children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        children["mcnh-items"] = mcnh_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        c->parent = this;
        ucnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ucnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        c->parent = this;
        mcnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VlinkItems()
    :
    vlink_list(this, {"nbrrtrid"})
{

    yang_name = "vlink-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::~VlinkItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlink_list.len(); index++)
    {
        if(vlink_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::has_operation() const
{
    for (std::size_t index=0; index<vlink_list.len(); index++)
    {
        if(vlink_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlink-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLink-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList>();
        c->parent = this;
        vlink_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlink_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VLink-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::VLinkList()
    :
    nbrrtrid{YType::str, "nbrRtrId"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint16, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"}
        ,
    adj_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems>())
    , authnew_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems>())
{
    adj_items->parent = this;
    authnew_items->parent = this;

    yang_name = "VLink-list"; yang_parent_name = "vlink-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::~VLinkList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::has_data() const
{
    if (is_presence_container) return true;
    return nbrrtrid.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (authnew_items !=  nullptr && authnew_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbrrtrid.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (authnew_items !=  nullptr && authnew_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VLink-list";
    ADD_KEY_TOKEN(nbrrtrid, "nbrRtrId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbrrtrid.is_set || is_set(nbrrtrid.yfilter)) leaf_name_data.push_back(nbrrtrid.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "authnew-items")
    {
        if(authnew_items == nullptr)
        {
            authnew_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems>();
        }
        return authnew_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(authnew_items != nullptr)
    {
        children["authnew-items"] = authnew_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbrRtrId")
    {
        nbrrtrid = value;
        nbrrtrid.value_namespace = name_space;
        nbrrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbrRtrId")
    {
        nbrrtrid.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "authnew-items" || name == "nbrRtrId" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjItems()
    :
    adjep_list(this, {"id"})
{

    yang_name = "adj-items"; yang_parent_name = "VLink-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::~AdjItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    ifid{YType::uint32, "ifId"},
    operst{YType::enumeration, "operSt"},
    bfdst{YType::enumeration, "bfdSt"},
    area{YType::str, "area"},
    prio{YType::uint8, "prio"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    peerip{YType::str, "peerIp"},
    hellooptions{YType::uint32, "helloOptions"},
    dbdoptions{YType::uint32, "dbdOptions"},
    flags{YType::str, "flags"},
    peername{YType::str, "peerName"}
        ,
    adjstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems>())
    , gr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems>())
{
    adjstats_items->parent = this;
    gr_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| ifid.is_set
	|| operst.is_set
	|| bfdst.is_set
	|| area.is_set
	|| prio.is_set
	|| dr.is_set
	|| bdr.is_set
	|| peerip.is_set
	|| hellooptions.is_set
	|| dbdoptions.is_set
	|| flags.is_set
	|| peername.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(hellooptions.yfilter)
	|| ydk::is_set(dbdoptions.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(peername.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (hellooptions.is_set || is_set(hellooptions.yfilter)) leaf_name_data.push_back(hellooptions.get_name_leafdata());
    if (dbdoptions.is_set || is_set(dbdoptions.yfilter)) leaf_name_data.push_back(dbdoptions.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (peername.is_set || is_set(peername.yfilter)) leaf_name_data.push_back(peername.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems>();
        }
        return gr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    if(gr_items != nullptr)
    {
        children["gr-items"] = gr_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloOptions")
    {
        hellooptions = value;
        hellooptions.value_namespace = name_space;
        hellooptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions = value;
        dbdoptions.value_namespace = name_space;
        dbdoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerName")
    {
        peername = value;
        peername.value_namespace = name_space;
        peername.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "helloOptions")
    {
        hellooptions.yfilter = yfilter;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "peerName")
    {
        peername.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "gr-items" || name == "id" || name == "name" || name == "ifId" || name == "operSt" || name == "bfdSt" || name == "area" || name == "prio" || name == "dr" || name == "bdr" || name == "peerIp" || name == "helloOptions" || name == "dbdOptions" || name == "flags" || name == "peerName")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    stchgcnt{YType::uint32, "stChgCnt"},
    laststchgts{YType::str, "lastStChgTs"},
    lastnonhellopktts{YType::str, "lastNonHelloPktTs"},
    dbdseqnum{YType::uint32, "dbdSeqNum"},
    reqlsacnt{YType::uint32, "reqLsaCnt"},
    outstandinglsacnt{YType::uint32, "outstandingLsaCnt"},
    lsareqrexmitcnt{YType::uint32, "lsaReqRexmitCnt"},
    deadtimerexpts{YType::str, "deadTimerExpTs"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return stchgcnt.is_set
	|| laststchgts.is_set
	|| lastnonhellopktts.is_set
	|| dbdseqnum.is_set
	|| reqlsacnt.is_set
	|| outstandinglsacnt.is_set
	|| lsareqrexmitcnt.is_set
	|| deadtimerexpts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stchgcnt.yfilter)
	|| ydk::is_set(laststchgts.yfilter)
	|| ydk::is_set(lastnonhellopktts.yfilter)
	|| ydk::is_set(dbdseqnum.yfilter)
	|| ydk::is_set(reqlsacnt.yfilter)
	|| ydk::is_set(outstandinglsacnt.yfilter)
	|| ydk::is_set(lsareqrexmitcnt.yfilter)
	|| ydk::is_set(deadtimerexpts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stchgcnt.is_set || is_set(stchgcnt.yfilter)) leaf_name_data.push_back(stchgcnt.get_name_leafdata());
    if (laststchgts.is_set || is_set(laststchgts.yfilter)) leaf_name_data.push_back(laststchgts.get_name_leafdata());
    if (lastnonhellopktts.is_set || is_set(lastnonhellopktts.yfilter)) leaf_name_data.push_back(lastnonhellopktts.get_name_leafdata());
    if (dbdseqnum.is_set || is_set(dbdseqnum.yfilter)) leaf_name_data.push_back(dbdseqnum.get_name_leafdata());
    if (reqlsacnt.is_set || is_set(reqlsacnt.yfilter)) leaf_name_data.push_back(reqlsacnt.get_name_leafdata());
    if (outstandinglsacnt.is_set || is_set(outstandinglsacnt.yfilter)) leaf_name_data.push_back(outstandinglsacnt.get_name_leafdata());
    if (lsareqrexmitcnt.is_set || is_set(lsareqrexmitcnt.yfilter)) leaf_name_data.push_back(lsareqrexmitcnt.get_name_leafdata());
    if (deadtimerexpts.is_set || is_set(deadtimerexpts.yfilter)) leaf_name_data.push_back(deadtimerexpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt = value;
        stchgcnt.value_namespace = name_space;
        stchgcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts = value;
        laststchgts.value_namespace = name_space;
        laststchgts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts = value;
        lastnonhellopktts.value_namespace = name_space;
        lastnonhellopktts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum = value;
        dbdseqnum.value_namespace = name_space;
        dbdseqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt = value;
        reqlsacnt.value_namespace = name_space;
        reqlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt = value;
        outstandinglsacnt.value_namespace = name_space;
        outstandinglsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt = value;
        lsareqrexmitcnt.value_namespace = name_space;
        lsareqrexmitcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts = value;
        deadtimerexpts.value_namespace = name_space;
        deadtimerexpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt.yfilter = yfilter;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts.yfilter = yfilter;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts.yfilter = yfilter;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum.yfilter = yfilter;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt.yfilter = yfilter;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt.yfilter = yfilter;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt.yfilter = yfilter;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stChgCnt" || name == "lastStChgTs" || name == "lastNonHelloPktTs" || name == "dbdSeqNum" || name == "reqLsaCnt" || name == "outstandingLsaCnt" || name == "lsaReqRexmitCnt" || name == "deadTimerExpTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::GrItems()
    :
    helperst{YType::enumeration, "helperSt"},
    helperage{YType::uint32, "helperAge"},
    helperexitqual{YType::enumeration, "helperExitQual"}
{

    yang_name = "gr-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::~GrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return helperst.is_set
	|| helperage.is_set
	|| helperexitqual.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(helperst.yfilter)
	|| ydk::is_set(helperage.yfilter)
	|| ydk::is_set(helperexitqual.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helperst.is_set || is_set(helperst.yfilter)) leaf_name_data.push_back(helperst.get_name_leafdata());
    if (helperage.is_set || is_set(helperage.yfilter)) leaf_name_data.push_back(helperage.get_name_leafdata());
    if (helperexitqual.is_set || is_set(helperexitqual.yfilter)) leaf_name_data.push_back(helperexitqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helperSt")
    {
        helperst = value;
        helperst.value_namespace = name_space;
        helperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperAge")
    {
        helperage = value;
        helperage.value_namespace = name_space;
        helperage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual = value;
        helperexitqual.value_namespace = name_space;
        helperexitqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helperSt")
    {
        helperst.yfilter = yfilter;
    }
    if(value_path == "helperAge")
    {
        helperage.yfilter = yfilter;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helperSt" || name == "helperAge" || name == "helperExitQual")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::AuthnewItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    keysecuremode{YType::boolean, "keySecureMode"},
    md5key{YType::str, "md5key"},
    md5keysecuremode{YType::boolean, "md5keySecureMode"},
    keychain{YType::str, "keychain"}
{

    yang_name = "authnew-items"; yang_parent_name = "VLink-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::~AuthnewItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| keyid.is_set
	|| key.is_set
	|| keysecuremode.is_set
	|| md5key.is_set
	|| md5keysecuremode.is_set
	|| keychain.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keysecuremode.yfilter)
	|| ydk::is_set(md5key.yfilter)
	|| ydk::is_set(md5keysecuremode.yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authnew-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keysecuremode.is_set || is_set(keysecuremode.yfilter)) leaf_name_data.push_back(keysecuremode.get_name_leafdata());
    if (md5key.is_set || is_set(md5key.yfilter)) leaf_name_data.push_back(md5key.get_name_leafdata());
    if (md5keysecuremode.is_set || is_set(md5keysecuremode.yfilter)) leaf_name_data.push_back(md5keysecuremode.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode = value;
        keysecuremode.value_namespace = name_space;
        keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5key")
    {
        md5key = value;
        md5key.value_namespace = name_space;
        md5key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode = value;
        md5keysecuremode.value_namespace = name_space;
        md5keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode.yfilter = yfilter;
    }
    if(value_path == "md5key")
    {
        md5key.yfilter = yfilter;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "keyId" || name == "key" || name == "keySecureMode" || name == "md5key" || name == "md5keySecureMode" || name == "keychain")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SlinkItems()
    :
    slink_list(this, {"srcaddr", "dstaddr"})
{

    yang_name = "slink-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::~SlinkItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slink_list.len(); index++)
    {
        if(slink_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::has_operation() const
{
    for (std::size_t index=0; index<slink_list.len(); index++)
    {
        if(slink_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slink-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SLink-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList>();
        c->parent = this;
        slink_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : slink_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SLink-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::SLinkList()
    :
    srcaddr{YType::str, "srcAddr"},
    dstaddr{YType::str, "dstAddr"},
    demandckt{YType::boolean, "demandCkt"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint16, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"},
    cost{YType::uint16, "cost"}
        ,
    authnew_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems>())
{
    authnew_items->parent = this;

    yang_name = "SLink-list"; yang_parent_name = "slink-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::~SLinkList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| dstaddr.is_set
	|| demandckt.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| cost.is_set
	|| (authnew_items !=  nullptr && authnew_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(demandckt.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (authnew_items !=  nullptr && authnew_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SLink-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    ADD_KEY_TOKEN(dstaddr, "dstAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (demandckt.is_set || is_set(demandckt.yfilter)) leaf_name_data.push_back(demandckt.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authnew-items")
    {
        if(authnew_items == nullptr)
        {
            authnew_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems>();
        }
        return authnew_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authnew_items != nullptr)
    {
        children["authnew-items"] = authnew_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddr")
    {
        dstaddr = value;
        dstaddr.value_namespace = name_space;
        dstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demandCkt")
    {
        demandckt = value;
        demandckt.value_namespace = name_space;
        demandckt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "demandCkt")
    {
        demandckt.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authnew-items" || name == "srcAddr" || name == "dstAddr" || name == "demandCkt" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay" || name == "cost")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::AuthnewItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    keysecuremode{YType::boolean, "keySecureMode"},
    md5key{YType::str, "md5key"},
    md5keysecuremode{YType::boolean, "md5keySecureMode"},
    keychain{YType::str, "keychain"}
{

    yang_name = "authnew-items"; yang_parent_name = "SLink-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::~AuthnewItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| keyid.is_set
	|| key.is_set
	|| keysecuremode.is_set
	|| md5key.is_set
	|| md5keysecuremode.is_set
	|| keychain.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keysecuremode.yfilter)
	|| ydk::is_set(md5key.yfilter)
	|| ydk::is_set(md5keysecuremode.yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authnew-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keysecuremode.is_set || is_set(keysecuremode.yfilter)) leaf_name_data.push_back(keysecuremode.get_name_leafdata());
    if (md5key.is_set || is_set(md5key.yfilter)) leaf_name_data.push_back(md5key.get_name_leafdata());
    if (md5keysecuremode.is_set || is_set(md5keysecuremode.yfilter)) leaf_name_data.push_back(md5keysecuremode.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode = value;
        keysecuremode.value_namespace = name_space;
        keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5key")
    {
        md5key = value;
        md5key.value_namespace = name_space;
        md5key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode = value;
        md5keysecuremode.value_namespace = name_space;
        md5keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode.yfilter = yfilter;
    }
    if(value_path == "md5key")
    {
        md5key.yfilter = yfilter;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "keyId" || name == "key" || name == "keySecureMode" || name == "md5key" || name == "md5keySecureMode" || name == "keychain")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::LsaleakpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "lsaleakp-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::~LsaleakpItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| operst.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsaleakp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "operSt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaleakctrlpItems()
    :
    lsaleakctrlp_list(this, {"dir"})
{

    yang_name = "lsaleakctrlp-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::~LsaleakctrlpItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsaleakctrlp_list.len(); index++)
    {
        if(lsaleakctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::has_operation() const
{
    for (std::size_t index=0; index<lsaleakctrlp_list.len(); index++)
    {
        if(lsaleakctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsaleakctrlp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaLeakCtrlP-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList>();
        c->parent = this;
        lsaleakctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsaleakctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaLeakCtrlP-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::LsaLeakCtrlPList()
    :
    dir{YType::enumeration, "dir"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "LsaLeakCtrlP-list"; yang_parent_name = "lsaleakctrlp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::~LsaLeakCtrlPList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return dir.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| operst.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaLeakCtrlP-list";
    ADD_KEY_TOKEN(dir, "dir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "operSt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::IartsumItems()
    :
    interareartsum_list(this, {"addr"})
{

    yang_name = "iartsum-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::~IartsumItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interareartsum_list.len(); index++)
    {
        if(interareartsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::has_operation() const
{
    for (std::size_t index=0; index<interareartsum_list.len(); index++)
    {
        if(interareartsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iartsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterAreaRtSum-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList>();
        c->parent = this;
        interareartsum_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interareartsum_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterAreaRtSum-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::InterAreaRtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    comprtcnt{YType::uint32, "compRtCnt"},
    opercost{YType::uint32, "operCost"},
    cost{YType::uint32, "cost"}
{

    yang_name = "InterAreaRtSum-list"; yang_parent_name = "iartsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::~InterAreaRtSumList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| comprtcnt.is_set
	|| opercost.is_set
	|| cost.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(comprtcnt.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterAreaRtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (comprtcnt.is_set || is_set(comprtcnt.yfilter)) leaf_name_data.push_back(comprtcnt.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt = value;
        comprtcnt.value_namespace = name_space;
        comprtcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "ctrl" || name == "compRtCnt" || name == "operCost" || name == "cost")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_items != nullptr)
    {
        children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList>();
        c->parent = this;
        lsarec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsarec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    name{YType::str, "name"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
{

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| name.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "advRtr" || name == "name" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"}
        ,
    ucnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ucnh_items != nullptr)
    {
        children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        children["mcnh-items"] = mcnh_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        c->parent = this;
        ucnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ucnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        c->parent = this;
        mcnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::SpfcompItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    initintvl{YType::uint32, "initIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "spfcomp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::~SpfcompItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| initintvl.is_set
	|| holdintvl.is_set
	|| maxintvl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(initintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfcomp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (initintvl.is_set || is_set(initintvl.yfilter)) leaf_name_data.push_back(initintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initIntvl")
    {
        initintvl = value;
        initintvl.value_namespace = name_space;
        initintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "initIntvl")
    {
        initintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "initIntvl" || name == "holdIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::LsactrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    gppacingintvl{YType::uint16, "gpPacingIntvl"},
    arrivalintvl{YType::uint32, "arrivalIntvl"},
    startintvl{YType::uint32, "startIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "lsactrl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::~LsactrlItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| gppacingintvl.is_set
	|| arrivalintvl.is_set
	|| startintvl.is_set
	|| holdintvl.is_set
	|| maxintvl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(gppacingintvl.yfilter)
	|| ydk::is_set(arrivalintvl.yfilter)
	|| ydk::is_set(startintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsactrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (gppacingintvl.is_set || is_set(gppacingintvl.yfilter)) leaf_name_data.push_back(gppacingintvl.get_name_leafdata());
    if (arrivalintvl.is_set || is_set(arrivalintvl.yfilter)) leaf_name_data.push_back(arrivalintvl.get_name_leafdata());
    if (startintvl.is_set || is_set(startintvl.yfilter)) leaf_name_data.push_back(startintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gpPacingIntvl")
    {
        gppacingintvl = value;
        gppacingintvl.value_namespace = name_space;
        gppacingintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalIntvl")
    {
        arrivalintvl = value;
        arrivalintvl.value_namespace = name_space;
        arrivalintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startIntvl")
    {
        startintvl = value;
        startintvl.value_namespace = name_space;
        startintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "gpPacingIntvl")
    {
        gppacingintvl.yfilter = yfilter;
    }
    if(value_path == "arrivalIntvl")
    {
        arrivalintvl.yfilter = yfilter;
    }
    if(value_path == "startIntvl")
    {
        startintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "gpPacingIntvl" || name == "arrivalIntvl" || name == "startIntvl" || name == "holdIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::DomstatsItems()
    :
    ifcnt{YType::uint32, "ifCnt"},
    areacnt{YType::uint32, "areaCnt"},
    stubareacnt{YType::uint32, "stubAreaCnt"},
    nssaareacnt{YType::uint32, "nssaAreaCnt"},
    extareacnt{YType::uint32, "extAreaCnt"},
    activestubareacnt{YType::uint32, "activeStubAreaCnt"},
    activenssaareacnt{YType::uint32, "activeNssaAreaCnt"},
    activeextareacnt{YType::uint32, "activeExtAreaCnt"},
    activeareacnt{YType::uint32, "activeAreaCnt"},
    laststatsclearts{YType::str, "lastStatsClearTs"},
    peercnt{YType::uint32, "peerCnt"},
    extlsacnt{YType::uint32, "extLsaCnt"},
    opaqueaslsacnt{YType::uint32, "opaqueAsLsaCnt"},
    totalaslsacnt{YType::uint32, "totalAsLsaCnt"},
    newlsarxcnt{YType::uint32, "newLsaRxCnt"},
    newlsatxcnt{YType::uint32, "newLsaTxCnt"},
    areabdrrtr{YType::uint8, "areaBdrRtr"},
    asbdrrtr{YType::uint8, "asBdrRtr"}
{

    yang_name = "domstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::~DomstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return ifcnt.is_set
	|| areacnt.is_set
	|| stubareacnt.is_set
	|| nssaareacnt.is_set
	|| extareacnt.is_set
	|| activestubareacnt.is_set
	|| activenssaareacnt.is_set
	|| activeextareacnt.is_set
	|| activeareacnt.is_set
	|| laststatsclearts.is_set
	|| peercnt.is_set
	|| extlsacnt.is_set
	|| opaqueaslsacnt.is_set
	|| totalaslsacnt.is_set
	|| newlsarxcnt.is_set
	|| newlsatxcnt.is_set
	|| areabdrrtr.is_set
	|| asbdrrtr.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifcnt.yfilter)
	|| ydk::is_set(areacnt.yfilter)
	|| ydk::is_set(stubareacnt.yfilter)
	|| ydk::is_set(nssaareacnt.yfilter)
	|| ydk::is_set(extareacnt.yfilter)
	|| ydk::is_set(activestubareacnt.yfilter)
	|| ydk::is_set(activenssaareacnt.yfilter)
	|| ydk::is_set(activeextareacnt.yfilter)
	|| ydk::is_set(activeareacnt.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter)
	|| ydk::is_set(peercnt.yfilter)
	|| ydk::is_set(extlsacnt.yfilter)
	|| ydk::is_set(opaqueaslsacnt.yfilter)
	|| ydk::is_set(totalaslsacnt.yfilter)
	|| ydk::is_set(newlsarxcnt.yfilter)
	|| ydk::is_set(newlsatxcnt.yfilter)
	|| ydk::is_set(areabdrrtr.yfilter)
	|| ydk::is_set(asbdrrtr.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifcnt.is_set || is_set(ifcnt.yfilter)) leaf_name_data.push_back(ifcnt.get_name_leafdata());
    if (areacnt.is_set || is_set(areacnt.yfilter)) leaf_name_data.push_back(areacnt.get_name_leafdata());
    if (stubareacnt.is_set || is_set(stubareacnt.yfilter)) leaf_name_data.push_back(stubareacnt.get_name_leafdata());
    if (nssaareacnt.is_set || is_set(nssaareacnt.yfilter)) leaf_name_data.push_back(nssaareacnt.get_name_leafdata());
    if (extareacnt.is_set || is_set(extareacnt.yfilter)) leaf_name_data.push_back(extareacnt.get_name_leafdata());
    if (activestubareacnt.is_set || is_set(activestubareacnt.yfilter)) leaf_name_data.push_back(activestubareacnt.get_name_leafdata());
    if (activenssaareacnt.is_set || is_set(activenssaareacnt.yfilter)) leaf_name_data.push_back(activenssaareacnt.get_name_leafdata());
    if (activeextareacnt.is_set || is_set(activeextareacnt.yfilter)) leaf_name_data.push_back(activeextareacnt.get_name_leafdata());
    if (activeareacnt.is_set || is_set(activeareacnt.yfilter)) leaf_name_data.push_back(activeareacnt.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());
    if (peercnt.is_set || is_set(peercnt.yfilter)) leaf_name_data.push_back(peercnt.get_name_leafdata());
    if (extlsacnt.is_set || is_set(extlsacnt.yfilter)) leaf_name_data.push_back(extlsacnt.get_name_leafdata());
    if (opaqueaslsacnt.is_set || is_set(opaqueaslsacnt.yfilter)) leaf_name_data.push_back(opaqueaslsacnt.get_name_leafdata());
    if (totalaslsacnt.is_set || is_set(totalaslsacnt.yfilter)) leaf_name_data.push_back(totalaslsacnt.get_name_leafdata());
    if (newlsarxcnt.is_set || is_set(newlsarxcnt.yfilter)) leaf_name_data.push_back(newlsarxcnt.get_name_leafdata());
    if (newlsatxcnt.is_set || is_set(newlsatxcnt.yfilter)) leaf_name_data.push_back(newlsatxcnt.get_name_leafdata());
    if (areabdrrtr.is_set || is_set(areabdrrtr.yfilter)) leaf_name_data.push_back(areabdrrtr.get_name_leafdata());
    if (asbdrrtr.is_set || is_set(asbdrrtr.yfilter)) leaf_name_data.push_back(asbdrrtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifCnt")
    {
        ifcnt = value;
        ifcnt.value_namespace = name_space;
        ifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "areaCnt")
    {
        areacnt = value;
        areacnt.value_namespace = name_space;
        areacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubAreaCnt")
    {
        stubareacnt = value;
        stubareacnt.value_namespace = name_space;
        stubareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaAreaCnt")
    {
        nssaareacnt = value;
        nssaareacnt.value_namespace = name_space;
        nssaareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extAreaCnt")
    {
        extareacnt = value;
        extareacnt.value_namespace = name_space;
        extareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeStubAreaCnt")
    {
        activestubareacnt = value;
        activestubareacnt.value_namespace = name_space;
        activestubareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeNssaAreaCnt")
    {
        activenssaareacnt = value;
        activenssaareacnt.value_namespace = name_space;
        activenssaareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeExtAreaCnt")
    {
        activeextareacnt = value;
        activeextareacnt.value_namespace = name_space;
        activeextareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeAreaCnt")
    {
        activeareacnt = value;
        activeareacnt.value_namespace = name_space;
        activeareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCnt")
    {
        peercnt = value;
        peercnt.value_namespace = name_space;
        peercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extLsaCnt")
    {
        extlsacnt = value;
        extlsacnt.value_namespace = name_space;
        extlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaqueAsLsaCnt")
    {
        opaqueaslsacnt = value;
        opaqueaslsacnt.value_namespace = name_space;
        opaqueaslsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalAsLsaCnt")
    {
        totalaslsacnt = value;
        totalaslsacnt.value_namespace = name_space;
        totalaslsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newLsaRxCnt")
    {
        newlsarxcnt = value;
        newlsarxcnt.value_namespace = name_space;
        newlsarxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newLsaTxCnt")
    {
        newlsatxcnt = value;
        newlsatxcnt.value_namespace = name_space;
        newlsatxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "areaBdrRtr")
    {
        areabdrrtr = value;
        areabdrrtr.value_namespace = name_space;
        areabdrrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asBdrRtr")
    {
        asbdrrtr = value;
        asbdrrtr.value_namespace = name_space;
        asbdrrtr.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifCnt")
    {
        ifcnt.yfilter = yfilter;
    }
    if(value_path == "areaCnt")
    {
        areacnt.yfilter = yfilter;
    }
    if(value_path == "stubAreaCnt")
    {
        stubareacnt.yfilter = yfilter;
    }
    if(value_path == "nssaAreaCnt")
    {
        nssaareacnt.yfilter = yfilter;
    }
    if(value_path == "extAreaCnt")
    {
        extareacnt.yfilter = yfilter;
    }
    if(value_path == "activeStubAreaCnt")
    {
        activestubareacnt.yfilter = yfilter;
    }
    if(value_path == "activeNssaAreaCnt")
    {
        activenssaareacnt.yfilter = yfilter;
    }
    if(value_path == "activeExtAreaCnt")
    {
        activeextareacnt.yfilter = yfilter;
    }
    if(value_path == "activeAreaCnt")
    {
        activeareacnt.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
    if(value_path == "peerCnt")
    {
        peercnt.yfilter = yfilter;
    }
    if(value_path == "extLsaCnt")
    {
        extlsacnt.yfilter = yfilter;
    }
    if(value_path == "opaqueAsLsaCnt")
    {
        opaqueaslsacnt.yfilter = yfilter;
    }
    if(value_path == "totalAsLsaCnt")
    {
        totalaslsacnt.yfilter = yfilter;
    }
    if(value_path == "newLsaRxCnt")
    {
        newlsarxcnt.yfilter = yfilter;
    }
    if(value_path == "newLsaTxCnt")
    {
        newlsatxcnt.yfilter = yfilter;
    }
    if(value_path == "areaBdrRtr")
    {
        areabdrrtr.yfilter = yfilter;
    }
    if(value_path == "asBdrRtr")
    {
        asbdrrtr.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifCnt" || name == "areaCnt" || name == "stubAreaCnt" || name == "nssaAreaCnt" || name == "extAreaCnt" || name == "activeStubAreaCnt" || name == "activeNssaAreaCnt" || name == "activeExtAreaCnt" || name == "activeAreaCnt" || name == "lastStatsClearTs" || name == "peerCnt" || name == "extLsaCnt" || name == "opaqueAsLsaCnt" || name == "totalAsLsaCnt" || name == "newLsaRxCnt" || name == "newLsaTxCnt" || name == "areaBdrRtr" || name == "asBdrRtr")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::GrItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    helper{YType::boolean, "helper"},
    graceperiod{YType::uint32, "gracePeriod"},
    restartstatus{YType::enumeration, "restartStatus"},
    restartage{YType::uint32, "restartAge"},
    restartexitreason{YType::enumeration, "restartExitReason"}
{

    yang_name = "gr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::~GrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| helper.is_set
	|| graceperiod.is_set
	|| restartstatus.is_set
	|| restartage.is_set
	|| restartexitreason.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(helper.yfilter)
	|| ydk::is_set(graceperiod.yfilter)
	|| ydk::is_set(restartstatus.yfilter)
	|| ydk::is_set(restartage.yfilter)
	|| ydk::is_set(restartexitreason.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (helper.is_set || is_set(helper.yfilter)) leaf_name_data.push_back(helper.get_name_leafdata());
    if (graceperiod.is_set || is_set(graceperiod.yfilter)) leaf_name_data.push_back(graceperiod.get_name_leafdata());
    if (restartstatus.is_set || is_set(restartstatus.yfilter)) leaf_name_data.push_back(restartstatus.get_name_leafdata());
    if (restartage.is_set || is_set(restartage.yfilter)) leaf_name_data.push_back(restartage.get_name_leafdata());
    if (restartexitreason.is_set || is_set(restartexitreason.yfilter)) leaf_name_data.push_back(restartexitreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper")
    {
        helper = value;
        helper.value_namespace = name_space;
        helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gracePeriod")
    {
        graceperiod = value;
        graceperiod.value_namespace = name_space;
        graceperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartStatus")
    {
        restartstatus = value;
        restartstatus.value_namespace = name_space;
        restartstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartAge")
    {
        restartage = value;
        restartage.value_namespace = name_space;
        restartage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartExitReason")
    {
        restartexitreason = value;
        restartexitreason.value_namespace = name_space;
        restartexitreason.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "helper")
    {
        helper.yfilter = yfilter;
    }
    if(value_path == "gracePeriod")
    {
        graceperiod.yfilter = yfilter;
    }
    if(value_path == "restartStatus")
    {
        restartstatus.yfilter = yfilter;
    }
    if(value_path == "restartAge")
    {
        restartage.yfilter = yfilter;
    }
    if(value_path == "restartExitReason")
    {
        restartexitreason.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "helper" || name == "gracePeriod" || name == "restartStatus" || name == "restartAge" || name == "restartExitReason")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    passivectrl{YType::enumeration, "passiveCtrl"},
    bfdctrl{YType::enumeration, "bfdCtrl"},
    nwt{YType::enumeration, "nwT"},
    prio{YType::uint8, "prio"},
    area{YType::str, "area"},
    advertisesecondaries{YType::boolean, "advertiseSecondaries"},
    operst{YType::enumeration, "operSt"},
    failstqual{YType::str, "failStQual"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"},
    addr{YType::str, "addr"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    drid{YType::str, "drId"},
    bdrid{YType::str, "bdrId"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    opercost{YType::uint16, "operCost"},
    operdeadintvl{YType::uint16, "operDeadIntvl"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint16, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"},
    cost{YType::uint16, "cost"}
        ,
    adj_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>())
    , auth_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems>())
    , authnew_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems>())
    , db_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems>())
    , ifstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems>())
    , multiarea_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems>())
    , trstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems>())
    , rtospfifdeftoospfif_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems>())
    , rtvrfmbr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    auth_items->parent = this;
    authnew_items->parent = this;
    db_items->parent = this;
    ifstats_items->parent = this;
    multiarea_items->parent = this;
    trstats_items->parent = this;
    rtospfifdeftoospfif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| passivectrl.is_set
	|| bfdctrl.is_set
	|| nwt.is_set
	|| prio.is_set
	|| area.is_set
	|| advertisesecondaries.is_set
	|| operst.is_set
	|| failstqual.is_set
	|| type.is_set
	|| flags.is_set
	|| addr.is_set
	|| dr.is_set
	|| bdr.is_set
	|| drid.is_set
	|| bdrid.is_set
	|| lsacksumsum.is_set
	|| opercost.is_set
	|| operdeadintvl.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| cost.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (authnew_items !=  nullptr && authnew_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (multiarea_items !=  nullptr && multiarea_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (rtospfifdeftoospfif_items !=  nullptr && rtospfifdeftoospfif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(passivectrl.yfilter)
	|| ydk::is_set(bfdctrl.yfilter)
	|| ydk::is_set(nwt.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(advertisesecondaries.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(failstqual.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(drid.yfilter)
	|| ydk::is_set(bdrid.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(operdeadintvl.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (authnew_items !=  nullptr && authnew_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (multiarea_items !=  nullptr && multiarea_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (rtospfifdeftoospfif_items !=  nullptr && rtospfifdeftoospfif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (passivectrl.is_set || is_set(passivectrl.yfilter)) leaf_name_data.push_back(passivectrl.get_name_leafdata());
    if (bfdctrl.is_set || is_set(bfdctrl.yfilter)) leaf_name_data.push_back(bfdctrl.get_name_leafdata());
    if (nwt.is_set || is_set(nwt.yfilter)) leaf_name_data.push_back(nwt.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (advertisesecondaries.is_set || is_set(advertisesecondaries.yfilter)) leaf_name_data.push_back(advertisesecondaries.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (failstqual.is_set || is_set(failstqual.yfilter)) leaf_name_data.push_back(failstqual.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (drid.is_set || is_set(drid.yfilter)) leaf_name_data.push_back(drid.get_name_leafdata());
    if (bdrid.is_set || is_set(bdrid.yfilter)) leaf_name_data.push_back(bdrid.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (operdeadintvl.is_set || is_set(operdeadintvl.yfilter)) leaf_name_data.push_back(operdeadintvl.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "authnew-items")
    {
        if(authnew_items == nullptr)
        {
            authnew_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems>();
        }
        return authnew_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "multiarea-items")
    {
        if(multiarea_items == nullptr)
        {
            multiarea_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems>();
        }
        return multiarea_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "rtospfIfDefToOspfIf-items")
    {
        if(rtospfifdeftoospfif_items == nullptr)
        {
            rtospfifdeftoospfif_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems>();
        }
        return rtospfifdeftoospfif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(auth_items != nullptr)
    {
        children["auth-items"] = auth_items;
    }

    if(authnew_items != nullptr)
    {
        children["authnew-items"] = authnew_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    if(multiarea_items != nullptr)
    {
        children["multiarea-items"] = multiarea_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    if(rtospfifdeftoospfif_items != nullptr)
    {
        children["rtospfIfDefToOspfIf-items"] = rtospfifdeftoospfif_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveCtrl")
    {
        passivectrl = value;
        passivectrl.value_namespace = name_space;
        passivectrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl = value;
        bfdctrl.value_namespace = name_space;
        bfdctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nwT")
    {
        nwt = value;
        nwt.value_namespace = name_space;
        nwt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries = value;
        advertisesecondaries.value_namespace = name_space;
        advertisesecondaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failStQual")
    {
        failstqual = value;
        failstqual.value_namespace = name_space;
        failstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drId")
    {
        drid = value;
        drid.value_namespace = name_space;
        drid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdrId")
    {
        bdrid = value;
        bdrid.value_namespace = name_space;
        bdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl = value;
        operdeadintvl.value_namespace = name_space;
        operdeadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "passiveCtrl")
    {
        passivectrl.yfilter = yfilter;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl.yfilter = yfilter;
    }
    if(value_path == "nwT")
    {
        nwt.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "failStQual")
    {
        failstqual.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "drId")
    {
        drid.yfilter = yfilter;
    }
    if(value_path == "bdrId")
    {
        bdrid.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "auth-items" || name == "authnew-items" || name == "db-items" || name == "ifstats-items" || name == "multiarea-items" || name == "trstats-items" || name == "rtospfIfDefToOspfIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "passiveCtrl" || name == "bfdCtrl" || name == "nwT" || name == "prio" || name == "area" || name == "advertiseSecondaries" || name == "operSt" || name == "failStQual" || name == "type" || name == "flags" || name == "addr" || name == "dr" || name == "bdr" || name == "drId" || name == "bdrId" || name == "lsaCksumSum" || name == "operCost" || name == "operDeadIntvl" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay" || name == "cost")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"id"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    ifid{YType::uint32, "ifId"},
    operst{YType::enumeration, "operSt"},
    bfdst{YType::enumeration, "bfdSt"},
    area{YType::str, "area"},
    prio{YType::uint8, "prio"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    peerip{YType::str, "peerIp"},
    hellooptions{YType::uint32, "helloOptions"},
    dbdoptions{YType::uint32, "dbdOptions"},
    flags{YType::str, "flags"},
    peername{YType::str, "peerName"}
        ,
    adjstats_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>())
    , gr_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems>())
{
    adjstats_items->parent = this;
    gr_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| ifid.is_set
	|| operst.is_set
	|| bfdst.is_set
	|| area.is_set
	|| prio.is_set
	|| dr.is_set
	|| bdr.is_set
	|| peerip.is_set
	|| hellooptions.is_set
	|| dbdoptions.is_set
	|| flags.is_set
	|| peername.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(hellooptions.yfilter)
	|| ydk::is_set(dbdoptions.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(peername.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (hellooptions.is_set || is_set(hellooptions.yfilter)) leaf_name_data.push_back(hellooptions.get_name_leafdata());
    if (dbdoptions.is_set || is_set(dbdoptions.yfilter)) leaf_name_data.push_back(dbdoptions.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (peername.is_set || is_set(peername.yfilter)) leaf_name_data.push_back(peername.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems>();
        }
        return gr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    if(gr_items != nullptr)
    {
        children["gr-items"] = gr_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloOptions")
    {
        hellooptions = value;
        hellooptions.value_namespace = name_space;
        hellooptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions = value;
        dbdoptions.value_namespace = name_space;
        dbdoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerName")
    {
        peername = value;
        peername.value_namespace = name_space;
        peername.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "helloOptions")
    {
        hellooptions.yfilter = yfilter;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "peerName")
    {
        peername.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "gr-items" || name == "id" || name == "name" || name == "ifId" || name == "operSt" || name == "bfdSt" || name == "area" || name == "prio" || name == "dr" || name == "bdr" || name == "peerIp" || name == "helloOptions" || name == "dbdOptions" || name == "flags" || name == "peerName")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    stchgcnt{YType::uint32, "stChgCnt"},
    laststchgts{YType::str, "lastStChgTs"},
    lastnonhellopktts{YType::str, "lastNonHelloPktTs"},
    dbdseqnum{YType::uint32, "dbdSeqNum"},
    reqlsacnt{YType::uint32, "reqLsaCnt"},
    outstandinglsacnt{YType::uint32, "outstandingLsaCnt"},
    lsareqrexmitcnt{YType::uint32, "lsaReqRexmitCnt"},
    deadtimerexpts{YType::str, "deadTimerExpTs"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return stchgcnt.is_set
	|| laststchgts.is_set
	|| lastnonhellopktts.is_set
	|| dbdseqnum.is_set
	|| reqlsacnt.is_set
	|| outstandinglsacnt.is_set
	|| lsareqrexmitcnt.is_set
	|| deadtimerexpts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stchgcnt.yfilter)
	|| ydk::is_set(laststchgts.yfilter)
	|| ydk::is_set(lastnonhellopktts.yfilter)
	|| ydk::is_set(dbdseqnum.yfilter)
	|| ydk::is_set(reqlsacnt.yfilter)
	|| ydk::is_set(outstandinglsacnt.yfilter)
	|| ydk::is_set(lsareqrexmitcnt.yfilter)
	|| ydk::is_set(deadtimerexpts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stchgcnt.is_set || is_set(stchgcnt.yfilter)) leaf_name_data.push_back(stchgcnt.get_name_leafdata());
    if (laststchgts.is_set || is_set(laststchgts.yfilter)) leaf_name_data.push_back(laststchgts.get_name_leafdata());
    if (lastnonhellopktts.is_set || is_set(lastnonhellopktts.yfilter)) leaf_name_data.push_back(lastnonhellopktts.get_name_leafdata());
    if (dbdseqnum.is_set || is_set(dbdseqnum.yfilter)) leaf_name_data.push_back(dbdseqnum.get_name_leafdata());
    if (reqlsacnt.is_set || is_set(reqlsacnt.yfilter)) leaf_name_data.push_back(reqlsacnt.get_name_leafdata());
    if (outstandinglsacnt.is_set || is_set(outstandinglsacnt.yfilter)) leaf_name_data.push_back(outstandinglsacnt.get_name_leafdata());
    if (lsareqrexmitcnt.is_set || is_set(lsareqrexmitcnt.yfilter)) leaf_name_data.push_back(lsareqrexmitcnt.get_name_leafdata());
    if (deadtimerexpts.is_set || is_set(deadtimerexpts.yfilter)) leaf_name_data.push_back(deadtimerexpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt = value;
        stchgcnt.value_namespace = name_space;
        stchgcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts = value;
        laststchgts.value_namespace = name_space;
        laststchgts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts = value;
        lastnonhellopktts.value_namespace = name_space;
        lastnonhellopktts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum = value;
        dbdseqnum.value_namespace = name_space;
        dbdseqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt = value;
        reqlsacnt.value_namespace = name_space;
        reqlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt = value;
        outstandinglsacnt.value_namespace = name_space;
        outstandinglsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt = value;
        lsareqrexmitcnt.value_namespace = name_space;
        lsareqrexmitcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts = value;
        deadtimerexpts.value_namespace = name_space;
        deadtimerexpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt.yfilter = yfilter;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts.yfilter = yfilter;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts.yfilter = yfilter;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum.yfilter = yfilter;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt.yfilter = yfilter;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt.yfilter = yfilter;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt.yfilter = yfilter;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stChgCnt" || name == "lastStChgTs" || name == "lastNonHelloPktTs" || name == "dbdSeqNum" || name == "reqLsaCnt" || name == "outstandingLsaCnt" || name == "lsaReqRexmitCnt" || name == "deadTimerExpTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::GrItems()
    :
    helperst{YType::enumeration, "helperSt"},
    helperage{YType::uint32, "helperAge"},
    helperexitqual{YType::enumeration, "helperExitQual"}
{

    yang_name = "gr-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::~GrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return helperst.is_set
	|| helperage.is_set
	|| helperexitqual.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(helperst.yfilter)
	|| ydk::is_set(helperage.yfilter)
	|| ydk::is_set(helperexitqual.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helperst.is_set || is_set(helperst.yfilter)) leaf_name_data.push_back(helperst.get_name_leafdata());
    if (helperage.is_set || is_set(helperage.yfilter)) leaf_name_data.push_back(helperage.get_name_leafdata());
    if (helperexitqual.is_set || is_set(helperexitqual.yfilter)) leaf_name_data.push_back(helperexitqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helperSt")
    {
        helperst = value;
        helperst.value_namespace = name_space;
        helperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperAge")
    {
        helperage = value;
        helperage.value_namespace = name_space;
        helperage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual = value;
        helperexitqual.value_namespace = name_space;
        helperexitqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helperSt")
    {
        helperst.yfilter = yfilter;
    }
    if(value_path == "helperAge")
    {
        helperage.yfilter = yfilter;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helperSt" || name == "helperAge" || name == "helperExitQual")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::AuthItems()
    :
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "auth-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::~AuthItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| keyid.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "keyId" || name == "key" || name == "name" || name == "descr")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::AuthnewItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    keysecuremode{YType::boolean, "keySecureMode"},
    md5key{YType::str, "md5key"},
    md5keysecuremode{YType::boolean, "md5keySecureMode"},
    keychain{YType::str, "keychain"}
{

    yang_name = "authnew-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::~AuthnewItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| keyid.is_set
	|| key.is_set
	|| keysecuremode.is_set
	|| md5key.is_set
	|| md5keysecuremode.is_set
	|| keychain.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keysecuremode.yfilter)
	|| ydk::is_set(md5key.yfilter)
	|| ydk::is_set(md5keysecuremode.yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authnew-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keysecuremode.is_set || is_set(keysecuremode.yfilter)) leaf_name_data.push_back(keysecuremode.get_name_leafdata());
    if (md5key.is_set || is_set(md5key.yfilter)) leaf_name_data.push_back(md5key.get_name_leafdata());
    if (md5keysecuremode.is_set || is_set(md5keysecuremode.yfilter)) leaf_name_data.push_back(md5keysecuremode.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode = value;
        keysecuremode.value_namespace = name_space;
        keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5key")
    {
        md5key = value;
        md5key.value_namespace = name_space;
        md5key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode = value;
        md5keysecuremode.value_namespace = name_space;
        md5keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode.yfilter = yfilter;
    }
    if(value_path == "md5key")
    {
        md5key.yfilter = yfilter;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "keyId" || name == "key" || name == "keySecureMode" || name == "md5key" || name == "md5keySecureMode" || name == "keychain")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::~DbItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::~DbList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_items != nullptr)
    {
        children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList>();
        c->parent = this;
        lsarec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsarec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    name{YType::str, "name"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
{

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| name.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "advRtr" || name == "name" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"}
        ,
    ucnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ucnh_items != nullptr)
    {
        children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        children["mcnh-items"] = mcnh_items;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist")
        return true;
    return false;
}


}
}

