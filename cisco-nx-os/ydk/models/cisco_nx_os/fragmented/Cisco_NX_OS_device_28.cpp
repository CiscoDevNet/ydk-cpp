
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_28.hpp"
#include "Cisco_NX_OS_device_30.hpp"
#include "Cisco_NX_OS_device_29.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::SisfItems::RaguardItems::InstRaGuardList::InstRaGuardList()
    :
    policyname{YType::str, "policyName"},
    devicerole{YType::enumeration, "deviceRole"},
    trustedportenabled{YType::boolean, "trustedPortEnabled"},
    routerpreferencemaximum{YType::enumeration, "routerPreferenceMaximum"},
    hoplimitmax{YType::uint16, "hopLimitMax"},
    hoplimitmin{YType::uint16, "hopLimitMin"},
    managedconfig{YType::enumeration, "managedConfig"},
    otherconfig{YType::enumeration, "otherConfig"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "InstRaGuard-list"; yang_parent_name = "raguard-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::RaguardItems::InstRaGuardList::~InstRaGuardList()
{
}

bool System::SisfItems::RaguardItems::InstRaGuardList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| devicerole.is_set
	|| trustedportenabled.is_set
	|| routerpreferencemaximum.is_set
	|| hoplimitmax.is_set
	|| hoplimitmin.is_set
	|| managedconfig.is_set
	|| otherconfig.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::RaguardItems::InstRaGuardList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(devicerole.yfilter)
	|| ydk::is_set(trustedportenabled.yfilter)
	|| ydk::is_set(routerpreferencemaximum.yfilter)
	|| ydk::is_set(hoplimitmax.yfilter)
	|| ydk::is_set(hoplimitmin.yfilter)
	|| ydk::is_set(managedconfig.yfilter)
	|| ydk::is_set(otherconfig.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::RaguardItems::InstRaGuardList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/raguard-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::RaguardItems::InstRaGuardList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstRaGuard-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::RaguardItems::InstRaGuardList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (devicerole.is_set || is_set(devicerole.yfilter)) leaf_name_data.push_back(devicerole.get_name_leafdata());
    if (trustedportenabled.is_set || is_set(trustedportenabled.yfilter)) leaf_name_data.push_back(trustedportenabled.get_name_leafdata());
    if (routerpreferencemaximum.is_set || is_set(routerpreferencemaximum.yfilter)) leaf_name_data.push_back(routerpreferencemaximum.get_name_leafdata());
    if (hoplimitmax.is_set || is_set(hoplimitmax.yfilter)) leaf_name_data.push_back(hoplimitmax.get_name_leafdata());
    if (hoplimitmin.is_set || is_set(hoplimitmin.yfilter)) leaf_name_data.push_back(hoplimitmin.get_name_leafdata());
    if (managedconfig.is_set || is_set(managedconfig.yfilter)) leaf_name_data.push_back(managedconfig.get_name_leafdata());
    if (otherconfig.is_set || is_set(otherconfig.yfilter)) leaf_name_data.push_back(otherconfig.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::RaguardItems::InstRaGuardList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::RaguardItems::InstRaGuardList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::RaguardItems::InstRaGuardList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceRole")
    {
        devicerole = value;
        devicerole.value_namespace = name_space;
        devicerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled = value;
        trustedportenabled.value_namespace = name_space;
        trustedportenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerPreferenceMaximum")
    {
        routerpreferencemaximum = value;
        routerpreferencemaximum.value_namespace = name_space;
        routerpreferencemaximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimitMax")
    {
        hoplimitmax = value;
        hoplimitmax.value_namespace = name_space;
        hoplimitmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimitMin")
    {
        hoplimitmin = value;
        hoplimitmin.value_namespace = name_space;
        hoplimitmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managedConfig")
    {
        managedconfig = value;
        managedconfig.value_namespace = name_space;
        managedconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherConfig")
    {
        otherconfig = value;
        otherconfig.value_namespace = name_space;
        otherconfig.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::RaguardItems::InstRaGuardList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "deviceRole")
    {
        devicerole.yfilter = yfilter;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled.yfilter = yfilter;
    }
    if(value_path == "routerPreferenceMaximum")
    {
        routerpreferencemaximum.yfilter = yfilter;
    }
    if(value_path == "hopLimitMax")
    {
        hoplimitmax.yfilter = yfilter;
    }
    if(value_path == "hopLimitMin")
    {
        hoplimitmin.yfilter = yfilter;
    }
    if(value_path == "managedConfig")
    {
        managedconfig.yfilter = yfilter;
    }
    if(value_path == "otherConfig")
    {
        otherconfig.yfilter = yfilter;
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

bool System::SisfItems::RaguardItems::InstRaGuardList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "deviceRole" || name == "trustedPortEnabled" || name == "routerPreferenceMaximum" || name == "hopLimitMax" || name == "hopLimitMin" || name == "managedConfig" || name == "otherConfig" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsifItems()
    :
    fhsif_list(this, {"id"})
{

    yang_name = "fhsif-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsifItems::~FhsifItems()
{
}

bool System::SisfItems::FhsifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fhsif_list.len(); index++)
    {
        if(fhsif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsifItems::has_operation() const
{
    for (std::size_t index=0; index<fhsif_list.len(); index++)
    {
        if(fhsif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhsif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FhsIf-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::FhsifItems::FhsIfList>();
        ent_->parent = this;
        fhsif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fhsif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::FhsifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FhsIf-list")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::FhsIfList()
    :
    id{YType::str, "id"},
    snoopingpolicyname{YType::str, "snoopingPolicyName"},
    dhcpguardpolicyname{YType::str, "dhcpGuardPolicyName"},
    raguardpolicyname{YType::str, "raGuardPolicyName"},
    deleted{YType::boolean, "deleted"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "FhsIf-list"; yang_parent_name = "fhsif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsifItems::FhsIfList::~FhsIfList()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| snoopingpolicyname.is_set
	|| dhcpguardpolicyname.is_set
	|| raguardpolicyname.is_set
	|| deleted.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::SisfItems::FhsifItems::FhsIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(snoopingpolicyname.yfilter)
	|| ydk::is_set(dhcpguardpolicyname.yfilter)
	|| ydk::is_set(raguardpolicyname.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::SisfItems::FhsifItems::FhsIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/fhsif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsifItems::FhsIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FhsIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (snoopingpolicyname.is_set || is_set(snoopingpolicyname.yfilter)) leaf_name_data.push_back(snoopingpolicyname.get_name_leafdata());
    if (dhcpguardpolicyname.is_set || is_set(dhcpguardpolicyname.yfilter)) leaf_name_data.push_back(dhcpguardpolicyname.get_name_leafdata());
    if (raguardpolicyname.is_set || is_set(raguardpolicyname.yfilter)) leaf_name_data.push_back(raguardpolicyname.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::SisfItems::FhsifItems::FhsIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname = value;
        snoopingpolicyname.value_namespace = name_space;
        snoopingpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname = value;
        dhcpguardpolicyname.value_namespace = name_space;
        dhcpguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname = value;
        raguardpolicyname.value_namespace = name_space;
        raguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
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
}

void System::SisfItems::FhsifItems::FhsIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname.yfilter = yfilter;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
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
}

bool System::SisfItems::FhsifItems::FhsIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "snoopingPolicyName" || name == "dhcpGuardPolicyName" || name == "raGuardPolicyName" || name == "deleted" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "FhsIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "FhsIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SisfItems::FhsvlanItems::FhsvlanItems()
    :
    fhsvlan_list(this, {"vlanid"})
{

    yang_name = "fhsvlan-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsvlanItems::~FhsvlanItems()
{
}

bool System::SisfItems::FhsvlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fhsvlan_list.len(); index++)
    {
        if(fhsvlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsvlanItems::has_operation() const
{
    for (std::size_t index=0; index<fhsvlan_list.len(); index++)
    {
        if(fhsvlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhsvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FhsVlan-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::FhsvlanItems::FhsVlanList>();
        ent_->parent = this;
        fhsvlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fhsvlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::FhsvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FhsVlan-list")
        return true;
    return false;
}

System::SisfItems::FhsvlanItems::FhsVlanList::FhsVlanList()
    :
    vlanid{YType::uint16, "vlanID"},
    snoopingpolicyname{YType::str, "snoopingPolicyName"},
    dhcpguardpolicyname{YType::str, "dhcpGuardPolicyName"},
    raguardpolicyname{YType::str, "raGuardPolicyName"},
    deleted{YType::boolean, "deleted"}
{

    yang_name = "FhsVlan-list"; yang_parent_name = "fhsvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsvlanItems::FhsVlanList::~FhsVlanList()
{
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| snoopingpolicyname.is_set
	|| dhcpguardpolicyname.is_set
	|| raguardpolicyname.is_set
	|| deleted.is_set;
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(snoopingpolicyname.yfilter)
	|| ydk::is_set(dhcpguardpolicyname.yfilter)
	|| ydk::is_set(raguardpolicyname.yfilter)
	|| ydk::is_set(deleted.yfilter);
}

std::string System::SisfItems::FhsvlanItems::FhsVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/fhsvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsvlanItems::FhsVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FhsVlan-list";
    ADD_KEY_TOKEN(vlanid, "vlanID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsvlanItems::FhsVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (snoopingpolicyname.is_set || is_set(snoopingpolicyname.yfilter)) leaf_name_data.push_back(snoopingpolicyname.get_name_leafdata());
    if (dhcpguardpolicyname.is_set || is_set(dhcpguardpolicyname.yfilter)) leaf_name_data.push_back(dhcpguardpolicyname.get_name_leafdata());
    if (raguardpolicyname.is_set || is_set(raguardpolicyname.yfilter)) leaf_name_data.push_back(raguardpolicyname.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsvlanItems::FhsVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsvlanItems::FhsVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::FhsvlanItems::FhsVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanID")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname = value;
        snoopingpolicyname.value_namespace = name_space;
        snoopingpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname = value;
        dhcpguardpolicyname.value_namespace = name_space;
        dhcpguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname = value;
        raguardpolicyname.value_namespace = name_space;
        raguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
    }
}

void System::SisfItems::FhsvlanItems::FhsVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanID")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname.yfilter = yfilter;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
    }
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanID" || name == "snoopingPolicyName" || name == "dhcpGuardPolicyName" || name == "raGuardPolicyName" || name == "deleted")
        return true;
    return false;
}

System::TmItems::TmItems()
    :
    adminst{YType::enumeration, "adminSt"}
        ,
    certificate_items(std::make_shared<System::TmItems::CertificateItems>())
    , destprof_items(std::make_shared<System::TmItems::DestprofItems>())
    , sensor_items(std::make_shared<System::TmItems::SensorItems>())
    , dest_items(std::make_shared<System::TmItems::DestItems>())
    , subs_items(std::make_shared<System::TmItems::SubsItems>())
{
    certificate_items->parent = this;
    destprof_items->parent = this;
    sensor_items->parent = this;
    dest_items->parent = this;
    subs_items->parent = this;

    yang_name = "tm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::~TmItems()
{
}

bool System::TmItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| (certificate_items !=  nullptr && certificate_items->has_data())
	|| (destprof_items !=  nullptr && destprof_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (dest_items !=  nullptr && dest_items->has_data())
	|| (subs_items !=  nullptr && subs_items->has_data());
}

bool System::TmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (certificate_items !=  nullptr && certificate_items->has_operation())
	|| (destprof_items !=  nullptr && destprof_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (dest_items !=  nullptr && dest_items->has_operation())
	|| (subs_items !=  nullptr && subs_items->has_operation());
}

std::string System::TmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-items")
    {
        if(certificate_items == nullptr)
        {
            certificate_items = std::make_shared<System::TmItems::CertificateItems>();
        }
        return certificate_items;
    }

    if(child_yang_name == "destprof-items")
    {
        if(destprof_items == nullptr)
        {
            destprof_items = std::make_shared<System::TmItems::DestprofItems>();
        }
        return destprof_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::TmItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "dest-items")
    {
        if(dest_items == nullptr)
        {
            dest_items = std::make_shared<System::TmItems::DestItems>();
        }
        return dest_items;
    }

    if(child_yang_name == "subs-items")
    {
        if(subs_items == nullptr)
        {
            subs_items = std::make_shared<System::TmItems::SubsItems>();
        }
        return subs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(certificate_items != nullptr)
    {
        _children["certificate-items"] = certificate_items;
    }

    if(destprof_items != nullptr)
    {
        _children["destprof-items"] = destprof_items;
    }

    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(dest_items != nullptr)
    {
        _children["dest-items"] = dest_items;
    }

    if(subs_items != nullptr)
    {
        _children["subs-items"] = subs_items;
    }

    return _children;
}

void System::TmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::TmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-items" || name == "destprof-items" || name == "sensor-items" || name == "dest-items" || name == "subs-items" || name == "adminSt")
        return true;
    return false;
}

System::TmItems::CertificateItems::CertificateItems()
    :
    filename{YType::str, "filename"},
    hostname{YType::str, "hostname"}
{

    yang_name = "certificate-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::CertificateItems::~CertificateItems()
{
}

bool System::TmItems::CertificateItems::has_data() const
{
    if (is_presence_container) return true;
    return filename.is_set
	|| hostname.is_set;
}

bool System::TmItems::CertificateItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string System::TmItems::CertificateItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::CertificateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::CertificateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::CertificateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::CertificateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::CertificateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::CertificateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool System::TmItems::CertificateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename" || name == "hostname")
        return true;
    return false;
}

System::TmItems::DestprofItems::DestprofItems()
    :
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::TmItems::DestprofItems::VrfItems>())
    , compression_items(std::make_shared<System::TmItems::DestprofItems::CompressionItems>())
    , sourceinterface_items(std::make_shared<System::TmItems::DestprofItems::SourceinterfaceItems>())
    , retry_items(std::make_shared<System::TmItems::DestprofItems::RetryItems>())
{
    vrf_items->parent = this;
    compression_items->parent = this;
    sourceinterface_items->parent = this;
    retry_items->parent = this;

    yang_name = "destprof-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::~DestprofItems()
{
}

bool System::TmItems::DestprofItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (compression_items !=  nullptr && compression_items->has_data())
	|| (sourceinterface_items !=  nullptr && sourceinterface_items->has_data())
	|| (retry_items !=  nullptr && retry_items->has_data());
}

bool System::TmItems::DestprofItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (compression_items !=  nullptr && compression_items->has_operation())
	|| (sourceinterface_items !=  nullptr && sourceinterface_items->has_operation())
	|| (retry_items !=  nullptr && retry_items->has_operation());
}

std::string System::TmItems::DestprofItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destprof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::TmItems::DestprofItems::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "compression-items")
    {
        if(compression_items == nullptr)
        {
            compression_items = std::make_shared<System::TmItems::DestprofItems::CompressionItems>();
        }
        return compression_items;
    }

    if(child_yang_name == "sourceinterface-items")
    {
        if(sourceinterface_items == nullptr)
        {
            sourceinterface_items = std::make_shared<System::TmItems::DestprofItems::SourceinterfaceItems>();
        }
        return sourceinterface_items;
    }

    if(child_yang_name == "retry-items")
    {
        if(retry_items == nullptr)
        {
            retry_items = std::make_shared<System::TmItems::DestprofItems::RetryItems>();
        }
        return retry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(compression_items != nullptr)
    {
        _children["compression-items"] = compression_items;
    }

    if(sourceinterface_items != nullptr)
    {
        _children["sourceinterface-items"] = sourceinterface_items;
    }

    if(retry_items != nullptr)
    {
        _children["retry-items"] = retry_items;
    }

    return _children;
}

void System::TmItems::DestprofItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "compression-items" || name == "sourceinterface-items" || name == "retry-items" || name == "adminSt")
        return true;
    return false;
}

System::TmItems::DestprofItems::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::VrfItems::~VrfItems()
{
}

bool System::TmItems::DestprofItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::CompressionItems::CompressionItems()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "compression-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::CompressionItems::~CompressionItems()
{
}

bool System::TmItems::DestprofItems::CompressionItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::CompressionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::CompressionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::CompressionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compression-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::CompressionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::CompressionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::CompressionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::CompressionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::CompressionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::CompressionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::SourceinterfaceItems::SourceinterfaceItems()
    :
    name{YType::str, "name"}
{

    yang_name = "sourceinterface-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::SourceinterfaceItems::~SourceinterfaceItems()
{
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::SourceinterfaceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::SourceinterfaceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourceinterface-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::SourceinterfaceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::SourceinterfaceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::SourceinterfaceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::SourceinterfaceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::SourceinterfaceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::RetryItems::RetryItems()
    :
    size{YType::uint32, "size"}
{

    yang_name = "retry-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::RetryItems::~RetryItems()
{
}

bool System::TmItems::DestprofItems::RetryItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool System::TmItems::DestprofItems::RetryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::TmItems::DestprofItems::RetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::RetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::RetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::RetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::RetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::RetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::RetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::RetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorItems()
    :
    sensorgroup_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SensorItems::~SensorItems()
{
}

bool System::TmItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensorgroup_list.len(); index++)
    {
        if(sensorgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensorgroup_list.len(); index++)
    {
        if(sensorgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SensorGroup-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SensorItems::SensorGroupList>();
        ent_->parent = this;
        sensorgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensorgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SensorGroup-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::SensorGroupList()
    :
    id{YType::str, "id"},
    datasrc{YType::enumeration, "dataSrc"}
        ,
    path_items(std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems>())
{
    path_items->parent = this;

    yang_name = "SensorGroup-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SensorItems::SensorGroupList::~SensorGroupList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| datasrc.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::TmItems::SensorItems::SensorGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(datasrc.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::TmItems::SensorItems::SensorGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/sensor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SensorItems::SensorGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SensorGroup-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (datasrc.is_set || is_set(datasrc.yfilter)) leaf_name_data.push_back(datasrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataSrc")
    {
        datasrc = value;
        datasrc.value_namespace = name_space;
        datasrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "dataSrc")
    {
        datasrc.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "id" || name == "dataSrc")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::PathItems()
    :
    sensorpath_list(this, {"path"})
{

    yang_name = "path-items"; yang_parent_name = "SensorGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::~PathItems()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensorpath_list.len(); index++)
    {
        if(sensorpath_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<sensorpath_list.len(); index++)
    {
        if(sensorpath_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SensorPath-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList>();
        ent_->parent = this;
        sensorpath_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensorpath_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SensorPath-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::SensorPathList()
    :
    path{YType::str, "path"},
    querycondition{YType::str, "queryCondition"},
    filtercondition{YType::str, "filterCondition"},
    excludefilter{YType::str, "excludeFilter"},
    secondarypath{YType::str, "secondaryPath"},
    secondarygroup{YType::uint64, "secondaryGroup"},
    depth{YType::uint32, "depth"}
        ,
    include_items(std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems>())
{
    include_items->parent = this;

    yang_name = "SensorPath-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::~SensorPathList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| querycondition.is_set
	|| filtercondition.is_set
	|| excludefilter.is_set
	|| secondarypath.is_set
	|| secondarygroup.is_set
	|| depth.is_set
	|| (include_items !=  nullptr && include_items->has_data());
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(querycondition.yfilter)
	|| ydk::is_set(filtercondition.yfilter)
	|| ydk::is_set(excludefilter.yfilter)
	|| ydk::is_set(secondarypath.yfilter)
	|| ydk::is_set(secondarygroup.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| (include_items !=  nullptr && include_items->has_operation());
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SensorPath-list";
    ADD_KEY_TOKEN(path, "path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (querycondition.is_set || is_set(querycondition.yfilter)) leaf_name_data.push_back(querycondition.get_name_leafdata());
    if (filtercondition.is_set || is_set(filtercondition.yfilter)) leaf_name_data.push_back(filtercondition.get_name_leafdata());
    if (excludefilter.is_set || is_set(excludefilter.yfilter)) leaf_name_data.push_back(excludefilter.get_name_leafdata());
    if (secondarypath.is_set || is_set(secondarypath.yfilter)) leaf_name_data.push_back(secondarypath.get_name_leafdata());
    if (secondarygroup.is_set || is_set(secondarygroup.yfilter)) leaf_name_data.push_back(secondarygroup.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-items")
    {
        if(include_items == nullptr)
        {
            include_items = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems>();
        }
        return include_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(include_items != nullptr)
    {
        _children["include-items"] = include_items;
    }

    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryCondition")
    {
        querycondition = value;
        querycondition.value_namespace = name_space;
        querycondition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterCondition")
    {
        filtercondition = value;
        filtercondition.value_namespace = name_space;
        filtercondition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excludeFilter")
    {
        excludefilter = value;
        excludefilter.value_namespace = name_space;
        excludefilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryPath")
    {
        secondarypath = value;
        secondarypath.value_namespace = name_space;
        secondarypath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryGroup")
    {
        secondarygroup = value;
        secondarygroup.value_namespace = name_space;
        secondarygroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "queryCondition")
    {
        querycondition.yfilter = yfilter;
    }
    if(value_path == "filterCondition")
    {
        filtercondition.yfilter = yfilter;
    }
    if(value_path == "excludeFilter")
    {
        excludefilter.yfilter = yfilter;
    }
    if(value_path == "secondaryPath")
    {
        secondarypath.yfilter = yfilter;
    }
    if(value_path == "secondaryGroup")
    {
        secondarygroup.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-items" || name == "path" || name == "queryCondition" || name == "filterCondition" || name == "excludeFilter" || name == "secondaryPath" || name == "secondaryGroup" || name == "depth")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeItems()
    :
    includefilter_list(this, {"filter"})
{

    yang_name = "include-items"; yang_parent_name = "SensorPath-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::~IncludeItems()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<includefilter_list.len(); index++)
    {
        if(includefilter_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::has_operation() const
{
    for (std::size_t index=0; index<includefilter_list.len(); index++)
    {
        if(includefilter_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IncludeFilter-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList>();
        ent_->parent = this;
        includefilter_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : includefilter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IncludeFilter-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::IncludeFilterList()
    :
    filter{YType::str, "filter"}
{

    yang_name = "IncludeFilter-list"; yang_parent_name = "include-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::~IncludeFilterList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::has_data() const
{
    if (is_presence_container) return true;
    return filter.is_set;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IncludeFilter-list";
    ADD_KEY_TOKEN(filter, "filter");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

System::TmItems::DestItems::DestItems()
    :
    destgroup_list(this, {"id"})
{

    yang_name = "dest-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestItems::~DestItems()
{
}

bool System::TmItems::DestItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destgroup_list.len(); index++)
    {
        if(destgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::DestItems::has_operation() const
{
    for (std::size_t index=0; index<destgroup_list.len(); index++)
    {
        if(destgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::DestItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DestGroup-list")
    {
        auto ent_ = std::make_shared<System::TmItems::DestItems::DestGroupList>();
        ent_->parent = this;
        destgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::DestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::DestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::DestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DestGroup-list")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::DestGroupList()
    :
    id{YType::str, "id"}
        ,
    addr_items(std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems>())
    , chunking_items(std::make_shared<System::TmItems::DestItems::DestGroupList::ChunkingItems>())
{
    addr_items->parent = this;
    chunking_items->parent = this;

    yang_name = "DestGroup-list"; yang_parent_name = "dest-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestItems::DestGroupList::~DestGroupList()
{
}

bool System::TmItems::DestItems::DestGroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (chunking_items !=  nullptr && chunking_items->has_data());
}

bool System::TmItems::DestItems::DestGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (chunking_items !=  nullptr && chunking_items->has_operation());
}

std::string System::TmItems::DestItems::DestGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/dest-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestItems::DestGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DestGroup-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "chunking-items")
    {
        if(chunking_items == nullptr)
        {
            chunking_items = std::make_shared<System::TmItems::DestItems::DestGroupList::ChunkingItems>();
        }
        return chunking_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    if(chunking_items != nullptr)
    {
        _children["chunking-items"] = chunking_items;
    }

    return _children;
}

void System::TmItems::DestItems::DestGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "chunking-items" || name == "id")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::AddrItems::AddrItems()
    :
    dest_list(this, {"addr", "port"})
{

    yang_name = "addr-items"; yang_parent_name = "DestGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::AddrItems::~AddrItems()
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dest_list.len(); index++)
    {
        if(dest_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<dest_list.len(); index++)
    {
        if(dest_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dest-list")
    {
        auto ent_ = std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems::DestList>();
        ent_->parent = this;
        dest_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dest_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::DestItems::DestGroupList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::DestItems::DestGroupList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dest-list")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::AddrItems::DestList::DestList()
    :
    addr{YType::str, "addr"},
    port{YType::uint16, "port"},
    proto{YType::enumeration, "proto"},
    enc{YType::enumeration, "enc"}
{

    yang_name = "Dest-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::AddrItems::DestList::~DestList()
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| port.is_set
	|| proto.is_set
	|| enc.is_set;
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(enc.yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dest-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (enc.is_set || is_set(enc.yfilter)) leaf_name_data.push_back(enc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestItems::DestGroupList::AddrItems::DestList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enc")
    {
        enc = value;
        enc.value_namespace = name_space;
        enc.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::AddrItems::DestList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "enc")
    {
        enc.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "port" || name == "proto" || name == "enc")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::ChunkingItems::ChunkingItems()
    :
    chunksize{YType::uint32, "chunkSize"}
{

    yang_name = "chunking-items"; yang_parent_name = "DestGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::ChunkingItems::~ChunkingItems()
{
}

bool System::TmItems::DestItems::DestGroupList::ChunkingItems::has_data() const
{
    if (is_presence_container) return true;
    return chunksize.is_set;
}

bool System::TmItems::DestItems::DestGroupList::ChunkingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunksize.yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::ChunkingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chunking-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::ChunkingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunksize.is_set || is_set(chunksize.yfilter)) leaf_name_data.push_back(chunksize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::ChunkingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::ChunkingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestItems::DestGroupList::ChunkingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunkSize")
    {
        chunksize = value;
        chunksize.value_namespace = name_space;
        chunksize.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::ChunkingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunkSize")
    {
        chunksize.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::ChunkingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chunkSize")
        return true;
    return false;
}

System::TmItems::SubsItems::SubsItems()
    :
    subscription_list(this, {"id"})
{

    yang_name = "subs-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SubsItems::~SubsItems()
{
}

bool System::TmItems::SubsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription_list.len(); index++)
    {
        if(subscription_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::has_operation() const
{
    for (std::size_t index=0; index<subscription_list.len(); index++)
    {
        if(subscription_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SubsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Subscription-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SubsItems::SubscriptionList>();
        ent_->parent = this;
        subscription_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscription_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SubsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Subscription-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::SubscriptionList()
    :
    id{YType::uint64, "id"}
        ,
    rssensorgrouprel_items(std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems>())
    , rsdestgrouprel_items(std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems>())
{
    rssensorgrouprel_items->parent = this;
    rsdestgrouprel_items->parent = this;

    yang_name = "Subscription-list"; yang_parent_name = "subs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SubsItems::SubscriptionList::~SubscriptionList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (rssensorgrouprel_items !=  nullptr && rssensorgrouprel_items->has_data())
	|| (rsdestgrouprel_items !=  nullptr && rsdestgrouprel_items->has_data());
}

bool System::TmItems::SubsItems::SubscriptionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rssensorgrouprel_items !=  nullptr && rssensorgrouprel_items->has_operation())
	|| (rsdestgrouprel_items !=  nullptr && rsdestgrouprel_items->has_operation());
}

std::string System::TmItems::SubsItems::SubscriptionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/subs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SubsItems::SubscriptionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Subscription-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssensorGroupRel-items")
    {
        if(rssensorgrouprel_items == nullptr)
        {
            rssensorgrouprel_items = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems>();
        }
        return rssensorgrouprel_items;
    }

    if(child_yang_name == "rsdestGroupRel-items")
    {
        if(rsdestgrouprel_items == nullptr)
        {
            rsdestgrouprel_items = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems>();
        }
        return rsdestgrouprel_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rssensorgrouprel_items != nullptr)
    {
        _children["rssensorGroupRel-items"] = rssensorgrouprel_items;
    }

    if(rsdestgrouprel_items != nullptr)
    {
        _children["rsdestGroupRel-items"] = rsdestgrouprel_items;
    }

    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SubsItems::SubscriptionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TmItems::SubsItems::SubscriptionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssensorGroupRel-items" || name == "rsdestGroupRel-items" || name == "id")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RssensorGroupRelItems()
    :
    rssensorgrouprel_list(this, {"tdn"})
{

    yang_name = "rssensorGroupRel-items"; yang_parent_name = "Subscription-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::~RssensorGroupRelItems()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rssensorgrouprel_list.len(); index++)
    {
        if(rssensorgrouprel_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_operation() const
{
    for (std::size_t index=0; index<rssensorgrouprel_list.len(); index++)
    {
        if(rssensorgrouprel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssensorGroupRel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsSensorGroupRel-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList>();
        ent_->parent = this;
        rssensorgrouprel_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rssensorgrouprel_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsSensorGroupRel-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::RsSensorGroupRelList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    sampleintvl{YType::uint64, "sampleIntvl"}
{

    yang_name = "RsSensorGroupRel-list"; yang_parent_name = "rssensorGroupRel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::~RsSensorGroupRelList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| sampleintvl.is_set;
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(sampleintvl.yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsSensorGroupRel-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (sampleintvl.is_set || is_set(sampleintvl.yfilter)) leaf_name_data.push_back(sampleintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sampleIntvl")
    {
        sampleintvl = value;
        sampleintvl.value_namespace = name_space;
        sampleintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "sampleIntvl")
    {
        sampleintvl.yfilter = yfilter;
    }
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "sampleIntvl")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsdestGroupRelItems()
    :
    rsdestgrouprel_list(this, {"tdn"})
{

    yang_name = "rsdestGroupRel-items"; yang_parent_name = "Subscription-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::~RsdestGroupRelItems()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsdestgrouprel_list.len(); index++)
    {
        if(rsdestgrouprel_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_operation() const
{
    for (std::size_t index=0; index<rsdestgrouprel_list.len(); index++)
    {
        if(rsdestgrouprel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdestGroupRel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsDestGroupRel-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList>();
        ent_->parent = this;
        rsdestgrouprel_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsdestgrouprel_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsDestGroupRel-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::RsDestGroupRelList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsDestGroupRel-list"; yang_parent_name = "rsdestGroupRel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::~RsDestGroupRelList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsDestGroupRel-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TrackItems::TrackItems()
    :
    object_items(std::make_shared<System::TrackItems::ObjectItems>())
{
    object_items->parent = this;

    yang_name = "track-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::~TrackItems()
{
}

bool System::TrackItems::has_data() const
{
    if (is_presence_container) return true;
    return (object_items !=  nullptr && object_items->has_data());
}

bool System::TrackItems::has_operation() const
{
    return is_set(yfilter)
	|| (object_items !=  nullptr && object_items->has_operation());
}

std::string System::TrackItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-items")
    {
        if(object_items == nullptr)
        {
            object_items = std::make_shared<System::TrackItems::ObjectItems>();
        }
        return object_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(object_items != nullptr)
    {
        _children["object-items"] = object_items;
    }

    return _children;
}

void System::TrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-items")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectItems()
    :
    object_list(this, {"id"})
{

    yang_name = "object-items"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::ObjectItems::~ObjectItems()
{
}

bool System::TrackItems::ObjectItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TrackItems::ObjectItems::has_operation() const
{
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TrackItems::ObjectItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/track-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::ObjectItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Object-list")
    {
        auto ent_ = std::make_shared<System::TrackItems::ObjectItems::ObjectList>();
        ent_->parent = this;
        object_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TrackItems::ObjectItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::ObjectItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::ObjectItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Object-list")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ObjectList()
    :
    id{YType::uint16, "id"},
    clients{YType::uint16, "clients"}
        ,
    if_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IfItems>())
    , iprt_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IprtItems>())
    , ipsla_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IpslaItems>())
    , list_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems>())
{
    if_items->parent = this;
    iprt_items->parent = this;
    ipsla_items->parent = this;
    list_items->parent = this;

    yang_name = "Object-list"; yang_parent_name = "object-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::ObjectItems::ObjectList::~ObjectList()
{
}

bool System::TrackItems::ObjectItems::ObjectList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| clients.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (iprt_items !=  nullptr && iprt_items->has_data())
	|| (ipsla_items !=  nullptr && ipsla_items->has_data())
	|| (list_items !=  nullptr && list_items->has_data());
}

bool System::TrackItems::ObjectItems::ObjectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clients.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (iprt_items !=  nullptr && iprt_items->has_operation())
	|| (ipsla_items !=  nullptr && ipsla_items->has_operation())
	|| (list_items !=  nullptr && list_items->has_operation());
}

std::string System::TrackItems::ObjectItems::ObjectList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/track-items/object-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::ObjectItems::ObjectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Object-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clients.is_set || is_set(clients.yfilter)) leaf_name_data.push_back(clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "iprt-items")
    {
        if(iprt_items == nullptr)
        {
            iprt_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IprtItems>();
        }
        return iprt_items;
    }

    if(child_yang_name == "ipsla-items")
    {
        if(ipsla_items == nullptr)
        {
            ipsla_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IpslaItems>();
        }
        return ipsla_items;
    }

    if(child_yang_name == "list-items")
    {
        if(list_items == nullptr)
        {
            list_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems>();
        }
        return list_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(iprt_items != nullptr)
    {
        _children["iprt-items"] = iprt_items;
    }

    if(ipsla_items != nullptr)
    {
        _children["ipsla-items"] = ipsla_items;
    }

    if(list_items != nullptr)
    {
        _children["list-items"] = list_items;
    }

    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clients")
    {
        clients = value;
        clients.value_namespace = name_space;
        clients.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clients")
    {
        clients.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "iprt-items" || name == "ipsla-items" || name == "list-items" || name == "id" || name == "clients")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IfItems::IfItems()
    :
    id{YType::str, "id"},
    protocoltype{YType::enumeration, "protocolType"}
{

    yang_name = "if-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IfItems::~IfItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| protocoltype.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(protocoltype.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (protocoltype.is_set || is_set(protocoltype.yfilter)) leaf_name_data.push_back(protocoltype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolType")
    {
        protocoltype = value;
        protocoltype.value_namespace = name_space;
        protocoltype.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "protocolType")
    {
        protocoltype.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "protocolType")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IprtItems::IprtItems()
    :
    af{YType::enumeration, "af"},
    prefix{YType::str, "prefix"},
    routestate{YType::enumeration, "routeState"},
    vrf{YType::str, "vrf"},
    routeowner{YType::enumeration, "routeOwner"}
{

    yang_name = "iprt-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IprtItems::~IprtItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| prefix.is_set
	|| routestate.is_set
	|| vrf.is_set
	|| routeowner.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(routestate.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(routeowner.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IprtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IprtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (routestate.is_set || is_set(routestate.yfilter)) leaf_name_data.push_back(routestate.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (routeowner.is_set || is_set(routeowner.yfilter)) leaf_name_data.push_back(routeowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::IprtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::IprtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::IprtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeState")
    {
        routestate = value;
        routestate.value_namespace = name_space;
        routestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeOwner")
    {
        routeowner = value;
        routeowner.value_namespace = name_space;
        routeowner.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IprtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "routeState")
    {
        routestate.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "routeOwner")
    {
        routeowner.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "prefix" || name == "routeState" || name == "vrf" || name == "routeOwner")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IpslaItems::IpslaItems()
    :
    probeid{YType::uint32, "probeId"},
    probestate{YType::enumeration, "probeState"}
{

    yang_name = "ipsla-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IpslaItems::~IpslaItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_data() const
{
    if (is_presence_container) return true;
    return probeid.is_set
	|| probestate.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probeid.yfilter)
	|| ydk::is_set(probestate.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probeid.is_set || is_set(probeid.yfilter)) leaf_name_data.push_back(probeid.get_name_leafdata());
    if (probestate.is_set || is_set(probestate.yfilter)) leaf_name_data.push_back(probestate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::IpslaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probeId")
    {
        probeid = value;
        probeid.value_namespace = name_space;
        probeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeState")
    {
        probestate = value;
        probestate.value_namespace = name_space;
        probestate.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IpslaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probeId")
    {
        probeid.yfilter = yfilter;
    }
    if(value_path == "probeState")
    {
        probestate.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probeId" || name == "probeState")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ListItems()
    :
    type{YType::enumeration, "type"},
    percentageup{YType::uint16, "percentageUp"},
    percentagedown{YType::uint16, "percentageDown"},
    weightup{YType::uint16, "weightUp"},
    weightdown{YType::uint16, "weightDown"}
        ,
    obj_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems>())
{
    obj_items->parent = this;

    yang_name = "list-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::~ListItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| percentageup.is_set
	|| percentagedown.is_set
	|| weightup.is_set
	|| weightdown.is_set
	|| (obj_items !=  nullptr && obj_items->has_data());
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(percentageup.yfilter)
	|| ydk::is_set(percentagedown.yfilter)
	|| ydk::is_set(weightup.yfilter)
	|| ydk::is_set(weightdown.yfilter)
	|| (obj_items !=  nullptr && obj_items->has_operation());
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (percentageup.is_set || is_set(percentageup.yfilter)) leaf_name_data.push_back(percentageup.get_name_leafdata());
    if (percentagedown.is_set || is_set(percentagedown.yfilter)) leaf_name_data.push_back(percentagedown.get_name_leafdata());
    if (weightup.is_set || is_set(weightup.yfilter)) leaf_name_data.push_back(weightup.get_name_leafdata());
    if (weightdown.is_set || is_set(weightdown.yfilter)) leaf_name_data.push_back(weightdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-items")
    {
        if(obj_items == nullptr)
        {
            obj_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems>();
        }
        return obj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(obj_items != nullptr)
    {
        _children["obj-items"] = obj_items;
    }

    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentageUp")
    {
        percentageup = value;
        percentageup.value_namespace = name_space;
        percentageup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentageDown")
    {
        percentagedown = value;
        percentagedown.value_namespace = name_space;
        percentagedown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weightUp")
    {
        weightup = value;
        weightup.value_namespace = name_space;
        weightup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weightDown")
    {
        weightdown = value;
        weightdown.value_namespace = name_space;
        weightdown.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "percentageUp")
    {
        percentageup.yfilter = yfilter;
    }
    if(value_path == "percentageDown")
    {
        percentagedown.yfilter = yfilter;
    }
    if(value_path == "weightUp")
    {
        weightup.yfilter = yfilter;
    }
    if(value_path == "weightDown")
    {
        weightdown.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-items" || name == "type" || name == "percentageUp" || name == "percentageDown" || name == "weightUp" || name == "weightDown")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::ObjItems()
    :
    member_list(this, {"id"})
{

    yang_name = "obj-items"; yang_parent_name = "list-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::~ObjItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_list.len(); index++)
    {
        if(member_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_operation() const
{
    for (std::size_t index=0; index<member_list.len(); index++)
    {
        if(member_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Member-list")
    {
        auto ent_ = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList>();
        ent_->parent = this;
        member_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Member-list")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::MemberList()
    :
    id{YType::uint16, "id"},
    weight{YType::uint16, "weight"},
    not_{YType::boolean, "not"}
{

    yang_name = "Member-list"; yang_parent_name = "obj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::~MemberList()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| weight.is_set
	|| not_.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(not_.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Member-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (not_.is_set || is_set(not_.yfilter)) leaf_name_data.push_back(not_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not")
    {
        not_ = value;
        not_.value_namespace = name_space;
        not_.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "not")
    {
        not_.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "weight" || name == "not")
        return true;
    return false;
}

System::UdldItems::UdldItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::UdldItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "udld-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::~UdldItems()
{
}

bool System::UdldItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::UdldItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::UdldItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::UdldItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::UdldItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UdldItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UdldItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::UdldItems::InstItems::InstItems()
    :
    aggressive{YType::enumeration, "aggressive"},
    msgintvl{YType::uint8, "msgIntvl"},
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    physif_items(std::make_shared<System::UdldItems::InstItems::PhysifItems>())
{
    physif_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "udld-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::~InstItems()
{
}

bool System::UdldItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set
	|| msgintvl.is_set
	|| error.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (physif_items !=  nullptr && physif_items->has_data());
}

bool System::UdldItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(msgintvl.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (physif_items !=  nullptr && physif_items->has_operation());
}

std::string System::UdldItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (msgintvl.is_set || is_set(msgintvl.yfilter)) leaf_name_data.push_back(msgintvl.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "physif-items")
    {
        if(physif_items == nullptr)
        {
            physif_items = std::make_shared<System::UdldItems::InstItems::PhysifItems>();
        }
        return physif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(physif_items != nullptr)
    {
        _children["physif-items"] = physif_items;
    }

    return _children;
}

void System::UdldItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgIntvl")
    {
        msgintvl = value;
        msgintvl.value_namespace = name_space;
        msgintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
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

void System::UdldItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "msgIntvl")
    {
        msgintvl.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
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

bool System::UdldItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "physif-items" || name == "aggressive" || name == "msgIntvl" || name == "error" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysifItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "physif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::PhysifItems::~PhysifItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::PhysifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto ent_ = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList>();
        ent_->parent = this;
        physif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : physif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UdldItems::InstItems::PhysifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    aggressive{YType::enumeration, "aggressive"},
    bidirdetect{YType::enumeration, "biDirDetect"},
    fiber{YType::enumeration, "fiber"},
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ptimest_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems>())
    , rtvrfmbr_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems>())
{
    ptimest_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "PhysIf-list"; yang_parent_name = "physif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::~PhysIfList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| aggressive.is_set
	|| bidirdetect.is_set
	|| fiber.is_set
	|| error.is_set
	|| name.is_set
	|| descr.is_set
	|| (ptimest_items !=  nullptr && ptimest_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(bidirdetect.yfilter)
	|| ydk::is_set(fiber.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ptimest_items !=  nullptr && ptimest_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/inst-items/physif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (bidirdetect.is_set || is_set(bidirdetect.yfilter)) leaf_name_data.push_back(bidirdetect.get_name_leafdata());
    if (fiber.is_set || is_set(fiber.yfilter)) leaf_name_data.push_back(fiber.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptimest-items")
    {
        if(ptimest_items == nullptr)
        {
            ptimest_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems>();
        }
        return ptimest_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ptimest_items != nullptr)
    {
        _children["ptimest-items"] = ptimest_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biDirDetect")
    {
        bidirdetect = value;
        bidirdetect.value_namespace = name_space;
        bidirdetect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fiber")
    {
        fiber = value;
        fiber.value_namespace = name_space;
        fiber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "biDirDetect")
    {
        bidirdetect.yfilter = yfilter;
    }
    if(value_path == "fiber")
    {
        fiber.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
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

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptimest-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "aggressive" || name == "biDirDetect" || name == "fiber" || name == "error" || name == "name" || name == "descr")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PtimestItems()
    :
    pktts_list(this, {"dir"})
{

    yang_name = "ptimest-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::~PtimestItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pktts_list.len(); index++)
    {
        if(pktts_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_operation() const
{
    for (std::size_t index=0; index<pktts_list.len(); index++)
    {
        if(pktts_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptimest-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PktTs-list")
    {
        auto ent_ = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList>();
        ent_->parent = this;
        pktts_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pktts_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PktTs-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::PktTsList()
    :
    dir{YType::enumeration, "dir"}
{

    yang_name = "PktTs-list"; yang_parent_name = "ptimest-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::~PktTsList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_data() const
{
    if (is_presence_container) return true;
    return dir.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PktTs-list";
    ADD_KEY_TOKEN(dir, "dir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AcllogItems::AcllogItems()
    :
    inst_items(std::make_shared<System::AcllogItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "acllog-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::~AcllogItems()
{
}

bool System::AcllogItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AcllogItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::AcllogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acllog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AcllogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::AcllogItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AcllogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::AcllogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcllogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcllogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::AcllogItems::InstItems::InstItems()
    :
    log_items(std::make_shared<System::AcllogItems::InstItems::LogItems>())
{
    log_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "acllog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::InstItems::~InstItems()
{
}

bool System::AcllogItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (log_items !=  nullptr && log_items->has_data());
}

bool System::AcllogItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (log_items !=  nullptr && log_items->has_operation());
}

std::string System::AcllogItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acllog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AcllogItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-items")
    {
        if(log_items == nullptr)
        {
            log_items = std::make_shared<System::AcllogItems::InstItems::LogItems>();
        }
        return log_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AcllogItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_items != nullptr)
    {
        _children["log-items"] = log_items;
    }

    return _children;
}

void System::AcllogItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcllogItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcllogItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-items")
        return true;
    return false;
}

System::AcllogItems::InstItems::LogItems::LogItems()
    :
    interval{YType::str, "interval"},
    matchlevel{YType::uint8, "matchLevel"},
    loglevel{YType::uint8, "logLevel"}
{

    yang_name = "log-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::InstItems::LogItems::~LogItems()
{
}

bool System::AcllogItems::InstItems::LogItems::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| matchlevel.is_set
	|| loglevel.is_set;
}

bool System::AcllogItems::InstItems::LogItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(matchlevel.yfilter)
	|| ydk::is_set(loglevel.yfilter);
}

std::string System::AcllogItems::InstItems::LogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acllog-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::InstItems::LogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::InstItems::LogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (matchlevel.is_set || is_set(matchlevel.yfilter)) leaf_name_data.push_back(matchlevel.get_name_leafdata());
    if (loglevel.is_set || is_set(loglevel.yfilter)) leaf_name_data.push_back(loglevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AcllogItems::InstItems::LogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AcllogItems::InstItems::LogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AcllogItems::InstItems::LogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchLevel")
    {
        matchlevel = value;
        matchlevel.value_namespace = name_space;
        matchlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logLevel")
    {
        loglevel = value;
        loglevel.value_namespace = name_space;
        loglevel.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcllogItems::InstItems::LogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "matchLevel")
    {
        matchlevel.yfilter = yfilter;
    }
    if(value_path == "logLevel")
    {
        loglevel.yfilter = yfilter;
    }
}

bool System::AcllogItems::InstItems::LogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "matchLevel" || name == "logLevel")
        return true;
    return false;
}

System::BdItems::BdItems()
    :
    descr{YType::str, "descr"},
    sysdefaultsviautostate{YType::enumeration, "sysDefaultSVIAutostate"}
        ,
    vlanconfig_items(std::make_shared<System::BdItems::VlanconfigItems>())
    , bd_items(std::make_shared<System::BdItems::BdItems_>())
    , vlan_items(std::make_shared<System::BdItems::VlanItems>())
    , vxlan_items(std::make_shared<System::BdItems::VxlanItems>())
{
    vlanconfig_items->parent = this;
    bd_items->parent = this;
    vlan_items->parent = this;
    vxlan_items->parent = this;

    yang_name = "bd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::~BdItems()
{
}

bool System::BdItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| sysdefaultsviautostate.is_set
	|| (vlanconfig_items !=  nullptr && vlanconfig_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (vxlan_items !=  nullptr && vxlan_items->has_data());
}

bool System::BdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sysdefaultsviautostate.yfilter)
	|| (vlanconfig_items !=  nullptr && vlanconfig_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (vxlan_items !=  nullptr && vxlan_items->has_operation());
}

std::string System::BdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sysdefaultsviautostate.is_set || is_set(sysdefaultsviautostate.yfilter)) leaf_name_data.push_back(sysdefaultsviautostate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlanconfig-items")
    {
        if(vlanconfig_items == nullptr)
        {
            vlanconfig_items = std::make_shared<System::BdItems::VlanconfigItems>();
        }
        return vlanconfig_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::BdItems::BdItems_>();
        }
        return bd_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::BdItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "vxlan-items")
    {
        if(vxlan_items == nullptr)
        {
            vxlan_items = std::make_shared<System::BdItems::VxlanItems>();
        }
        return vxlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlanconfig_items != nullptr)
    {
        _children["vlanconfig-items"] = vlanconfig_items;
    }

    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(vxlan_items != nullptr)
    {
        _children["vxlan-items"] = vxlan_items;
    }

    return _children;
}

void System::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDefaultSVIAutostate")
    {
        sysdefaultsviautostate = value;
        sysdefaultsviautostate.value_namespace = name_space;
        sysdefaultsviautostate.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sysDefaultSVIAutostate")
    {
        sysdefaultsviautostate.yfilter = yfilter;
    }
}

bool System::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanconfig-items" || name == "bd-items" || name == "vlan-items" || name == "vxlan-items" || name == "descr" || name == "sysDefaultSVIAutostate")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanconfigItems()
    :
    vlanconfig_list(this, {"accencap"})
{

    yang_name = "vlanconfig-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanconfigItems::~VlanconfigItems()
{
}

bool System::BdItems::VlanconfigItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanconfig_list.len(); index++)
    {
        if(vlanconfig_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::has_operation() const
{
    for (std::size_t index=0; index<vlanconfig_list.len(); index++)
    {
        if(vlanconfig_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanconfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanconfig-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanConfig-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList>();
        ent_->parent = this;
        vlanconfig_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanconfig_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanConfig-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::VlanConfigList()
    :
    accencap{YType::str, "accEncap"}
        ,
    ipqos_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems>())
{
    ipqos_items->parent = this;

    yang_name = "VlanConfig-list"; yang_parent_name = "vlanconfig-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanconfigItems::VlanConfigList::~VlanConfigList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_data() const
{
    if (is_presence_container) return true;
    return accencap.is_set
	|| (ipqos_items !=  nullptr && ipqos_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accencap.yfilter)
	|| (ipqos_items !=  nullptr && ipqos_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vlanconfig-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanConfig-list";
    ADD_KEY_TOKEN(accencap, "accEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accencap.is_set || is_set(accencap.yfilter)) leaf_name_data.push_back(accencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipqos-items")
    {
        if(ipqos_items == nullptr)
        {
            ipqos_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems>();
        }
        return ipqos_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipqos_items != nullptr)
    {
        _children["ipqos-items"] = ipqos_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accEncap")
    {
        accencap = value;
        accencap.value_namespace = name_space;
        accencap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accEncap")
    {
        accencap.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipqos-items" || name == "accEncap")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::IpqosItems()
    :
    statsstate{YType::enumeration, "statsState"}
        ,
    statclear_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems>())
    , queuing_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems>())
    , nw_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems>())
    , dflt_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems>())
{
    statclear_items->parent = this;
    queuing_items->parent = this;
    nw_items->parent = this;
    dflt_items->parent = this;

    yang_name = "ipqos-items"; yang_parent_name = "VlanConfig-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::~IpqosItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::has_data() const
{
    if (is_presence_container) return true;
    return statsstate.is_set
	|| (statclear_items !=  nullptr && statclear_items->has_data())
	|| (queuing_items !=  nullptr && queuing_items->has_data())
	|| (nw_items !=  nullptr && nw_items->has_data())
	|| (dflt_items !=  nullptr && dflt_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statsstate.yfilter)
	|| (statclear_items !=  nullptr && statclear_items->has_operation())
	|| (queuing_items !=  nullptr && queuing_items->has_operation())
	|| (nw_items !=  nullptr && nw_items->has_operation())
	|| (dflt_items !=  nullptr && dflt_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipqos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statsstate.is_set || is_set(statsstate.yfilter)) leaf_name_data.push_back(statsstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statClear-items")
    {
        if(statclear_items == nullptr)
        {
            statclear_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems>();
        }
        return statclear_items;
    }

    if(child_yang_name == "queuing-items")
    {
        if(queuing_items == nullptr)
        {
            queuing_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems>();
        }
        return queuing_items;
    }

    if(child_yang_name == "nw-items")
    {
        if(nw_items == nullptr)
        {
            nw_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems>();
        }
        return nw_items;
    }

    if(child_yang_name == "dflt-items")
    {
        if(dflt_items == nullptr)
        {
            dflt_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems>();
        }
        return dflt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statclear_items != nullptr)
    {
        _children["statClear-items"] = statclear_items;
    }

    if(queuing_items != nullptr)
    {
        _children["queuing-items"] = queuing_items;
    }

    if(nw_items != nullptr)
    {
        _children["nw-items"] = nw_items;
    }

    if(dflt_items != nullptr)
    {
        _children["dflt-items"] = dflt_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statsState")
    {
        statsstate = value;
        statsstate.value_namespace = name_space;
        statsstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statsState")
    {
        statsstate.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "queuing-items" || name == "nw-items" || name == "dflt-items" || name == "statsState")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::StatClearItems()
    :
    pmaptype{YType::enumeration, "pmapType"},
    direction{YType::enumeration, "direction"},
    ethernet{YType::str, "ethernet"},
    vlan{YType::str, "vlan"},
    portchan{YType::str, "portChan"},
    timestamp{YType::str, "timeStamp"}
{

    yang_name = "statClear-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::~StatClearItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::has_data() const
{
    if (is_presence_container) return true;
    return pmaptype.is_set
	|| direction.is_set
	|| ethernet.is_set
	|| vlan.is_set
	|| portchan.is_set
	|| timestamp.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pmaptype.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(portchan.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statClear-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pmaptype.is_set || is_set(pmaptype.yfilter)) leaf_name_data.push_back(pmaptype.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (portchan.is_set || is_set(portchan.yfilter)) leaf_name_data.push_back(portchan.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pmapType")
    {
        pmaptype = value;
        pmaptype.value_namespace = name_space;
        pmaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portChan")
    {
        portchan = value;
        portchan.value_namespace = name_space;
        portchan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeStamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pmapType")
    {
        pmaptype.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "portChan")
    {
        portchan.yfilter = yfilter;
    }
    if(value_path == "timeStamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmapType" || name == "direction" || name == "ethernet" || name == "vlan" || name == "portChan" || name == "timeStamp")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::QueuingItems()
    :
    policy_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems>())
    , c_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems>())
    , p_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems>())
    , copypmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems>())
{
    policy_items->parent = this;
    c_items->parent = this;
    p_items->parent = this;
    copypmap_items->parent = this;

    yang_name = "queuing-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::~QueuingItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::has_data() const
{
    if (is_presence_container) return true;
    return (policy_items !=  nullptr && policy_items->has_data())
	|| (c_items !=  nullptr && c_items->has_data())
	|| (p_items !=  nullptr && p_items->has_data())
	|| (copypmap_items !=  nullptr && copypmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::has_operation() const
{
    return is_set(yfilter)
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (c_items !=  nullptr && c_items->has_operation())
	|| (p_items !=  nullptr && p_items->has_operation())
	|| (copypmap_items !=  nullptr && copypmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "c-items")
    {
        if(c_items == nullptr)
        {
            c_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems>();
        }
        return c_items;
    }

    if(child_yang_name == "p-items")
    {
        if(p_items == nullptr)
        {
            p_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems>();
        }
        return p_items;
    }

    if(child_yang_name == "copyPMap-items")
    {
        if(copypmap_items == nullptr)
        {
            copypmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems>();
        }
        return copypmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    if(c_items != nullptr)
    {
        _children["c-items"] = c_items;
    }

    if(p_items != nullptr)
    {
        _children["p-items"] = p_items;
    }

    if(copypmap_items != nullptr)
    {
        _children["copyPMap-items"] = copypmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-items" || name == "c-items" || name == "p-items" || name == "copyPMap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::PolicyItems()
    :
    in_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems>())
    , out_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems>())
{
    in_items->parent = this;
    out_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::~PolicyItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (in_items !=  nullptr && in_items->has_data())
	|| (out_items !=  nullptr && out_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (in_items !=  nullptr && in_items->has_operation())
	|| (out_items !=  nullptr && out_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-items")
    {
        if(in_items == nullptr)
        {
            in_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems>();
        }
        return in_items;
    }

    if(child_yang_name == "out-items")
    {
        if(out_items == nullptr)
        {
            out_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems>();
        }
        return out_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in_items != nullptr)
    {
        _children["in-items"] = in_items;
    }

    if(out_items != nullptr)
    {
        _children["out-items"] = out_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-items" || name == "out-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::InItems()
    :
    intf_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems>())
    , sys_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems>())
    , pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;
    pmap_items->parent = this;

    yang_name = "in-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::~InItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items" || name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::~IntfItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::~IfList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        _children["queCmap-items"] = quecmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        ent_->parent = this;
        queuingstats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queuingstats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::SysItems()
    :
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::~SysItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::OutItems()
    :
    intf_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems>())
    , sys_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems>())
    , pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;
    pmap_items->parent = this;

    yang_name = "out-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::~OutItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items" || name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::~IntfItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::~IfList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        _children["queCmap-items"] = quecmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        ent_->parent = this;
        queuingstats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queuingstats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::SysItems()
    :
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::~SysItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::CItems()
    :
    name_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "c-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::~CItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::NameItems()
    :
    cmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "c-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::~NameItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmapinst_list.len(); index++)
    {
        if(cmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<cmapinst_list.len(); index++)
    {
        if(cmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CMapInst-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList>();
        ent_->parent = this;
        cmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CMapInst-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    configstatus{YType::uint32, "configStatus"}
        ,
    acl_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems>())
    , dscp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems>())
    , iprtp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems>())
    , packetlength_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems>())
    , cos_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems>())
    , mplsexperimental_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems>())
    , precedence_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems>())
    , protocol_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems>())
    , description_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems>())
    , dscpnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems>())
    , cosnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems>())
    , mplsexperimentalnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems>())
    , precedencenot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems>())
    , protocolnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems>())
    , iprtpnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems>())
    , packetlengthnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems>())
    , grp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems>())
    , rsclassmaptopolicymap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems>())
{
    acl_items->parent = this;
    dscp_items->parent = this;
    iprtp_items->parent = this;
    packetlength_items->parent = this;
    cos_items->parent = this;
    mplsexperimental_items->parent = this;
    precedence_items->parent = this;
    protocol_items->parent = this;
    description_items->parent = this;
    dscpnot_items->parent = this;
    cosnot_items->parent = this;
    mplsexperimentalnot_items->parent = this;
    precedencenot_items->parent = this;
    protocolnot_items->parent = this;
    iprtpnot_items->parent = this;
    packetlengthnot_items->parent = this;
    grp_items->parent = this;
    rsclassmaptopolicymap_items->parent = this;

    yang_name = "CMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::~CMapInstList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| configstatus.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (dscp_items !=  nullptr && dscp_items->has_data())
	|| (iprtp_items !=  nullptr && iprtp_items->has_data())
	|| (packetlength_items !=  nullptr && packetlength_items->has_data())
	|| (cos_items !=  nullptr && cos_items->has_data())
	|| (mplsexperimental_items !=  nullptr && mplsexperimental_items->has_data())
	|| (precedence_items !=  nullptr && precedence_items->has_data())
	|| (protocol_items !=  nullptr && protocol_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (dscpnot_items !=  nullptr && dscpnot_items->has_data())
	|| (cosnot_items !=  nullptr && cosnot_items->has_data())
	|| (mplsexperimentalnot_items !=  nullptr && mplsexperimentalnot_items->has_data())
	|| (precedencenot_items !=  nullptr && precedencenot_items->has_data())
	|| (protocolnot_items !=  nullptr && protocolnot_items->has_data())
	|| (iprtpnot_items !=  nullptr && iprtpnot_items->has_data())
	|| (packetlengthnot_items !=  nullptr && packetlengthnot_items->has_data())
	|| (grp_items !=  nullptr && grp_items->has_data())
	|| (rsclassmaptopolicymap_items !=  nullptr && rsclassmaptopolicymap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (dscp_items !=  nullptr && dscp_items->has_operation())
	|| (iprtp_items !=  nullptr && iprtp_items->has_operation())
	|| (packetlength_items !=  nullptr && packetlength_items->has_operation())
	|| (cos_items !=  nullptr && cos_items->has_operation())
	|| (mplsexperimental_items !=  nullptr && mplsexperimental_items->has_operation())
	|| (precedence_items !=  nullptr && precedence_items->has_operation())
	|| (protocol_items !=  nullptr && protocol_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (dscpnot_items !=  nullptr && dscpnot_items->has_operation())
	|| (cosnot_items !=  nullptr && cosnot_items->has_operation())
	|| (mplsexperimentalnot_items !=  nullptr && mplsexperimentalnot_items->has_operation())
	|| (precedencenot_items !=  nullptr && precedencenot_items->has_operation())
	|| (protocolnot_items !=  nullptr && protocolnot_items->has_operation())
	|| (iprtpnot_items !=  nullptr && iprtpnot_items->has_operation())
	|| (packetlengthnot_items !=  nullptr && packetlengthnot_items->has_operation())
	|| (grp_items !=  nullptr && grp_items->has_operation())
	|| (rsclassmaptopolicymap_items !=  nullptr && rsclassmaptopolicymap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "dscp-items")
    {
        if(dscp_items == nullptr)
        {
            dscp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems>();
        }
        return dscp_items;
    }

    if(child_yang_name == "ipRtp-items")
    {
        if(iprtp_items == nullptr)
        {
            iprtp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems>();
        }
        return iprtp_items;
    }

    if(child_yang_name == "packetLength-items")
    {
        if(packetlength_items == nullptr)
        {
            packetlength_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems>();
        }
        return packetlength_items;
    }

    if(child_yang_name == "cos-items")
    {
        if(cos_items == nullptr)
        {
            cos_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems>();
        }
        return cos_items;
    }

    if(child_yang_name == "mplsExperimental-items")
    {
        if(mplsexperimental_items == nullptr)
        {
            mplsexperimental_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems>();
        }
        return mplsexperimental_items;
    }

    if(child_yang_name == "precedence-items")
    {
        if(precedence_items == nullptr)
        {
            precedence_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems>();
        }
        return precedence_items;
    }

    if(child_yang_name == "protocol-items")
    {
        if(protocol_items == nullptr)
        {
            protocol_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems>();
        }
        return protocol_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "dscpNot-items")
    {
        if(dscpnot_items == nullptr)
        {
            dscpnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems>();
        }
        return dscpnot_items;
    }

    if(child_yang_name == "cosNot-items")
    {
        if(cosnot_items == nullptr)
        {
            cosnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems>();
        }
        return cosnot_items;
    }

    if(child_yang_name == "mplsExperimentalNot-items")
    {
        if(mplsexperimentalnot_items == nullptr)
        {
            mplsexperimentalnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems>();
        }
        return mplsexperimentalnot_items;
    }

    if(child_yang_name == "precedenceNot-items")
    {
        if(precedencenot_items == nullptr)
        {
            precedencenot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems>();
        }
        return precedencenot_items;
    }

    if(child_yang_name == "protocolNot-items")
    {
        if(protocolnot_items == nullptr)
        {
            protocolnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems>();
        }
        return protocolnot_items;
    }

    if(child_yang_name == "ipRtpNot-items")
    {
        if(iprtpnot_items == nullptr)
        {
            iprtpnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems>();
        }
        return iprtpnot_items;
    }

    if(child_yang_name == "packetLengthNot-items")
    {
        if(packetlengthnot_items == nullptr)
        {
            packetlengthnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems>();
        }
        return packetlengthnot_items;
    }

    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems>();
        }
        return grp_items;
    }

    if(child_yang_name == "rsclassMapToPolicyMap-items")
    {
        if(rsclassmaptopolicymap_items == nullptr)
        {
            rsclassmaptopolicymap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems>();
        }
        return rsclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(dscp_items != nullptr)
    {
        _children["dscp-items"] = dscp_items;
    }

    if(iprtp_items != nullptr)
    {
        _children["ipRtp-items"] = iprtp_items;
    }

    if(packetlength_items != nullptr)
    {
        _children["packetLength-items"] = packetlength_items;
    }

    if(cos_items != nullptr)
    {
        _children["cos-items"] = cos_items;
    }

    if(mplsexperimental_items != nullptr)
    {
        _children["mplsExperimental-items"] = mplsexperimental_items;
    }

    if(precedence_items != nullptr)
    {
        _children["precedence-items"] = precedence_items;
    }

    if(protocol_items != nullptr)
    {
        _children["protocol-items"] = protocol_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(dscpnot_items != nullptr)
    {
        _children["dscpNot-items"] = dscpnot_items;
    }

    if(cosnot_items != nullptr)
    {
        _children["cosNot-items"] = cosnot_items;
    }

    if(mplsexperimentalnot_items != nullptr)
    {
        _children["mplsExperimentalNot-items"] = mplsexperimentalnot_items;
    }

    if(precedencenot_items != nullptr)
    {
        _children["precedenceNot-items"] = precedencenot_items;
    }

    if(protocolnot_items != nullptr)
    {
        _children["protocolNot-items"] = protocolnot_items;
    }

    if(iprtpnot_items != nullptr)
    {
        _children["ipRtpNot-items"] = iprtpnot_items;
    }

    if(packetlengthnot_items != nullptr)
    {
        _children["packetLengthNot-items"] = packetlengthnot_items;
    }

    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
    }

    if(rsclassmaptopolicymap_items != nullptr)
    {
        _children["rsclassMapToPolicyMap-items"] = rsclassmaptopolicymap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchType")
    {
        matchtype = value;
        matchtype.value_namespace = name_space;
        matchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "dscp-items" || name == "ipRtp-items" || name == "packetLength-items" || name == "cos-items" || name == "mplsExperimental-items" || name == "precedence-items" || name == "protocol-items" || name == "Description-items" || name == "dscpNot-items" || name == "cosNot-items" || name == "mplsExperimentalNot-items" || name == "precedenceNot-items" || name == "protocolNot-items" || name == "ipRtpNot-items" || name == "packetLengthNot-items" || name == "grp-items" || name == "rsclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclItems()
    :
    acl_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::~AclItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Acl-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList>();
        ent_->parent = this;
        acl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Acl-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::AclList()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Acl-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::~AclList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Acl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpItems()
    :
    dscp_list(this, {"val"})
{

    yang_name = "dscp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::~DscpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscp_list.len(); index++)
    {
        if(dscp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::has_operation() const
{
    for (std::size_t index=0; index<dscp_list.len(); index++)
    {
        if(dscp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dscp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList>();
        ent_->parent = this;
        dscp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dscp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dscp-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::DscpList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Dscp-list"; yang_parent_name = "dscp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::~DscpList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dscp-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::IpRtpItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "ipRtp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::~IpRtpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::PacketLengthItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "packetLength-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::~PacketLengthItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packetLength-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosItems()
    :
    cos_list(this, {"val"})
{

    yang_name = "cos-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::~CosItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cos_list.len(); index++)
    {
        if(cos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::has_operation() const
{
    for (std::size_t index=0; index<cos_list.len(); index++)
    {
        if(cos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cos-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList>();
        ent_->parent = this;
        cos_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cos_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cos-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::CosList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Cos-list"; yang_parent_name = "cos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::~CosList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cos-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MplsExperimentalItems()
    :
    mplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimental-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::~MplsExperimentalItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_operation() const
{
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimental-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList>();
        ent_->parent = this;
        mplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsexperimental_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MPLSExperimental-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::MPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "MPLSExperimental-list"; yang_parent_name = "mplsExperimental-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::~MPLSExperimentalList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceItems()
    :
    precedence_list(this, {"val"})
{

    yang_name = "precedence-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::~PrecedenceItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_operation() const
{
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Precedence-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList>();
        ent_->parent = this;
        precedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : precedence_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Precedence-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::PrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Precedence-list"; yang_parent_name = "precedence-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::~PrecedenceList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Precedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolItems()
    :
    protocol_list(this, {"val"})
{

    yang_name = "protocol-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::~ProtocolItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_operation() const
{
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Protocol-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList>();
        ent_->parent = this;
        protocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Protocol-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::ProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Protocol-list"; yang_parent_name = "protocol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::~ProtocolList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Protocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::DscpNotItems()
    :
    notdscp_list(this, {"val"})
{

    yang_name = "dscpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::~DscpNotItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::has_operation() const
{
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotDscp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList>();
        ent_->parent = this;
        notdscp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notdscp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotDscp-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::NotDscpList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotDscp-list"; yang_parent_name = "dscpNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::~NotDscpList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotDscp-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::CosNotItems()
    :
    notcos_list(this, {"val"})
{

    yang_name = "cosNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::~CosNotItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::has_operation() const
{
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cosNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotCos-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList>();
        ent_->parent = this;
        notcos_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notcos_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotCos-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::NotCosList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotCos-list"; yang_parent_name = "cosNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::~NotCosList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotCos-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::MplsExperimentalNotItems()
    :
    notmplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimentalNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::~MplsExperimentalNotItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_operation() const
{
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimentalNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotMPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList>();
        ent_->parent = this;
        notmplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notmplsexperimental_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotMPLSExperimental-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::NotMPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotMPLSExperimental-list"; yang_parent_name = "mplsExperimentalNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::~NotMPLSExperimentalList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotMPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::PrecedenceNotItems()
    :
    notprecedence_list(this, {"val"})
{

    yang_name = "precedenceNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::~PrecedenceNotItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedenceNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotPrecedence-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList>();
        ent_->parent = this;
        notprecedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprecedence_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotPrecedence-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::NotPrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotPrecedence-list"; yang_parent_name = "precedenceNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::~NotPrecedenceList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotPrecedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::ProtocolNotItems()
    :
    notprotocol_list(this, {"val"})
{

    yang_name = "protocolNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::~ProtocolNotItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotProtocol-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList>();
        ent_->parent = this;
        notprotocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprotocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotProtocol-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::NotProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotProtocol-list"; yang_parent_name = "protocolNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::~NotProtocolList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotProtocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::IpRtpNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "ipRtpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::~IpRtpNotItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRtpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::PacketLengthNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "packetLengthNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::~PacketLengthNotItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packetLengthNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::GrpItems()
    :
    qosgrp_list(this, {"id"})
{

    yang_name = "grp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::~GrpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QoSGrp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList>();
        ent_->parent = this;
        qosgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QoSGrp-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::QoSGrpList()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QoSGrp-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::~QoSGrpList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QoSGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsclassMapToPolicyMapItems()
    :
    rsclassmaptopolicymap_list(this, {"tdn"})
{

    yang_name = "rsclassMapToPolicyMap-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::~RsclassMapToPolicyMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsClassMapToPolicyMap-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList>();
        ent_->parent = this;
        rsclassmaptopolicymap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsclassmaptopolicymap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsClassMapToPolicyMap-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::RsClassMapToPolicyMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsClassMapToPolicyMap-list"; yang_parent_name = "rsclassMapToPolicyMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::~RsClassMapToPolicyMapList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsClassMapToPolicyMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::PItems()
    :
    name_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "p-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::~PItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::NameItems()
    :
    pmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "p-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::~NameItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PMapInst-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList>();
        ent_->parent = this;
        pmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PMapInst-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::PMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    refcount{YType::uint32, "refCount"},
    configstatus{YType::uint32, "configStatus"}
        ,
    cmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems>())
    , description_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems>())
    , rtipqospolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>())
    , rtclassmaptopolicymap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>())
{
    cmap_items->parent = this;
    description_items->parent = this;
    rtipqospolicyinsttopmap_items->parent = this;
    rtclassmaptopolicymap_items->parent = this;

    yang_name = "PMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::~PMapInstList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| refcount.is_set
	|| configstatus.is_set
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_data())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_operation())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "rtipqosPolicyInstToPMap-items")
    {
        if(rtipqospolicyinsttopmap_items == nullptr)
        {
            rtipqospolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>();
        }
        return rtipqospolicyinsttopmap_items;
    }

    if(child_yang_name == "rtclassMapToPolicyMap-items")
    {
        if(rtclassmaptopolicymap_items == nullptr)
        {
            rtclassmaptopolicymap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>();
        }
        return rtclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(rtipqospolicyinsttopmap_items != nullptr)
    {
        _children["rtipqosPolicyInstToPMap-items"] = rtipqospolicyinsttopmap_items;
    }

    if(rtclassmaptopolicymap_items != nullptr)
    {
        _children["rtclassMapToPolicyMap-items"] = rtclassmaptopolicymap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchType")
    {
        matchtype = value;
        matchtype.value_namespace = name_space;
        matchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmap-items" || name == "Description-items" || name == "rtipqosPolicyInstToPMap-items" || name == "rtclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "refCount" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::CmapItems()
    :
    matchcmap_list(this, {"name"})
{

    yang_name = "cmap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::~CmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchCMap-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList>();
        ent_->parent = this;
        matchcmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchcmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchCMap-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MatchCMapList()
    :
    name{YType::str, "name"},
    prevcmap{YType::str, "prevCMap"},
    nextcmap{YType::str, "nextCMap"},
    configstatus{YType::uint32, "configStatus"}
        ,
    setcos_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>())
    , mtu_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>())
    , setprecedence_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>())
    , setdscp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>())
    , setgrp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>())
    , setdlbdisable_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>())
    , queuelimit_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>())
    , pause_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>())
    , dpp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>())
    , setbw_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>())
    , setrembw_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>())
    , shape_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>())
    , police_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>())
    , prio_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>())
    , randdet_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>())
    , randdetnonecn_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>())
{
    setcos_items->parent = this;
    mtu_items->parent = this;
    setprecedence_items->parent = this;
    setdscp_items->parent = this;
    setgrp_items->parent = this;
    setdlbdisable_items->parent = this;
    queuelimit_items->parent = this;
    pause_items->parent = this;
    dpp_items->parent = this;
    setbw_items->parent = this;
    setrembw_items->parent = this;
    shape_items->parent = this;
    police_items->parent = this;
    prio_items->parent = this;
    randdet_items->parent = this;
    randdetnonecn_items->parent = this;

    yang_name = "MatchCMap-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::~MatchCMapList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| prevcmap.is_set
	|| nextcmap.is_set
	|| configstatus.is_set
	|| (setcos_items !=  nullptr && setcos_items->has_data())
	|| (mtu_items !=  nullptr && mtu_items->has_data())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_data())
	|| (setdscp_items !=  nullptr && setdscp_items->has_data())
	|| (setgrp_items !=  nullptr && setgrp_items->has_data())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_data())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_data())
	|| (pause_items !=  nullptr && pause_items->has_data())
	|| (dpp_items !=  nullptr && dpp_items->has_data())
	|| (setbw_items !=  nullptr && setbw_items->has_data())
	|| (setrembw_items !=  nullptr && setrembw_items->has_data())
	|| (shape_items !=  nullptr && shape_items->has_data())
	|| (police_items !=  nullptr && police_items->has_data())
	|| (prio_items !=  nullptr && prio_items->has_data())
	|| (randdet_items !=  nullptr && randdet_items->has_data())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prevcmap.yfilter)
	|| ydk::is_set(nextcmap.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (setcos_items !=  nullptr && setcos_items->has_operation())
	|| (mtu_items !=  nullptr && mtu_items->has_operation())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_operation())
	|| (setdscp_items !=  nullptr && setdscp_items->has_operation())
	|| (setgrp_items !=  nullptr && setgrp_items->has_operation())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_operation())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_operation())
	|| (pause_items !=  nullptr && pause_items->has_operation())
	|| (dpp_items !=  nullptr && dpp_items->has_operation())
	|| (setbw_items !=  nullptr && setbw_items->has_operation())
	|| (setrembw_items !=  nullptr && setrembw_items->has_operation())
	|| (shape_items !=  nullptr && shape_items->has_operation())
	|| (police_items !=  nullptr && police_items->has_operation())
	|| (prio_items !=  nullptr && prio_items->has_operation())
	|| (randdet_items !=  nullptr && randdet_items->has_operation())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchCMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prevcmap.is_set || is_set(prevcmap.yfilter)) leaf_name_data.push_back(prevcmap.get_name_leafdata());
    if (nextcmap.is_set || is_set(nextcmap.yfilter)) leaf_name_data.push_back(nextcmap.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setCos-items")
    {
        if(setcos_items == nullptr)
        {
            setcos_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>();
        }
        return setcos_items;
    }

    if(child_yang_name == "mtu-items")
    {
        if(mtu_items == nullptr)
        {
            mtu_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>();
        }
        return mtu_items;
    }

    if(child_yang_name == "setPrecedence-items")
    {
        if(setprecedence_items == nullptr)
        {
            setprecedence_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>();
        }
        return setprecedence_items;
    }

    if(child_yang_name == "setDscp-items")
    {
        if(setdscp_items == nullptr)
        {
            setdscp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>();
        }
        return setdscp_items;
    }

    if(child_yang_name == "setGrp-items")
    {
        if(setgrp_items == nullptr)
        {
            setgrp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>();
        }
        return setgrp_items;
    }

    if(child_yang_name == "setDlbDisable-items")
    {
        if(setdlbdisable_items == nullptr)
        {
            setdlbdisable_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>();
        }
        return setdlbdisable_items;
    }

    if(child_yang_name == "QueueLimit-items")
    {
        if(queuelimit_items == nullptr)
        {
            queuelimit_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>();
        }
        return queuelimit_items;
    }

    if(child_yang_name == "pause-items")
    {
        if(pause_items == nullptr)
        {
            pause_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>();
        }
        return pause_items;
    }

    if(child_yang_name == "dpp-items")
    {
        if(dpp_items == nullptr)
        {
            dpp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>();
        }
        return dpp_items;
    }

    if(child_yang_name == "setBW-items")
    {
        if(setbw_items == nullptr)
        {
            setbw_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>();
        }
        return setbw_items;
    }

    if(child_yang_name == "setRemBW-items")
    {
        if(setrembw_items == nullptr)
        {
            setrembw_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>();
        }
        return setrembw_items;
    }

    if(child_yang_name == "shape-items")
    {
        if(shape_items == nullptr)
        {
            shape_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>();
        }
        return shape_items;
    }

    if(child_yang_name == "police-items")
    {
        if(police_items == nullptr)
        {
            police_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>();
        }
        return police_items;
    }

    if(child_yang_name == "prio-items")
    {
        if(prio_items == nullptr)
        {
            prio_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>();
        }
        return prio_items;
    }

    if(child_yang_name == "RandDet-items")
    {
        if(randdet_items == nullptr)
        {
            randdet_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>();
        }
        return randdet_items;
    }

    if(child_yang_name == "RandDetNonEcn-items")
    {
        if(randdetnonecn_items == nullptr)
        {
            randdetnonecn_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>();
        }
        return randdetnonecn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(setcos_items != nullptr)
    {
        _children["setCos-items"] = setcos_items;
    }

    if(mtu_items != nullptr)
    {
        _children["mtu-items"] = mtu_items;
    }

    if(setprecedence_items != nullptr)
    {
        _children["setPrecedence-items"] = setprecedence_items;
    }

    if(setdscp_items != nullptr)
    {
        _children["setDscp-items"] = setdscp_items;
    }

    if(setgrp_items != nullptr)
    {
        _children["setGrp-items"] = setgrp_items;
    }

    if(setdlbdisable_items != nullptr)
    {
        _children["setDlbDisable-items"] = setdlbdisable_items;
    }

    if(queuelimit_items != nullptr)
    {
        _children["QueueLimit-items"] = queuelimit_items;
    }

    if(pause_items != nullptr)
    {
        _children["pause-items"] = pause_items;
    }

    if(dpp_items != nullptr)
    {
        _children["dpp-items"] = dpp_items;
    }

    if(setbw_items != nullptr)
    {
        _children["setBW-items"] = setbw_items;
    }

    if(setrembw_items != nullptr)
    {
        _children["setRemBW-items"] = setrembw_items;
    }

    if(shape_items != nullptr)
    {
        _children["shape-items"] = shape_items;
    }

    if(police_items != nullptr)
    {
        _children["police-items"] = police_items;
    }

    if(prio_items != nullptr)
    {
        _children["prio-items"] = prio_items;
    }

    if(randdet_items != nullptr)
    {
        _children["RandDet-items"] = randdet_items;
    }

    if(randdetnonecn_items != nullptr)
    {
        _children["RandDetNonEcn-items"] = randdetnonecn_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevCMap")
    {
        prevcmap = value;
        prevcmap.value_namespace = name_space;
        prevcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextCMap")
    {
        nextcmap = value;
        nextcmap.value_namespace = name_space;
        nextcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prevCMap")
    {
        prevcmap.yfilter = yfilter;
    }
    if(value_path == "nextCMap")
    {
        nextcmap.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setCos-items" || name == "mtu-items" || name == "setPrecedence-items" || name == "setDscp-items" || name == "setGrp-items" || name == "setDlbDisable-items" || name == "QueueLimit-items" || name == "pause-items" || name == "dpp-items" || name == "setBW-items" || name == "setRemBW-items" || name == "shape-items" || name == "police-items" || name == "prio-items" || name == "RandDet-items" || name == "RandDetNonEcn-items" || name == "name" || name == "prevCMap" || name == "nextCMap" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::SetCosItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setCos-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::~SetCosItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setCos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::MtuItems()
    :
    value_{YType::uint16, "value"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "mtu-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::~MtuItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::SetPrecedenceItems()
    :
    val{YType::enumeration, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setPrecedence-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::~SetPrecedenceItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setPrecedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::SetDscpItems()
    :
    val{YType::uint8, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDscp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::~SetDscpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::SetGrpItems()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setGrp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::~SetGrpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setGrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::SetDlbDisableItems()
    :
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDlbDisable-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::~SetDlbDisableItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDlbDisable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::QueueLimitItems()
    :
    queuelimitval{YType::uint64, "QueueLimitVal"},
    queuelimitunit{YType::enumeration, "QueueLimitUnit"},
    dynamic{YType::uint8, "dynamic"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QueueLimit-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::~QueueLimitItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_data() const
{
    if (is_presence_container) return true;
    return queuelimitval.is_set
	|| queuelimitunit.is_set
	|| dynamic.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queuelimitval.yfilter)
	|| ydk::is_set(queuelimitunit.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueueLimit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queuelimitval.is_set || is_set(queuelimitval.yfilter)) leaf_name_data.push_back(queuelimitval.get_name_leafdata());
    if (queuelimitunit.is_set || is_set(queuelimitunit.yfilter)) leaf_name_data.push_back(queuelimitunit.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval = value;
        queuelimitval.value_namespace = name_space;
        queuelimitval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit = value;
        queuelimitunit.value_namespace = name_space;
        queuelimitunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval.yfilter = yfilter;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueueLimitVal" || name == "QueueLimitUnit" || name == "dynamic" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::PauseItems()
    :
    buffersize{YType::uint64, "bufferSize"},
    pausethreshold{YType::uint64, "pauseThreshold"},
    resumethreshold{YType::uint64, "resumeThreshold"},
    pfccos0{YType::boolean, "pfcCos0"},
    pfccos1{YType::boolean, "pfcCos1"},
    pfccos2{YType::boolean, "pfcCos2"},
    pfccos3{YType::boolean, "pfcCos3"},
    pfccos4{YType::boolean, "pfcCos4"},
    pfccos5{YType::boolean, "pfcCos5"},
    pfccos6{YType::boolean, "pfcCos6"},
    pfccos7{YType::boolean, "pfcCos7"},
    receive{YType::boolean, "receive"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "pause-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::~PauseItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_data() const
{
    if (is_presence_container) return true;
    return buffersize.is_set
	|| pausethreshold.is_set
	|| resumethreshold.is_set
	|| pfccos0.is_set
	|| pfccos1.is_set
	|| pfccos2.is_set
	|| pfccos3.is_set
	|| pfccos4.is_set
	|| pfccos5.is_set
	|| pfccos6.is_set
	|| pfccos7.is_set
	|| receive.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter)
	|| ydk::is_set(pausethreshold.yfilter)
	|| ydk::is_set(resumethreshold.yfilter)
	|| ydk::is_set(pfccos0.yfilter)
	|| ydk::is_set(pfccos1.yfilter)
	|| ydk::is_set(pfccos2.yfilter)
	|| ydk::is_set(pfccos3.yfilter)
	|| ydk::is_set(pfccos4.yfilter)
	|| ydk::is_set(pfccos5.yfilter)
	|| ydk::is_set(pfccos6.yfilter)
	|| ydk::is_set(pfccos7.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());
    if (pausethreshold.is_set || is_set(pausethreshold.yfilter)) leaf_name_data.push_back(pausethreshold.get_name_leafdata());
    if (resumethreshold.is_set || is_set(resumethreshold.yfilter)) leaf_name_data.push_back(resumethreshold.get_name_leafdata());
    if (pfccos0.is_set || is_set(pfccos0.yfilter)) leaf_name_data.push_back(pfccos0.get_name_leafdata());
    if (pfccos1.is_set || is_set(pfccos1.yfilter)) leaf_name_data.push_back(pfccos1.get_name_leafdata());
    if (pfccos2.is_set || is_set(pfccos2.yfilter)) leaf_name_data.push_back(pfccos2.get_name_leafdata());
    if (pfccos3.is_set || is_set(pfccos3.yfilter)) leaf_name_data.push_back(pfccos3.get_name_leafdata());
    if (pfccos4.is_set || is_set(pfccos4.yfilter)) leaf_name_data.push_back(pfccos4.get_name_leafdata());
    if (pfccos5.is_set || is_set(pfccos5.yfilter)) leaf_name_data.push_back(pfccos5.get_name_leafdata());
    if (pfccos6.is_set || is_set(pfccos6.yfilter)) leaf_name_data.push_back(pfccos6.get_name_leafdata());
    if (pfccos7.is_set || is_set(pfccos7.yfilter)) leaf_name_data.push_back(pfccos7.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferSize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold = value;
        pausethreshold.value_namespace = name_space;
        pausethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold = value;
        resumethreshold.value_namespace = name_space;
        resumethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0 = value;
        pfccos0.value_namespace = name_space;
        pfccos0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1 = value;
        pfccos1.value_namespace = name_space;
        pfccos1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2 = value;
        pfccos2.value_namespace = name_space;
        pfccos2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3 = value;
        pfccos3.value_namespace = name_space;
        pfccos3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4 = value;
        pfccos4.value_namespace = name_space;
        pfccos4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5 = value;
        pfccos5.value_namespace = name_space;
        pfccos5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6 = value;
        pfccos6.value_namespace = name_space;
        pfccos6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7 = value;
        pfccos7.value_namespace = name_space;
        pfccos7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferSize")
    {
        buffersize.yfilter = yfilter;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold.yfilter = yfilter;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold.yfilter = yfilter;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0.yfilter = yfilter;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1.yfilter = yfilter;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2.yfilter = yfilter;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3.yfilter = yfilter;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4.yfilter = yfilter;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5.yfilter = yfilter;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6.yfilter = yfilter;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferSize" || name == "pauseThreshold" || name == "resumeThreshold" || name == "pfcCos0" || name == "pfcCos1" || name == "pfcCos2" || name == "pfcCos3" || name == "pfcCos4" || name == "pfcCos5" || name == "pfcCos6" || name == "pfcCos7" || name == "receive" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::DppItems()
    :
    setqosgroup{YType::uint16, "setQosGroup"}
{

    yang_name = "dpp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::~DppItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_data() const
{
    if (is_presence_container) return true;
    return setqosgroup.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setqosgroup.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setqosgroup.is_set || is_set(setqosgroup.yfilter)) leaf_name_data.push_back(setqosgroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup = value;
        setqosgroup.value_namespace = name_space;
        setqosgroup.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setQosGroup")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::SetBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::~SetBWItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::SetRemBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setRemBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::~SetRemBWItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setRemBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::ShapeItems()
    :
    min{YType::uint64, "min"},
    minrateunit{YType::enumeration, "minRateUnit"},
    max{YType::uint64, "max"},
    maxrateunit{YType::enumeration, "maxRateUnit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "shape-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::~ShapeItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| minrateunit.is_set
	|| max.is_set
	|| maxrateunit.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(minrateunit.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(maxrateunit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (minrateunit.is_set || is_set(minrateunit.yfilter)) leaf_name_data.push_back(minrateunit.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (maxrateunit.is_set || is_set(maxrateunit.yfilter)) leaf_name_data.push_back(maxrateunit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit = value;
        minrateunit.value_namespace = name_space;
        minrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit = value;
        maxrateunit.value_namespace = name_space;
        maxrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "minRateUnit" || name == "max" || name == "maxRateUnit" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::PoliceItems()
    :
    cirrate{YType::uint64, "cirRate"},
    cirunit{YType::enumeration, "cirUnit"},
    bcrate{YType::uint64, "bcRate"},
    bcunit{YType::enumeration, "bcUnit"},
    pirrate{YType::uint64, "pirRate"},
    pirunit{YType::enumeration, "pirUnit"},
    berate{YType::uint64, "beRate"},
    beunit{YType::enumeration, "beUnit"},
    conformaction{YType::enumeration, "conformAction"},
    conformsetcostransmit{YType::uint8, "conformSetCosTransmit"},
    conformsetdscptransmit{YType::uint8, "conformSetDscpTransmit"},
    conformsetprectransmit{YType::enumeration, "conformSetPrecTransmit"},
    conformsetqosgrptransmit{YType::uint16, "conformSetQosGrpTransmit"},
    exceedaction{YType::enumeration, "exceedAction"},
    exceedsetcostransmit{YType::uint8, "exceedSetCosTransmit"},
    exceedsetdscptransmit{YType::uint8, "exceedSetDscpTransmit"},
    exceedsetprectransmit{YType::enumeration, "exceedSetPrecTransmit"},
    exceedsetqosgrptransmit{YType::uint16, "exceedSetQosGrpTransmit"},
    violateaction{YType::enumeration, "violateAction"},
    violatesetcostransmit{YType::uint8, "violateSetCosTransmit"},
    violatesetdscptransmit{YType::uint8, "violateSetDscpTransmit"},
    violatesetprectransmit{YType::enumeration, "violateSetPrecTransmit"},
    violatesetqosgrptransmit{YType::uint16, "violateSetQosGrpTransmit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "police-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::~PoliceItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_data() const
{
    if (is_presence_container) return true;
    return cirrate.is_set
	|| cirunit.is_set
	|| bcrate.is_set
	|| bcunit.is_set
	|| pirrate.is_set
	|| pirunit.is_set
	|| berate.is_set
	|| beunit.is_set
	|| conformaction.is_set
	|| conformsetcostransmit.is_set
	|| conformsetdscptransmit.is_set
	|| conformsetprectransmit.is_set
	|| conformsetqosgrptransmit.is_set
	|| exceedaction.is_set
	|| exceedsetcostransmit.is_set
	|| exceedsetdscptransmit.is_set
	|| exceedsetprectransmit.is_set
	|| exceedsetqosgrptransmit.is_set
	|| violateaction.is_set
	|| violatesetcostransmit.is_set
	|| violatesetdscptransmit.is_set
	|| violatesetprectransmit.is_set
	|| violatesetqosgrptransmit.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cirrate.yfilter)
	|| ydk::is_set(cirunit.yfilter)
	|| ydk::is_set(bcrate.yfilter)
	|| ydk::is_set(bcunit.yfilter)
	|| ydk::is_set(pirrate.yfilter)
	|| ydk::is_set(pirunit.yfilter)
	|| ydk::is_set(berate.yfilter)
	|| ydk::is_set(beunit.yfilter)
	|| ydk::is_set(conformaction.yfilter)
	|| ydk::is_set(conformsetcostransmit.yfilter)
	|| ydk::is_set(conformsetdscptransmit.yfilter)
	|| ydk::is_set(conformsetprectransmit.yfilter)
	|| ydk::is_set(conformsetqosgrptransmit.yfilter)
	|| ydk::is_set(exceedaction.yfilter)
	|| ydk::is_set(exceedsetcostransmit.yfilter)
	|| ydk::is_set(exceedsetdscptransmit.yfilter)
	|| ydk::is_set(exceedsetprectransmit.yfilter)
	|| ydk::is_set(exceedsetqosgrptransmit.yfilter)
	|| ydk::is_set(violateaction.yfilter)
	|| ydk::is_set(violatesetcostransmit.yfilter)
	|| ydk::is_set(violatesetdscptransmit.yfilter)
	|| ydk::is_set(violatesetprectransmit.yfilter)
	|| ydk::is_set(violatesetqosgrptransmit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cirrate.is_set || is_set(cirrate.yfilter)) leaf_name_data.push_back(cirrate.get_name_leafdata());
    if (cirunit.is_set || is_set(cirunit.yfilter)) leaf_name_data.push_back(cirunit.get_name_leafdata());
    if (bcrate.is_set || is_set(bcrate.yfilter)) leaf_name_data.push_back(bcrate.get_name_leafdata());
    if (bcunit.is_set || is_set(bcunit.yfilter)) leaf_name_data.push_back(bcunit.get_name_leafdata());
    if (pirrate.is_set || is_set(pirrate.yfilter)) leaf_name_data.push_back(pirrate.get_name_leafdata());
    if (pirunit.is_set || is_set(pirunit.yfilter)) leaf_name_data.push_back(pirunit.get_name_leafdata());
    if (berate.is_set || is_set(berate.yfilter)) leaf_name_data.push_back(berate.get_name_leafdata());
    if (beunit.is_set || is_set(beunit.yfilter)) leaf_name_data.push_back(beunit.get_name_leafdata());
    if (conformaction.is_set || is_set(conformaction.yfilter)) leaf_name_data.push_back(conformaction.get_name_leafdata());
    if (conformsetcostransmit.is_set || is_set(conformsetcostransmit.yfilter)) leaf_name_data.push_back(conformsetcostransmit.get_name_leafdata());
    if (conformsetdscptransmit.is_set || is_set(conformsetdscptransmit.yfilter)) leaf_name_data.push_back(conformsetdscptransmit.get_name_leafdata());
    if (conformsetprectransmit.is_set || is_set(conformsetprectransmit.yfilter)) leaf_name_data.push_back(conformsetprectransmit.get_name_leafdata());
    if (conformsetqosgrptransmit.is_set || is_set(conformsetqosgrptransmit.yfilter)) leaf_name_data.push_back(conformsetqosgrptransmit.get_name_leafdata());
    if (exceedaction.is_set || is_set(exceedaction.yfilter)) leaf_name_data.push_back(exceedaction.get_name_leafdata());
    if (exceedsetcostransmit.is_set || is_set(exceedsetcostransmit.yfilter)) leaf_name_data.push_back(exceedsetcostransmit.get_name_leafdata());
    if (exceedsetdscptransmit.is_set || is_set(exceedsetdscptransmit.yfilter)) leaf_name_data.push_back(exceedsetdscptransmit.get_name_leafdata());
    if (exceedsetprectransmit.is_set || is_set(exceedsetprectransmit.yfilter)) leaf_name_data.push_back(exceedsetprectransmit.get_name_leafdata());
    if (exceedsetqosgrptransmit.is_set || is_set(exceedsetqosgrptransmit.yfilter)) leaf_name_data.push_back(exceedsetqosgrptransmit.get_name_leafdata());
    if (violateaction.is_set || is_set(violateaction.yfilter)) leaf_name_data.push_back(violateaction.get_name_leafdata());
    if (violatesetcostransmit.is_set || is_set(violatesetcostransmit.yfilter)) leaf_name_data.push_back(violatesetcostransmit.get_name_leafdata());
    if (violatesetdscptransmit.is_set || is_set(violatesetdscptransmit.yfilter)) leaf_name_data.push_back(violatesetdscptransmit.get_name_leafdata());
    if (violatesetprectransmit.is_set || is_set(violatesetprectransmit.yfilter)) leaf_name_data.push_back(violatesetprectransmit.get_name_leafdata());
    if (violatesetqosgrptransmit.is_set || is_set(violatesetqosgrptransmit.yfilter)) leaf_name_data.push_back(violatesetqosgrptransmit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cirRate")
    {
        cirrate = value;
        cirrate.value_namespace = name_space;
        cirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cirUnit")
    {
        cirunit = value;
        cirunit.value_namespace = name_space;
        cirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcRate")
    {
        bcrate = value;
        bcrate.value_namespace = name_space;
        bcrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcUnit")
    {
        bcunit = value;
        bcunit.value_namespace = name_space;
        bcunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirRate")
    {
        pirrate = value;
        pirrate.value_namespace = name_space;
        pirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirUnit")
    {
        pirunit = value;
        pirunit.value_namespace = name_space;
        pirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beRate")
    {
        berate = value;
        berate.value_namespace = name_space;
        berate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beUnit")
    {
        beunit = value;
        beunit.value_namespace = name_space;
        beunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformAction")
    {
        conformaction = value;
        conformaction.value_namespace = name_space;
        conformaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit = value;
        conformsetcostransmit.value_namespace = name_space;
        conformsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit = value;
        conformsetdscptransmit.value_namespace = name_space;
        conformsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit = value;
        conformsetprectransmit.value_namespace = name_space;
        conformsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit = value;
        conformsetqosgrptransmit.value_namespace = name_space;
        conformsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedAction")
    {
        exceedaction = value;
        exceedaction.value_namespace = name_space;
        exceedaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit = value;
        exceedsetcostransmit.value_namespace = name_space;
        exceedsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit = value;
        exceedsetdscptransmit.value_namespace = name_space;
        exceedsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit = value;
        exceedsetprectransmit.value_namespace = name_space;
        exceedsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit = value;
        exceedsetqosgrptransmit.value_namespace = name_space;
        exceedsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateAction")
    {
        violateaction = value;
        violateaction.value_namespace = name_space;
        violateaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit = value;
        violatesetcostransmit.value_namespace = name_space;
        violatesetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit = value;
        violatesetdscptransmit.value_namespace = name_space;
        violatesetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit = value;
        violatesetprectransmit.value_namespace = name_space;
        violatesetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit = value;
        violatesetqosgrptransmit.value_namespace = name_space;
        violatesetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cirRate")
    {
        cirrate.yfilter = yfilter;
    }
    if(value_path == "cirUnit")
    {
        cirunit.yfilter = yfilter;
    }
    if(value_path == "bcRate")
    {
        bcrate.yfilter = yfilter;
    }
    if(value_path == "bcUnit")
    {
        bcunit.yfilter = yfilter;
    }
    if(value_path == "pirRate")
    {
        pirrate.yfilter = yfilter;
    }
    if(value_path == "pirUnit")
    {
        pirunit.yfilter = yfilter;
    }
    if(value_path == "beRate")
    {
        berate.yfilter = yfilter;
    }
    if(value_path == "beUnit")
    {
        beunit.yfilter = yfilter;
    }
    if(value_path == "conformAction")
    {
        conformaction.yfilter = yfilter;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedAction")
    {
        exceedaction.yfilter = yfilter;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "violateAction")
    {
        violateaction.yfilter = yfilter;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cirRate" || name == "cirUnit" || name == "bcRate" || name == "bcUnit" || name == "pirRate" || name == "pirUnit" || name == "beRate" || name == "beUnit" || name == "conformAction" || name == "conformSetCosTransmit" || name == "conformSetDscpTransmit" || name == "conformSetPrecTransmit" || name == "conformSetQosGrpTransmit" || name == "exceedAction" || name == "exceedSetCosTransmit" || name == "exceedSetDscpTransmit" || name == "exceedSetPrecTransmit" || name == "exceedSetQosGrpTransmit" || name == "violateAction" || name == "violateSetCosTransmit" || name == "violateSetDscpTransmit" || name == "violateSetPrecTransmit" || name == "violateSetQosGrpTransmit" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::PrioItems()
    :
    level{YType::uint8, "level"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "prio-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::~PrioItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::RandDetItems()
    :
    minthreshold{YType::uint32, "minThreshold"},
    minthresholdunit{YType::enumeration, "minThresholdUnit"},
    maxthreshold{YType::uint32, "maxThreshold"},
    maxthresholdunit{YType::enumeration, "maxThresholdUnit"},
    dropavail{YType::uint8, "dropAvail"},
    weight{YType::uint8, "weight"},
    capaverage{YType::boolean, "capAverage"},
    optimization{YType::uint8, "optimization"},
    ecn{YType::boolean, "ecn"}
{

    yang_name = "RandDet-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::~RandDetItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_data() const
{
    if (is_presence_container) return true;
    return minthreshold.is_set
	|| minthresholdunit.is_set
	|| maxthreshold.is_set
	|| maxthresholdunit.is_set
	|| dropavail.is_set
	|| weight.is_set
	|| capaverage.is_set
	|| optimization.is_set
	|| ecn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthreshold.yfilter)
	|| ydk::is_set(minthresholdunit.yfilter)
	|| ydk::is_set(maxthreshold.yfilter)
	|| ydk::is_set(maxthresholdunit.yfilter)
	|| ydk::is_set(dropavail.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(capaverage.yfilter)
	|| ydk::is_set(optimization.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDet-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthreshold.is_set || is_set(minthreshold.yfilter)) leaf_name_data.push_back(minthreshold.get_name_leafdata());
    if (minthresholdunit.is_set || is_set(minthresholdunit.yfilter)) leaf_name_data.push_back(minthresholdunit.get_name_leafdata());
    if (maxthreshold.is_set || is_set(maxthreshold.yfilter)) leaf_name_data.push_back(maxthreshold.get_name_leafdata());
    if (maxthresholdunit.is_set || is_set(maxthresholdunit.yfilter)) leaf_name_data.push_back(maxthresholdunit.get_name_leafdata());
    if (dropavail.is_set || is_set(dropavail.yfilter)) leaf_name_data.push_back(dropavail.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (capaverage.is_set || is_set(capaverage.yfilter)) leaf_name_data.push_back(capaverage.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThreshold")
    {
        minthreshold = value;
        minthreshold.value_namespace = name_space;
        minthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit = value;
        minthresholdunit.value_namespace = name_space;
        minthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold = value;
        maxthreshold.value_namespace = name_space;
        maxthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit = value;
        maxthresholdunit.value_namespace = name_space;
        maxthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvail")
    {
        dropavail = value;
        dropavail.value_namespace = name_space;
        dropavail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capAverage")
    {
        capaverage = value;
        capaverage.value_namespace = name_space;
        capaverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThreshold")
    {
        minthreshold.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit.yfilter = yfilter;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit.yfilter = yfilter;
    }
    if(value_path == "dropAvail")
    {
        dropavail.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "capAverage")
    {
        capaverage.yfilter = yfilter;
    }
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThreshold" || name == "minThresholdUnit" || name == "maxThreshold" || name == "maxThresholdUnit" || name == "dropAvail" || name == "weight" || name == "capAverage" || name == "optimization" || name == "ecn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::RandDetNonEcnItems()
    :
    minthresholdnonecn{YType::uint32, "minThresholdNonEcn"},
    minthresholdunitnonecn{YType::enumeration, "minThresholdUnitNonEcn"},
    maxthresholdnonecn{YType::uint32, "maxThresholdNonEcn"},
    maxthresholdunitnonecn{YType::enumeration, "maxThresholdUnitNonEcn"},
    dropavailnonecn{YType::uint8, "dropAvailNonEcn"}
{

    yang_name = "RandDetNonEcn-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::~RandDetNonEcnItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_data() const
{
    if (is_presence_container) return true;
    return minthresholdnonecn.is_set
	|| minthresholdunitnonecn.is_set
	|| maxthresholdnonecn.is_set
	|| maxthresholdunitnonecn.is_set
	|| dropavailnonecn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthresholdnonecn.yfilter)
	|| ydk::is_set(minthresholdunitnonecn.yfilter)
	|| ydk::is_set(maxthresholdnonecn.yfilter)
	|| ydk::is_set(maxthresholdunitnonecn.yfilter)
	|| ydk::is_set(dropavailnonecn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDetNonEcn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthresholdnonecn.is_set || is_set(minthresholdnonecn.yfilter)) leaf_name_data.push_back(minthresholdnonecn.get_name_leafdata());
    if (minthresholdunitnonecn.is_set || is_set(minthresholdunitnonecn.yfilter)) leaf_name_data.push_back(minthresholdunitnonecn.get_name_leafdata());
    if (maxthresholdnonecn.is_set || is_set(maxthresholdnonecn.yfilter)) leaf_name_data.push_back(maxthresholdnonecn.get_name_leafdata());
    if (maxthresholdunitnonecn.is_set || is_set(maxthresholdunitnonecn.yfilter)) leaf_name_data.push_back(maxthresholdunitnonecn.get_name_leafdata());
    if (dropavailnonecn.is_set || is_set(dropavailnonecn.yfilter)) leaf_name_data.push_back(dropavailnonecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn = value;
        minthresholdnonecn.value_namespace = name_space;
        minthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn = value;
        minthresholdunitnonecn.value_namespace = name_space;
        minthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn = value;
        maxthresholdnonecn.value_namespace = name_space;
        maxthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn = value;
        maxthresholdunitnonecn.value_namespace = name_space;
        maxthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn = value;
        dropavailnonecn.value_namespace = name_space;
        dropavailnonecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThresholdNonEcn" || name == "minThresholdUnitNonEcn" || name == "maxThresholdNonEcn" || name == "maxThresholdUnitNonEcn" || name == "dropAvailNonEcn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtipqosPolicyInstToPMapItems()
    :
    rtipqospolicyinsttopmap_list(this, {"tdn"})
{

    yang_name = "rtipqosPolicyInstToPMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::~RtipqosPolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_operation() const
{
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtipqosPolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtIpqosPolicyInstToPMap-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList>();
        ent_->parent = this;
        rtipqospolicyinsttopmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtipqospolicyinsttopmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtIpqosPolicyInstToPMap-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::RtIpqosPolicyInstToPMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtIpqosPolicyInstToPMap-list"; yang_parent_name = "rtipqosPolicyInstToPMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::~RtIpqosPolicyInstToPMapList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtIpqosPolicyInstToPMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::RtclassMapToPolicyMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtclassMapToPolicyMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::~RtclassMapToPolicyMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::CopyPMapItems()
    :
    lastfrom{YType::str, "lastFrom"},
    lastto{YType::str, "lastTo"}
{

    yang_name = "copyPMap-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::~CopyPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return lastfrom.is_set
	|| lastto.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastfrom.yfilter)
	|| ydk::is_set(lastto.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copyPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastfrom.is_set || is_set(lastfrom.yfilter)) leaf_name_data.push_back(lastfrom.get_name_leafdata());
    if (lastto.is_set || is_set(lastto.yfilter)) leaf_name_data.push_back(lastto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastFrom")
    {
        lastfrom = value;
        lastfrom.value_namespace = name_space;
        lastfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTo")
    {
        lastto = value;
        lastto.value_namespace = name_space;
        lastto.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastFrom")
    {
        lastfrom.yfilter = yfilter;
    }
    if(value_path == "lastTo")
    {
        lastto.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastFrom" || name == "lastTo")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::NwItems()
    :
    policy_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems>())
    , c_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CItems>())
    , p_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PItems>())
    , copypmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CopyPMapItems>())
{
    policy_items->parent = this;
    c_items->parent = this;
    p_items->parent = this;
    copypmap_items->parent = this;

    yang_name = "nw-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::~NwItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::has_data() const
{
    if (is_presence_container) return true;
    return (policy_items !=  nullptr && policy_items->has_data())
	|| (c_items !=  nullptr && c_items->has_data())
	|| (p_items !=  nullptr && p_items->has_data())
	|| (copypmap_items !=  nullptr && copypmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::has_operation() const
{
    return is_set(yfilter)
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (c_items !=  nullptr && c_items->has_operation())
	|| (p_items !=  nullptr && p_items->has_operation())
	|| (copypmap_items !=  nullptr && copypmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nw-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "c-items")
    {
        if(c_items == nullptr)
        {
            c_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CItems>();
        }
        return c_items;
    }

    if(child_yang_name == "p-items")
    {
        if(p_items == nullptr)
        {
            p_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PItems>();
        }
        return p_items;
    }

    if(child_yang_name == "copyPMap-items")
    {
        if(copypmap_items == nullptr)
        {
            copypmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CopyPMapItems>();
        }
        return copypmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    if(c_items != nullptr)
    {
        _children["c-items"] = c_items;
    }

    if(p_items != nullptr)
    {
        _children["p-items"] = p_items;
    }

    if(copypmap_items != nullptr)
    {
        _children["copyPMap-items"] = copypmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-items" || name == "c-items" || name == "p-items" || name == "copyPMap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::PolicyItems()
    :
    in_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems>())
    , out_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems>())
{
    in_items->parent = this;
    out_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "nw-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::~PolicyItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (in_items !=  nullptr && in_items->has_data())
	|| (out_items !=  nullptr && out_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (in_items !=  nullptr && in_items->has_operation())
	|| (out_items !=  nullptr && out_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-items")
    {
        if(in_items == nullptr)
        {
            in_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems>();
        }
        return in_items;
    }

    if(child_yang_name == "out-items")
    {
        if(out_items == nullptr)
        {
            out_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems>();
        }
        return out_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in_items != nullptr)
    {
        _children["in-items"] = in_items;
    }

    if(out_items != nullptr)
    {
        _children["out-items"] = out_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-items" || name == "out-items")
        return true;
    return false;
}


}
}

