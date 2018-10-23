
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_33.hpp"
#include "Cisco_NX_OS_device_34.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::TunnelifItems()
    :
    if_list(this, {"id"})
{

    yang_name = "tunnelif-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::TunnelifItems::~TunnelifItems()
{
}

bool System::IntfItems::TunnelifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::TunnelifItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::TunnelifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::TunnelifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::TunnelifItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::get_children() const
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

void System::IntfItems::TunnelifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::TunnelifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::TunnelifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::IfList()
    :
    id{YType::str, "id"},
    tunsrcaddr{YType::str, "tunSrcAddr"},
    tunsrcintf{YType::str, "tunSrcIntf"},
    tunsrcdirect{YType::enumeration, "tunSrcDirect"},
    tundestaddr{YType::str, "tunDestAddr"},
    tunmode{YType::enumeration, "tunMode"},
    tunvrf{YType::str, "tunVrf"},
    tunmtu{YType::uint32, "tunMtu"},
    tunpmtud{YType::enumeration, "tunPMTUD"},
    tunminpmtu{YType::uint32, "tunminPMTU"},
    tunpmtuage{YType::uint32, "tunPMTUage"},
    tunbw{YType::uint32, "tunBW"},
    tunttl{YType::uint32, "tunTTL"},
    snmptrapst{YType::enumeration, "snmpTrapSt"},
    tunoperst{YType::enumeration, "tunOperSt"},
    tunoperstqual{YType::enumeration, "tunOperStQual"},
    laststatechgdts{YType::str, "lastStateChgdTs"},
    tundelinprog{YType::boolean, "tunDelInProg"},
    tunintfoptions{YType::enumeration, "tunIntfOptions"},
    tuniod{YType::uint32, "tunIod"},
    tunifindex{YType::uint32, "tunIfIndex"},
    tunifpmtu{YType::uint32, "tunIfPmtu"},
    lastctrrstchgdts{YType::str, "lastCtrRstChgdTs"},
    tunrxpackets{YType::uint64, "tunRxPackets"},
    tunrxbytes{YType::uint64, "tunRxBytes"},
    tuntxpackets{YType::uint64, "tunTxPackets"},
    tuntxbytes{YType::uint64, "tunTxBytes"},
    tunsrcip{YType::str, "tunSrcIP"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::VrfItems>())
    , rtpseudoif_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems>())
{
    vrf_items->parent = this;
    rtpseudoif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "tunnelif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::TunnelifItems::IfList::~IfList()
{
}

bool System::IntfItems::TunnelifItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| tunsrcaddr.is_set
	|| tunsrcintf.is_set
	|| tunsrcdirect.is_set
	|| tundestaddr.is_set
	|| tunmode.is_set
	|| tunvrf.is_set
	|| tunmtu.is_set
	|| tunpmtud.is_set
	|| tunminpmtu.is_set
	|| tunpmtuage.is_set
	|| tunbw.is_set
	|| tunttl.is_set
	|| snmptrapst.is_set
	|| tunoperst.is_set
	|| tunoperstqual.is_set
	|| laststatechgdts.is_set
	|| tundelinprog.is_set
	|| tunintfoptions.is_set
	|| tuniod.is_set
	|| tunifindex.is_set
	|| tunifpmtu.is_set
	|| lastctrrstchgdts.is_set
	|| tunrxpackets.is_set
	|| tunrxbytes.is_set
	|| tuntxpackets.is_set
	|| tuntxbytes.is_set
	|| tunsrcip.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::TunnelifItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(tunsrcaddr.yfilter)
	|| ydk::is_set(tunsrcintf.yfilter)
	|| ydk::is_set(tunsrcdirect.yfilter)
	|| ydk::is_set(tundestaddr.yfilter)
	|| ydk::is_set(tunmode.yfilter)
	|| ydk::is_set(tunvrf.yfilter)
	|| ydk::is_set(tunmtu.yfilter)
	|| ydk::is_set(tunpmtud.yfilter)
	|| ydk::is_set(tunminpmtu.yfilter)
	|| ydk::is_set(tunpmtuage.yfilter)
	|| ydk::is_set(tunbw.yfilter)
	|| ydk::is_set(tunttl.yfilter)
	|| ydk::is_set(snmptrapst.yfilter)
	|| ydk::is_set(tunoperst.yfilter)
	|| ydk::is_set(tunoperstqual.yfilter)
	|| ydk::is_set(laststatechgdts.yfilter)
	|| ydk::is_set(tundelinprog.yfilter)
	|| ydk::is_set(tunintfoptions.yfilter)
	|| ydk::is_set(tuniod.yfilter)
	|| ydk::is_set(tunifindex.yfilter)
	|| ydk::is_set(tunifpmtu.yfilter)
	|| ydk::is_set(lastctrrstchgdts.yfilter)
	|| ydk::is_set(tunrxpackets.yfilter)
	|| ydk::is_set(tunrxbytes.yfilter)
	|| ydk::is_set(tuntxpackets.yfilter)
	|| ydk::is_set(tuntxbytes.yfilter)
	|| ydk::is_set(tunsrcip.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::TunnelifItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/tunnelif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::TunnelifItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (tunsrcaddr.is_set || is_set(tunsrcaddr.yfilter)) leaf_name_data.push_back(tunsrcaddr.get_name_leafdata());
    if (tunsrcintf.is_set || is_set(tunsrcintf.yfilter)) leaf_name_data.push_back(tunsrcintf.get_name_leafdata());
    if (tunsrcdirect.is_set || is_set(tunsrcdirect.yfilter)) leaf_name_data.push_back(tunsrcdirect.get_name_leafdata());
    if (tundestaddr.is_set || is_set(tundestaddr.yfilter)) leaf_name_data.push_back(tundestaddr.get_name_leafdata());
    if (tunmode.is_set || is_set(tunmode.yfilter)) leaf_name_data.push_back(tunmode.get_name_leafdata());
    if (tunvrf.is_set || is_set(tunvrf.yfilter)) leaf_name_data.push_back(tunvrf.get_name_leafdata());
    if (tunmtu.is_set || is_set(tunmtu.yfilter)) leaf_name_data.push_back(tunmtu.get_name_leafdata());
    if (tunpmtud.is_set || is_set(tunpmtud.yfilter)) leaf_name_data.push_back(tunpmtud.get_name_leafdata());
    if (tunminpmtu.is_set || is_set(tunminpmtu.yfilter)) leaf_name_data.push_back(tunminpmtu.get_name_leafdata());
    if (tunpmtuage.is_set || is_set(tunpmtuage.yfilter)) leaf_name_data.push_back(tunpmtuage.get_name_leafdata());
    if (tunbw.is_set || is_set(tunbw.yfilter)) leaf_name_data.push_back(tunbw.get_name_leafdata());
    if (tunttl.is_set || is_set(tunttl.yfilter)) leaf_name_data.push_back(tunttl.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());
    if (tunoperst.is_set || is_set(tunoperst.yfilter)) leaf_name_data.push_back(tunoperst.get_name_leafdata());
    if (tunoperstqual.is_set || is_set(tunoperstqual.yfilter)) leaf_name_data.push_back(tunoperstqual.get_name_leafdata());
    if (laststatechgdts.is_set || is_set(laststatechgdts.yfilter)) leaf_name_data.push_back(laststatechgdts.get_name_leafdata());
    if (tundelinprog.is_set || is_set(tundelinprog.yfilter)) leaf_name_data.push_back(tundelinprog.get_name_leafdata());
    if (tunintfoptions.is_set || is_set(tunintfoptions.yfilter)) leaf_name_data.push_back(tunintfoptions.get_name_leafdata());
    if (tuniod.is_set || is_set(tuniod.yfilter)) leaf_name_data.push_back(tuniod.get_name_leafdata());
    if (tunifindex.is_set || is_set(tunifindex.yfilter)) leaf_name_data.push_back(tunifindex.get_name_leafdata());
    if (tunifpmtu.is_set || is_set(tunifpmtu.yfilter)) leaf_name_data.push_back(tunifpmtu.get_name_leafdata());
    if (lastctrrstchgdts.is_set || is_set(lastctrrstchgdts.yfilter)) leaf_name_data.push_back(lastctrrstchgdts.get_name_leafdata());
    if (tunrxpackets.is_set || is_set(tunrxpackets.yfilter)) leaf_name_data.push_back(tunrxpackets.get_name_leafdata());
    if (tunrxbytes.is_set || is_set(tunrxbytes.yfilter)) leaf_name_data.push_back(tunrxbytes.get_name_leafdata());
    if (tuntxpackets.is_set || is_set(tuntxpackets.yfilter)) leaf_name_data.push_back(tuntxpackets.get_name_leafdata());
    if (tuntxbytes.is_set || is_set(tuntxbytes.yfilter)) leaf_name_data.push_back(tuntxbytes.get_name_leafdata());
    if (tunsrcip.is_set || is_set(tunsrcip.yfilter)) leaf_name_data.push_back(tunsrcip.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
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

void System::IntfItems::TunnelifItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcAddr")
    {
        tunsrcaddr = value;
        tunsrcaddr.value_namespace = name_space;
        tunsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcIntf")
    {
        tunsrcintf = value;
        tunsrcintf.value_namespace = name_space;
        tunsrcintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcDirect")
    {
        tunsrcdirect = value;
        tunsrcdirect.value_namespace = name_space;
        tunsrcdirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunDestAddr")
    {
        tundestaddr = value;
        tundestaddr.value_namespace = name_space;
        tundestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunMode")
    {
        tunmode = value;
        tunmode.value_namespace = name_space;
        tunmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunVrf")
    {
        tunvrf = value;
        tunvrf.value_namespace = name_space;
        tunvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunMtu")
    {
        tunmtu = value;
        tunmtu.value_namespace = name_space;
        tunmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunPMTUD")
    {
        tunpmtud = value;
        tunpmtud.value_namespace = name_space;
        tunpmtud.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunminPMTU")
    {
        tunminpmtu = value;
        tunminpmtu.value_namespace = name_space;
        tunminpmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunPMTUage")
    {
        tunpmtuage = value;
        tunpmtuage.value_namespace = name_space;
        tunpmtuage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunBW")
    {
        tunbw = value;
        tunbw.value_namespace = name_space;
        tunbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunTTL")
    {
        tunttl = value;
        tunttl.value_namespace = name_space;
        tunttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst = value;
        snmptrapst.value_namespace = name_space;
        snmptrapst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunOperSt")
    {
        tunoperst = value;
        tunoperst.value_namespace = name_space;
        tunoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunOperStQual")
    {
        tunoperstqual = value;
        tunoperstqual.value_namespace = name_space;
        tunoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStateChgdTs")
    {
        laststatechgdts = value;
        laststatechgdts.value_namespace = name_space;
        laststatechgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunDelInProg")
    {
        tundelinprog = value;
        tundelinprog.value_namespace = name_space;
        tundelinprog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIntfOptions")
    {
        tunintfoptions = value;
        tunintfoptions.value_namespace = name_space;
        tunintfoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIod")
    {
        tuniod = value;
        tuniod.value_namespace = name_space;
        tuniod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIfIndex")
    {
        tunifindex = value;
        tunifindex.value_namespace = name_space;
        tunifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIfPmtu")
    {
        tunifpmtu = value;
        tunifpmtu.value_namespace = name_space;
        tunifpmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastCtrRstChgdTs")
    {
        lastctrrstchgdts = value;
        lastctrrstchgdts.value_namespace = name_space;
        lastctrrstchgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunRxPackets")
    {
        tunrxpackets = value;
        tunrxpackets.value_namespace = name_space;
        tunrxpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunRxBytes")
    {
        tunrxbytes = value;
        tunrxbytes.value_namespace = name_space;
        tunrxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunTxPackets")
    {
        tuntxpackets = value;
        tuntxpackets.value_namespace = name_space;
        tuntxpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunTxBytes")
    {
        tuntxbytes = value;
        tuntxbytes.value_namespace = name_space;
        tuntxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcIP")
    {
        tunsrcip = value;
        tunsrcip.value_namespace = name_space;
        tunsrcip.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::TunnelifItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "tunSrcAddr")
    {
        tunsrcaddr.yfilter = yfilter;
    }
    if(value_path == "tunSrcIntf")
    {
        tunsrcintf.yfilter = yfilter;
    }
    if(value_path == "tunSrcDirect")
    {
        tunsrcdirect.yfilter = yfilter;
    }
    if(value_path == "tunDestAddr")
    {
        tundestaddr.yfilter = yfilter;
    }
    if(value_path == "tunMode")
    {
        tunmode.yfilter = yfilter;
    }
    if(value_path == "tunVrf")
    {
        tunvrf.yfilter = yfilter;
    }
    if(value_path == "tunMtu")
    {
        tunmtu.yfilter = yfilter;
    }
    if(value_path == "tunPMTUD")
    {
        tunpmtud.yfilter = yfilter;
    }
    if(value_path == "tunminPMTU")
    {
        tunminpmtu.yfilter = yfilter;
    }
    if(value_path == "tunPMTUage")
    {
        tunpmtuage.yfilter = yfilter;
    }
    if(value_path == "tunBW")
    {
        tunbw.yfilter = yfilter;
    }
    if(value_path == "tunTTL")
    {
        tunttl.yfilter = yfilter;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst.yfilter = yfilter;
    }
    if(value_path == "tunOperSt")
    {
        tunoperst.yfilter = yfilter;
    }
    if(value_path == "tunOperStQual")
    {
        tunoperstqual.yfilter = yfilter;
    }
    if(value_path == "lastStateChgdTs")
    {
        laststatechgdts.yfilter = yfilter;
    }
    if(value_path == "tunDelInProg")
    {
        tundelinprog.yfilter = yfilter;
    }
    if(value_path == "tunIntfOptions")
    {
        tunintfoptions.yfilter = yfilter;
    }
    if(value_path == "tunIod")
    {
        tuniod.yfilter = yfilter;
    }
    if(value_path == "tunIfIndex")
    {
        tunifindex.yfilter = yfilter;
    }
    if(value_path == "tunIfPmtu")
    {
        tunifpmtu.yfilter = yfilter;
    }
    if(value_path == "lastCtrRstChgdTs")
    {
        lastctrrstchgdts.yfilter = yfilter;
    }
    if(value_path == "tunRxPackets")
    {
        tunrxpackets.yfilter = yfilter;
    }
    if(value_path == "tunRxBytes")
    {
        tunrxbytes.yfilter = yfilter;
    }
    if(value_path == "tunTxPackets")
    {
        tuntxpackets.yfilter = yfilter;
    }
    if(value_path == "tunTxBytes")
    {
        tuntxbytes.yfilter = yfilter;
    }
    if(value_path == "tunSrcIP")
    {
        tunsrcip.yfilter = yfilter;
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

bool System::IntfItems::TunnelifItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "rtpseudoIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "tunSrcAddr" || name == "tunSrcIntf" || name == "tunSrcDirect" || name == "tunDestAddr" || name == "tunMode" || name == "tunVrf" || name == "tunMtu" || name == "tunPMTUD" || name == "tunminPMTU" || name == "tunPMTUage" || name == "tunBW" || name == "tunTTL" || name == "snmpTrapSt" || name == "tunOperSt" || name == "tunOperStQual" || name == "lastStateChgdTs" || name == "tunDelInProg" || name == "tunIntfOptions" || name == "tunIod" || name == "tunIfIndex" || name == "tunIfPmtu" || name == "lastCtrRstChgdTs" || name == "tunRxPackets" || name == "tunRxBytes" || name == "tunTxPackets" || name == "tunTxBytes" || name == "tunSrcIP" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::TunnelifItems::IfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::TunnelifItems::IfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ipv4Items::Ipv4Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::Ipv4Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "ipv4-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::~Ipv4Items()
{
}

bool System::Ipv4Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Ipv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Ipv4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Ipv4Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::Ipv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Ipv4Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Ipv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Ipv4Items::InstItems::InstItems()
    :
    sourceroute{YType::enumeration, "sourceRoute"},
    accesslistmatchlocal{YType::enumeration, "accessListMatchLocal"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dom_items(std::make_shared<System::Ipv4Items::InstItems::DomItems>())
    , client_items(std::make_shared<System::Ipv4Items::InstItems::ClientItems>())
    , iploadsharing_items(std::make_shared<System::Ipv4Items::InstItems::IploadsharingItems>())
    , loadstat_items(std::make_shared<System::Ipv4Items::InstItems::LoadstatItems>())
    , iptrafficstat_items(std::make_shared<System::Ipv4Items::InstItems::IptrafficstatItems>())
    , iptrafficerrstat_items(std::make_shared<System::Ipv4Items::InstItems::IptrafficerrstatItems>())
    , icmptrafficstat_items(std::make_shared<System::Ipv4Items::InstItems::IcmptrafficstatItems>())
    , rfc4293trafficstat_items(std::make_shared<System::Ipv4Items::InstItems::Rfc4293trafficstatItems>())
{
    dom_items->parent = this;
    client_items->parent = this;
    iploadsharing_items->parent = this;
    loadstat_items->parent = this;
    iptrafficstat_items->parent = this;
    iptrafficerrstat_items->parent = this;
    icmptrafficstat_items->parent = this;
    rfc4293trafficstat_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "ipv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::~InstItems()
{
}

bool System::Ipv4Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return sourceroute.is_set
	|| accesslistmatchlocal.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (client_items !=  nullptr && client_items->has_data())
	|| (iploadsharing_items !=  nullptr && iploadsharing_items->has_data())
	|| (loadstat_items !=  nullptr && loadstat_items->has_data())
	|| (iptrafficstat_items !=  nullptr && iptrafficstat_items->has_data())
	|| (iptrafficerrstat_items !=  nullptr && iptrafficerrstat_items->has_data())
	|| (icmptrafficstat_items !=  nullptr && icmptrafficstat_items->has_data())
	|| (rfc4293trafficstat_items !=  nullptr && rfc4293trafficstat_items->has_data());
}

bool System::Ipv4Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourceroute.yfilter)
	|| ydk::is_set(accesslistmatchlocal.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (iploadsharing_items !=  nullptr && iploadsharing_items->has_operation())
	|| (loadstat_items !=  nullptr && loadstat_items->has_operation())
	|| (iptrafficstat_items !=  nullptr && iptrafficstat_items->has_operation())
	|| (iptrafficerrstat_items !=  nullptr && iptrafficerrstat_items->has_operation())
	|| (icmptrafficstat_items !=  nullptr && icmptrafficstat_items->has_operation())
	|| (rfc4293trafficstat_items !=  nullptr && rfc4293trafficstat_items->has_operation());
}

std::string System::Ipv4Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourceroute.is_set || is_set(sourceroute.yfilter)) leaf_name_data.push_back(sourceroute.get_name_leafdata());
    if (accesslistmatchlocal.is_set || is_set(accesslistmatchlocal.yfilter)) leaf_name_data.push_back(accesslistmatchlocal.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Ipv4Items::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::Ipv4Items::InstItems::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "iploadsharing-items")
    {
        if(iploadsharing_items == nullptr)
        {
            iploadsharing_items = std::make_shared<System::Ipv4Items::InstItems::IploadsharingItems>();
        }
        return iploadsharing_items;
    }

    if(child_yang_name == "loadstat-items")
    {
        if(loadstat_items == nullptr)
        {
            loadstat_items = std::make_shared<System::Ipv4Items::InstItems::LoadstatItems>();
        }
        return loadstat_items;
    }

    if(child_yang_name == "iptrafficstat-items")
    {
        if(iptrafficstat_items == nullptr)
        {
            iptrafficstat_items = std::make_shared<System::Ipv4Items::InstItems::IptrafficstatItems>();
        }
        return iptrafficstat_items;
    }

    if(child_yang_name == "iptrafficerrstat-items")
    {
        if(iptrafficerrstat_items == nullptr)
        {
            iptrafficerrstat_items = std::make_shared<System::Ipv4Items::InstItems::IptrafficerrstatItems>();
        }
        return iptrafficerrstat_items;
    }

    if(child_yang_name == "icmptrafficstat-items")
    {
        if(icmptrafficstat_items == nullptr)
        {
            icmptrafficstat_items = std::make_shared<System::Ipv4Items::InstItems::IcmptrafficstatItems>();
        }
        return icmptrafficstat_items;
    }

    if(child_yang_name == "rfc4293trafficstat-items")
    {
        if(rfc4293trafficstat_items == nullptr)
        {
            rfc4293trafficstat_items = std::make_shared<System::Ipv4Items::InstItems::Rfc4293trafficstatItems>();
        }
        return rfc4293trafficstat_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(client_items != nullptr)
    {
        _children["client-items"] = client_items;
    }

    if(iploadsharing_items != nullptr)
    {
        _children["iploadsharing-items"] = iploadsharing_items;
    }

    if(loadstat_items != nullptr)
    {
        _children["loadstat-items"] = loadstat_items;
    }

    if(iptrafficstat_items != nullptr)
    {
        _children["iptrafficstat-items"] = iptrafficstat_items;
    }

    if(iptrafficerrstat_items != nullptr)
    {
        _children["iptrafficerrstat-items"] = iptrafficerrstat_items;
    }

    if(icmptrafficstat_items != nullptr)
    {
        _children["icmptrafficstat-items"] = icmptrafficstat_items;
    }

    if(rfc4293trafficstat_items != nullptr)
    {
        _children["rfc4293trafficstat-items"] = rfc4293trafficstat_items;
    }

    return _children;
}

void System::Ipv4Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourceRoute")
    {
        sourceroute = value;
        sourceroute.value_namespace = name_space;
        sourceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessListMatchLocal")
    {
        accesslistmatchlocal = value;
        accesslistmatchlocal.value_namespace = name_space;
        accesslistmatchlocal.value_namespace_prefix = name_space_prefix;
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

void System::Ipv4Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourceRoute")
    {
        sourceroute.yfilter = yfilter;
    }
    if(value_path == "accessListMatchLocal")
    {
        accesslistmatchlocal.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
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

bool System::Ipv4Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "client-items" || name == "iploadsharing-items" || name == "loadstat-items" || name == "iptrafficstat-items" || name == "iptrafficerrstat-items" || name == "icmptrafficstat-items" || name == "rfc4293trafficstat-items" || name == "sourceRoute" || name == "accessListMatchLocal" || name == "loggingLevel" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::DomItems::~DomItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    autodiscard{YType::enumeration, "autoDiscard"},
    ipicmperrorssrcintf{YType::str, "ipIcmpErrorsSrcIntf"}
        ,
    rtstaticbfd_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems>())
    , if_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems>())
    , pstat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::PstatItems>())
    , rt_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems>())
    , routestat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems>())
{
    rtstaticbfd_items->parent = this;
    if_items->parent = this;
    pstat_items->parent = this;
    rt_items->parent = this;
    routestat_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::DomItems::DomList::~DomList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| autodiscard.is_set
	|| ipicmperrorssrcintf.is_set
	|| (rtstaticbfd_items !=  nullptr && rtstaticbfd_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (pstat_items !=  nullptr && pstat_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (routestat_items !=  nullptr && routestat_items->has_data());
}

bool System::Ipv4Items::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(autodiscard.yfilter)
	|| ydk::is_set(ipicmperrorssrcintf.yfilter)
	|| (rtstaticbfd_items !=  nullptr && rtstaticbfd_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (pstat_items !=  nullptr && pstat_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (routestat_items !=  nullptr && routestat_items->has_operation());
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (autodiscard.is_set || is_set(autodiscard.yfilter)) leaf_name_data.push_back(autodiscard.get_name_leafdata());
    if (ipicmperrorssrcintf.is_set || is_set(ipicmperrorssrcintf.yfilter)) leaf_name_data.push_back(ipicmperrorssrcintf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtstaticbfd-items")
    {
        if(rtstaticbfd_items == nullptr)
        {
            rtstaticbfd_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems>();
        }
        return rtstaticbfd_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "pstat-items")
    {
        if(pstat_items == nullptr)
        {
            pstat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::PstatItems>();
        }
        return pstat_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "routestat-items")
    {
        if(routestat_items == nullptr)
        {
            routestat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems>();
        }
        return routestat_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtstaticbfd_items != nullptr)
    {
        _children["rtstaticbfd-items"] = rtstaticbfd_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(pstat_items != nullptr)
    {
        _children["pstat-items"] = pstat_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    if(routestat_items != nullptr)
    {
        _children["routestat-items"] = routestat_items;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoDiscard")
    {
        autodiscard = value;
        autodiscard.value_namespace = name_space;
        autodiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIcmpErrorsSrcIntf")
    {
        ipicmperrorssrcintf = value;
        ipicmperrorssrcintf.value_namespace = name_space;
        ipicmperrorssrcintf.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "autoDiscard")
    {
        autodiscard.yfilter = yfilter;
    }
    if(value_path == "ipIcmpErrorsSrcIntf")
    {
        ipicmperrorssrcintf.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtstaticbfd-items" || name == "if-items" || name == "pstat-items" || name == "rt-items" || name == "routestat-items" || name == "name" || name == "autoDiscard" || name == "ipIcmpErrorsSrcIntf")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtstaticbfdItems()
    :
    rtstaticbfd_list(this, {"intf", "nexthop"})
{

    yang_name = "rtstaticbfd-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::~RtstaticbfdItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtstaticbfd_list.len(); index++)
    {
        if(rtstaticbfd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_operation() const
{
    for (std::size_t index=0; index<rtstaticbfd_list.len(); index++)
    {
        if(rtstaticbfd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtstaticbfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtStaticBfd-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList>();
        ent_->parent = this;
        rtstaticbfd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtstaticbfd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtStaticBfd-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::RtStaticBfdList()
    :
    intf{YType::str, "intf"},
    nexthop{YType::str, "nexthop"}
{

    yang_name = "RtStaticBfd-list"; yang_parent_name = "rtstaticbfd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::~RtStaticBfdList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| nexthop.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(nexthop.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtStaticBfd-list";
    ADD_KEY_TOKEN(intf, "intf");
    ADD_KEY_TOKEN(nexthop, "nexthop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "nexthop")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    directedbroadcast{YType::enumeration, "directedBroadcast"},
    acl{YType::str, "acl"},
    forward{YType::enumeration, "forward"},
    unnumbered{YType::str, "unnumbered"},
    urpf{YType::enumeration, "urpf"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mode{YType::str, "mode"},
    donorif{YType::str, "donorIf"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
        ,
    addr_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems>())
    , dampening_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems>())
    , dampeningdata_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems>())
    , trafficstat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems>())
    , stat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems>())
    , rpol_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems>())
    , rtvrfmbr_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    addr_items->parent = this;
    dampening_items->parent = this;
    dampeningdata_items->parent = this;
    trafficstat_items->parent = this;
    stat_items->parent = this;
    rpol_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| directedbroadcast.is_set
	|| acl.is_set
	|| forward.is_set
	|| unnumbered.is_set
	|| urpf.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mode.is_set
	|| donorif.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (dampening_items !=  nullptr && dampening_items->has_data())
	|| (dampeningdata_items !=  nullptr && dampeningdata_items->has_data())
	|| (trafficstat_items !=  nullptr && trafficstat_items->has_data())
	|| (stat_items !=  nullptr && stat_items->has_data())
	|| (rpol_items !=  nullptr && rpol_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(directedbroadcast.yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(forward.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(urpf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(donorif.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (dampening_items !=  nullptr && dampening_items->has_operation())
	|| (dampeningdata_items !=  nullptr && dampeningdata_items->has_operation())
	|| (trafficstat_items !=  nullptr && trafficstat_items->has_operation())
	|| (stat_items !=  nullptr && stat_items->has_operation())
	|| (rpol_items !=  nullptr && rpol_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (directedbroadcast.is_set || is_set(directedbroadcast.yfilter)) leaf_name_data.push_back(directedbroadcast.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (forward.is_set || is_set(forward.yfilter)) leaf_name_data.push_back(forward.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (urpf.is_set || is_set(urpf.yfilter)) leaf_name_data.push_back(urpf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (donorif.is_set || is_set(donorif.yfilter)) leaf_name_data.push_back(donorif.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "dampening-items")
    {
        if(dampening_items == nullptr)
        {
            dampening_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems>();
        }
        return dampening_items;
    }

    if(child_yang_name == "dampeningdata-items")
    {
        if(dampeningdata_items == nullptr)
        {
            dampeningdata_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems>();
        }
        return dampeningdata_items;
    }

    if(child_yang_name == "trafficstat-items")
    {
        if(trafficstat_items == nullptr)
        {
            trafficstat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems>();
        }
        return trafficstat_items;
    }

    if(child_yang_name == "stat-items")
    {
        if(stat_items == nullptr)
        {
            stat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems>();
        }
        return stat_items;
    }

    if(child_yang_name == "rpol-items")
    {
        if(rpol_items == nullptr)
        {
            rpol_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems>();
        }
        return rpol_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    if(dampening_items != nullptr)
    {
        _children["dampening-items"] = dampening_items;
    }

    if(dampeningdata_items != nullptr)
    {
        _children["dampeningdata-items"] = dampeningdata_items;
    }

    if(trafficstat_items != nullptr)
    {
        _children["trafficstat-items"] = trafficstat_items;
    }

    if(stat_items != nullptr)
    {
        _children["stat-items"] = stat_items;
    }

    if(rpol_items != nullptr)
    {
        _children["rpol-items"] = rpol_items;
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directedBroadcast")
    {
        directedbroadcast = value;
        directedbroadcast.value_namespace = name_space;
        directedbroadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward")
    {
        forward = value;
        forward.value_namespace = name_space;
        forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urpf")
    {
        urpf = value;
        urpf.value_namespace = name_space;
        urpf.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "donorIf")
    {
        donorif = value;
        donorif.value_namespace = name_space;
        donorif.value_namespace_prefix = name_space_prefix;
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
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "directedBroadcast")
    {
        directedbroadcast.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "forward")
    {
        forward.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "urpf")
    {
        urpf.yfilter = yfilter;
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "donorIf")
    {
        donorif.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "dampening-items" || name == "dampeningdata-items" || name == "trafficstat-items" || name == "stat-items" || name == "rpol-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "directedBroadcast" || name == "acl" || name == "forward" || name == "unnumbered" || name == "urpf" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "mode" || name == "donorIf" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrItems()
    :
    addr_list(this, {"addr"})
{

    yang_name = "addr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::~AddrItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Addr-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList>();
        ent_->parent = this;
        addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Addr-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::AddrList()
    :
    addr{YType::str, "addr"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    vpcpeer{YType::str, "vpcPeer"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
{

    yang_name = "Addr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::~AddrList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| type.is_set
	|| ctrl.is_set
	|| vpcpeer.is_set
	|| pref.is_set
	|| tag.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(vpcpeer.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Addr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (vpcpeer.is_set || is_set(vpcpeer.yfilter)) leaf_name_data.push_back(vpcpeer.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vpcPeer")
    {
        vpcpeer = value;
        vpcpeer.value_namespace = name_space;
        vpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
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
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "vpcPeer")
    {
        vpcpeer.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "type" || name == "ctrl" || name == "vpcPeer" || name == "pref" || name == "tag" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::DampeningItems()
    :
    halflifeperiod{YType::uint64, "halfLifePeriod"},
    reusethreshold{YType::uint64, "reuseThreshold"},
    suppressthreshold{YType::uint64, "suppressThreshold"},
    maxsuppress{YType::uint64, "maxSuppress"},
    restartenabled{YType::enumeration, "restartEnabled"},
    restartpenalty{YType::uint64, "restartPenalty"}
{

    yang_name = "dampening-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::~DampeningItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::has_data() const
{
    if (is_presence_container) return true;
    return halflifeperiod.is_set
	|| reusethreshold.is_set
	|| suppressthreshold.is_set
	|| maxsuppress.is_set
	|| restartenabled.is_set
	|| restartpenalty.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(halflifeperiod.yfilter)
	|| ydk::is_set(reusethreshold.yfilter)
	|| ydk::is_set(suppressthreshold.yfilter)
	|| ydk::is_set(maxsuppress.yfilter)
	|| ydk::is_set(restartenabled.yfilter)
	|| ydk::is_set(restartpenalty.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (halflifeperiod.is_set || is_set(halflifeperiod.yfilter)) leaf_name_data.push_back(halflifeperiod.get_name_leafdata());
    if (reusethreshold.is_set || is_set(reusethreshold.yfilter)) leaf_name_data.push_back(reusethreshold.get_name_leafdata());
    if (suppressthreshold.is_set || is_set(suppressthreshold.yfilter)) leaf_name_data.push_back(suppressthreshold.get_name_leafdata());
    if (maxsuppress.is_set || is_set(maxsuppress.yfilter)) leaf_name_data.push_back(maxsuppress.get_name_leafdata());
    if (restartenabled.is_set || is_set(restartenabled.yfilter)) leaf_name_data.push_back(restartenabled.get_name_leafdata());
    if (restartpenalty.is_set || is_set(restartpenalty.yfilter)) leaf_name_data.push_back(restartpenalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod = value;
        halflifeperiod.value_namespace = name_space;
        halflifeperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold = value;
        reusethreshold.value_namespace = name_space;
        reusethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold = value;
        suppressthreshold.value_namespace = name_space;
        suppressthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress = value;
        maxsuppress.value_namespace = name_space;
        maxsuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartEnabled")
    {
        restartenabled = value;
        restartenabled.value_namespace = name_space;
        restartenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty = value;
        restartpenalty.value_namespace = name_space;
        restartpenalty.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod.yfilter = yfilter;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold.yfilter = yfilter;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold.yfilter = yfilter;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress.yfilter = yfilter;
    }
    if(value_path == "restartEnabled")
    {
        restartenabled.yfilter = yfilter;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "halfLifePeriod" || name == "reuseThreshold" || name == "suppressThreshold" || name == "maxSuppress" || name == "restartEnabled" || name == "restartPenalty")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::DampeningdataItems()
    :
    flapcount{YType::uint64, "flapCount"},
    penalty{YType::uint64, "penalty"},
    suppressed{YType::uint64, "suppressed"},
    reusetime{YType::uint64, "reuseTime"},
    halflifeperiod{YType::uint64, "halfLifePeriod"},
    reusethreshold{YType::uint64, "reuseThreshold"},
    suppressthreshold{YType::uint64, "suppressThreshold"},
    maxsuppress{YType::uint64, "maxSuppress"},
    maxpenalty{YType::uint64, "maxPenalty"},
    restartpenalty{YType::uint64, "restartPenalty"}
{

    yang_name = "dampeningdata-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::~DampeningdataItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::has_data() const
{
    if (is_presence_container) return true;
    return flapcount.is_set
	|| penalty.is_set
	|| suppressed.is_set
	|| reusetime.is_set
	|| halflifeperiod.is_set
	|| reusethreshold.is_set
	|| suppressthreshold.is_set
	|| maxsuppress.is_set
	|| maxpenalty.is_set
	|| restartpenalty.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flapcount.yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(reusetime.yfilter)
	|| ydk::is_set(halflifeperiod.yfilter)
	|| ydk::is_set(reusethreshold.yfilter)
	|| ydk::is_set(suppressthreshold.yfilter)
	|| ydk::is_set(maxsuppress.yfilter)
	|| ydk::is_set(maxpenalty.yfilter)
	|| ydk::is_set(restartpenalty.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampeningdata-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flapcount.is_set || is_set(flapcount.yfilter)) leaf_name_data.push_back(flapcount.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (reusetime.is_set || is_set(reusetime.yfilter)) leaf_name_data.push_back(reusetime.get_name_leafdata());
    if (halflifeperiod.is_set || is_set(halflifeperiod.yfilter)) leaf_name_data.push_back(halflifeperiod.get_name_leafdata());
    if (reusethreshold.is_set || is_set(reusethreshold.yfilter)) leaf_name_data.push_back(reusethreshold.get_name_leafdata());
    if (suppressthreshold.is_set || is_set(suppressthreshold.yfilter)) leaf_name_data.push_back(suppressthreshold.get_name_leafdata());
    if (maxsuppress.is_set || is_set(maxsuppress.yfilter)) leaf_name_data.push_back(maxsuppress.get_name_leafdata());
    if (maxpenalty.is_set || is_set(maxpenalty.yfilter)) leaf_name_data.push_back(maxpenalty.get_name_leafdata());
    if (restartpenalty.is_set || is_set(restartpenalty.yfilter)) leaf_name_data.push_back(restartpenalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flapCount")
    {
        flapcount = value;
        flapcount.value_namespace = name_space;
        flapcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuseTime")
    {
        reusetime = value;
        reusetime.value_namespace = name_space;
        reusetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod = value;
        halflifeperiod.value_namespace = name_space;
        halflifeperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold = value;
        reusethreshold.value_namespace = name_space;
        reusethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold = value;
        suppressthreshold.value_namespace = name_space;
        suppressthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress = value;
        maxsuppress.value_namespace = name_space;
        maxsuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPenalty")
    {
        maxpenalty = value;
        maxpenalty.value_namespace = name_space;
        maxpenalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty = value;
        restartpenalty.value_namespace = name_space;
        restartpenalty.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flapCount")
    {
        flapcount.yfilter = yfilter;
    }
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "reuseTime")
    {
        reusetime.yfilter = yfilter;
    }
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod.yfilter = yfilter;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold.yfilter = yfilter;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold.yfilter = yfilter;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress.yfilter = yfilter;
    }
    if(value_path == "maxPenalty")
    {
        maxpenalty.yfilter = yfilter;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flapCount" || name == "penalty" || name == "suppressed" || name == "reuseTime" || name == "halfLifePeriod" || name == "reuseThreshold" || name == "suppressThreshold" || name == "maxSuppress" || name == "maxPenalty" || name == "restartPenalty")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::TrafficstatItems()
    :
    upktsent{YType::uint64, "upktSent"},
    upktrecv{YType::uint64, "upktRecv"},
    upktfwd{YType::uint64, "upktFwd"},
    upktorig{YType::uint64, "upktOrig"},
    upktconsumed{YType::uint64, "upktConsumed"},
    ubytesent{YType::uint64, "ubyteSent"},
    ubytercv{YType::uint64, "ubyteRcv"},
    ubytefwd{YType::uint64, "ubyteFwd"},
    ubyteorig{YType::uint64, "ubyteOrig"},
    ubyteconsumed{YType::uint64, "ubyteConsumed"},
    mpktsent{YType::uint64, "mpktSent"},
    mpktrcv{YType::uint64, "mpktRcv"},
    mpktfwd{YType::uint64, "mpktFwd"},
    mpktorig{YType::uint64, "mpktOrig"},
    mpktconsumed{YType::uint64, "mpktConsumed"},
    mbytesent{YType::uint64, "mbyteSent"},
    mbytercv{YType::uint64, "mbyteRcv"},
    mbytefwd{YType::uint64, "mbyteFwd"},
    mbyteorig{YType::uint64, "mbyteOrig"},
    mbyteconsumed{YType::uint64, "mbyteConsumed"},
    bpktsent{YType::uint64, "bpktSent"},
    bpktrcv{YType::uint64, "bpktRcv"},
    bpktfwd{YType::uint64, "bpktFwd"},
    bpktorig{YType::uint64, "bpktOrig"},
    bpktconsumed{YType::uint64, "bpktConsumed"},
    bbytesent{YType::uint64, "bbyteSent"},
    bbytercv{YType::uint64, "bbyteRcv"},
    bbytefwd{YType::uint64, "bbyteFwd"},
    bbyteorig{YType::uint64, "bbyteOrig"},
    bbyteconsumed{YType::uint64, "bbyteConsumed"},
    lpktsent{YType::uint64, "lpktSent"},
    lpktrcv{YType::uint64, "lpktRcv"},
    lpktfwd{YType::uint64, "lpktFwd"},
    lpktorig{YType::uint64, "lpktOrig"},
    lpktconsumed{YType::uint64, "lpktConsumed"},
    lbytesent{YType::uint64, "lbyteSent"},
    lbytercv{YType::uint64, "lbyteRcv"},
    lbytefwd{YType::uint64, "lbyteFwd"},
    lbyteorig{YType::uint64, "lbyteOrig"},
    lbyteconsumed{YType::uint64, "lbyteConsumed"}
{

    yang_name = "trafficstat-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::~TrafficstatItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::has_data() const
{
    if (is_presence_container) return true;
    return upktsent.is_set
	|| upktrecv.is_set
	|| upktfwd.is_set
	|| upktorig.is_set
	|| upktconsumed.is_set
	|| ubytesent.is_set
	|| ubytercv.is_set
	|| ubytefwd.is_set
	|| ubyteorig.is_set
	|| ubyteconsumed.is_set
	|| mpktsent.is_set
	|| mpktrcv.is_set
	|| mpktfwd.is_set
	|| mpktorig.is_set
	|| mpktconsumed.is_set
	|| mbytesent.is_set
	|| mbytercv.is_set
	|| mbytefwd.is_set
	|| mbyteorig.is_set
	|| mbyteconsumed.is_set
	|| bpktsent.is_set
	|| bpktrcv.is_set
	|| bpktfwd.is_set
	|| bpktorig.is_set
	|| bpktconsumed.is_set
	|| bbytesent.is_set
	|| bbytercv.is_set
	|| bbytefwd.is_set
	|| bbyteorig.is_set
	|| bbyteconsumed.is_set
	|| lpktsent.is_set
	|| lpktrcv.is_set
	|| lpktfwd.is_set
	|| lpktorig.is_set
	|| lpktconsumed.is_set
	|| lbytesent.is_set
	|| lbytercv.is_set
	|| lbytefwd.is_set
	|| lbyteorig.is_set
	|| lbyteconsumed.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upktsent.yfilter)
	|| ydk::is_set(upktrecv.yfilter)
	|| ydk::is_set(upktfwd.yfilter)
	|| ydk::is_set(upktorig.yfilter)
	|| ydk::is_set(upktconsumed.yfilter)
	|| ydk::is_set(ubytesent.yfilter)
	|| ydk::is_set(ubytercv.yfilter)
	|| ydk::is_set(ubytefwd.yfilter)
	|| ydk::is_set(ubyteorig.yfilter)
	|| ydk::is_set(ubyteconsumed.yfilter)
	|| ydk::is_set(mpktsent.yfilter)
	|| ydk::is_set(mpktrcv.yfilter)
	|| ydk::is_set(mpktfwd.yfilter)
	|| ydk::is_set(mpktorig.yfilter)
	|| ydk::is_set(mpktconsumed.yfilter)
	|| ydk::is_set(mbytesent.yfilter)
	|| ydk::is_set(mbytercv.yfilter)
	|| ydk::is_set(mbytefwd.yfilter)
	|| ydk::is_set(mbyteorig.yfilter)
	|| ydk::is_set(mbyteconsumed.yfilter)
	|| ydk::is_set(bpktsent.yfilter)
	|| ydk::is_set(bpktrcv.yfilter)
	|| ydk::is_set(bpktfwd.yfilter)
	|| ydk::is_set(bpktorig.yfilter)
	|| ydk::is_set(bpktconsumed.yfilter)
	|| ydk::is_set(bbytesent.yfilter)
	|| ydk::is_set(bbytercv.yfilter)
	|| ydk::is_set(bbytefwd.yfilter)
	|| ydk::is_set(bbyteorig.yfilter)
	|| ydk::is_set(bbyteconsumed.yfilter)
	|| ydk::is_set(lpktsent.yfilter)
	|| ydk::is_set(lpktrcv.yfilter)
	|| ydk::is_set(lpktfwd.yfilter)
	|| ydk::is_set(lpktorig.yfilter)
	|| ydk::is_set(lpktconsumed.yfilter)
	|| ydk::is_set(lbytesent.yfilter)
	|| ydk::is_set(lbytercv.yfilter)
	|| ydk::is_set(lbytefwd.yfilter)
	|| ydk::is_set(lbyteorig.yfilter)
	|| ydk::is_set(lbyteconsumed.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trafficstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (upktsent.is_set || is_set(upktsent.yfilter)) leaf_name_data.push_back(upktsent.get_name_leafdata());
    if (upktrecv.is_set || is_set(upktrecv.yfilter)) leaf_name_data.push_back(upktrecv.get_name_leafdata());
    if (upktfwd.is_set || is_set(upktfwd.yfilter)) leaf_name_data.push_back(upktfwd.get_name_leafdata());
    if (upktorig.is_set || is_set(upktorig.yfilter)) leaf_name_data.push_back(upktorig.get_name_leafdata());
    if (upktconsumed.is_set || is_set(upktconsumed.yfilter)) leaf_name_data.push_back(upktconsumed.get_name_leafdata());
    if (ubytesent.is_set || is_set(ubytesent.yfilter)) leaf_name_data.push_back(ubytesent.get_name_leafdata());
    if (ubytercv.is_set || is_set(ubytercv.yfilter)) leaf_name_data.push_back(ubytercv.get_name_leafdata());
    if (ubytefwd.is_set || is_set(ubytefwd.yfilter)) leaf_name_data.push_back(ubytefwd.get_name_leafdata());
    if (ubyteorig.is_set || is_set(ubyteorig.yfilter)) leaf_name_data.push_back(ubyteorig.get_name_leafdata());
    if (ubyteconsumed.is_set || is_set(ubyteconsumed.yfilter)) leaf_name_data.push_back(ubyteconsumed.get_name_leafdata());
    if (mpktsent.is_set || is_set(mpktsent.yfilter)) leaf_name_data.push_back(mpktsent.get_name_leafdata());
    if (mpktrcv.is_set || is_set(mpktrcv.yfilter)) leaf_name_data.push_back(mpktrcv.get_name_leafdata());
    if (mpktfwd.is_set || is_set(mpktfwd.yfilter)) leaf_name_data.push_back(mpktfwd.get_name_leafdata());
    if (mpktorig.is_set || is_set(mpktorig.yfilter)) leaf_name_data.push_back(mpktorig.get_name_leafdata());
    if (mpktconsumed.is_set || is_set(mpktconsumed.yfilter)) leaf_name_data.push_back(mpktconsumed.get_name_leafdata());
    if (mbytesent.is_set || is_set(mbytesent.yfilter)) leaf_name_data.push_back(mbytesent.get_name_leafdata());
    if (mbytercv.is_set || is_set(mbytercv.yfilter)) leaf_name_data.push_back(mbytercv.get_name_leafdata());
    if (mbytefwd.is_set || is_set(mbytefwd.yfilter)) leaf_name_data.push_back(mbytefwd.get_name_leafdata());
    if (mbyteorig.is_set || is_set(mbyteorig.yfilter)) leaf_name_data.push_back(mbyteorig.get_name_leafdata());
    if (mbyteconsumed.is_set || is_set(mbyteconsumed.yfilter)) leaf_name_data.push_back(mbyteconsumed.get_name_leafdata());
    if (bpktsent.is_set || is_set(bpktsent.yfilter)) leaf_name_data.push_back(bpktsent.get_name_leafdata());
    if (bpktrcv.is_set || is_set(bpktrcv.yfilter)) leaf_name_data.push_back(bpktrcv.get_name_leafdata());
    if (bpktfwd.is_set || is_set(bpktfwd.yfilter)) leaf_name_data.push_back(bpktfwd.get_name_leafdata());
    if (bpktorig.is_set || is_set(bpktorig.yfilter)) leaf_name_data.push_back(bpktorig.get_name_leafdata());
    if (bpktconsumed.is_set || is_set(bpktconsumed.yfilter)) leaf_name_data.push_back(bpktconsumed.get_name_leafdata());
    if (bbytesent.is_set || is_set(bbytesent.yfilter)) leaf_name_data.push_back(bbytesent.get_name_leafdata());
    if (bbytercv.is_set || is_set(bbytercv.yfilter)) leaf_name_data.push_back(bbytercv.get_name_leafdata());
    if (bbytefwd.is_set || is_set(bbytefwd.yfilter)) leaf_name_data.push_back(bbytefwd.get_name_leafdata());
    if (bbyteorig.is_set || is_set(bbyteorig.yfilter)) leaf_name_data.push_back(bbyteorig.get_name_leafdata());
    if (bbyteconsumed.is_set || is_set(bbyteconsumed.yfilter)) leaf_name_data.push_back(bbyteconsumed.get_name_leafdata());
    if (lpktsent.is_set || is_set(lpktsent.yfilter)) leaf_name_data.push_back(lpktsent.get_name_leafdata());
    if (lpktrcv.is_set || is_set(lpktrcv.yfilter)) leaf_name_data.push_back(lpktrcv.get_name_leafdata());
    if (lpktfwd.is_set || is_set(lpktfwd.yfilter)) leaf_name_data.push_back(lpktfwd.get_name_leafdata());
    if (lpktorig.is_set || is_set(lpktorig.yfilter)) leaf_name_data.push_back(lpktorig.get_name_leafdata());
    if (lpktconsumed.is_set || is_set(lpktconsumed.yfilter)) leaf_name_data.push_back(lpktconsumed.get_name_leafdata());
    if (lbytesent.is_set || is_set(lbytesent.yfilter)) leaf_name_data.push_back(lbytesent.get_name_leafdata());
    if (lbytercv.is_set || is_set(lbytercv.yfilter)) leaf_name_data.push_back(lbytercv.get_name_leafdata());
    if (lbytefwd.is_set || is_set(lbytefwd.yfilter)) leaf_name_data.push_back(lbytefwd.get_name_leafdata());
    if (lbyteorig.is_set || is_set(lbyteorig.yfilter)) leaf_name_data.push_back(lbyteorig.get_name_leafdata());
    if (lbyteconsumed.is_set || is_set(lbyteconsumed.yfilter)) leaf_name_data.push_back(lbyteconsumed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upktSent")
    {
        upktsent = value;
        upktsent.value_namespace = name_space;
        upktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktRecv")
    {
        upktrecv = value;
        upktrecv.value_namespace = name_space;
        upktrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktFwd")
    {
        upktfwd = value;
        upktfwd.value_namespace = name_space;
        upktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktOrig")
    {
        upktorig = value;
        upktorig.value_namespace = name_space;
        upktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktConsumed")
    {
        upktconsumed = value;
        upktconsumed.value_namespace = name_space;
        upktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteSent")
    {
        ubytesent = value;
        ubytesent.value_namespace = name_space;
        ubytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteRcv")
    {
        ubytercv = value;
        ubytercv.value_namespace = name_space;
        ubytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteFwd")
    {
        ubytefwd = value;
        ubytefwd.value_namespace = name_space;
        ubytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteOrig")
    {
        ubyteorig = value;
        ubyteorig.value_namespace = name_space;
        ubyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteConsumed")
    {
        ubyteconsumed = value;
        ubyteconsumed.value_namespace = name_space;
        ubyteconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktSent")
    {
        mpktsent = value;
        mpktsent.value_namespace = name_space;
        mpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktRcv")
    {
        mpktrcv = value;
        mpktrcv.value_namespace = name_space;
        mpktrcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktFwd")
    {
        mpktfwd = value;
        mpktfwd.value_namespace = name_space;
        mpktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktOrig")
    {
        mpktorig = value;
        mpktorig.value_namespace = name_space;
        mpktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktConsumed")
    {
        mpktconsumed = value;
        mpktconsumed.value_namespace = name_space;
        mpktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteSent")
    {
        mbytesent = value;
        mbytesent.value_namespace = name_space;
        mbytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteRcv")
    {
        mbytercv = value;
        mbytercv.value_namespace = name_space;
        mbytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteFwd")
    {
        mbytefwd = value;
        mbytefwd.value_namespace = name_space;
        mbytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteOrig")
    {
        mbyteorig = value;
        mbyteorig.value_namespace = name_space;
        mbyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteConsumed")
    {
        mbyteconsumed = value;
        mbyteconsumed.value_namespace = name_space;
        mbyteconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktSent")
    {
        bpktsent = value;
        bpktsent.value_namespace = name_space;
        bpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktRcv")
    {
        bpktrcv = value;
        bpktrcv.value_namespace = name_space;
        bpktrcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktFwd")
    {
        bpktfwd = value;
        bpktfwd.value_namespace = name_space;
        bpktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktOrig")
    {
        bpktorig = value;
        bpktorig.value_namespace = name_space;
        bpktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktConsumed")
    {
        bpktconsumed = value;
        bpktconsumed.value_namespace = name_space;
        bpktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteSent")
    {
        bbytesent = value;
        bbytesent.value_namespace = name_space;
        bbytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteRcv")
    {
        bbytercv = value;
        bbytercv.value_namespace = name_space;
        bbytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteFwd")
    {
        bbytefwd = value;
        bbytefwd.value_namespace = name_space;
        bbytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteOrig")
    {
        bbyteorig = value;
        bbyteorig.value_namespace = name_space;
        bbyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteConsumed")
    {
        bbyteconsumed = value;
        bbyteconsumed.value_namespace = name_space;
        bbyteconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktSent")
    {
        lpktsent = value;
        lpktsent.value_namespace = name_space;
        lpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktRcv")
    {
        lpktrcv = value;
        lpktrcv.value_namespace = name_space;
        lpktrcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktFwd")
    {
        lpktfwd = value;
        lpktfwd.value_namespace = name_space;
        lpktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktOrig")
    {
        lpktorig = value;
        lpktorig.value_namespace = name_space;
        lpktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktConsumed")
    {
        lpktconsumed = value;
        lpktconsumed.value_namespace = name_space;
        lpktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteSent")
    {
        lbytesent = value;
        lbytesent.value_namespace = name_space;
        lbytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteRcv")
    {
        lbytercv = value;
        lbytercv.value_namespace = name_space;
        lbytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteFwd")
    {
        lbytefwd = value;
        lbytefwd.value_namespace = name_space;
        lbytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteOrig")
    {
        lbyteorig = value;
        lbyteorig.value_namespace = name_space;
        lbyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteConsumed")
    {
        lbyteconsumed = value;
        lbyteconsumed.value_namespace = name_space;
        lbyteconsumed.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upktSent")
    {
        upktsent.yfilter = yfilter;
    }
    if(value_path == "upktRecv")
    {
        upktrecv.yfilter = yfilter;
    }
    if(value_path == "upktFwd")
    {
        upktfwd.yfilter = yfilter;
    }
    if(value_path == "upktOrig")
    {
        upktorig.yfilter = yfilter;
    }
    if(value_path == "upktConsumed")
    {
        upktconsumed.yfilter = yfilter;
    }
    if(value_path == "ubyteSent")
    {
        ubytesent.yfilter = yfilter;
    }
    if(value_path == "ubyteRcv")
    {
        ubytercv.yfilter = yfilter;
    }
    if(value_path == "ubyteFwd")
    {
        ubytefwd.yfilter = yfilter;
    }
    if(value_path == "ubyteOrig")
    {
        ubyteorig.yfilter = yfilter;
    }
    if(value_path == "ubyteConsumed")
    {
        ubyteconsumed.yfilter = yfilter;
    }
    if(value_path == "mpktSent")
    {
        mpktsent.yfilter = yfilter;
    }
    if(value_path == "mpktRcv")
    {
        mpktrcv.yfilter = yfilter;
    }
    if(value_path == "mpktFwd")
    {
        mpktfwd.yfilter = yfilter;
    }
    if(value_path == "mpktOrig")
    {
        mpktorig.yfilter = yfilter;
    }
    if(value_path == "mpktConsumed")
    {
        mpktconsumed.yfilter = yfilter;
    }
    if(value_path == "mbyteSent")
    {
        mbytesent.yfilter = yfilter;
    }
    if(value_path == "mbyteRcv")
    {
        mbytercv.yfilter = yfilter;
    }
    if(value_path == "mbyteFwd")
    {
        mbytefwd.yfilter = yfilter;
    }
    if(value_path == "mbyteOrig")
    {
        mbyteorig.yfilter = yfilter;
    }
    if(value_path == "mbyteConsumed")
    {
        mbyteconsumed.yfilter = yfilter;
    }
    if(value_path == "bpktSent")
    {
        bpktsent.yfilter = yfilter;
    }
    if(value_path == "bpktRcv")
    {
        bpktrcv.yfilter = yfilter;
    }
    if(value_path == "bpktFwd")
    {
        bpktfwd.yfilter = yfilter;
    }
    if(value_path == "bpktOrig")
    {
        bpktorig.yfilter = yfilter;
    }
    if(value_path == "bpktConsumed")
    {
        bpktconsumed.yfilter = yfilter;
    }
    if(value_path == "bbyteSent")
    {
        bbytesent.yfilter = yfilter;
    }
    if(value_path == "bbyteRcv")
    {
        bbytercv.yfilter = yfilter;
    }
    if(value_path == "bbyteFwd")
    {
        bbytefwd.yfilter = yfilter;
    }
    if(value_path == "bbyteOrig")
    {
        bbyteorig.yfilter = yfilter;
    }
    if(value_path == "bbyteConsumed")
    {
        bbyteconsumed.yfilter = yfilter;
    }
    if(value_path == "lpktSent")
    {
        lpktsent.yfilter = yfilter;
    }
    if(value_path == "lpktRcv")
    {
        lpktrcv.yfilter = yfilter;
    }
    if(value_path == "lpktFwd")
    {
        lpktfwd.yfilter = yfilter;
    }
    if(value_path == "lpktOrig")
    {
        lpktorig.yfilter = yfilter;
    }
    if(value_path == "lpktConsumed")
    {
        lpktconsumed.yfilter = yfilter;
    }
    if(value_path == "lbyteSent")
    {
        lbytesent.yfilter = yfilter;
    }
    if(value_path == "lbyteRcv")
    {
        lbytercv.yfilter = yfilter;
    }
    if(value_path == "lbyteFwd")
    {
        lbytefwd.yfilter = yfilter;
    }
    if(value_path == "lbyteOrig")
    {
        lbyteorig.yfilter = yfilter;
    }
    if(value_path == "lbyteConsumed")
    {
        lbyteconsumed.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "upktSent" || name == "upktRecv" || name == "upktFwd" || name == "upktOrig" || name == "upktConsumed" || name == "ubyteSent" || name == "ubyteRcv" || name == "ubyteFwd" || name == "ubyteOrig" || name == "ubyteConsumed" || name == "mpktSent" || name == "mpktRcv" || name == "mpktFwd" || name == "mpktOrig" || name == "mpktConsumed" || name == "mbyteSent" || name == "mbyteRcv" || name == "mbyteFwd" || name == "mbyteOrig" || name == "mbyteConsumed" || name == "bpktSent" || name == "bpktRcv" || name == "bpktFwd" || name == "bpktOrig" || name == "bpktConsumed" || name == "bbyteSent" || name == "bbyteRcv" || name == "bbyteFwd" || name == "bbyteOrig" || name == "bbyteConsumed" || name == "lpktSent" || name == "lpktRcv" || name == "lpktFwd" || name == "lpktOrig" || name == "lpktConsumed" || name == "lbyteSent" || name == "lbyteRcv" || name == "lbyteFwd" || name == "lbyteOrig" || name == "lbyteConsumed")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::StatItems()
    :
    iodvalue{YType::uint64, "iodValue"},
    vrfnameout{YType::str, "vrfNameOut"},
    protostate{YType::str, "protoState"},
    linkstate{YType::str, "linkState"},
    adminstate{YType::str, "adminState"},
    priaddr{YType::str, "priAddr"},
    prisubnet{YType::str, "priSubnet"},
    primasklen{YType::uint8, "priMasklen"},
    priroutepref{YType::uint8, "priRoutePref"},
    pritag{YType::uint32, "priTag"},
    secaddr{YType::str, "secAddr"},
    secaddrsubnet{YType::str, "secAddrSubnet"},
    secaddrmasklen{YType::str, "secAddrMasklen"},
    secaddrroutepref{YType::str, "secAddrRoutePref"},
    secaddrtag{YType::str, "secAddrTag"},
    numaddr{YType::uint32, "numAddr"},
    vaddrclient{YType::str, "vaddrClient"},
    vaddrprefix{YType::str, "vaddrPrefix"},
    vaddrsubnet{YType::str, "vaddrSubnet"},
    vaddrmasklen{YType::str, "vaddrMasklen"},
    numvaddr{YType::uint64, "numVaddr"},
    unnumintf{YType::str, "unnumIntf"},
    firstiod{YType::uint64, "firstIod"},
    unnumchildintf{YType::str, "unnumChildIntf"},
    ipdisabled{YType::str, "ipDisabled"},
    bcastaddr{YType::str, "bcastAddr"},
    maddr{YType::str, "mAddr"},
    nummaddr{YType::uint32, "numMaddr"},
    mtu{YType::uint16, "mtu"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    proxyarp{YType::enumeration, "proxyArp"},
    localproxyarp{YType::enumeration, "localProxyArp"},
    mrouting{YType::enumeration, "mRouting"},
    icmpredirect{YType::enumeration, "icmpRedirect"},
    directbcast{YType::enumeration, "directBcast"},
    ipunreach{YType::enumeration, "ipUnreach"},
    portunreach{YType::enumeration, "portUnreach"},
    urpfmode{YType::str, "urpfMode"},
    iploadsharing{YType::str, "ipLoadSharing"},
    aclin{YType::str, "aclIn"},
    aclout{YType::str, "aclOut"},
    statslastreset{YType::str, "statsLastReset"}
{

    yang_name = "stat-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::~StatItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::has_data() const
{
    if (is_presence_container) return true;
    return iodvalue.is_set
	|| vrfnameout.is_set
	|| protostate.is_set
	|| linkstate.is_set
	|| adminstate.is_set
	|| priaddr.is_set
	|| prisubnet.is_set
	|| primasklen.is_set
	|| priroutepref.is_set
	|| pritag.is_set
	|| secaddr.is_set
	|| secaddrsubnet.is_set
	|| secaddrmasklen.is_set
	|| secaddrroutepref.is_set
	|| secaddrtag.is_set
	|| numaddr.is_set
	|| vaddrclient.is_set
	|| vaddrprefix.is_set
	|| vaddrsubnet.is_set
	|| vaddrmasklen.is_set
	|| numvaddr.is_set
	|| unnumintf.is_set
	|| firstiod.is_set
	|| unnumchildintf.is_set
	|| ipdisabled.is_set
	|| bcastaddr.is_set
	|| maddr.is_set
	|| nummaddr.is_set
	|| mtu.is_set
	|| pref.is_set
	|| tag.is_set
	|| proxyarp.is_set
	|| localproxyarp.is_set
	|| mrouting.is_set
	|| icmpredirect.is_set
	|| directbcast.is_set
	|| ipunreach.is_set
	|| portunreach.is_set
	|| urpfmode.is_set
	|| iploadsharing.is_set
	|| aclin.is_set
	|| aclout.is_set
	|| statslastreset.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iodvalue.yfilter)
	|| ydk::is_set(vrfnameout.yfilter)
	|| ydk::is_set(protostate.yfilter)
	|| ydk::is_set(linkstate.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(priaddr.yfilter)
	|| ydk::is_set(prisubnet.yfilter)
	|| ydk::is_set(primasklen.yfilter)
	|| ydk::is_set(priroutepref.yfilter)
	|| ydk::is_set(pritag.yfilter)
	|| ydk::is_set(secaddr.yfilter)
	|| ydk::is_set(secaddrsubnet.yfilter)
	|| ydk::is_set(secaddrmasklen.yfilter)
	|| ydk::is_set(secaddrroutepref.yfilter)
	|| ydk::is_set(secaddrtag.yfilter)
	|| ydk::is_set(numaddr.yfilter)
	|| ydk::is_set(vaddrclient.yfilter)
	|| ydk::is_set(vaddrprefix.yfilter)
	|| ydk::is_set(vaddrsubnet.yfilter)
	|| ydk::is_set(vaddrmasklen.yfilter)
	|| ydk::is_set(numvaddr.yfilter)
	|| ydk::is_set(unnumintf.yfilter)
	|| ydk::is_set(firstiod.yfilter)
	|| ydk::is_set(unnumchildintf.yfilter)
	|| ydk::is_set(ipdisabled.yfilter)
	|| ydk::is_set(bcastaddr.yfilter)
	|| ydk::is_set(maddr.yfilter)
	|| ydk::is_set(nummaddr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(proxyarp.yfilter)
	|| ydk::is_set(localproxyarp.yfilter)
	|| ydk::is_set(mrouting.yfilter)
	|| ydk::is_set(icmpredirect.yfilter)
	|| ydk::is_set(directbcast.yfilter)
	|| ydk::is_set(ipunreach.yfilter)
	|| ydk::is_set(portunreach.yfilter)
	|| ydk::is_set(urpfmode.yfilter)
	|| ydk::is_set(iploadsharing.yfilter)
	|| ydk::is_set(aclin.yfilter)
	|| ydk::is_set(aclout.yfilter)
	|| ydk::is_set(statslastreset.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iodvalue.is_set || is_set(iodvalue.yfilter)) leaf_name_data.push_back(iodvalue.get_name_leafdata());
    if (vrfnameout.is_set || is_set(vrfnameout.yfilter)) leaf_name_data.push_back(vrfnameout.get_name_leafdata());
    if (protostate.is_set || is_set(protostate.yfilter)) leaf_name_data.push_back(protostate.get_name_leafdata());
    if (linkstate.is_set || is_set(linkstate.yfilter)) leaf_name_data.push_back(linkstate.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (priaddr.is_set || is_set(priaddr.yfilter)) leaf_name_data.push_back(priaddr.get_name_leafdata());
    if (prisubnet.is_set || is_set(prisubnet.yfilter)) leaf_name_data.push_back(prisubnet.get_name_leafdata());
    if (primasklen.is_set || is_set(primasklen.yfilter)) leaf_name_data.push_back(primasklen.get_name_leafdata());
    if (priroutepref.is_set || is_set(priroutepref.yfilter)) leaf_name_data.push_back(priroutepref.get_name_leafdata());
    if (pritag.is_set || is_set(pritag.yfilter)) leaf_name_data.push_back(pritag.get_name_leafdata());
    if (secaddr.is_set || is_set(secaddr.yfilter)) leaf_name_data.push_back(secaddr.get_name_leafdata());
    if (secaddrsubnet.is_set || is_set(secaddrsubnet.yfilter)) leaf_name_data.push_back(secaddrsubnet.get_name_leafdata());
    if (secaddrmasklen.is_set || is_set(secaddrmasklen.yfilter)) leaf_name_data.push_back(secaddrmasklen.get_name_leafdata());
    if (secaddrroutepref.is_set || is_set(secaddrroutepref.yfilter)) leaf_name_data.push_back(secaddrroutepref.get_name_leafdata());
    if (secaddrtag.is_set || is_set(secaddrtag.yfilter)) leaf_name_data.push_back(secaddrtag.get_name_leafdata());
    if (numaddr.is_set || is_set(numaddr.yfilter)) leaf_name_data.push_back(numaddr.get_name_leafdata());
    if (vaddrclient.is_set || is_set(vaddrclient.yfilter)) leaf_name_data.push_back(vaddrclient.get_name_leafdata());
    if (vaddrprefix.is_set || is_set(vaddrprefix.yfilter)) leaf_name_data.push_back(vaddrprefix.get_name_leafdata());
    if (vaddrsubnet.is_set || is_set(vaddrsubnet.yfilter)) leaf_name_data.push_back(vaddrsubnet.get_name_leafdata());
    if (vaddrmasklen.is_set || is_set(vaddrmasklen.yfilter)) leaf_name_data.push_back(vaddrmasklen.get_name_leafdata());
    if (numvaddr.is_set || is_set(numvaddr.yfilter)) leaf_name_data.push_back(numvaddr.get_name_leafdata());
    if (unnumintf.is_set || is_set(unnumintf.yfilter)) leaf_name_data.push_back(unnumintf.get_name_leafdata());
    if (firstiod.is_set || is_set(firstiod.yfilter)) leaf_name_data.push_back(firstiod.get_name_leafdata());
    if (unnumchildintf.is_set || is_set(unnumchildintf.yfilter)) leaf_name_data.push_back(unnumchildintf.get_name_leafdata());
    if (ipdisabled.is_set || is_set(ipdisabled.yfilter)) leaf_name_data.push_back(ipdisabled.get_name_leafdata());
    if (bcastaddr.is_set || is_set(bcastaddr.yfilter)) leaf_name_data.push_back(bcastaddr.get_name_leafdata());
    if (maddr.is_set || is_set(maddr.yfilter)) leaf_name_data.push_back(maddr.get_name_leafdata());
    if (nummaddr.is_set || is_set(nummaddr.yfilter)) leaf_name_data.push_back(nummaddr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (proxyarp.is_set || is_set(proxyarp.yfilter)) leaf_name_data.push_back(proxyarp.get_name_leafdata());
    if (localproxyarp.is_set || is_set(localproxyarp.yfilter)) leaf_name_data.push_back(localproxyarp.get_name_leafdata());
    if (mrouting.is_set || is_set(mrouting.yfilter)) leaf_name_data.push_back(mrouting.get_name_leafdata());
    if (icmpredirect.is_set || is_set(icmpredirect.yfilter)) leaf_name_data.push_back(icmpredirect.get_name_leafdata());
    if (directbcast.is_set || is_set(directbcast.yfilter)) leaf_name_data.push_back(directbcast.get_name_leafdata());
    if (ipunreach.is_set || is_set(ipunreach.yfilter)) leaf_name_data.push_back(ipunreach.get_name_leafdata());
    if (portunreach.is_set || is_set(portunreach.yfilter)) leaf_name_data.push_back(portunreach.get_name_leafdata());
    if (urpfmode.is_set || is_set(urpfmode.yfilter)) leaf_name_data.push_back(urpfmode.get_name_leafdata());
    if (iploadsharing.is_set || is_set(iploadsharing.yfilter)) leaf_name_data.push_back(iploadsharing.get_name_leafdata());
    if (aclin.is_set || is_set(aclin.yfilter)) leaf_name_data.push_back(aclin.get_name_leafdata());
    if (aclout.is_set || is_set(aclout.yfilter)) leaf_name_data.push_back(aclout.get_name_leafdata());
    if (statslastreset.is_set || is_set(statslastreset.yfilter)) leaf_name_data.push_back(statslastreset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iodValue")
    {
        iodvalue = value;
        iodvalue.value_namespace = name_space;
        iodvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfNameOut")
    {
        vrfnameout = value;
        vrfnameout.value_namespace = name_space;
        vrfnameout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoState")
    {
        protostate = value;
        protostate.value_namespace = name_space;
        protostate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkState")
    {
        linkstate = value;
        linkstate.value_namespace = name_space;
        linkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priAddr")
    {
        priaddr = value;
        priaddr.value_namespace = name_space;
        priaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priSubnet")
    {
        prisubnet = value;
        prisubnet.value_namespace = name_space;
        prisubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priMasklen")
    {
        primasklen = value;
        primasklen.value_namespace = name_space;
        primasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priRoutePref")
    {
        priroutepref = value;
        priroutepref.value_namespace = name_space;
        priroutepref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priTag")
    {
        pritag = value;
        pritag.value_namespace = name_space;
        pritag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddr")
    {
        secaddr = value;
        secaddr.value_namespace = name_space;
        secaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrSubnet")
    {
        secaddrsubnet = value;
        secaddrsubnet.value_namespace = name_space;
        secaddrsubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrMasklen")
    {
        secaddrmasklen = value;
        secaddrmasklen.value_namespace = name_space;
        secaddrmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrRoutePref")
    {
        secaddrroutepref = value;
        secaddrroutepref.value_namespace = name_space;
        secaddrroutepref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrTag")
    {
        secaddrtag = value;
        secaddrtag.value_namespace = name_space;
        secaddrtag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numAddr")
    {
        numaddr = value;
        numaddr.value_namespace = name_space;
        numaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrClient")
    {
        vaddrclient = value;
        vaddrclient.value_namespace = name_space;
        vaddrclient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrPrefix")
    {
        vaddrprefix = value;
        vaddrprefix.value_namespace = name_space;
        vaddrprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrSubnet")
    {
        vaddrsubnet = value;
        vaddrsubnet.value_namespace = name_space;
        vaddrsubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrMasklen")
    {
        vaddrmasklen = value;
        vaddrmasklen.value_namespace = name_space;
        vaddrmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVaddr")
    {
        numvaddr = value;
        numvaddr.value_namespace = name_space;
        numvaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumIntf")
    {
        unnumintf = value;
        unnumintf.value_namespace = name_space;
        unnumintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstIod")
    {
        firstiod = value;
        firstiod.value_namespace = name_space;
        firstiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumChildIntf")
    {
        unnumchildintf = value;
        unnumchildintf.value_namespace = name_space;
        unnumchildintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDisabled")
    {
        ipdisabled = value;
        ipdisabled.value_namespace = name_space;
        ipdisabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcastAddr")
    {
        bcastaddr = value;
        bcastaddr.value_namespace = name_space;
        bcastaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mAddr")
    {
        maddr = value;
        maddr.value_namespace = name_space;
        maddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMaddr")
    {
        nummaddr = value;
        nummaddr.value_namespace = name_space;
        nummaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyArp")
    {
        proxyarp = value;
        proxyarp.value_namespace = name_space;
        proxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp = value;
        localproxyarp.value_namespace = name_space;
        localproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mRouting")
    {
        mrouting = value;
        mrouting.value_namespace = name_space;
        mrouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpRedirect")
    {
        icmpredirect = value;
        icmpredirect.value_namespace = name_space;
        icmpredirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directBcast")
    {
        directbcast = value;
        directbcast.value_namespace = name_space;
        directbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipUnreach")
    {
        ipunreach = value;
        ipunreach.value_namespace = name_space;
        ipunreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portUnreach")
    {
        portunreach = value;
        portunreach.value_namespace = name_space;
        portunreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urpfMode")
    {
        urpfmode = value;
        urpfmode.value_namespace = name_space;
        urpfmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipLoadSharing")
    {
        iploadsharing = value;
        iploadsharing.value_namespace = name_space;
        iploadsharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclIn")
    {
        aclin = value;
        aclin.value_namespace = name_space;
        aclin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclOut")
    {
        aclout = value;
        aclout.value_namespace = name_space;
        aclout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset = value;
        statslastreset.value_namespace = name_space;
        statslastreset.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iodValue")
    {
        iodvalue.yfilter = yfilter;
    }
    if(value_path == "vrfNameOut")
    {
        vrfnameout.yfilter = yfilter;
    }
    if(value_path == "protoState")
    {
        protostate.yfilter = yfilter;
    }
    if(value_path == "linkState")
    {
        linkstate.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "priAddr")
    {
        priaddr.yfilter = yfilter;
    }
    if(value_path == "priSubnet")
    {
        prisubnet.yfilter = yfilter;
    }
    if(value_path == "priMasklen")
    {
        primasklen.yfilter = yfilter;
    }
    if(value_path == "priRoutePref")
    {
        priroutepref.yfilter = yfilter;
    }
    if(value_path == "priTag")
    {
        pritag.yfilter = yfilter;
    }
    if(value_path == "secAddr")
    {
        secaddr.yfilter = yfilter;
    }
    if(value_path == "secAddrSubnet")
    {
        secaddrsubnet.yfilter = yfilter;
    }
    if(value_path == "secAddrMasklen")
    {
        secaddrmasklen.yfilter = yfilter;
    }
    if(value_path == "secAddrRoutePref")
    {
        secaddrroutepref.yfilter = yfilter;
    }
    if(value_path == "secAddrTag")
    {
        secaddrtag.yfilter = yfilter;
    }
    if(value_path == "numAddr")
    {
        numaddr.yfilter = yfilter;
    }
    if(value_path == "vaddrClient")
    {
        vaddrclient.yfilter = yfilter;
    }
    if(value_path == "vaddrPrefix")
    {
        vaddrprefix.yfilter = yfilter;
    }
    if(value_path == "vaddrSubnet")
    {
        vaddrsubnet.yfilter = yfilter;
    }
    if(value_path == "vaddrMasklen")
    {
        vaddrmasklen.yfilter = yfilter;
    }
    if(value_path == "numVaddr")
    {
        numvaddr.yfilter = yfilter;
    }
    if(value_path == "unnumIntf")
    {
        unnumintf.yfilter = yfilter;
    }
    if(value_path == "firstIod")
    {
        firstiod.yfilter = yfilter;
    }
    if(value_path == "unnumChildIntf")
    {
        unnumchildintf.yfilter = yfilter;
    }
    if(value_path == "ipDisabled")
    {
        ipdisabled.yfilter = yfilter;
    }
    if(value_path == "bcastAddr")
    {
        bcastaddr.yfilter = yfilter;
    }
    if(value_path == "mAddr")
    {
        maddr.yfilter = yfilter;
    }
    if(value_path == "numMaddr")
    {
        nummaddr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "proxyArp")
    {
        proxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp.yfilter = yfilter;
    }
    if(value_path == "mRouting")
    {
        mrouting.yfilter = yfilter;
    }
    if(value_path == "icmpRedirect")
    {
        icmpredirect.yfilter = yfilter;
    }
    if(value_path == "directBcast")
    {
        directbcast.yfilter = yfilter;
    }
    if(value_path == "ipUnreach")
    {
        ipunreach.yfilter = yfilter;
    }
    if(value_path == "portUnreach")
    {
        portunreach.yfilter = yfilter;
    }
    if(value_path == "urpfMode")
    {
        urpfmode.yfilter = yfilter;
    }
    if(value_path == "ipLoadSharing")
    {
        iploadsharing.yfilter = yfilter;
    }
    if(value_path == "aclIn")
    {
        aclin.yfilter = yfilter;
    }
    if(value_path == "aclOut")
    {
        aclout.yfilter = yfilter;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iodValue" || name == "vrfNameOut" || name == "protoState" || name == "linkState" || name == "adminState" || name == "priAddr" || name == "priSubnet" || name == "priMasklen" || name == "priRoutePref" || name == "priTag" || name == "secAddr" || name == "secAddrSubnet" || name == "secAddrMasklen" || name == "secAddrRoutePref" || name == "secAddrTag" || name == "numAddr" || name == "vaddrClient" || name == "vaddrPrefix" || name == "vaddrSubnet" || name == "vaddrMasklen" || name == "numVaddr" || name == "unnumIntf" || name == "firstIod" || name == "unnumChildIntf" || name == "ipDisabled" || name == "bcastAddr" || name == "mAddr" || name == "numMaddr" || name == "mtu" || name == "pref" || name == "tag" || name == "proxyArp" || name == "localProxyArp" || name == "mRouting" || name == "icmpRedirect" || name == "directBcast" || name == "ipUnreach" || name == "portUnreach" || name == "urpfMode" || name == "ipLoadSharing" || name == "aclIn" || name == "aclOut" || name == "statsLastReset")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::RpolItems()
    :
    rmapname{YType::str, "rmapname"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "rpol-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::~RpolItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_data() const
{
    if (is_presence_container) return true;
    return rmapname.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rmapname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmapname.is_set || is_set(rmapname.yfilter)) leaf_name_data.push_back(rmapname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rmapname")
    {
        rmapname = value;
        rmapname.value_namespace = name_space;
        rmapname.value_namespace_prefix = name_space_prefix;
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rmapname")
    {
        rmapname.yfilter = yfilter;
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

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmapname" || name == "name" || name == "descr")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::PstatItems()
    :
    contextname{YType::str, "contextName"},
    contextid{YType::uint64, "contextId"},
    basetid{YType::uint64, "baseTId"},
    autodisc{YType::enumeration, "autoDisc"},
    autodiscadd{YType::enumeration, "autoDiscAdd"},
    nullbcast{YType::enumeration, "nullBcast"},
    autopuntbcast{YType::enumeration, "autoPuntBcast"},
    staticdisc{YType::enumeration, "staticDisc"},
    staticdefroute{YType::uint64, "staticDefRoute"},
    ipunreach{YType::uint64, "ipUnreach"},
    entryiod{YType::str, "entryIod"},
    localaddr{YType::str, "localAddr"}
{

    yang_name = "pstat-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::~PstatItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::has_data() const
{
    if (is_presence_container) return true;
    return contextname.is_set
	|| contextid.is_set
	|| basetid.is_set
	|| autodisc.is_set
	|| autodiscadd.is_set
	|| nullbcast.is_set
	|| autopuntbcast.is_set
	|| staticdisc.is_set
	|| staticdefroute.is_set
	|| ipunreach.is_set
	|| entryiod.is_set
	|| localaddr.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(contextname.yfilter)
	|| ydk::is_set(contextid.yfilter)
	|| ydk::is_set(basetid.yfilter)
	|| ydk::is_set(autodisc.yfilter)
	|| ydk::is_set(autodiscadd.yfilter)
	|| ydk::is_set(nullbcast.yfilter)
	|| ydk::is_set(autopuntbcast.yfilter)
	|| ydk::is_set(staticdisc.yfilter)
	|| ydk::is_set(staticdefroute.yfilter)
	|| ydk::is_set(ipunreach.yfilter)
	|| ydk::is_set(entryiod.yfilter)
	|| ydk::is_set(localaddr.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contextname.is_set || is_set(contextname.yfilter)) leaf_name_data.push_back(contextname.get_name_leafdata());
    if (contextid.is_set || is_set(contextid.yfilter)) leaf_name_data.push_back(contextid.get_name_leafdata());
    if (basetid.is_set || is_set(basetid.yfilter)) leaf_name_data.push_back(basetid.get_name_leafdata());
    if (autodisc.is_set || is_set(autodisc.yfilter)) leaf_name_data.push_back(autodisc.get_name_leafdata());
    if (autodiscadd.is_set || is_set(autodiscadd.yfilter)) leaf_name_data.push_back(autodiscadd.get_name_leafdata());
    if (nullbcast.is_set || is_set(nullbcast.yfilter)) leaf_name_data.push_back(nullbcast.get_name_leafdata());
    if (autopuntbcast.is_set || is_set(autopuntbcast.yfilter)) leaf_name_data.push_back(autopuntbcast.get_name_leafdata());
    if (staticdisc.is_set || is_set(staticdisc.yfilter)) leaf_name_data.push_back(staticdisc.get_name_leafdata());
    if (staticdefroute.is_set || is_set(staticdefroute.yfilter)) leaf_name_data.push_back(staticdefroute.get_name_leafdata());
    if (ipunreach.is_set || is_set(ipunreach.yfilter)) leaf_name_data.push_back(ipunreach.get_name_leafdata());
    if (entryiod.is_set || is_set(entryiod.yfilter)) leaf_name_data.push_back(entryiod.get_name_leafdata());
    if (localaddr.is_set || is_set(localaddr.yfilter)) leaf_name_data.push_back(localaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "contextName")
    {
        contextname = value;
        contextname.value_namespace = name_space;
        contextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contextId")
    {
        contextid = value;
        contextid.value_namespace = name_space;
        contextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseTId")
    {
        basetid = value;
        basetid.value_namespace = name_space;
        basetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoDisc")
    {
        autodisc = value;
        autodisc.value_namespace = name_space;
        autodisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoDiscAdd")
    {
        autodiscadd = value;
        autodiscadd.value_namespace = name_space;
        autodiscadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullBcast")
    {
        nullbcast = value;
        nullbcast.value_namespace = name_space;
        nullbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoPuntBcast")
    {
        autopuntbcast = value;
        autopuntbcast.value_namespace = name_space;
        autopuntbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticDisc")
    {
        staticdisc = value;
        staticdisc.value_namespace = name_space;
        staticdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticDefRoute")
    {
        staticdefroute = value;
        staticdefroute.value_namespace = name_space;
        staticdefroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipUnreach")
    {
        ipunreach = value;
        ipunreach.value_namespace = name_space;
        ipunreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entryIod")
    {
        entryiod = value;
        entryiod.value_namespace = name_space;
        entryiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localAddr")
    {
        localaddr = value;
        localaddr.value_namespace = name_space;
        localaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "contextName")
    {
        contextname.yfilter = yfilter;
    }
    if(value_path == "contextId")
    {
        contextid.yfilter = yfilter;
    }
    if(value_path == "baseTId")
    {
        basetid.yfilter = yfilter;
    }
    if(value_path == "autoDisc")
    {
        autodisc.yfilter = yfilter;
    }
    if(value_path == "autoDiscAdd")
    {
        autodiscadd.yfilter = yfilter;
    }
    if(value_path == "nullBcast")
    {
        nullbcast.yfilter = yfilter;
    }
    if(value_path == "autoPuntBcast")
    {
        autopuntbcast.yfilter = yfilter;
    }
    if(value_path == "staticDisc")
    {
        staticdisc.yfilter = yfilter;
    }
    if(value_path == "staticDefRoute")
    {
        staticdefroute.yfilter = yfilter;
    }
    if(value_path == "ipUnreach")
    {
        ipunreach.yfilter = yfilter;
    }
    if(value_path == "entryIod")
    {
        entryiod.yfilter = yfilter;
    }
    if(value_path == "localAddr")
    {
        localaddr.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::PstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contextName" || name == "contextId" || name == "baseTId" || name == "autoDisc" || name == "autoDiscAdd" || name == "nullBcast" || name == "autoPuntBcast" || name == "staticDisc" || name == "staticDefRoute" || name == "ipUnreach" || name == "entryIod" || name == "localAddr")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RtItems()
    :
    route_list(this, {"prefix"})
{

    yang_name = "rt-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::~RtItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::RouteList()
    :
    prefix{YType::str, "prefix"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    pctag{YType::uint32, "pcTag"},
    ctrl{YType::str, "ctrl"}
        ,
    nh_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems>())
    , nhs_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems>())
{
    nh_items->parent = this;
    nhs_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::~RouteList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| name.is_set
	|| descr.is_set
	|| pref.is_set
	|| tag.is_set
	|| pctag.is_set
	|| ctrl.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (nhs_items !=  nullptr && nhs_items->has_data());
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (nhs_items !=  nullptr && nhs_items->has_operation());
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "nhs-items")
    {
        if(nhs_items == nullptr)
        {
            nhs_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems>();
        }
        return nhs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(nhs_items != nullptr)
    {
        _children["nhs-items"] = nhs_items;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "nhs-items" || name == "prefix" || name == "name" || name == "descr" || name == "pref" || name == "tag" || name == "pcTag" || name == "ctrl")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NhItems()
    :
    nexthop_list(this, {"nhif", "nhaddr", "nhvrf"})
{

    yang_name = "nh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::~NhItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::NexthopList()
    :
    nhif{YType::str, "nhIf"},
    nhaddr{YType::str, "nhAddr"},
    nhvrf{YType::str, "nhVrf"},
    rtname{YType::str, "rtname"},
    tag{YType::uint32, "tag"},
    pref{YType::uint8, "pref"},
    object{YType::uint32, "object"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rwencap{YType::str, "rwEncap"},
    flags{YType::str, "flags"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return nhif.is_set
	|| nhaddr.is_set
	|| nhvrf.is_set
	|| rtname.is_set
	|| tag.is_set
	|| pref.is_set
	|| object.is_set
	|| name.is_set
	|| descr.is_set
	|| rwencap.is_set
	|| flags.is_set
	|| operst.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhif.yfilter)
	|| ydk::is_set(nhaddr.yfilter)
	|| ydk::is_set(nhvrf.yfilter)
	|| ydk::is_set(rtname.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(object.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rwencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(nhif, "nhIf");
    ADD_KEY_TOKEN(nhaddr, "nhAddr");
    ADD_KEY_TOKEN(nhvrf, "nhVrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhif.is_set || is_set(nhif.yfilter)) leaf_name_data.push_back(nhif.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());
    if (nhvrf.is_set || is_set(nhvrf.yfilter)) leaf_name_data.push_back(nhvrf.get_name_leafdata());
    if (rtname.is_set || is_set(rtname.yfilter)) leaf_name_data.push_back(rtname.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (object.is_set || is_set(object.yfilter)) leaf_name_data.push_back(object.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rwencap.is_set || is_set(rwencap.yfilter)) leaf_name_data.push_back(rwencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhIf")
    {
        nhif = value;
        nhif.value_namespace = name_space;
        nhif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhVrf")
    {
        nhvrf = value;
        nhvrf.value_namespace = name_space;
        nhvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtname")
    {
        rtname = value;
        rtname.value_namespace = name_space;
        rtname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object")
    {
        object = value;
        object.value_namespace = name_space;
        object.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rwEncap")
    {
        rwencap = value;
        rwencap.value_namespace = name_space;
        rwencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhIf")
    {
        nhif.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
    if(value_path == "nhVrf")
    {
        nhvrf.yfilter = yfilter;
    }
    if(value_path == "rtname")
    {
        rtname.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rwEncap")
    {
        rwencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhIf" || name == "nhAddr" || name == "nhVrf" || name == "rtname" || name == "tag" || name == "pref" || name == "object" || name == "name" || name == "descr" || name == "rwEncap" || name == "flags" || name == "operSt")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NhsItems()
    :
    nexthopstub_list(this, {"nhif", "nhaddr", "nhvrf"})
{

    yang_name = "nhs-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::~NhsItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthopstub_list.len(); index++)
    {
        if(nexthopstub_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::has_operation() const
{
    for (std::size_t index=0; index<nexthopstub_list.len(); index++)
    {
        if(nexthopstub_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NexthopStub-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList>();
        ent_->parent = this;
        nexthopstub_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthopstub_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NexthopStub-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::NexthopStubList()
    :
    nhif{YType::str, "nhIf"},
    nhaddr{YType::str, "nhAddr"},
    nhvrf{YType::str, "nhVrf"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rwencap{YType::str, "rwEncap"},
    flags{YType::str, "flags"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "NexthopStub-list"; yang_parent_name = "nhs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::~NexthopStubList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::has_data() const
{
    if (is_presence_container) return true;
    return nhif.is_set
	|| nhaddr.is_set
	|| nhvrf.is_set
	|| name.is_set
	|| descr.is_set
	|| rwencap.is_set
	|| flags.is_set
	|| operst.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhif.yfilter)
	|| ydk::is_set(nhaddr.yfilter)
	|| ydk::is_set(nhvrf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rwencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NexthopStub-list";
    ADD_KEY_TOKEN(nhif, "nhIf");
    ADD_KEY_TOKEN(nhaddr, "nhAddr");
    ADD_KEY_TOKEN(nhvrf, "nhVrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhif.is_set || is_set(nhif.yfilter)) leaf_name_data.push_back(nhif.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());
    if (nhvrf.is_set || is_set(nhvrf.yfilter)) leaf_name_data.push_back(nhvrf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rwencap.is_set || is_set(rwencap.yfilter)) leaf_name_data.push_back(rwencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhIf")
    {
        nhif = value;
        nhif.value_namespace = name_space;
        nhif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhVrf")
    {
        nhvrf = value;
        nhvrf.value_namespace = name_space;
        nhvrf.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rwEncap")
    {
        rwencap = value;
        rwencap.value_namespace = name_space;
        rwencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhIf")
    {
        nhif.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
    if(value_path == "nhVrf")
    {
        nhvrf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rwEncap")
    {
        rwencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhIf" || name == "nhAddr" || name == "nhVrf" || name == "name" || name == "descr" || name == "rwEncap" || name == "flags" || name == "operSt")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::RoutestatItems()
    :
    contextname{YType::str, "contextName"},
    contextid{YType::uint32, "contextId"},
    prefixmask{YType::str, "prefixMask"},
    nhprefixmask{YType::str, "nhPrefixMask"},
    vrfinfo{YType::str, "vrfInfo"},
    intrinfo{YType::str, "intrInfo"},
    uribstat{YType::str, "uribStat"},
    nhopuribstat{YType::str, "nhopUribStat"},
    trackobjnum{YType::str, "trackObjNum"},
    trackobjstate{YType::str, "trackObjState"}
{

    yang_name = "routestat-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::~RoutestatItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::has_data() const
{
    if (is_presence_container) return true;
    return contextname.is_set
	|| contextid.is_set
	|| prefixmask.is_set
	|| nhprefixmask.is_set
	|| vrfinfo.is_set
	|| intrinfo.is_set
	|| uribstat.is_set
	|| nhopuribstat.is_set
	|| trackobjnum.is_set
	|| trackobjstate.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(contextname.yfilter)
	|| ydk::is_set(contextid.yfilter)
	|| ydk::is_set(prefixmask.yfilter)
	|| ydk::is_set(nhprefixmask.yfilter)
	|| ydk::is_set(vrfinfo.yfilter)
	|| ydk::is_set(intrinfo.yfilter)
	|| ydk::is_set(uribstat.yfilter)
	|| ydk::is_set(nhopuribstat.yfilter)
	|| ydk::is_set(trackobjnum.yfilter)
	|| ydk::is_set(trackobjstate.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routestat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contextname.is_set || is_set(contextname.yfilter)) leaf_name_data.push_back(contextname.get_name_leafdata());
    if (contextid.is_set || is_set(contextid.yfilter)) leaf_name_data.push_back(contextid.get_name_leafdata());
    if (prefixmask.is_set || is_set(prefixmask.yfilter)) leaf_name_data.push_back(prefixmask.get_name_leafdata());
    if (nhprefixmask.is_set || is_set(nhprefixmask.yfilter)) leaf_name_data.push_back(nhprefixmask.get_name_leafdata());
    if (vrfinfo.is_set || is_set(vrfinfo.yfilter)) leaf_name_data.push_back(vrfinfo.get_name_leafdata());
    if (intrinfo.is_set || is_set(intrinfo.yfilter)) leaf_name_data.push_back(intrinfo.get_name_leafdata());
    if (uribstat.is_set || is_set(uribstat.yfilter)) leaf_name_data.push_back(uribstat.get_name_leafdata());
    if (nhopuribstat.is_set || is_set(nhopuribstat.yfilter)) leaf_name_data.push_back(nhopuribstat.get_name_leafdata());
    if (trackobjnum.is_set || is_set(trackobjnum.yfilter)) leaf_name_data.push_back(trackobjnum.get_name_leafdata());
    if (trackobjstate.is_set || is_set(trackobjstate.yfilter)) leaf_name_data.push_back(trackobjstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "contextName")
    {
        contextname = value;
        contextname.value_namespace = name_space;
        contextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contextId")
    {
        contextid = value;
        contextid.value_namespace = name_space;
        contextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixMask")
    {
        prefixmask = value;
        prefixmask.value_namespace = name_space;
        prefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhPrefixMask")
    {
        nhprefixmask = value;
        nhprefixmask.value_namespace = name_space;
        nhprefixmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfInfo")
    {
        vrfinfo = value;
        vrfinfo.value_namespace = name_space;
        vrfinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intrInfo")
    {
        intrinfo = value;
        intrinfo.value_namespace = name_space;
        intrinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uribStat")
    {
        uribstat = value;
        uribstat.value_namespace = name_space;
        uribstat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhopUribStat")
    {
        nhopuribstat = value;
        nhopuribstat.value_namespace = name_space;
        nhopuribstat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trackObjNum")
    {
        trackobjnum = value;
        trackobjnum.value_namespace = name_space;
        trackobjnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trackObjState")
    {
        trackobjstate = value;
        trackobjstate.value_namespace = name_space;
        trackobjstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "contextName")
    {
        contextname.yfilter = yfilter;
    }
    if(value_path == "contextId")
    {
        contextid.yfilter = yfilter;
    }
    if(value_path == "prefixMask")
    {
        prefixmask.yfilter = yfilter;
    }
    if(value_path == "nhPrefixMask")
    {
        nhprefixmask.yfilter = yfilter;
    }
    if(value_path == "vrfInfo")
    {
        vrfinfo.yfilter = yfilter;
    }
    if(value_path == "intrInfo")
    {
        intrinfo.yfilter = yfilter;
    }
    if(value_path == "uribStat")
    {
        uribstat.yfilter = yfilter;
    }
    if(value_path == "nhopUribStat")
    {
        nhopuribstat.yfilter = yfilter;
    }
    if(value_path == "trackObjNum")
    {
        trackobjnum.yfilter = yfilter;
    }
    if(value_path == "trackObjState")
    {
        trackobjstate.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contextName" || name == "contextId" || name == "prefixMask" || name == "nhPrefixMask" || name == "vrfInfo" || name == "intrInfo" || name == "uribStat" || name == "nhopUribStat" || name == "trackObjNum" || name == "trackObjState")
        return true;
    return false;
}

System::Ipv4Items::InstItems::ClientItems::ClientItems()
    :
    client_list(this, {"clientname", "clientprotocol"})
{

    yang_name = "client-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::ClientItems::~ClientItems()
{
}

bool System::Ipv4Items::InstItems::ClientItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_list.len(); index++)
    {
        if(client_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::ClientItems::has_operation() const
{
    for (std::size_t index=0; index<client_list.len(); index++)
    {
        if(client_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::ClientItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::ClientItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::ClientItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Client-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::ClientItems::ClientList>();
        ent_->parent = this;
        client_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::ClientItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::ClientItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::ClientItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::ClientItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Client-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::ClientItems::ClientList::ClientList()
    :
    clientname{YType::str, "clientName"},
    clientprotocol{YType::uint8, "clientProtocol"},
    clientuuid{YType::int32, "clientUuid"},
    clientpid{YType::int32, "clientPid"},
    clientextpid{YType::uint32, "clientExtPid"},
    clientindex{YType::uint16, "clientIndex"},
    clientcontextid{YType::uint32, "clientContextId"},
    clientmtssap{YType::int16, "clientMtsSap"},
    clientflag{YType::uint8, "clientFlag"},
    clientdatamsgsuccess{YType::uint64, "clientDataMsgSuccess"},
    clientdatamsgfail{YType::uint64, "clientDataMsgFail"},
    clientrcvfunname{YType::str, "clientRcvFunName"}
{

    yang_name = "Client-list"; yang_parent_name = "client-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::ClientItems::ClientList::~ClientList()
{
}

bool System::Ipv4Items::InstItems::ClientItems::ClientList::has_data() const
{
    if (is_presence_container) return true;
    return clientname.is_set
	|| clientprotocol.is_set
	|| clientuuid.is_set
	|| clientpid.is_set
	|| clientextpid.is_set
	|| clientindex.is_set
	|| clientcontextid.is_set
	|| clientmtssap.is_set
	|| clientflag.is_set
	|| clientdatamsgsuccess.is_set
	|| clientdatamsgfail.is_set
	|| clientrcvfunname.is_set;
}

bool System::Ipv4Items::InstItems::ClientItems::ClientList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clientname.yfilter)
	|| ydk::is_set(clientprotocol.yfilter)
	|| ydk::is_set(clientuuid.yfilter)
	|| ydk::is_set(clientpid.yfilter)
	|| ydk::is_set(clientextpid.yfilter)
	|| ydk::is_set(clientindex.yfilter)
	|| ydk::is_set(clientcontextid.yfilter)
	|| ydk::is_set(clientmtssap.yfilter)
	|| ydk::is_set(clientflag.yfilter)
	|| ydk::is_set(clientdatamsgsuccess.yfilter)
	|| ydk::is_set(clientdatamsgfail.yfilter)
	|| ydk::is_set(clientrcvfunname.yfilter);
}

std::string System::Ipv4Items::InstItems::ClientItems::ClientList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/client-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::ClientItems::ClientList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Client-list";
    ADD_KEY_TOKEN(clientname, "clientName");
    ADD_KEY_TOKEN(clientprotocol, "clientProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::ClientItems::ClientList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clientname.is_set || is_set(clientname.yfilter)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (clientprotocol.is_set || is_set(clientprotocol.yfilter)) leaf_name_data.push_back(clientprotocol.get_name_leafdata());
    if (clientuuid.is_set || is_set(clientuuid.yfilter)) leaf_name_data.push_back(clientuuid.get_name_leafdata());
    if (clientpid.is_set || is_set(clientpid.yfilter)) leaf_name_data.push_back(clientpid.get_name_leafdata());
    if (clientextpid.is_set || is_set(clientextpid.yfilter)) leaf_name_data.push_back(clientextpid.get_name_leafdata());
    if (clientindex.is_set || is_set(clientindex.yfilter)) leaf_name_data.push_back(clientindex.get_name_leafdata());
    if (clientcontextid.is_set || is_set(clientcontextid.yfilter)) leaf_name_data.push_back(clientcontextid.get_name_leafdata());
    if (clientmtssap.is_set || is_set(clientmtssap.yfilter)) leaf_name_data.push_back(clientmtssap.get_name_leafdata());
    if (clientflag.is_set || is_set(clientflag.yfilter)) leaf_name_data.push_back(clientflag.get_name_leafdata());
    if (clientdatamsgsuccess.is_set || is_set(clientdatamsgsuccess.yfilter)) leaf_name_data.push_back(clientdatamsgsuccess.get_name_leafdata());
    if (clientdatamsgfail.is_set || is_set(clientdatamsgfail.yfilter)) leaf_name_data.push_back(clientdatamsgfail.get_name_leafdata());
    if (clientrcvfunname.is_set || is_set(clientrcvfunname.yfilter)) leaf_name_data.push_back(clientrcvfunname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::ClientItems::ClientList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::ClientItems::ClientList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::ClientItems::ClientList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clientName")
    {
        clientname = value;
        clientname.value_namespace = name_space;
        clientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientProtocol")
    {
        clientprotocol = value;
        clientprotocol.value_namespace = name_space;
        clientprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientUuid")
    {
        clientuuid = value;
        clientuuid.value_namespace = name_space;
        clientuuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientPid")
    {
        clientpid = value;
        clientpid.value_namespace = name_space;
        clientpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientExtPid")
    {
        clientextpid = value;
        clientextpid.value_namespace = name_space;
        clientextpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientIndex")
    {
        clientindex = value;
        clientindex.value_namespace = name_space;
        clientindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientContextId")
    {
        clientcontextid = value;
        clientcontextid.value_namespace = name_space;
        clientcontextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientMtsSap")
    {
        clientmtssap = value;
        clientmtssap.value_namespace = name_space;
        clientmtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientFlag")
    {
        clientflag = value;
        clientflag.value_namespace = name_space;
        clientflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientDataMsgSuccess")
    {
        clientdatamsgsuccess = value;
        clientdatamsgsuccess.value_namespace = name_space;
        clientdatamsgsuccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientDataMsgFail")
    {
        clientdatamsgfail = value;
        clientdatamsgfail.value_namespace = name_space;
        clientdatamsgfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientRcvFunName")
    {
        clientrcvfunname = value;
        clientrcvfunname.value_namespace = name_space;
        clientrcvfunname.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::ClientItems::ClientList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clientName")
    {
        clientname.yfilter = yfilter;
    }
    if(value_path == "clientProtocol")
    {
        clientprotocol.yfilter = yfilter;
    }
    if(value_path == "clientUuid")
    {
        clientuuid.yfilter = yfilter;
    }
    if(value_path == "clientPid")
    {
        clientpid.yfilter = yfilter;
    }
    if(value_path == "clientExtPid")
    {
        clientextpid.yfilter = yfilter;
    }
    if(value_path == "clientIndex")
    {
        clientindex.yfilter = yfilter;
    }
    if(value_path == "clientContextId")
    {
        clientcontextid.yfilter = yfilter;
    }
    if(value_path == "clientMtsSap")
    {
        clientmtssap.yfilter = yfilter;
    }
    if(value_path == "clientFlag")
    {
        clientflag.yfilter = yfilter;
    }
    if(value_path == "clientDataMsgSuccess")
    {
        clientdatamsgsuccess.yfilter = yfilter;
    }
    if(value_path == "clientDataMsgFail")
    {
        clientdatamsgfail.yfilter = yfilter;
    }
    if(value_path == "clientRcvFunName")
    {
        clientrcvfunname.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::ClientItems::ClientList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clientName" || name == "clientProtocol" || name == "clientUuid" || name == "clientPid" || name == "clientExtPid" || name == "clientIndex" || name == "clientContextId" || name == "clientMtsSap" || name == "clientFlag" || name == "clientDataMsgSuccess" || name == "clientDataMsgFail" || name == "clientRcvFunName")
        return true;
    return false;
}

System::Ipv4Items::InstItems::IploadsharingItems::IploadsharingItems()
    :
    loadsharemode{YType::enumeration, "loadShareMode"},
    universalid{YType::uint32, "universalID"},
    greouterhash{YType::enumeration, "greOuterHash"},
    concatenation{YType::enumeration, "concatenation"},
    rotate{YType::uint16, "rotate"},
    ecmploadsharing{YType::enumeration, "ecmpLoadSharing"}
{

    yang_name = "iploadsharing-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::IploadsharingItems::~IploadsharingItems()
{
}

bool System::Ipv4Items::InstItems::IploadsharingItems::has_data() const
{
    if (is_presence_container) return true;
    return loadsharemode.is_set
	|| universalid.is_set
	|| greouterhash.is_set
	|| concatenation.is_set
	|| rotate.is_set
	|| ecmploadsharing.is_set;
}

bool System::Ipv4Items::InstItems::IploadsharingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loadsharemode.yfilter)
	|| ydk::is_set(universalid.yfilter)
	|| ydk::is_set(greouterhash.yfilter)
	|| ydk::is_set(concatenation.yfilter)
	|| ydk::is_set(rotate.yfilter)
	|| ydk::is_set(ecmploadsharing.yfilter);
}

std::string System::Ipv4Items::InstItems::IploadsharingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::IploadsharingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iploadsharing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::IploadsharingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loadsharemode.is_set || is_set(loadsharemode.yfilter)) leaf_name_data.push_back(loadsharemode.get_name_leafdata());
    if (universalid.is_set || is_set(universalid.yfilter)) leaf_name_data.push_back(universalid.get_name_leafdata());
    if (greouterhash.is_set || is_set(greouterhash.yfilter)) leaf_name_data.push_back(greouterhash.get_name_leafdata());
    if (concatenation.is_set || is_set(concatenation.yfilter)) leaf_name_data.push_back(concatenation.get_name_leafdata());
    if (rotate.is_set || is_set(rotate.yfilter)) leaf_name_data.push_back(rotate.get_name_leafdata());
    if (ecmploadsharing.is_set || is_set(ecmploadsharing.yfilter)) leaf_name_data.push_back(ecmploadsharing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::IploadsharingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::IploadsharingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::IploadsharingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loadShareMode")
    {
        loadsharemode = value;
        loadsharemode.value_namespace = name_space;
        loadsharemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "universalID")
    {
        universalid = value;
        universalid.value_namespace = name_space;
        universalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "greOuterHash")
    {
        greouterhash = value;
        greouterhash.value_namespace = name_space;
        greouterhash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "concatenation")
    {
        concatenation = value;
        concatenation.value_namespace = name_space;
        concatenation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotate")
    {
        rotate = value;
        rotate.value_namespace = name_space;
        rotate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmpLoadSharing")
    {
        ecmploadsharing = value;
        ecmploadsharing.value_namespace = name_space;
        ecmploadsharing.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::IploadsharingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loadShareMode")
    {
        loadsharemode.yfilter = yfilter;
    }
    if(value_path == "universalID")
    {
        universalid.yfilter = yfilter;
    }
    if(value_path == "greOuterHash")
    {
        greouterhash.yfilter = yfilter;
    }
    if(value_path == "concatenation")
    {
        concatenation.yfilter = yfilter;
    }
    if(value_path == "rotate")
    {
        rotate.yfilter = yfilter;
    }
    if(value_path == "ecmpLoadSharing")
    {
        ecmploadsharing.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::IploadsharingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadShareMode" || name == "universalID" || name == "greOuterHash" || name == "concatenation" || name == "rotate" || name == "ecmpLoadSharing")
        return true;
    return false;
}

System::Ipv4Items::InstItems::LoadstatItems::LoadstatItems()
    :
    univeridranseed{YType::uint32, "univerIdRanSeed"},
    iploadshareoption{YType::str, "ipLoadshareOption"},
    hashflag{YType::enumeration, "hashFlag"},
    concat{YType::enumeration, "concat"},
    rotate{YType::uint16, "rotate"}
{

    yang_name = "loadstat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::LoadstatItems::~LoadstatItems()
{
}

bool System::Ipv4Items::InstItems::LoadstatItems::has_data() const
{
    if (is_presence_container) return true;
    return univeridranseed.is_set
	|| iploadshareoption.is_set
	|| hashflag.is_set
	|| concat.is_set
	|| rotate.is_set;
}

bool System::Ipv4Items::InstItems::LoadstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(univeridranseed.yfilter)
	|| ydk::is_set(iploadshareoption.yfilter)
	|| ydk::is_set(hashflag.yfilter)
	|| ydk::is_set(concat.yfilter)
	|| ydk::is_set(rotate.yfilter);
}

std::string System::Ipv4Items::InstItems::LoadstatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::LoadstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::LoadstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (univeridranseed.is_set || is_set(univeridranseed.yfilter)) leaf_name_data.push_back(univeridranseed.get_name_leafdata());
    if (iploadshareoption.is_set || is_set(iploadshareoption.yfilter)) leaf_name_data.push_back(iploadshareoption.get_name_leafdata());
    if (hashflag.is_set || is_set(hashflag.yfilter)) leaf_name_data.push_back(hashflag.get_name_leafdata());
    if (concat.is_set || is_set(concat.yfilter)) leaf_name_data.push_back(concat.get_name_leafdata());
    if (rotate.is_set || is_set(rotate.yfilter)) leaf_name_data.push_back(rotate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::LoadstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::LoadstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::LoadstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "univerIdRanSeed")
    {
        univeridranseed = value;
        univeridranseed.value_namespace = name_space;
        univeridranseed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipLoadshareOption")
    {
        iploadshareoption = value;
        iploadshareoption.value_namespace = name_space;
        iploadshareoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashFlag")
    {
        hashflag = value;
        hashflag.value_namespace = name_space;
        hashflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "concat")
    {
        concat = value;
        concat.value_namespace = name_space;
        concat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotate")
    {
        rotate = value;
        rotate.value_namespace = name_space;
        rotate.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::LoadstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "univerIdRanSeed")
    {
        univeridranseed.yfilter = yfilter;
    }
    if(value_path == "ipLoadshareOption")
    {
        iploadshareoption.yfilter = yfilter;
    }
    if(value_path == "hashFlag")
    {
        hashflag.yfilter = yfilter;
    }
    if(value_path == "concat")
    {
        concat.yfilter = yfilter;
    }
    if(value_path == "rotate")
    {
        rotate.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::LoadstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "univerIdRanSeed" || name == "ipLoadshareOption" || name == "hashFlag" || name == "concat" || name == "rotate")
        return true;
    return false;
}

System::Ipv4Items::InstItems::IptrafficstatItems::IptrafficstatItems()
    :
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"},
    consumed{YType::uint32, "consumed"},
    fwducast{YType::uint32, "fwdUcast"},
    fwdmcast{YType::uint32, "fwdMcast"},
    fwdlabel{YType::uint32, "fwdLabel"},
    ingressmcecfwdpkts{YType::uint32, "ingressMcecFwdPkts"},
    optsend{YType::uint32, "optsEnd"},
    optsnop{YType::uint32, "optsNop"},
    optsbsec{YType::uint32, "optsBsec"},
    optslsrr{YType::uint32, "optsLsrr"},
    optstimestamp{YType::uint32, "optsTimestamp"},
    optsesec{YType::uint32, "optsEsec"},
    optsrecordroute{YType::uint32, "optsRecordRoute"},
    optsstrsrcroute{YType::uint32, "optsStrsrcRoute"},
    optsalert{YType::uint32, "optsAlert"},
    optsother{YType::uint32, "optsOther"},
    frag{YType::uint32, "frag"},
    fragmented{YType::uint32, "fragmented"},
    outfrag{YType::uint32, "outFrag"},
    fragdrop{YType::uint32, "fragDrop"},
    cantfrag{YType::uint32, "cantFrag"},
    reasm{YType::uint32, "reasm"},
    fragto{YType::uint32, "fragTO"}
{

    yang_name = "iptrafficstat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::IptrafficstatItems::~IptrafficstatItems()
{
}

bool System::Ipv4Items::InstItems::IptrafficstatItems::has_data() const
{
    if (is_presence_container) return true;
    return received.is_set
	|| sent.is_set
	|| consumed.is_set
	|| fwducast.is_set
	|| fwdmcast.is_set
	|| fwdlabel.is_set
	|| ingressmcecfwdpkts.is_set
	|| optsend.is_set
	|| optsnop.is_set
	|| optsbsec.is_set
	|| optslsrr.is_set
	|| optstimestamp.is_set
	|| optsesec.is_set
	|| optsrecordroute.is_set
	|| optsstrsrcroute.is_set
	|| optsalert.is_set
	|| optsother.is_set
	|| frag.is_set
	|| fragmented.is_set
	|| outfrag.is_set
	|| fragdrop.is_set
	|| cantfrag.is_set
	|| reasm.is_set
	|| fragto.is_set;
}

bool System::Ipv4Items::InstItems::IptrafficstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(consumed.yfilter)
	|| ydk::is_set(fwducast.yfilter)
	|| ydk::is_set(fwdmcast.yfilter)
	|| ydk::is_set(fwdlabel.yfilter)
	|| ydk::is_set(ingressmcecfwdpkts.yfilter)
	|| ydk::is_set(optsend.yfilter)
	|| ydk::is_set(optsnop.yfilter)
	|| ydk::is_set(optsbsec.yfilter)
	|| ydk::is_set(optslsrr.yfilter)
	|| ydk::is_set(optstimestamp.yfilter)
	|| ydk::is_set(optsesec.yfilter)
	|| ydk::is_set(optsrecordroute.yfilter)
	|| ydk::is_set(optsstrsrcroute.yfilter)
	|| ydk::is_set(optsalert.yfilter)
	|| ydk::is_set(optsother.yfilter)
	|| ydk::is_set(frag.yfilter)
	|| ydk::is_set(fragmented.yfilter)
	|| ydk::is_set(outfrag.yfilter)
	|| ydk::is_set(fragdrop.yfilter)
	|| ydk::is_set(cantfrag.yfilter)
	|| ydk::is_set(reasm.yfilter)
	|| ydk::is_set(fragto.yfilter);
}

std::string System::Ipv4Items::InstItems::IptrafficstatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::IptrafficstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iptrafficstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::IptrafficstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (consumed.is_set || is_set(consumed.yfilter)) leaf_name_data.push_back(consumed.get_name_leafdata());
    if (fwducast.is_set || is_set(fwducast.yfilter)) leaf_name_data.push_back(fwducast.get_name_leafdata());
    if (fwdmcast.is_set || is_set(fwdmcast.yfilter)) leaf_name_data.push_back(fwdmcast.get_name_leafdata());
    if (fwdlabel.is_set || is_set(fwdlabel.yfilter)) leaf_name_data.push_back(fwdlabel.get_name_leafdata());
    if (ingressmcecfwdpkts.is_set || is_set(ingressmcecfwdpkts.yfilter)) leaf_name_data.push_back(ingressmcecfwdpkts.get_name_leafdata());
    if (optsend.is_set || is_set(optsend.yfilter)) leaf_name_data.push_back(optsend.get_name_leafdata());
    if (optsnop.is_set || is_set(optsnop.yfilter)) leaf_name_data.push_back(optsnop.get_name_leafdata());
    if (optsbsec.is_set || is_set(optsbsec.yfilter)) leaf_name_data.push_back(optsbsec.get_name_leafdata());
    if (optslsrr.is_set || is_set(optslsrr.yfilter)) leaf_name_data.push_back(optslsrr.get_name_leafdata());
    if (optstimestamp.is_set || is_set(optstimestamp.yfilter)) leaf_name_data.push_back(optstimestamp.get_name_leafdata());
    if (optsesec.is_set || is_set(optsesec.yfilter)) leaf_name_data.push_back(optsesec.get_name_leafdata());
    if (optsrecordroute.is_set || is_set(optsrecordroute.yfilter)) leaf_name_data.push_back(optsrecordroute.get_name_leafdata());
    if (optsstrsrcroute.is_set || is_set(optsstrsrcroute.yfilter)) leaf_name_data.push_back(optsstrsrcroute.get_name_leafdata());
    if (optsalert.is_set || is_set(optsalert.yfilter)) leaf_name_data.push_back(optsalert.get_name_leafdata());
    if (optsother.is_set || is_set(optsother.yfilter)) leaf_name_data.push_back(optsother.get_name_leafdata());
    if (frag.is_set || is_set(frag.yfilter)) leaf_name_data.push_back(frag.get_name_leafdata());
    if (fragmented.is_set || is_set(fragmented.yfilter)) leaf_name_data.push_back(fragmented.get_name_leafdata());
    if (outfrag.is_set || is_set(outfrag.yfilter)) leaf_name_data.push_back(outfrag.get_name_leafdata());
    if (fragdrop.is_set || is_set(fragdrop.yfilter)) leaf_name_data.push_back(fragdrop.get_name_leafdata());
    if (cantfrag.is_set || is_set(cantfrag.yfilter)) leaf_name_data.push_back(cantfrag.get_name_leafdata());
    if (reasm.is_set || is_set(reasm.yfilter)) leaf_name_data.push_back(reasm.get_name_leafdata());
    if (fragto.is_set || is_set(fragto.yfilter)) leaf_name_data.push_back(fragto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::IptrafficstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::IptrafficstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::IptrafficstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "consumed")
    {
        consumed = value;
        consumed.value_namespace = name_space;
        consumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdUcast")
    {
        fwducast = value;
        fwducast.value_namespace = name_space;
        fwducast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdMcast")
    {
        fwdmcast = value;
        fwdmcast.value_namespace = name_space;
        fwdmcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdLabel")
    {
        fwdlabel = value;
        fwdlabel.value_namespace = name_space;
        fwdlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressMcecFwdPkts")
    {
        ingressmcecfwdpkts = value;
        ingressmcecfwdpkts.value_namespace = name_space;
        ingressmcecfwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsEnd")
    {
        optsend = value;
        optsend.value_namespace = name_space;
        optsend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsNop")
    {
        optsnop = value;
        optsnop.value_namespace = name_space;
        optsnop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsBsec")
    {
        optsbsec = value;
        optsbsec.value_namespace = name_space;
        optsbsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsLsrr")
    {
        optslsrr = value;
        optslsrr.value_namespace = name_space;
        optslsrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsTimestamp")
    {
        optstimestamp = value;
        optstimestamp.value_namespace = name_space;
        optstimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsEsec")
    {
        optsesec = value;
        optsesec.value_namespace = name_space;
        optsesec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsRecordRoute")
    {
        optsrecordroute = value;
        optsrecordroute.value_namespace = name_space;
        optsrecordroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsStrsrcRoute")
    {
        optsstrsrcroute = value;
        optsstrsrcroute.value_namespace = name_space;
        optsstrsrcroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsAlert")
    {
        optsalert = value;
        optsalert.value_namespace = name_space;
        optsalert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optsOther")
    {
        optsother = value;
        optsother.value_namespace = name_space;
        optsother.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frag")
    {
        frag = value;
        frag.value_namespace = name_space;
        frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmented")
    {
        fragmented = value;
        fragmented.value_namespace = name_space;
        fragmented.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outFrag")
    {
        outfrag = value;
        outfrag.value_namespace = name_space;
        outfrag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragDrop")
    {
        fragdrop = value;
        fragdrop.value_namespace = name_space;
        fragdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cantFrag")
    {
        cantfrag = value;
        cantfrag.value_namespace = name_space;
        cantfrag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasm")
    {
        reasm = value;
        reasm.value_namespace = name_space;
        reasm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragTO")
    {
        fragto = value;
        fragto.value_namespace = name_space;
        fragto.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::IptrafficstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "consumed")
    {
        consumed.yfilter = yfilter;
    }
    if(value_path == "fwdUcast")
    {
        fwducast.yfilter = yfilter;
    }
    if(value_path == "fwdMcast")
    {
        fwdmcast.yfilter = yfilter;
    }
    if(value_path == "fwdLabel")
    {
        fwdlabel.yfilter = yfilter;
    }
    if(value_path == "ingressMcecFwdPkts")
    {
        ingressmcecfwdpkts.yfilter = yfilter;
    }
    if(value_path == "optsEnd")
    {
        optsend.yfilter = yfilter;
    }
    if(value_path == "optsNop")
    {
        optsnop.yfilter = yfilter;
    }
    if(value_path == "optsBsec")
    {
        optsbsec.yfilter = yfilter;
    }
    if(value_path == "optsLsrr")
    {
        optslsrr.yfilter = yfilter;
    }
    if(value_path == "optsTimestamp")
    {
        optstimestamp.yfilter = yfilter;
    }
    if(value_path == "optsEsec")
    {
        optsesec.yfilter = yfilter;
    }
    if(value_path == "optsRecordRoute")
    {
        optsrecordroute.yfilter = yfilter;
    }
    if(value_path == "optsStrsrcRoute")
    {
        optsstrsrcroute.yfilter = yfilter;
    }
    if(value_path == "optsAlert")
    {
        optsalert.yfilter = yfilter;
    }
    if(value_path == "optsOther")
    {
        optsother.yfilter = yfilter;
    }
    if(value_path == "frag")
    {
        frag.yfilter = yfilter;
    }
    if(value_path == "fragmented")
    {
        fragmented.yfilter = yfilter;
    }
    if(value_path == "outFrag")
    {
        outfrag.yfilter = yfilter;
    }
    if(value_path == "fragDrop")
    {
        fragdrop.yfilter = yfilter;
    }
    if(value_path == "cantFrag")
    {
        cantfrag.yfilter = yfilter;
    }
    if(value_path == "reasm")
    {
        reasm.yfilter = yfilter;
    }
    if(value_path == "fragTO")
    {
        fragto.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::IptrafficstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "sent" || name == "consumed" || name == "fwdUcast" || name == "fwdMcast" || name == "fwdLabel" || name == "ingressMcecFwdPkts" || name == "optsEnd" || name == "optsNop" || name == "optsBsec" || name == "optsLsrr" || name == "optsTimestamp" || name == "optsEsec" || name == "optsRecordRoute" || name == "optsStrsrcRoute" || name == "optsAlert" || name == "optsOther" || name == "frag" || name == "fragmented" || name == "outFrag" || name == "fragDrop" || name == "cantFrag" || name == "reasm" || name == "fragTO")
        return true;
    return false;
}

System::Ipv4Items::InstItems::IptrafficerrstatItems::IptrafficerrstatItems()
    :
    badcsum{YType::uint32, "badCsum"},
    toosmall{YType::uint32, "tooSmall"},
    badver{YType::uint32, "badVer"},
    badhlen{YType::uint32, "badHLen"},
    badlen{YType::uint32, "badLen"},
    baddest{YType::uint32, "badDest"},
    badttl{YType::uint32, "badTTL"},
    cantfwd{YType::uint32, "cantFwd"},
    outdrop{YType::uint32, "outDrop"},
    badencap{YType::uint32, "badEncap"},
    noroute{YType::uint32, "noRoute"},
    noproto{YType::uint32, "noProto"},
    badoptions{YType::uint32, "badOptions"},
    vincimigpkts{YType::uint32, "vinciMigPkts"},
    snoopsuccess{YType::uint32, "snoopSuccess"},
    sviioddown{YType::uint32, "sviIodDown"},
    restartpktdrop{YType::uint32, "restartPktDrop"},
    mbuferrcount{YType::uint32, "mbufErrCount"},
    badcntxtiddrop{YType::uint32, "badCntxtIdDrop"},
    rpfdrop{YType::uint32, "rpfDrop"},
    badgwmacdrop{YType::uint32, "badGwMacDrop"},
    ipsoptionfail{YType::uint32, "ipsOptionFail"},
    natindrop{YType::uint32, "natInDrop"},
    natoutdrop{YType::uint32, "natOutDrop"},
    ipsmfwdfail{YType::uint32, "ipsMfwdFail"},
    ipslispdrop{YType::uint32, "ipsLispDrop"},
    ipslispdecapdrop{YType::uint32, "ipsLispDecapDrop"},
    ipslispencapdrop{YType::uint32, "ipsLispEncapDrop"},
    ipslispencap{YType::uint32, "ipsLispEncap"},
    ipsmfwdcopydrop{YType::uint32, "ipsMfwdCopyDrop"},
    ipsrareassdrop{YType::uint32, "ipsRaReassDrop"},
    ipsicmpredirprocdrop{YType::uint32, "ipsIcmpRedirProcDrop"},
    ipsifmgrinitfail{YType::uint32, "ipsIfmgrInitFail"},
    ipsinvalidfilter{YType::uint32, "ipsInvalidFilter"},
    ipsinvalidl2msg{YType::uint32, "ipsInvalidL2msg"},
    aclingressdrop{YType::uint32, "aclIngressDrop"},
    aclegressdrop{YType::uint32, "aclEgressDrop"},
    acldirbcastdrop{YType::uint32, "aclDirBcastDrop"}
{

    yang_name = "iptrafficerrstat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::IptrafficerrstatItems::~IptrafficerrstatItems()
{
}

bool System::Ipv4Items::InstItems::IptrafficerrstatItems::has_data() const
{
    if (is_presence_container) return true;
    return badcsum.is_set
	|| toosmall.is_set
	|| badver.is_set
	|| badhlen.is_set
	|| badlen.is_set
	|| baddest.is_set
	|| badttl.is_set
	|| cantfwd.is_set
	|| outdrop.is_set
	|| badencap.is_set
	|| noroute.is_set
	|| noproto.is_set
	|| badoptions.is_set
	|| vincimigpkts.is_set
	|| snoopsuccess.is_set
	|| sviioddown.is_set
	|| restartpktdrop.is_set
	|| mbuferrcount.is_set
	|| badcntxtiddrop.is_set
	|| rpfdrop.is_set
	|| badgwmacdrop.is_set
	|| ipsoptionfail.is_set
	|| natindrop.is_set
	|| natoutdrop.is_set
	|| ipsmfwdfail.is_set
	|| ipslispdrop.is_set
	|| ipslispdecapdrop.is_set
	|| ipslispencapdrop.is_set
	|| ipslispencap.is_set
	|| ipsmfwdcopydrop.is_set
	|| ipsrareassdrop.is_set
	|| ipsicmpredirprocdrop.is_set
	|| ipsifmgrinitfail.is_set
	|| ipsinvalidfilter.is_set
	|| ipsinvalidl2msg.is_set
	|| aclingressdrop.is_set
	|| aclegressdrop.is_set
	|| acldirbcastdrop.is_set;
}

bool System::Ipv4Items::InstItems::IptrafficerrstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(badcsum.yfilter)
	|| ydk::is_set(toosmall.yfilter)
	|| ydk::is_set(badver.yfilter)
	|| ydk::is_set(badhlen.yfilter)
	|| ydk::is_set(badlen.yfilter)
	|| ydk::is_set(baddest.yfilter)
	|| ydk::is_set(badttl.yfilter)
	|| ydk::is_set(cantfwd.yfilter)
	|| ydk::is_set(outdrop.yfilter)
	|| ydk::is_set(badencap.yfilter)
	|| ydk::is_set(noroute.yfilter)
	|| ydk::is_set(noproto.yfilter)
	|| ydk::is_set(badoptions.yfilter)
	|| ydk::is_set(vincimigpkts.yfilter)
	|| ydk::is_set(snoopsuccess.yfilter)
	|| ydk::is_set(sviioddown.yfilter)
	|| ydk::is_set(restartpktdrop.yfilter)
	|| ydk::is_set(mbuferrcount.yfilter)
	|| ydk::is_set(badcntxtiddrop.yfilter)
	|| ydk::is_set(rpfdrop.yfilter)
	|| ydk::is_set(badgwmacdrop.yfilter)
	|| ydk::is_set(ipsoptionfail.yfilter)
	|| ydk::is_set(natindrop.yfilter)
	|| ydk::is_set(natoutdrop.yfilter)
	|| ydk::is_set(ipsmfwdfail.yfilter)
	|| ydk::is_set(ipslispdrop.yfilter)
	|| ydk::is_set(ipslispdecapdrop.yfilter)
	|| ydk::is_set(ipslispencapdrop.yfilter)
	|| ydk::is_set(ipslispencap.yfilter)
	|| ydk::is_set(ipsmfwdcopydrop.yfilter)
	|| ydk::is_set(ipsrareassdrop.yfilter)
	|| ydk::is_set(ipsicmpredirprocdrop.yfilter)
	|| ydk::is_set(ipsifmgrinitfail.yfilter)
	|| ydk::is_set(ipsinvalidfilter.yfilter)
	|| ydk::is_set(ipsinvalidl2msg.yfilter)
	|| ydk::is_set(aclingressdrop.yfilter)
	|| ydk::is_set(aclegressdrop.yfilter)
	|| ydk::is_set(acldirbcastdrop.yfilter);
}

std::string System::Ipv4Items::InstItems::IptrafficerrstatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::IptrafficerrstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iptrafficerrstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::IptrafficerrstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (badcsum.is_set || is_set(badcsum.yfilter)) leaf_name_data.push_back(badcsum.get_name_leafdata());
    if (toosmall.is_set || is_set(toosmall.yfilter)) leaf_name_data.push_back(toosmall.get_name_leafdata());
    if (badver.is_set || is_set(badver.yfilter)) leaf_name_data.push_back(badver.get_name_leafdata());
    if (badhlen.is_set || is_set(badhlen.yfilter)) leaf_name_data.push_back(badhlen.get_name_leafdata());
    if (badlen.is_set || is_set(badlen.yfilter)) leaf_name_data.push_back(badlen.get_name_leafdata());
    if (baddest.is_set || is_set(baddest.yfilter)) leaf_name_data.push_back(baddest.get_name_leafdata());
    if (badttl.is_set || is_set(badttl.yfilter)) leaf_name_data.push_back(badttl.get_name_leafdata());
    if (cantfwd.is_set || is_set(cantfwd.yfilter)) leaf_name_data.push_back(cantfwd.get_name_leafdata());
    if (outdrop.is_set || is_set(outdrop.yfilter)) leaf_name_data.push_back(outdrop.get_name_leafdata());
    if (badencap.is_set || is_set(badencap.yfilter)) leaf_name_data.push_back(badencap.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());
    if (noproto.is_set || is_set(noproto.yfilter)) leaf_name_data.push_back(noproto.get_name_leafdata());
    if (badoptions.is_set || is_set(badoptions.yfilter)) leaf_name_data.push_back(badoptions.get_name_leafdata());
    if (vincimigpkts.is_set || is_set(vincimigpkts.yfilter)) leaf_name_data.push_back(vincimigpkts.get_name_leafdata());
    if (snoopsuccess.is_set || is_set(snoopsuccess.yfilter)) leaf_name_data.push_back(snoopsuccess.get_name_leafdata());
    if (sviioddown.is_set || is_set(sviioddown.yfilter)) leaf_name_data.push_back(sviioddown.get_name_leafdata());
    if (restartpktdrop.is_set || is_set(restartpktdrop.yfilter)) leaf_name_data.push_back(restartpktdrop.get_name_leafdata());
    if (mbuferrcount.is_set || is_set(mbuferrcount.yfilter)) leaf_name_data.push_back(mbuferrcount.get_name_leafdata());
    if (badcntxtiddrop.is_set || is_set(badcntxtiddrop.yfilter)) leaf_name_data.push_back(badcntxtiddrop.get_name_leafdata());
    if (rpfdrop.is_set || is_set(rpfdrop.yfilter)) leaf_name_data.push_back(rpfdrop.get_name_leafdata());
    if (badgwmacdrop.is_set || is_set(badgwmacdrop.yfilter)) leaf_name_data.push_back(badgwmacdrop.get_name_leafdata());
    if (ipsoptionfail.is_set || is_set(ipsoptionfail.yfilter)) leaf_name_data.push_back(ipsoptionfail.get_name_leafdata());
    if (natindrop.is_set || is_set(natindrop.yfilter)) leaf_name_data.push_back(natindrop.get_name_leafdata());
    if (natoutdrop.is_set || is_set(natoutdrop.yfilter)) leaf_name_data.push_back(natoutdrop.get_name_leafdata());
    if (ipsmfwdfail.is_set || is_set(ipsmfwdfail.yfilter)) leaf_name_data.push_back(ipsmfwdfail.get_name_leafdata());
    if (ipslispdrop.is_set || is_set(ipslispdrop.yfilter)) leaf_name_data.push_back(ipslispdrop.get_name_leafdata());
    if (ipslispdecapdrop.is_set || is_set(ipslispdecapdrop.yfilter)) leaf_name_data.push_back(ipslispdecapdrop.get_name_leafdata());
    if (ipslispencapdrop.is_set || is_set(ipslispencapdrop.yfilter)) leaf_name_data.push_back(ipslispencapdrop.get_name_leafdata());
    if (ipslispencap.is_set || is_set(ipslispencap.yfilter)) leaf_name_data.push_back(ipslispencap.get_name_leafdata());
    if (ipsmfwdcopydrop.is_set || is_set(ipsmfwdcopydrop.yfilter)) leaf_name_data.push_back(ipsmfwdcopydrop.get_name_leafdata());
    if (ipsrareassdrop.is_set || is_set(ipsrareassdrop.yfilter)) leaf_name_data.push_back(ipsrareassdrop.get_name_leafdata());
    if (ipsicmpredirprocdrop.is_set || is_set(ipsicmpredirprocdrop.yfilter)) leaf_name_data.push_back(ipsicmpredirprocdrop.get_name_leafdata());
    if (ipsifmgrinitfail.is_set || is_set(ipsifmgrinitfail.yfilter)) leaf_name_data.push_back(ipsifmgrinitfail.get_name_leafdata());
    if (ipsinvalidfilter.is_set || is_set(ipsinvalidfilter.yfilter)) leaf_name_data.push_back(ipsinvalidfilter.get_name_leafdata());
    if (ipsinvalidl2msg.is_set || is_set(ipsinvalidl2msg.yfilter)) leaf_name_data.push_back(ipsinvalidl2msg.get_name_leafdata());
    if (aclingressdrop.is_set || is_set(aclingressdrop.yfilter)) leaf_name_data.push_back(aclingressdrop.get_name_leafdata());
    if (aclegressdrop.is_set || is_set(aclegressdrop.yfilter)) leaf_name_data.push_back(aclegressdrop.get_name_leafdata());
    if (acldirbcastdrop.is_set || is_set(acldirbcastdrop.yfilter)) leaf_name_data.push_back(acldirbcastdrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::IptrafficerrstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::IptrafficerrstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::IptrafficerrstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "badCsum")
    {
        badcsum = value;
        badcsum.value_namespace = name_space;
        badcsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooSmall")
    {
        toosmall = value;
        toosmall.value_namespace = name_space;
        toosmall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVer")
    {
        badver = value;
        badver.value_namespace = name_space;
        badver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badHLen")
    {
        badhlen = value;
        badhlen.value_namespace = name_space;
        badhlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLen")
    {
        badlen = value;
        badlen.value_namespace = name_space;
        badlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badDest")
    {
        baddest = value;
        baddest.value_namespace = name_space;
        baddest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badTTL")
    {
        badttl = value;
        badttl.value_namespace = name_space;
        badttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cantFwd")
    {
        cantfwd = value;
        cantfwd.value_namespace = name_space;
        cantfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outDrop")
    {
        outdrop = value;
        outdrop.value_namespace = name_space;
        outdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badEncap")
    {
        badencap = value;
        badencap.value_namespace = name_space;
        badencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noProto")
    {
        noproto = value;
        noproto.value_namespace = name_space;
        noproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badOptions")
    {
        badoptions = value;
        badoptions.value_namespace = name_space;
        badoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vinciMigPkts")
    {
        vincimigpkts = value;
        vincimigpkts.value_namespace = name_space;
        vincimigpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopSuccess")
    {
        snoopsuccess = value;
        snoopsuccess.value_namespace = name_space;
        snoopsuccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sviIodDown")
    {
        sviioddown = value;
        sviioddown.value_namespace = name_space;
        sviioddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartPktDrop")
    {
        restartpktdrop = value;
        restartpktdrop.value_namespace = name_space;
        restartpktdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbufErrCount")
    {
        mbuferrcount = value;
        mbuferrcount.value_namespace = name_space;
        mbuferrcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCntxtIdDrop")
    {
        badcntxtiddrop = value;
        badcntxtiddrop.value_namespace = name_space;
        badcntxtiddrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfDrop")
    {
        rpfdrop = value;
        rpfdrop.value_namespace = name_space;
        rpfdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badGwMacDrop")
    {
        badgwmacdrop = value;
        badgwmacdrop.value_namespace = name_space;
        badgwmacdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsOptionFail")
    {
        ipsoptionfail = value;
        ipsoptionfail.value_namespace = name_space;
        ipsoptionfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "natInDrop")
    {
        natindrop = value;
        natindrop.value_namespace = name_space;
        natindrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "natOutDrop")
    {
        natoutdrop = value;
        natoutdrop.value_namespace = name_space;
        natoutdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsMfwdFail")
    {
        ipsmfwdfail = value;
        ipsmfwdfail.value_namespace = name_space;
        ipsmfwdfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsLispDrop")
    {
        ipslispdrop = value;
        ipslispdrop.value_namespace = name_space;
        ipslispdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsLispDecapDrop")
    {
        ipslispdecapdrop = value;
        ipslispdecapdrop.value_namespace = name_space;
        ipslispdecapdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsLispEncapDrop")
    {
        ipslispencapdrop = value;
        ipslispencapdrop.value_namespace = name_space;
        ipslispencapdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsLispEncap")
    {
        ipslispencap = value;
        ipslispencap.value_namespace = name_space;
        ipslispencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsMfwdCopyDrop")
    {
        ipsmfwdcopydrop = value;
        ipsmfwdcopydrop.value_namespace = name_space;
        ipsmfwdcopydrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsRaReassDrop")
    {
        ipsrareassdrop = value;
        ipsrareassdrop.value_namespace = name_space;
        ipsrareassdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsIcmpRedirProcDrop")
    {
        ipsicmpredirprocdrop = value;
        ipsicmpredirprocdrop.value_namespace = name_space;
        ipsicmpredirprocdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsIfmgrInitFail")
    {
        ipsifmgrinitfail = value;
        ipsifmgrinitfail.value_namespace = name_space;
        ipsifmgrinitfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsInvalidFilter")
    {
        ipsinvalidfilter = value;
        ipsinvalidfilter.value_namespace = name_space;
        ipsinvalidfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsInvalidL2msg")
    {
        ipsinvalidl2msg = value;
        ipsinvalidl2msg.value_namespace = name_space;
        ipsinvalidl2msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclIngressDrop")
    {
        aclingressdrop = value;
        aclingressdrop.value_namespace = name_space;
        aclingressdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclEgressDrop")
    {
        aclegressdrop = value;
        aclegressdrop.value_namespace = name_space;
        aclegressdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclDirBcastDrop")
    {
        acldirbcastdrop = value;
        acldirbcastdrop.value_namespace = name_space;
        acldirbcastdrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::IptrafficerrstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "badCsum")
    {
        badcsum.yfilter = yfilter;
    }
    if(value_path == "tooSmall")
    {
        toosmall.yfilter = yfilter;
    }
    if(value_path == "badVer")
    {
        badver.yfilter = yfilter;
    }
    if(value_path == "badHLen")
    {
        badhlen.yfilter = yfilter;
    }
    if(value_path == "badLen")
    {
        badlen.yfilter = yfilter;
    }
    if(value_path == "badDest")
    {
        baddest.yfilter = yfilter;
    }
    if(value_path == "badTTL")
    {
        badttl.yfilter = yfilter;
    }
    if(value_path == "cantFwd")
    {
        cantfwd.yfilter = yfilter;
    }
    if(value_path == "outDrop")
    {
        outdrop.yfilter = yfilter;
    }
    if(value_path == "badEncap")
    {
        badencap.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
    if(value_path == "noProto")
    {
        noproto.yfilter = yfilter;
    }
    if(value_path == "badOptions")
    {
        badoptions.yfilter = yfilter;
    }
    if(value_path == "vinciMigPkts")
    {
        vincimigpkts.yfilter = yfilter;
    }
    if(value_path == "snoopSuccess")
    {
        snoopsuccess.yfilter = yfilter;
    }
    if(value_path == "sviIodDown")
    {
        sviioddown.yfilter = yfilter;
    }
    if(value_path == "restartPktDrop")
    {
        restartpktdrop.yfilter = yfilter;
    }
    if(value_path == "mbufErrCount")
    {
        mbuferrcount.yfilter = yfilter;
    }
    if(value_path == "badCntxtIdDrop")
    {
        badcntxtiddrop.yfilter = yfilter;
    }
    if(value_path == "rpfDrop")
    {
        rpfdrop.yfilter = yfilter;
    }
    if(value_path == "badGwMacDrop")
    {
        badgwmacdrop.yfilter = yfilter;
    }
    if(value_path == "ipsOptionFail")
    {
        ipsoptionfail.yfilter = yfilter;
    }
    if(value_path == "natInDrop")
    {
        natindrop.yfilter = yfilter;
    }
    if(value_path == "natOutDrop")
    {
        natoutdrop.yfilter = yfilter;
    }
    if(value_path == "ipsMfwdFail")
    {
        ipsmfwdfail.yfilter = yfilter;
    }
    if(value_path == "ipsLispDrop")
    {
        ipslispdrop.yfilter = yfilter;
    }
    if(value_path == "ipsLispDecapDrop")
    {
        ipslispdecapdrop.yfilter = yfilter;
    }
    if(value_path == "ipsLispEncapDrop")
    {
        ipslispencapdrop.yfilter = yfilter;
    }
    if(value_path == "ipsLispEncap")
    {
        ipslispencap.yfilter = yfilter;
    }
    if(value_path == "ipsMfwdCopyDrop")
    {
        ipsmfwdcopydrop.yfilter = yfilter;
    }
    if(value_path == "ipsRaReassDrop")
    {
        ipsrareassdrop.yfilter = yfilter;
    }
    if(value_path == "ipsIcmpRedirProcDrop")
    {
        ipsicmpredirprocdrop.yfilter = yfilter;
    }
    if(value_path == "ipsIfmgrInitFail")
    {
        ipsifmgrinitfail.yfilter = yfilter;
    }
    if(value_path == "ipsInvalidFilter")
    {
        ipsinvalidfilter.yfilter = yfilter;
    }
    if(value_path == "ipsInvalidL2msg")
    {
        ipsinvalidl2msg.yfilter = yfilter;
    }
    if(value_path == "aclIngressDrop")
    {
        aclingressdrop.yfilter = yfilter;
    }
    if(value_path == "aclEgressDrop")
    {
        aclegressdrop.yfilter = yfilter;
    }
    if(value_path == "aclDirBcastDrop")
    {
        acldirbcastdrop.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::IptrafficerrstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "badCsum" || name == "tooSmall" || name == "badVer" || name == "badHLen" || name == "badLen" || name == "badDest" || name == "badTTL" || name == "cantFwd" || name == "outDrop" || name == "badEncap" || name == "noRoute" || name == "noProto" || name == "badOptions" || name == "vinciMigPkts" || name == "snoopSuccess" || name == "sviIodDown" || name == "restartPktDrop" || name == "mbufErrCount" || name == "badCntxtIdDrop" || name == "rpfDrop" || name == "badGwMacDrop" || name == "ipsOptionFail" || name == "natInDrop" || name == "natOutDrop" || name == "ipsMfwdFail" || name == "ipsLispDrop" || name == "ipsLispDecapDrop" || name == "ipsLispEncapDrop" || name == "ipsLispEncap" || name == "ipsMfwdCopyDrop" || name == "ipsRaReassDrop" || name == "ipsIcmpRedirProcDrop" || name == "ipsIfmgrInitFail" || name == "ipsInvalidFilter" || name == "ipsInvalidL2msg" || name == "aclIngressDrop" || name == "aclEgressDrop" || name == "aclDirBcastDrop")
        return true;
    return false;
}

System::Ipv4Items::InstItems::IcmptrafficstatItems::IcmptrafficstatItems()
    :
    txredir{YType::uint32, "txRedir"},
    txunreach{YType::uint32, "txUnreach"},
    txechoreq{YType::uint32, "txEchoReq"},
    txechoreply{YType::uint32, "txEchoReply"},
    txmaskreq{YType::uint32, "txMaskReq"},
    txmaskreply{YType::uint32, "txMaskReply"},
    txinforeq{YType::uint32, "txInfoReq"},
    txinforeply{YType::uint32, "txInfoReply"},
    txparamprob{YType::uint32, "txParamProb"},
    txsrcquench{YType::uint32, "txSrcQuench"},
    txtstampreq{YType::uint32, "txTstampReq"},
    txtstampreply{YType::uint32, "txTstampReply"},
    txtstampxceed{YType::uint32, "txTstampXceed"},
    txrtrsolicit{YType::uint32, "txRtrSolicit"},
    txrtradvert{YType::uint32, "txRtrAdvert"},
    outbadlen{YType::uint32, "outBadLen"},
    outencapfail{YType::uint32, "outEncapFail"},
    outxmitfail{YType::uint32, "outXmitFail"},
    icmporigreq{YType::uint32, "icmpOrigReq"},
    redirorigreq{YType::uint32, "redirOrigReq"},
    outerr{YType::uint32, "outErr"},
    oldshortip{YType::uint32, "oldShortIp"},
    oldicmp{YType::uint32, "oldIcmp"},
    errordrop{YType::uint32, "errorDrop"},
    rxredir{YType::uint32, "rxRedir"},
    rxunreach{YType::uint32, "rxUnreach"},
    rxechoreq{YType::uint32, "rxEchoReq"},
    rxechoreply{YType::uint32, "rxEchoReply"},
    rxmaskreq{YType::uint32, "rxMaskReq"},
    rxmaskreply{YType::uint32, "rxMaskReply"},
    rxinforeq{YType::uint32, "rxInfoReq"},
    rxinforeply{YType::uint32, "rxInfoReply"},
    rxparamprob{YType::uint32, "rxParamProb"},
    rxsrcquench{YType::uint32, "rxSrcQuench"},
    rxtstampreq{YType::uint32, "rxTstampReq"},
    rxtstampreply{YType::uint32, "rxTstampReply"},
    rxtimexceed{YType::uint32, "rxTimeXceed"},
    rxrtrsolicit{YType::uint32, "rxRtrSolicit"},
    rxrtradvert{YType::uint32, "rxRtrAdvert"},
    rxformaterror{YType::uint32, "rxFormatError"},
    rxcsumerror{YType::uint32, "rxCsumError"},
    icmplispprocessed{YType::uint32, "icmpLispProcessed"},
    icmpnoclients{YType::uint32, "icmpNoClients"},
    icmpconsumed{YType::uint32, "icmpConsumed"},
    icmpreplies{YType::uint32, "icmpReplies"},
    icmpreplydropinvldaddr{YType::uint32, "icmpReplyDropInvldAddr"},
    icmpreplydropinactaddr{YType::uint32, "icmpReplyDropInactAddr"},
    statslastreset{YType::str, "statsLastReset"}
{

    yang_name = "icmptrafficstat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::IcmptrafficstatItems::~IcmptrafficstatItems()
{
}

bool System::Ipv4Items::InstItems::IcmptrafficstatItems::has_data() const
{
    if (is_presence_container) return true;
    return txredir.is_set
	|| txunreach.is_set
	|| txechoreq.is_set
	|| txechoreply.is_set
	|| txmaskreq.is_set
	|| txmaskreply.is_set
	|| txinforeq.is_set
	|| txinforeply.is_set
	|| txparamprob.is_set
	|| txsrcquench.is_set
	|| txtstampreq.is_set
	|| txtstampreply.is_set
	|| txtstampxceed.is_set
	|| txrtrsolicit.is_set
	|| txrtradvert.is_set
	|| outbadlen.is_set
	|| outencapfail.is_set
	|| outxmitfail.is_set
	|| icmporigreq.is_set
	|| redirorigreq.is_set
	|| outerr.is_set
	|| oldshortip.is_set
	|| oldicmp.is_set
	|| errordrop.is_set
	|| rxredir.is_set
	|| rxunreach.is_set
	|| rxechoreq.is_set
	|| rxechoreply.is_set
	|| rxmaskreq.is_set
	|| rxmaskreply.is_set
	|| rxinforeq.is_set
	|| rxinforeply.is_set
	|| rxparamprob.is_set
	|| rxsrcquench.is_set
	|| rxtstampreq.is_set
	|| rxtstampreply.is_set
	|| rxtimexceed.is_set
	|| rxrtrsolicit.is_set
	|| rxrtradvert.is_set
	|| rxformaterror.is_set
	|| rxcsumerror.is_set
	|| icmplispprocessed.is_set
	|| icmpnoclients.is_set
	|| icmpconsumed.is_set
	|| icmpreplies.is_set
	|| icmpreplydropinvldaddr.is_set
	|| icmpreplydropinactaddr.is_set
	|| statslastreset.is_set;
}

bool System::Ipv4Items::InstItems::IcmptrafficstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txredir.yfilter)
	|| ydk::is_set(txunreach.yfilter)
	|| ydk::is_set(txechoreq.yfilter)
	|| ydk::is_set(txechoreply.yfilter)
	|| ydk::is_set(txmaskreq.yfilter)
	|| ydk::is_set(txmaskreply.yfilter)
	|| ydk::is_set(txinforeq.yfilter)
	|| ydk::is_set(txinforeply.yfilter)
	|| ydk::is_set(txparamprob.yfilter)
	|| ydk::is_set(txsrcquench.yfilter)
	|| ydk::is_set(txtstampreq.yfilter)
	|| ydk::is_set(txtstampreply.yfilter)
	|| ydk::is_set(txtstampxceed.yfilter)
	|| ydk::is_set(txrtrsolicit.yfilter)
	|| ydk::is_set(txrtradvert.yfilter)
	|| ydk::is_set(outbadlen.yfilter)
	|| ydk::is_set(outencapfail.yfilter)
	|| ydk::is_set(outxmitfail.yfilter)
	|| ydk::is_set(icmporigreq.yfilter)
	|| ydk::is_set(redirorigreq.yfilter)
	|| ydk::is_set(outerr.yfilter)
	|| ydk::is_set(oldshortip.yfilter)
	|| ydk::is_set(oldicmp.yfilter)
	|| ydk::is_set(errordrop.yfilter)
	|| ydk::is_set(rxredir.yfilter)
	|| ydk::is_set(rxunreach.yfilter)
	|| ydk::is_set(rxechoreq.yfilter)
	|| ydk::is_set(rxechoreply.yfilter)
	|| ydk::is_set(rxmaskreq.yfilter)
	|| ydk::is_set(rxmaskreply.yfilter)
	|| ydk::is_set(rxinforeq.yfilter)
	|| ydk::is_set(rxinforeply.yfilter)
	|| ydk::is_set(rxparamprob.yfilter)
	|| ydk::is_set(rxsrcquench.yfilter)
	|| ydk::is_set(rxtstampreq.yfilter)
	|| ydk::is_set(rxtstampreply.yfilter)
	|| ydk::is_set(rxtimexceed.yfilter)
	|| ydk::is_set(rxrtrsolicit.yfilter)
	|| ydk::is_set(rxrtradvert.yfilter)
	|| ydk::is_set(rxformaterror.yfilter)
	|| ydk::is_set(rxcsumerror.yfilter)
	|| ydk::is_set(icmplispprocessed.yfilter)
	|| ydk::is_set(icmpnoclients.yfilter)
	|| ydk::is_set(icmpconsumed.yfilter)
	|| ydk::is_set(icmpreplies.yfilter)
	|| ydk::is_set(icmpreplydropinvldaddr.yfilter)
	|| ydk::is_set(icmpreplydropinactaddr.yfilter)
	|| ydk::is_set(statslastreset.yfilter);
}

std::string System::Ipv4Items::InstItems::IcmptrafficstatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::IcmptrafficstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmptrafficstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::IcmptrafficstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txredir.is_set || is_set(txredir.yfilter)) leaf_name_data.push_back(txredir.get_name_leafdata());
    if (txunreach.is_set || is_set(txunreach.yfilter)) leaf_name_data.push_back(txunreach.get_name_leafdata());
    if (txechoreq.is_set || is_set(txechoreq.yfilter)) leaf_name_data.push_back(txechoreq.get_name_leafdata());
    if (txechoreply.is_set || is_set(txechoreply.yfilter)) leaf_name_data.push_back(txechoreply.get_name_leafdata());
    if (txmaskreq.is_set || is_set(txmaskreq.yfilter)) leaf_name_data.push_back(txmaskreq.get_name_leafdata());
    if (txmaskreply.is_set || is_set(txmaskreply.yfilter)) leaf_name_data.push_back(txmaskreply.get_name_leafdata());
    if (txinforeq.is_set || is_set(txinforeq.yfilter)) leaf_name_data.push_back(txinforeq.get_name_leafdata());
    if (txinforeply.is_set || is_set(txinforeply.yfilter)) leaf_name_data.push_back(txinforeply.get_name_leafdata());
    if (txparamprob.is_set || is_set(txparamprob.yfilter)) leaf_name_data.push_back(txparamprob.get_name_leafdata());
    if (txsrcquench.is_set || is_set(txsrcquench.yfilter)) leaf_name_data.push_back(txsrcquench.get_name_leafdata());
    if (txtstampreq.is_set || is_set(txtstampreq.yfilter)) leaf_name_data.push_back(txtstampreq.get_name_leafdata());
    if (txtstampreply.is_set || is_set(txtstampreply.yfilter)) leaf_name_data.push_back(txtstampreply.get_name_leafdata());
    if (txtstampxceed.is_set || is_set(txtstampxceed.yfilter)) leaf_name_data.push_back(txtstampxceed.get_name_leafdata());
    if (txrtrsolicit.is_set || is_set(txrtrsolicit.yfilter)) leaf_name_data.push_back(txrtrsolicit.get_name_leafdata());
    if (txrtradvert.is_set || is_set(txrtradvert.yfilter)) leaf_name_data.push_back(txrtradvert.get_name_leafdata());
    if (outbadlen.is_set || is_set(outbadlen.yfilter)) leaf_name_data.push_back(outbadlen.get_name_leafdata());
    if (outencapfail.is_set || is_set(outencapfail.yfilter)) leaf_name_data.push_back(outencapfail.get_name_leafdata());
    if (outxmitfail.is_set || is_set(outxmitfail.yfilter)) leaf_name_data.push_back(outxmitfail.get_name_leafdata());
    if (icmporigreq.is_set || is_set(icmporigreq.yfilter)) leaf_name_data.push_back(icmporigreq.get_name_leafdata());
    if (redirorigreq.is_set || is_set(redirorigreq.yfilter)) leaf_name_data.push_back(redirorigreq.get_name_leafdata());
    if (outerr.is_set || is_set(outerr.yfilter)) leaf_name_data.push_back(outerr.get_name_leafdata());
    if (oldshortip.is_set || is_set(oldshortip.yfilter)) leaf_name_data.push_back(oldshortip.get_name_leafdata());
    if (oldicmp.is_set || is_set(oldicmp.yfilter)) leaf_name_data.push_back(oldicmp.get_name_leafdata());
    if (errordrop.is_set || is_set(errordrop.yfilter)) leaf_name_data.push_back(errordrop.get_name_leafdata());
    if (rxredir.is_set || is_set(rxredir.yfilter)) leaf_name_data.push_back(rxredir.get_name_leafdata());
    if (rxunreach.is_set || is_set(rxunreach.yfilter)) leaf_name_data.push_back(rxunreach.get_name_leafdata());
    if (rxechoreq.is_set || is_set(rxechoreq.yfilter)) leaf_name_data.push_back(rxechoreq.get_name_leafdata());
    if (rxechoreply.is_set || is_set(rxechoreply.yfilter)) leaf_name_data.push_back(rxechoreply.get_name_leafdata());
    if (rxmaskreq.is_set || is_set(rxmaskreq.yfilter)) leaf_name_data.push_back(rxmaskreq.get_name_leafdata());
    if (rxmaskreply.is_set || is_set(rxmaskreply.yfilter)) leaf_name_data.push_back(rxmaskreply.get_name_leafdata());
    if (rxinforeq.is_set || is_set(rxinforeq.yfilter)) leaf_name_data.push_back(rxinforeq.get_name_leafdata());
    if (rxinforeply.is_set || is_set(rxinforeply.yfilter)) leaf_name_data.push_back(rxinforeply.get_name_leafdata());
    if (rxparamprob.is_set || is_set(rxparamprob.yfilter)) leaf_name_data.push_back(rxparamprob.get_name_leafdata());
    if (rxsrcquench.is_set || is_set(rxsrcquench.yfilter)) leaf_name_data.push_back(rxsrcquench.get_name_leafdata());
    if (rxtstampreq.is_set || is_set(rxtstampreq.yfilter)) leaf_name_data.push_back(rxtstampreq.get_name_leafdata());
    if (rxtstampreply.is_set || is_set(rxtstampreply.yfilter)) leaf_name_data.push_back(rxtstampreply.get_name_leafdata());
    if (rxtimexceed.is_set || is_set(rxtimexceed.yfilter)) leaf_name_data.push_back(rxtimexceed.get_name_leafdata());
    if (rxrtrsolicit.is_set || is_set(rxrtrsolicit.yfilter)) leaf_name_data.push_back(rxrtrsolicit.get_name_leafdata());
    if (rxrtradvert.is_set || is_set(rxrtradvert.yfilter)) leaf_name_data.push_back(rxrtradvert.get_name_leafdata());
    if (rxformaterror.is_set || is_set(rxformaterror.yfilter)) leaf_name_data.push_back(rxformaterror.get_name_leafdata());
    if (rxcsumerror.is_set || is_set(rxcsumerror.yfilter)) leaf_name_data.push_back(rxcsumerror.get_name_leafdata());
    if (icmplispprocessed.is_set || is_set(icmplispprocessed.yfilter)) leaf_name_data.push_back(icmplispprocessed.get_name_leafdata());
    if (icmpnoclients.is_set || is_set(icmpnoclients.yfilter)) leaf_name_data.push_back(icmpnoclients.get_name_leafdata());
    if (icmpconsumed.is_set || is_set(icmpconsumed.yfilter)) leaf_name_data.push_back(icmpconsumed.get_name_leafdata());
    if (icmpreplies.is_set || is_set(icmpreplies.yfilter)) leaf_name_data.push_back(icmpreplies.get_name_leafdata());
    if (icmpreplydropinvldaddr.is_set || is_set(icmpreplydropinvldaddr.yfilter)) leaf_name_data.push_back(icmpreplydropinvldaddr.get_name_leafdata());
    if (icmpreplydropinactaddr.is_set || is_set(icmpreplydropinactaddr.yfilter)) leaf_name_data.push_back(icmpreplydropinactaddr.get_name_leafdata());
    if (statslastreset.is_set || is_set(statslastreset.yfilter)) leaf_name_data.push_back(statslastreset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::IcmptrafficstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::IcmptrafficstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::IcmptrafficstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txRedir")
    {
        txredir = value;
        txredir.value_namespace = name_space;
        txredir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUnreach")
    {
        txunreach = value;
        txunreach.value_namespace = name_space;
        txunreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txEchoReq")
    {
        txechoreq = value;
        txechoreq.value_namespace = name_space;
        txechoreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txEchoReply")
    {
        txechoreply = value;
        txechoreply.value_namespace = name_space;
        txechoreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMaskReq")
    {
        txmaskreq = value;
        txmaskreq.value_namespace = name_space;
        txmaskreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMaskReply")
    {
        txmaskreply = value;
        txmaskreply.value_namespace = name_space;
        txmaskreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txInfoReq")
    {
        txinforeq = value;
        txinforeq.value_namespace = name_space;
        txinforeq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txInfoReply")
    {
        txinforeply = value;
        txinforeply.value_namespace = name_space;
        txinforeply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txParamProb")
    {
        txparamprob = value;
        txparamprob.value_namespace = name_space;
        txparamprob.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txSrcQuench")
    {
        txsrcquench = value;
        txsrcquench.value_namespace = name_space;
        txsrcquench.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txTstampReq")
    {
        txtstampreq = value;
        txtstampreq.value_namespace = name_space;
        txtstampreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txTstampReply")
    {
        txtstampreply = value;
        txtstampreply.value_namespace = name_space;
        txtstampreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txTstampXceed")
    {
        txtstampxceed = value;
        txtstampxceed.value_namespace = name_space;
        txtstampxceed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txRtrSolicit")
    {
        txrtrsolicit = value;
        txrtrsolicit.value_namespace = name_space;
        txrtrsolicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txRtrAdvert")
    {
        txrtradvert = value;
        txrtradvert.value_namespace = name_space;
        txrtradvert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outBadLen")
    {
        outbadlen = value;
        outbadlen.value_namespace = name_space;
        outbadlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outEncapFail")
    {
        outencapfail = value;
        outencapfail.value_namespace = name_space;
        outencapfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outXmitFail")
    {
        outxmitfail = value;
        outxmitfail.value_namespace = name_space;
        outxmitfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOrigReq")
    {
        icmporigreq = value;
        icmporigreq.value_namespace = name_space;
        icmporigreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirOrigReq")
    {
        redirorigreq = value;
        redirorigreq.value_namespace = name_space;
        redirorigreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outErr")
    {
        outerr = value;
        outerr.value_namespace = name_space;
        outerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldShortIp")
    {
        oldshortip = value;
        oldshortip.value_namespace = name_space;
        oldshortip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldIcmp")
    {
        oldicmp = value;
        oldicmp.value_namespace = name_space;
        oldicmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorDrop")
    {
        errordrop = value;
        errordrop.value_namespace = name_space;
        errordrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxRedir")
    {
        rxredir = value;
        rxredir.value_namespace = name_space;
        rxredir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUnreach")
    {
        rxunreach = value;
        rxunreach.value_namespace = name_space;
        rxunreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxEchoReq")
    {
        rxechoreq = value;
        rxechoreq.value_namespace = name_space;
        rxechoreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxEchoReply")
    {
        rxechoreply = value;
        rxechoreply.value_namespace = name_space;
        rxechoreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMaskReq")
    {
        rxmaskreq = value;
        rxmaskreq.value_namespace = name_space;
        rxmaskreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMaskReply")
    {
        rxmaskreply = value;
        rxmaskreply.value_namespace = name_space;
        rxmaskreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxInfoReq")
    {
        rxinforeq = value;
        rxinforeq.value_namespace = name_space;
        rxinforeq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxInfoReply")
    {
        rxinforeply = value;
        rxinforeply.value_namespace = name_space;
        rxinforeply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxParamProb")
    {
        rxparamprob = value;
        rxparamprob.value_namespace = name_space;
        rxparamprob.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxSrcQuench")
    {
        rxsrcquench = value;
        rxsrcquench.value_namespace = name_space;
        rxsrcquench.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxTstampReq")
    {
        rxtstampreq = value;
        rxtstampreq.value_namespace = name_space;
        rxtstampreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxTstampReply")
    {
        rxtstampreply = value;
        rxtstampreply.value_namespace = name_space;
        rxtstampreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxTimeXceed")
    {
        rxtimexceed = value;
        rxtimexceed.value_namespace = name_space;
        rxtimexceed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxRtrSolicit")
    {
        rxrtrsolicit = value;
        rxrtrsolicit.value_namespace = name_space;
        rxrtrsolicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxRtrAdvert")
    {
        rxrtradvert = value;
        rxrtradvert.value_namespace = name_space;
        rxrtradvert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxFormatError")
    {
        rxformaterror = value;
        rxformaterror.value_namespace = name_space;
        rxformaterror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxCsumError")
    {
        rxcsumerror = value;
        rxcsumerror.value_namespace = name_space;
        rxcsumerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpLispProcessed")
    {
        icmplispprocessed = value;
        icmplispprocessed.value_namespace = name_space;
        icmplispprocessed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpNoClients")
    {
        icmpnoclients = value;
        icmpnoclients.value_namespace = name_space;
        icmpnoclients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpConsumed")
    {
        icmpconsumed = value;
        icmpconsumed.value_namespace = name_space;
        icmpconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpReplies")
    {
        icmpreplies = value;
        icmpreplies.value_namespace = name_space;
        icmpreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpReplyDropInvldAddr")
    {
        icmpreplydropinvldaddr = value;
        icmpreplydropinvldaddr.value_namespace = name_space;
        icmpreplydropinvldaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpReplyDropInactAddr")
    {
        icmpreplydropinactaddr = value;
        icmpreplydropinactaddr.value_namespace = name_space;
        icmpreplydropinactaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset = value;
        statslastreset.value_namespace = name_space;
        statslastreset.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::IcmptrafficstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txRedir")
    {
        txredir.yfilter = yfilter;
    }
    if(value_path == "txUnreach")
    {
        txunreach.yfilter = yfilter;
    }
    if(value_path == "txEchoReq")
    {
        txechoreq.yfilter = yfilter;
    }
    if(value_path == "txEchoReply")
    {
        txechoreply.yfilter = yfilter;
    }
    if(value_path == "txMaskReq")
    {
        txmaskreq.yfilter = yfilter;
    }
    if(value_path == "txMaskReply")
    {
        txmaskreply.yfilter = yfilter;
    }
    if(value_path == "txInfoReq")
    {
        txinforeq.yfilter = yfilter;
    }
    if(value_path == "txInfoReply")
    {
        txinforeply.yfilter = yfilter;
    }
    if(value_path == "txParamProb")
    {
        txparamprob.yfilter = yfilter;
    }
    if(value_path == "txSrcQuench")
    {
        txsrcquench.yfilter = yfilter;
    }
    if(value_path == "txTstampReq")
    {
        txtstampreq.yfilter = yfilter;
    }
    if(value_path == "txTstampReply")
    {
        txtstampreply.yfilter = yfilter;
    }
    if(value_path == "txTstampXceed")
    {
        txtstampxceed.yfilter = yfilter;
    }
    if(value_path == "txRtrSolicit")
    {
        txrtrsolicit.yfilter = yfilter;
    }
    if(value_path == "txRtrAdvert")
    {
        txrtradvert.yfilter = yfilter;
    }
    if(value_path == "outBadLen")
    {
        outbadlen.yfilter = yfilter;
    }
    if(value_path == "outEncapFail")
    {
        outencapfail.yfilter = yfilter;
    }
    if(value_path == "outXmitFail")
    {
        outxmitfail.yfilter = yfilter;
    }
    if(value_path == "icmpOrigReq")
    {
        icmporigreq.yfilter = yfilter;
    }
    if(value_path == "redirOrigReq")
    {
        redirorigreq.yfilter = yfilter;
    }
    if(value_path == "outErr")
    {
        outerr.yfilter = yfilter;
    }
    if(value_path == "oldShortIp")
    {
        oldshortip.yfilter = yfilter;
    }
    if(value_path == "oldIcmp")
    {
        oldicmp.yfilter = yfilter;
    }
    if(value_path == "errorDrop")
    {
        errordrop.yfilter = yfilter;
    }
    if(value_path == "rxRedir")
    {
        rxredir.yfilter = yfilter;
    }
    if(value_path == "rxUnreach")
    {
        rxunreach.yfilter = yfilter;
    }
    if(value_path == "rxEchoReq")
    {
        rxechoreq.yfilter = yfilter;
    }
    if(value_path == "rxEchoReply")
    {
        rxechoreply.yfilter = yfilter;
    }
    if(value_path == "rxMaskReq")
    {
        rxmaskreq.yfilter = yfilter;
    }
    if(value_path == "rxMaskReply")
    {
        rxmaskreply.yfilter = yfilter;
    }
    if(value_path == "rxInfoReq")
    {
        rxinforeq.yfilter = yfilter;
    }
    if(value_path == "rxInfoReply")
    {
        rxinforeply.yfilter = yfilter;
    }
    if(value_path == "rxParamProb")
    {
        rxparamprob.yfilter = yfilter;
    }
    if(value_path == "rxSrcQuench")
    {
        rxsrcquench.yfilter = yfilter;
    }
    if(value_path == "rxTstampReq")
    {
        rxtstampreq.yfilter = yfilter;
    }
    if(value_path == "rxTstampReply")
    {
        rxtstampreply.yfilter = yfilter;
    }
    if(value_path == "rxTimeXceed")
    {
        rxtimexceed.yfilter = yfilter;
    }
    if(value_path == "rxRtrSolicit")
    {
        rxrtrsolicit.yfilter = yfilter;
    }
    if(value_path == "rxRtrAdvert")
    {
        rxrtradvert.yfilter = yfilter;
    }
    if(value_path == "rxFormatError")
    {
        rxformaterror.yfilter = yfilter;
    }
    if(value_path == "rxCsumError")
    {
        rxcsumerror.yfilter = yfilter;
    }
    if(value_path == "icmpLispProcessed")
    {
        icmplispprocessed.yfilter = yfilter;
    }
    if(value_path == "icmpNoClients")
    {
        icmpnoclients.yfilter = yfilter;
    }
    if(value_path == "icmpConsumed")
    {
        icmpconsumed.yfilter = yfilter;
    }
    if(value_path == "icmpReplies")
    {
        icmpreplies.yfilter = yfilter;
    }
    if(value_path == "icmpReplyDropInvldAddr")
    {
        icmpreplydropinvldaddr.yfilter = yfilter;
    }
    if(value_path == "icmpReplyDropInactAddr")
    {
        icmpreplydropinactaddr.yfilter = yfilter;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::IcmptrafficstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txRedir" || name == "txUnreach" || name == "txEchoReq" || name == "txEchoReply" || name == "txMaskReq" || name == "txMaskReply" || name == "txInfoReq" || name == "txInfoReply" || name == "txParamProb" || name == "txSrcQuench" || name == "txTstampReq" || name == "txTstampReply" || name == "txTstampXceed" || name == "txRtrSolicit" || name == "txRtrAdvert" || name == "outBadLen" || name == "outEncapFail" || name == "outXmitFail" || name == "icmpOrigReq" || name == "redirOrigReq" || name == "outErr" || name == "oldShortIp" || name == "oldIcmp" || name == "errorDrop" || name == "rxRedir" || name == "rxUnreach" || name == "rxEchoReq" || name == "rxEchoReply" || name == "rxMaskReq" || name == "rxMaskReply" || name == "rxInfoReq" || name == "rxInfoReply" || name == "rxParamProb" || name == "rxSrcQuench" || name == "rxTstampReq" || name == "rxTstampReply" || name == "rxTimeXceed" || name == "rxRtrSolicit" || name == "rxRtrAdvert" || name == "rxFormatError" || name == "rxCsumError" || name == "icmpLispProcessed" || name == "icmpNoClients" || name == "icmpConsumed" || name == "icmpReplies" || name == "icmpReplyDropInvldAddr" || name == "icmpReplyDropInactAddr" || name == "statsLastReset")
        return true;
    return false;
}

System::Ipv4Items::InstItems::Rfc4293trafficstatItems::Rfc4293trafficstatItems()
    :
    inrcv{YType::uint32, "inrcv"},
    inoctet{YType::uint32, "inoctet"},
    inhdrerr{YType::uint32, "inhdrerr"},
    innoroutes{YType::uint32, "innoroutes"},
    inaddrerr{YType::uint32, "inaddrerr"},
    innoproto{YType::uint32, "innoproto"},
    intruncated{YType::uint32, "intruncated"},
    inforwdgrams{YType::uint32, "inforwdgrams"},
    reasmreqds{YType::uint32, "reasmreqds"},
    reasmoks{YType::uint32, "reasmoks"},
    reasmfails{YType::uint32, "reasmfails"},
    indiscards{YType::uint32, "indiscards"},
    indelivers{YType::uint32, "indelivers"},
    inmcastpkts{YType::uint32, "inMcastPkts"},
    inmcastbytes{YType::uint32, "inMcastBytes"},
    inbcastpkts{YType::uint32, "inBcastPkts"},
    outrequest{YType::uint32, "outRequest"},
    outnoroutes{YType::uint32, "outNoRoutes"},
    outforwdgrams{YType::uint32, "outForwdGrams"},
    outdiscards{YType::uint32, "outDiscards"},
    outfragreqds{YType::uint32, "outFragReqds"},
    outfragoks{YType::uint32, "outFragOks"},
    outfragfails{YType::uint32, "outFragFails"},
    outfragcreates{YType::uint32, "outFragCreates"},
    outtransmits{YType::uint32, "outTransmits"},
    outbytes{YType::uint32, "outBytes"},
    outmcastpkts{YType::uint32, "outMcastPkts"},
    outmcastbytes{YType::uint32, "outMcastBytes"},
    outbcastpkts{YType::uint32, "outBcastPkts"},
    outbcastbytes{YType::uint32, "outBcastBytes"}
{

    yang_name = "rfc4293trafficstat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::Rfc4293trafficstatItems::~Rfc4293trafficstatItems()
{
}

bool System::Ipv4Items::InstItems::Rfc4293trafficstatItems::has_data() const
{
    if (is_presence_container) return true;
    return inrcv.is_set
	|| inoctet.is_set
	|| inhdrerr.is_set
	|| innoroutes.is_set
	|| inaddrerr.is_set
	|| innoproto.is_set
	|| intruncated.is_set
	|| inforwdgrams.is_set
	|| reasmreqds.is_set
	|| reasmoks.is_set
	|| reasmfails.is_set
	|| indiscards.is_set
	|| indelivers.is_set
	|| inmcastpkts.is_set
	|| inmcastbytes.is_set
	|| inbcastpkts.is_set
	|| outrequest.is_set
	|| outnoroutes.is_set
	|| outforwdgrams.is_set
	|| outdiscards.is_set
	|| outfragreqds.is_set
	|| outfragoks.is_set
	|| outfragfails.is_set
	|| outfragcreates.is_set
	|| outtransmits.is_set
	|| outbytes.is_set
	|| outmcastpkts.is_set
	|| outmcastbytes.is_set
	|| outbcastpkts.is_set
	|| outbcastbytes.is_set;
}

bool System::Ipv4Items::InstItems::Rfc4293trafficstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inrcv.yfilter)
	|| ydk::is_set(inoctet.yfilter)
	|| ydk::is_set(inhdrerr.yfilter)
	|| ydk::is_set(innoroutes.yfilter)
	|| ydk::is_set(inaddrerr.yfilter)
	|| ydk::is_set(innoproto.yfilter)
	|| ydk::is_set(intruncated.yfilter)
	|| ydk::is_set(inforwdgrams.yfilter)
	|| ydk::is_set(reasmreqds.yfilter)
	|| ydk::is_set(reasmoks.yfilter)
	|| ydk::is_set(reasmfails.yfilter)
	|| ydk::is_set(indiscards.yfilter)
	|| ydk::is_set(indelivers.yfilter)
	|| ydk::is_set(inmcastpkts.yfilter)
	|| ydk::is_set(inmcastbytes.yfilter)
	|| ydk::is_set(inbcastpkts.yfilter)
	|| ydk::is_set(outrequest.yfilter)
	|| ydk::is_set(outnoroutes.yfilter)
	|| ydk::is_set(outforwdgrams.yfilter)
	|| ydk::is_set(outdiscards.yfilter)
	|| ydk::is_set(outfragreqds.yfilter)
	|| ydk::is_set(outfragoks.yfilter)
	|| ydk::is_set(outfragfails.yfilter)
	|| ydk::is_set(outfragcreates.yfilter)
	|| ydk::is_set(outtransmits.yfilter)
	|| ydk::is_set(outbytes.yfilter)
	|| ydk::is_set(outmcastpkts.yfilter)
	|| ydk::is_set(outmcastbytes.yfilter)
	|| ydk::is_set(outbcastpkts.yfilter)
	|| ydk::is_set(outbcastbytes.yfilter);
}

std::string System::Ipv4Items::InstItems::Rfc4293trafficstatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::Rfc4293trafficstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rfc4293trafficstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::Rfc4293trafficstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inrcv.is_set || is_set(inrcv.yfilter)) leaf_name_data.push_back(inrcv.get_name_leafdata());
    if (inoctet.is_set || is_set(inoctet.yfilter)) leaf_name_data.push_back(inoctet.get_name_leafdata());
    if (inhdrerr.is_set || is_set(inhdrerr.yfilter)) leaf_name_data.push_back(inhdrerr.get_name_leafdata());
    if (innoroutes.is_set || is_set(innoroutes.yfilter)) leaf_name_data.push_back(innoroutes.get_name_leafdata());
    if (inaddrerr.is_set || is_set(inaddrerr.yfilter)) leaf_name_data.push_back(inaddrerr.get_name_leafdata());
    if (innoproto.is_set || is_set(innoproto.yfilter)) leaf_name_data.push_back(innoproto.get_name_leafdata());
    if (intruncated.is_set || is_set(intruncated.yfilter)) leaf_name_data.push_back(intruncated.get_name_leafdata());
    if (inforwdgrams.is_set || is_set(inforwdgrams.yfilter)) leaf_name_data.push_back(inforwdgrams.get_name_leafdata());
    if (reasmreqds.is_set || is_set(reasmreqds.yfilter)) leaf_name_data.push_back(reasmreqds.get_name_leafdata());
    if (reasmoks.is_set || is_set(reasmoks.yfilter)) leaf_name_data.push_back(reasmoks.get_name_leafdata());
    if (reasmfails.is_set || is_set(reasmfails.yfilter)) leaf_name_data.push_back(reasmfails.get_name_leafdata());
    if (indiscards.is_set || is_set(indiscards.yfilter)) leaf_name_data.push_back(indiscards.get_name_leafdata());
    if (indelivers.is_set || is_set(indelivers.yfilter)) leaf_name_data.push_back(indelivers.get_name_leafdata());
    if (inmcastpkts.is_set || is_set(inmcastpkts.yfilter)) leaf_name_data.push_back(inmcastpkts.get_name_leafdata());
    if (inmcastbytes.is_set || is_set(inmcastbytes.yfilter)) leaf_name_data.push_back(inmcastbytes.get_name_leafdata());
    if (inbcastpkts.is_set || is_set(inbcastpkts.yfilter)) leaf_name_data.push_back(inbcastpkts.get_name_leafdata());
    if (outrequest.is_set || is_set(outrequest.yfilter)) leaf_name_data.push_back(outrequest.get_name_leafdata());
    if (outnoroutes.is_set || is_set(outnoroutes.yfilter)) leaf_name_data.push_back(outnoroutes.get_name_leafdata());
    if (outforwdgrams.is_set || is_set(outforwdgrams.yfilter)) leaf_name_data.push_back(outforwdgrams.get_name_leafdata());
    if (outdiscards.is_set || is_set(outdiscards.yfilter)) leaf_name_data.push_back(outdiscards.get_name_leafdata());
    if (outfragreqds.is_set || is_set(outfragreqds.yfilter)) leaf_name_data.push_back(outfragreqds.get_name_leafdata());
    if (outfragoks.is_set || is_set(outfragoks.yfilter)) leaf_name_data.push_back(outfragoks.get_name_leafdata());
    if (outfragfails.is_set || is_set(outfragfails.yfilter)) leaf_name_data.push_back(outfragfails.get_name_leafdata());
    if (outfragcreates.is_set || is_set(outfragcreates.yfilter)) leaf_name_data.push_back(outfragcreates.get_name_leafdata());
    if (outtransmits.is_set || is_set(outtransmits.yfilter)) leaf_name_data.push_back(outtransmits.get_name_leafdata());
    if (outbytes.is_set || is_set(outbytes.yfilter)) leaf_name_data.push_back(outbytes.get_name_leafdata());
    if (outmcastpkts.is_set || is_set(outmcastpkts.yfilter)) leaf_name_data.push_back(outmcastpkts.get_name_leafdata());
    if (outmcastbytes.is_set || is_set(outmcastbytes.yfilter)) leaf_name_data.push_back(outmcastbytes.get_name_leafdata());
    if (outbcastpkts.is_set || is_set(outbcastpkts.yfilter)) leaf_name_data.push_back(outbcastpkts.get_name_leafdata());
    if (outbcastbytes.is_set || is_set(outbcastbytes.yfilter)) leaf_name_data.push_back(outbcastbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::Rfc4293trafficstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::Rfc4293trafficstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::Rfc4293trafficstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inrcv")
    {
        inrcv = value;
        inrcv.value_namespace = name_space;
        inrcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inoctet")
    {
        inoctet = value;
        inoctet.value_namespace = name_space;
        inoctet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inhdrerr")
    {
        inhdrerr = value;
        inhdrerr.value_namespace = name_space;
        inhdrerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "innoroutes")
    {
        innoroutes = value;
        innoroutes.value_namespace = name_space;
        innoroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inaddrerr")
    {
        inaddrerr = value;
        inaddrerr.value_namespace = name_space;
        inaddrerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "innoproto")
    {
        innoproto = value;
        innoproto.value_namespace = name_space;
        innoproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intruncated")
    {
        intruncated = value;
        intruncated.value_namespace = name_space;
        intruncated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inforwdgrams")
    {
        inforwdgrams = value;
        inforwdgrams.value_namespace = name_space;
        inforwdgrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasmreqds")
    {
        reasmreqds = value;
        reasmreqds.value_namespace = name_space;
        reasmreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasmoks")
    {
        reasmoks = value;
        reasmoks.value_namespace = name_space;
        reasmoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasmfails")
    {
        reasmfails = value;
        reasmfails.value_namespace = name_space;
        reasmfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "indiscards")
    {
        indiscards = value;
        indiscards.value_namespace = name_space;
        indiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "indelivers")
    {
        indelivers = value;
        indelivers.value_namespace = name_space;
        indelivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts = value;
        inmcastpkts.value_namespace = name_space;
        inmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastBytes")
    {
        inmcastbytes = value;
        inmcastbytes.value_namespace = name_space;
        inmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inBcastPkts")
    {
        inbcastpkts = value;
        inbcastpkts.value_namespace = name_space;
        inbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outRequest")
    {
        outrequest = value;
        outrequest.value_namespace = name_space;
        outrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outNoRoutes")
    {
        outnoroutes = value;
        outnoroutes.value_namespace = name_space;
        outnoroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outForwdGrams")
    {
        outforwdgrams = value;
        outforwdgrams.value_namespace = name_space;
        outforwdgrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outDiscards")
    {
        outdiscards = value;
        outdiscards.value_namespace = name_space;
        outdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outFragReqds")
    {
        outfragreqds = value;
        outfragreqds.value_namespace = name_space;
        outfragreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outFragOks")
    {
        outfragoks = value;
        outfragoks.value_namespace = name_space;
        outfragoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outFragFails")
    {
        outfragfails = value;
        outfragfails.value_namespace = name_space;
        outfragfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outFragCreates")
    {
        outfragcreates = value;
        outfragcreates.value_namespace = name_space;
        outfragcreates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outTransmits")
    {
        outtransmits = value;
        outtransmits.value_namespace = name_space;
        outtransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outBytes")
    {
        outbytes = value;
        outbytes.value_namespace = name_space;
        outbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts = value;
        outmcastpkts.value_namespace = name_space;
        outmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outMcastBytes")
    {
        outmcastbytes = value;
        outmcastbytes.value_namespace = name_space;
        outmcastbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outBcastPkts")
    {
        outbcastpkts = value;
        outbcastpkts.value_namespace = name_space;
        outbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outBcastBytes")
    {
        outbcastbytes = value;
        outbcastbytes.value_namespace = name_space;
        outbcastbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::Rfc4293trafficstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inrcv")
    {
        inrcv.yfilter = yfilter;
    }
    if(value_path == "inoctet")
    {
        inoctet.yfilter = yfilter;
    }
    if(value_path == "inhdrerr")
    {
        inhdrerr.yfilter = yfilter;
    }
    if(value_path == "innoroutes")
    {
        innoroutes.yfilter = yfilter;
    }
    if(value_path == "inaddrerr")
    {
        inaddrerr.yfilter = yfilter;
    }
    if(value_path == "innoproto")
    {
        innoproto.yfilter = yfilter;
    }
    if(value_path == "intruncated")
    {
        intruncated.yfilter = yfilter;
    }
    if(value_path == "inforwdgrams")
    {
        inforwdgrams.yfilter = yfilter;
    }
    if(value_path == "reasmreqds")
    {
        reasmreqds.yfilter = yfilter;
    }
    if(value_path == "reasmoks")
    {
        reasmoks.yfilter = yfilter;
    }
    if(value_path == "reasmfails")
    {
        reasmfails.yfilter = yfilter;
    }
    if(value_path == "indiscards")
    {
        indiscards.yfilter = yfilter;
    }
    if(value_path == "indelivers")
    {
        indelivers.yfilter = yfilter;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts.yfilter = yfilter;
    }
    if(value_path == "inMcastBytes")
    {
        inmcastbytes.yfilter = yfilter;
    }
    if(value_path == "inBcastPkts")
    {
        inbcastpkts.yfilter = yfilter;
    }
    if(value_path == "outRequest")
    {
        outrequest.yfilter = yfilter;
    }
    if(value_path == "outNoRoutes")
    {
        outnoroutes.yfilter = yfilter;
    }
    if(value_path == "outForwdGrams")
    {
        outforwdgrams.yfilter = yfilter;
    }
    if(value_path == "outDiscards")
    {
        outdiscards.yfilter = yfilter;
    }
    if(value_path == "outFragReqds")
    {
        outfragreqds.yfilter = yfilter;
    }
    if(value_path == "outFragOks")
    {
        outfragoks.yfilter = yfilter;
    }
    if(value_path == "outFragFails")
    {
        outfragfails.yfilter = yfilter;
    }
    if(value_path == "outFragCreates")
    {
        outfragcreates.yfilter = yfilter;
    }
    if(value_path == "outTransmits")
    {
        outtransmits.yfilter = yfilter;
    }
    if(value_path == "outBytes")
    {
        outbytes.yfilter = yfilter;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts.yfilter = yfilter;
    }
    if(value_path == "outMcastBytes")
    {
        outmcastbytes.yfilter = yfilter;
    }
    if(value_path == "outBcastPkts")
    {
        outbcastpkts.yfilter = yfilter;
    }
    if(value_path == "outBcastBytes")
    {
        outbcastbytes.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::Rfc4293trafficstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inrcv" || name == "inoctet" || name == "inhdrerr" || name == "innoroutes" || name == "inaddrerr" || name == "innoproto" || name == "intruncated" || name == "inforwdgrams" || name == "reasmreqds" || name == "reasmoks" || name == "reasmfails" || name == "indiscards" || name == "indelivers" || name == "inMcastPkts" || name == "inMcastBytes" || name == "inBcastPkts" || name == "outRequest" || name == "outNoRoutes" || name == "outForwdGrams" || name == "outDiscards" || name == "outFragReqds" || name == "outFragOks" || name == "outFragFails" || name == "outFragCreates" || name == "outTransmits" || name == "outBytes" || name == "outMcastPkts" || name == "outMcastBytes" || name == "outBcastPkts" || name == "outBcastBytes")
        return true;
    return false;
}

System::Ipv6Items::Ipv6Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::Ipv6Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "ipv6-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::~Ipv6Items()
{
}

bool System::Ipv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Ipv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Ipv6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Ipv6Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::Ipv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Ipv6Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Ipv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Ipv6Items::InstItems::InstItems()
    :
    accesslistmatchlocal{YType::enumeration, "accessListMatchLocal"},
    staticneighboroutsidesubnet{YType::enumeration, "staticNeighborOutsideSubnet"},
    queuepackets{YType::enumeration, "queuePackets"},
    switchpackets{YType::enumeration, "switchPackets"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    mtustats_items(std::make_shared<System::Ipv6Items::InstItems::MtustatsItems>())
    , clientstats_items(std::make_shared<System::Ipv6Items::InstItems::ClientstatsItems>())
    , dom_items(std::make_shared<System::Ipv6Items::InstItems::DomItems>())
    , fragstats_items(std::make_shared<System::Ipv6Items::InstItems::FragstatsItems>())
    , logs_items(std::make_shared<System::Ipv6Items::InstItems::LogsItems>())
    , pktqstats_items(std::make_shared<System::Ipv6Items::InstItems::PktqstatsItems>())
    , ipv6stats_items(std::make_shared<System::Ipv6Items::InstItems::Ipv6statsItems>())
    , trafficstats_items(std::make_shared<System::Ipv6Items::InstItems::TrafficstatsItems>())
{
    mtustats_items->parent = this;
    clientstats_items->parent = this;
    dom_items->parent = this;
    fragstats_items->parent = this;
    logs_items->parent = this;
    pktqstats_items->parent = this;
    ipv6stats_items->parent = this;
    trafficstats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "ipv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::~InstItems()
{
}

bool System::Ipv6Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return accesslistmatchlocal.is_set
	|| staticneighboroutsidesubnet.is_set
	|| queuepackets.is_set
	|| switchpackets.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (mtustats_items !=  nullptr && mtustats_items->has_data())
	|| (clientstats_items !=  nullptr && clientstats_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (fragstats_items !=  nullptr && fragstats_items->has_data())
	|| (logs_items !=  nullptr && logs_items->has_data())
	|| (pktqstats_items !=  nullptr && pktqstats_items->has_data())
	|| (ipv6stats_items !=  nullptr && ipv6stats_items->has_data())
	|| (trafficstats_items !=  nullptr && trafficstats_items->has_data());
}

bool System::Ipv6Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accesslistmatchlocal.yfilter)
	|| ydk::is_set(staticneighboroutsidesubnet.yfilter)
	|| ydk::is_set(queuepackets.yfilter)
	|| ydk::is_set(switchpackets.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (mtustats_items !=  nullptr && mtustats_items->has_operation())
	|| (clientstats_items !=  nullptr && clientstats_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (fragstats_items !=  nullptr && fragstats_items->has_operation())
	|| (logs_items !=  nullptr && logs_items->has_operation())
	|| (pktqstats_items !=  nullptr && pktqstats_items->has_operation())
	|| (ipv6stats_items !=  nullptr && ipv6stats_items->has_operation())
	|| (trafficstats_items !=  nullptr && trafficstats_items->has_operation());
}

std::string System::Ipv6Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accesslistmatchlocal.is_set || is_set(accesslistmatchlocal.yfilter)) leaf_name_data.push_back(accesslistmatchlocal.get_name_leafdata());
    if (staticneighboroutsidesubnet.is_set || is_set(staticneighboroutsidesubnet.yfilter)) leaf_name_data.push_back(staticneighboroutsidesubnet.get_name_leafdata());
    if (queuepackets.is_set || is_set(queuepackets.yfilter)) leaf_name_data.push_back(queuepackets.get_name_leafdata());
    if (switchpackets.is_set || is_set(switchpackets.yfilter)) leaf_name_data.push_back(switchpackets.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mtustats-items")
    {
        if(mtustats_items == nullptr)
        {
            mtustats_items = std::make_shared<System::Ipv6Items::InstItems::MtustatsItems>();
        }
        return mtustats_items;
    }

    if(child_yang_name == "clientstats-items")
    {
        if(clientstats_items == nullptr)
        {
            clientstats_items = std::make_shared<System::Ipv6Items::InstItems::ClientstatsItems>();
        }
        return clientstats_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Ipv6Items::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "fragstats-items")
    {
        if(fragstats_items == nullptr)
        {
            fragstats_items = std::make_shared<System::Ipv6Items::InstItems::FragstatsItems>();
        }
        return fragstats_items;
    }

    if(child_yang_name == "logs-items")
    {
        if(logs_items == nullptr)
        {
            logs_items = std::make_shared<System::Ipv6Items::InstItems::LogsItems>();
        }
        return logs_items;
    }

    if(child_yang_name == "pktqstats-items")
    {
        if(pktqstats_items == nullptr)
        {
            pktqstats_items = std::make_shared<System::Ipv6Items::InstItems::PktqstatsItems>();
        }
        return pktqstats_items;
    }

    if(child_yang_name == "ipv6stats-items")
    {
        if(ipv6stats_items == nullptr)
        {
            ipv6stats_items = std::make_shared<System::Ipv6Items::InstItems::Ipv6statsItems>();
        }
        return ipv6stats_items;
    }

    if(child_yang_name == "trafficstats-items")
    {
        if(trafficstats_items == nullptr)
        {
            trafficstats_items = std::make_shared<System::Ipv6Items::InstItems::TrafficstatsItems>();
        }
        return trafficstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mtustats_items != nullptr)
    {
        _children["mtustats-items"] = mtustats_items;
    }

    if(clientstats_items != nullptr)
    {
        _children["clientstats-items"] = clientstats_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(fragstats_items != nullptr)
    {
        _children["fragstats-items"] = fragstats_items;
    }

    if(logs_items != nullptr)
    {
        _children["logs-items"] = logs_items;
    }

    if(pktqstats_items != nullptr)
    {
        _children["pktqstats-items"] = pktqstats_items;
    }

    if(ipv6stats_items != nullptr)
    {
        _children["ipv6stats-items"] = ipv6stats_items;
    }

    if(trafficstats_items != nullptr)
    {
        _children["trafficstats-items"] = trafficstats_items;
    }

    return _children;
}

void System::Ipv6Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accessListMatchLocal")
    {
        accesslistmatchlocal = value;
        accesslistmatchlocal.value_namespace = name_space;
        accesslistmatchlocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticNeighborOutsideSubnet")
    {
        staticneighboroutsidesubnet = value;
        staticneighboroutsidesubnet.value_namespace = name_space;
        staticneighboroutsidesubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queuePackets")
    {
        queuepackets = value;
        queuepackets.value_namespace = name_space;
        queuepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchPackets")
    {
        switchpackets = value;
        switchpackets.value_namespace = name_space;
        switchpackets.value_namespace_prefix = name_space_prefix;
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

void System::Ipv6Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accessListMatchLocal")
    {
        accesslistmatchlocal.yfilter = yfilter;
    }
    if(value_path == "staticNeighborOutsideSubnet")
    {
        staticneighboroutsidesubnet.yfilter = yfilter;
    }
    if(value_path == "queuePackets")
    {
        queuepackets.yfilter = yfilter;
    }
    if(value_path == "switchPackets")
    {
        switchpackets.yfilter = yfilter;
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

bool System::Ipv6Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtustats-items" || name == "clientstats-items" || name == "dom-items" || name == "fragstats-items" || name == "logs-items" || name == "pktqstats-items" || name == "ipv6stats-items" || name == "trafficstats-items" || name == "accessListMatchLocal" || name == "staticNeighborOutsideSubnet" || name == "queuePackets" || name == "switchPackets" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::Ipv6Items::InstItems::MtustatsItems::MtustatsItems()
    :
    outstandingentries{YType::uint32, "outstandingEntries"},
    expiredentries{YType::uint64, "expiredEntries"},
    purgedentries{YType::uint64, "purgedEntries"},
    internalerrors{YType::uint64, "internalErrors"},
    pkttoobig{YType::uint64, "pktTooBig"},
    cachemisses{YType::uint64, "cacheMisses"},
    cacheupdates{YType::uint64, "cacheUpdates"},
    smallmtuadv{YType::uint64, "smallMtuAdv"},
    cachenoupdates{YType::uint64, "cacheNoUpdates"}
{

    yang_name = "mtustats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::MtustatsItems::~MtustatsItems()
{
}

bool System::Ipv6Items::InstItems::MtustatsItems::has_data() const
{
    if (is_presence_container) return true;
    return outstandingentries.is_set
	|| expiredentries.is_set
	|| purgedentries.is_set
	|| internalerrors.is_set
	|| pkttoobig.is_set
	|| cachemisses.is_set
	|| cacheupdates.is_set
	|| smallmtuadv.is_set
	|| cachenoupdates.is_set;
}

bool System::Ipv6Items::InstItems::MtustatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outstandingentries.yfilter)
	|| ydk::is_set(expiredentries.yfilter)
	|| ydk::is_set(purgedentries.yfilter)
	|| ydk::is_set(internalerrors.yfilter)
	|| ydk::is_set(pkttoobig.yfilter)
	|| ydk::is_set(cachemisses.yfilter)
	|| ydk::is_set(cacheupdates.yfilter)
	|| ydk::is_set(smallmtuadv.yfilter)
	|| ydk::is_set(cachenoupdates.yfilter);
}

std::string System::Ipv6Items::InstItems::MtustatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::MtustatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtustats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::MtustatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outstandingentries.is_set || is_set(outstandingentries.yfilter)) leaf_name_data.push_back(outstandingentries.get_name_leafdata());
    if (expiredentries.is_set || is_set(expiredentries.yfilter)) leaf_name_data.push_back(expiredentries.get_name_leafdata());
    if (purgedentries.is_set || is_set(purgedentries.yfilter)) leaf_name_data.push_back(purgedentries.get_name_leafdata());
    if (internalerrors.is_set || is_set(internalerrors.yfilter)) leaf_name_data.push_back(internalerrors.get_name_leafdata());
    if (pkttoobig.is_set || is_set(pkttoobig.yfilter)) leaf_name_data.push_back(pkttoobig.get_name_leafdata());
    if (cachemisses.is_set || is_set(cachemisses.yfilter)) leaf_name_data.push_back(cachemisses.get_name_leafdata());
    if (cacheupdates.is_set || is_set(cacheupdates.yfilter)) leaf_name_data.push_back(cacheupdates.get_name_leafdata());
    if (smallmtuadv.is_set || is_set(smallmtuadv.yfilter)) leaf_name_data.push_back(smallmtuadv.get_name_leafdata());
    if (cachenoupdates.is_set || is_set(cachenoupdates.yfilter)) leaf_name_data.push_back(cachenoupdates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::MtustatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::MtustatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::MtustatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outstandingEntries")
    {
        outstandingentries = value;
        outstandingentries.value_namespace = name_space;
        outstandingentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiredEntries")
    {
        expiredentries = value;
        expiredentries.value_namespace = name_space;
        expiredentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purgedEntries")
    {
        purgedentries = value;
        purgedentries.value_namespace = name_space;
        purgedentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalErrors")
    {
        internalerrors = value;
        internalerrors.value_namespace = name_space;
        internalerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktTooBig")
    {
        pkttoobig = value;
        pkttoobig.value_namespace = name_space;
        pkttoobig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheMisses")
    {
        cachemisses = value;
        cachemisses.value_namespace = name_space;
        cachemisses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheUpdates")
    {
        cacheupdates = value;
        cacheupdates.value_namespace = name_space;
        cacheupdates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smallMtuAdv")
    {
        smallmtuadv = value;
        smallmtuadv.value_namespace = name_space;
        smallmtuadv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheNoUpdates")
    {
        cachenoupdates = value;
        cachenoupdates.value_namespace = name_space;
        cachenoupdates.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::MtustatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outstandingEntries")
    {
        outstandingentries.yfilter = yfilter;
    }
    if(value_path == "expiredEntries")
    {
        expiredentries.yfilter = yfilter;
    }
    if(value_path == "purgedEntries")
    {
        purgedentries.yfilter = yfilter;
    }
    if(value_path == "internalErrors")
    {
        internalerrors.yfilter = yfilter;
    }
    if(value_path == "pktTooBig")
    {
        pkttoobig.yfilter = yfilter;
    }
    if(value_path == "cacheMisses")
    {
        cachemisses.yfilter = yfilter;
    }
    if(value_path == "cacheUpdates")
    {
        cacheupdates.yfilter = yfilter;
    }
    if(value_path == "smallMtuAdv")
    {
        smallmtuadv.yfilter = yfilter;
    }
    if(value_path == "cacheNoUpdates")
    {
        cachenoupdates.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::MtustatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outstandingEntries" || name == "expiredEntries" || name == "purgedEntries" || name == "internalErrors" || name == "pktTooBig" || name == "cacheMisses" || name == "cacheUpdates" || name == "smallMtuAdv" || name == "cacheNoUpdates")
        return true;
    return false;
}

System::Ipv6Items::InstItems::ClientstatsItems::ClientstatsItems()
    :
    ipv6clients_list(this, {"clientname", "clientprotocol"})
{

    yang_name = "clientstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::ClientstatsItems::~ClientstatsItems()
{
}

bool System::Ipv6Items::InstItems::ClientstatsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6clients_list.len(); index++)
    {
        if(ipv6clients_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::ClientstatsItems::has_operation() const
{
    for (std::size_t index=0; index<ipv6clients_list.len(); index++)
    {
        if(ipv6clients_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::ClientstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::ClientstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clientstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::ClientstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::ClientstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv6Clients-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList>();
        ent_->parent = this;
        ipv6clients_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::ClientstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6clients_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::ClientstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::ClientstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::ClientstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv6Clients-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::IPv6ClientsList()
    :
    clientname{YType::str, "clientName"},
    clientprotocol{YType::int32, "clientProtocol"},
    clientstatus{YType::str, "clientStatus"},
    clientpid{YType::int32, "clientPid"},
    clientextpid{YType::int32, "clientExtPid"},
    clientpibindex{YType::int32, "clientPibIndex"},
    clientuuid{YType::int32, "clientUuid"},
    clientroutingvrf{YType::int32, "clientRoutingVrf"},
    clientroutingflag{YType::int32, "clientRoutingFlag"},
    clientctrlmtssap{YType::int32, "clientCtrlMtsSap"},
    clientdatamtssap{YType::int32, "clientDataMtsSap"},
    destunreachsent{YType::int32, "destUnreachSent"},
    destunreachrcvd{YType::int32, "destUnreachRcvd"},
    adminprohibsent{YType::int32, "adminProhibSent"},
    adminprohibrcvd{YType::int32, "adminProhibRcvd"},
    clientifextindex{YType::int32, "clientIfExtIndex"},
    clientrecvfn{YType::str, "clientRecvFn"},
    clientrecvhex{YType::str, "clientRecvHex"}
{

    yang_name = "IPv6Clients-list"; yang_parent_name = "clientstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::~IPv6ClientsList()
{
}

bool System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::has_data() const
{
    if (is_presence_container) return true;
    return clientname.is_set
	|| clientprotocol.is_set
	|| clientstatus.is_set
	|| clientpid.is_set
	|| clientextpid.is_set
	|| clientpibindex.is_set
	|| clientuuid.is_set
	|| clientroutingvrf.is_set
	|| clientroutingflag.is_set
	|| clientctrlmtssap.is_set
	|| clientdatamtssap.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| clientifextindex.is_set
	|| clientrecvfn.is_set
	|| clientrecvhex.is_set;
}

bool System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clientname.yfilter)
	|| ydk::is_set(clientprotocol.yfilter)
	|| ydk::is_set(clientstatus.yfilter)
	|| ydk::is_set(clientpid.yfilter)
	|| ydk::is_set(clientextpid.yfilter)
	|| ydk::is_set(clientpibindex.yfilter)
	|| ydk::is_set(clientuuid.yfilter)
	|| ydk::is_set(clientroutingvrf.yfilter)
	|| ydk::is_set(clientroutingflag.yfilter)
	|| ydk::is_set(clientctrlmtssap.yfilter)
	|| ydk::is_set(clientdatamtssap.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(clientifextindex.yfilter)
	|| ydk::is_set(clientrecvfn.yfilter)
	|| ydk::is_set(clientrecvhex.yfilter);
}

std::string System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/clientstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6Clients-list";
    ADD_KEY_TOKEN(clientname, "clientName");
    ADD_KEY_TOKEN(clientprotocol, "clientProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clientname.is_set || is_set(clientname.yfilter)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (clientprotocol.is_set || is_set(clientprotocol.yfilter)) leaf_name_data.push_back(clientprotocol.get_name_leafdata());
    if (clientstatus.is_set || is_set(clientstatus.yfilter)) leaf_name_data.push_back(clientstatus.get_name_leafdata());
    if (clientpid.is_set || is_set(clientpid.yfilter)) leaf_name_data.push_back(clientpid.get_name_leafdata());
    if (clientextpid.is_set || is_set(clientextpid.yfilter)) leaf_name_data.push_back(clientextpid.get_name_leafdata());
    if (clientpibindex.is_set || is_set(clientpibindex.yfilter)) leaf_name_data.push_back(clientpibindex.get_name_leafdata());
    if (clientuuid.is_set || is_set(clientuuid.yfilter)) leaf_name_data.push_back(clientuuid.get_name_leafdata());
    if (clientroutingvrf.is_set || is_set(clientroutingvrf.yfilter)) leaf_name_data.push_back(clientroutingvrf.get_name_leafdata());
    if (clientroutingflag.is_set || is_set(clientroutingflag.yfilter)) leaf_name_data.push_back(clientroutingflag.get_name_leafdata());
    if (clientctrlmtssap.is_set || is_set(clientctrlmtssap.yfilter)) leaf_name_data.push_back(clientctrlmtssap.get_name_leafdata());
    if (clientdatamtssap.is_set || is_set(clientdatamtssap.yfilter)) leaf_name_data.push_back(clientdatamtssap.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (clientifextindex.is_set || is_set(clientifextindex.yfilter)) leaf_name_data.push_back(clientifextindex.get_name_leafdata());
    if (clientrecvfn.is_set || is_set(clientrecvfn.yfilter)) leaf_name_data.push_back(clientrecvfn.get_name_leafdata());
    if (clientrecvhex.is_set || is_set(clientrecvhex.yfilter)) leaf_name_data.push_back(clientrecvhex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clientName")
    {
        clientname = value;
        clientname.value_namespace = name_space;
        clientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientProtocol")
    {
        clientprotocol = value;
        clientprotocol.value_namespace = name_space;
        clientprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientStatus")
    {
        clientstatus = value;
        clientstatus.value_namespace = name_space;
        clientstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientPid")
    {
        clientpid = value;
        clientpid.value_namespace = name_space;
        clientpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientExtPid")
    {
        clientextpid = value;
        clientextpid.value_namespace = name_space;
        clientextpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientPibIndex")
    {
        clientpibindex = value;
        clientpibindex.value_namespace = name_space;
        clientpibindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientUuid")
    {
        clientuuid = value;
        clientuuid.value_namespace = name_space;
        clientuuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientRoutingVrf")
    {
        clientroutingvrf = value;
        clientroutingvrf.value_namespace = name_space;
        clientroutingvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientRoutingFlag")
    {
        clientroutingflag = value;
        clientroutingflag.value_namespace = name_space;
        clientroutingflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientCtrlMtsSap")
    {
        clientctrlmtssap = value;
        clientctrlmtssap.value_namespace = name_space;
        clientctrlmtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientDataMtsSap")
    {
        clientdatamtssap = value;
        clientdatamtssap.value_namespace = name_space;
        clientdatamtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientIfExtIndex")
    {
        clientifextindex = value;
        clientifextindex.value_namespace = name_space;
        clientifextindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientRecvFn")
    {
        clientrecvfn = value;
        clientrecvfn.value_namespace = name_space;
        clientrecvfn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientRecvHex")
    {
        clientrecvhex = value;
        clientrecvhex.value_namespace = name_space;
        clientrecvhex.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clientName")
    {
        clientname.yfilter = yfilter;
    }
    if(value_path == "clientProtocol")
    {
        clientprotocol.yfilter = yfilter;
    }
    if(value_path == "clientStatus")
    {
        clientstatus.yfilter = yfilter;
    }
    if(value_path == "clientPid")
    {
        clientpid.yfilter = yfilter;
    }
    if(value_path == "clientExtPid")
    {
        clientextpid.yfilter = yfilter;
    }
    if(value_path == "clientPibIndex")
    {
        clientpibindex.yfilter = yfilter;
    }
    if(value_path == "clientUuid")
    {
        clientuuid.yfilter = yfilter;
    }
    if(value_path == "clientRoutingVrf")
    {
        clientroutingvrf.yfilter = yfilter;
    }
    if(value_path == "clientRoutingFlag")
    {
        clientroutingflag.yfilter = yfilter;
    }
    if(value_path == "clientCtrlMtsSap")
    {
        clientctrlmtssap.yfilter = yfilter;
    }
    if(value_path == "clientDataMtsSap")
    {
        clientdatamtssap.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "clientIfExtIndex")
    {
        clientifextindex.yfilter = yfilter;
    }
    if(value_path == "clientRecvFn")
    {
        clientrecvfn.yfilter = yfilter;
    }
    if(value_path == "clientRecvHex")
    {
        clientrecvhex.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clientName" || name == "clientProtocol" || name == "clientStatus" || name == "clientPid" || name == "clientExtPid" || name == "clientPibIndex" || name == "clientUuid" || name == "clientRoutingVrf" || name == "clientRoutingFlag" || name == "clientCtrlMtsSap" || name == "clientDataMtsSap" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "clientIfExtIndex" || name == "clientRecvFn" || name == "clientRecvHex")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::DomItems::~DomItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    mtustats_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems>())
    , rtstaticbfd_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems>())
    , if_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems>())
    , procstats_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems>())
    , rt_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems>())
    , routestats_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems>())
{
    mtustats_items->parent = this;
    rtstaticbfd_items->parent = this;
    if_items->parent = this;
    procstats_items->parent = this;
    rt_items->parent = this;
    routestats_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::DomItems::DomList::~DomList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (mtustats_items !=  nullptr && mtustats_items->has_data())
	|| (rtstaticbfd_items !=  nullptr && rtstaticbfd_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (procstats_items !=  nullptr && procstats_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (routestats_items !=  nullptr && routestats_items->has_data());
}

bool System::Ipv6Items::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (mtustats_items !=  nullptr && mtustats_items->has_operation())
	|| (rtstaticbfd_items !=  nullptr && rtstaticbfd_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (procstats_items !=  nullptr && procstats_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (routestats_items !=  nullptr && routestats_items->has_operation());
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mtustats-items")
    {
        if(mtustats_items == nullptr)
        {
            mtustats_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems>();
        }
        return mtustats_items;
    }

    if(child_yang_name == "rtstaticbfd-items")
    {
        if(rtstaticbfd_items == nullptr)
        {
            rtstaticbfd_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems>();
        }
        return rtstaticbfd_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "procstats-items")
    {
        if(procstats_items == nullptr)
        {
            procstats_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems>();
        }
        return procstats_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "routestats-items")
    {
        if(routestats_items == nullptr)
        {
            routestats_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems>();
        }
        return routestats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mtustats_items != nullptr)
    {
        _children["mtustats-items"] = mtustats_items;
    }

    if(rtstaticbfd_items != nullptr)
    {
        _children["rtstaticbfd-items"] = rtstaticbfd_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(procstats_items != nullptr)
    {
        _children["procstats-items"] = procstats_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    if(routestats_items != nullptr)
    {
        _children["routestats-items"] = routestats_items;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtustats-items" || name == "rtstaticbfd-items" || name == "if-items" || name == "procstats-items" || name == "rt-items" || name == "routestats-items" || name == "name")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::MtustatsItems()
    :
    addr_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems>())
{
    addr_items->parent = this;

    yang_name = "mtustats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::~MtustatsItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::has_data() const
{
    if (is_presence_container) return true;
    return (addr_items !=  nullptr && addr_items->has_data());
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::has_operation() const
{
    return is_set(yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation());
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtustats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems>();
        }
        return addr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::AddrItems()
    :
    ipv6mtucachedeststat_list(this, {"pathdestination"})
{

    yang_name = "addr-items"; yang_parent_name = "mtustats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::~AddrItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6mtucachedeststat_list.len(); index++)
    {
        if(ipv6mtucachedeststat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<ipv6mtucachedeststat_list.len(); index++)
    {
        if(ipv6mtucachedeststat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv6MtuCacheDestStat-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList>();
        ent_->parent = this;
        ipv6mtucachedeststat_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6mtucachedeststat_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv6MtuCacheDestStat-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::IPv6MtuCacheDestStatList()
    :
    pathdestination{YType::str, "pathDestination"},
    pathmtu{YType::uint16, "pathMtu"},
    outgoingiod{YType::str, "outgoingIod"},
    smallmtureceived{YType::str, "smallMtuReceived"},
    bigmtureeived{YType::str, "bigMtuReeived"},
    smallmtu{YType::uint16, "smallMtu"},
    lastmtuupdate{YType::str, "lastMtuUpdate"}
{

    yang_name = "IPv6MtuCacheDestStat-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::~IPv6MtuCacheDestStatList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::has_data() const
{
    if (is_presence_container) return true;
    return pathdestination.is_set
	|| pathmtu.is_set
	|| outgoingiod.is_set
	|| smallmtureceived.is_set
	|| bigmtureeived.is_set
	|| smallmtu.is_set
	|| lastmtuupdate.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pathdestination.yfilter)
	|| ydk::is_set(pathmtu.yfilter)
	|| ydk::is_set(outgoingiod.yfilter)
	|| ydk::is_set(smallmtureceived.yfilter)
	|| ydk::is_set(bigmtureeived.yfilter)
	|| ydk::is_set(smallmtu.yfilter)
	|| ydk::is_set(lastmtuupdate.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6MtuCacheDestStat-list";
    ADD_KEY_TOKEN(pathdestination, "pathDestination");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pathdestination.is_set || is_set(pathdestination.yfilter)) leaf_name_data.push_back(pathdestination.get_name_leafdata());
    if (pathmtu.is_set || is_set(pathmtu.yfilter)) leaf_name_data.push_back(pathmtu.get_name_leafdata());
    if (outgoingiod.is_set || is_set(outgoingiod.yfilter)) leaf_name_data.push_back(outgoingiod.get_name_leafdata());
    if (smallmtureceived.is_set || is_set(smallmtureceived.yfilter)) leaf_name_data.push_back(smallmtureceived.get_name_leafdata());
    if (bigmtureeived.is_set || is_set(bigmtureeived.yfilter)) leaf_name_data.push_back(bigmtureeived.get_name_leafdata());
    if (smallmtu.is_set || is_set(smallmtu.yfilter)) leaf_name_data.push_back(smallmtu.get_name_leafdata());
    if (lastmtuupdate.is_set || is_set(lastmtuupdate.yfilter)) leaf_name_data.push_back(lastmtuupdate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pathDestination")
    {
        pathdestination = value;
        pathdestination.value_namespace = name_space;
        pathdestination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathMtu")
    {
        pathmtu = value;
        pathmtu.value_namespace = name_space;
        pathmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoingIod")
    {
        outgoingiod = value;
        outgoingiod.value_namespace = name_space;
        outgoingiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smallMtuReceived")
    {
        smallmtureceived = value;
        smallmtureceived.value_namespace = name_space;
        smallmtureceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bigMtuReeived")
    {
        bigmtureeived = value;
        bigmtureeived.value_namespace = name_space;
        bigmtureeived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smallMtu")
    {
        smallmtu = value;
        smallmtu.value_namespace = name_space;
        smallmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMtuUpdate")
    {
        lastmtuupdate = value;
        lastmtuupdate.value_namespace = name_space;
        lastmtuupdate.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pathDestination")
    {
        pathdestination.yfilter = yfilter;
    }
    if(value_path == "pathMtu")
    {
        pathmtu.yfilter = yfilter;
    }
    if(value_path == "outgoingIod")
    {
        outgoingiod.yfilter = yfilter;
    }
    if(value_path == "smallMtuReceived")
    {
        smallmtureceived.yfilter = yfilter;
    }
    if(value_path == "bigMtuReeived")
    {
        bigmtureeived.yfilter = yfilter;
    }
    if(value_path == "smallMtu")
    {
        smallmtu.yfilter = yfilter;
    }
    if(value_path == "lastMtuUpdate")
    {
        lastmtuupdate.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathDestination" || name == "pathMtu" || name == "outgoingIod" || name == "smallMtuReceived" || name == "bigMtuReeived" || name == "smallMtu" || name == "lastMtuUpdate")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtstaticbfdItems()
    :
    rtstaticbfd_list(this, {"intf", "nexthop"})
{

    yang_name = "rtstaticbfd-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::~RtstaticbfdItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtstaticbfd_list.len(); index++)
    {
        if(rtstaticbfd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_operation() const
{
    for (std::size_t index=0; index<rtstaticbfd_list.len(); index++)
    {
        if(rtstaticbfd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtstaticbfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtStaticBfd-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList>();
        ent_->parent = this;
        rtstaticbfd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtstaticbfd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtStaticBfd-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::RtStaticBfdList()
    :
    intf{YType::str, "intf"},
    nexthop{YType::str, "nexthop"}
{

    yang_name = "RtStaticBfd-list"; yang_parent_name = "rtstaticbfd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::~RtStaticBfdList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| nexthop.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(nexthop.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtStaticBfd-list";
    ADD_KEY_TOKEN(intf, "intf");
    ADD_KEY_TOKEN(nexthop, "nexthop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "nexthop")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    uselinklocaladdr{YType::enumeration, "useLinkLocalAddr"},
    urpf{YType::enumeration, "urpf"},
    forward{YType::enumeration, "forward"},
    autoconfig{YType::enumeration, "autoconfig"},
    defaultroute{YType::enumeration, "defaultRoute"},
    lladdr{YType::str, "llAddr"},
    configerror{YType::enumeration, "configError"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mode{YType::str, "mode"},
    donorif{YType::str, "donorIf"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
        ,
    addr_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems>())
    , lladdr_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems>())
    , nghbr_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems>())
    , ifstats_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems>())
    , nbrstats_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems>())
    , rpol_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems>())
    , rtvrfmbr_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    addr_items->parent = this;
    lladdr_items->parent = this;
    nghbr_items->parent = this;
    ifstats_items->parent = this;
    nbrstats_items->parent = this;
    rpol_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| uselinklocaladdr.is_set
	|| urpf.is_set
	|| forward.is_set
	|| autoconfig.is_set
	|| defaultroute.is_set
	|| lladdr.is_set
	|| configerror.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mode.is_set
	|| donorif.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (lladdr_items !=  nullptr && lladdr_items->has_data())
	|| (nghbr_items !=  nullptr && nghbr_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (nbrstats_items !=  nullptr && nbrstats_items->has_data())
	|| (rpol_items !=  nullptr && rpol_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uselinklocaladdr.yfilter)
	|| ydk::is_set(urpf.yfilter)
	|| ydk::is_set(forward.yfilter)
	|| ydk::is_set(autoconfig.yfilter)
	|| ydk::is_set(defaultroute.yfilter)
	|| ydk::is_set(lladdr.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(donorif.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (lladdr_items !=  nullptr && lladdr_items->has_operation())
	|| (nghbr_items !=  nullptr && nghbr_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (nbrstats_items !=  nullptr && nbrstats_items->has_operation())
	|| (rpol_items !=  nullptr && rpol_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uselinklocaladdr.is_set || is_set(uselinklocaladdr.yfilter)) leaf_name_data.push_back(uselinklocaladdr.get_name_leafdata());
    if (urpf.is_set || is_set(urpf.yfilter)) leaf_name_data.push_back(urpf.get_name_leafdata());
    if (forward.is_set || is_set(forward.yfilter)) leaf_name_data.push_back(forward.get_name_leafdata());
    if (autoconfig.is_set || is_set(autoconfig.yfilter)) leaf_name_data.push_back(autoconfig.get_name_leafdata());
    if (defaultroute.is_set || is_set(defaultroute.yfilter)) leaf_name_data.push_back(defaultroute.get_name_leafdata());
    if (lladdr.is_set || is_set(lladdr.yfilter)) leaf_name_data.push_back(lladdr.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (donorif.is_set || is_set(donorif.yfilter)) leaf_name_data.push_back(donorif.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "lladdr-items")
    {
        if(lladdr_items == nullptr)
        {
            lladdr_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems>();
        }
        return lladdr_items;
    }

    if(child_yang_name == "nghbr-items")
    {
        if(nghbr_items == nullptr)
        {
            nghbr_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems>();
        }
        return nghbr_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "nbrstats-items")
    {
        if(nbrstats_items == nullptr)
        {
            nbrstats_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems>();
        }
        return nbrstats_items;
    }

    if(child_yang_name == "rpol-items")
    {
        if(rpol_items == nullptr)
        {
            rpol_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems>();
        }
        return rpol_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    if(lladdr_items != nullptr)
    {
        _children["lladdr-items"] = lladdr_items;
    }

    if(nghbr_items != nullptr)
    {
        _children["nghbr-items"] = nghbr_items;
    }

    if(ifstats_items != nullptr)
    {
        _children["ifstats-items"] = ifstats_items;
    }

    if(nbrstats_items != nullptr)
    {
        _children["nbrstats-items"] = nbrstats_items;
    }

    if(rpol_items != nullptr)
    {
        _children["rpol-items"] = rpol_items;
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

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useLinkLocalAddr")
    {
        uselinklocaladdr = value;
        uselinklocaladdr.value_namespace = name_space;
        uselinklocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urpf")
    {
        urpf = value;
        urpf.value_namespace = name_space;
        urpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward")
    {
        forward = value;
        forward.value_namespace = name_space;
        forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoconfig")
    {
        autoconfig = value;
        autoconfig.value_namespace = name_space;
        autoconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultRoute")
    {
        defaultroute = value;
        defaultroute.value_namespace = name_space;
        defaultroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "llAddr")
    {
        lladdr = value;
        lladdr.value_namespace = name_space;
        lladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "donorIf")
    {
        donorif = value;
        donorif.value_namespace = name_space;
        donorif.value_namespace_prefix = name_space_prefix;
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
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "useLinkLocalAddr")
    {
        uselinklocaladdr.yfilter = yfilter;
    }
    if(value_path == "urpf")
    {
        urpf.yfilter = yfilter;
    }
    if(value_path == "forward")
    {
        forward.yfilter = yfilter;
    }
    if(value_path == "autoconfig")
    {
        autoconfig.yfilter = yfilter;
    }
    if(value_path == "defaultRoute")
    {
        defaultroute.yfilter = yfilter;
    }
    if(value_path == "llAddr")
    {
        lladdr.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "donorIf")
    {
        donorif.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "lladdr-items" || name == "nghbr-items" || name == "ifstats-items" || name == "nbrstats-items" || name == "rpol-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "useLinkLocalAddr" || name == "urpf" || name == "forward" || name == "autoconfig" || name == "defaultRoute" || name == "llAddr" || name == "configError" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "mode" || name == "donorIf" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrItems()
    :
    addr_list(this, {"addr"})
{

    yang_name = "addr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::~AddrItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Addr-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList>();
        ent_->parent = this;
        addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Addr-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::AddrList()
    :
    addr{YType::str, "addr"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    vpcpeer{YType::str, "vpcPeer"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
{

    yang_name = "Addr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::~AddrList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| type.is_set
	|| ctrl.is_set
	|| vpcpeer.is_set
	|| pref.is_set
	|| tag.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(vpcpeer.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Addr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (vpcpeer.is_set || is_set(vpcpeer.yfilter)) leaf_name_data.push_back(vpcpeer.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vpcPeer")
    {
        vpcpeer = value;
        vpcpeer.value_namespace = name_space;
        vpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
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
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "vpcPeer")
    {
        vpcpeer.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "type" || name == "ctrl" || name == "vpcPeer" || name == "pref" || name == "tag" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LladdrItems()
    :
    lladdr_list(this, {"addr"})
{

    yang_name = "lladdr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::~LladdrItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lladdr_list.len(); index++)
    {
        if(lladdr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::has_operation() const
{
    for (std::size_t index=0; index<lladdr_list.len(); index++)
    {
        if(lladdr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lladdr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LLaddr-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList>();
        ent_->parent = this;
        lladdr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lladdr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LLaddr-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::LLaddrList()
    :
    addr{YType::str, "addr"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    vpcpeer{YType::str, "vpcPeer"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
{

    yang_name = "LLaddr-list"; yang_parent_name = "lladdr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::~LLaddrList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| type.is_set
	|| ctrl.is_set
	|| vpcpeer.is_set
	|| pref.is_set
	|| tag.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(vpcpeer.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LLaddr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (vpcpeer.is_set || is_set(vpcpeer.yfilter)) leaf_name_data.push_back(vpcpeer.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vpcPeer")
    {
        vpcpeer = value;
        vpcpeer.value_namespace = name_space;
        vpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
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
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "vpcPeer")
    {
        vpcpeer.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "type" || name == "ctrl" || name == "vpcPeer" || name == "pref" || name == "tag" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NghbrItems()
    :
    neighbor_list(this, {"addr"})
{

    yang_name = "nghbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::~NghbrItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_list.len(); index++)
    {
        if(neighbor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::has_operation() const
{
    for (std::size_t index=0; index<neighbor_list.len(); index++)
    {
        if(neighbor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nghbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Neighbor-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList>();
        ent_->parent = this;
        neighbor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Neighbor-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::NeighborList()
    :
    addr{YType::str, "addr"},
    neighbormac{YType::str, "neighborMac"},
    configerror{YType::enumeration, "configError"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    vpcpeer{YType::str, "vpcPeer"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Neighbor-list"; yang_parent_name = "nghbr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::~NeighborList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| neighbormac.is_set
	|| configerror.is_set
	|| type.is_set
	|| ctrl.is_set
	|| vpcpeer.is_set
	|| pref.is_set
	|| tag.is_set
	|| operst.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(neighbormac.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(vpcpeer.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Neighbor-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (neighbormac.is_set || is_set(neighbormac.yfilter)) leaf_name_data.push_back(neighbormac.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (vpcpeer.is_set || is_set(vpcpeer.yfilter)) leaf_name_data.push_back(vpcpeer.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighborMac")
    {
        neighbormac = value;
        neighbormac.value_namespace = name_space;
        neighbormac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vpcPeer")
    {
        vpcpeer = value;
        vpcpeer.value_namespace = name_space;
        vpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "neighborMac")
    {
        neighbormac.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "vpcPeer")
    {
        vpcpeer.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "neighborMac" || name == "configError" || name == "type" || name == "ctrl" || name == "vpcPeer" || name == "pref" || name == "tag" || name == "operSt")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    id{YType::str, "id"},
    ifname{YType::str, "ifName"},
    ifprotostate{YType::str, "ifProtoState"},
    iflinkstate{YType::str, "ifLinkState"},
    ifadminstate{YType::str, "ifAdminState"},
    ifiod{YType::uint32, "ifIod"},
    iffwdstatus{YType::boolean, "ifFwdStatus"},
    ifipv6enabled{YType::str, "ifIpv6Enabled"},
    ifaddr{YType::str, "ifAddr"},
    ifaddrsubnet{YType::str, "ifAddrSubnet"},
    ifanycastaddr{YType::str, "ifAnycastAddr"},
    iflladdr{YType::str, "ifLLaddr"},
    iflinklocalconfigstatus{YType::str, "ifLinkLocalConfigStatus"},
    iflinklocalstate{YType::str, "ifLinkLocalState"},
    ifvipaddr{YType::str, "ifVIPAddr"},
    ifmcastroutingstatus{YType::str, "ifMcastRoutingStatus"},
    ifreportllstatus{YType::str, "ifReportLLStatus"},
    ifmcastgrouplocallyjoined{YType::str, "ifMcastGroupLocallyJoined"},
    ifmcastsrcgrpaddr{YType::str, "ifMcastSrcGrpAddr"},
    ifmtu{YType::uint32, "ifmtu"},
    ifucastrevpathfwdmode{YType::str, "ifUcastRevPathFwdMode"},
    ifucastrevpathfwdflag{YType::str, "ifUcastRevPathFwdFlag"},
    ifloadsharing{YType::str, "ifLoadSharing"},
    ifstatlastreset{YType::str, "ifStatLastReset"},
    ifaclinbound{YType::str, "ifAclInbound"},
    ifacloutbound{YType::str, "ifAclOutbound"},
    ifunspecifiedsrc{YType::uint32, "ifUnspecifiedSrc"},
    iftotalpktrxtentativeaddr{YType::uint32, "ifTotalPktRxTentativeAddr"},
    iftotalpktrxinvalidaddrstate{YType::uint32, "ifTotalPktRxInvalidAddrState"},
    iftotalpktrxduplicatestate{YType::uint32, "ifTotalPktRxDuplicateState"},
    ifanycastpkttcp{YType::uint32, "ifAnycastPktTCP"},
    ifdeliverinterfacedown{YType::uint32, "ifDeliverInterfaceDown"},
    rpucastpktsforwarded{YType::uint32, "rpUcastPktsForwarded"},
    rpucastpktsoriginated{YType::uint32, "rpUcastPktsOriginated"},
    rpucastpktsconsumed{YType::uint32, "rpUcastPktsConsumed"},
    rpucastbytesforwarded{YType::uint32, "rpUcastBytesForwarded"},
    rpucastbytesoriginated{YType::uint32, "rpUcastBytesOriginated"},
    rpucastbytesconsumed{YType::uint32, "rpUcastBytesConsumed"},
    rpmcastpktsforwarded{YType::uint32, "rpMcastPktsForwarded"},
    rpmcastpktsoriginated{YType::uint32, "rpMcastPktsOriginated"},
    rpmcastpktsconsumed{YType::uint32, "rpMcastPktsConsumed"},
    rpmcastbytesforwarded{YType::uint32, "rpMcastBytesForwarded"},
    rpmcastbytesoriginated{YType::uint32, "rpMcastBytesOriginated"},
    rpmcastbytesconsumed{YType::uint32, "rpMcastBytesConsumed"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ifname.is_set
	|| ifprotostate.is_set
	|| iflinkstate.is_set
	|| ifadminstate.is_set
	|| ifiod.is_set
	|| iffwdstatus.is_set
	|| ifipv6enabled.is_set
	|| ifaddr.is_set
	|| ifaddrsubnet.is_set
	|| ifanycastaddr.is_set
	|| iflladdr.is_set
	|| iflinklocalconfigstatus.is_set
	|| iflinklocalstate.is_set
	|| ifvipaddr.is_set
	|| ifmcastroutingstatus.is_set
	|| ifreportllstatus.is_set
	|| ifmcastgrouplocallyjoined.is_set
	|| ifmcastsrcgrpaddr.is_set
	|| ifmtu.is_set
	|| ifucastrevpathfwdmode.is_set
	|| ifucastrevpathfwdflag.is_set
	|| ifloadsharing.is_set
	|| ifstatlastreset.is_set
	|| ifaclinbound.is_set
	|| ifacloutbound.is_set
	|| ifunspecifiedsrc.is_set
	|| iftotalpktrxtentativeaddr.is_set
	|| iftotalpktrxinvalidaddrstate.is_set
	|| iftotalpktrxduplicatestate.is_set
	|| ifanycastpkttcp.is_set
	|| ifdeliverinterfacedown.is_set
	|| rpucastpktsforwarded.is_set
	|| rpucastpktsoriginated.is_set
	|| rpucastpktsconsumed.is_set
	|| rpucastbytesforwarded.is_set
	|| rpucastbytesoriginated.is_set
	|| rpucastbytesconsumed.is_set
	|| rpmcastpktsforwarded.is_set
	|| rpmcastpktsoriginated.is_set
	|| rpmcastpktsconsumed.is_set
	|| rpmcastbytesforwarded.is_set
	|| rpmcastbytesoriginated.is_set
	|| rpmcastbytesconsumed.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(ifprotostate.yfilter)
	|| ydk::is_set(iflinkstate.yfilter)
	|| ydk::is_set(ifadminstate.yfilter)
	|| ydk::is_set(ifiod.yfilter)
	|| ydk::is_set(iffwdstatus.yfilter)
	|| ydk::is_set(ifipv6enabled.yfilter)
	|| ydk::is_set(ifaddr.yfilter)
	|| ydk::is_set(ifaddrsubnet.yfilter)
	|| ydk::is_set(ifanycastaddr.yfilter)
	|| ydk::is_set(iflladdr.yfilter)
	|| ydk::is_set(iflinklocalconfigstatus.yfilter)
	|| ydk::is_set(iflinklocalstate.yfilter)
	|| ydk::is_set(ifvipaddr.yfilter)
	|| ydk::is_set(ifmcastroutingstatus.yfilter)
	|| ydk::is_set(ifreportllstatus.yfilter)
	|| ydk::is_set(ifmcastgrouplocallyjoined.yfilter)
	|| ydk::is_set(ifmcastsrcgrpaddr.yfilter)
	|| ydk::is_set(ifmtu.yfilter)
	|| ydk::is_set(ifucastrevpathfwdmode.yfilter)
	|| ydk::is_set(ifucastrevpathfwdflag.yfilter)
	|| ydk::is_set(ifloadsharing.yfilter)
	|| ydk::is_set(ifstatlastreset.yfilter)
	|| ydk::is_set(ifaclinbound.yfilter)
	|| ydk::is_set(ifacloutbound.yfilter)
	|| ydk::is_set(ifunspecifiedsrc.yfilter)
	|| ydk::is_set(iftotalpktrxtentativeaddr.yfilter)
	|| ydk::is_set(iftotalpktrxinvalidaddrstate.yfilter)
	|| ydk::is_set(iftotalpktrxduplicatestate.yfilter)
	|| ydk::is_set(ifanycastpkttcp.yfilter)
	|| ydk::is_set(ifdeliverinterfacedown.yfilter)
	|| ydk::is_set(rpucastpktsforwarded.yfilter)
	|| ydk::is_set(rpucastpktsoriginated.yfilter)
	|| ydk::is_set(rpucastpktsconsumed.yfilter)
	|| ydk::is_set(rpucastbytesforwarded.yfilter)
	|| ydk::is_set(rpucastbytesoriginated.yfilter)
	|| ydk::is_set(rpucastbytesconsumed.yfilter)
	|| ydk::is_set(rpmcastpktsforwarded.yfilter)
	|| ydk::is_set(rpmcastpktsoriginated.yfilter)
	|| ydk::is_set(rpmcastpktsconsumed.yfilter)
	|| ydk::is_set(rpmcastbytesforwarded.yfilter)
	|| ydk::is_set(rpmcastbytesoriginated.yfilter)
	|| ydk::is_set(rpmcastbytesconsumed.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (ifprotostate.is_set || is_set(ifprotostate.yfilter)) leaf_name_data.push_back(ifprotostate.get_name_leafdata());
    if (iflinkstate.is_set || is_set(iflinkstate.yfilter)) leaf_name_data.push_back(iflinkstate.get_name_leafdata());
    if (ifadminstate.is_set || is_set(ifadminstate.yfilter)) leaf_name_data.push_back(ifadminstate.get_name_leafdata());
    if (ifiod.is_set || is_set(ifiod.yfilter)) leaf_name_data.push_back(ifiod.get_name_leafdata());
    if (iffwdstatus.is_set || is_set(iffwdstatus.yfilter)) leaf_name_data.push_back(iffwdstatus.get_name_leafdata());
    if (ifipv6enabled.is_set || is_set(ifipv6enabled.yfilter)) leaf_name_data.push_back(ifipv6enabled.get_name_leafdata());
    if (ifaddr.is_set || is_set(ifaddr.yfilter)) leaf_name_data.push_back(ifaddr.get_name_leafdata());
    if (ifaddrsubnet.is_set || is_set(ifaddrsubnet.yfilter)) leaf_name_data.push_back(ifaddrsubnet.get_name_leafdata());
    if (ifanycastaddr.is_set || is_set(ifanycastaddr.yfilter)) leaf_name_data.push_back(ifanycastaddr.get_name_leafdata());
    if (iflladdr.is_set || is_set(iflladdr.yfilter)) leaf_name_data.push_back(iflladdr.get_name_leafdata());
    if (iflinklocalconfigstatus.is_set || is_set(iflinklocalconfigstatus.yfilter)) leaf_name_data.push_back(iflinklocalconfigstatus.get_name_leafdata());
    if (iflinklocalstate.is_set || is_set(iflinklocalstate.yfilter)) leaf_name_data.push_back(iflinklocalstate.get_name_leafdata());
    if (ifvipaddr.is_set || is_set(ifvipaddr.yfilter)) leaf_name_data.push_back(ifvipaddr.get_name_leafdata());
    if (ifmcastroutingstatus.is_set || is_set(ifmcastroutingstatus.yfilter)) leaf_name_data.push_back(ifmcastroutingstatus.get_name_leafdata());
    if (ifreportllstatus.is_set || is_set(ifreportllstatus.yfilter)) leaf_name_data.push_back(ifreportllstatus.get_name_leafdata());
    if (ifmcastgrouplocallyjoined.is_set || is_set(ifmcastgrouplocallyjoined.yfilter)) leaf_name_data.push_back(ifmcastgrouplocallyjoined.get_name_leafdata());
    if (ifmcastsrcgrpaddr.is_set || is_set(ifmcastsrcgrpaddr.yfilter)) leaf_name_data.push_back(ifmcastsrcgrpaddr.get_name_leafdata());
    if (ifmtu.is_set || is_set(ifmtu.yfilter)) leaf_name_data.push_back(ifmtu.get_name_leafdata());
    if (ifucastrevpathfwdmode.is_set || is_set(ifucastrevpathfwdmode.yfilter)) leaf_name_data.push_back(ifucastrevpathfwdmode.get_name_leafdata());
    if (ifucastrevpathfwdflag.is_set || is_set(ifucastrevpathfwdflag.yfilter)) leaf_name_data.push_back(ifucastrevpathfwdflag.get_name_leafdata());
    if (ifloadsharing.is_set || is_set(ifloadsharing.yfilter)) leaf_name_data.push_back(ifloadsharing.get_name_leafdata());
    if (ifstatlastreset.is_set || is_set(ifstatlastreset.yfilter)) leaf_name_data.push_back(ifstatlastreset.get_name_leafdata());
    if (ifaclinbound.is_set || is_set(ifaclinbound.yfilter)) leaf_name_data.push_back(ifaclinbound.get_name_leafdata());
    if (ifacloutbound.is_set || is_set(ifacloutbound.yfilter)) leaf_name_data.push_back(ifacloutbound.get_name_leafdata());
    if (ifunspecifiedsrc.is_set || is_set(ifunspecifiedsrc.yfilter)) leaf_name_data.push_back(ifunspecifiedsrc.get_name_leafdata());
    if (iftotalpktrxtentativeaddr.is_set || is_set(iftotalpktrxtentativeaddr.yfilter)) leaf_name_data.push_back(iftotalpktrxtentativeaddr.get_name_leafdata());
    if (iftotalpktrxinvalidaddrstate.is_set || is_set(iftotalpktrxinvalidaddrstate.yfilter)) leaf_name_data.push_back(iftotalpktrxinvalidaddrstate.get_name_leafdata());
    if (iftotalpktrxduplicatestate.is_set || is_set(iftotalpktrxduplicatestate.yfilter)) leaf_name_data.push_back(iftotalpktrxduplicatestate.get_name_leafdata());
    if (ifanycastpkttcp.is_set || is_set(ifanycastpkttcp.yfilter)) leaf_name_data.push_back(ifanycastpkttcp.get_name_leafdata());
    if (ifdeliverinterfacedown.is_set || is_set(ifdeliverinterfacedown.yfilter)) leaf_name_data.push_back(ifdeliverinterfacedown.get_name_leafdata());
    if (rpucastpktsforwarded.is_set || is_set(rpucastpktsforwarded.yfilter)) leaf_name_data.push_back(rpucastpktsforwarded.get_name_leafdata());
    if (rpucastpktsoriginated.is_set || is_set(rpucastpktsoriginated.yfilter)) leaf_name_data.push_back(rpucastpktsoriginated.get_name_leafdata());
    if (rpucastpktsconsumed.is_set || is_set(rpucastpktsconsumed.yfilter)) leaf_name_data.push_back(rpucastpktsconsumed.get_name_leafdata());
    if (rpucastbytesforwarded.is_set || is_set(rpucastbytesforwarded.yfilter)) leaf_name_data.push_back(rpucastbytesforwarded.get_name_leafdata());
    if (rpucastbytesoriginated.is_set || is_set(rpucastbytesoriginated.yfilter)) leaf_name_data.push_back(rpucastbytesoriginated.get_name_leafdata());
    if (rpucastbytesconsumed.is_set || is_set(rpucastbytesconsumed.yfilter)) leaf_name_data.push_back(rpucastbytesconsumed.get_name_leafdata());
    if (rpmcastpktsforwarded.is_set || is_set(rpmcastpktsforwarded.yfilter)) leaf_name_data.push_back(rpmcastpktsforwarded.get_name_leafdata());
    if (rpmcastpktsoriginated.is_set || is_set(rpmcastpktsoriginated.yfilter)) leaf_name_data.push_back(rpmcastpktsoriginated.get_name_leafdata());
    if (rpmcastpktsconsumed.is_set || is_set(rpmcastpktsconsumed.yfilter)) leaf_name_data.push_back(rpmcastpktsconsumed.get_name_leafdata());
    if (rpmcastbytesforwarded.is_set || is_set(rpmcastbytesforwarded.yfilter)) leaf_name_data.push_back(rpmcastbytesforwarded.get_name_leafdata());
    if (rpmcastbytesoriginated.is_set || is_set(rpmcastbytesoriginated.yfilter)) leaf_name_data.push_back(rpmcastbytesoriginated.get_name_leafdata());
    if (rpmcastbytesconsumed.is_set || is_set(rpmcastbytesconsumed.yfilter)) leaf_name_data.push_back(rpmcastbytesconsumed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifProtoState")
    {
        ifprotostate = value;
        ifprotostate.value_namespace = name_space;
        ifprotostate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLinkState")
    {
        iflinkstate = value;
        iflinkstate.value_namespace = name_space;
        iflinkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAdminState")
    {
        ifadminstate = value;
        ifadminstate.value_namespace = name_space;
        ifadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIod")
    {
        ifiod = value;
        ifiod.value_namespace = name_space;
        ifiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifFwdStatus")
    {
        iffwdstatus = value;
        iffwdstatus.value_namespace = name_space;
        iffwdstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIpv6Enabled")
    {
        ifipv6enabled = value;
        ifipv6enabled.value_namespace = name_space;
        ifipv6enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAddr")
    {
        ifaddr = value;
        ifaddr.value_namespace = name_space;
        ifaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAddrSubnet")
    {
        ifaddrsubnet = value;
        ifaddrsubnet.value_namespace = name_space;
        ifaddrsubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAnycastAddr")
    {
        ifanycastaddr = value;
        ifanycastaddr.value_namespace = name_space;
        ifanycastaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLLaddr")
    {
        iflladdr = value;
        iflladdr.value_namespace = name_space;
        iflladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLinkLocalConfigStatus")
    {
        iflinklocalconfigstatus = value;
        iflinklocalconfigstatus.value_namespace = name_space;
        iflinklocalconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLinkLocalState")
    {
        iflinklocalstate = value;
        iflinklocalstate.value_namespace = name_space;
        iflinklocalstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifVIPAddr")
    {
        ifvipaddr = value;
        ifvipaddr.value_namespace = name_space;
        ifvipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifMcastRoutingStatus")
    {
        ifmcastroutingstatus = value;
        ifmcastroutingstatus.value_namespace = name_space;
        ifmcastroutingstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifReportLLStatus")
    {
        ifreportllstatus = value;
        ifreportllstatus.value_namespace = name_space;
        ifreportllstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifMcastGroupLocallyJoined")
    {
        ifmcastgrouplocallyjoined = value;
        ifmcastgrouplocallyjoined.value_namespace = name_space;
        ifmcastgrouplocallyjoined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifMcastSrcGrpAddr")
    {
        ifmcastsrcgrpaddr = value;
        ifmcastsrcgrpaddr.value_namespace = name_space;
        ifmcastsrcgrpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifmtu")
    {
        ifmtu = value;
        ifmtu.value_namespace = name_space;
        ifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifUcastRevPathFwdMode")
    {
        ifucastrevpathfwdmode = value;
        ifucastrevpathfwdmode.value_namespace = name_space;
        ifucastrevpathfwdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifUcastRevPathFwdFlag")
    {
        ifucastrevpathfwdflag = value;
        ifucastrevpathfwdflag.value_namespace = name_space;
        ifucastrevpathfwdflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLoadSharing")
    {
        ifloadsharing = value;
        ifloadsharing.value_namespace = name_space;
        ifloadsharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifStatLastReset")
    {
        ifstatlastreset = value;
        ifstatlastreset.value_namespace = name_space;
        ifstatlastreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAclInbound")
    {
        ifaclinbound = value;
        ifaclinbound.value_namespace = name_space;
        ifaclinbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAclOutbound")
    {
        ifacloutbound = value;
        ifacloutbound.value_namespace = name_space;
        ifacloutbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifUnspecifiedSrc")
    {
        ifunspecifiedsrc = value;
        ifunspecifiedsrc.value_namespace = name_space;
        ifunspecifiedsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTotalPktRxTentativeAddr")
    {
        iftotalpktrxtentativeaddr = value;
        iftotalpktrxtentativeaddr.value_namespace = name_space;
        iftotalpktrxtentativeaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTotalPktRxInvalidAddrState")
    {
        iftotalpktrxinvalidaddrstate = value;
        iftotalpktrxinvalidaddrstate.value_namespace = name_space;
        iftotalpktrxinvalidaddrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTotalPktRxDuplicateState")
    {
        iftotalpktrxduplicatestate = value;
        iftotalpktrxduplicatestate.value_namespace = name_space;
        iftotalpktrxduplicatestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAnycastPktTCP")
    {
        ifanycastpkttcp = value;
        ifanycastpkttcp.value_namespace = name_space;
        ifanycastpkttcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDeliverInterfaceDown")
    {
        ifdeliverinterfacedown = value;
        ifdeliverinterfacedown.value_namespace = name_space;
        ifdeliverinterfacedown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastPktsForwarded")
    {
        rpucastpktsforwarded = value;
        rpucastpktsforwarded.value_namespace = name_space;
        rpucastpktsforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastPktsOriginated")
    {
        rpucastpktsoriginated = value;
        rpucastpktsoriginated.value_namespace = name_space;
        rpucastpktsoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastPktsConsumed")
    {
        rpucastpktsconsumed = value;
        rpucastpktsconsumed.value_namespace = name_space;
        rpucastpktsconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastBytesForwarded")
    {
        rpucastbytesforwarded = value;
        rpucastbytesforwarded.value_namespace = name_space;
        rpucastbytesforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastBytesOriginated")
    {
        rpucastbytesoriginated = value;
        rpucastbytesoriginated.value_namespace = name_space;
        rpucastbytesoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastBytesConsumed")
    {
        rpucastbytesconsumed = value;
        rpucastbytesconsumed.value_namespace = name_space;
        rpucastbytesconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastPktsForwarded")
    {
        rpmcastpktsforwarded = value;
        rpmcastpktsforwarded.value_namespace = name_space;
        rpmcastpktsforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastPktsOriginated")
    {
        rpmcastpktsoriginated = value;
        rpmcastpktsoriginated.value_namespace = name_space;
        rpmcastpktsoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastPktsConsumed")
    {
        rpmcastpktsconsumed = value;
        rpmcastpktsconsumed.value_namespace = name_space;
        rpmcastpktsconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastBytesForwarded")
    {
        rpmcastbytesforwarded = value;
        rpmcastbytesforwarded.value_namespace = name_space;
        rpmcastbytesforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastBytesOriginated")
    {
        rpmcastbytesoriginated = value;
        rpmcastbytesoriginated.value_namespace = name_space;
        rpmcastbytesoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastBytesConsumed")
    {
        rpmcastbytesconsumed = value;
        rpmcastbytesconsumed.value_namespace = name_space;
        rpmcastbytesconsumed.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "ifProtoState")
    {
        ifprotostate.yfilter = yfilter;
    }
    if(value_path == "ifLinkState")
    {
        iflinkstate.yfilter = yfilter;
    }
    if(value_path == "ifAdminState")
    {
        ifadminstate.yfilter = yfilter;
    }
    if(value_path == "ifIod")
    {
        ifiod.yfilter = yfilter;
    }
    if(value_path == "ifFwdStatus")
    {
        iffwdstatus.yfilter = yfilter;
    }
    if(value_path == "ifIpv6Enabled")
    {
        ifipv6enabled.yfilter = yfilter;
    }
    if(value_path == "ifAddr")
    {
        ifaddr.yfilter = yfilter;
    }
    if(value_path == "ifAddrSubnet")
    {
        ifaddrsubnet.yfilter = yfilter;
    }
    if(value_path == "ifAnycastAddr")
    {
        ifanycastaddr.yfilter = yfilter;
    }
    if(value_path == "ifLLaddr")
    {
        iflladdr.yfilter = yfilter;
    }
    if(value_path == "ifLinkLocalConfigStatus")
    {
        iflinklocalconfigstatus.yfilter = yfilter;
    }
    if(value_path == "ifLinkLocalState")
    {
        iflinklocalstate.yfilter = yfilter;
    }
    if(value_path == "ifVIPAddr")
    {
        ifvipaddr.yfilter = yfilter;
    }
    if(value_path == "ifMcastRoutingStatus")
    {
        ifmcastroutingstatus.yfilter = yfilter;
    }
    if(value_path == "ifReportLLStatus")
    {
        ifreportllstatus.yfilter = yfilter;
    }
    if(value_path == "ifMcastGroupLocallyJoined")
    {
        ifmcastgrouplocallyjoined.yfilter = yfilter;
    }
    if(value_path == "ifMcastSrcGrpAddr")
    {
        ifmcastsrcgrpaddr.yfilter = yfilter;
    }
    if(value_path == "ifmtu")
    {
        ifmtu.yfilter = yfilter;
    }
    if(value_path == "ifUcastRevPathFwdMode")
    {
        ifucastrevpathfwdmode.yfilter = yfilter;
    }
    if(value_path == "ifUcastRevPathFwdFlag")
    {
        ifucastrevpathfwdflag.yfilter = yfilter;
    }
    if(value_path == "ifLoadSharing")
    {
        ifloadsharing.yfilter = yfilter;
    }
    if(value_path == "ifStatLastReset")
    {
        ifstatlastreset.yfilter = yfilter;
    }
    if(value_path == "ifAclInbound")
    {
        ifaclinbound.yfilter = yfilter;
    }
    if(value_path == "ifAclOutbound")
    {
        ifacloutbound.yfilter = yfilter;
    }
    if(value_path == "ifUnspecifiedSrc")
    {
        ifunspecifiedsrc.yfilter = yfilter;
    }
    if(value_path == "ifTotalPktRxTentativeAddr")
    {
        iftotalpktrxtentativeaddr.yfilter = yfilter;
    }
    if(value_path == "ifTotalPktRxInvalidAddrState")
    {
        iftotalpktrxinvalidaddrstate.yfilter = yfilter;
    }
    if(value_path == "ifTotalPktRxDuplicateState")
    {
        iftotalpktrxduplicatestate.yfilter = yfilter;
    }
    if(value_path == "ifAnycastPktTCP")
    {
        ifanycastpkttcp.yfilter = yfilter;
    }
    if(value_path == "ifDeliverInterfaceDown")
    {
        ifdeliverinterfacedown.yfilter = yfilter;
    }
    if(value_path == "rpUcastPktsForwarded")
    {
        rpucastpktsforwarded.yfilter = yfilter;
    }
    if(value_path == "rpUcastPktsOriginated")
    {
        rpucastpktsoriginated.yfilter = yfilter;
    }
    if(value_path == "rpUcastPktsConsumed")
    {
        rpucastpktsconsumed.yfilter = yfilter;
    }
    if(value_path == "rpUcastBytesForwarded")
    {
        rpucastbytesforwarded.yfilter = yfilter;
    }
    if(value_path == "rpUcastBytesOriginated")
    {
        rpucastbytesoriginated.yfilter = yfilter;
    }
    if(value_path == "rpUcastBytesConsumed")
    {
        rpucastbytesconsumed.yfilter = yfilter;
    }
    if(value_path == "rpMcastPktsForwarded")
    {
        rpmcastpktsforwarded.yfilter = yfilter;
    }
    if(value_path == "rpMcastPktsOriginated")
    {
        rpmcastpktsoriginated.yfilter = yfilter;
    }
    if(value_path == "rpMcastPktsConsumed")
    {
        rpmcastpktsconsumed.yfilter = yfilter;
    }
    if(value_path == "rpMcastBytesForwarded")
    {
        rpmcastbytesforwarded.yfilter = yfilter;
    }
    if(value_path == "rpMcastBytesOriginated")
    {
        rpmcastbytesoriginated.yfilter = yfilter;
    }
    if(value_path == "rpMcastBytesConsumed")
    {
        rpmcastbytesconsumed.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ifName" || name == "ifProtoState" || name == "ifLinkState" || name == "ifAdminState" || name == "ifIod" || name == "ifFwdStatus" || name == "ifIpv6Enabled" || name == "ifAddr" || name == "ifAddrSubnet" || name == "ifAnycastAddr" || name == "ifLLaddr" || name == "ifLinkLocalConfigStatus" || name == "ifLinkLocalState" || name == "ifVIPAddr" || name == "ifMcastRoutingStatus" || name == "ifReportLLStatus" || name == "ifMcastGroupLocallyJoined" || name == "ifMcastSrcGrpAddr" || name == "ifmtu" || name == "ifUcastRevPathFwdMode" || name == "ifUcastRevPathFwdFlag" || name == "ifLoadSharing" || name == "ifStatLastReset" || name == "ifAclInbound" || name == "ifAclOutbound" || name == "ifUnspecifiedSrc" || name == "ifTotalPktRxTentativeAddr" || name == "ifTotalPktRxInvalidAddrState" || name == "ifTotalPktRxDuplicateState" || name == "ifAnycastPktTCP" || name == "ifDeliverInterfaceDown" || name == "rpUcastPktsForwarded" || name == "rpUcastPktsOriginated" || name == "rpUcastPktsConsumed" || name == "rpUcastBytesForwarded" || name == "rpUcastBytesOriginated" || name == "rpUcastBytesConsumed" || name == "rpMcastPktsForwarded" || name == "rpMcastPktsOriginated" || name == "rpMcastPktsConsumed" || name == "rpMcastBytesForwarded" || name == "rpMcastBytesOriginated" || name == "rpMcastBytesConsumed")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::NbrstatsItems()
    :
    ipv6neighborstat_list(this, {"ngbraddr"})
{

    yang_name = "nbrstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::~NbrstatsItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6neighborstat_list.len(); index++)
    {
        if(ipv6neighborstat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::has_operation() const
{
    for (std::size_t index=0; index<ipv6neighborstat_list.len(); index++)
    {
        if(ipv6neighborstat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbrstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv6NeighborStat-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList>();
        ent_->parent = this;
        ipv6neighborstat_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6neighborstat_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv6NeighborStat-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::IPv6NeighborStatList()
    :
    ngbraddr{YType::str, "ngbrAddr"}
{

    yang_name = "IPv6NeighborStat-list"; yang_parent_name = "nbrstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::~IPv6NeighborStatList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::has_data() const
{
    if (is_presence_container) return true;
    return ngbraddr.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ngbraddr.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6NeighborStat-list";
    ADD_KEY_TOKEN(ngbraddr, "ngbrAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ngbraddr.is_set || is_set(ngbraddr.yfilter)) leaf_name_data.push_back(ngbraddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ngbrAddr")
    {
        ngbraddr = value;
        ngbraddr.value_namespace = name_space;
        ngbraddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ngbrAddr")
    {
        ngbraddr.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ngbrAddr")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::RpolItems()
    :
    rmapname{YType::str, "rmapname"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "rpol-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::~RpolItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_data() const
{
    if (is_presence_container) return true;
    return rmapname.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rmapname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmapname.is_set || is_set(rmapname.yfilter)) leaf_name_data.push_back(rmapname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rmapname")
    {
        rmapname = value;
        rmapname.value_namespace = name_space;
        rmapname.value_namespace_prefix = name_space_prefix;
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

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rmapname")
    {
        rmapname.yfilter = yfilter;
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

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmapname" || name == "name" || name == "descr")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::ProcstatsItems()
    :
    procvrfid{YType::uint32, "procVRFId"},
    procautodiscard{YType::str, "procAutoDiscard"},
    procautodiscardadded{YType::str, "procAutoDiscardAdded"},
    procstaticdiscard{YType::str, "procStaticDiscard"},
    procstaticdefaultcount{YType::uint32, "procStaticDefaultCount"},
    prociodlist{YType::str, "procIODList"},
    proclocaladdrlist{YType::str, "procLocalAddrList"}
{

    yang_name = "procstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::~ProcstatsItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return procvrfid.is_set
	|| procautodiscard.is_set
	|| procautodiscardadded.is_set
	|| procstaticdiscard.is_set
	|| procstaticdefaultcount.is_set
	|| prociodlist.is_set
	|| proclocaladdrlist.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(procvrfid.yfilter)
	|| ydk::is_set(procautodiscard.yfilter)
	|| ydk::is_set(procautodiscardadded.yfilter)
	|| ydk::is_set(procstaticdiscard.yfilter)
	|| ydk::is_set(procstaticdefaultcount.yfilter)
	|| ydk::is_set(prociodlist.yfilter)
	|| ydk::is_set(proclocaladdrlist.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "procstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (procvrfid.is_set || is_set(procvrfid.yfilter)) leaf_name_data.push_back(procvrfid.get_name_leafdata());
    if (procautodiscard.is_set || is_set(procautodiscard.yfilter)) leaf_name_data.push_back(procautodiscard.get_name_leafdata());
    if (procautodiscardadded.is_set || is_set(procautodiscardadded.yfilter)) leaf_name_data.push_back(procautodiscardadded.get_name_leafdata());
    if (procstaticdiscard.is_set || is_set(procstaticdiscard.yfilter)) leaf_name_data.push_back(procstaticdiscard.get_name_leafdata());
    if (procstaticdefaultcount.is_set || is_set(procstaticdefaultcount.yfilter)) leaf_name_data.push_back(procstaticdefaultcount.get_name_leafdata());
    if (prociodlist.is_set || is_set(prociodlist.yfilter)) leaf_name_data.push_back(prociodlist.get_name_leafdata());
    if (proclocaladdrlist.is_set || is_set(proclocaladdrlist.yfilter)) leaf_name_data.push_back(proclocaladdrlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "procVRFId")
    {
        procvrfid = value;
        procvrfid.value_namespace = name_space;
        procvrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "procAutoDiscard")
    {
        procautodiscard = value;
        procautodiscard.value_namespace = name_space;
        procautodiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "procAutoDiscardAdded")
    {
        procautodiscardadded = value;
        procautodiscardadded.value_namespace = name_space;
        procautodiscardadded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "procStaticDiscard")
    {
        procstaticdiscard = value;
        procstaticdiscard.value_namespace = name_space;
        procstaticdiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "procStaticDefaultCount")
    {
        procstaticdefaultcount = value;
        procstaticdefaultcount.value_namespace = name_space;
        procstaticdefaultcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "procIODList")
    {
        prociodlist = value;
        prociodlist.value_namespace = name_space;
        prociodlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "procLocalAddrList")
    {
        proclocaladdrlist = value;
        proclocaladdrlist.value_namespace = name_space;
        proclocaladdrlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "procVRFId")
    {
        procvrfid.yfilter = yfilter;
    }
    if(value_path == "procAutoDiscard")
    {
        procautodiscard.yfilter = yfilter;
    }
    if(value_path == "procAutoDiscardAdded")
    {
        procautodiscardadded.yfilter = yfilter;
    }
    if(value_path == "procStaticDiscard")
    {
        procstaticdiscard.yfilter = yfilter;
    }
    if(value_path == "procStaticDefaultCount")
    {
        procstaticdefaultcount.yfilter = yfilter;
    }
    if(value_path == "procIODList")
    {
        prociodlist.yfilter = yfilter;
    }
    if(value_path == "procLocalAddrList")
    {
        proclocaladdrlist.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "procVRFId" || name == "procAutoDiscard" || name == "procAutoDiscardAdded" || name == "procStaticDiscard" || name == "procStaticDefaultCount" || name == "procIODList" || name == "procLocalAddrList")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RtItems()
    :
    route_list(this, {"prefix"})
{

    yang_name = "rt-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::~RtItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::RouteList()
    :
    prefix{YType::str, "prefix"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    pctag{YType::uint32, "pcTag"},
    ctrl{YType::str, "ctrl"}
        ,
    nh_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems>())
    , nhs_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems>())
{
    nh_items->parent = this;
    nhs_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::~RouteList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| name.is_set
	|| descr.is_set
	|| pref.is_set
	|| tag.is_set
	|| pctag.is_set
	|| ctrl.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (nhs_items !=  nullptr && nhs_items->has_data());
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (nhs_items !=  nullptr && nhs_items->has_operation());
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "nhs-items")
    {
        if(nhs_items == nullptr)
        {
            nhs_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems>();
        }
        return nhs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(nhs_items != nullptr)
    {
        _children["nhs-items"] = nhs_items;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "nhs-items" || name == "prefix" || name == "name" || name == "descr" || name == "pref" || name == "tag" || name == "pcTag" || name == "ctrl")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NhItems()
    :
    nexthop_list(this, {"nhif", "nhaddr", "nhvrf"})
{

    yang_name = "nh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::~NhItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::NexthopList()
    :
    nhif{YType::str, "nhIf"},
    nhaddr{YType::str, "nhAddr"},
    nhvrf{YType::str, "nhVrf"},
    rtname{YType::str, "rtname"},
    tag{YType::uint32, "tag"},
    pref{YType::uint8, "pref"},
    object{YType::uint32, "object"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rwencap{YType::str, "rwEncap"},
    flags{YType::str, "flags"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::~NexthopList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return nhif.is_set
	|| nhaddr.is_set
	|| nhvrf.is_set
	|| rtname.is_set
	|| tag.is_set
	|| pref.is_set
	|| object.is_set
	|| name.is_set
	|| descr.is_set
	|| rwencap.is_set
	|| flags.is_set
	|| operst.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhif.yfilter)
	|| ydk::is_set(nhaddr.yfilter)
	|| ydk::is_set(nhvrf.yfilter)
	|| ydk::is_set(rtname.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(object.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rwencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(nhif, "nhIf");
    ADD_KEY_TOKEN(nhaddr, "nhAddr");
    ADD_KEY_TOKEN(nhvrf, "nhVrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhif.is_set || is_set(nhif.yfilter)) leaf_name_data.push_back(nhif.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());
    if (nhvrf.is_set || is_set(nhvrf.yfilter)) leaf_name_data.push_back(nhvrf.get_name_leafdata());
    if (rtname.is_set || is_set(rtname.yfilter)) leaf_name_data.push_back(rtname.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (object.is_set || is_set(object.yfilter)) leaf_name_data.push_back(object.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rwencap.is_set || is_set(rwencap.yfilter)) leaf_name_data.push_back(rwencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhIf")
    {
        nhif = value;
        nhif.value_namespace = name_space;
        nhif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhVrf")
    {
        nhvrf = value;
        nhvrf.value_namespace = name_space;
        nhvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtname")
    {
        rtname = value;
        rtname.value_namespace = name_space;
        rtname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object")
    {
        object = value;
        object.value_namespace = name_space;
        object.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rwEncap")
    {
        rwencap = value;
        rwencap.value_namespace = name_space;
        rwencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhIf")
    {
        nhif.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
    if(value_path == "nhVrf")
    {
        nhvrf.yfilter = yfilter;
    }
    if(value_path == "rtname")
    {
        rtname.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rwEncap")
    {
        rwencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhIf" || name == "nhAddr" || name == "nhVrf" || name == "rtname" || name == "tag" || name == "pref" || name == "object" || name == "name" || name == "descr" || name == "rwEncap" || name == "flags" || name == "operSt")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NhsItems()
    :
    nexthopstub_list(this, {"nhif", "nhaddr", "nhvrf"})
{

    yang_name = "nhs-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::~NhsItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthopstub_list.len(); index++)
    {
        if(nexthopstub_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::has_operation() const
{
    for (std::size_t index=0; index<nexthopstub_list.len(); index++)
    {
        if(nexthopstub_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NexthopStub-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList>();
        ent_->parent = this;
        nexthopstub_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthopstub_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NexthopStub-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::NexthopStubList()
    :
    nhif{YType::str, "nhIf"},
    nhaddr{YType::str, "nhAddr"},
    nhvrf{YType::str, "nhVrf"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rwencap{YType::str, "rwEncap"},
    flags{YType::str, "flags"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "NexthopStub-list"; yang_parent_name = "nhs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::~NexthopStubList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::has_data() const
{
    if (is_presence_container) return true;
    return nhif.is_set
	|| nhaddr.is_set
	|| nhvrf.is_set
	|| name.is_set
	|| descr.is_set
	|| rwencap.is_set
	|| flags.is_set
	|| operst.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhif.yfilter)
	|| ydk::is_set(nhaddr.yfilter)
	|| ydk::is_set(nhvrf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rwencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NexthopStub-list";
    ADD_KEY_TOKEN(nhif, "nhIf");
    ADD_KEY_TOKEN(nhaddr, "nhAddr");
    ADD_KEY_TOKEN(nhvrf, "nhVrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhif.is_set || is_set(nhif.yfilter)) leaf_name_data.push_back(nhif.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());
    if (nhvrf.is_set || is_set(nhvrf.yfilter)) leaf_name_data.push_back(nhvrf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rwencap.is_set || is_set(rwencap.yfilter)) leaf_name_data.push_back(rwencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhIf")
    {
        nhif = value;
        nhif.value_namespace = name_space;
        nhif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhVrf")
    {
        nhvrf = value;
        nhvrf.value_namespace = name_space;
        nhvrf.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rwEncap")
    {
        rwencap = value;
        rwencap.value_namespace = name_space;
        rwencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhIf")
    {
        nhif.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
    if(value_path == "nhVrf")
    {
        nhvrf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rwEncap")
    {
        rwencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhIf" || name == "nhAddr" || name == "nhVrf" || name == "name" || name == "descr" || name == "rwEncap" || name == "flags" || name == "operSt")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::RoutestatsItems()
    :
    pfx_items(std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems>())
{
    pfx_items->parent = this;

    yang_name = "routestats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::~RoutestatsItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::has_data() const
{
    if (is_presence_container) return true;
    return (pfx_items !=  nullptr && pfx_items->has_data());
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::has_operation() const
{
    return is_set(yfilter)
	|| (pfx_items !=  nullptr && pfx_items->has_operation());
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routestats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfx-items")
    {
        if(pfx_items == nullptr)
        {
            pfx_items = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems>();
        }
        return pfx_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfx_items != nullptr)
    {
        _children["pfx-items"] = pfx_items;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx-items")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::PfxItems()
    :
    ipv6routestatpfx_list(this, {"rtprefix", "rtnexthop"})
{

    yang_name = "pfx-items"; yang_parent_name = "routestats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::~PfxItems()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6routestatpfx_list.len(); index++)
    {
        if(ipv6routestatpfx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::has_operation() const
{
    for (std::size_t index=0; index<ipv6routestatpfx_list.len(); index++)
    {
        if(ipv6routestatpfx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv6RouteStatPfx-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList>();
        ent_->parent = this;
        ipv6routestatpfx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6routestatpfx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv6RouteStatPfx-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::IPv6RouteStatPfxList()
    :
    rtprefix{YType::str, "rtPrefix"},
    rtnexthop{YType::str, "rtNextHop"},
    rtrealnexthop{YType::str, "rtRealNextHop"},
    rtrealnexthopiod{YType::str, "rtRealNextHopIod"},
    rtinterface{YType::str, "rtInterface"},
    rtpreference{YType::uint32, "rtPreference"},
    rtnhvrfname{YType::str, "rtNhVrfName"},
    rtresolvetableid{YType::uint32, "rtResolveTableId"},
    rttrackobjnum{YType::uint32, "rtTrackObjNum"},
    rttrackobjstate{YType::str, "rtTrackObjState"},
    rtrnhsenttourib{YType::str, "rtRnhSentToUrib"},
    rtbfdenabled{YType::str, "rtBfdEnabled"}
{

    yang_name = "IPv6RouteStatPfx-list"; yang_parent_name = "pfx-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::~IPv6RouteStatPfxList()
{
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::has_data() const
{
    if (is_presence_container) return true;
    return rtprefix.is_set
	|| rtnexthop.is_set
	|| rtrealnexthop.is_set
	|| rtrealnexthopiod.is_set
	|| rtinterface.is_set
	|| rtpreference.is_set
	|| rtnhvrfname.is_set
	|| rtresolvetableid.is_set
	|| rttrackobjnum.is_set
	|| rttrackobjstate.is_set
	|| rtrnhsenttourib.is_set
	|| rtbfdenabled.is_set;
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtprefix.yfilter)
	|| ydk::is_set(rtnexthop.yfilter)
	|| ydk::is_set(rtrealnexthop.yfilter)
	|| ydk::is_set(rtrealnexthopiod.yfilter)
	|| ydk::is_set(rtinterface.yfilter)
	|| ydk::is_set(rtpreference.yfilter)
	|| ydk::is_set(rtnhvrfname.yfilter)
	|| ydk::is_set(rtresolvetableid.yfilter)
	|| ydk::is_set(rttrackobjnum.yfilter)
	|| ydk::is_set(rttrackobjstate.yfilter)
	|| ydk::is_set(rtrnhsenttourib.yfilter)
	|| ydk::is_set(rtbfdenabled.yfilter);
}

std::string System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6RouteStatPfx-list";
    ADD_KEY_TOKEN(rtprefix, "rtPrefix");
    ADD_KEY_TOKEN(rtnexthop, "rtNextHop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtprefix.is_set || is_set(rtprefix.yfilter)) leaf_name_data.push_back(rtprefix.get_name_leafdata());
    if (rtnexthop.is_set || is_set(rtnexthop.yfilter)) leaf_name_data.push_back(rtnexthop.get_name_leafdata());
    if (rtrealnexthop.is_set || is_set(rtrealnexthop.yfilter)) leaf_name_data.push_back(rtrealnexthop.get_name_leafdata());
    if (rtrealnexthopiod.is_set || is_set(rtrealnexthopiod.yfilter)) leaf_name_data.push_back(rtrealnexthopiod.get_name_leafdata());
    if (rtinterface.is_set || is_set(rtinterface.yfilter)) leaf_name_data.push_back(rtinterface.get_name_leafdata());
    if (rtpreference.is_set || is_set(rtpreference.yfilter)) leaf_name_data.push_back(rtpreference.get_name_leafdata());
    if (rtnhvrfname.is_set || is_set(rtnhvrfname.yfilter)) leaf_name_data.push_back(rtnhvrfname.get_name_leafdata());
    if (rtresolvetableid.is_set || is_set(rtresolvetableid.yfilter)) leaf_name_data.push_back(rtresolvetableid.get_name_leafdata());
    if (rttrackobjnum.is_set || is_set(rttrackobjnum.yfilter)) leaf_name_data.push_back(rttrackobjnum.get_name_leafdata());
    if (rttrackobjstate.is_set || is_set(rttrackobjstate.yfilter)) leaf_name_data.push_back(rttrackobjstate.get_name_leafdata());
    if (rtrnhsenttourib.is_set || is_set(rtrnhsenttourib.yfilter)) leaf_name_data.push_back(rtrnhsenttourib.get_name_leafdata());
    if (rtbfdenabled.is_set || is_set(rtbfdenabled.yfilter)) leaf_name_data.push_back(rtbfdenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtPrefix")
    {
        rtprefix = value;
        rtprefix.value_namespace = name_space;
        rtprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtNextHop")
    {
        rtnexthop = value;
        rtnexthop.value_namespace = name_space;
        rtnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtRealNextHop")
    {
        rtrealnexthop = value;
        rtrealnexthop.value_namespace = name_space;
        rtrealnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtRealNextHopIod")
    {
        rtrealnexthopiod = value;
        rtrealnexthopiod.value_namespace = name_space;
        rtrealnexthopiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtInterface")
    {
        rtinterface = value;
        rtinterface.value_namespace = name_space;
        rtinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtPreference")
    {
        rtpreference = value;
        rtpreference.value_namespace = name_space;
        rtpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtNhVrfName")
    {
        rtnhvrfname = value;
        rtnhvrfname.value_namespace = name_space;
        rtnhvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtResolveTableId")
    {
        rtresolvetableid = value;
        rtresolvetableid.value_namespace = name_space;
        rtresolvetableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTrackObjNum")
    {
        rttrackobjnum = value;
        rttrackobjnum.value_namespace = name_space;
        rttrackobjnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTrackObjState")
    {
        rttrackobjstate = value;
        rttrackobjstate.value_namespace = name_space;
        rttrackobjstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtRnhSentToUrib")
    {
        rtrnhsenttourib = value;
        rtrnhsenttourib.value_namespace = name_space;
        rtrnhsenttourib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtBfdEnabled")
    {
        rtbfdenabled = value;
        rtbfdenabled.value_namespace = name_space;
        rtbfdenabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtPrefix")
    {
        rtprefix.yfilter = yfilter;
    }
    if(value_path == "rtNextHop")
    {
        rtnexthop.yfilter = yfilter;
    }
    if(value_path == "rtRealNextHop")
    {
        rtrealnexthop.yfilter = yfilter;
    }
    if(value_path == "rtRealNextHopIod")
    {
        rtrealnexthopiod.yfilter = yfilter;
    }
    if(value_path == "rtInterface")
    {
        rtinterface.yfilter = yfilter;
    }
    if(value_path == "rtPreference")
    {
        rtpreference.yfilter = yfilter;
    }
    if(value_path == "rtNhVrfName")
    {
        rtnhvrfname.yfilter = yfilter;
    }
    if(value_path == "rtResolveTableId")
    {
        rtresolvetableid.yfilter = yfilter;
    }
    if(value_path == "rtTrackObjNum")
    {
        rttrackobjnum.yfilter = yfilter;
    }
    if(value_path == "rtTrackObjState")
    {
        rttrackobjstate.yfilter = yfilter;
    }
    if(value_path == "rtRnhSentToUrib")
    {
        rtrnhsenttourib.yfilter = yfilter;
    }
    if(value_path == "rtBfdEnabled")
    {
        rtbfdenabled.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtPrefix" || name == "rtNextHop" || name == "rtRealNextHop" || name == "rtRealNextHopIod" || name == "rtInterface" || name == "rtPreference" || name == "rtNhVrfName" || name == "rtResolveTableId" || name == "rtTrackObjNum" || name == "rtTrackObjState" || name == "rtRnhSentToUrib" || name == "rtBfdEnabled")
        return true;
    return false;
}

System::Ipv6Items::InstItems::FragstatsItems::FragstatsItems()
    :
    ipv6fragments_list(this, {"srcaddr"})
{

    yang_name = "fragstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::FragstatsItems::~FragstatsItems()
{
}

bool System::Ipv6Items::InstItems::FragstatsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6fragments_list.len(); index++)
    {
        if(ipv6fragments_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::FragstatsItems::has_operation() const
{
    for (std::size_t index=0; index<ipv6fragments_list.len(); index++)
    {
        if(ipv6fragments_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::FragstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::FragstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::FragstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::FragstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv6Fragments-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList>();
        ent_->parent = this;
        ipv6fragments_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::FragstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6fragments_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::FragstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::FragstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::FragstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv6Fragments-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::IPv6FragmentsList()
    :
    srcaddr{YType::str, "srcAddr"},
    dstaddr{YType::str, "dstAddr"},
    fragid{YType::int32, "fragId"},
    fragoffset{YType::int32, "fragOffset"},
    fragmflag{YType::int32, "fragMFlag"},
    fragnextheader{YType::int32, "fragNextHeader"},
    fragpayloadlen{YType::int32, "fragPayloadLen"},
    fragexpirationtime{YType::int32, "fragExpirationTime"}
{

    yang_name = "IPv6Fragments-list"; yang_parent_name = "fragstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::~IPv6FragmentsList()
{
}

bool System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| dstaddr.is_set
	|| fragid.is_set
	|| fragoffset.is_set
	|| fragmflag.is_set
	|| fragnextheader.is_set
	|| fragpayloadlen.is_set
	|| fragexpirationtime.is_set;
}

bool System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(fragid.yfilter)
	|| ydk::is_set(fragoffset.yfilter)
	|| ydk::is_set(fragmflag.yfilter)
	|| ydk::is_set(fragnextheader.yfilter)
	|| ydk::is_set(fragpayloadlen.yfilter)
	|| ydk::is_set(fragexpirationtime.yfilter);
}

std::string System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/fragstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6Fragments-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (fragid.is_set || is_set(fragid.yfilter)) leaf_name_data.push_back(fragid.get_name_leafdata());
    if (fragoffset.is_set || is_set(fragoffset.yfilter)) leaf_name_data.push_back(fragoffset.get_name_leafdata());
    if (fragmflag.is_set || is_set(fragmflag.yfilter)) leaf_name_data.push_back(fragmflag.get_name_leafdata());
    if (fragnextheader.is_set || is_set(fragnextheader.yfilter)) leaf_name_data.push_back(fragnextheader.get_name_leafdata());
    if (fragpayloadlen.is_set || is_set(fragpayloadlen.yfilter)) leaf_name_data.push_back(fragpayloadlen.get_name_leafdata());
    if (fragexpirationtime.is_set || is_set(fragexpirationtime.yfilter)) leaf_name_data.push_back(fragexpirationtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fragId")
    {
        fragid = value;
        fragid.value_namespace = name_space;
        fragid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragOffset")
    {
        fragoffset = value;
        fragoffset.value_namespace = name_space;
        fragoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragMFlag")
    {
        fragmflag = value;
        fragmflag.value_namespace = name_space;
        fragmflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragNextHeader")
    {
        fragnextheader = value;
        fragnextheader.value_namespace = name_space;
        fragnextheader.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragPayloadLen")
    {
        fragpayloadlen = value;
        fragpayloadlen.value_namespace = name_space;
        fragpayloadlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragExpirationTime")
    {
        fragexpirationtime = value;
        fragexpirationtime.value_namespace = name_space;
        fragexpirationtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "fragId")
    {
        fragid.yfilter = yfilter;
    }
    if(value_path == "fragOffset")
    {
        fragoffset.yfilter = yfilter;
    }
    if(value_path == "fragMFlag")
    {
        fragmflag.yfilter = yfilter;
    }
    if(value_path == "fragNextHeader")
    {
        fragnextheader.yfilter = yfilter;
    }
    if(value_path == "fragPayloadLen")
    {
        fragpayloadlen.yfilter = yfilter;
    }
    if(value_path == "fragExpirationTime")
    {
        fragexpirationtime.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcAddr" || name == "dstAddr" || name == "fragId" || name == "fragOffset" || name == "fragMFlag" || name == "fragNextHeader" || name == "fragPayloadLen" || name == "fragExpirationTime")
        return true;
    return false;
}

System::Ipv6Items::InstItems::LogsItems::LogsItems()
    :
    ipv6eventlogs_list(this, {"eventtype"})
{

    yang_name = "logs-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::LogsItems::~LogsItems()
{
}

bool System::Ipv6Items::InstItems::LogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6eventlogs_list.len(); index++)
    {
        if(ipv6eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::LogsItems::has_operation() const
{
    for (std::size_t index=0; index<ipv6eventlogs_list.len(); index++)
    {
        if(ipv6eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::LogsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::LogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::LogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::LogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv6EventLogs-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList>();
        ent_->parent = this;
        ipv6eventlogs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::LogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6eventlogs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::LogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::LogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::LogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv6EventLogs-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::IPv6EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"}
{

    yang_name = "IPv6EventLogs-list"; yang_parent_name = "logs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::~IPv6EventLogsList()
{
}

bool System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set;
}

bool System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter);
}

std::string System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/logs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize")
        return true;
    return false;
}

System::Ipv6Items::InstItems::PktqstatsItems::PktqstatsItems()
    :
    queuepacket{YType::str, "queuePacket"}
{

    yang_name = "pktqstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::PktqstatsItems::~PktqstatsItems()
{
}

bool System::Ipv6Items::InstItems::PktqstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return queuepacket.is_set;
}

bool System::Ipv6Items::InstItems::PktqstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queuepacket.yfilter);
}

std::string System::Ipv6Items::InstItems::PktqstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::PktqstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pktqstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::PktqstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queuepacket.is_set || is_set(queuepacket.yfilter)) leaf_name_data.push_back(queuepacket.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::PktqstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::PktqstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::PktqstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queuePacket")
    {
        queuepacket = value;
        queuepacket.value_namespace = name_space;
        queuepacket.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::PktqstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queuePacket")
    {
        queuepacket.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::PktqstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queuePacket")
        return true;
    return false;
}

System::Ipv6Items::InstItems::Ipv6statsItems::Ipv6statsItems()
    :
    ipv6stat_list(this, {"ftmname"})
{

    yang_name = "ipv6stats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::Ipv6statsItems::~Ipv6statsItems()
{
}

bool System::Ipv6Items::InstItems::Ipv6statsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6stat_list.len(); index++)
    {
        if(ipv6stat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv6Items::InstItems::Ipv6statsItems::has_operation() const
{
    for (std::size_t index=0; index<ipv6stat_list.len(); index++)
    {
        if(ipv6stat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv6Items::InstItems::Ipv6statsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::Ipv6statsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::Ipv6statsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::Ipv6statsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IPv6Stat-list")
    {
        auto ent_ = std::make_shared<System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList>();
        ent_->parent = this;
        ipv6stat_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::Ipv6statsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6stat_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv6Items::InstItems::Ipv6statsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv6Items::InstItems::Ipv6statsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv6Items::InstItems::Ipv6statsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IPv6Stat-list")
        return true;
    return false;
}

System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::IPv6StatList()
    :
    ftmname{YType::str, "ftmName"},
    ftmtimesecond{YType::uint32, "ftmTimeSecond"},
    ftmtimenanosecond{YType::uint32, "ftmTimeNanoSecond"},
    ftcount{YType::uint64, "ftCount"}
{

    yang_name = "IPv6Stat-list"; yang_parent_name = "ipv6stats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::~IPv6StatList()
{
}

bool System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::has_data() const
{
    if (is_presence_container) return true;
    return ftmname.is_set
	|| ftmtimesecond.is_set
	|| ftmtimenanosecond.is_set
	|| ftcount.is_set;
}

bool System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ftmname.yfilter)
	|| ydk::is_set(ftmtimesecond.yfilter)
	|| ydk::is_set(ftmtimenanosecond.yfilter)
	|| ydk::is_set(ftcount.yfilter);
}

std::string System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/ipv6stats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6Stat-list";
    ADD_KEY_TOKEN(ftmname, "ftmName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ftmname.is_set || is_set(ftmname.yfilter)) leaf_name_data.push_back(ftmname.get_name_leafdata());
    if (ftmtimesecond.is_set || is_set(ftmtimesecond.yfilter)) leaf_name_data.push_back(ftmtimesecond.get_name_leafdata());
    if (ftmtimenanosecond.is_set || is_set(ftmtimenanosecond.yfilter)) leaf_name_data.push_back(ftmtimenanosecond.get_name_leafdata());
    if (ftcount.is_set || is_set(ftcount.yfilter)) leaf_name_data.push_back(ftcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ftmName")
    {
        ftmname = value;
        ftmname.value_namespace = name_space;
        ftmname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ftmTimeSecond")
    {
        ftmtimesecond = value;
        ftmtimesecond.value_namespace = name_space;
        ftmtimesecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ftmTimeNanoSecond")
    {
        ftmtimenanosecond = value;
        ftmtimenanosecond.value_namespace = name_space;
        ftmtimenanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ftCount")
    {
        ftcount = value;
        ftcount.value_namespace = name_space;
        ftcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ftmName")
    {
        ftmname.yfilter = yfilter;
    }
    if(value_path == "ftmTimeSecond")
    {
        ftmtimesecond.yfilter = yfilter;
    }
    if(value_path == "ftmTimeNanoSecond")
    {
        ftmtimenanosecond.yfilter = yfilter;
    }
    if(value_path == "ftCount")
    {
        ftcount.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ftmName" || name == "ftmTimeSecond" || name == "ftmTimeNanoSecond" || name == "ftCount")
        return true;
    return false;
}

System::Ipv6Items::InstItems::TrafficstatsItems::TrafficstatsItems()
    :
    statlastreset{YType::str, "statLastReset"},
    ucastfragoriginated{YType::uint64, "ucastFragOriginated"},
    mcastfragoriginated{YType::uint64, "mcastFragOriginated"},
    ucastfragconsumed{YType::uint64, "ucastFragConsumed"},
    mcastfragconsumed{YType::uint64, "mcastFragConsumed"},
    ingressmcecfwdpkts{YType::uint32, "ingressMcecFwdPkts"},
    ingresspktsvincimigration{YType::uint32, "ingressPktsVinciMigration"},
    errbadversion{YType::uint64, "errBadVersion"},
    errroutelookupfailed{YType::uint64, "errRouteLookupFailed"},
    errhoplimitexceeded{YType::uint64, "errHopLimitExceeded"},
    erringressifmgrinitdrops{YType::uint32, "errIngressIfMgrInitDrops"},
    errrpfdrop{YType::uint32, "errRpfDrop"},
    erroptionheader{YType::uint64, "errOptionHeader"},
    errpayloadlentoosmall{YType::uint64, "errPayloadLenTooSmall"},
    errpmfailed{YType::uint64, "errPMFailed"},
    errmbuferror{YType::uint64, "errMbufError"},
    errencaperror{YType::uint64, "errEncapError"},
    errpktsdroppeddestifdown{YType::uint64, "errPktsDroppedDestIfDown"},
    pktsrecvrx{YType::uint64, "pktsRecvRx"},
    bytesrecvrx{YType::uint64, "bytesRecvRx"},
    headererrorsrx{YType::uint32, "headerErrorsRx"},
    noroutesrx{YType::uint32, "noRoutesRx"},
    addrerrorrx{YType::uint32, "addrErrorRx"},
    unknownprotorx{YType::uint32, "unknownProtoRx"},
    truncatedpktsrx{YType::uint32, "truncatedPktsRx"},
    forwardgramsrx{YType::uint64, "forwardgramsRx"},
    reassemblyrequiredrx{YType::uint32, "reassemblyRequiredRx"},
    reassemblysuccessfulrx{YType::uint32, "reassemblySuccessfulRx"},
    reassemblyfailedrx{YType::uint32, "reassemblyFailedRx"},
    discardedpktsrx{YType::uint32, "discardedPktsRx"},
    deliveredpktsrx{YType::uint64, "deliveredPktsRx"},
    mcastpktsrx{YType::uint64, "mcastPktsRx"},
    mcastbytesrx{YType::uint64, "mcastBytesRx"},
    pktssenttx{YType::uint64, "pktsSentTx"},
    bytessenttx{YType::uint64, "bytesSentTx"},
    sentrequeststx{YType::uint64, "sentRequestsTx"},
    noroutestx{YType::uint32, "noRoutesTx"},
    forwardgramstx{YType::uint64, "forwardgramsTx"},
    discardedpktstx{YType::uint32, "discardedPktsTx"},
    fragrequiredtx{YType::uint32, "fragRequiredTx"},
    fragsuccesfultx{YType::uint32, "fragSuccesfulTx"},
    fragfailedtx{YType::uint32, "fragFailedTx"},
    fragcreatestx{YType::uint32, "fragCreatesTx"},
    transmitstx{YType::uint64, "transmitsTx"},
    mcastpktstx{YType::uint64, "mcastPktsTx"},
    mcastbytestx{YType::uint64, "mcastBytesTx"},
    rpucastpktsforwarded{YType::uint32, "rpUcastPktsForwarded"},
    rpucastpktsoriginated{YType::uint32, "rpUcastPktsOriginated"},
    rpucastpktsconsumed{YType::uint32, "rpUcastPktsConsumed"},
    rpucastbytesforwarded{YType::uint32, "rpUcastBytesForwarded"},
    rpucastbytesoriginated{YType::uint32, "rpUcastBytesOriginated"},
    rpucastbytesconsumed{YType::uint32, "rpUcastBytesConsumed"},
    rpmcastpktsforwarded{YType::uint32, "rpMcastPktsForwarded"},
    rpmcastpktsoriginated{YType::uint32, "rpMcastPktsOriginated"},
    rpmcastpktsconsumed{YType::uint32, "rpMcastPktsConsumed"},
    rpmcastbytesforwarded{YType::uint32, "rpMcastBytesForwarded"},
    rpmcastbytesoriginated{YType::uint32, "rpMcastBytesOriginated"},
    rpmcastbytesconsumed{YType::uint32, "rpMcastBytesConsumed"}
{

    yang_name = "trafficstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv6Items::InstItems::TrafficstatsItems::~TrafficstatsItems()
{
}

bool System::Ipv6Items::InstItems::TrafficstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return statlastreset.is_set
	|| ucastfragoriginated.is_set
	|| mcastfragoriginated.is_set
	|| ucastfragconsumed.is_set
	|| mcastfragconsumed.is_set
	|| ingressmcecfwdpkts.is_set
	|| ingresspktsvincimigration.is_set
	|| errbadversion.is_set
	|| errroutelookupfailed.is_set
	|| errhoplimitexceeded.is_set
	|| erringressifmgrinitdrops.is_set
	|| errrpfdrop.is_set
	|| erroptionheader.is_set
	|| errpayloadlentoosmall.is_set
	|| errpmfailed.is_set
	|| errmbuferror.is_set
	|| errencaperror.is_set
	|| errpktsdroppeddestifdown.is_set
	|| pktsrecvrx.is_set
	|| bytesrecvrx.is_set
	|| headererrorsrx.is_set
	|| noroutesrx.is_set
	|| addrerrorrx.is_set
	|| unknownprotorx.is_set
	|| truncatedpktsrx.is_set
	|| forwardgramsrx.is_set
	|| reassemblyrequiredrx.is_set
	|| reassemblysuccessfulrx.is_set
	|| reassemblyfailedrx.is_set
	|| discardedpktsrx.is_set
	|| deliveredpktsrx.is_set
	|| mcastpktsrx.is_set
	|| mcastbytesrx.is_set
	|| pktssenttx.is_set
	|| bytessenttx.is_set
	|| sentrequeststx.is_set
	|| noroutestx.is_set
	|| forwardgramstx.is_set
	|| discardedpktstx.is_set
	|| fragrequiredtx.is_set
	|| fragsuccesfultx.is_set
	|| fragfailedtx.is_set
	|| fragcreatestx.is_set
	|| transmitstx.is_set
	|| mcastpktstx.is_set
	|| mcastbytestx.is_set
	|| rpucastpktsforwarded.is_set
	|| rpucastpktsoriginated.is_set
	|| rpucastpktsconsumed.is_set
	|| rpucastbytesforwarded.is_set
	|| rpucastbytesoriginated.is_set
	|| rpucastbytesconsumed.is_set
	|| rpmcastpktsforwarded.is_set
	|| rpmcastpktsoriginated.is_set
	|| rpmcastpktsconsumed.is_set
	|| rpmcastbytesforwarded.is_set
	|| rpmcastbytesoriginated.is_set
	|| rpmcastbytesconsumed.is_set;
}

bool System::Ipv6Items::InstItems::TrafficstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statlastreset.yfilter)
	|| ydk::is_set(ucastfragoriginated.yfilter)
	|| ydk::is_set(mcastfragoriginated.yfilter)
	|| ydk::is_set(ucastfragconsumed.yfilter)
	|| ydk::is_set(mcastfragconsumed.yfilter)
	|| ydk::is_set(ingressmcecfwdpkts.yfilter)
	|| ydk::is_set(ingresspktsvincimigration.yfilter)
	|| ydk::is_set(errbadversion.yfilter)
	|| ydk::is_set(errroutelookupfailed.yfilter)
	|| ydk::is_set(errhoplimitexceeded.yfilter)
	|| ydk::is_set(erringressifmgrinitdrops.yfilter)
	|| ydk::is_set(errrpfdrop.yfilter)
	|| ydk::is_set(erroptionheader.yfilter)
	|| ydk::is_set(errpayloadlentoosmall.yfilter)
	|| ydk::is_set(errpmfailed.yfilter)
	|| ydk::is_set(errmbuferror.yfilter)
	|| ydk::is_set(errencaperror.yfilter)
	|| ydk::is_set(errpktsdroppeddestifdown.yfilter)
	|| ydk::is_set(pktsrecvrx.yfilter)
	|| ydk::is_set(bytesrecvrx.yfilter)
	|| ydk::is_set(headererrorsrx.yfilter)
	|| ydk::is_set(noroutesrx.yfilter)
	|| ydk::is_set(addrerrorrx.yfilter)
	|| ydk::is_set(unknownprotorx.yfilter)
	|| ydk::is_set(truncatedpktsrx.yfilter)
	|| ydk::is_set(forwardgramsrx.yfilter)
	|| ydk::is_set(reassemblyrequiredrx.yfilter)
	|| ydk::is_set(reassemblysuccessfulrx.yfilter)
	|| ydk::is_set(reassemblyfailedrx.yfilter)
	|| ydk::is_set(discardedpktsrx.yfilter)
	|| ydk::is_set(deliveredpktsrx.yfilter)
	|| ydk::is_set(mcastpktsrx.yfilter)
	|| ydk::is_set(mcastbytesrx.yfilter)
	|| ydk::is_set(pktssenttx.yfilter)
	|| ydk::is_set(bytessenttx.yfilter)
	|| ydk::is_set(sentrequeststx.yfilter)
	|| ydk::is_set(noroutestx.yfilter)
	|| ydk::is_set(forwardgramstx.yfilter)
	|| ydk::is_set(discardedpktstx.yfilter)
	|| ydk::is_set(fragrequiredtx.yfilter)
	|| ydk::is_set(fragsuccesfultx.yfilter)
	|| ydk::is_set(fragfailedtx.yfilter)
	|| ydk::is_set(fragcreatestx.yfilter)
	|| ydk::is_set(transmitstx.yfilter)
	|| ydk::is_set(mcastpktstx.yfilter)
	|| ydk::is_set(mcastbytestx.yfilter)
	|| ydk::is_set(rpucastpktsforwarded.yfilter)
	|| ydk::is_set(rpucastpktsoriginated.yfilter)
	|| ydk::is_set(rpucastpktsconsumed.yfilter)
	|| ydk::is_set(rpucastbytesforwarded.yfilter)
	|| ydk::is_set(rpucastbytesoriginated.yfilter)
	|| ydk::is_set(rpucastbytesconsumed.yfilter)
	|| ydk::is_set(rpmcastpktsforwarded.yfilter)
	|| ydk::is_set(rpmcastpktsoriginated.yfilter)
	|| ydk::is_set(rpmcastpktsconsumed.yfilter)
	|| ydk::is_set(rpmcastbytesforwarded.yfilter)
	|| ydk::is_set(rpmcastbytesoriginated.yfilter)
	|| ydk::is_set(rpmcastbytesconsumed.yfilter);
}

std::string System::Ipv6Items::InstItems::TrafficstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv6Items::InstItems::TrafficstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trafficstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv6Items::InstItems::TrafficstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statlastreset.is_set || is_set(statlastreset.yfilter)) leaf_name_data.push_back(statlastreset.get_name_leafdata());
    if (ucastfragoriginated.is_set || is_set(ucastfragoriginated.yfilter)) leaf_name_data.push_back(ucastfragoriginated.get_name_leafdata());
    if (mcastfragoriginated.is_set || is_set(mcastfragoriginated.yfilter)) leaf_name_data.push_back(mcastfragoriginated.get_name_leafdata());
    if (ucastfragconsumed.is_set || is_set(ucastfragconsumed.yfilter)) leaf_name_data.push_back(ucastfragconsumed.get_name_leafdata());
    if (mcastfragconsumed.is_set || is_set(mcastfragconsumed.yfilter)) leaf_name_data.push_back(mcastfragconsumed.get_name_leafdata());
    if (ingressmcecfwdpkts.is_set || is_set(ingressmcecfwdpkts.yfilter)) leaf_name_data.push_back(ingressmcecfwdpkts.get_name_leafdata());
    if (ingresspktsvincimigration.is_set || is_set(ingresspktsvincimigration.yfilter)) leaf_name_data.push_back(ingresspktsvincimigration.get_name_leafdata());
    if (errbadversion.is_set || is_set(errbadversion.yfilter)) leaf_name_data.push_back(errbadversion.get_name_leafdata());
    if (errroutelookupfailed.is_set || is_set(errroutelookupfailed.yfilter)) leaf_name_data.push_back(errroutelookupfailed.get_name_leafdata());
    if (errhoplimitexceeded.is_set || is_set(errhoplimitexceeded.yfilter)) leaf_name_data.push_back(errhoplimitexceeded.get_name_leafdata());
    if (erringressifmgrinitdrops.is_set || is_set(erringressifmgrinitdrops.yfilter)) leaf_name_data.push_back(erringressifmgrinitdrops.get_name_leafdata());
    if (errrpfdrop.is_set || is_set(errrpfdrop.yfilter)) leaf_name_data.push_back(errrpfdrop.get_name_leafdata());
    if (erroptionheader.is_set || is_set(erroptionheader.yfilter)) leaf_name_data.push_back(erroptionheader.get_name_leafdata());
    if (errpayloadlentoosmall.is_set || is_set(errpayloadlentoosmall.yfilter)) leaf_name_data.push_back(errpayloadlentoosmall.get_name_leafdata());
    if (errpmfailed.is_set || is_set(errpmfailed.yfilter)) leaf_name_data.push_back(errpmfailed.get_name_leafdata());
    if (errmbuferror.is_set || is_set(errmbuferror.yfilter)) leaf_name_data.push_back(errmbuferror.get_name_leafdata());
    if (errencaperror.is_set || is_set(errencaperror.yfilter)) leaf_name_data.push_back(errencaperror.get_name_leafdata());
    if (errpktsdroppeddestifdown.is_set || is_set(errpktsdroppeddestifdown.yfilter)) leaf_name_data.push_back(errpktsdroppeddestifdown.get_name_leafdata());
    if (pktsrecvrx.is_set || is_set(pktsrecvrx.yfilter)) leaf_name_data.push_back(pktsrecvrx.get_name_leafdata());
    if (bytesrecvrx.is_set || is_set(bytesrecvrx.yfilter)) leaf_name_data.push_back(bytesrecvrx.get_name_leafdata());
    if (headererrorsrx.is_set || is_set(headererrorsrx.yfilter)) leaf_name_data.push_back(headererrorsrx.get_name_leafdata());
    if (noroutesrx.is_set || is_set(noroutesrx.yfilter)) leaf_name_data.push_back(noroutesrx.get_name_leafdata());
    if (addrerrorrx.is_set || is_set(addrerrorrx.yfilter)) leaf_name_data.push_back(addrerrorrx.get_name_leafdata());
    if (unknownprotorx.is_set || is_set(unknownprotorx.yfilter)) leaf_name_data.push_back(unknownprotorx.get_name_leafdata());
    if (truncatedpktsrx.is_set || is_set(truncatedpktsrx.yfilter)) leaf_name_data.push_back(truncatedpktsrx.get_name_leafdata());
    if (forwardgramsrx.is_set || is_set(forwardgramsrx.yfilter)) leaf_name_data.push_back(forwardgramsrx.get_name_leafdata());
    if (reassemblyrequiredrx.is_set || is_set(reassemblyrequiredrx.yfilter)) leaf_name_data.push_back(reassemblyrequiredrx.get_name_leafdata());
    if (reassemblysuccessfulrx.is_set || is_set(reassemblysuccessfulrx.yfilter)) leaf_name_data.push_back(reassemblysuccessfulrx.get_name_leafdata());
    if (reassemblyfailedrx.is_set || is_set(reassemblyfailedrx.yfilter)) leaf_name_data.push_back(reassemblyfailedrx.get_name_leafdata());
    if (discardedpktsrx.is_set || is_set(discardedpktsrx.yfilter)) leaf_name_data.push_back(discardedpktsrx.get_name_leafdata());
    if (deliveredpktsrx.is_set || is_set(deliveredpktsrx.yfilter)) leaf_name_data.push_back(deliveredpktsrx.get_name_leafdata());
    if (mcastpktsrx.is_set || is_set(mcastpktsrx.yfilter)) leaf_name_data.push_back(mcastpktsrx.get_name_leafdata());
    if (mcastbytesrx.is_set || is_set(mcastbytesrx.yfilter)) leaf_name_data.push_back(mcastbytesrx.get_name_leafdata());
    if (pktssenttx.is_set || is_set(pktssenttx.yfilter)) leaf_name_data.push_back(pktssenttx.get_name_leafdata());
    if (bytessenttx.is_set || is_set(bytessenttx.yfilter)) leaf_name_data.push_back(bytessenttx.get_name_leafdata());
    if (sentrequeststx.is_set || is_set(sentrequeststx.yfilter)) leaf_name_data.push_back(sentrequeststx.get_name_leafdata());
    if (noroutestx.is_set || is_set(noroutestx.yfilter)) leaf_name_data.push_back(noroutestx.get_name_leafdata());
    if (forwardgramstx.is_set || is_set(forwardgramstx.yfilter)) leaf_name_data.push_back(forwardgramstx.get_name_leafdata());
    if (discardedpktstx.is_set || is_set(discardedpktstx.yfilter)) leaf_name_data.push_back(discardedpktstx.get_name_leafdata());
    if (fragrequiredtx.is_set || is_set(fragrequiredtx.yfilter)) leaf_name_data.push_back(fragrequiredtx.get_name_leafdata());
    if (fragsuccesfultx.is_set || is_set(fragsuccesfultx.yfilter)) leaf_name_data.push_back(fragsuccesfultx.get_name_leafdata());
    if (fragfailedtx.is_set || is_set(fragfailedtx.yfilter)) leaf_name_data.push_back(fragfailedtx.get_name_leafdata());
    if (fragcreatestx.is_set || is_set(fragcreatestx.yfilter)) leaf_name_data.push_back(fragcreatestx.get_name_leafdata());
    if (transmitstx.is_set || is_set(transmitstx.yfilter)) leaf_name_data.push_back(transmitstx.get_name_leafdata());
    if (mcastpktstx.is_set || is_set(mcastpktstx.yfilter)) leaf_name_data.push_back(mcastpktstx.get_name_leafdata());
    if (mcastbytestx.is_set || is_set(mcastbytestx.yfilter)) leaf_name_data.push_back(mcastbytestx.get_name_leafdata());
    if (rpucastpktsforwarded.is_set || is_set(rpucastpktsforwarded.yfilter)) leaf_name_data.push_back(rpucastpktsforwarded.get_name_leafdata());
    if (rpucastpktsoriginated.is_set || is_set(rpucastpktsoriginated.yfilter)) leaf_name_data.push_back(rpucastpktsoriginated.get_name_leafdata());
    if (rpucastpktsconsumed.is_set || is_set(rpucastpktsconsumed.yfilter)) leaf_name_data.push_back(rpucastpktsconsumed.get_name_leafdata());
    if (rpucastbytesforwarded.is_set || is_set(rpucastbytesforwarded.yfilter)) leaf_name_data.push_back(rpucastbytesforwarded.get_name_leafdata());
    if (rpucastbytesoriginated.is_set || is_set(rpucastbytesoriginated.yfilter)) leaf_name_data.push_back(rpucastbytesoriginated.get_name_leafdata());
    if (rpucastbytesconsumed.is_set || is_set(rpucastbytesconsumed.yfilter)) leaf_name_data.push_back(rpucastbytesconsumed.get_name_leafdata());
    if (rpmcastpktsforwarded.is_set || is_set(rpmcastpktsforwarded.yfilter)) leaf_name_data.push_back(rpmcastpktsforwarded.get_name_leafdata());
    if (rpmcastpktsoriginated.is_set || is_set(rpmcastpktsoriginated.yfilter)) leaf_name_data.push_back(rpmcastpktsoriginated.get_name_leafdata());
    if (rpmcastpktsconsumed.is_set || is_set(rpmcastpktsconsumed.yfilter)) leaf_name_data.push_back(rpmcastpktsconsumed.get_name_leafdata());
    if (rpmcastbytesforwarded.is_set || is_set(rpmcastbytesforwarded.yfilter)) leaf_name_data.push_back(rpmcastbytesforwarded.get_name_leafdata());
    if (rpmcastbytesoriginated.is_set || is_set(rpmcastbytesoriginated.yfilter)) leaf_name_data.push_back(rpmcastbytesoriginated.get_name_leafdata());
    if (rpmcastbytesconsumed.is_set || is_set(rpmcastbytesconsumed.yfilter)) leaf_name_data.push_back(rpmcastbytesconsumed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv6Items::InstItems::TrafficstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv6Items::InstItems::TrafficstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv6Items::InstItems::TrafficstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statLastReset")
    {
        statlastreset = value;
        statlastreset.value_namespace = name_space;
        statlastreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastFragOriginated")
    {
        ucastfragoriginated = value;
        ucastfragoriginated.value_namespace = name_space;
        ucastfragoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastFragOriginated")
    {
        mcastfragoriginated = value;
        mcastfragoriginated.value_namespace = name_space;
        mcastfragoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastFragConsumed")
    {
        ucastfragconsumed = value;
        ucastfragconsumed.value_namespace = name_space;
        ucastfragconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastFragConsumed")
    {
        mcastfragconsumed = value;
        mcastfragconsumed.value_namespace = name_space;
        mcastfragconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressMcecFwdPkts")
    {
        ingressmcecfwdpkts = value;
        ingressmcecfwdpkts.value_namespace = name_space;
        ingressmcecfwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressPktsVinciMigration")
    {
        ingresspktsvincimigration = value;
        ingresspktsvincimigration.value_namespace = name_space;
        ingresspktsvincimigration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errBadVersion")
    {
        errbadversion = value;
        errbadversion.value_namespace = name_space;
        errbadversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRouteLookupFailed")
    {
        errroutelookupfailed = value;
        errroutelookupfailed.value_namespace = name_space;
        errroutelookupfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHopLimitExceeded")
    {
        errhoplimitexceeded = value;
        errhoplimitexceeded.value_namespace = name_space;
        errhoplimitexceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errIngressIfMgrInitDrops")
    {
        erringressifmgrinitdrops = value;
        erringressifmgrinitdrops.value_namespace = name_space;
        erringressifmgrinitdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRpfDrop")
    {
        errrpfdrop = value;
        errrpfdrop.value_namespace = name_space;
        errrpfdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errOptionHeader")
    {
        erroptionheader = value;
        erroptionheader.value_namespace = name_space;
        erroptionheader.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPayloadLenTooSmall")
    {
        errpayloadlentoosmall = value;
        errpayloadlentoosmall.value_namespace = name_space;
        errpayloadlentoosmall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPMFailed")
    {
        errpmfailed = value;
        errpmfailed.value_namespace = name_space;
        errpmfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errMbufError")
    {
        errmbuferror = value;
        errmbuferror.value_namespace = name_space;
        errmbuferror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEncapError")
    {
        errencaperror = value;
        errencaperror.value_namespace = name_space;
        errencaperror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsDroppedDestIfDown")
    {
        errpktsdroppeddestifdown = value;
        errpktsdroppeddestifdown.value_namespace = name_space;
        errpktsdroppeddestifdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsRecvRx")
    {
        pktsrecvrx = value;
        pktsrecvrx.value_namespace = name_space;
        pktsrecvrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytesRecvRx")
    {
        bytesrecvrx = value;
        bytesrecvrx.value_namespace = name_space;
        bytesrecvrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headerErrorsRx")
    {
        headererrorsrx = value;
        headererrorsrx.value_namespace = name_space;
        headererrorsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoutesRx")
    {
        noroutesrx = value;
        noroutesrx.value_namespace = name_space;
        noroutesrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addrErrorRx")
    {
        addrerrorrx = value;
        addrerrorrx.value_namespace = name_space;
        addrerrorrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownProtoRx")
    {
        unknownprotorx = value;
        unknownprotorx.value_namespace = name_space;
        unknownprotorx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncatedPktsRx")
    {
        truncatedpktsrx = value;
        truncatedpktsrx.value_namespace = name_space;
        truncatedpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwardgramsRx")
    {
        forwardgramsrx = value;
        forwardgramsrx.value_namespace = name_space;
        forwardgramsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemblyRequiredRx")
    {
        reassemblyrequiredrx = value;
        reassemblyrequiredrx.value_namespace = name_space;
        reassemblyrequiredrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemblySuccessfulRx")
    {
        reassemblysuccessfulrx = value;
        reassemblysuccessfulrx.value_namespace = name_space;
        reassemblysuccessfulrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemblyFailedRx")
    {
        reassemblyfailedrx = value;
        reassemblyfailedrx.value_namespace = name_space;
        reassemblyfailedrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discardedPktsRx")
    {
        discardedpktsrx = value;
        discardedpktsrx.value_namespace = name_space;
        discardedpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deliveredPktsRx")
    {
        deliveredpktsrx = value;
        deliveredpktsrx.value_namespace = name_space;
        deliveredpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastPktsRx")
    {
        mcastpktsrx = value;
        mcastpktsrx.value_namespace = name_space;
        mcastpktsrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastBytesRx")
    {
        mcastbytesrx = value;
        mcastbytesrx.value_namespace = name_space;
        mcastbytesrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsSentTx")
    {
        pktssenttx = value;
        pktssenttx.value_namespace = name_space;
        pktssenttx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytesSentTx")
    {
        bytessenttx = value;
        bytessenttx.value_namespace = name_space;
        bytessenttx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentRequestsTx")
    {
        sentrequeststx = value;
        sentrequeststx.value_namespace = name_space;
        sentrequeststx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoutesTx")
    {
        noroutestx = value;
        noroutestx.value_namespace = name_space;
        noroutestx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwardgramsTx")
    {
        forwardgramstx = value;
        forwardgramstx.value_namespace = name_space;
        forwardgramstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discardedPktsTx")
    {
        discardedpktstx = value;
        discardedpktstx.value_namespace = name_space;
        discardedpktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragRequiredTx")
    {
        fragrequiredtx = value;
        fragrequiredtx.value_namespace = name_space;
        fragrequiredtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragSuccesfulTx")
    {
        fragsuccesfultx = value;
        fragsuccesfultx.value_namespace = name_space;
        fragsuccesfultx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragFailedTx")
    {
        fragfailedtx = value;
        fragfailedtx.value_namespace = name_space;
        fragfailedtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragCreatesTx")
    {
        fragcreatestx = value;
        fragcreatestx.value_namespace = name_space;
        fragcreatestx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitsTx")
    {
        transmitstx = value;
        transmitstx.value_namespace = name_space;
        transmitstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastPktsTx")
    {
        mcastpktstx = value;
        mcastpktstx.value_namespace = name_space;
        mcastpktstx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastBytesTx")
    {
        mcastbytestx = value;
        mcastbytestx.value_namespace = name_space;
        mcastbytestx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastPktsForwarded")
    {
        rpucastpktsforwarded = value;
        rpucastpktsforwarded.value_namespace = name_space;
        rpucastpktsforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastPktsOriginated")
    {
        rpucastpktsoriginated = value;
        rpucastpktsoriginated.value_namespace = name_space;
        rpucastpktsoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastPktsConsumed")
    {
        rpucastpktsconsumed = value;
        rpucastpktsconsumed.value_namespace = name_space;
        rpucastpktsconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastBytesForwarded")
    {
        rpucastbytesforwarded = value;
        rpucastbytesforwarded.value_namespace = name_space;
        rpucastbytesforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastBytesOriginated")
    {
        rpucastbytesoriginated = value;
        rpucastbytesoriginated.value_namespace = name_space;
        rpucastbytesoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUcastBytesConsumed")
    {
        rpucastbytesconsumed = value;
        rpucastbytesconsumed.value_namespace = name_space;
        rpucastbytesconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastPktsForwarded")
    {
        rpmcastpktsforwarded = value;
        rpmcastpktsforwarded.value_namespace = name_space;
        rpmcastpktsforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastPktsOriginated")
    {
        rpmcastpktsoriginated = value;
        rpmcastpktsoriginated.value_namespace = name_space;
        rpmcastpktsoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastPktsConsumed")
    {
        rpmcastpktsconsumed = value;
        rpmcastpktsconsumed.value_namespace = name_space;
        rpmcastpktsconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastBytesForwarded")
    {
        rpmcastbytesforwarded = value;
        rpmcastbytesforwarded.value_namespace = name_space;
        rpmcastbytesforwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastBytesOriginated")
    {
        rpmcastbytesoriginated = value;
        rpmcastbytesoriginated.value_namespace = name_space;
        rpmcastbytesoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpMcastBytesConsumed")
    {
        rpmcastbytesconsumed = value;
        rpmcastbytesconsumed.value_namespace = name_space;
        rpmcastbytesconsumed.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv6Items::InstItems::TrafficstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statLastReset")
    {
        statlastreset.yfilter = yfilter;
    }
    if(value_path == "ucastFragOriginated")
    {
        ucastfragoriginated.yfilter = yfilter;
    }
    if(value_path == "mcastFragOriginated")
    {
        mcastfragoriginated.yfilter = yfilter;
    }
    if(value_path == "ucastFragConsumed")
    {
        ucastfragconsumed.yfilter = yfilter;
    }
    if(value_path == "mcastFragConsumed")
    {
        mcastfragconsumed.yfilter = yfilter;
    }
    if(value_path == "ingressMcecFwdPkts")
    {
        ingressmcecfwdpkts.yfilter = yfilter;
    }
    if(value_path == "ingressPktsVinciMigration")
    {
        ingresspktsvincimigration.yfilter = yfilter;
    }
    if(value_path == "errBadVersion")
    {
        errbadversion.yfilter = yfilter;
    }
    if(value_path == "errRouteLookupFailed")
    {
        errroutelookupfailed.yfilter = yfilter;
    }
    if(value_path == "errHopLimitExceeded")
    {
        errhoplimitexceeded.yfilter = yfilter;
    }
    if(value_path == "errIngressIfMgrInitDrops")
    {
        erringressifmgrinitdrops.yfilter = yfilter;
    }
    if(value_path == "errRpfDrop")
    {
        errrpfdrop.yfilter = yfilter;
    }
    if(value_path == "errOptionHeader")
    {
        erroptionheader.yfilter = yfilter;
    }
    if(value_path == "errPayloadLenTooSmall")
    {
        errpayloadlentoosmall.yfilter = yfilter;
    }
    if(value_path == "errPMFailed")
    {
        errpmfailed.yfilter = yfilter;
    }
    if(value_path == "errMbufError")
    {
        errmbuferror.yfilter = yfilter;
    }
    if(value_path == "errEncapError")
    {
        errencaperror.yfilter = yfilter;
    }
    if(value_path == "errPktsDroppedDestIfDown")
    {
        errpktsdroppeddestifdown.yfilter = yfilter;
    }
    if(value_path == "pktsRecvRx")
    {
        pktsrecvrx.yfilter = yfilter;
    }
    if(value_path == "bytesRecvRx")
    {
        bytesrecvrx.yfilter = yfilter;
    }
    if(value_path == "headerErrorsRx")
    {
        headererrorsrx.yfilter = yfilter;
    }
    if(value_path == "noRoutesRx")
    {
        noroutesrx.yfilter = yfilter;
    }
    if(value_path == "addrErrorRx")
    {
        addrerrorrx.yfilter = yfilter;
    }
    if(value_path == "unknownProtoRx")
    {
        unknownprotorx.yfilter = yfilter;
    }
    if(value_path == "truncatedPktsRx")
    {
        truncatedpktsrx.yfilter = yfilter;
    }
    if(value_path == "forwardgramsRx")
    {
        forwardgramsrx.yfilter = yfilter;
    }
    if(value_path == "reassemblyRequiredRx")
    {
        reassemblyrequiredrx.yfilter = yfilter;
    }
    if(value_path == "reassemblySuccessfulRx")
    {
        reassemblysuccessfulrx.yfilter = yfilter;
    }
    if(value_path == "reassemblyFailedRx")
    {
        reassemblyfailedrx.yfilter = yfilter;
    }
    if(value_path == "discardedPktsRx")
    {
        discardedpktsrx.yfilter = yfilter;
    }
    if(value_path == "deliveredPktsRx")
    {
        deliveredpktsrx.yfilter = yfilter;
    }
    if(value_path == "mcastPktsRx")
    {
        mcastpktsrx.yfilter = yfilter;
    }
    if(value_path == "mcastBytesRx")
    {
        mcastbytesrx.yfilter = yfilter;
    }
    if(value_path == "pktsSentTx")
    {
        pktssenttx.yfilter = yfilter;
    }
    if(value_path == "bytesSentTx")
    {
        bytessenttx.yfilter = yfilter;
    }
    if(value_path == "sentRequestsTx")
    {
        sentrequeststx.yfilter = yfilter;
    }
    if(value_path == "noRoutesTx")
    {
        noroutestx.yfilter = yfilter;
    }
    if(value_path == "forwardgramsTx")
    {
        forwardgramstx.yfilter = yfilter;
    }
    if(value_path == "discardedPktsTx")
    {
        discardedpktstx.yfilter = yfilter;
    }
    if(value_path == "fragRequiredTx")
    {
        fragrequiredtx.yfilter = yfilter;
    }
    if(value_path == "fragSuccesfulTx")
    {
        fragsuccesfultx.yfilter = yfilter;
    }
    if(value_path == "fragFailedTx")
    {
        fragfailedtx.yfilter = yfilter;
    }
    if(value_path == "fragCreatesTx")
    {
        fragcreatestx.yfilter = yfilter;
    }
    if(value_path == "transmitsTx")
    {
        transmitstx.yfilter = yfilter;
    }
    if(value_path == "mcastPktsTx")
    {
        mcastpktstx.yfilter = yfilter;
    }
    if(value_path == "mcastBytesTx")
    {
        mcastbytestx.yfilter = yfilter;
    }
    if(value_path == "rpUcastPktsForwarded")
    {
        rpucastpktsforwarded.yfilter = yfilter;
    }
    if(value_path == "rpUcastPktsOriginated")
    {
        rpucastpktsoriginated.yfilter = yfilter;
    }
    if(value_path == "rpUcastPktsConsumed")
    {
        rpucastpktsconsumed.yfilter = yfilter;
    }
    if(value_path == "rpUcastBytesForwarded")
    {
        rpucastbytesforwarded.yfilter = yfilter;
    }
    if(value_path == "rpUcastBytesOriginated")
    {
        rpucastbytesoriginated.yfilter = yfilter;
    }
    if(value_path == "rpUcastBytesConsumed")
    {
        rpucastbytesconsumed.yfilter = yfilter;
    }
    if(value_path == "rpMcastPktsForwarded")
    {
        rpmcastpktsforwarded.yfilter = yfilter;
    }
    if(value_path == "rpMcastPktsOriginated")
    {
        rpmcastpktsoriginated.yfilter = yfilter;
    }
    if(value_path == "rpMcastPktsConsumed")
    {
        rpmcastpktsconsumed.yfilter = yfilter;
    }
    if(value_path == "rpMcastBytesForwarded")
    {
        rpmcastbytesforwarded.yfilter = yfilter;
    }
    if(value_path == "rpMcastBytesOriginated")
    {
        rpmcastbytesoriginated.yfilter = yfilter;
    }
    if(value_path == "rpMcastBytesConsumed")
    {
        rpmcastbytesconsumed.yfilter = yfilter;
    }
}

bool System::Ipv6Items::InstItems::TrafficstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statLastReset" || name == "ucastFragOriginated" || name == "mcastFragOriginated" || name == "ucastFragConsumed" || name == "mcastFragConsumed" || name == "ingressMcecFwdPkts" || name == "ingressPktsVinciMigration" || name == "errBadVersion" || name == "errRouteLookupFailed" || name == "errHopLimitExceeded" || name == "errIngressIfMgrInitDrops" || name == "errRpfDrop" || name == "errOptionHeader" || name == "errPayloadLenTooSmall" || name == "errPMFailed" || name == "errMbufError" || name == "errEncapError" || name == "errPktsDroppedDestIfDown" || name == "pktsRecvRx" || name == "bytesRecvRx" || name == "headerErrorsRx" || name == "noRoutesRx" || name == "addrErrorRx" || name == "unknownProtoRx" || name == "truncatedPktsRx" || name == "forwardgramsRx" || name == "reassemblyRequiredRx" || name == "reassemblySuccessfulRx" || name == "reassemblyFailedRx" || name == "discardedPktsRx" || name == "deliveredPktsRx" || name == "mcastPktsRx" || name == "mcastBytesRx" || name == "pktsSentTx" || name == "bytesSentTx" || name == "sentRequestsTx" || name == "noRoutesTx" || name == "forwardgramsTx" || name == "discardedPktsTx" || name == "fragRequiredTx" || name == "fragSuccesfulTx" || name == "fragFailedTx" || name == "fragCreatesTx" || name == "transmitsTx" || name == "mcastPktsTx" || name == "mcastBytesTx" || name == "rpUcastPktsForwarded" || name == "rpUcastPktsOriginated" || name == "rpUcastPktsConsumed" || name == "rpUcastBytesForwarded" || name == "rpUcastBytesOriginated" || name == "rpUcastBytesConsumed" || name == "rpMcastPktsForwarded" || name == "rpMcastPktsOriginated" || name == "rpMcastPktsConsumed" || name == "rpMcastBytesForwarded" || name == "rpMcastBytesOriginated" || name == "rpMcastBytesConsumed")
        return true;
    return false;
}

System::L1capprovItems::L1capprovItems()
    :
    prov_list(this, {"subj", "type"})
{

    yang_name = "l1capprov-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L1capprovItems::~L1capprovItems()
{
}

bool System::L1capprovItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L1capprovItems::has_operation() const
{
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L1capprovItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L1capprovItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1capprov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L1capprovItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L1capprovItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Prov-list")
    {
        auto ent_ = std::make_shared<System::L1capprovItems::ProvList>();
        ent_->parent = this;
        prov_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L1capprovItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prov_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::L1capprovItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L1capprovItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L1capprovItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Prov-list")
        return true;
    return false;
}

System::L1capprovItems::ProvList::ProvList()
    :
    subj{YType::enumeration, "subj"},
    type{YType::enumeration, "type"},
    total{YType::uint32, "total"},
    remaining{YType::uint32, "remaining"},
    utilization{YType::uint8, "utilization"}
{

    yang_name = "Prov-list"; yang_parent_name = "l1capprov-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L1capprovItems::ProvList::~ProvList()
{
}

bool System::L1capprovItems::ProvList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| type.is_set
	|| total.is_set
	|| remaining.is_set
	|| utilization.is_set;
}

bool System::L1capprovItems::ProvList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(remaining.yfilter)
	|| ydk::is_set(utilization.yfilter);
}

std::string System::L1capprovItems::ProvList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l1capprov-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L1capprovItems::ProvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Prov-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L1capprovItems::ProvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (remaining.is_set || is_set(remaining.yfilter)) leaf_name_data.push_back(remaining.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L1capprovItems::ProvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L1capprovItems::ProvList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::L1capprovItems::ProvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining")
    {
        remaining = value;
        remaining.value_namespace = name_space;
        remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization")
    {
        utilization = value;
        utilization.value_namespace = name_space;
        utilization.value_namespace_prefix = name_space_prefix;
    }
}

void System::L1capprovItems::ProvList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "remaining")
    {
        remaining.yfilter = yfilter;
    }
    if(value_path == "utilization")
    {
        utilization.yfilter = yfilter;
    }
}

bool System::L1capprovItems::ProvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "type" || name == "total" || name == "remaining" || name == "utilization")
        return true;
    return false;
}

System::EthpmItems::EthpmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::EthpmItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "ethpm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::~EthpmItems()
{
}

bool System::EthpmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::EthpmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::EthpmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethpm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::EthpmItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::EthpmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::EthpmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::EthpmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::EthpmItems::InstItems::InstItems()
    :
    vlantagnative{YType::boolean, "vlanTagNative"},
    systemdefaultlayer{YType::enumeration, "systemDefaultLayer"},
    systemdefaultadminst{YType::enumeration, "systemDefaultAdminSt"},
    systemjumbomtu{YType::uint32, "systemJumboMtu"},
    logevent{YType::str, "logEvent"},
    loglevel{YType::uint32, "logLevel"},
    pacertotalcredits{YType::uint32, "pacerTotalCredits"},
    paceraccesscredits{YType::uint32, "pacerAccessCredits"},
    pacertrunkcredits{YType::uint32, "pacerTrunkCredits"},
    pacerpervlancredits{YType::uint32, "pacerPerVlanCredits"},
    pacerrtdportcredits{YType::uint32, "pacerRtdPortCredits"},
    pacerpersicredits{YType::uint32, "pacerPerSiCredits"},
    pacerfabricportcredits{YType::uint32, "pacerFabricPortCredits"},
    pacernotconntimer{YType::uint32, "pacerNotConnTimer"},
    pacernotuptimer{YType::uint32, "pacerNotUpTimer"},
    allowunsupportedsfp{YType::boolean, "allowUnsupportedSfp"},
    ifsysloginfo{YType::enumeration, "ifSyslogInfo"},
    adminlinkupsysloglevel{YType::uint32, "adminLinkUpSyslogLevel"},
    adminlinkdownsysloglevel{YType::uint32, "adminLinkDownSyslogLevel"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    runtime_items(std::make_shared<System::EthpmItems::InstItems::RuntimeItems>())
    , errdisrecover_items(std::make_shared<System::EthpmItems::InstItems::ErrdisrecoverItems>())
    , vlan_items(std::make_shared<System::EthpmItems::InstItems::VlanItems>())
    , module_items(std::make_shared<System::EthpmItems::InstItems::ModuleItems>())
{
    runtime_items->parent = this;
    errdisrecover_items->parent = this;
    vlan_items->parent = this;
    module_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "ethpm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::~InstItems()
{
}

bool System::EthpmItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return vlantagnative.is_set
	|| systemdefaultlayer.is_set
	|| systemdefaultadminst.is_set
	|| systemjumbomtu.is_set
	|| logevent.is_set
	|| loglevel.is_set
	|| pacertotalcredits.is_set
	|| paceraccesscredits.is_set
	|| pacertrunkcredits.is_set
	|| pacerpervlancredits.is_set
	|| pacerrtdportcredits.is_set
	|| pacerpersicredits.is_set
	|| pacerfabricportcredits.is_set
	|| pacernotconntimer.is_set
	|| pacernotuptimer.is_set
	|| allowunsupportedsfp.is_set
	|| ifsysloginfo.is_set
	|| adminlinkupsysloglevel.is_set
	|| adminlinkdownsysloglevel.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (runtime_items !=  nullptr && runtime_items->has_data())
	|| (errdisrecover_items !=  nullptr && errdisrecover_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (module_items !=  nullptr && module_items->has_data());
}

bool System::EthpmItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlantagnative.yfilter)
	|| ydk::is_set(systemdefaultlayer.yfilter)
	|| ydk::is_set(systemdefaultadminst.yfilter)
	|| ydk::is_set(systemjumbomtu.yfilter)
	|| ydk::is_set(logevent.yfilter)
	|| ydk::is_set(loglevel.yfilter)
	|| ydk::is_set(pacertotalcredits.yfilter)
	|| ydk::is_set(paceraccesscredits.yfilter)
	|| ydk::is_set(pacertrunkcredits.yfilter)
	|| ydk::is_set(pacerpervlancredits.yfilter)
	|| ydk::is_set(pacerrtdportcredits.yfilter)
	|| ydk::is_set(pacerpersicredits.yfilter)
	|| ydk::is_set(pacerfabricportcredits.yfilter)
	|| ydk::is_set(pacernotconntimer.yfilter)
	|| ydk::is_set(pacernotuptimer.yfilter)
	|| ydk::is_set(allowunsupportedsfp.yfilter)
	|| ydk::is_set(ifsysloginfo.yfilter)
	|| ydk::is_set(adminlinkupsysloglevel.yfilter)
	|| ydk::is_set(adminlinkdownsysloglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (runtime_items !=  nullptr && runtime_items->has_operation())
	|| (errdisrecover_items !=  nullptr && errdisrecover_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (module_items !=  nullptr && module_items->has_operation());
}

std::string System::EthpmItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlantagnative.is_set || is_set(vlantagnative.yfilter)) leaf_name_data.push_back(vlantagnative.get_name_leafdata());
    if (systemdefaultlayer.is_set || is_set(systemdefaultlayer.yfilter)) leaf_name_data.push_back(systemdefaultlayer.get_name_leafdata());
    if (systemdefaultadminst.is_set || is_set(systemdefaultadminst.yfilter)) leaf_name_data.push_back(systemdefaultadminst.get_name_leafdata());
    if (systemjumbomtu.is_set || is_set(systemjumbomtu.yfilter)) leaf_name_data.push_back(systemjumbomtu.get_name_leafdata());
    if (logevent.is_set || is_set(logevent.yfilter)) leaf_name_data.push_back(logevent.get_name_leafdata());
    if (loglevel.is_set || is_set(loglevel.yfilter)) leaf_name_data.push_back(loglevel.get_name_leafdata());
    if (pacertotalcredits.is_set || is_set(pacertotalcredits.yfilter)) leaf_name_data.push_back(pacertotalcredits.get_name_leafdata());
    if (paceraccesscredits.is_set || is_set(paceraccesscredits.yfilter)) leaf_name_data.push_back(paceraccesscredits.get_name_leafdata());
    if (pacertrunkcredits.is_set || is_set(pacertrunkcredits.yfilter)) leaf_name_data.push_back(pacertrunkcredits.get_name_leafdata());
    if (pacerpervlancredits.is_set || is_set(pacerpervlancredits.yfilter)) leaf_name_data.push_back(pacerpervlancredits.get_name_leafdata());
    if (pacerrtdportcredits.is_set || is_set(pacerrtdportcredits.yfilter)) leaf_name_data.push_back(pacerrtdportcredits.get_name_leafdata());
    if (pacerpersicredits.is_set || is_set(pacerpersicredits.yfilter)) leaf_name_data.push_back(pacerpersicredits.get_name_leafdata());
    if (pacerfabricportcredits.is_set || is_set(pacerfabricportcredits.yfilter)) leaf_name_data.push_back(pacerfabricportcredits.get_name_leafdata());
    if (pacernotconntimer.is_set || is_set(pacernotconntimer.yfilter)) leaf_name_data.push_back(pacernotconntimer.get_name_leafdata());
    if (pacernotuptimer.is_set || is_set(pacernotuptimer.yfilter)) leaf_name_data.push_back(pacernotuptimer.get_name_leafdata());
    if (allowunsupportedsfp.is_set || is_set(allowunsupportedsfp.yfilter)) leaf_name_data.push_back(allowunsupportedsfp.get_name_leafdata());
    if (ifsysloginfo.is_set || is_set(ifsysloginfo.yfilter)) leaf_name_data.push_back(ifsysloginfo.get_name_leafdata());
    if (adminlinkupsysloglevel.is_set || is_set(adminlinkupsysloglevel.yfilter)) leaf_name_data.push_back(adminlinkupsysloglevel.get_name_leafdata());
    if (adminlinkdownsysloglevel.is_set || is_set(adminlinkdownsysloglevel.yfilter)) leaf_name_data.push_back(adminlinkdownsysloglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime-items")
    {
        if(runtime_items == nullptr)
        {
            runtime_items = std::make_shared<System::EthpmItems::InstItems::RuntimeItems>();
        }
        return runtime_items;
    }

    if(child_yang_name == "errdisrecover-items")
    {
        if(errdisrecover_items == nullptr)
        {
            errdisrecover_items = std::make_shared<System::EthpmItems::InstItems::ErrdisrecoverItems>();
        }
        return errdisrecover_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::EthpmItems::InstItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "module-items")
    {
        if(module_items == nullptr)
        {
            module_items = std::make_shared<System::EthpmItems::InstItems::ModuleItems>();
        }
        return module_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(runtime_items != nullptr)
    {
        _children["runtime-items"] = runtime_items;
    }

    if(errdisrecover_items != nullptr)
    {
        _children["errdisrecover-items"] = errdisrecover_items;
    }

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(module_items != nullptr)
    {
        _children["module-items"] = module_items;
    }

    return _children;
}

void System::EthpmItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanTagNative")
    {
        vlantagnative = value;
        vlantagnative.value_namespace = name_space;
        vlantagnative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "systemDefaultLayer")
    {
        systemdefaultlayer = value;
        systemdefaultlayer.value_namespace = name_space;
        systemdefaultlayer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "systemDefaultAdminSt")
    {
        systemdefaultadminst = value;
        systemdefaultadminst.value_namespace = name_space;
        systemdefaultadminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "systemJumboMtu")
    {
        systemjumbomtu = value;
        systemjumbomtu.value_namespace = name_space;
        systemjumbomtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logEvent")
    {
        logevent = value;
        logevent.value_namespace = name_space;
        logevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logLevel")
    {
        loglevel = value;
        loglevel.value_namespace = name_space;
        loglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerTotalCredits")
    {
        pacertotalcredits = value;
        pacertotalcredits.value_namespace = name_space;
        pacertotalcredits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerAccessCredits")
    {
        paceraccesscredits = value;
        paceraccesscredits.value_namespace = name_space;
        paceraccesscredits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerTrunkCredits")
    {
        pacertrunkcredits = value;
        pacertrunkcredits.value_namespace = name_space;
        pacertrunkcredits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerPerVlanCredits")
    {
        pacerpervlancredits = value;
        pacerpervlancredits.value_namespace = name_space;
        pacerpervlancredits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerRtdPortCredits")
    {
        pacerrtdportcredits = value;
        pacerrtdportcredits.value_namespace = name_space;
        pacerrtdportcredits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerPerSiCredits")
    {
        pacerpersicredits = value;
        pacerpersicredits.value_namespace = name_space;
        pacerpersicredits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerFabricPortCredits")
    {
        pacerfabricportcredits = value;
        pacerfabricportcredits.value_namespace = name_space;
        pacerfabricportcredits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerNotConnTimer")
    {
        pacernotconntimer = value;
        pacernotconntimer.value_namespace = name_space;
        pacernotconntimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacerNotUpTimer")
    {
        pacernotuptimer = value;
        pacernotuptimer.value_namespace = name_space;
        pacernotuptimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowUnsupportedSfp")
    {
        allowunsupportedsfp = value;
        allowunsupportedsfp.value_namespace = name_space;
        allowunsupportedsfp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifSyslogInfo")
    {
        ifsysloginfo = value;
        ifsysloginfo.value_namespace = name_space;
        ifsysloginfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminLinkUpSyslogLevel")
    {
        adminlinkupsysloglevel = value;
        adminlinkupsysloglevel.value_namespace = name_space;
        adminlinkupsysloglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminLinkDownSyslogLevel")
    {
        adminlinkdownsysloglevel = value;
        adminlinkdownsysloglevel.value_namespace = name_space;
        adminlinkdownsysloglevel.value_namespace_prefix = name_space_prefix;
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

void System::EthpmItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanTagNative")
    {
        vlantagnative.yfilter = yfilter;
    }
    if(value_path == "systemDefaultLayer")
    {
        systemdefaultlayer.yfilter = yfilter;
    }
    if(value_path == "systemDefaultAdminSt")
    {
        systemdefaultadminst.yfilter = yfilter;
    }
    if(value_path == "systemJumboMtu")
    {
        systemjumbomtu.yfilter = yfilter;
    }
    if(value_path == "logEvent")
    {
        logevent.yfilter = yfilter;
    }
    if(value_path == "logLevel")
    {
        loglevel.yfilter = yfilter;
    }
    if(value_path == "pacerTotalCredits")
    {
        pacertotalcredits.yfilter = yfilter;
    }
    if(value_path == "pacerAccessCredits")
    {
        paceraccesscredits.yfilter = yfilter;
    }
    if(value_path == "pacerTrunkCredits")
    {
        pacertrunkcredits.yfilter = yfilter;
    }
    if(value_path == "pacerPerVlanCredits")
    {
        pacerpervlancredits.yfilter = yfilter;
    }
    if(value_path == "pacerRtdPortCredits")
    {
        pacerrtdportcredits.yfilter = yfilter;
    }
    if(value_path == "pacerPerSiCredits")
    {
        pacerpersicredits.yfilter = yfilter;
    }
    if(value_path == "pacerFabricPortCredits")
    {
        pacerfabricportcredits.yfilter = yfilter;
    }
    if(value_path == "pacerNotConnTimer")
    {
        pacernotconntimer.yfilter = yfilter;
    }
    if(value_path == "pacerNotUpTimer")
    {
        pacernotuptimer.yfilter = yfilter;
    }
    if(value_path == "allowUnsupportedSfp")
    {
        allowunsupportedsfp.yfilter = yfilter;
    }
    if(value_path == "ifSyslogInfo")
    {
        ifsysloginfo.yfilter = yfilter;
    }
    if(value_path == "adminLinkUpSyslogLevel")
    {
        adminlinkupsysloglevel.yfilter = yfilter;
    }
    if(value_path == "adminLinkDownSyslogLevel")
    {
        adminlinkdownsysloglevel.yfilter = yfilter;
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

bool System::EthpmItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime-items" || name == "errdisrecover-items" || name == "vlan-items" || name == "module-items" || name == "vlanTagNative" || name == "systemDefaultLayer" || name == "systemDefaultAdminSt" || name == "systemJumboMtu" || name == "logEvent" || name == "logLevel" || name == "pacerTotalCredits" || name == "pacerAccessCredits" || name == "pacerTrunkCredits" || name == "pacerPerVlanCredits" || name == "pacerRtdPortCredits" || name == "pacerPerSiCredits" || name == "pacerFabricPortCredits" || name == "pacerNotConnTimer" || name == "pacerNotUpTimer" || name == "allowUnsupportedSfp" || name == "ifSyslogInfo" || name == "adminLinkUpSyslogLevel" || name == "adminLinkDownSyslogLevel" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::EthpmItems::InstItems::RuntimeItems::RuntimeItems()
    :
    staticrmaccfgrefcount{YType::uint32, "staticRMacCfgRefCount"},
    pvlantrunkcfgrefcount{YType::uint32, "pvlanTrunkCfgRefCount"},
    dot1qrefcount{YType::uint32, "dot1qRefCount"},
    ethertyperefcount{YType::uint32, "ethertypeRefCount"},
    l3satportrefcount{YType::uint32, "l3SatportRefCount"},
    snmpiftbllastchange{YType::str, "snmpIfTblLastChange"},
    issupacerrefcount{YType::uint32, "issuPacerRefCount"},
    featurepongstate{YType::uint8, "featurePongState"},
    slowdraincongcoreconfchkstate{YType::uint8, "slowdrainCongCoreConfChkState"},
    slowdraincongedgeconfchkstate{YType::uint8, "slowdrainCongEdgeConfChkState"},
    slowdrainpausconfchkstate{YType::uint8, "slowdrainPausConfChkState"},
    slowdrainpausedgeconfchkstate{YType::uint8, "slowdrainPausEdgeConfChkState"},
    eeerefcount{YType::uint32, "eeeRefCount"},
    fabpathcfgrefcount{YType::uint32, "fabpathCfgRefCount"},
    dceswid{YType::uint32, "dceSwId"},
    lifloopbackdone{YType::boolean, "lifLoopbackDone"},
    numbundles{YType::uint32, "numBundles"},
    bundleiflist{YType::str, "bundleIfList"},
    lbifs{YType::str, "lbIfs"}
{

    yang_name = "runtime-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::RuntimeItems::~RuntimeItems()
{
}

bool System::EthpmItems::InstItems::RuntimeItems::has_data() const
{
    if (is_presence_container) return true;
    return staticrmaccfgrefcount.is_set
	|| pvlantrunkcfgrefcount.is_set
	|| dot1qrefcount.is_set
	|| ethertyperefcount.is_set
	|| l3satportrefcount.is_set
	|| snmpiftbllastchange.is_set
	|| issupacerrefcount.is_set
	|| featurepongstate.is_set
	|| slowdraincongcoreconfchkstate.is_set
	|| slowdraincongedgeconfchkstate.is_set
	|| slowdrainpausconfchkstate.is_set
	|| slowdrainpausedgeconfchkstate.is_set
	|| eeerefcount.is_set
	|| fabpathcfgrefcount.is_set
	|| dceswid.is_set
	|| lifloopbackdone.is_set
	|| numbundles.is_set
	|| bundleiflist.is_set
	|| lbifs.is_set;
}

bool System::EthpmItems::InstItems::RuntimeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(staticrmaccfgrefcount.yfilter)
	|| ydk::is_set(pvlantrunkcfgrefcount.yfilter)
	|| ydk::is_set(dot1qrefcount.yfilter)
	|| ydk::is_set(ethertyperefcount.yfilter)
	|| ydk::is_set(l3satportrefcount.yfilter)
	|| ydk::is_set(snmpiftbllastchange.yfilter)
	|| ydk::is_set(issupacerrefcount.yfilter)
	|| ydk::is_set(featurepongstate.yfilter)
	|| ydk::is_set(slowdraincongcoreconfchkstate.yfilter)
	|| ydk::is_set(slowdraincongedgeconfchkstate.yfilter)
	|| ydk::is_set(slowdrainpausconfchkstate.yfilter)
	|| ydk::is_set(slowdrainpausedgeconfchkstate.yfilter)
	|| ydk::is_set(eeerefcount.yfilter)
	|| ydk::is_set(fabpathcfgrefcount.yfilter)
	|| ydk::is_set(dceswid.yfilter)
	|| ydk::is_set(lifloopbackdone.yfilter)
	|| ydk::is_set(numbundles.yfilter)
	|| ydk::is_set(bundleiflist.yfilter)
	|| ydk::is_set(lbifs.yfilter);
}

std::string System::EthpmItems::InstItems::RuntimeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::RuntimeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::RuntimeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (staticrmaccfgrefcount.is_set || is_set(staticrmaccfgrefcount.yfilter)) leaf_name_data.push_back(staticrmaccfgrefcount.get_name_leafdata());
    if (pvlantrunkcfgrefcount.is_set || is_set(pvlantrunkcfgrefcount.yfilter)) leaf_name_data.push_back(pvlantrunkcfgrefcount.get_name_leafdata());
    if (dot1qrefcount.is_set || is_set(dot1qrefcount.yfilter)) leaf_name_data.push_back(dot1qrefcount.get_name_leafdata());
    if (ethertyperefcount.is_set || is_set(ethertyperefcount.yfilter)) leaf_name_data.push_back(ethertyperefcount.get_name_leafdata());
    if (l3satportrefcount.is_set || is_set(l3satportrefcount.yfilter)) leaf_name_data.push_back(l3satportrefcount.get_name_leafdata());
    if (snmpiftbllastchange.is_set || is_set(snmpiftbllastchange.yfilter)) leaf_name_data.push_back(snmpiftbllastchange.get_name_leafdata());
    if (issupacerrefcount.is_set || is_set(issupacerrefcount.yfilter)) leaf_name_data.push_back(issupacerrefcount.get_name_leafdata());
    if (featurepongstate.is_set || is_set(featurepongstate.yfilter)) leaf_name_data.push_back(featurepongstate.get_name_leafdata());
    if (slowdraincongcoreconfchkstate.is_set || is_set(slowdraincongcoreconfchkstate.yfilter)) leaf_name_data.push_back(slowdraincongcoreconfchkstate.get_name_leafdata());
    if (slowdraincongedgeconfchkstate.is_set || is_set(slowdraincongedgeconfchkstate.yfilter)) leaf_name_data.push_back(slowdraincongedgeconfchkstate.get_name_leafdata());
    if (slowdrainpausconfchkstate.is_set || is_set(slowdrainpausconfchkstate.yfilter)) leaf_name_data.push_back(slowdrainpausconfchkstate.get_name_leafdata());
    if (slowdrainpausedgeconfchkstate.is_set || is_set(slowdrainpausedgeconfchkstate.yfilter)) leaf_name_data.push_back(slowdrainpausedgeconfchkstate.get_name_leafdata());
    if (eeerefcount.is_set || is_set(eeerefcount.yfilter)) leaf_name_data.push_back(eeerefcount.get_name_leafdata());
    if (fabpathcfgrefcount.is_set || is_set(fabpathcfgrefcount.yfilter)) leaf_name_data.push_back(fabpathcfgrefcount.get_name_leafdata());
    if (dceswid.is_set || is_set(dceswid.yfilter)) leaf_name_data.push_back(dceswid.get_name_leafdata());
    if (lifloopbackdone.is_set || is_set(lifloopbackdone.yfilter)) leaf_name_data.push_back(lifloopbackdone.get_name_leafdata());
    if (numbundles.is_set || is_set(numbundles.yfilter)) leaf_name_data.push_back(numbundles.get_name_leafdata());
    if (bundleiflist.is_set || is_set(bundleiflist.yfilter)) leaf_name_data.push_back(bundleiflist.get_name_leafdata());
    if (lbifs.is_set || is_set(lbifs.yfilter)) leaf_name_data.push_back(lbifs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::RuntimeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::RuntimeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EthpmItems::InstItems::RuntimeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "staticRMacCfgRefCount")
    {
        staticrmaccfgrefcount = value;
        staticrmaccfgrefcount.value_namespace = name_space;
        staticrmaccfgrefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pvlanTrunkCfgRefCount")
    {
        pvlantrunkcfgrefcount = value;
        pvlantrunkcfgrefcount.value_namespace = name_space;
        pvlantrunkcfgrefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qRefCount")
    {
        dot1qrefcount = value;
        dot1qrefcount.value_namespace = name_space;
        dot1qrefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertypeRefCount")
    {
        ethertyperefcount = value;
        ethertyperefcount.value_namespace = name_space;
        ethertyperefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3SatportRefCount")
    {
        l3satportrefcount = value;
        l3satportrefcount.value_namespace = name_space;
        l3satportrefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIfTblLastChange")
    {
        snmpiftbllastchange = value;
        snmpiftbllastchange.value_namespace = name_space;
        snmpiftbllastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issuPacerRefCount")
    {
        issupacerrefcount = value;
        issupacerrefcount.value_namespace = name_space;
        issupacerrefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "featurePongState")
    {
        featurepongstate = value;
        featurepongstate.value_namespace = name_space;
        featurepongstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowdrainCongCoreConfChkState")
    {
        slowdraincongcoreconfchkstate = value;
        slowdraincongcoreconfchkstate.value_namespace = name_space;
        slowdraincongcoreconfchkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowdrainCongEdgeConfChkState")
    {
        slowdraincongedgeconfchkstate = value;
        slowdraincongedgeconfchkstate.value_namespace = name_space;
        slowdraincongedgeconfchkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowdrainPausConfChkState")
    {
        slowdrainpausconfchkstate = value;
        slowdrainpausconfchkstate.value_namespace = name_space;
        slowdrainpausconfchkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowdrainPausEdgeConfChkState")
    {
        slowdrainpausedgeconfchkstate = value;
        slowdrainpausedgeconfchkstate.value_namespace = name_space;
        slowdrainpausedgeconfchkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeRefCount")
    {
        eeerefcount = value;
        eeerefcount.value_namespace = name_space;
        eeerefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabpathCfgRefCount")
    {
        fabpathcfgrefcount = value;
        fabpathcfgrefcount.value_namespace = name_space;
        fabpathcfgrefcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dceSwId")
    {
        dceswid = value;
        dceswid.value_namespace = name_space;
        dceswid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifLoopbackDone")
    {
        lifloopbackdone = value;
        lifloopbackdone.value_namespace = name_space;
        lifloopbackdone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBundles")
    {
        numbundles = value;
        numbundles.value_namespace = name_space;
        numbundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundleIfList")
    {
        bundleiflist = value;
        bundleiflist.value_namespace = name_space;
        bundleiflist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbIfs")
    {
        lbifs = value;
        lbifs.value_namespace = name_space;
        lbifs.value_namespace_prefix = name_space_prefix;
    }
}

void System::EthpmItems::InstItems::RuntimeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "staticRMacCfgRefCount")
    {
        staticrmaccfgrefcount.yfilter = yfilter;
    }
    if(value_path == "pvlanTrunkCfgRefCount")
    {
        pvlantrunkcfgrefcount.yfilter = yfilter;
    }
    if(value_path == "dot1qRefCount")
    {
        dot1qrefcount.yfilter = yfilter;
    }
    if(value_path == "ethertypeRefCount")
    {
        ethertyperefcount.yfilter = yfilter;
    }
    if(value_path == "l3SatportRefCount")
    {
        l3satportrefcount.yfilter = yfilter;
    }
    if(value_path == "snmpIfTblLastChange")
    {
        snmpiftbllastchange.yfilter = yfilter;
    }
    if(value_path == "issuPacerRefCount")
    {
        issupacerrefcount.yfilter = yfilter;
    }
    if(value_path == "featurePongState")
    {
        featurepongstate.yfilter = yfilter;
    }
    if(value_path == "slowdrainCongCoreConfChkState")
    {
        slowdraincongcoreconfchkstate.yfilter = yfilter;
    }
    if(value_path == "slowdrainCongEdgeConfChkState")
    {
        slowdraincongedgeconfchkstate.yfilter = yfilter;
    }
    if(value_path == "slowdrainPausConfChkState")
    {
        slowdrainpausconfchkstate.yfilter = yfilter;
    }
    if(value_path == "slowdrainPausEdgeConfChkState")
    {
        slowdrainpausedgeconfchkstate.yfilter = yfilter;
    }
    if(value_path == "eeeRefCount")
    {
        eeerefcount.yfilter = yfilter;
    }
    if(value_path == "fabpathCfgRefCount")
    {
        fabpathcfgrefcount.yfilter = yfilter;
    }
    if(value_path == "dceSwId")
    {
        dceswid.yfilter = yfilter;
    }
    if(value_path == "lifLoopbackDone")
    {
        lifloopbackdone.yfilter = yfilter;
    }
    if(value_path == "numBundles")
    {
        numbundles.yfilter = yfilter;
    }
    if(value_path == "bundleIfList")
    {
        bundleiflist.yfilter = yfilter;
    }
    if(value_path == "lbIfs")
    {
        lbifs.yfilter = yfilter;
    }
}

bool System::EthpmItems::InstItems::RuntimeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "staticRMacCfgRefCount" || name == "pvlanTrunkCfgRefCount" || name == "dot1qRefCount" || name == "ethertypeRefCount" || name == "l3SatportRefCount" || name == "snmpIfTblLastChange" || name == "issuPacerRefCount" || name == "featurePongState" || name == "slowdrainCongCoreConfChkState" || name == "slowdrainCongEdgeConfChkState" || name == "slowdrainPausConfChkState" || name == "slowdrainPausEdgeConfChkState" || name == "eeeRefCount" || name == "fabpathCfgRefCount" || name == "dceSwId" || name == "lifLoopbackDone" || name == "numBundles" || name == "bundleIfList" || name == "lbIfs")
        return true;
    return false;
}

System::EthpmItems::InstItems::ErrdisrecoverItems::ErrdisrecoverItems()
    :
    errdisrecovintvl{YType::uint32, "errDisRecovIntvl"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    event_items(std::make_shared<System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems>())
    , rserrdisrecoverpolcons_items(std::make_shared<System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems>())
{
    event_items->parent = this;
    rserrdisrecoverpolcons_items->parent = this;

    yang_name = "errdisrecover-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::ErrdisrecoverItems::~ErrdisrecoverItems()
{
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::has_data() const
{
    if (is_presence_container) return true;
    return errdisrecovintvl.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (event_items !=  nullptr && event_items->has_data())
	|| (rserrdisrecoverpolcons_items !=  nullptr && rserrdisrecoverpolcons_items->has_data());
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errdisrecovintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (event_items !=  nullptr && event_items->has_operation())
	|| (rserrdisrecoverpolcons_items !=  nullptr && rserrdisrecoverpolcons_items->has_operation());
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisrecover-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::ErrdisrecoverItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errdisrecovintvl.is_set || is_set(errdisrecovintvl.yfilter)) leaf_name_data.push_back(errdisrecovintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::ErrdisrecoverItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Event-items")
    {
        if(event_items == nullptr)
        {
            event_items = std::make_shared<System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems>();
        }
        return event_items;
    }

    if(child_yang_name == "rserrDisRecoverPolCons-items")
    {
        if(rserrdisrecoverpolcons_items == nullptr)
        {
            rserrdisrecoverpolcons_items = std::make_shared<System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems>();
        }
        return rserrdisrecoverpolcons_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::ErrdisrecoverItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_items != nullptr)
    {
        _children["Event-items"] = event_items;
    }

    if(rserrdisrecoverpolcons_items != nullptr)
    {
        _children["rserrDisRecoverPolCons-items"] = rserrdisrecoverpolcons_items;
    }

    return _children;
}

void System::EthpmItems::InstItems::ErrdisrecoverItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errDisRecovIntvl")
    {
        errdisrecovintvl = value;
        errdisrecovintvl.value_namespace = name_space;
        errdisrecovintvl.value_namespace_prefix = name_space_prefix;
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

void System::EthpmItems::InstItems::ErrdisrecoverItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errDisRecovIntvl")
    {
        errdisrecovintvl.yfilter = yfilter;
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

bool System::EthpmItems::InstItems::ErrdisrecoverItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Event-items" || name == "rserrDisRecoverPolCons-items" || name == "errDisRecovIntvl" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventItems()
    :
    event_list(this, {"event"})
{

    yang_name = "Event-items"; yang_parent_name = "errdisrecover-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::~EventItems()
{
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_list.len(); index++)
    {
        if(event_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::has_operation() const
{
    for (std::size_t index=0; index<event_list.len(); index++)
    {
        if(event_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/errdisrecover-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Event-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Event-list")
    {
        auto ent_ = std::make_shared<System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList>();
        ent_->parent = this;
        event_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Event-list")
        return true;
    return false;
}

System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::EventList()
    :
    event{YType::enumeration, "event"},
    detect{YType::boolean, "detect"},
    recover{YType::boolean, "recover"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "Event-list"; yang_parent_name = "Event-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::~EventList()
{
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::has_data() const
{
    if (is_presence_container) return true;
    return event.is_set
	|| detect.is_set
	|| recover.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set;
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(detect.yfilter)
	|| ydk::is_set(recover.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/errdisrecover-items/Event-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Event-list";
    ADD_KEY_TOKEN(event, "event");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (detect.is_set || is_set(detect.yfilter)) leaf_name_data.push_back(detect.get_name_leafdata());
    if (recover.is_set || is_set(recover.yfilter)) leaf_name_data.push_back(recover.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect")
    {
        detect = value;
        detect.value_namespace = name_space;
        detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recover")
    {
        recover = value;
        recover.value_namespace = name_space;
        recover.value_namespace_prefix = name_space_prefix;
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

void System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "detect")
    {
        detect.yfilter = yfilter;
    }
    if(value_path == "recover")
    {
        recover.yfilter = yfilter;
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

bool System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "detect" || name == "recover" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::RserrDisRecoverPolConsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rserrDisRecoverPolCons-items"; yang_parent_name = "errdisrecover-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::~RserrDisRecoverPolConsItems()
{
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/errdisrecover-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rserrDisRecoverPolCons-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::EthpmItems::InstItems::VlanItems::VlanItems()
    :
    vlan_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::VlanItems::~VlanItems()
{
}

bool System::EthpmItems::InstItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EthpmItems::InstItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EthpmItems::InstItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vlan-list")
    {
        auto ent_ = std::make_shared<System::EthpmItems::InstItems::VlanItems::VlanList>();
        ent_->parent = this;
        vlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EthpmItems::InstItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EthpmItems::InstItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EthpmItems::InstItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vlan-list")
        return true;
    return false;
}

System::EthpmItems::InstItems::VlanItems::VlanList::VlanList()
    :
    id{YType::uint32, "id"},
    numif{YType::uint32, "numIf"},
    flag{YType::uint32, "flag"},
    shutstate{YType::enumeration, "shutState"},
    state{YType::enumeration, "state"}
{

    yang_name = "Vlan-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::VlanItems::VlanList::~VlanList()
{
}

bool System::EthpmItems::InstItems::VlanItems::VlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| numif.is_set
	|| flag.is_set
	|| shutstate.is_set
	|| state.is_set;
}

bool System::EthpmItems::InstItems::VlanItems::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(numif.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| ydk::is_set(shutstate.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string System::EthpmItems::InstItems::VlanItems::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::VlanItems::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::VlanItems::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (numif.is_set || is_set(numif.yfilter)) leaf_name_data.push_back(numif.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());
    if (shutstate.is_set || is_set(shutstate.yfilter)) leaf_name_data.push_back(shutstate.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::VlanItems::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::VlanItems::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EthpmItems::InstItems::VlanItems::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numIf")
    {
        numif = value;
        numif.value_namespace = name_space;
        numif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutState")
    {
        shutstate = value;
        shutstate.value_namespace = name_space;
        shutstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void System::EthpmItems::InstItems::VlanItems::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "numIf")
    {
        numif.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
    if(value_path == "shutState")
    {
        shutstate.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool System::EthpmItems::InstItems::VlanItems::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "numIf" || name == "flag" || name == "shutState" || name == "state")
        return true;
    return false;
}

System::EthpmItems::InstItems::ModuleItems::ModuleItems()
    :
    module_list(this, {"id"})
{

    yang_name = "module-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::ModuleItems::~ModuleItems()
{
}

bool System::EthpmItems::InstItems::ModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<module_list.len(); index++)
    {
        if(module_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EthpmItems::InstItems::ModuleItems::has_operation() const
{
    for (std::size_t index=0; index<module_list.len(); index++)
    {
        if(module_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EthpmItems::InstItems::ModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::ModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::ModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::ModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Module-list")
    {
        auto ent_ = std::make_shared<System::EthpmItems::InstItems::ModuleItems::ModuleList>();
        ent_->parent = this;
        module_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::ModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : module_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EthpmItems::InstItems::ModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EthpmItems::InstItems::ModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EthpmItems::InstItems::ModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Module-list")
        return true;
    return false;
}

System::EthpmItems::InstItems::ModuleItems::ModuleList::ModuleList()
    :
    id{YType::uint8, "id"},
    numporttypes{YType::uint32, "numPortTypes"},
    swcardid{YType::uint16, "swCardId"},
    cfgdports{YType::str, "cfgdPorts"},
    flags{YType::uint32, "flags"},
    runtimenumports{YType::uint8, "runtimeNumPorts"},
    moduletype{YType::enumeration, "moduleType"},
    isoffline{YType::boolean, "isOffline"},
    lcnodeaddress{YType::uint32, "lcNodeAddress"},
    portcfgsap{YType::uint16, "portCfgSap"},
    runtimeports{YType::str, "runtimePorts"}
{

    yang_name = "Module-list"; yang_parent_name = "module-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EthpmItems::InstItems::ModuleItems::ModuleList::~ModuleList()
{
}

bool System::EthpmItems::InstItems::ModuleItems::ModuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| numporttypes.is_set
	|| swcardid.is_set
	|| cfgdports.is_set
	|| flags.is_set
	|| runtimenumports.is_set
	|| moduletype.is_set
	|| isoffline.is_set
	|| lcnodeaddress.is_set
	|| portcfgsap.is_set
	|| runtimeports.is_set;
}

bool System::EthpmItems::InstItems::ModuleItems::ModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(numporttypes.yfilter)
	|| ydk::is_set(swcardid.yfilter)
	|| ydk::is_set(cfgdports.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(runtimenumports.yfilter)
	|| ydk::is_set(moduletype.yfilter)
	|| ydk::is_set(isoffline.yfilter)
	|| ydk::is_set(lcnodeaddress.yfilter)
	|| ydk::is_set(portcfgsap.yfilter)
	|| ydk::is_set(runtimeports.yfilter);
}

std::string System::EthpmItems::InstItems::ModuleItems::ModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ethpm-items/inst-items/module-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EthpmItems::InstItems::ModuleItems::ModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Module-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EthpmItems::InstItems::ModuleItems::ModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (numporttypes.is_set || is_set(numporttypes.yfilter)) leaf_name_data.push_back(numporttypes.get_name_leafdata());
    if (swcardid.is_set || is_set(swcardid.yfilter)) leaf_name_data.push_back(swcardid.get_name_leafdata());
    if (cfgdports.is_set || is_set(cfgdports.yfilter)) leaf_name_data.push_back(cfgdports.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (runtimenumports.is_set || is_set(runtimenumports.yfilter)) leaf_name_data.push_back(runtimenumports.get_name_leafdata());
    if (moduletype.is_set || is_set(moduletype.yfilter)) leaf_name_data.push_back(moduletype.get_name_leafdata());
    if (isoffline.is_set || is_set(isoffline.yfilter)) leaf_name_data.push_back(isoffline.get_name_leafdata());
    if (lcnodeaddress.is_set || is_set(lcnodeaddress.yfilter)) leaf_name_data.push_back(lcnodeaddress.get_name_leafdata());
    if (portcfgsap.is_set || is_set(portcfgsap.yfilter)) leaf_name_data.push_back(portcfgsap.get_name_leafdata());
    if (runtimeports.is_set || is_set(runtimeports.yfilter)) leaf_name_data.push_back(runtimeports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EthpmItems::InstItems::ModuleItems::ModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EthpmItems::InstItems::ModuleItems::ModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EthpmItems::InstItems::ModuleItems::ModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPortTypes")
    {
        numporttypes = value;
        numporttypes.value_namespace = name_space;
        numporttypes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCardId")
    {
        swcardid = value;
        swcardid.value_namespace = name_space;
        swcardid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgdPorts")
    {
        cfgdports = value;
        cfgdports.value_namespace = name_space;
        cfgdports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runtimeNumPorts")
    {
        runtimenumports = value;
        runtimenumports.value_namespace = name_space;
        runtimenumports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moduleType")
    {
        moduletype = value;
        moduletype.value_namespace = name_space;
        moduletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isOffline")
    {
        isoffline = value;
        isoffline.value_namespace = name_space;
        isoffline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcNodeAddress")
    {
        lcnodeaddress = value;
        lcnodeaddress.value_namespace = name_space;
        lcnodeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCfgSap")
    {
        portcfgsap = value;
        portcfgsap.value_namespace = name_space;
        portcfgsap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runtimePorts")
    {
        runtimeports = value;
        runtimeports.value_namespace = name_space;
        runtimeports.value_namespace_prefix = name_space_prefix;
    }
}

void System::EthpmItems::InstItems::ModuleItems::ModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "numPortTypes")
    {
        numporttypes.yfilter = yfilter;
    }
    if(value_path == "swCardId")
    {
        swcardid.yfilter = yfilter;
    }
    if(value_path == "cfgdPorts")
    {
        cfgdports.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "runtimeNumPorts")
    {
        runtimenumports.yfilter = yfilter;
    }
    if(value_path == "moduleType")
    {
        moduletype.yfilter = yfilter;
    }
    if(value_path == "isOffline")
    {
        isoffline.yfilter = yfilter;
    }
    if(value_path == "lcNodeAddress")
    {
        lcnodeaddress.yfilter = yfilter;
    }
    if(value_path == "portCfgSap")
    {
        portcfgsap.yfilter = yfilter;
    }
    if(value_path == "runtimePorts")
    {
        runtimeports.yfilter = yfilter;
    }
}

bool System::EthpmItems::InstItems::ModuleItems::ModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "numPortTypes" || name == "swCardId" || name == "cfgdPorts" || name == "flags" || name == "runtimeNumPorts" || name == "moduleType" || name == "isOffline" || name == "lcNodeAddress" || name == "portCfgSap" || name == "runtimePorts")
        return true;
    return false;
}

System::BreakoutItems::BreakoutItems()
    :
    module_items(std::make_shared<System::BreakoutItems::ModuleItems>())
{
    module_items->parent = this;

    yang_name = "breakout-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BreakoutItems::~BreakoutItems()
{
}

bool System::BreakoutItems::has_data() const
{
    if (is_presence_container) return true;
    return (module_items !=  nullptr && module_items->has_data());
}

bool System::BreakoutItems::has_operation() const
{
    return is_set(yfilter)
	|| (module_items !=  nullptr && module_items->has_operation());
}

std::string System::BreakoutItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BreakoutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "breakout-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BreakoutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BreakoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module-items")
    {
        if(module_items == nullptr)
        {
            module_items = std::make_shared<System::BreakoutItems::ModuleItems>();
        }
        return module_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BreakoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(module_items != nullptr)
    {
        _children["module-items"] = module_items;
    }

    return _children;
}

void System::BreakoutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BreakoutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BreakoutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module-items")
        return true;
    return false;
}

System::BreakoutItems::ModuleItems::ModuleItems()
    :
    mod_list(this, {"id"})
{

    yang_name = "module-items"; yang_parent_name = "breakout-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BreakoutItems::ModuleItems::~ModuleItems()
{
}

bool System::BreakoutItems::ModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mod_list.len(); index++)
    {
        if(mod_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BreakoutItems::ModuleItems::has_operation() const
{
    for (std::size_t index=0; index<mod_list.len(); index++)
    {
        if(mod_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BreakoutItems::ModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/breakout-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BreakoutItems::ModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BreakoutItems::ModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BreakoutItems::ModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mod-list")
    {
        auto ent_ = std::make_shared<System::BreakoutItems::ModuleItems::ModList>();
        ent_->parent = this;
        mod_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BreakoutItems::ModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mod_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BreakoutItems::ModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BreakoutItems::ModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BreakoutItems::ModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mod-list")
        return true;
    return false;
}

System::BreakoutItems::ModuleItems::ModList::ModList()
    :
    id{YType::uint8, "id"}
        ,
    fport_items(std::make_shared<System::BreakoutItems::ModuleItems::ModList::FportItems>())
{
    fport_items->parent = this;

    yang_name = "Mod-list"; yang_parent_name = "module-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BreakoutItems::ModuleItems::ModList::~ModList()
{
}

bool System::BreakoutItems::ModuleItems::ModList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (fport_items !=  nullptr && fport_items->has_data());
}

bool System::BreakoutItems::ModuleItems::ModList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (fport_items !=  nullptr && fport_items->has_operation());
}

std::string System::BreakoutItems::ModuleItems::ModList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/breakout-items/module-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BreakoutItems::ModuleItems::ModList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mod-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BreakoutItems::ModuleItems::ModList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BreakoutItems::ModuleItems::ModList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fport-items")
    {
        if(fport_items == nullptr)
        {
            fport_items = std::make_shared<System::BreakoutItems::ModuleItems::ModList::FportItems>();
        }
        return fport_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BreakoutItems::ModuleItems::ModList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fport_items != nullptr)
    {
        _children["fport-items"] = fport_items;
    }

    return _children;
}

void System::BreakoutItems::ModuleItems::ModList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::BreakoutItems::ModuleItems::ModList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::BreakoutItems::ModuleItems::ModList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fport-items" || name == "id")
        return true;
    return false;
}

System::BreakoutItems::ModuleItems::ModList::FportItems::FportItems()
    :
    fpp_list(this, {"id"})
{

    yang_name = "fport-items"; yang_parent_name = "Mod-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BreakoutItems::ModuleItems::ModList::FportItems::~FportItems()
{
}

bool System::BreakoutItems::ModuleItems::ModList::FportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpp_list.len(); index++)
    {
        if(fpp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BreakoutItems::ModuleItems::ModList::FportItems::has_operation() const
{
    for (std::size_t index=0; index<fpp_list.len(); index++)
    {
        if(fpp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BreakoutItems::ModuleItems::ModList::FportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BreakoutItems::ModuleItems::ModList::FportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BreakoutItems::ModuleItems::ModList::FportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FpP-list")
    {
        auto ent_ = std::make_shared<System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList>();
        ent_->parent = this;
        fpp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BreakoutItems::ModuleItems::ModList::FportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fpp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BreakoutItems::ModuleItems::ModList::FportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BreakoutItems::ModuleItems::ModList::FportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BreakoutItems::ModuleItems::ModList::FportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FpP-list")
        return true;
    return false;
}

System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::FpPList()
    :
    id{YType::uint8, "id"},
    breakoutmap{YType::enumeration, "breakoutMap"}
{

    yang_name = "FpP-list"; yang_parent_name = "fport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::~FpPList()
{
}

bool System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| breakoutmap.is_set;
}

bool System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(breakoutmap.yfilter);
}

std::string System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FpP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (breakoutmap.is_set || is_set(breakoutmap.yfilter)) leaf_name_data.push_back(breakoutmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "breakoutMap")
    {
        breakoutmap = value;
        breakoutmap.value_namespace = name_space;
        breakoutmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "breakoutMap")
    {
        breakoutmap.yfilter = yfilter;
    }
}

bool System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "breakoutMap")
        return true;
    return false;
}

System::ImItems::ImItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::ImItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "im-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::~ImItems()
{
}

bool System::ImItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::ImItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::ImItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "im-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::ImItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::ImItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ImItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ImItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::ImItems::InstItems::InstItems()
    :
    mode100m{YType::enumeration, "mode100M"},
    modehwprofile{YType::enumeration, "modeHwProfile"},
    vdcst{YType::enumeration, "vdcSt"},
    breakoutprofile{YType::enumeration, "BreakoutProfile"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    qsa_items(std::make_shared<System::ImItems::InstItems::QsaItems>())
    , cap_items(std::make_shared<System::ImItems::InstItems::CapItems>())
    , module_items(std::make_shared<System::ImItems::InstItems::ModuleItems>())
{
    qsa_items->parent = this;
    cap_items->parent = this;
    module_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "im-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::InstItems::~InstItems()
{
}

bool System::ImItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return mode100m.is_set
	|| modehwprofile.is_set
	|| vdcst.is_set
	|| breakoutprofile.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (qsa_items !=  nullptr && qsa_items->has_data())
	|| (cap_items !=  nullptr && cap_items->has_data())
	|| (module_items !=  nullptr && module_items->has_data());
}

bool System::ImItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode100m.yfilter)
	|| ydk::is_set(modehwprofile.yfilter)
	|| ydk::is_set(vdcst.yfilter)
	|| ydk::is_set(breakoutprofile.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (qsa_items !=  nullptr && qsa_items->has_operation())
	|| (cap_items !=  nullptr && cap_items->has_operation())
	|| (module_items !=  nullptr && module_items->has_operation());
}

std::string System::ImItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/im-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode100m.is_set || is_set(mode100m.yfilter)) leaf_name_data.push_back(mode100m.get_name_leafdata());
    if (modehwprofile.is_set || is_set(modehwprofile.yfilter)) leaf_name_data.push_back(modehwprofile.get_name_leafdata());
    if (vdcst.is_set || is_set(vdcst.yfilter)) leaf_name_data.push_back(vdcst.get_name_leafdata());
    if (breakoutprofile.is_set || is_set(breakoutprofile.yfilter)) leaf_name_data.push_back(breakoutprofile.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsa-items")
    {
        if(qsa_items == nullptr)
        {
            qsa_items = std::make_shared<System::ImItems::InstItems::QsaItems>();
        }
        return qsa_items;
    }

    if(child_yang_name == "cap-items")
    {
        if(cap_items == nullptr)
        {
            cap_items = std::make_shared<System::ImItems::InstItems::CapItems>();
        }
        return cap_items;
    }

    if(child_yang_name == "module-items")
    {
        if(module_items == nullptr)
        {
            module_items = std::make_shared<System::ImItems::InstItems::ModuleItems>();
        }
        return module_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qsa_items != nullptr)
    {
        _children["qsa-items"] = qsa_items;
    }

    if(cap_items != nullptr)
    {
        _children["cap-items"] = cap_items;
    }

    if(module_items != nullptr)
    {
        _children["module-items"] = module_items;
    }

    return _children;
}

void System::ImItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode100M")
    {
        mode100m = value;
        mode100m.value_namespace = name_space;
        mode100m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modeHwProfile")
    {
        modehwprofile = value;
        modehwprofile.value_namespace = name_space;
        modehwprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcSt")
    {
        vdcst = value;
        vdcst.value_namespace = name_space;
        vdcst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BreakoutProfile")
    {
        breakoutprofile = value;
        breakoutprofile.value_namespace = name_space;
        breakoutprofile.value_namespace_prefix = name_space_prefix;
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

void System::ImItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode100M")
    {
        mode100m.yfilter = yfilter;
    }
    if(value_path == "modeHwProfile")
    {
        modehwprofile.yfilter = yfilter;
    }
    if(value_path == "vdcSt")
    {
        vdcst.yfilter = yfilter;
    }
    if(value_path == "BreakoutProfile")
    {
        breakoutprofile.yfilter = yfilter;
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

bool System::ImItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsa-items" || name == "cap-items" || name == "module-items" || name == "mode100M" || name == "modeHwProfile" || name == "vdcSt" || name == "BreakoutProfile" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::ImItems::InstItems::QsaItems::QsaItems()
    :
    qsa_list(this, {"id"})
{

    yang_name = "qsa-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::InstItems::QsaItems::~QsaItems()
{
}

bool System::ImItems::InstItems::QsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qsa_list.len(); index++)
    {
        if(qsa_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ImItems::InstItems::QsaItems::has_operation() const
{
    for (std::size_t index=0; index<qsa_list.len(); index++)
    {
        if(qsa_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ImItems::InstItems::QsaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/im-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::InstItems::QsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::QsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::QsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Qsa-list")
    {
        auto ent_ = std::make_shared<System::ImItems::InstItems::QsaItems::QsaList>();
        ent_->parent = this;
        qsa_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::QsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qsa_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ImItems::InstItems::QsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ImItems::InstItems::QsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ImItems::InstItems::QsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Qsa-list")
        return true;
    return false;
}

System::ImItems::InstItems::QsaItems::QsaList::QsaList()
    :
    id{YType::str, "id"}
{

    yang_name = "Qsa-list"; yang_parent_name = "qsa-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::InstItems::QsaItems::QsaList::~QsaList()
{
}

bool System::ImItems::InstItems::QsaItems::QsaList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::ImItems::InstItems::QsaItems::QsaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::ImItems::InstItems::QsaItems::QsaList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/im-items/inst-items/qsa-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::InstItems::QsaItems::QsaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Qsa-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::QsaItems::QsaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::QsaItems::QsaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::QsaItems::QsaList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ImItems::InstItems::QsaItems::QsaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ImItems::InstItems::QsaItems::QsaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ImItems::InstItems::QsaItems::QsaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::ImItems::InstItems::CapItems::CapItems()
    :
    capability_list(this, {"id"})
{

    yang_name = "cap-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::InstItems::CapItems::~CapItems()
{
}

bool System::ImItems::InstItems::CapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<capability_list.len(); index++)
    {
        if(capability_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ImItems::InstItems::CapItems::has_operation() const
{
    for (std::size_t index=0; index<capability_list.len(); index++)
    {
        if(capability_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ImItems::InstItems::CapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/im-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::InstItems::CapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::CapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::CapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Capability-list")
    {
        auto ent_ = std::make_shared<System::ImItems::InstItems::CapItems::CapabilityList>();
        ent_->parent = this;
        capability_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::CapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : capability_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ImItems::InstItems::CapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ImItems::InstItems::CapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ImItems::InstItems::CapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Capability-list")
        return true;
    return false;
}

System::ImItems::InstItems::CapItems::CapabilityList::CapabilityList()
    :
    id{YType::uint32, "id"},
    autoinstcpbl{YType::boolean, "autoInstCpbl"},
    isinstalled{YType::boolean, "isInstalled"}
{

    yang_name = "Capability-list"; yang_parent_name = "cap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::InstItems::CapItems::CapabilityList::~CapabilityList()
{
}

bool System::ImItems::InstItems::CapItems::CapabilityList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| autoinstcpbl.is_set
	|| isinstalled.is_set;
}

bool System::ImItems::InstItems::CapItems::CapabilityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(autoinstcpbl.yfilter)
	|| ydk::is_set(isinstalled.yfilter);
}

std::string System::ImItems::InstItems::CapItems::CapabilityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/im-items/inst-items/cap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::InstItems::CapItems::CapabilityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Capability-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::CapItems::CapabilityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (autoinstcpbl.is_set || is_set(autoinstcpbl.yfilter)) leaf_name_data.push_back(autoinstcpbl.get_name_leafdata());
    if (isinstalled.is_set || is_set(isinstalled.yfilter)) leaf_name_data.push_back(isinstalled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::CapItems::CapabilityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::CapItems::CapabilityList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ImItems::InstItems::CapItems::CapabilityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoInstCpbl")
    {
        autoinstcpbl = value;
        autoinstcpbl.value_namespace = name_space;
        autoinstcpbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isInstalled")
    {
        isinstalled = value;
        isinstalled.value_namespace = name_space;
        isinstalled.value_namespace_prefix = name_space_prefix;
    }
}

void System::ImItems::InstItems::CapItems::CapabilityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "autoInstCpbl")
    {
        autoinstcpbl.yfilter = yfilter;
    }
    if(value_path == "isInstalled")
    {
        isinstalled.yfilter = yfilter;
    }
}

bool System::ImItems::InstItems::CapItems::CapabilityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "autoInstCpbl" || name == "isInstalled")
        return true;
    return false;
}

System::ImItems::InstItems::ModuleItems::ModuleItems()
    :
    module_list(this, {"id"})
{

    yang_name = "module-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::InstItems::ModuleItems::~ModuleItems()
{
}

bool System::ImItems::InstItems::ModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<module_list.len(); index++)
    {
        if(module_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ImItems::InstItems::ModuleItems::has_operation() const
{
    for (std::size_t index=0; index<module_list.len(); index++)
    {
        if(module_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ImItems::InstItems::ModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/im-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::InstItems::ModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::ModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::ModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Module-list")
    {
        auto ent_ = std::make_shared<System::ImItems::InstItems::ModuleItems::ModuleList>();
        ent_->parent = this;
        module_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::ModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : module_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ImItems::InstItems::ModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ImItems::InstItems::ModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ImItems::InstItems::ModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Module-list")
        return true;
    return false;
}

System::ImItems::InstItems::ModuleItems::ModuleList::ModuleList()
    :
    id{YType::uint8, "id"},
    numports{YType::uint8, "numPorts"},
    moduletype{YType::enumeration, "moduleType"},
    swcardid{YType::uint16, "swCardId"},
    lcnodeaddress{YType::uint32, "lcNodeAddress"},
    portcfgsap{YType::uint16, "portCfgSap"},
    ispresent{YType::boolean, "isPresent"},
    runtimeflag{YType::uint8, "runtimeFlag"},
    moduleinitievalflag{YType::uint32, "moduleInitiEvalFlag"},
    lcexceptionflag{YType::uint32, "lcExceptionFlag"},
    lcinsertpldsz{YType::uint32, "lcInsertPldSz"}
        ,
    phys_items(std::make_shared<System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems>())
    , portinfo_items(std::make_shared<System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems>())
{
    phys_items->parent = this;
    portinfo_items->parent = this;

    yang_name = "Module-list"; yang_parent_name = "module-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ImItems::InstItems::ModuleItems::ModuleList::~ModuleList()
{
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| numports.is_set
	|| moduletype.is_set
	|| swcardid.is_set
	|| lcnodeaddress.is_set
	|| portcfgsap.is_set
	|| ispresent.is_set
	|| runtimeflag.is_set
	|| moduleinitievalflag.is_set
	|| lcexceptionflag.is_set
	|| lcinsertpldsz.is_set
	|| (phys_items !=  nullptr && phys_items->has_data())
	|| (portinfo_items !=  nullptr && portinfo_items->has_data());
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(numports.yfilter)
	|| ydk::is_set(moduletype.yfilter)
	|| ydk::is_set(swcardid.yfilter)
	|| ydk::is_set(lcnodeaddress.yfilter)
	|| ydk::is_set(portcfgsap.yfilter)
	|| ydk::is_set(ispresent.yfilter)
	|| ydk::is_set(runtimeflag.yfilter)
	|| ydk::is_set(moduleinitievalflag.yfilter)
	|| ydk::is_set(lcexceptionflag.yfilter)
	|| ydk::is_set(lcinsertpldsz.yfilter)
	|| (phys_items !=  nullptr && phys_items->has_operation())
	|| (portinfo_items !=  nullptr && portinfo_items->has_operation());
}

std::string System::ImItems::InstItems::ModuleItems::ModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/im-items/inst-items/module-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ImItems::InstItems::ModuleItems::ModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Module-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::ModuleItems::ModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (numports.is_set || is_set(numports.yfilter)) leaf_name_data.push_back(numports.get_name_leafdata());
    if (moduletype.is_set || is_set(moduletype.yfilter)) leaf_name_data.push_back(moduletype.get_name_leafdata());
    if (swcardid.is_set || is_set(swcardid.yfilter)) leaf_name_data.push_back(swcardid.get_name_leafdata());
    if (lcnodeaddress.is_set || is_set(lcnodeaddress.yfilter)) leaf_name_data.push_back(lcnodeaddress.get_name_leafdata());
    if (portcfgsap.is_set || is_set(portcfgsap.yfilter)) leaf_name_data.push_back(portcfgsap.get_name_leafdata());
    if (ispresent.is_set || is_set(ispresent.yfilter)) leaf_name_data.push_back(ispresent.get_name_leafdata());
    if (runtimeflag.is_set || is_set(runtimeflag.yfilter)) leaf_name_data.push_back(runtimeflag.get_name_leafdata());
    if (moduleinitievalflag.is_set || is_set(moduleinitievalflag.yfilter)) leaf_name_data.push_back(moduleinitievalflag.get_name_leafdata());
    if (lcexceptionflag.is_set || is_set(lcexceptionflag.yfilter)) leaf_name_data.push_back(lcexceptionflag.get_name_leafdata());
    if (lcinsertpldsz.is_set || is_set(lcinsertpldsz.yfilter)) leaf_name_data.push_back(lcinsertpldsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::ModuleItems::ModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems>();
        }
        return phys_items;
    }

    if(child_yang_name == "portinfo-items")
    {
        if(portinfo_items == nullptr)
        {
            portinfo_items = std::make_shared<System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems>();
        }
        return portinfo_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::ModuleItems::ModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    if(portinfo_items != nullptr)
    {
        _children["portinfo-items"] = portinfo_items;
    }

    return _children;
}

void System::ImItems::InstItems::ModuleItems::ModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPorts")
    {
        numports = value;
        numports.value_namespace = name_space;
        numports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moduleType")
    {
        moduletype = value;
        moduletype.value_namespace = name_space;
        moduletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCardId")
    {
        swcardid = value;
        swcardid.value_namespace = name_space;
        swcardid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcNodeAddress")
    {
        lcnodeaddress = value;
        lcnodeaddress.value_namespace = name_space;
        lcnodeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCfgSap")
    {
        portcfgsap = value;
        portcfgsap.value_namespace = name_space;
        portcfgsap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isPresent")
    {
        ispresent = value;
        ispresent.value_namespace = name_space;
        ispresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runtimeFlag")
    {
        runtimeflag = value;
        runtimeflag.value_namespace = name_space;
        runtimeflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moduleInitiEvalFlag")
    {
        moduleinitievalflag = value;
        moduleinitievalflag.value_namespace = name_space;
        moduleinitievalflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcExceptionFlag")
    {
        lcexceptionflag = value;
        lcexceptionflag.value_namespace = name_space;
        lcexceptionflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcInsertPldSz")
    {
        lcinsertpldsz = value;
        lcinsertpldsz.value_namespace = name_space;
        lcinsertpldsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ImItems::InstItems::ModuleItems::ModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "numPorts")
    {
        numports.yfilter = yfilter;
    }
    if(value_path == "moduleType")
    {
        moduletype.yfilter = yfilter;
    }
    if(value_path == "swCardId")
    {
        swcardid.yfilter = yfilter;
    }
    if(value_path == "lcNodeAddress")
    {
        lcnodeaddress.yfilter = yfilter;
    }
    if(value_path == "portCfgSap")
    {
        portcfgsap.yfilter = yfilter;
    }
    if(value_path == "isPresent")
    {
        ispresent.yfilter = yfilter;
    }
    if(value_path == "runtimeFlag")
    {
        runtimeflag.yfilter = yfilter;
    }
    if(value_path == "moduleInitiEvalFlag")
    {
        moduleinitievalflag.yfilter = yfilter;
    }
    if(value_path == "lcExceptionFlag")
    {
        lcexceptionflag.yfilter = yfilter;
    }
    if(value_path == "lcInsertPldSz")
    {
        lcinsertpldsz.yfilter = yfilter;
    }
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phys-items" || name == "portinfo-items" || name == "id" || name == "numPorts" || name == "moduleType" || name == "swCardId" || name == "lcNodeAddress" || name == "portCfgSap" || name == "isPresent" || name == "runtimeFlag" || name == "moduleInitiEvalFlag" || name == "lcExceptionFlag" || name == "lcInsertPldSz")
        return true;
    return false;
}

System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysItems()
    :
    physif_list(this, {"port"})
{

    yang_name = "phys-items"; yang_parent_name = "Module-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::~PhysItems()
{
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto ent_ = std::make_shared<System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList>();
        ent_->parent = this;
        physif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::get_children() const
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

void System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::PhysIfList()
    :
    port{YType::uint8, "port"},
    operst{YType::enumeration, "operSt"},
    operphylayer{YType::enumeration, "operPhyLayer"},
    backplanemac{YType::str, "backplaneMac"},
    operroutermac{YType::str, "operRouterMac"},
    slot{YType::uint8, "slot"},
    movestatus{YType::uint32, "moveStatus"}
{

    yang_name = "PhysIf-list"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::~PhysIfList()
{
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| operst.is_set
	|| operphylayer.is_set
	|| backplanemac.is_set
	|| operroutermac.is_set
	|| slot.is_set
	|| movestatus.is_set;
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operphylayer.yfilter)
	|| ydk::is_set(backplanemac.yfilter)
	|| ydk::is_set(operroutermac.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(movestatus.yfilter);
}

std::string System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operphylayer.is_set || is_set(operphylayer.yfilter)) leaf_name_data.push_back(operphylayer.get_name_leafdata());
    if (backplanemac.is_set || is_set(backplanemac.yfilter)) leaf_name_data.push_back(backplanemac.get_name_leafdata());
    if (operroutermac.is_set || is_set(operroutermac.yfilter)) leaf_name_data.push_back(operroutermac.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (movestatus.is_set || is_set(movestatus.yfilter)) leaf_name_data.push_back(movestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPhyLayer")
    {
        operphylayer = value;
        operphylayer.value_namespace = name_space;
        operphylayer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac = value;
        backplanemac.value_namespace = name_space;
        backplanemac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac = value;
        operroutermac.value_namespace = name_space;
        operroutermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moveStatus")
    {
        movestatus = value;
        movestatus.value_namespace = name_space;
        movestatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operPhyLayer")
    {
        operphylayer.yfilter = yfilter;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac.yfilter = yfilter;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "moveStatus")
    {
        movestatus.yfilter = yfilter;
    }
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "operSt" || name == "operPhyLayer" || name == "backplaneMac" || name == "operRouterMac" || name == "slot" || name == "moveStatus")
        return true;
    return false;
}

System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortinfoItems()
    :
    portinfo_list(this, {"phylayer"})
{

    yang_name = "portinfo-items"; yang_parent_name = "Module-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::~PortinfoItems()
{
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<portinfo_list.len(); index++)
    {
        if(portinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::has_operation() const
{
    for (std::size_t index=0; index<portinfo_list.len(); index++)
    {
        if(portinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portinfo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PortInfo-list")
    {
        auto ent_ = std::make_shared<System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList>();
        ent_->parent = this;
        portinfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : portinfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PortInfo-list")
        return true;
    return false;
}

System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::PortInfoList()
    :
    phylayer{YType::enumeration, "phyLayer"},
    numports{YType::uint8, "numPorts"},
    type{YType::uint8, "type"}
{

    yang_name = "PortInfo-list"; yang_parent_name = "portinfo-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::~PortInfoList()
{
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::has_data() const
{
    if (is_presence_container) return true;
    return phylayer.is_set
	|| numports.is_set
	|| type.is_set;
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(phylayer.yfilter)
	|| ydk::is_set(numports.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PortInfo-list";
    ADD_KEY_TOKEN(phylayer, "phyLayer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phylayer.is_set || is_set(phylayer.yfilter)) leaf_name_data.push_back(phylayer.get_name_leafdata());
    if (numports.is_set || is_set(numports.yfilter)) leaf_name_data.push_back(numports.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phyLayer")
    {
        phylayer = value;
        phylayer.value_namespace = name_space;
        phylayer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPorts")
    {
        numports = value;
        numports.value_namespace = name_space;
        numports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phyLayer")
    {
        phylayer.yfilter = yfilter;
    }
    if(value_path == "numPorts")
    {
        numports.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phyLayer" || name == "numPorts" || name == "type")
        return true;
    return false;
}

System::PcItems::PcItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    pc_items(std::make_shared<System::PcItems::PcItems_>())
{
    pc_items->parent = this;

    yang_name = "pc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PcItems::~PcItems()
{
}

bool System::PcItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (pc_items !=  nullptr && pc_items->has_data());
}

bool System::PcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (pc_items !=  nullptr && pc_items->has_operation());
}

std::string System::PcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pc-items")
    {
        if(pc_items == nullptr)
        {
            pc_items = std::make_shared<System::PcItems::PcItems_>();
        }
        return pc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pc_items != nullptr)
    {
        _children["pc-items"] = pc_items;
    }

    return _children;
}

void System::PcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PcItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::PcItems::PcItems_::PcItems_()
    :
    hashdist{YType::enumeration, "hashDist"},
    loaddefertime{YType::uint32, "loadDeferTime"},
    maxchannels{YType::uint32, "maxChannels"},
    usedchannels{YType::uint32, "usedChannels"},
    freechannels{YType::uint32, "freeChannels"},
    pcntchannels{YType::uint8, "pcntChannels"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "pc-items"; yang_parent_name = "pc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PcItems::PcItems_::~PcItems_()
{
}

bool System::PcItems::PcItems_::has_data() const
{
    if (is_presence_container) return true;
    return hashdist.is_set
	|| loaddefertime.is_set
	|| maxchannels.is_set
	|| usedchannels.is_set
	|| freechannels.is_set
	|| pcntchannels.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set;
}

bool System::PcItems::PcItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hashdist.yfilter)
	|| ydk::is_set(loaddefertime.yfilter)
	|| ydk::is_set(maxchannels.yfilter)
	|| ydk::is_set(usedchannels.yfilter)
	|| ydk::is_set(freechannels.yfilter)
	|| ydk::is_set(pcntchannels.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::PcItems::PcItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PcItems::PcItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PcItems::PcItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hashdist.is_set || is_set(hashdist.yfilter)) leaf_name_data.push_back(hashdist.get_name_leafdata());
    if (loaddefertime.is_set || is_set(loaddefertime.yfilter)) leaf_name_data.push_back(loaddefertime.get_name_leafdata());
    if (maxchannels.is_set || is_set(maxchannels.yfilter)) leaf_name_data.push_back(maxchannels.get_name_leafdata());
    if (usedchannels.is_set || is_set(usedchannels.yfilter)) leaf_name_data.push_back(usedchannels.get_name_leafdata());
    if (freechannels.is_set || is_set(freechannels.yfilter)) leaf_name_data.push_back(freechannels.get_name_leafdata());
    if (pcntchannels.is_set || is_set(pcntchannels.yfilter)) leaf_name_data.push_back(pcntchannels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PcItems::PcItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PcItems::PcItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PcItems::PcItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hashDist")
    {
        hashdist = value;
        hashdist.value_namespace = name_space;
        hashdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadDeferTime")
    {
        loaddefertime = value;
        loaddefertime.value_namespace = name_space;
        loaddefertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxChannels")
    {
        maxchannels = value;
        maxchannels.value_namespace = name_space;
        maxchannels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usedChannels")
    {
        usedchannels = value;
        usedchannels.value_namespace = name_space;
        usedchannels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freeChannels")
    {
        freechannels = value;
        freechannels.value_namespace = name_space;
        freechannels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcntChannels")
    {
        pcntchannels = value;
        pcntchannels.value_namespace = name_space;
        pcntchannels.value_namespace_prefix = name_space_prefix;
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

void System::PcItems::PcItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hashDist")
    {
        hashdist.yfilter = yfilter;
    }
    if(value_path == "loadDeferTime")
    {
        loaddefertime.yfilter = yfilter;
    }
    if(value_path == "maxChannels")
    {
        maxchannels.yfilter = yfilter;
    }
    if(value_path == "usedChannels")
    {
        usedchannels.yfilter = yfilter;
    }
    if(value_path == "freeChannels")
    {
        freechannels.yfilter = yfilter;
    }
    if(value_path == "pcntChannels")
    {
        pcntchannels.yfilter = yfilter;
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

bool System::PcItems::PcItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hashDist" || name == "loadDeferTime" || name == "maxChannels" || name == "usedChannels" || name == "freeChannels" || name == "pcntChannels" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::L2capprovItems::L2capprovItems()
    :
    prov_list(this, {"subj", "type"})
{

    yang_name = "l2capprov-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L2capprovItems::~L2capprovItems()
{
}

bool System::L2capprovItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::L2capprovItems::has_operation() const
{
    for (std::size_t index=0; index<prov_list.len(); index++)
    {
        if(prov_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::L2capprovItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L2capprovItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2capprov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L2capprovItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L2capprovItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Prov-list")
    {
        auto ent_ = std::make_shared<System::L2capprovItems::ProvList>();
        ent_->parent = this;
        prov_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L2capprovItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prov_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::L2capprovItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L2capprovItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L2capprovItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Prov-list")
        return true;
    return false;
}

System::L2capprovItems::ProvList::ProvList()
    :
    subj{YType::enumeration, "subj"},
    type{YType::enumeration, "type"},
    total{YType::uint32, "total"},
    remaining{YType::uint32, "remaining"},
    utilization{YType::uint8, "utilization"}
{

    yang_name = "Prov-list"; yang_parent_name = "l2capprov-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L2capprovItems::ProvList::~ProvList()
{
}

bool System::L2capprovItems::ProvList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| type.is_set
	|| total.is_set
	|| remaining.is_set
	|| utilization.is_set;
}

bool System::L2capprovItems::ProvList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(remaining.yfilter)
	|| ydk::is_set(utilization.yfilter);
}

std::string System::L2capprovItems::ProvList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l2capprov-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L2capprovItems::ProvList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Prov-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L2capprovItems::ProvList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (remaining.is_set || is_set(remaining.yfilter)) leaf_name_data.push_back(remaining.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L2capprovItems::ProvList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L2capprovItems::ProvList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::L2capprovItems::ProvList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining")
    {
        remaining = value;
        remaining.value_namespace = name_space;
        remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization")
    {
        utilization = value;
        utilization.value_namespace = name_space;
        utilization.value_namespace_prefix = name_space_prefix;
    }
}

void System::L2capprovItems::ProvList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "remaining")
    {
        remaining.yfilter = yfilter;
    }
    if(value_path == "utilization")
    {
        utilization.yfilter = yfilter;
    }
}

bool System::L2capprovItems::ProvList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "type" || name == "total" || name == "remaining" || name == "utilization")
        return true;
    return false;
}

System::FcpmItems::FcpmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::FcpmItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "fcpm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcpmItems::~FcpmItems()
{
}

bool System::FcpmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::FcpmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::FcpmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcpmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcpm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcpmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcpmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::FcpmItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcpmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::FcpmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcpmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcpmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FcpmItems::InstItems::InstItems()
    :
    switchwwn{YType::str, "switchWWN"},
    edtov{YType::uint32, "edTov"},
    ratov{YType::uint32, "raTov"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "inst-items"; yang_parent_name = "fcpm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcpmItems::InstItems::~InstItems()
{
}

bool System::FcpmItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return switchwwn.is_set
	|| edtov.is_set
	|| ratov.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set;
}

bool System::FcpmItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchwwn.yfilter)
	|| ydk::is_set(edtov.yfilter)
	|| ydk::is_set(ratov.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::FcpmItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcpm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcpmItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcpmItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchwwn.is_set || is_set(switchwwn.yfilter)) leaf_name_data.push_back(switchwwn.get_name_leafdata());
    if (edtov.is_set || is_set(edtov.yfilter)) leaf_name_data.push_back(edtov.get_name_leafdata());
    if (ratov.is_set || is_set(ratov.yfilter)) leaf_name_data.push_back(ratov.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcpmItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcpmItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcpmItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchWWN")
    {
        switchwwn = value;
        switchwwn.value_namespace = name_space;
        switchwwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edTov")
    {
        edtov = value;
        edtov.value_namespace = name_space;
        edtov.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raTov")
    {
        ratov = value;
        ratov.value_namespace = name_space;
        ratov.value_namespace_prefix = name_space_prefix;
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

void System::FcpmItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchWWN")
    {
        switchwwn.yfilter = yfilter;
    }
    if(value_path == "edTov")
    {
        edtov.yfilter = yfilter;
    }
    if(value_path == "raTov")
    {
        ratov.yfilter = yfilter;
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

bool System::FcpmItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchWWN" || name == "edTov" || name == "raTov" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::L2fmItems::L2fmItems()
    :
    maclearn{YType::enumeration, "macLearn"}
{

    yang_name = "l2fm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L2fmItems::~L2fmItems()
{
}

bool System::L2fmItems::has_data() const
{
    if (is_presence_container) return true;
    return maclearn.is_set;
}

bool System::L2fmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maclearn.yfilter);
}

std::string System::L2fmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L2fmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L2fmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maclearn.is_set || is_set(maclearn.yfilter)) leaf_name_data.push_back(maclearn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L2fmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L2fmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::L2fmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macLearn")
    {
        maclearn = value;
        maclearn.value_namespace = name_space;
        maclearn.value_namespace_prefix = name_space_prefix;
    }
}

void System::L2fmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macLearn")
    {
        maclearn.yfilter = yfilter;
    }
}

bool System::L2fmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macLearn")
        return true;
    return false;
}

System::L2ribItems::L2ribItems()
    :
    inst_items(std::make_shared<System::L2ribItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "l2rib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L2ribItems::~L2ribItems()
{
}

bool System::L2ribItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::L2ribItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::L2ribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L2ribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2rib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L2ribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L2ribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::L2ribItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L2ribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::L2ribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L2ribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L2ribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::L2ribItems::InstItems::InstItems()
    :
    evpn_items(std::make_shared<System::L2ribItems::InstItems::EvpnItems>())
{
    evpn_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "l2rib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L2ribItems::InstItems::~InstItems()
{
}

bool System::L2ribItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (evpn_items !=  nullptr && evpn_items->has_data());
}

bool System::L2ribItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (evpn_items !=  nullptr && evpn_items->has_operation());
}

std::string System::L2ribItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l2rib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L2ribItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L2ribItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L2ribItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-items")
    {
        if(evpn_items == nullptr)
        {
            evpn_items = std::make_shared<System::L2ribItems::InstItems::EvpnItems>();
        }
        return evpn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L2ribItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_items != nullptr)
    {
        _children["evpn-items"] = evpn_items;
    }

    return _children;
}

void System::L2ribItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::L2ribItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::L2ribItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-items")
        return true;
    return false;
}

System::L2ribItems::InstItems::EvpnItems::EvpnItems()
    :
    ddmoves{YType::uint16, "ddMoves"},
    ddduration{YType::uint16, "ddDuration"},
    drtimeout{YType::uint16, "drTimeout"},
    drretrycnt{YType::uint16, "drRetryCnt"}
{

    yang_name = "evpn-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::L2ribItems::InstItems::EvpnItems::~EvpnItems()
{
}

bool System::L2ribItems::InstItems::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return ddmoves.is_set
	|| ddduration.is_set
	|| drtimeout.is_set
	|| drretrycnt.is_set;
}

bool System::L2ribItems::InstItems::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ddmoves.yfilter)
	|| ydk::is_set(ddduration.yfilter)
	|| ydk::is_set(drtimeout.yfilter)
	|| ydk::is_set(drretrycnt.yfilter);
}

std::string System::L2ribItems::InstItems::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/l2rib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::L2ribItems::InstItems::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::L2ribItems::InstItems::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ddmoves.is_set || is_set(ddmoves.yfilter)) leaf_name_data.push_back(ddmoves.get_name_leafdata());
    if (ddduration.is_set || is_set(ddduration.yfilter)) leaf_name_data.push_back(ddduration.get_name_leafdata());
    if (drtimeout.is_set || is_set(drtimeout.yfilter)) leaf_name_data.push_back(drtimeout.get_name_leafdata());
    if (drretrycnt.is_set || is_set(drretrycnt.yfilter)) leaf_name_data.push_back(drretrycnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::L2ribItems::InstItems::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::L2ribItems::InstItems::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::L2ribItems::InstItems::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ddMoves")
    {
        ddmoves = value;
        ddmoves.value_namespace = name_space;
        ddmoves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddDuration")
    {
        ddduration = value;
        ddduration.value_namespace = name_space;
        ddduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drTimeout")
    {
        drtimeout = value;
        drtimeout.value_namespace = name_space;
        drtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drRetryCnt")
    {
        drretrycnt = value;
        drretrycnt.value_namespace = name_space;
        drretrycnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::L2ribItems::InstItems::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ddMoves")
    {
        ddmoves.yfilter = yfilter;
    }
    if(value_path == "ddDuration")
    {
        ddduration.yfilter = yfilter;
    }
    if(value_path == "drTimeout")
    {
        drtimeout.yfilter = yfilter;
    }
    if(value_path == "drRetryCnt")
    {
        drretrycnt.yfilter = yfilter;
    }
}

bool System::L2ribItems::InstItems::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ddMoves" || name == "ddDuration" || name == "drTimeout" || name == "drRetryCnt")
        return true;
    return false;
}

System::PvlanItems::PvlanItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::PvlanItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "pvlan-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PvlanItems::~PvlanItems()
{
}

bool System::PvlanItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::PvlanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::PvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::PvlanItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["Inst-items"] = inst_items;
    }

    return _children;
}

void System::PvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::PvlanItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    if_items(std::make_shared<System::PvlanItems::InstItems::IfItems>())
    , vlan_items(std::make_shared<System::PvlanItems::InstItems::VlanItems>())
{
    if_items->parent = this;
    vlan_items->parent = this;

    yang_name = "Inst-items"; yang_parent_name = "pvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PvlanItems::InstItems::~InstItems()
{
}

bool System::PvlanItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::PvlanItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::PvlanItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PvlanItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::PvlanItems::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::PvlanItems::InstItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["If-items"] = if_items;
    }

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::PvlanItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::PvlanItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::PvlanItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-items" || name == "vlan-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"if_"})
{

    yang_name = "If-items"; yang_parent_name = "Inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PvlanItems::InstItems::IfItems::~IfItems()
{
}

bool System::PvlanItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PvlanItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pvlan-items/Inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PvlanItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::get_children() const
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

void System::PvlanItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PvlanItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PvlanItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::IfList()
    :
    if_{YType::str, "if"},
    promprimapping{YType::uint32, "promPriMapping"},
    promsecvlanmapping{YType::str, "promSecVlanMapping"},
    prihostvlan{YType::uint32, "priHostVlan"},
    sechostvlan{YType::uint32, "secHostVlan"},
    nativevlan{YType::uint32, "nativevlan"},
    tallowedvlans{YType::str, "tallowedvlans"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::str, "id"}
        ,
    pvlanpromtable_items(std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems>())
    , pvlantsectable_items(std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems>())
    , rtvrfmbr_items(std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    pvlanpromtable_items->parent = this;
    pvlantsectable_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "If-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PvlanItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| promprimapping.is_set
	|| promsecvlanmapping.is_set
	|| prihostvlan.is_set
	|| sechostvlan.is_set
	|| nativevlan.is_set
	|| tallowedvlans.is_set
	|| name.is_set
	|| descr.is_set
	|| id.is_set
	|| (pvlanpromtable_items !=  nullptr && pvlanpromtable_items->has_data())
	|| (pvlantsectable_items !=  nullptr && pvlantsectable_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::PvlanItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(promprimapping.yfilter)
	|| ydk::is_set(promsecvlanmapping.yfilter)
	|| ydk::is_set(prihostvlan.yfilter)
	|| ydk::is_set(sechostvlan.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(tallowedvlans.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (pvlanpromtable_items !=  nullptr && pvlanpromtable_items->has_operation())
	|| (pvlantsectable_items !=  nullptr && pvlantsectable_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::PvlanItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pvlan-items/Inst-items/If-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PvlanItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(if_, "if");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (promprimapping.is_set || is_set(promprimapping.yfilter)) leaf_name_data.push_back(promprimapping.get_name_leafdata());
    if (promsecvlanmapping.is_set || is_set(promsecvlanmapping.yfilter)) leaf_name_data.push_back(promsecvlanmapping.get_name_leafdata());
    if (prihostvlan.is_set || is_set(prihostvlan.yfilter)) leaf_name_data.push_back(prihostvlan.get_name_leafdata());
    if (sechostvlan.is_set || is_set(sechostvlan.yfilter)) leaf_name_data.push_back(sechostvlan.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (tallowedvlans.is_set || is_set(tallowedvlans.yfilter)) leaf_name_data.push_back(tallowedvlans.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvlanPromTable-items")
    {
        if(pvlanpromtable_items == nullptr)
        {
            pvlanpromtable_items = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems>();
        }
        return pvlanpromtable_items;
    }

    if(child_yang_name == "PvlanTSecTable-items")
    {
        if(pvlantsectable_items == nullptr)
        {
            pvlantsectable_items = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems>();
        }
        return pvlantsectable_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pvlanpromtable_items != nullptr)
    {
        _children["pvlanPromTable-items"] = pvlanpromtable_items;
    }

    if(pvlantsectable_items != nullptr)
    {
        _children["PvlanTSecTable-items"] = pvlantsectable_items;
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

void System::PvlanItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promPriMapping")
    {
        promprimapping = value;
        promprimapping.value_namespace = name_space;
        promprimapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promSecVlanMapping")
    {
        promsecvlanmapping = value;
        promsecvlanmapping.value_namespace = name_space;
        promsecvlanmapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priHostVlan")
    {
        prihostvlan = value;
        prihostvlan.value_namespace = name_space;
        prihostvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secHostVlan")
    {
        sechostvlan = value;
        sechostvlan.value_namespace = name_space;
        sechostvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativevlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tallowedvlans")
    {
        tallowedvlans = value;
        tallowedvlans.value_namespace = name_space;
        tallowedvlans.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::PvlanItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "promPriMapping")
    {
        promprimapping.yfilter = yfilter;
    }
    if(value_path == "promSecVlanMapping")
    {
        promsecvlanmapping.yfilter = yfilter;
    }
    if(value_path == "priHostVlan")
    {
        prihostvlan.yfilter = yfilter;
    }
    if(value_path == "secHostVlan")
    {
        sechostvlan.yfilter = yfilter;
    }
    if(value_path == "nativevlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "tallowedvlans")
    {
        tallowedvlans.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::PvlanItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvlanPromTable-items" || name == "PvlanTSecTable-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "if" || name == "promPriMapping" || name == "promSecVlanMapping" || name == "priHostVlan" || name == "secHostVlan" || name == "nativevlan" || name == "tallowedvlans" || name == "name" || name == "descr" || name == "id")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::PvlanPromTableItems()
    :
    vlan_items(std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "pvlanPromTable-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::~PvlanPromTableItems()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvlanPromTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::VlanItems()
    :
    pvlantpromentry_list(this, {"privlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "pvlanPromTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::~VlanItems()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pvlantpromentry_list.len(); index++)
    {
        if(pvlantpromentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<pvlantpromentry_list.len(); index++)
    {
        if(pvlantpromentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PvlanTPromEntry-list")
    {
        auto ent_ = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList>();
        ent_->parent = this;
        pvlantpromentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pvlantpromentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PvlanTPromEntry-list")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::PvlanTPromEntryList()
    :
    privlanid{YType::uint32, "priVlanId"},
    secvlans{YType::str, "secvlans"}
{

    yang_name = "PvlanTPromEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::~PvlanTPromEntryList()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::has_data() const
{
    if (is_presence_container) return true;
    return privlanid.is_set
	|| secvlans.is_set;
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(privlanid.yfilter)
	|| ydk::is_set(secvlans.yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PvlanTPromEntry-list";
    ADD_KEY_TOKEN(privlanid, "priVlanId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privlanid.is_set || is_set(privlanid.yfilter)) leaf_name_data.push_back(privlanid.get_name_leafdata());
    if (secvlans.is_set || is_set(secvlans.yfilter)) leaf_name_data.push_back(secvlans.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priVlanId")
    {
        privlanid = value;
        privlanid.value_namespace = name_space;
        privlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secvlans")
    {
        secvlans = value;
        secvlans.value_namespace = name_space;
        secvlans.value_namespace_prefix = name_space_prefix;
    }
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priVlanId")
    {
        privlanid.yfilter = yfilter;
    }
    if(value_path == "secvlans")
    {
        secvlans.yfilter = yfilter;
    }
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priVlanId" || name == "secvlans")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::PvlanTSecTableItems()
    :
    vlan_items(std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "PvlanTSecTable-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::~PvlanTSecTableItems()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PvlanTSecTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::VlanItems()
    :
    pvlantsecentry_list(this, {"privlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "PvlanTSecTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::~VlanItems()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pvlantsecentry_list.len(); index++)
    {
        if(pvlantsecentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<pvlantsecentry_list.len(); index++)
    {
        if(pvlantsecentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PvlanTSecEntry-list")
    {
        auto ent_ = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList>();
        ent_->parent = this;
        pvlantsecentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pvlantsecentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PvlanTSecEntry-list")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::PvlanTSecEntryList()
    :
    privlanid{YType::uint32, "priVlanId"},
    secvlanid{YType::uint32, "secVlanId"}
{

    yang_name = "PvlanTSecEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::~PvlanTSecEntryList()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::has_data() const
{
    if (is_presence_container) return true;
    return privlanid.is_set
	|| secvlanid.is_set;
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(privlanid.yfilter)
	|| ydk::is_set(secvlanid.yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PvlanTSecEntry-list";
    ADD_KEY_TOKEN(privlanid, "priVlanId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privlanid.is_set || is_set(privlanid.yfilter)) leaf_name_data.push_back(privlanid.get_name_leafdata());
    if (secvlanid.is_set || is_set(secvlanid.yfilter)) leaf_name_data.push_back(secvlanid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priVlanId")
    {
        privlanid = value;
        privlanid.value_namespace = name_space;
        privlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secVlanId")
    {
        secvlanid = value;
        secvlanid.value_namespace = name_space;
        secvlanid.value_namespace_prefix = name_space_prefix;
    }
}

void System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priVlanId")
    {
        privlanid.yfilter = yfilter;
    }
    if(value_path == "secVlanId")
    {
        secvlanid.yfilter = yfilter;
    }
}

bool System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priVlanId" || name == "secVlanId")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PvlanItems::InstItems::VlanItems::VlanItems()
    :
    pvlan_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "Inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PvlanItems::InstItems::VlanItems::~VlanItems()
{
}

bool System::PvlanItems::InstItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pvlan_list.len(); index++)
    {
        if(pvlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PvlanItems::InstItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<pvlan_list.len(); index++)
    {
        if(pvlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PvlanItems::InstItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pvlan-items/Inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PvlanItems::InstItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Pvlan-list")
    {
        auto ent_ = std::make_shared<System::PvlanItems::InstItems::VlanItems::PvlanList>();
        ent_->parent = this;
        pvlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pvlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PvlanItems::InstItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PvlanItems::InstItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PvlanItems::InstItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Pvlan-list")
        return true;
    return false;
}

System::PvlanItems::InstItems::VlanItems::PvlanList::PvlanList()
    :
    id{YType::uint32, "id"},
    vlantype{YType::enumeration, "vlanType"},
    association{YType::str, "association"}
{

    yang_name = "Pvlan-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PvlanItems::InstItems::VlanItems::PvlanList::~PvlanList()
{
}

bool System::PvlanItems::InstItems::VlanItems::PvlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vlantype.is_set
	|| association.is_set;
}

bool System::PvlanItems::InstItems::VlanItems::PvlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlantype.yfilter)
	|| ydk::is_set(association.yfilter);
}

std::string System::PvlanItems::InstItems::VlanItems::PvlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pvlan-items/Inst-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PvlanItems::InstItems::VlanItems::PvlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Pvlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PvlanItems::InstItems::VlanItems::PvlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vlantype.is_set || is_set(vlantype.yfilter)) leaf_name_data.push_back(vlantype.get_name_leafdata());
    if (association.is_set || is_set(association.yfilter)) leaf_name_data.push_back(association.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PvlanItems::InstItems::VlanItems::PvlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PvlanItems::InstItems::VlanItems::PvlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PvlanItems::InstItems::VlanItems::PvlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanType")
    {
        vlantype = value;
        vlantype.value_namespace = name_space;
        vlantype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association")
    {
        association = value;
        association.value_namespace = name_space;
        association.value_namespace_prefix = name_space_prefix;
    }
}

void System::PvlanItems::InstItems::VlanItems::PvlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vlanType")
    {
        vlantype.yfilter = yfilter;
    }
    if(value_path == "association")
    {
        association.yfilter = yfilter;
    }
}

bool System::PvlanItems::InstItems::VlanItems::PvlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vlanType" || name == "association")
        return true;
    return false;
}

System::VlanmgrItems::VlanmgrItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::VlanmgrItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "vlanmgr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanmgrItems::~VlanmgrItems()
{
}

bool System::VlanmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::VlanmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::VlanmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VlanmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VlanmgrItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VlanmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::VlanmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VlanmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VlanmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::VlanmgrItems::InstItems::InstItems()
    :
    vdcid{YType::uint16, "vdcId"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dommbr_items(std::make_shared<System::VlanmgrItems::InstItems::DommbrItems>())
{
    dommbr_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "vlanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanmgrItems::InstItems::~InstItems()
{
}

bool System::VlanmgrItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return vdcid.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dommbr_items !=  nullptr && dommbr_items->has_data());
}

bool System::VlanmgrItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dommbr_items !=  nullptr && dommbr_items->has_operation());
}

std::string System::VlanmgrItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vlanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanmgrItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanmgrItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VlanmgrItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dommbr-items")
    {
        if(dommbr_items == nullptr)
        {
            dommbr_items = std::make_shared<System::VlanmgrItems::InstItems::DommbrItems>();
        }
        return dommbr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VlanmgrItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dommbr_items != nullptr)
    {
        _children["dommbr-items"] = dommbr_items;
    }

    return _children;
}

void System::VlanmgrItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
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

void System::VlanmgrItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
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

bool System::VlanmgrItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dommbr-items" || name == "vdcId" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::VlanmgrItems::InstItems::DommbrItems::DommbrItems()
    :
    dommbrif_list(this, {"ifidx"})
{

    yang_name = "dommbr-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanmgrItems::InstItems::DommbrItems::~DommbrItems()
{
}

bool System::VlanmgrItems::InstItems::DommbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dommbrif_list.len(); index++)
    {
        if(dommbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VlanmgrItems::InstItems::DommbrItems::has_operation() const
{
    for (std::size_t index=0; index<dommbrif_list.len(); index++)
    {
        if(dommbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VlanmgrItems::InstItems::DommbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vlanmgr-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanmgrItems::InstItems::DommbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dommbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanmgrItems::InstItems::DommbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VlanmgrItems::InstItems::DommbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomMbrIf-list")
    {
        auto ent_ = std::make_shared<System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList>();
        ent_->parent = this;
        dommbrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VlanmgrItems::InstItems::DommbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dommbrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VlanmgrItems::InstItems::DommbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VlanmgrItems::InstItems::DommbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VlanmgrItems::InstItems::DommbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomMbrIf-list")
        return true;
    return false;
}

System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::DomMbrIfList()
    :
    ifidx{YType::str, "ifIdx"},
    createflag{YType::enumeration, "createFlag"},
    bundleportst{YType::enumeration, "bundlePortSt"},
    phyportstate{YType::enumeration, "phyPortState"},
    pmportstate{YType::enumeration, "pmPortState"},
    accessvlan{YType::uint32, "accessVlan"},
    nativevlan{YType::uint32, "nativeVlan"},
    pmportmode{YType::enumeration, "pmPortMode"},
    allowedvlanbmp{YType::str, "allowedVlanBmp"},
    trunkportupvlanbmp{YType::str, "trunkPortUpVlanBmp"},
    name{YType::str, "name"}
{

    yang_name = "DomMbrIf-list"; yang_parent_name = "dommbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::~DomMbrIfList()
{
}

bool System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return ifidx.is_set
	|| createflag.is_set
	|| bundleportst.is_set
	|| phyportstate.is_set
	|| pmportstate.is_set
	|| accessvlan.is_set
	|| nativevlan.is_set
	|| pmportmode.is_set
	|| allowedvlanbmp.is_set
	|| trunkportupvlanbmp.is_set
	|| name.is_set;
}

bool System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifidx.yfilter)
	|| ydk::is_set(createflag.yfilter)
	|| ydk::is_set(bundleportst.yfilter)
	|| ydk::is_set(phyportstate.yfilter)
	|| ydk::is_set(pmportstate.yfilter)
	|| ydk::is_set(accessvlan.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(pmportmode.yfilter)
	|| ydk::is_set(allowedvlanbmp.yfilter)
	|| ydk::is_set(trunkportupvlanbmp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vlanmgr-items/inst-items/dommbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomMbrIf-list";
    ADD_KEY_TOKEN(ifidx, "ifIdx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifidx.is_set || is_set(ifidx.yfilter)) leaf_name_data.push_back(ifidx.get_name_leafdata());
    if (createflag.is_set || is_set(createflag.yfilter)) leaf_name_data.push_back(createflag.get_name_leafdata());
    if (bundleportst.is_set || is_set(bundleportst.yfilter)) leaf_name_data.push_back(bundleportst.get_name_leafdata());
    if (phyportstate.is_set || is_set(phyportstate.yfilter)) leaf_name_data.push_back(phyportstate.get_name_leafdata());
    if (pmportstate.is_set || is_set(pmportstate.yfilter)) leaf_name_data.push_back(pmportstate.get_name_leafdata());
    if (accessvlan.is_set || is_set(accessvlan.yfilter)) leaf_name_data.push_back(accessvlan.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (pmportmode.is_set || is_set(pmportmode.yfilter)) leaf_name_data.push_back(pmportmode.get_name_leafdata());
    if (allowedvlanbmp.is_set || is_set(allowedvlanbmp.yfilter)) leaf_name_data.push_back(allowedvlanbmp.get_name_leafdata());
    if (trunkportupvlanbmp.is_set || is_set(trunkportupvlanbmp.yfilter)) leaf_name_data.push_back(trunkportupvlanbmp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIdx")
    {
        ifidx = value;
        ifidx.value_namespace = name_space;
        ifidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createFlag")
    {
        createflag = value;
        createflag.value_namespace = name_space;
        createflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundlePortSt")
    {
        bundleportst = value;
        bundleportst.value_namespace = name_space;
        bundleportst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phyPortState")
    {
        phyportstate = value;
        phyportstate.value_namespace = name_space;
        phyportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmPortState")
    {
        pmportstate = value;
        pmportstate.value_namespace = name_space;
        pmportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessVlan")
    {
        accessvlan = value;
        accessvlan.value_namespace = name_space;
        accessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmPortMode")
    {
        pmportmode = value;
        pmportmode.value_namespace = name_space;
        pmportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVlanBmp")
    {
        allowedvlanbmp = value;
        allowedvlanbmp.value_namespace = name_space;
        allowedvlanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkPortUpVlanBmp")
    {
        trunkportupvlanbmp = value;
        trunkportupvlanbmp.value_namespace = name_space;
        trunkportupvlanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIdx")
    {
        ifidx.yfilter = yfilter;
    }
    if(value_path == "createFlag")
    {
        createflag.yfilter = yfilter;
    }
    if(value_path == "bundlePortSt")
    {
        bundleportst.yfilter = yfilter;
    }
    if(value_path == "phyPortState")
    {
        phyportstate.yfilter = yfilter;
    }
    if(value_path == "pmPortState")
    {
        pmportstate.yfilter = yfilter;
    }
    if(value_path == "accessVlan")
    {
        accessvlan.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "pmPortMode")
    {
        pmportmode.yfilter = yfilter;
    }
    if(value_path == "allowedVlanBmp")
    {
        allowedvlanbmp.yfilter = yfilter;
    }
    if(value_path == "trunkPortUpVlanBmp")
    {
        trunkportupvlanbmp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIdx" || name == "createFlag" || name == "bundlePortSt" || name == "phyPortState" || name == "pmPortState" || name == "accessVlan" || name == "nativeVlan" || name == "pmPortMode" || name == "allowedVlanBmp" || name == "trunkPortUpVlanBmp" || name == "name")
        return true;
    return false;
}

System::EpsItems::EpsItems()
    :
    evpnmulticast_items(std::make_shared<System::EpsItems::EvpnmulticastItems>())
    , multisite_items(std::make_shared<System::EpsItems::MultisiteItems>())
    , epid_items(std::make_shared<System::EpsItems::EpIdItems>())
{
    evpnmulticast_items->parent = this;
    multisite_items->parent = this;
    epid_items->parent = this;

    yang_name = "eps-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EpsItems::~EpsItems()
{
}

bool System::EpsItems::has_data() const
{
    if (is_presence_container) return true;
    return (evpnmulticast_items !=  nullptr && evpnmulticast_items->has_data())
	|| (multisite_items !=  nullptr && multisite_items->has_data())
	|| (epid_items !=  nullptr && epid_items->has_data());
}

bool System::EpsItems::has_operation() const
{
    return is_set(yfilter)
	|| (evpnmulticast_items !=  nullptr && evpnmulticast_items->has_operation())
	|| (multisite_items !=  nullptr && multisite_items->has_operation())
	|| (epid_items !=  nullptr && epid_items->has_operation());
}

std::string System::EpsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EpsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpnmulticast-items")
    {
        if(evpnmulticast_items == nullptr)
        {
            evpnmulticast_items = std::make_shared<System::EpsItems::EvpnmulticastItems>();
        }
        return evpnmulticast_items;
    }

    if(child_yang_name == "multisite-items")
    {
        if(multisite_items == nullptr)
        {
            multisite_items = std::make_shared<System::EpsItems::MultisiteItems>();
        }
        return multisite_items;
    }

    if(child_yang_name == "epId-items")
    {
        if(epid_items == nullptr)
        {
            epid_items = std::make_shared<System::EpsItems::EpIdItems>();
        }
        return epid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpnmulticast_items != nullptr)
    {
        _children["evpnmulticast-items"] = evpnmulticast_items;
    }

    if(multisite_items != nullptr)
    {
        _children["multisite-items"] = multisite_items;
    }

    if(epid_items != nullptr)
    {
        _children["epId-items"] = epid_items;
    }

    return _children;
}

void System::EpsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnmulticast-items" || name == "multisite-items" || name == "epId-items")
        return true;
    return false;
}

System::EpsItems::EvpnmulticastItems::EvpnmulticastItems()
    :
    state{YType::enumeration, "state"}
{

    yang_name = "evpnmulticast-items"; yang_parent_name = "eps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EpsItems::EvpnmulticastItems::~EvpnmulticastItems()
{
}

bool System::EpsItems::EvpnmulticastItems::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set;
}

bool System::EpsItems::EvpnmulticastItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string System::EpsItems::EvpnmulticastItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/eps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EpsItems::EvpnmulticastItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnmulticast-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EvpnmulticastItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EvpnmulticastItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EvpnmulticastItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::EvpnmulticastItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::EvpnmulticastItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool System::EpsItems::EvpnmulticastItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

System::EpsItems::MultisiteItems::MultisiteItems()
    :
    state{YType::enumeration, "state"},
    siteid{YType::uint64, "siteId"},
    delayrestoretime{YType::uint16, "delayRestoreTime"}
{

    yang_name = "multisite-items"; yang_parent_name = "eps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EpsItems::MultisiteItems::~MultisiteItems()
{
}

bool System::EpsItems::MultisiteItems::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| siteid.is_set
	|| delayrestoretime.is_set;
}

bool System::EpsItems::MultisiteItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(siteid.yfilter)
	|| ydk::is_set(delayrestoretime.yfilter);
}

std::string System::EpsItems::MultisiteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/eps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EpsItems::MultisiteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multisite-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::MultisiteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (siteid.is_set || is_set(siteid.yfilter)) leaf_name_data.push_back(siteid.get_name_leafdata());
    if (delayrestoretime.is_set || is_set(delayrestoretime.yfilter)) leaf_name_data.push_back(delayrestoretime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::MultisiteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::MultisiteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EpsItems::MultisiteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siteId")
    {
        siteid = value;
        siteid.value_namespace = name_space;
        siteid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayRestoreTime")
    {
        delayrestoretime = value;
        delayrestoretime.value_namespace = name_space;
        delayrestoretime.value_namespace_prefix = name_space_prefix;
    }
}

void System::EpsItems::MultisiteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "siteId")
    {
        siteid.yfilter = yfilter;
    }
    if(value_path == "delayRestoreTime")
    {
        delayrestoretime.yfilter = yfilter;
    }
}

bool System::EpsItems::MultisiteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "siteId" || name == "delayRestoreTime")
        return true;
    return false;
}

System::EpsItems::EpIdItems::EpIdItems()
    :
    ep_list(this, {"epid"})
{

    yang_name = "epId-items"; yang_parent_name = "eps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EpsItems::EpIdItems::~EpIdItems()
{
}

bool System::EpsItems::EpIdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ep_list.len(); index++)
    {
        if(ep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EpsItems::EpIdItems::has_operation() const
{
    for (std::size_t index=0; index<ep_list.len(); index++)
    {
        if(ep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EpsItems::EpIdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/eps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EpsItems::EpIdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epId-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EpsItems::EpIdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EpsItems::EpIdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ep-list")
    {
        auto ent_ = std::make_shared<System::EpsItems::EpIdItems::EpList>();
        ent_->parent = this;
        ep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EpsItems::EpIdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::EpsItems::EpIdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EpsItems::EpIdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EpsItems::EpIdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ep-list")
        return true;
    return false;
}

const Enum::YLeaf System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DirectedBroadcast::disabled {0, "disabled"};
const Enum::YLeaf System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DirectedBroadcast::enabled {1, "enabled"};


}
}

