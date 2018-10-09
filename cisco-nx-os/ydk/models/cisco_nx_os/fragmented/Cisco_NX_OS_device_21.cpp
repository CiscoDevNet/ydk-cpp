
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_21.hpp"
#include "Cisco_NX_OS_device_22.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::VsanPortMembershipChangeItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::has_operation() const
{
    return is_set(yfilter)
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
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::VsanStatusChangeItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
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
    if(name == "trapstatus" || name == "isToggleAction")
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::has_operation() const
{
    return is_set(yfilter)
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
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::VlancreateItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::has_operation() const
{
    return is_set(yfilter)
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
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::VlandeleteItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::has_operation() const
{
    return is_set(yfilter)
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
    if(name == "trapstatus" || name == "isToggleAction")
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::has_operation() const
{
    return is_set(yfilter)
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
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::TrunksecuremacviolationItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::has_operation() const
{
    return is_set(yfilter)
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
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::MplsItems()
    :
    ldp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems>())
{
    ldp_items->parent = this;

    yang_name = "mpls-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::~MplsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::has_data() const
{
    if (is_presence_container) return true;
    return (ldp_items !=  nullptr && ldp_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::has_operation() const
{
    return is_set(yfilter)
	|| (ldp_items !=  nullptr && ldp_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-items")
    {
        if(ldp_items == nullptr)
        {
            ldp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems>();
        }
        return ldp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldp_items != nullptr)
    {
        children["ldp-items"] = ldp_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
        ,
    ldpsessiondown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems>())
    , ldpsessionup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems>())
{
    ldpsessiondown_items->parent = this;
    ldpsessionup_items->parent = this;

    yang_name = "ldp-items"; yang_parent_name = "mpls-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::~LdpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set
	|| (ldpsessiondown_items !=  nullptr && ldpsessiondown_items->has_data())
	|| (ldpsessionup_items !=  nullptr && ldpsessionup_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter)
	|| (ldpsessiondown_items !=  nullptr && ldpsessiondown_items->has_operation())
	|| (ldpsessionup_items !=  nullptr && ldpsessionup_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mpls-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldpsessiondown-items")
    {
        if(ldpsessiondown_items == nullptr)
        {
            ldpsessiondown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems>();
        }
        return ldpsessiondown_items;
    }

    if(child_yang_name == "ldpsessionup-items")
    {
        if(ldpsessionup_items == nullptr)
        {
            ldpsessionup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems>();
        }
        return ldpsessionup_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldpsessiondown_items != nullptr)
    {
        children["ldpsessiondown-items"] = ldpsessiondown_items;
    }

    if(ldpsessionup_items != nullptr)
    {
        children["ldpsessionup-items"] = ldpsessionup_items;
    }

    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldpsessiondown-items" || name == "ldpsessionup-items" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::LdpsessiondownItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ldpsessiondown-items"; yang_parent_name = "ldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::~LdpsessiondownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mpls-items/ldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldpsessiondown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::LdpsessionupItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ldpsessionup-items"; yang_parent_name = "ldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::~LdpsessionupItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mpls-items/ldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldpsessionup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
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
    operst{YType::enumeration, "operSt"}
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
	|| operst.is_set;
}

bool System::SyslogacctItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timertick.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
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
}

bool System::SyslogacctItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timerTick" || name == "name" || name == "adminSt" || name == "operSt")
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
    transport{YType::enumeration, "transport"},
    trustpointclientidentity{YType::str, "trustpointClientIdentity"},
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
	|| transport.is_set
	|| trustpointclientidentity.is_set
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
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(trustpointclientidentity.yfilter)
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
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (trustpointclientidentity.is_set || is_set(trustpointclientidentity.yfilter)) leaf_name_data.push_back(trustpointclientidentity.get_name_leafdata());
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
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustpointClientIdentity")
    {
        trustpointclientidentity = value;
        trustpointclientidentity.value_namespace = name_space;
        trustpointclientidentity.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "trustpointClientIdentity")
    {
        trustpointclientidentity.yfilter = yfilter;
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
    if(name == "destst-items" || name == "host" || name == "severity" || name == "port" || name == "transport" || name == "trustpointClientIdentity" || name == "forwardingFacility" || name == "adminState" || name == "vrfId" || name == "ip" || name == "operState" || name == "name" || name == "descr" || name == "epgDn" || name == "vrfName")
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

System::MtsItems::MtsItems()
    :
    topsaps_items(std::make_shared<System::MtsItems::TopsapsItems>())
    , qfullsaps_items(std::make_shared<System::MtsItems::QfullsapsItems>())
{
    topsaps_items->parent = this;
    qfullsaps_items->parent = this;

    yang_name = "mts-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::~MtsItems()
{
}

bool System::MtsItems::has_data() const
{
    if (is_presence_container) return true;
    return (topsaps_items !=  nullptr && topsaps_items->has_data())
	|| (qfullsaps_items !=  nullptr && qfullsaps_items->has_data());
}

bool System::MtsItems::has_operation() const
{
    return is_set(yfilter)
	|| (topsaps_items !=  nullptr && topsaps_items->has_operation())
	|| (qfullsaps_items !=  nullptr && qfullsaps_items->has_operation());
}

std::string System::MtsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mts-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MtsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topsaps-items")
    {
        if(topsaps_items == nullptr)
        {
            topsaps_items = std::make_shared<System::MtsItems::TopsapsItems>();
        }
        return topsaps_items;
    }

    if(child_yang_name == "qfullsaps-items")
    {
        if(qfullsaps_items == nullptr)
        {
            qfullsaps_items = std::make_shared<System::MtsItems::QfullsapsItems>();
        }
        return qfullsaps_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MtsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topsaps_items != nullptr)
    {
        children["topsaps-items"] = topsaps_items;
    }

    if(qfullsaps_items != nullptr)
    {
        children["qfullsaps-items"] = qfullsaps_items;
    }

    return children;
}

void System::MtsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topsaps-items" || name == "qfullsaps-items")
        return true;
    return false;
}

System::MtsItems::TopsapsItems::TopsapsItems()
    :
    memused{YType::uint32, "memUsed"}
        ,
    tsap_items(std::make_shared<System::MtsItems::TopsapsItems::TsapItems>())
{
    tsap_items->parent = this;

    yang_name = "topsaps-items"; yang_parent_name = "mts-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::TopsapsItems::~TopsapsItems()
{
}

bool System::MtsItems::TopsapsItems::has_data() const
{
    if (is_presence_container) return true;
    return memused.is_set
	|| (tsap_items !=  nullptr && tsap_items->has_data());
}

bool System::MtsItems::TopsapsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memused.yfilter)
	|| (tsap_items !=  nullptr && tsap_items->has_operation());
}

std::string System::MtsItems::TopsapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::TopsapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topsaps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::TopsapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memused.is_set || is_set(memused.yfilter)) leaf_name_data.push_back(memused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MtsItems::TopsapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsap-items")
    {
        if(tsap_items == nullptr)
        {
            tsap_items = std::make_shared<System::MtsItems::TopsapsItems::TsapItems>();
        }
        return tsap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MtsItems::TopsapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tsap_items != nullptr)
    {
        children["tsap-items"] = tsap_items;
    }

    return children;
}

void System::MtsItems::TopsapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memUsed")
    {
        memused = value;
        memused.value_namespace = name_space;
        memused.value_namespace_prefix = name_space_prefix;
    }
}

void System::MtsItems::TopsapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memUsed")
    {
        memused.yfilter = yfilter;
    }
}

bool System::MtsItems::TopsapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsap-items" || name == "memUsed")
        return true;
    return false;
}

System::MtsItems::TopsapsItems::TsapItems::TsapItems()
    :
    tsap_list(this, {"index_"})
{

    yang_name = "tsap-items"; yang_parent_name = "topsaps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::TopsapsItems::TsapItems::~TsapItems()
{
}

bool System::MtsItems::TopsapsItems::TsapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tsap_list.len(); index++)
    {
        if(tsap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MtsItems::TopsapsItems::TsapItems::has_operation() const
{
    for (std::size_t index=0; index<tsap_list.len(); index++)
    {
        if(tsap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MtsItems::TopsapsItems::TsapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/topsaps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::TopsapsItems::TsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::TopsapsItems::TsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MtsItems::TopsapsItems::TsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TSap-list")
    {
        auto c = std::make_shared<System::MtsItems::TopsapsItems::TsapItems::TSapList>();
        c->parent = this;
        tsap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MtsItems::TopsapsItems::TsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tsap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MtsItems::TopsapsItems::TsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::TopsapsItems::TsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::TopsapsItems::TsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TSap-list")
        return true;
    return false;
}

System::MtsItems::TopsapsItems::TsapItems::TSapList::TSapList()
    :
    index_{YType::uint32, "index"},
    sapid{YType::uint32, "sapId"},
    desc{YType::str, "desc"},
    process{YType::str, "process"},
    timestamp{YType::str, "timestamp"},
    msgcount{YType::uint32, "msgCount"},
    bytescount{YType::uint32, "bytesCount"},
    memusedintotalmem{YType::uint32, "memUsedInTotalMem"},
    memusedinsapshare{YType::uint32, "memUsedInSapShare"},
    nodeid{YType::uint32, "nodeId"}
{

    yang_name = "TSap-list"; yang_parent_name = "tsap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::TopsapsItems::TsapItems::TSapList::~TSapList()
{
}

bool System::MtsItems::TopsapsItems::TsapItems::TSapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| sapid.is_set
	|| desc.is_set
	|| process.is_set
	|| timestamp.is_set
	|| msgcount.is_set
	|| bytescount.is_set
	|| memusedintotalmem.is_set
	|| memusedinsapshare.is_set
	|| nodeid.is_set;
}

bool System::MtsItems::TopsapsItems::TsapItems::TSapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(sapid.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(msgcount.yfilter)
	|| ydk::is_set(bytescount.yfilter)
	|| ydk::is_set(memusedintotalmem.yfilter)
	|| ydk::is_set(memusedinsapshare.yfilter)
	|| ydk::is_set(nodeid.yfilter);
}

std::string System::MtsItems::TopsapsItems::TsapItems::TSapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/topsaps-items/tsap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::TopsapsItems::TsapItems::TSapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TSap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::TopsapsItems::TsapItems::TSapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (sapid.is_set || is_set(sapid.yfilter)) leaf_name_data.push_back(sapid.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (msgcount.is_set || is_set(msgcount.yfilter)) leaf_name_data.push_back(msgcount.get_name_leafdata());
    if (bytescount.is_set || is_set(bytescount.yfilter)) leaf_name_data.push_back(bytescount.get_name_leafdata());
    if (memusedintotalmem.is_set || is_set(memusedintotalmem.yfilter)) leaf_name_data.push_back(memusedintotalmem.get_name_leafdata());
    if (memusedinsapshare.is_set || is_set(memusedinsapshare.yfilter)) leaf_name_data.push_back(memusedinsapshare.get_name_leafdata());
    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MtsItems::TopsapsItems::TsapItems::TSapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MtsItems::TopsapsItems::TsapItems::TSapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MtsItems::TopsapsItems::TsapItems::TSapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sapId")
    {
        sapid = value;
        sapid.value_namespace = name_space;
        sapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgCount")
    {
        msgcount = value;
        msgcount.value_namespace = name_space;
        msgcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytesCount")
    {
        bytescount = value;
        bytescount.value_namespace = name_space;
        bytescount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem = value;
        memusedintotalmem.value_namespace = name_space;
        memusedintotalmem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare = value;
        memusedinsapshare.value_namespace = name_space;
        memusedinsapshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeId")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
}

void System::MtsItems::TopsapsItems::TsapItems::TSapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "sapId")
    {
        sapid.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "msgCount")
    {
        msgcount.yfilter = yfilter;
    }
    if(value_path == "bytesCount")
    {
        bytescount.yfilter = yfilter;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem.yfilter = yfilter;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare.yfilter = yfilter;
    }
    if(value_path == "nodeId")
    {
        nodeid.yfilter = yfilter;
    }
}

bool System::MtsItems::TopsapsItems::TsapItems::TSapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "sapId" || name == "desc" || name == "process" || name == "timestamp" || name == "msgCount" || name == "bytesCount" || name == "memUsedInTotalMem" || name == "memUsedInSapShare" || name == "nodeId")
        return true;
    return false;
}

System::MtsItems::QfullsapsItems::QfullsapsItems()
    :
    qsap_items(std::make_shared<System::MtsItems::QfullsapsItems::QsapItems>())
{
    qsap_items->parent = this;

    yang_name = "qfullsaps-items"; yang_parent_name = "mts-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::QfullsapsItems::~QfullsapsItems()
{
}

bool System::MtsItems::QfullsapsItems::has_data() const
{
    if (is_presence_container) return true;
    return (qsap_items !=  nullptr && qsap_items->has_data());
}

bool System::MtsItems::QfullsapsItems::has_operation() const
{
    return is_set(yfilter)
	|| (qsap_items !=  nullptr && qsap_items->has_operation());
}

std::string System::MtsItems::QfullsapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::QfullsapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qfullsaps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::QfullsapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MtsItems::QfullsapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsap-items")
    {
        if(qsap_items == nullptr)
        {
            qsap_items = std::make_shared<System::MtsItems::QfullsapsItems::QsapItems>();
        }
        return qsap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MtsItems::QfullsapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qsap_items != nullptr)
    {
        children["qsap-items"] = qsap_items;
    }

    return children;
}

void System::MtsItems::QfullsapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::QfullsapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::QfullsapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsap-items")
        return true;
    return false;
}

System::MtsItems::QfullsapsItems::QsapItems::QsapItems()
    :
    qsap_list(this, {"sapid"})
{

    yang_name = "qsap-items"; yang_parent_name = "qfullsaps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::QfullsapsItems::QsapItems::~QsapItems()
{
}

bool System::MtsItems::QfullsapsItems::QsapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qsap_list.len(); index++)
    {
        if(qsap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MtsItems::QfullsapsItems::QsapItems::has_operation() const
{
    for (std::size_t index=0; index<qsap_list.len(); index++)
    {
        if(qsap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MtsItems::QfullsapsItems::QsapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/qfullsaps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::QfullsapsItems::QsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::QfullsapsItems::QsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MtsItems::QfullsapsItems::QsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QSap-list")
    {
        auto c = std::make_shared<System::MtsItems::QfullsapsItems::QsapItems::QSapList>();
        c->parent = this;
        qsap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MtsItems::QfullsapsItems::QsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : qsap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MtsItems::QfullsapsItems::QsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::QfullsapsItems::QsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::QfullsapsItems::QsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QSap-list")
        return true;
    return false;
}

System::MtsItems::QfullsapsItems::QsapItems::QSapList::QSapList()
    :
    sapid{YType::uint32, "sapId"},
    qstate{YType::str, "qstate"},
    desc{YType::str, "desc"},
    process{YType::str, "process"},
    timestamp{YType::str, "timestamp"},
    msgcount{YType::uint32, "msgCount"},
    bytescount{YType::uint32, "bytesCount"},
    memusedintotalmem{YType::uint32, "memUsedInTotalMem"},
    memusedinsapshare{YType::uint32, "memUsedInSapShare"},
    index_{YType::uint32, "index"},
    nodeid{YType::uint32, "nodeId"}
{

    yang_name = "QSap-list"; yang_parent_name = "qsap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::QfullsapsItems::QsapItems::QSapList::~QSapList()
{
}

bool System::MtsItems::QfullsapsItems::QsapItems::QSapList::has_data() const
{
    if (is_presence_container) return true;
    return sapid.is_set
	|| qstate.is_set
	|| desc.is_set
	|| process.is_set
	|| timestamp.is_set
	|| msgcount.is_set
	|| bytescount.is_set
	|| memusedintotalmem.is_set
	|| memusedinsapshare.is_set
	|| index_.is_set
	|| nodeid.is_set;
}

bool System::MtsItems::QfullsapsItems::QsapItems::QSapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sapid.yfilter)
	|| ydk::is_set(qstate.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(msgcount.yfilter)
	|| ydk::is_set(bytescount.yfilter)
	|| ydk::is_set(memusedintotalmem.yfilter)
	|| ydk::is_set(memusedinsapshare.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(nodeid.yfilter);
}

std::string System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/qfullsaps-items/qsap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QSap-list";
    ADD_KEY_TOKEN(sapid, "sapId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapid.is_set || is_set(sapid.yfilter)) leaf_name_data.push_back(sapid.get_name_leafdata());
    if (qstate.is_set || is_set(qstate.yfilter)) leaf_name_data.push_back(qstate.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (msgcount.is_set || is_set(msgcount.yfilter)) leaf_name_data.push_back(msgcount.get_name_leafdata());
    if (bytescount.is_set || is_set(bytescount.yfilter)) leaf_name_data.push_back(bytescount.get_name_leafdata());
    if (memusedintotalmem.is_set || is_set(memusedintotalmem.yfilter)) leaf_name_data.push_back(memusedintotalmem.get_name_leafdata());
    if (memusedinsapshare.is_set || is_set(memusedinsapshare.yfilter)) leaf_name_data.push_back(memusedinsapshare.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MtsItems::QfullsapsItems::QsapItems::QSapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapId")
    {
        sapid = value;
        sapid.value_namespace = name_space;
        sapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qstate")
    {
        qstate = value;
        qstate.value_namespace = name_space;
        qstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgCount")
    {
        msgcount = value;
        msgcount.value_namespace = name_space;
        msgcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytesCount")
    {
        bytescount = value;
        bytescount.value_namespace = name_space;
        bytescount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem = value;
        memusedintotalmem.value_namespace = name_space;
        memusedintotalmem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare = value;
        memusedinsapshare.value_namespace = name_space;
        memusedinsapshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeId")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
}

void System::MtsItems::QfullsapsItems::QsapItems::QSapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapId")
    {
        sapid.yfilter = yfilter;
    }
    if(value_path == "qstate")
    {
        qstate.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "msgCount")
    {
        msgcount.yfilter = yfilter;
    }
    if(value_path == "bytesCount")
    {
        bytescount.yfilter = yfilter;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem.yfilter = yfilter;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "nodeId")
    {
        nodeid.yfilter = yfilter;
    }
}

bool System::MtsItems::QfullsapsItems::QsapItems::QSapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapId" || name == "qstate" || name == "desc" || name == "process" || name == "timestamp" || name == "msgCount" || name == "bytesCount" || name == "memUsedInTotalMem" || name == "memUsedInSapShare" || name == "index" || name == "nodeId")
        return true;
    return false;
}

System::NatItems::NatItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
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
}

bool System::NatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::NatItems::InstItems::InstItems()
    :
    tcptimeout{YType::uint32, "tcpTimeout"},
    udptimeout{YType::uint32, "udpTimeout"},
    icmptimeout{YType::uint32, "icmpTimeout"},
    timeout{YType::uint32, "timeout"},
    finrsttimeout{YType::int32, "finrstTimeout"},
    syntimeout{YType::int32, "synTimeout"},
    configerror{YType::str, "configError"},
    maxtranslation{YType::uint32, "maxtranslation"},
    allhost{YType::uint32, "allhost"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
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
	|| icmptimeout.is_set
	|| timeout.is_set
	|| finrsttimeout.is_set
	|| syntimeout.is_set
	|| configerror.is_set
	|| maxtranslation.is_set
	|| allhost.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (pool_items !=  nullptr && pool_items->has_data());
}

bool System::NatItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcptimeout.yfilter)
	|| ydk::is_set(udptimeout.yfilter)
	|| ydk::is_set(icmptimeout.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(finrsttimeout.yfilter)
	|| ydk::is_set(syntimeout.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| ydk::is_set(maxtranslation.yfilter)
	|| ydk::is_set(allhost.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
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
    if (icmptimeout.is_set || is_set(icmptimeout.yfilter)) leaf_name_data.push_back(icmptimeout.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (finrsttimeout.is_set || is_set(finrsttimeout.yfilter)) leaf_name_data.push_back(finrsttimeout.get_name_leafdata());
    if (syntimeout.is_set || is_set(syntimeout.yfilter)) leaf_name_data.push_back(syntimeout.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());
    if (maxtranslation.is_set || is_set(maxtranslation.yfilter)) leaf_name_data.push_back(maxtranslation.get_name_leafdata());
    if (allhost.is_set || is_set(allhost.yfilter)) leaf_name_data.push_back(allhost.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

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
    if(value_path == "icmpTimeout")
    {
        icmptimeout = value;
        icmptimeout.value_namespace = name_space;
        icmptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finrstTimeout")
    {
        finrsttimeout = value;
        finrsttimeout.value_namespace = name_space;
        finrsttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synTimeout")
    {
        syntimeout = value;
        syntimeout.value_namespace = name_space;
        syntimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "icmpTimeout")
    {
        icmptimeout.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "finrstTimeout")
    {
        finrsttimeout.yfilter = yfilter;
    }
    if(value_path == "synTimeout")
    {
        syntimeout.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
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
}

bool System::NatItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-items" || name == "tcpTimeout" || name == "udpTimeout" || name == "icmpTimeout" || name == "timeout" || name == "finrstTimeout" || name == "synTimeout" || name == "configError" || name == "maxtranslation" || name == "allhost" || name == "name" || name == "adminSt" || name == "ctrl")
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
	|| pooladdrdeleted.is_set;
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(startip.yfilter)
	|| ydk::is_set(endip.yfilter)
	|| ydk::is_set(configerr.yfilter)
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
    if(value_path == "poolAddrDeleted")
    {
        pooladdrdeleted.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startip" || name == "endip" || name == "configErr" || name == "poolAddrDeleted")
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
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::OspfItems::InstItems>())
{
    inst_items->parent = this;

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
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::OspfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
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
}

bool System::OspfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
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
    opersrgbstart{YType::uint32, "operSrgbStart"},
    opersrgbend{YType::uint32, "operSrgbEnd"},
    operstsgmntrtgmpls{YType::enumeration, "operStSgmntRtgMpls"},
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
	|| opersrgbstart.is_set
	|| opersrgbend.is_set
	|| operstsgmntrtgmpls.is_set
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
	|| ydk::is_set(opersrgbstart.yfilter)
	|| ydk::is_set(opersrgbend.yfilter)
	|| ydk::is_set(operstsgmntrtgmpls.yfilter)
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
    if (opersrgbstart.is_set || is_set(opersrgbstart.yfilter)) leaf_name_data.push_back(opersrgbstart.get_name_leafdata());
    if (opersrgbend.is_set || is_set(opersrgbend.yfilter)) leaf_name_data.push_back(opersrgbend.get_name_leafdata());
    if (operstsgmntrtgmpls.is_set || is_set(operstsgmntrtgmpls.yfilter)) leaf_name_data.push_back(operstsgmntrtgmpls.get_name_leafdata());
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
    if(value_path == "operSrgbStart")
    {
        opersrgbstart = value;
        opersrgbstart.value_namespace = name_space;
        opersrgbstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSrgbEnd")
    {
        opersrgbend = value;
        opersrgbend.value_namespace = name_space;
        opersrgbend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls = value;
        operstsgmntrtgmpls.value_namespace = name_space;
        operstsgmntrtgmpls.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operSrgbStart")
    {
        opersrgbstart.yfilter = yfilter;
    }
    if(value_path == "operSrgbEnd")
    {
        opersrgbend.yfilter = yfilter;
    }
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls.yfilter = yfilter;
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
    if(name == "area-items" || name == "db-items" || name == "spfcomp-items" || name == "lsactrl-items" || name == "domstats-items" || name == "gr-items" || name == "if-items" || name == "maxlsap-items" || name == "maxmetriclsap-items" || name == "defrtleak-items" || name == "interleak-items" || name == "leakctrl-items" || name == "ribleak-items" || name == "extrtsum-items" || name == "trstats-items" || name == "name" || name == "rtrId" || name == "ctrl" || name == "adminSt" || name == "dist" || name == "maxEcmp" || name == "bwRef" || name == "bwRefUnit" || name == "defMetric" || name == "rfc1583Compat" || name == "deletedViaCLI" || name == "adjChangeLogLevel" || name == "operSt" || name == "operRtrId" || name == "operSrgbStart" || name == "operSrgbEnd" || name == "operStSgmntRtgMpls" || name == "discardRoute" || name == "downbitIgnore" || name == "capVrfLite")
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
    sgmntrtgmpls{YType::enumeration, "sgmntRtgMpls"},
    nssatransrole{YType::enumeration, "nssaTransRole"},
    brcnt{YType::uint32, "brCnt"},
    asbrcnt{YType::uint32, "asbrCnt"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    nssatransst{YType::enumeration, "nssaTransSt"},
    nssatransstabintvl{YType::uint32, "nssaTransStabIntvl"},
    operstsgmntrtgmpls{YType::enumeration, "operStSgmntRtgMpls"},
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
	|| sgmntrtgmpls.is_set
	|| nssatransrole.is_set
	|| brcnt.is_set
	|| asbrcnt.is_set
	|| lsacksumsum.is_set
	|| nssatransst.is_set
	|| nssatransstabintvl.is_set
	|| operstsgmntrtgmpls.is_set
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
	|| ydk::is_set(sgmntrtgmpls.yfilter)
	|| ydk::is_set(nssatransrole.yfilter)
	|| ydk::is_set(brcnt.yfilter)
	|| ydk::is_set(asbrcnt.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(nssatransst.yfilter)
	|| ydk::is_set(nssatransstabintvl.yfilter)
	|| ydk::is_set(operstsgmntrtgmpls.yfilter)
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
    if (sgmntrtgmpls.is_set || is_set(sgmntrtgmpls.yfilter)) leaf_name_data.push_back(sgmntrtgmpls.get_name_leafdata());
    if (nssatransrole.is_set || is_set(nssatransrole.yfilter)) leaf_name_data.push_back(nssatransrole.get_name_leafdata());
    if (brcnt.is_set || is_set(brcnt.yfilter)) leaf_name_data.push_back(brcnt.get_name_leafdata());
    if (asbrcnt.is_set || is_set(asbrcnt.yfilter)) leaf_name_data.push_back(asbrcnt.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (nssatransst.is_set || is_set(nssatransst.yfilter)) leaf_name_data.push_back(nssatransst.get_name_leafdata());
    if (nssatransstabintvl.is_set || is_set(nssatransstabintvl.yfilter)) leaf_name_data.push_back(nssatransstabintvl.get_name_leafdata());
    if (operstsgmntrtgmpls.is_set || is_set(operstsgmntrtgmpls.yfilter)) leaf_name_data.push_back(operstsgmntrtgmpls.get_name_leafdata());
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
    if(value_path == "sgmntRtgMpls")
    {
        sgmntrtgmpls = value;
        sgmntrtgmpls.value_namespace = name_space;
        sgmntrtgmpls.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls = value;
        operstsgmntrtgmpls.value_namespace = name_space;
        operstsgmntrtgmpls.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sgmntRtgMpls")
    {
        sgmntrtgmpls.yfilter = yfilter;
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
    if(value_path == "operStSgmntRtgMpls")
    {
        operstsgmntrtgmpls.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areastats-items" || name == "db-items" || name == "vlink-items" || name == "slink-items" || name == "lsaleakp-items" || name == "lsaleakctrlp-items" || name == "defrtleak-items" || name == "iartsum-items" || name == "id" || name == "name" || name == "type" || name == "ctrl" || name == "cost" || name == "sgmntRtgMpls" || name == "nssaTransRole" || name == "brCnt" || name == "asbrCnt" || name == "lsaCksumSum" || name == "nssaTransSt" || name == "nssaTransStabIntvl" || name == "operStSgmntRtgMpls" || name == "authType")
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
    deadintvl{YType::uint32, "deadIntvl"},
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
    deadintvl{YType::uint32, "deadIntvl"},
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
    graceperiod{YType::uint32, "gracePeriod"}
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
	|| graceperiod.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(helper.yfilter)
	|| ydk::is_set(graceperiod.yfilter);
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
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "helper" || name == "gracePeriod")
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
    cost{YType::uint16, "cost"},
    xmitdelay{YType::uint16, "xmitDelay"},
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
    operdeadintvl{YType::uint32, "operDeadIntvl"},
    opersidindex{YType::int32, "operSidIndex"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint32, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"}
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
	|| cost.is_set
	|| xmitdelay.is_set
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
	|| opersidindex.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
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
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
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
	|| ydk::is_set(opersidindex.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
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
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
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
    if (opersidindex.is_set || is_set(opersidindex.yfilter)) leaf_name_data.push_back(opersidindex.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());

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
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operSidIndex")
    {
        opersidindex = value;
        opersidindex.value_namespace = name_space;
        opersidindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
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
    if(value_path == "operSidIndex")
    {
        opersidindex.yfilter = yfilter;
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
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "auth-items" || name == "authnew-items" || name == "db-items" || name == "ifstats-items" || name == "multiarea-items" || name == "trstats-items" || name == "rtospfIfDefToOspfIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "passiveCtrl" || name == "bfdCtrl" || name == "nwT" || name == "prio" || name == "cost" || name == "xmitDelay" || name == "area" || name == "advertiseSecondaries" || name == "operSt" || name == "failStQual" || name == "type" || name == "flags" || name == "addr" || name == "dr" || name == "bdr" || name == "drId" || name == "bdrId" || name == "lsaCksumSum" || name == "operCost" || name == "operDeadIntvl" || name == "operSidIndex" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl")
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

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        c->parent = this;
        ucnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        c->parent = this;
        mcnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    evcnt{YType::uint32, "evCnt"},
    lsacnt{YType::uint32, "lsaCnt"},
    peercnt{YType::uint32, "peerCnt"},
    floodtopeercnt{YType::uint32, "floodToPeerCnt"},
    adjcnt{YType::uint32, "adjCnt"},
    grhelperpeercnt{YType::uint32, "grHelperPeerCnt"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return evcnt.is_set
	|| lsacnt.is_set
	|| peercnt.is_set
	|| floodtopeercnt.is_set
	|| adjcnt.is_set
	|| grhelperpeercnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evcnt.yfilter)
	|| ydk::is_set(lsacnt.yfilter)
	|| ydk::is_set(peercnt.yfilter)
	|| ydk::is_set(floodtopeercnt.yfilter)
	|| ydk::is_set(adjcnt.yfilter)
	|| ydk::is_set(grhelperpeercnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evcnt.is_set || is_set(evcnt.yfilter)) leaf_name_data.push_back(evcnt.get_name_leafdata());
    if (lsacnt.is_set || is_set(lsacnt.yfilter)) leaf_name_data.push_back(lsacnt.get_name_leafdata());
    if (peercnt.is_set || is_set(peercnt.yfilter)) leaf_name_data.push_back(peercnt.get_name_leafdata());
    if (floodtopeercnt.is_set || is_set(floodtopeercnt.yfilter)) leaf_name_data.push_back(floodtopeercnt.get_name_leafdata());
    if (adjcnt.is_set || is_set(adjcnt.yfilter)) leaf_name_data.push_back(adjcnt.get_name_leafdata());
    if (grhelperpeercnt.is_set || is_set(grhelperpeercnt.yfilter)) leaf_name_data.push_back(grhelperpeercnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evCnt")
    {
        evcnt = value;
        evcnt.value_namespace = name_space;
        evcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt = value;
        lsacnt.value_namespace = name_space;
        lsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCnt")
    {
        peercnt = value;
        peercnt.value_namespace = name_space;
        peercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt = value;
        floodtopeercnt.value_namespace = name_space;
        floodtopeercnt.value_namespace_prefix = name_space_prefix;
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evCnt")
    {
        evcnt.yfilter = yfilter;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt.yfilter = yfilter;
    }
    if(value_path == "peerCnt")
    {
        peercnt.yfilter = yfilter;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt.yfilter = yfilter;
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evCnt" || name == "lsaCnt" || name == "peerCnt" || name == "floodToPeerCnt" || name == "adjCnt" || name == "grHelperPeerCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiareaItems()
    :
    multiarea_list(this, {"multiareaid"})
{

    yang_name = "multiarea-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::~MultiareaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multiarea_list.len(); index++)
    {
        if(multiarea_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_operation() const
{
    for (std::size_t index=0; index<multiarea_list.len(); index++)
    {
        if(multiarea_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiarea-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MultiArea-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList>();
        c->parent = this;
        multiarea_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : multiarea_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MultiArea-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::MultiAreaList()
    :
    multiareaid{YType::str, "multiareaid"}
{

    yang_name = "MultiArea-list"; yang_parent_name = "multiarea-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::~MultiAreaList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_data() const
{
    if (is_presence_container) return true;
    return multiareaid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiareaid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MultiArea-list";
    ADD_KEY_TOKEN(multiareaid, "multiareaid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiareaid.is_set || is_set(multiareaid.yfilter)) leaf_name_data.push_back(multiareaid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiareaid")
    {
        multiareaid = value;
        multiareaid.value_namespace = name_space;
        multiareaid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiareaid")
    {
        multiareaid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiareaid")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtospfIfDefToOspfIfItems()
    :
    rtospfifdeftoospfif_list(this, {"tdn"})
{

    yang_name = "rtospfIfDefToOspfIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::~RtospfIfDefToOspfIfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtospfifdeftoospfif_list.len(); index++)
    {
        if(rtospfifdeftoospfif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtospfifdeftoospfif_list.len(); index++)
    {
        if(rtospfifdeftoospfif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtospfIfDefToOspfIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtOspfIfDefToOspfIf-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList>();
        c->parent = this;
        rtospfifdeftoospfif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtospfifdeftoospfif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtOspfIfDefToOspfIf-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::RtOspfIfDefToOspfIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtOspfIfDefToOspfIf-list"; yang_parent_name = "rtospfIfDefToOspfIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::~RtOspfIfDefToOspfIfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtOspfIfDefToOspfIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::MaxlsapItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    maxlsa{YType::uint32, "maxLsa"},
    thresh{YType::uint16, "thresh"},
    sleepcnt{YType::uint32, "sleepCnt"},
    sleepintvl{YType::uint16, "sleepIntvl"},
    resetintvl{YType::uint32, "resetIntvl"},
    action{YType::enumeration, "action"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    nonselflsacnt{YType::uint32, "nonSelfLsaCnt"},
    currsleepcnt{YType::uint32, "currSleepCnt"}
{

    yang_name = "maxlsap-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::~MaxlsapItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| maxlsa.is_set
	|| thresh.is_set
	|| sleepcnt.is_set
	|| sleepintvl.is_set
	|| resetintvl.is_set
	|| action.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| nonselflsacnt.is_set
	|| currsleepcnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(maxlsa.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(sleepcnt.yfilter)
	|| ydk::is_set(sleepintvl.yfilter)
	|| ydk::is_set(resetintvl.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(nonselflsacnt.yfilter)
	|| ydk::is_set(currsleepcnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxlsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (maxlsa.is_set || is_set(maxlsa.yfilter)) leaf_name_data.push_back(maxlsa.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (sleepcnt.is_set || is_set(sleepcnt.yfilter)) leaf_name_data.push_back(sleepcnt.get_name_leafdata());
    if (sleepintvl.is_set || is_set(sleepintvl.yfilter)) leaf_name_data.push_back(sleepintvl.get_name_leafdata());
    if (resetintvl.is_set || is_set(resetintvl.yfilter)) leaf_name_data.push_back(resetintvl.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (nonselflsacnt.is_set || is_set(nonselflsacnt.yfilter)) leaf_name_data.push_back(nonselflsacnt.get_name_leafdata());
    if (currsleepcnt.is_set || is_set(currsleepcnt.yfilter)) leaf_name_data.push_back(currsleepcnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxLsa")
    {
        maxlsa = value;
        maxlsa.value_namespace = name_space;
        maxlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleepCnt")
    {
        sleepcnt = value;
        sleepcnt.value_namespace = name_space;
        sleepcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleepIntvl")
    {
        sleepintvl = value;
        sleepintvl.value_namespace = name_space;
        sleepintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetIntvl")
    {
        resetintvl = value;
        resetintvl.value_namespace = name_space;
        resetintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonSelfLsaCnt")
    {
        nonselflsacnt = value;
        nonselflsacnt.value_namespace = name_space;
        nonselflsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currSleepCnt")
    {
        currsleepcnt = value;
        currsleepcnt.value_namespace = name_space;
        currsleepcnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "maxLsa")
    {
        maxlsa.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "sleepCnt")
    {
        sleepcnt.yfilter = yfilter;
    }
    if(value_path == "sleepIntvl")
    {
        sleepintvl.yfilter = yfilter;
    }
    if(value_path == "resetIntvl")
    {
        resetintvl.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "nonSelfLsaCnt")
    {
        nonselflsacnt.yfilter = yfilter;
    }
    if(value_path == "currSleepCnt")
    {
        currsleepcnt.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "maxLsa" || name == "thresh" || name == "sleepCnt" || name == "sleepIntvl" || name == "resetIntvl" || name == "action" || name == "operSt" || name == "operStQual" || name == "nonSelfLsaCnt" || name == "currSleepCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::MaxmetriclsapItems()
    :
    ctrl{YType::str, "ctrl"},
    maxmetricextlsa{YType::uint32, "maxMetricExtLsa"},
    maxmetricsummlsa{YType::uint32, "maxMetricSummLsa"},
    startupintvl{YType::uint32, "startupIntvl"},
    awaitconvbgpasn{YType::str, "awaitConvBgpAsn"}
{

    yang_name = "maxmetriclsap-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::~MaxmetriclsapItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_data() const
{
    if (is_presence_container) return true;
    return ctrl.is_set
	|| maxmetricextlsa.is_set
	|| maxmetricsummlsa.is_set
	|| startupintvl.is_set
	|| awaitconvbgpasn.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(maxmetricextlsa.yfilter)
	|| ydk::is_set(maxmetricsummlsa.yfilter)
	|| ydk::is_set(startupintvl.yfilter)
	|| ydk::is_set(awaitconvbgpasn.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxmetriclsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (maxmetricextlsa.is_set || is_set(maxmetricextlsa.yfilter)) leaf_name_data.push_back(maxmetricextlsa.get_name_leafdata());
    if (maxmetricsummlsa.is_set || is_set(maxmetricsummlsa.yfilter)) leaf_name_data.push_back(maxmetricsummlsa.get_name_leafdata());
    if (startupintvl.is_set || is_set(startupintvl.yfilter)) leaf_name_data.push_back(startupintvl.get_name_leafdata());
    if (awaitconvbgpasn.is_set || is_set(awaitconvbgpasn.yfilter)) leaf_name_data.push_back(awaitconvbgpasn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa = value;
        maxmetricextlsa.value_namespace = name_space;
        maxmetricextlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa = value;
        maxmetricsummlsa.value_namespace = name_space;
        maxmetricsummlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl = value;
        startupintvl.value_namespace = name_space;
        startupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn = value;
        awaitconvbgpasn.value_namespace = name_space;
        awaitconvbgpasn.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa.yfilter = yfilter;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa.yfilter = yfilter;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl.yfilter = yfilter;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl" || name == "maxMetricExtLsa" || name == "maxMetricSummLsa" || name == "startupIntvl" || name == "awaitConvBgpAsn")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst", "asn"})
{

    yang_name = "interleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::~InterleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList>();
        c->parent = this;
        interleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interleakp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    asn{YType::str, "asn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| asn.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inst")
    {
        inst = value;
        inst.value_namespace = name_space;
        inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
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
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "asn" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::LeakctrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    max{YType::uint16, "max"},
    thresh{YType::uint8, "thresh"},
    retries{YType::uint16, "retries"},
    duration{YType::uint16, "duration"}
{

    yang_name = "leakctrl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::~LeakctrlItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| max.is_set
	|| thresh.is_set
	|| retries.is_set
	|| duration.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leakctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "max" || name == "thresh" || name == "retries" || name == "duration")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::RibleakItems()
    :
    rtmap{YType::str, "rtMap"},
    always{YType::boolean, "always"}
{

    yang_name = "ribleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::~RibleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtrtsumItems()
    :
    extrtsum_list(this, {"addr"})
{

    yang_name = "extrtsum-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::~ExtrtsumItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_operation() const
{
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extrtsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtRtSum-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList>();
        c->parent = this;
        extrtsum_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extrtsum_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtRtSum-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::ExtRtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    comprtcnt{YType::uint32, "compRtCnt"},
    opercost{YType::uint32, "operCost"},
    tag{YType::uint32, "tag"}
{

    yang_name = "ExtRtSum-list"; yang_parent_name = "extrtsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::~ExtRtSumList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| comprtcnt.is_set
	|| opercost.is_set
	|| tag.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(comprtcnt.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtRtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (comprtcnt.is_set || is_set(comprtcnt.yfilter)) leaf_name_data.push_back(comprtcnt.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "ctrl" || name == "compRtCnt" || name == "operCost" || name == "tag")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::~TrstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EvtlogsItems()
    :
    eventlogs_list(this, {"eventtype"})
{

    yang_name = "evtlogs-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::EvtlogsItems::~EvtlogsItems()
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_operation() const
{
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::EvtlogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evtlogs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::EvtlogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::EvtlogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventLogs-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList>();
        c->parent = this;
        eventlogs_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::EvtlogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventlogs_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventLogs-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"},
    logsizekbytes{YType::uint16, "logSizeKBytes"}
{

    yang_name = "EventLogs-list"; yang_parent_name = "evtlogs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::~EventLogsList()
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set
	|| logsizekbytes.is_set;
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter)
	|| ydk::is_set(logsizekbytes.yfilter);
}

std::string System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());
    if (logsizekbytes.is_set || is_set(logsizekbytes.yfilter)) leaf_name_data.push_back(logsizekbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eventType")
    {
        eventtype = value;
        eventtype.value_namespace = name_space;
        eventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSize")
    {
        logsize = value;
        logsize.value_namespace = name_space;
        logsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes = value;
        logsizekbytes.value_namespace = name_space;
        logsizekbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize" || name == "logSizeKBytes")
        return true;
    return false;
}

System::EvpnItems::EvpnItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    bdevi_items(std::make_shared<System::EvpnItems::BdeviItems>())
{
    bdevi_items->parent = this;

    yang_name = "evpn-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::~EvpnItems()
{
}

bool System::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (bdevi_items !=  nullptr && bdevi_items->has_data());
}

bool System::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (bdevi_items !=  nullptr && bdevi_items->has_operation());
}

std::string System::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdevi-items")
    {
        if(bdevi_items == nullptr)
        {
            bdevi_items = std::make_shared<System::EvpnItems::BdeviItems>();
        }
        return bdevi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bdevi_items != nullptr)
    {
        children["bdevi-items"] = bdevi_items;
    }

    return children;
}

void System::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdevi-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BdeviItems()
    :
    bdevi_list(this, {"encap"})
{

    yang_name = "bdevi-items"; yang_parent_name = "evpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::BdeviItems::~BdeviItems()
{
}

bool System::EvpnItems::BdeviItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::has_operation() const
{
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/evpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::BdeviItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdevi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BDEvi-list")
    {
        auto c = std::make_shared<System::EvpnItems::BdeviItems::BDEviList>();
        c->parent = this;
        bdevi_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdevi_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EvpnItems::BdeviItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BDEvi-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::BDEviList()
    :
    encap{YType::str, "encap"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"},
    operrd{YType::str, "operRd"},
    name{YType::str, "name"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "BDEvi-list"; yang_parent_name = "bdevi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::BdeviItems::BDEviList::~BDEviList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| cfgsrcctrlr.is_set
	|| operrd.is_set
	|| name.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::EvpnItems::BdeviItems::BDEviList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter)
	|| ydk::is_set(operrd.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::EvpnItems::BdeviItems::BDEviList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/evpn-items/bdevi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::BdeviItems::BDEviList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BDEvi-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());
    if (operrd.is_set || is_set(operrd.yfilter)) leaf_name_data.push_back(operrd.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRd")
    {
        operrd = value;
        operrd.value_namespace = name_space;
        operrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
    if(value_path == "operRd")
    {
        operrd.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "encap" || name == "cfgSrcCtrlr" || name == "operRd" || name == "name" || name == "rd")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "BDEvi-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::~RttpItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"},
    operrttauto{YType::str, "operRttAuto"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>())
    , rtctrlmap_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems>())
    , rtctrldefmap_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems>())
{
    ent_items->parent = this;
    rtctrlmap_items->parent = this;
    rtctrldefmap_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::~RttPList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| cfgsrcctrlr.is_set
	|| operrttauto.is_set
	|| name.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_data())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_data());
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter)
	|| ydk::is_set(operrttauto.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_operation())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_operation());
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());
    if (operrttauto.is_set || is_set(operrttauto.yfilter)) leaf_name_data.push_back(operrttauto.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtctrlmap-items")
    {
        if(rtctrlmap_items == nullptr)
        {
            rtctrlmap_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems>();
        }
        return rtctrlmap_items;
    }

    if(child_yang_name == "rtctrldefmap-items")
    {
        if(rtctrldefmap_items == nullptr)
        {
            rtctrldefmap_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems>();
        }
        return rtctrldefmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    if(rtctrlmap_items != nullptr)
    {
        children["rtctrlmap-items"] = rtctrlmap_items;
    }

    if(rtctrldefmap_items != nullptr)
    {
        children["rtctrldefmap-items"] = rtctrldefmap_items;
    }

    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto = value;
        operrttauto.value_namespace = name_space;
        operrttauto.value_namespace_prefix = name_space_prefix;
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

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto.yfilter = yfilter;
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

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtctrlmap-items" || name == "rtctrldefmap-items" || name == "type" || name == "cfgSrcCtrlr" || name == "operRttAuto" || name == "name" || name == "descr")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set
	|| cfgsrcctrlr.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "cfgSrcCtrlr")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::RtctrlmapItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrlmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::~RtctrlmapItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrlmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::RtctrldefmapItems()
    :
    pfxlimit{YType::uint32, "pfxLimit"},
    allowvpn{YType::boolean, "allowVpn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrldefmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::~RtctrldefmapItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxlimit.is_set
	|| allowvpn.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlimit.yfilter)
	|| ydk::is_set(allowvpn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrldefmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlimit.is_set || is_set(pfxlimit.yfilter)) leaf_name_data.push_back(pfxlimit.get_name_leafdata());
    if (allowvpn.is_set || is_set(allowvpn.yfilter)) leaf_name_data.push_back(allowvpn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit = value;
        pfxlimit.value_namespace = name_space;
        pfxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowVpn")
    {
        allowvpn = value;
        allowvpn.value_namespace = name_space;
        allowvpn.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit.yfilter = yfilter;
    }
    if(value_path == "allowVpn")
    {
        allowvpn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxLimit" || name == "allowVpn" || name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::UserextItems::UserextItems()
    :
    pwdstrengthcheck{YType::enumeration, "pwdStrengthCheck"},
    pwdsecuremode{YType::enumeration, "pwdSecureMode"},
    pwdminlength{YType::uint16, "pwdMinLength"},
    pwdmaxlength{YType::uint16, "pwdMaxLength"},
    svcpwdrecovery{YType::enumeration, "svcPwdRecovery"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    radiusext_items(std::make_shared<System::UserextItems::RadiusextItems>())
    , ldapext_items(std::make_shared<System::UserextItems::LdapextItems>())
    , tacacsext_items(std::make_shared<System::UserextItems::TacacsextItems>())
    , authrealm_items(std::make_shared<System::UserextItems::AuthrealmItems>())
    , logindomain_items(std::make_shared<System::UserextItems::LogindomainItems>())
    , preloginbanner_items(std::make_shared<System::UserextItems::PreloginbannerItems>())
    , remoteuser_items(std::make_shared<System::UserextItems::RemoteuserItems>())
    , user_items(std::make_shared<System::UserextItems::UserItems>())
    , role_items(std::make_shared<System::UserextItems::RoleItems>())
    , factoryrole_items(std::make_shared<System::UserextItems::FactoryroleItems>())
    , domain_items(std::make_shared<System::UserextItems::DomainItems>())
    , pwdprofile_items(std::make_shared<System::UserextItems::PwdprofileItems>())
    , pkiext_items(std::make_shared<System::UserextItems::PkiextItems>())
    , rtfabricresuserep_items(std::make_shared<System::UserextItems::RtfabricResUserEpItems>())
    , rtaaauserep_items(std::make_shared<System::UserextItems::RtaaaUserEpItems>())
{
    radiusext_items->parent = this;
    ldapext_items->parent = this;
    tacacsext_items->parent = this;
    authrealm_items->parent = this;
    logindomain_items->parent = this;
    preloginbanner_items->parent = this;
    remoteuser_items->parent = this;
    user_items->parent = this;
    role_items->parent = this;
    factoryrole_items->parent = this;
    domain_items->parent = this;
    pwdprofile_items->parent = this;
    pkiext_items->parent = this;
    rtfabricresuserep_items->parent = this;
    rtaaauserep_items->parent = this;

    yang_name = "userext-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::~UserextItems()
{
}

bool System::UserextItems::has_data() const
{
    if (is_presence_container) return true;
    return pwdstrengthcheck.is_set
	|| pwdsecuremode.is_set
	|| pwdminlength.is_set
	|| pwdmaxlength.is_set
	|| svcpwdrecovery.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (radiusext_items !=  nullptr && radiusext_items->has_data())
	|| (ldapext_items !=  nullptr && ldapext_items->has_data())
	|| (tacacsext_items !=  nullptr && tacacsext_items->has_data())
	|| (authrealm_items !=  nullptr && authrealm_items->has_data())
	|| (logindomain_items !=  nullptr && logindomain_items->has_data())
	|| (preloginbanner_items !=  nullptr && preloginbanner_items->has_data())
	|| (remoteuser_items !=  nullptr && remoteuser_items->has_data())
	|| (user_items !=  nullptr && user_items->has_data())
	|| (role_items !=  nullptr && role_items->has_data())
	|| (factoryrole_items !=  nullptr && factoryrole_items->has_data())
	|| (domain_items !=  nullptr && domain_items->has_data())
	|| (pwdprofile_items !=  nullptr && pwdprofile_items->has_data())
	|| (pkiext_items !=  nullptr && pkiext_items->has_data())
	|| (rtfabricresuserep_items !=  nullptr && rtfabricresuserep_items->has_data())
	|| (rtaaauserep_items !=  nullptr && rtaaauserep_items->has_data());
}

bool System::UserextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwdstrengthcheck.yfilter)
	|| ydk::is_set(pwdsecuremode.yfilter)
	|| ydk::is_set(pwdminlength.yfilter)
	|| ydk::is_set(pwdmaxlength.yfilter)
	|| ydk::is_set(svcpwdrecovery.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (radiusext_items !=  nullptr && radiusext_items->has_operation())
	|| (ldapext_items !=  nullptr && ldapext_items->has_operation())
	|| (tacacsext_items !=  nullptr && tacacsext_items->has_operation())
	|| (authrealm_items !=  nullptr && authrealm_items->has_operation())
	|| (logindomain_items !=  nullptr && logindomain_items->has_operation())
	|| (preloginbanner_items !=  nullptr && preloginbanner_items->has_operation())
	|| (remoteuser_items !=  nullptr && remoteuser_items->has_operation())
	|| (user_items !=  nullptr && user_items->has_operation())
	|| (role_items !=  nullptr && role_items->has_operation())
	|| (factoryrole_items !=  nullptr && factoryrole_items->has_operation())
	|| (domain_items !=  nullptr && domain_items->has_operation())
	|| (pwdprofile_items !=  nullptr && pwdprofile_items->has_operation())
	|| (pkiext_items !=  nullptr && pkiext_items->has_operation())
	|| (rtfabricresuserep_items !=  nullptr && rtfabricresuserep_items->has_operation())
	|| (rtaaauserep_items !=  nullptr && rtaaauserep_items->has_operation());
}

std::string System::UserextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwdstrengthcheck.is_set || is_set(pwdstrengthcheck.yfilter)) leaf_name_data.push_back(pwdstrengthcheck.get_name_leafdata());
    if (pwdsecuremode.is_set || is_set(pwdsecuremode.yfilter)) leaf_name_data.push_back(pwdsecuremode.get_name_leafdata());
    if (pwdminlength.is_set || is_set(pwdminlength.yfilter)) leaf_name_data.push_back(pwdminlength.get_name_leafdata());
    if (pwdmaxlength.is_set || is_set(pwdmaxlength.yfilter)) leaf_name_data.push_back(pwdmaxlength.get_name_leafdata());
    if (svcpwdrecovery.is_set || is_set(svcpwdrecovery.yfilter)) leaf_name_data.push_back(svcpwdrecovery.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radiusext-items")
    {
        if(radiusext_items == nullptr)
        {
            radiusext_items = std::make_shared<System::UserextItems::RadiusextItems>();
        }
        return radiusext_items;
    }

    if(child_yang_name == "ldapext-items")
    {
        if(ldapext_items == nullptr)
        {
            ldapext_items = std::make_shared<System::UserextItems::LdapextItems>();
        }
        return ldapext_items;
    }

    if(child_yang_name == "tacacsext-items")
    {
        if(tacacsext_items == nullptr)
        {
            tacacsext_items = std::make_shared<System::UserextItems::TacacsextItems>();
        }
        return tacacsext_items;
    }

    if(child_yang_name == "authrealm-items")
    {
        if(authrealm_items == nullptr)
        {
            authrealm_items = std::make_shared<System::UserextItems::AuthrealmItems>();
        }
        return authrealm_items;
    }

    if(child_yang_name == "logindomain-items")
    {
        if(logindomain_items == nullptr)
        {
            logindomain_items = std::make_shared<System::UserextItems::LogindomainItems>();
        }
        return logindomain_items;
    }

    if(child_yang_name == "preloginbanner-items")
    {
        if(preloginbanner_items == nullptr)
        {
            preloginbanner_items = std::make_shared<System::UserextItems::PreloginbannerItems>();
        }
        return preloginbanner_items;
    }

    if(child_yang_name == "remoteuser-items")
    {
        if(remoteuser_items == nullptr)
        {
            remoteuser_items = std::make_shared<System::UserextItems::RemoteuserItems>();
        }
        return remoteuser_items;
    }

    if(child_yang_name == "user-items")
    {
        if(user_items == nullptr)
        {
            user_items = std::make_shared<System::UserextItems::UserItems>();
        }
        return user_items;
    }

    if(child_yang_name == "role-items")
    {
        if(role_items == nullptr)
        {
            role_items = std::make_shared<System::UserextItems::RoleItems>();
        }
        return role_items;
    }

    if(child_yang_name == "factoryrole-items")
    {
        if(factoryrole_items == nullptr)
        {
            factoryrole_items = std::make_shared<System::UserextItems::FactoryroleItems>();
        }
        return factoryrole_items;
    }

    if(child_yang_name == "domain-items")
    {
        if(domain_items == nullptr)
        {
            domain_items = std::make_shared<System::UserextItems::DomainItems>();
        }
        return domain_items;
    }

    if(child_yang_name == "pwdprofile-items")
    {
        if(pwdprofile_items == nullptr)
        {
            pwdprofile_items = std::make_shared<System::UserextItems::PwdprofileItems>();
        }
        return pwdprofile_items;
    }

    if(child_yang_name == "pkiext-items")
    {
        if(pkiext_items == nullptr)
        {
            pkiext_items = std::make_shared<System::UserextItems::PkiextItems>();
        }
        return pkiext_items;
    }

    if(child_yang_name == "rtfabricResUserEp-items")
    {
        if(rtfabricresuserep_items == nullptr)
        {
            rtfabricresuserep_items = std::make_shared<System::UserextItems::RtfabricResUserEpItems>();
        }
        return rtfabricresuserep_items;
    }

    if(child_yang_name == "rtaaaUserEp-items")
    {
        if(rtaaauserep_items == nullptr)
        {
            rtaaauserep_items = std::make_shared<System::UserextItems::RtaaaUserEpItems>();
        }
        return rtaaauserep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(radiusext_items != nullptr)
    {
        children["radiusext-items"] = radiusext_items;
    }

    if(ldapext_items != nullptr)
    {
        children["ldapext-items"] = ldapext_items;
    }

    if(tacacsext_items != nullptr)
    {
        children["tacacsext-items"] = tacacsext_items;
    }

    if(authrealm_items != nullptr)
    {
        children["authrealm-items"] = authrealm_items;
    }

    if(logindomain_items != nullptr)
    {
        children["logindomain-items"] = logindomain_items;
    }

    if(preloginbanner_items != nullptr)
    {
        children["preloginbanner-items"] = preloginbanner_items;
    }

    if(remoteuser_items != nullptr)
    {
        children["remoteuser-items"] = remoteuser_items;
    }

    if(user_items != nullptr)
    {
        children["user-items"] = user_items;
    }

    if(role_items != nullptr)
    {
        children["role-items"] = role_items;
    }

    if(factoryrole_items != nullptr)
    {
        children["factoryrole-items"] = factoryrole_items;
    }

    if(domain_items != nullptr)
    {
        children["domain-items"] = domain_items;
    }

    if(pwdprofile_items != nullptr)
    {
        children["pwdprofile-items"] = pwdprofile_items;
    }

    if(pkiext_items != nullptr)
    {
        children["pkiext-items"] = pkiext_items;
    }

    if(rtfabricresuserep_items != nullptr)
    {
        children["rtfabricResUserEp-items"] = rtfabricresuserep_items;
    }

    if(rtaaauserep_items != nullptr)
    {
        children["rtaaaUserEp-items"] = rtaaauserep_items;
    }

    return children;
}

void System::UserextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwdStrengthCheck")
    {
        pwdstrengthcheck = value;
        pwdstrengthcheck.value_namespace = name_space;
        pwdstrengthcheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdSecureMode")
    {
        pwdsecuremode = value;
        pwdsecuremode.value_namespace = name_space;
        pwdsecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdMinLength")
    {
        pwdminlength = value;
        pwdminlength.value_namespace = name_space;
        pwdminlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdMaxLength")
    {
        pwdmaxlength = value;
        pwdmaxlength.value_namespace = name_space;
        pwdmaxlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svcPwdRecovery")
    {
        svcpwdrecovery = value;
        svcpwdrecovery.value_namespace = name_space;
        svcpwdrecovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwdStrengthCheck")
    {
        pwdstrengthcheck.yfilter = yfilter;
    }
    if(value_path == "pwdSecureMode")
    {
        pwdsecuremode.yfilter = yfilter;
    }
    if(value_path == "pwdMinLength")
    {
        pwdminlength.yfilter = yfilter;
    }
    if(value_path == "pwdMaxLength")
    {
        pwdmaxlength.yfilter = yfilter;
    }
    if(value_path == "svcPwdRecovery")
    {
        svcpwdrecovery.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radiusext-items" || name == "ldapext-items" || name == "tacacsext-items" || name == "authrealm-items" || name == "logindomain-items" || name == "preloginbanner-items" || name == "remoteuser-items" || name == "user-items" || name == "role-items" || name == "factoryrole-items" || name == "domain-items" || name == "pwdprofile-items" || name == "pkiext-items" || name == "rtfabricResUserEp-items" || name == "rtaaaUserEp-items" || name == "pwdStrengthCheck" || name == "pwdSecureMode" || name == "pwdMinLength" || name == "pwdMaxLength" || name == "svcPwdRecovery" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusextItems()
    :
    deadtime{YType::uint32, "deadtime"},
    key{YType::str, "key"},
    keyenc{YType::enumeration, "keyEnc"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    srcif{YType::str, "srcIf"}
        ,
    radiusprovider_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems>())
    , radiusprovidergroup_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems>())
    , radiusservermonitor_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusservermonitorItems>())
    , rtfabricresradiusep_items(std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems>())
{
    radiusprovider_items->parent = this;
    radiusprovidergroup_items->parent = this;
    radiusservermonitor_items->parent = this;
    rtfabricresradiusep_items->parent = this;

    yang_name = "radiusext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::~RadiusextItems()
{
}

bool System::UserextItems::RadiusextItems::has_data() const
{
    if (is_presence_container) return true;
    return deadtime.is_set
	|| key.is_set
	|| keyenc.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| timeout.is_set
	|| retries.is_set
	|| srcif.is_set
	|| (radiusprovider_items !=  nullptr && radiusprovider_items->has_data())
	|| (radiusprovidergroup_items !=  nullptr && radiusprovidergroup_items->has_data())
	|| (radiusservermonitor_items !=  nullptr && radiusservermonitor_items->has_data())
	|| (rtfabricresradiusep_items !=  nullptr && rtfabricresradiusep_items->has_data());
}

bool System::UserextItems::RadiusextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| (radiusprovider_items !=  nullptr && radiusprovider_items->has_operation())
	|| (radiusprovidergroup_items !=  nullptr && radiusprovidergroup_items->has_operation())
	|| (radiusservermonitor_items !=  nullptr && radiusservermonitor_items->has_operation())
	|| (rtfabricresradiusep_items !=  nullptr && rtfabricresradiusep_items->has_operation());
}

std::string System::UserextItems::RadiusextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radiusprovider-items")
    {
        if(radiusprovider_items == nullptr)
        {
            radiusprovider_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems>();
        }
        return radiusprovider_items;
    }

    if(child_yang_name == "radiusprovidergroup-items")
    {
        if(radiusprovidergroup_items == nullptr)
        {
            radiusprovidergroup_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems>();
        }
        return radiusprovidergroup_items;
    }

    if(child_yang_name == "radiusservermonitor-items")
    {
        if(radiusservermonitor_items == nullptr)
        {
            radiusservermonitor_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusservermonitorItems>();
        }
        return radiusservermonitor_items;
    }

    if(child_yang_name == "rtfabricResRadiusEp-items")
    {
        if(rtfabricresradiusep_items == nullptr)
        {
            rtfabricresradiusep_items = std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems>();
        }
        return rtfabricresradiusep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(radiusprovider_items != nullptr)
    {
        children["radiusprovider-items"] = radiusprovider_items;
    }

    if(radiusprovidergroup_items != nullptr)
    {
        children["radiusprovidergroup-items"] = radiusprovidergroup_items;
    }

    if(radiusservermonitor_items != nullptr)
    {
        children["radiusservermonitor-items"] = radiusservermonitor_items;
    }

    if(rtfabricresradiusep_items != nullptr)
    {
        children["rtfabricResRadiusEp-items"] = rtfabricresradiusep_items;
    }

    return children;
}

void System::UserextItems::RadiusextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radiusprovider-items" || name == "radiusprovidergroup-items" || name == "radiusservermonitor-items" || name == "rtfabricResRadiusEp-items" || name == "deadtime" || name == "key" || name == "keyEnc" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "timeout" || name == "retries" || name == "srcIf")
        return true;
    return false;
}


}
}

