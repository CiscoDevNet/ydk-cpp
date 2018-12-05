
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_20.hpp"
#include "Cisco_NX_OS_device_21.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    pdusent{YType::uint64, "pduSent"},
    pdurcvd{YType::uint64, "pduRcvd"},
    markersent{YType::uint64, "markerSent"},
    markerrcvd{YType::uint64, "markerRcvd"},
    markerrspsent{YType::uint64, "markerRspSent"},
    markerrsprcvd{YType::uint64, "markerRspRcvd"},
    errpktrcvd{YType::uint64, "errPktRcvd"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return pdusent.is_set
	|| pdurcvd.is_set
	|| markersent.is_set
	|| markerrcvd.is_set
	|| markerrspsent.is_set
	|| markerrsprcvd.is_set
	|| errpktrcvd.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdusent.yfilter)
	|| ydk::is_set(pdurcvd.yfilter)
	|| ydk::is_set(markersent.yfilter)
	|| ydk::is_set(markerrcvd.yfilter)
	|| ydk::is_set(markerrspsent.yfilter)
	|| ydk::is_set(markerrsprcvd.yfilter)
	|| ydk::is_set(errpktrcvd.yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdusent.is_set || is_set(pdusent.yfilter)) leaf_name_data.push_back(pdusent.get_name_leafdata());
    if (pdurcvd.is_set || is_set(pdurcvd.yfilter)) leaf_name_data.push_back(pdurcvd.get_name_leafdata());
    if (markersent.is_set || is_set(markersent.yfilter)) leaf_name_data.push_back(markersent.get_name_leafdata());
    if (markerrcvd.is_set || is_set(markerrcvd.yfilter)) leaf_name_data.push_back(markerrcvd.get_name_leafdata());
    if (markerrspsent.is_set || is_set(markerrspsent.yfilter)) leaf_name_data.push_back(markerrspsent.get_name_leafdata());
    if (markerrsprcvd.is_set || is_set(markerrsprcvd.yfilter)) leaf_name_data.push_back(markerrsprcvd.get_name_leafdata());
    if (errpktrcvd.is_set || is_set(errpktrcvd.yfilter)) leaf_name_data.push_back(errpktrcvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pduSent")
    {
        pdusent = value;
        pdusent.value_namespace = name_space;
        pdusent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pduRcvd")
    {
        pdurcvd = value;
        pdurcvd.value_namespace = name_space;
        pdurcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerSent")
    {
        markersent = value;
        markersent.value_namespace = name_space;
        markersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerRcvd")
    {
        markerrcvd = value;
        markerrcvd.value_namespace = name_space;
        markerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerRspSent")
    {
        markerrspsent = value;
        markerrspsent.value_namespace = name_space;
        markerrspsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markerRspRcvd")
    {
        markerrsprcvd = value;
        markerrsprcvd.value_namespace = name_space;
        markerrsprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd = value;
        errpktrcvd.value_namespace = name_space;
        errpktrcvd.value_namespace_prefix = name_space_prefix;
    }
}

void System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pduSent")
    {
        pdusent.yfilter = yfilter;
    }
    if(value_path == "pduRcvd")
    {
        pdurcvd.yfilter = yfilter;
    }
    if(value_path == "markerSent")
    {
        markersent.yfilter = yfilter;
    }
    if(value_path == "markerRcvd")
    {
        markerrcvd.yfilter = yfilter;
    }
    if(value_path == "markerRspSent")
    {
        markerrspsent.yfilter = yfilter;
    }
    if(value_path == "markerRspRcvd")
    {
        markerrsprcvd.yfilter = yfilter;
    }
    if(value_path == "errPktRcvd")
    {
        errpktrcvd.yfilter = yfilter;
    }
}

bool System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pduSent" || name == "pduRcvd" || name == "markerSent" || name == "markerRcvd" || name == "markerRspSent" || name == "markerRspRcvd" || name == "errPktRcvd")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtItems()
    :
    mgmtif_list(this, {"id"})
{

    yang_name = "mgmt-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MgmtItems::~MgmtItems()
{
}

bool System::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtif_list.len(); index++)
    {
        if(mgmtif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtif_list.len(); index++)
    {
        if(mgmtif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MgmtItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtIf-list")
    {
        auto ent_ = std::make_shared<System::MgmtItems::MgmtIfList>();
        ent_->parent = this;
        mgmtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgmtif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtIf-list")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::MgmtIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    speed{YType::enumeration, "speed"},
    duplex{YType::enumeration, "duplex"},
    autoneg{YType::enumeration, "autoNeg"},
    mtu{YType::uint32, "mtu"},
    snmptrapst{YType::enumeration, "snmpTrapSt"}
        ,
    mgmt_items(std::make_shared<System::MgmtItems::MgmtIfList::MgmtItems_>())
    , portcap_items(std::make_shared<System::MgmtItems::MgmtIfList::PortcapItems>())
    , rtrtdmgmtconf_items(std::make_shared<System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems>())
    , rtvrfmbr_items(std::make_shared<System::MgmtItems::MgmtIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MgmtItems::MgmtIfList::RtnwPathToIfItems>())
    , dbgifin_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfInItems>())
    , dbgifout_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfOutItems>())
    , dbgipin_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIpInItems>())
    , dbgdot1d_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgDot1dItems>())
    , dbgetherstats_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgEtherStatsItems>())
    , dbgdot3stats_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgDot3StatsItems>())
    , dbgifhcin_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCInItems>())
    , dbgifhcout_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCOutItems>())
    , dbgipv6ifstats_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems>())
    , dbgifstorm_items(std::make_shared<System::MgmtItems::MgmtIfList::DbgIfStormItems>())
{
    mgmt_items->parent = this;
    portcap_items->parent = this;
    rtrtdmgmtconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;
    dbgifin_items->parent = this;
    dbgifout_items->parent = this;
    dbgipin_items->parent = this;
    dbgdot1d_items->parent = this;
    dbgetherstats_items->parent = this;
    dbgdot3stats_items->parent = this;
    dbgifhcin_items->parent = this;
    dbgifhcout_items->parent = this;
    dbgipv6ifstats_items->parent = this;
    dbgifstorm_items->parent = this;

    yang_name = "MgmtIf-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MgmtItems::MgmtIfList::~MgmtIfList()
{
}

bool System::MgmtItems::MgmtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| speed.is_set
	|| duplex.is_set
	|| autoneg.is_set
	|| mtu.is_set
	|| snmptrapst.is_set
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (portcap_items !=  nullptr && portcap_items->has_data())
	|| (rtrtdmgmtconf_items !=  nullptr && rtrtdmgmtconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_data())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_data())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_data())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_data())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_data())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_data())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_data())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_data())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_data())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_data());
}

bool System::MgmtItems::MgmtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(snmptrapst.yfilter)
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (portcap_items !=  nullptr && portcap_items->has_operation())
	|| (rtrtdmgmtconf_items !=  nullptr && rtrtdmgmtconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_operation())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_operation())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_operation())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_operation())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_operation())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_operation())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_operation())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_operation())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_operation())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_operation());
}

std::string System::MgmtItems::MgmtIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mgmt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MgmtItems::MgmtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::MgmtItems::MgmtIfList::MgmtItems_>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "portcap-items")
    {
        if(portcap_items == nullptr)
        {
            portcap_items = std::make_shared<System::MgmtItems::MgmtIfList::PortcapItems>();
        }
        return portcap_items;
    }

    if(child_yang_name == "rtrtdMgmtConf-items")
    {
        if(rtrtdmgmtconf_items == nullptr)
        {
            rtrtdmgmtconf_items = std::make_shared<System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems>();
        }
        return rtrtdmgmtconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MgmtItems::MgmtIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MgmtItems::MgmtIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "dbgIfIn-items")
    {
        if(dbgifin_items == nullptr)
        {
            dbgifin_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfInItems>();
        }
        return dbgifin_items;
    }

    if(child_yang_name == "dbgIfOut-items")
    {
        if(dbgifout_items == nullptr)
        {
            dbgifout_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfOutItems>();
        }
        return dbgifout_items;
    }

    if(child_yang_name == "dbgIpIn-items")
    {
        if(dbgipin_items == nullptr)
        {
            dbgipin_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIpInItems>();
        }
        return dbgipin_items;
    }

    if(child_yang_name == "dbgDot1d-items")
    {
        if(dbgdot1d_items == nullptr)
        {
            dbgdot1d_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgDot1dItems>();
        }
        return dbgdot1d_items;
    }

    if(child_yang_name == "dbgEtherStats-items")
    {
        if(dbgetherstats_items == nullptr)
        {
            dbgetherstats_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgEtherStatsItems>();
        }
        return dbgetherstats_items;
    }

    if(child_yang_name == "dbgDot3Stats-items")
    {
        if(dbgdot3stats_items == nullptr)
        {
            dbgdot3stats_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgDot3StatsItems>();
        }
        return dbgdot3stats_items;
    }

    if(child_yang_name == "dbgIfHCIn-items")
    {
        if(dbgifhcin_items == nullptr)
        {
            dbgifhcin_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCInItems>();
        }
        return dbgifhcin_items;
    }

    if(child_yang_name == "dbgIfHCOut-items")
    {
        if(dbgifhcout_items == nullptr)
        {
            dbgifhcout_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfHCOutItems>();
        }
        return dbgifhcout_items;
    }

    if(child_yang_name == "dbgIpv6IfStats-items")
    {
        if(dbgipv6ifstats_items == nullptr)
        {
            dbgipv6ifstats_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems>();
        }
        return dbgipv6ifstats_items;
    }

    if(child_yang_name == "dbgIfStorm-items")
    {
        if(dbgifstorm_items == nullptr)
        {
            dbgifstorm_items = std::make_shared<System::MgmtItems::MgmtIfList::DbgIfStormItems>();
        }
        return dbgifstorm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mgmt_items != nullptr)
    {
        _children["mgmt-items"] = mgmt_items;
    }

    if(portcap_items != nullptr)
    {
        _children["portcap-items"] = portcap_items;
    }

    if(rtrtdmgmtconf_items != nullptr)
    {
        _children["rtrtdMgmtConf-items"] = rtrtdmgmtconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(dbgifin_items != nullptr)
    {
        _children["dbgIfIn-items"] = dbgifin_items;
    }

    if(dbgifout_items != nullptr)
    {
        _children["dbgIfOut-items"] = dbgifout_items;
    }

    if(dbgipin_items != nullptr)
    {
        _children["dbgIpIn-items"] = dbgipin_items;
    }

    if(dbgdot1d_items != nullptr)
    {
        _children["dbgDot1d-items"] = dbgdot1d_items;
    }

    if(dbgetherstats_items != nullptr)
    {
        _children["dbgEtherStats-items"] = dbgetherstats_items;
    }

    if(dbgdot3stats_items != nullptr)
    {
        _children["dbgDot3Stats-items"] = dbgdot3stats_items;
    }

    if(dbgifhcin_items != nullptr)
    {
        _children["dbgIfHCIn-items"] = dbgifhcin_items;
    }

    if(dbgifhcout_items != nullptr)
    {
        _children["dbgIfHCOut-items"] = dbgifhcout_items;
    }

    if(dbgipv6ifstats_items != nullptr)
    {
        _children["dbgIpv6IfStats-items"] = dbgipv6ifstats_items;
    }

    if(dbgifstorm_items != nullptr)
    {
        _children["dbgIfStorm-items"] = dbgifstorm_items;
    }

    return _children;
}

void System::MgmtItems::MgmtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoNeg")
    {
        autoneg = value;
        autoneg.value_namespace = name_space;
        autoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst = value;
        snmptrapst.value_namespace = name_space;
        snmptrapst.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "autoNeg")
    {
        autoneg.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgmt-items" || name == "portcap-items" || name == "rtrtdMgmtConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "dbgIfIn-items" || name == "dbgIfOut-items" || name == "dbgIpIn-items" || name == "dbgDot1d-items" || name == "dbgEtherStats-items" || name == "dbgDot3Stats-items" || name == "dbgIfHCIn-items" || name == "dbgIfHCOut-items" || name == "dbgIpv6IfStats-items" || name == "dbgIfStorm-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::MgmtItems_::MgmtItems_()
    :
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    operspeed{YType::enumeration, "operSpeed"},
    operduplex{YType::enumeration, "operDuplex"},
    operphylayer{YType::enumeration, "operPhyLayer"},
    backplanemac{YType::str, "backplaneMac"},
    operroutermac{YType::str, "operRouterMac"},
    portinitevalflag{YType::uint8, "portInitEvalFlag"},
    opermtu{YType::uint32, "operMtu"},
    iod{YType::uint64, "iod"},
    vdcid{YType::uint16, "vdcId"},
    lastlinkstchg{YType::str, "lastLinkStChg"}
{

    yang_name = "mgmt-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::MgmtItems_::~MgmtItems_()
{
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| operstqual.is_set
	|| operspeed.is_set
	|| operduplex.is_set
	|| operphylayer.is_set
	|| backplanemac.is_set
	|| operroutermac.is_set
	|| portinitevalflag.is_set
	|| opermtu.is_set
	|| iod.is_set
	|| vdcid.is_set
	|| lastlinkstchg.is_set;
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(operspeed.yfilter)
	|| ydk::is_set(operduplex.yfilter)
	|| ydk::is_set(operphylayer.yfilter)
	|| ydk::is_set(backplanemac.yfilter)
	|| ydk::is_set(operroutermac.yfilter)
	|| ydk::is_set(portinitevalflag.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter);
}

std::string System::MgmtItems::MgmtIfList::MgmtItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::MgmtItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (operspeed.is_set || is_set(operspeed.yfilter)) leaf_name_data.push_back(operspeed.get_name_leafdata());
    if (operduplex.is_set || is_set(operduplex.yfilter)) leaf_name_data.push_back(operduplex.get_name_leafdata());
    if (operphylayer.is_set || is_set(operphylayer.yfilter)) leaf_name_data.push_back(operphylayer.get_name_leafdata());
    if (backplanemac.is_set || is_set(backplanemac.yfilter)) leaf_name_data.push_back(backplanemac.get_name_leafdata());
    if (operroutermac.is_set || is_set(operroutermac.yfilter)) leaf_name_data.push_back(operroutermac.get_name_leafdata());
    if (portinitevalflag.is_set || is_set(portinitevalflag.yfilter)) leaf_name_data.push_back(portinitevalflag.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::MgmtItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::MgmtItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::MgmtItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "operSpeed")
    {
        operspeed = value;
        operspeed.value_namespace = name_space;
        operspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDuplex")
    {
        operduplex = value;
        operduplex.value_namespace = name_space;
        operduplex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "portInitEvalFlag")
    {
        portinitevalflag = value;
        portinitevalflag.value_namespace = name_space;
        portinitevalflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::MgmtItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operSpeed")
    {
        operspeed.yfilter = yfilter;
    }
    if(value_path == "operDuplex")
    {
        operduplex.yfilter = yfilter;
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
    if(value_path == "portInitEvalFlag")
    {
        portinitevalflag.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operSt" || name == "operStQual" || name == "operSpeed" || name == "operDuplex" || name == "operPhyLayer" || name == "backplaneMac" || name == "operRouterMac" || name == "portInitEvalFlag" || name == "operMtu" || name == "iod" || name == "vdcId" || name == "lastLinkStChg")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::PortcapItems::PortcapItems()
    :
    portcap{YType::uint32, "portCap"}
{

    yang_name = "portcap-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::PortcapItems::~PortcapItems()
{
}

bool System::MgmtItems::MgmtIfList::PortcapItems::has_data() const
{
    if (is_presence_container) return true;
    return portcap.is_set;
}

bool System::MgmtItems::MgmtIfList::PortcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(portcap.yfilter);
}

std::string System::MgmtItems::MgmtIfList::PortcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::PortcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (portcap.is_set || is_set(portcap.yfilter)) leaf_name_data.push_back(portcap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::PortcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::PortcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::PortcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "portCap")
    {
        portcap = value;
        portcap.value_namespace = name_space;
        portcap.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::PortcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "portCap")
    {
        portcap.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::PortcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "portCap")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::RtrtdMgmtConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtrtdMgmtConf-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::~RtrtdMgmtConfItems()
{
}

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtdMgmtConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MgmtItems::MgmtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_children() const
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

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfInItems::DbgIfInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    unknownprotos{YType::uint64, "unknownProtos"},
    unknownetype{YType::uint64, "unknownEtype"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    nobuffer{YType::uint64, "noBuffer"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfIn-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfInItems::~DbgIfInItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| unknownprotos.is_set
	|| unknownetype.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| nobuffer.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(unknownprotos.yfilter)
	|| ydk::is_set(unknownetype.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(nobuffer.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (unknownprotos.is_set || is_set(unknownprotos.yfilter)) leaf_name_data.push_back(unknownprotos.get_name_leafdata());
    if (unknownetype.is_set || is_set(unknownetype.yfilter)) leaf_name_data.push_back(unknownetype.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (nobuffer.is_set || is_set(nobuffer.yfilter)) leaf_name_data.push_back(nobuffer.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgIfInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos = value;
        unknownprotos.value_namespace = name_space;
        unknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype = value;
        unknownetype.value_namespace = name_space;
        unknownetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noBuffer")
    {
        nobuffer = value;
        nobuffer.value_namespace = name_space;
        nobuffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos.yfilter = yfilter;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "noBuffer")
    {
        nobuffer.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "unknownProtos" || name == "unknownEtype" || name == "broadcastPkts" || name == "multicastPkts" || name == "noBuffer" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfOutItems::DbgIfOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    qlen{YType::uint64, "qLen"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfOut-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfOutItems::~DbgIfOutItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| qlen.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(qlen.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (qlen.is_set || is_set(qlen.yfilter)) leaf_name_data.push_back(qlen.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgIfOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qLen")
    {
        qlen = value;
        qlen.value_namespace = name_space;
        qlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "qLen")
    {
        qlen.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "qLen" || name == "broadcastPkts" || name == "multicastPkts" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIpInItems::DbgIpInItems()
    :
    receives{YType::uint64, "receives"},
    hdrerrors{YType::uint64, "hdrErrors"},
    forwdatagrams{YType::uint64, "forwDatagrams"},
    discards{YType::uint64, "discards"}
{

    yang_name = "dbgIpIn-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIpInItems::~DbgIpInItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIpInItems::has_data() const
{
    if (is_presence_container) return true;
    return receives.is_set
	|| hdrerrors.is_set
	|| forwdatagrams.is_set
	|| discards.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIpInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receives.yfilter)
	|| ydk::is_set(hdrerrors.yfilter)
	|| ydk::is_set(forwdatagrams.yfilter)
	|| ydk::is_set(discards.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIpInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIpInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receives.is_set || is_set(receives.yfilter)) leaf_name_data.push_back(receives.get_name_leafdata());
    if (hdrerrors.is_set || is_set(hdrerrors.yfilter)) leaf_name_data.push_back(hdrerrors.get_name_leafdata());
    if (forwdatagrams.is_set || is_set(forwdatagrams.yfilter)) leaf_name_data.push_back(forwdatagrams.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIpInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIpInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgIpInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receives")
    {
        receives = value;
        receives.value_namespace = name_space;
        receives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors = value;
        hdrerrors.value_namespace = name_space;
        hdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams = value;
        forwdatagrams.value_namespace = name_space;
        forwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIpInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receives")
    {
        receives.yfilter = yfilter;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors.yfilter = yfilter;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIpInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receives" || name == "hdrErrors" || name == "forwDatagrams" || name == "discards")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgDot1dItems::DbgDot1dItems()
    :
    baseportdelayexceededdiscards{YType::uint64, "basePortDelayExceededDiscards"},
    baseportmtuexceededdiscards{YType::uint64, "basePortMtuExceededDiscards"},
    tpportinframes{YType::uint64, "tpPortInFrames"},
    tpportoutframes{YType::uint64, "tpPortOutFrames"},
    portindiscards{YType::uint64, "portInDiscards"}
{

    yang_name = "dbgDot1d-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgDot1dItems::~DbgDot1dItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgDot1dItems::has_data() const
{
    if (is_presence_container) return true;
    return baseportdelayexceededdiscards.is_set
	|| baseportmtuexceededdiscards.is_set
	|| tpportinframes.is_set
	|| tpportoutframes.is_set
	|| portindiscards.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgDot1dItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(baseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(baseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(tpportinframes.yfilter)
	|| ydk::is_set(tpportoutframes.yfilter)
	|| ydk::is_set(portindiscards.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgDot1dItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot1d-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgDot1dItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baseportdelayexceededdiscards.is_set || is_set(baseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(baseportdelayexceededdiscards.get_name_leafdata());
    if (baseportmtuexceededdiscards.is_set || is_set(baseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(baseportmtuexceededdiscards.get_name_leafdata());
    if (tpportinframes.is_set || is_set(tpportinframes.yfilter)) leaf_name_data.push_back(tpportinframes.get_name_leafdata());
    if (tpportoutframes.is_set || is_set(tpportoutframes.yfilter)) leaf_name_data.push_back(tpportoutframes.get_name_leafdata());
    if (portindiscards.is_set || is_set(portindiscards.yfilter)) leaf_name_data.push_back(portindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgDot1dItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgDot1dItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgDot1dItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards = value;
        baseportdelayexceededdiscards.value_namespace = name_space;
        baseportdelayexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards = value;
        baseportmtuexceededdiscards.value_namespace = name_space;
        baseportmtuexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes = value;
        tpportinframes.value_namespace = name_space;
        tpportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes = value;
        tpportoutframes.value_namespace = name_space;
        tpportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards = value;
        portindiscards.value_namespace = name_space;
        portindiscards.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgDot1dItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes.yfilter = yfilter;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes.yfilter = yfilter;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgDot1dItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basePortDelayExceededDiscards" || name == "basePortMtuExceededDiscards" || name == "tpPortInFrames" || name == "tpPortOutFrames" || name == "portInDiscards")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgEtherStatsItems::DbgEtherStatsItems()
    :
    dropevents{YType::uint64, "dropEvents"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    undersizepkts{YType::uint64, "undersizePkts"},
    giantpkts{YType::uint64, "giantPkts"},
    stormsupressedpkts{YType::uint64, "stormSupressedPkts"},
    fragments{YType::uint64, "fragments"},
    pkts64octets{YType::uint64, "pkts64Octets"},
    pkts65to127octets{YType::uint64, "pkts65to127Octets"},
    pkts128to255octets{YType::uint64, "pkts128to255Octets"},
    pkts256to511octets{YType::uint64, "pkts256to511Octets"},
    pkts512to1023octets{YType::uint64, "pkts512to1023Octets"},
    pkts1024to1518octets{YType::uint64, "pkts1024to1518Octets"},
    pkts1519to1548octets{YType::uint64, "pkts1519to1548Octets"},
    rxpkts64octets{YType::uint64, "rxPkts64Octets"},
    txpkts64octets{YType::uint64, "txPkts64Octets"},
    rxpkts65to127octets{YType::uint64, "rxPkts65to127Octets"},
    txpkts65to127octets{YType::uint64, "txPkts65to127Octets"},
    rxpkts128to255octets{YType::uint64, "rxPkts128to255Octets"},
    txpkts128to255octets{YType::uint64, "txPkts128to255Octets"},
    rxpkts256to511octets{YType::uint64, "rxPkts256to511Octets"},
    txpkts256to511octets{YType::uint64, "txPkts256to511Octets"},
    rxpkts512to1023octets{YType::uint64, "rxPkts512to1023Octets"},
    txpkts512to1023octets{YType::uint64, "txPkts512to1023Octets"},
    rxpkts1024to1518octets{YType::uint64, "rxPkts1024to1518Octets"},
    txpkts1024to1518octets{YType::uint64, "txPkts1024to1518Octets"},
    rxpkts1519to1548octets{YType::uint64, "rxPkts1519to1548Octets"},
    txpkts1519to1548octets{YType::uint64, "txPkts1519to1548Octets"},
    oversizepkts{YType::uint64, "oversizePkts"},
    jabbers{YType::uint64, "jabbers"},
    octets{YType::uint64, "octets"},
    pkts{YType::uint64, "pkts"},
    collisions{YType::uint64, "collisions"},
    crcalignerrors{YType::uint64, "cRCAlignErrors"},
    txnoerrors{YType::uint64, "tXNoErrors"},
    rxnoerrors{YType::uint64, "rXNoErrors"},
    rxoversizepkts{YType::uint64, "rxOversizePkts"},
    txoversizepkts{YType::uint64, "txOversizePkts"},
    overrun{YType::uint64, "overrun"},
    underrun{YType::uint64, "underrun"},
    ignored{YType::uint64, "ignored"},
    watchdog{YType::uint64, "watchdog"},
    ifdowndrop{YType::uint64, "ifdowndrop"}
{

    yang_name = "dbgEtherStats-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgEtherStatsItems::~DbgEtherStatsItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgEtherStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return dropevents.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set
	|| undersizepkts.is_set
	|| giantpkts.is_set
	|| stormsupressedpkts.is_set
	|| fragments.is_set
	|| pkts64octets.is_set
	|| pkts65to127octets.is_set
	|| pkts128to255octets.is_set
	|| pkts256to511octets.is_set
	|| pkts512to1023octets.is_set
	|| pkts1024to1518octets.is_set
	|| pkts1519to1548octets.is_set
	|| rxpkts64octets.is_set
	|| txpkts64octets.is_set
	|| rxpkts65to127octets.is_set
	|| txpkts65to127octets.is_set
	|| rxpkts128to255octets.is_set
	|| txpkts128to255octets.is_set
	|| rxpkts256to511octets.is_set
	|| txpkts256to511octets.is_set
	|| rxpkts512to1023octets.is_set
	|| txpkts512to1023octets.is_set
	|| rxpkts1024to1518octets.is_set
	|| txpkts1024to1518octets.is_set
	|| rxpkts1519to1548octets.is_set
	|| txpkts1519to1548octets.is_set
	|| oversizepkts.is_set
	|| jabbers.is_set
	|| octets.is_set
	|| pkts.is_set
	|| collisions.is_set
	|| crcalignerrors.is_set
	|| txnoerrors.is_set
	|| rxnoerrors.is_set
	|| rxoversizepkts.is_set
	|| txoversizepkts.is_set
	|| overrun.is_set
	|| underrun.is_set
	|| ignored.is_set
	|| watchdog.is_set
	|| ifdowndrop.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgEtherStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropevents.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(undersizepkts.yfilter)
	|| ydk::is_set(giantpkts.yfilter)
	|| ydk::is_set(stormsupressedpkts.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(pkts64octets.yfilter)
	|| ydk::is_set(pkts65to127octets.yfilter)
	|| ydk::is_set(pkts128to255octets.yfilter)
	|| ydk::is_set(pkts256to511octets.yfilter)
	|| ydk::is_set(pkts512to1023octets.yfilter)
	|| ydk::is_set(pkts1024to1518octets.yfilter)
	|| ydk::is_set(pkts1519to1548octets.yfilter)
	|| ydk::is_set(rxpkts64octets.yfilter)
	|| ydk::is_set(txpkts64octets.yfilter)
	|| ydk::is_set(rxpkts65to127octets.yfilter)
	|| ydk::is_set(txpkts65to127octets.yfilter)
	|| ydk::is_set(rxpkts128to255octets.yfilter)
	|| ydk::is_set(txpkts128to255octets.yfilter)
	|| ydk::is_set(rxpkts256to511octets.yfilter)
	|| ydk::is_set(txpkts256to511octets.yfilter)
	|| ydk::is_set(rxpkts512to1023octets.yfilter)
	|| ydk::is_set(txpkts512to1023octets.yfilter)
	|| ydk::is_set(rxpkts1024to1518octets.yfilter)
	|| ydk::is_set(txpkts1024to1518octets.yfilter)
	|| ydk::is_set(rxpkts1519to1548octets.yfilter)
	|| ydk::is_set(txpkts1519to1548octets.yfilter)
	|| ydk::is_set(oversizepkts.yfilter)
	|| ydk::is_set(jabbers.yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(pkts.yfilter)
	|| ydk::is_set(collisions.yfilter)
	|| ydk::is_set(crcalignerrors.yfilter)
	|| ydk::is_set(txnoerrors.yfilter)
	|| ydk::is_set(rxnoerrors.yfilter)
	|| ydk::is_set(rxoversizepkts.yfilter)
	|| ydk::is_set(txoversizepkts.yfilter)
	|| ydk::is_set(overrun.yfilter)
	|| ydk::is_set(underrun.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(watchdog.yfilter)
	|| ydk::is_set(ifdowndrop.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEtherStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropevents.is_set || is_set(dropevents.yfilter)) leaf_name_data.push_back(dropevents.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (undersizepkts.is_set || is_set(undersizepkts.yfilter)) leaf_name_data.push_back(undersizepkts.get_name_leafdata());
    if (giantpkts.is_set || is_set(giantpkts.yfilter)) leaf_name_data.push_back(giantpkts.get_name_leafdata());
    if (stormsupressedpkts.is_set || is_set(stormsupressedpkts.yfilter)) leaf_name_data.push_back(stormsupressedpkts.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (pkts64octets.is_set || is_set(pkts64octets.yfilter)) leaf_name_data.push_back(pkts64octets.get_name_leafdata());
    if (pkts65to127octets.is_set || is_set(pkts65to127octets.yfilter)) leaf_name_data.push_back(pkts65to127octets.get_name_leafdata());
    if (pkts128to255octets.is_set || is_set(pkts128to255octets.yfilter)) leaf_name_data.push_back(pkts128to255octets.get_name_leafdata());
    if (pkts256to511octets.is_set || is_set(pkts256to511octets.yfilter)) leaf_name_data.push_back(pkts256to511octets.get_name_leafdata());
    if (pkts512to1023octets.is_set || is_set(pkts512to1023octets.yfilter)) leaf_name_data.push_back(pkts512to1023octets.get_name_leafdata());
    if (pkts1024to1518octets.is_set || is_set(pkts1024to1518octets.yfilter)) leaf_name_data.push_back(pkts1024to1518octets.get_name_leafdata());
    if (pkts1519to1548octets.is_set || is_set(pkts1519to1548octets.yfilter)) leaf_name_data.push_back(pkts1519to1548octets.get_name_leafdata());
    if (rxpkts64octets.is_set || is_set(rxpkts64octets.yfilter)) leaf_name_data.push_back(rxpkts64octets.get_name_leafdata());
    if (txpkts64octets.is_set || is_set(txpkts64octets.yfilter)) leaf_name_data.push_back(txpkts64octets.get_name_leafdata());
    if (rxpkts65to127octets.is_set || is_set(rxpkts65to127octets.yfilter)) leaf_name_data.push_back(rxpkts65to127octets.get_name_leafdata());
    if (txpkts65to127octets.is_set || is_set(txpkts65to127octets.yfilter)) leaf_name_data.push_back(txpkts65to127octets.get_name_leafdata());
    if (rxpkts128to255octets.is_set || is_set(rxpkts128to255octets.yfilter)) leaf_name_data.push_back(rxpkts128to255octets.get_name_leafdata());
    if (txpkts128to255octets.is_set || is_set(txpkts128to255octets.yfilter)) leaf_name_data.push_back(txpkts128to255octets.get_name_leafdata());
    if (rxpkts256to511octets.is_set || is_set(rxpkts256to511octets.yfilter)) leaf_name_data.push_back(rxpkts256to511octets.get_name_leafdata());
    if (txpkts256to511octets.is_set || is_set(txpkts256to511octets.yfilter)) leaf_name_data.push_back(txpkts256to511octets.get_name_leafdata());
    if (rxpkts512to1023octets.is_set || is_set(rxpkts512to1023octets.yfilter)) leaf_name_data.push_back(rxpkts512to1023octets.get_name_leafdata());
    if (txpkts512to1023octets.is_set || is_set(txpkts512to1023octets.yfilter)) leaf_name_data.push_back(txpkts512to1023octets.get_name_leafdata());
    if (rxpkts1024to1518octets.is_set || is_set(rxpkts1024to1518octets.yfilter)) leaf_name_data.push_back(rxpkts1024to1518octets.get_name_leafdata());
    if (txpkts1024to1518octets.is_set || is_set(txpkts1024to1518octets.yfilter)) leaf_name_data.push_back(txpkts1024to1518octets.get_name_leafdata());
    if (rxpkts1519to1548octets.is_set || is_set(rxpkts1519to1548octets.yfilter)) leaf_name_data.push_back(rxpkts1519to1548octets.get_name_leafdata());
    if (txpkts1519to1548octets.is_set || is_set(txpkts1519to1548octets.yfilter)) leaf_name_data.push_back(txpkts1519to1548octets.get_name_leafdata());
    if (oversizepkts.is_set || is_set(oversizepkts.yfilter)) leaf_name_data.push_back(oversizepkts.get_name_leafdata());
    if (jabbers.is_set || is_set(jabbers.yfilter)) leaf_name_data.push_back(jabbers.get_name_leafdata());
    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (pkts.is_set || is_set(pkts.yfilter)) leaf_name_data.push_back(pkts.get_name_leafdata());
    if (collisions.is_set || is_set(collisions.yfilter)) leaf_name_data.push_back(collisions.get_name_leafdata());
    if (crcalignerrors.is_set || is_set(crcalignerrors.yfilter)) leaf_name_data.push_back(crcalignerrors.get_name_leafdata());
    if (txnoerrors.is_set || is_set(txnoerrors.yfilter)) leaf_name_data.push_back(txnoerrors.get_name_leafdata());
    if (rxnoerrors.is_set || is_set(rxnoerrors.yfilter)) leaf_name_data.push_back(rxnoerrors.get_name_leafdata());
    if (rxoversizepkts.is_set || is_set(rxoversizepkts.yfilter)) leaf_name_data.push_back(rxoversizepkts.get_name_leafdata());
    if (txoversizepkts.is_set || is_set(txoversizepkts.yfilter)) leaf_name_data.push_back(txoversizepkts.get_name_leafdata());
    if (overrun.is_set || is_set(overrun.yfilter)) leaf_name_data.push_back(overrun.get_name_leafdata());
    if (underrun.is_set || is_set(underrun.yfilter)) leaf_name_data.push_back(underrun.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.yfilter)) leaf_name_data.push_back(watchdog.get_name_leafdata());
    if (ifdowndrop.is_set || is_set(ifdowndrop.yfilter)) leaf_name_data.push_back(ifdowndrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgEtherStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropEvents")
    {
        dropevents = value;
        dropevents.value_namespace = name_space;
        dropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts = value;
        undersizepkts.value_namespace = name_space;
        undersizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giantPkts")
    {
        giantpkts = value;
        giantpkts.value_namespace = name_space;
        giantpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts = value;
        stormsupressedpkts.value_namespace = name_space;
        stormsupressedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets = value;
        pkts64octets.value_namespace = name_space;
        pkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets = value;
        pkts65to127octets.value_namespace = name_space;
        pkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets = value;
        pkts128to255octets.value_namespace = name_space;
        pkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets = value;
        pkts256to511octets.value_namespace = name_space;
        pkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets = value;
        pkts512to1023octets.value_namespace = name_space;
        pkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets = value;
        pkts1024to1518octets.value_namespace = name_space;
        pkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets = value;
        pkts1519to1548octets.value_namespace = name_space;
        pkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets = value;
        rxpkts64octets.value_namespace = name_space;
        rxpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets = value;
        txpkts64octets.value_namespace = name_space;
        txpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets = value;
        rxpkts65to127octets.value_namespace = name_space;
        rxpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets = value;
        txpkts65to127octets.value_namespace = name_space;
        txpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets = value;
        rxpkts128to255octets.value_namespace = name_space;
        rxpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets = value;
        txpkts128to255octets.value_namespace = name_space;
        txpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets = value;
        rxpkts256to511octets.value_namespace = name_space;
        rxpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets = value;
        txpkts256to511octets.value_namespace = name_space;
        txpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets = value;
        rxpkts512to1023octets.value_namespace = name_space;
        rxpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets = value;
        txpkts512to1023octets.value_namespace = name_space;
        txpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets = value;
        rxpkts1024to1518octets.value_namespace = name_space;
        rxpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets = value;
        txpkts1024to1518octets.value_namespace = name_space;
        txpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets = value;
        rxpkts1519to1548octets.value_namespace = name_space;
        rxpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets = value;
        txpkts1519to1548octets.value_namespace = name_space;
        txpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts = value;
        oversizepkts.value_namespace = name_space;
        oversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jabbers")
    {
        jabbers = value;
        jabbers.value_namespace = name_space;
        jabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts")
    {
        pkts = value;
        pkts.value_namespace = name_space;
        pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collisions")
    {
        collisions = value;
        collisions.value_namespace = name_space;
        collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors = value;
        crcalignerrors.value_namespace = name_space;
        crcalignerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors = value;
        txnoerrors.value_namespace = name_space;
        txnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors = value;
        rxnoerrors.value_namespace = name_space;
        rxnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts = value;
        rxoversizepkts.value_namespace = name_space;
        rxoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts = value;
        txoversizepkts.value_namespace = name_space;
        txoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overrun")
    {
        overrun = value;
        overrun.value_namespace = name_space;
        overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underrun")
    {
        underrun = value;
        underrun.value_namespace = name_space;
        underrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
        watchdog.value_namespace = name_space;
        watchdog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop = value;
        ifdowndrop.value_namespace = name_space;
        ifdowndrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgEtherStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropEvents")
    {
        dropevents.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts.yfilter = yfilter;
    }
    if(value_path == "giantPkts")
    {
        giantpkts.yfilter = yfilter;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets.yfilter = yfilter;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets.yfilter = yfilter;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts.yfilter = yfilter;
    }
    if(value_path == "jabbers")
    {
        jabbers.yfilter = yfilter;
    }
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "pkts")
    {
        pkts.yfilter = yfilter;
    }
    if(value_path == "collisions")
    {
        collisions.yfilter = yfilter;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors.yfilter = yfilter;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors.yfilter = yfilter;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors.yfilter = yfilter;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts.yfilter = yfilter;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts.yfilter = yfilter;
    }
    if(value_path == "overrun")
    {
        overrun.yfilter = yfilter;
    }
    if(value_path == "underrun")
    {
        underrun.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "watchdog")
    {
        watchdog.yfilter = yfilter;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgEtherStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropEvents" || name == "multicastPkts" || name == "broadcastPkts" || name == "undersizePkts" || name == "giantPkts" || name == "stormSupressedPkts" || name == "fragments" || name == "pkts64Octets" || name == "pkts65to127Octets" || name == "pkts128to255Octets" || name == "pkts256to511Octets" || name == "pkts512to1023Octets" || name == "pkts1024to1518Octets" || name == "pkts1519to1548Octets" || name == "rxPkts64Octets" || name == "txPkts64Octets" || name == "rxPkts65to127Octets" || name == "txPkts65to127Octets" || name == "rxPkts128to255Octets" || name == "txPkts128to255Octets" || name == "rxPkts256to511Octets" || name == "txPkts256to511Octets" || name == "rxPkts512to1023Octets" || name == "txPkts512to1023Octets" || name == "rxPkts1024to1518Octets" || name == "txPkts1024to1518Octets" || name == "rxPkts1519to1548Octets" || name == "txPkts1519to1548Octets" || name == "oversizePkts" || name == "jabbers" || name == "octets" || name == "pkts" || name == "collisions" || name == "cRCAlignErrors" || name == "tXNoErrors" || name == "rXNoErrors" || name == "rxOversizePkts" || name == "txOversizePkts" || name == "overrun" || name == "underrun" || name == "ignored" || name == "watchdog" || name == "ifdowndrop")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgDot3StatsItems::DbgDot3StatsItems()
    :
    alignmenterrors{YType::uint64, "alignmentErrors"},
    fcserrors{YType::uint64, "fCSErrors"},
    singlecollisionframes{YType::uint64, "singleCollisionFrames"},
    multiplecollisionframes{YType::uint64, "multipleCollisionFrames"},
    sqettesterrors{YType::uint64, "sQETTestErrors"},
    deferredtransmissions{YType::uint64, "deferredTransmissions"},
    latecollisions{YType::uint64, "lateCollisions"},
    excessivecollisions{YType::uint64, "excessiveCollisions"},
    internalmactransmiterrors{YType::uint64, "internalMacTransmitErrors"},
    carriersenseerrors{YType::uint64, "carrierSenseErrors"},
    frametoolongs{YType::uint64, "frameTooLongs"},
    internalmacreceiveerrors{YType::uint64, "internalMacReceiveErrors"},
    symbolerrors{YType::uint64, "symbolErrors"},
    controlinunknownopcodes{YType::uint64, "controlInUnknownOpcodes"},
    inpauseframes{YType::uint64, "inPauseFrames"},
    outpauseframes{YType::uint64, "outPauseFrames"},
    lostcarriererrors{YType::uint64, "lostCarrierErrors"},
    nocarriererrors{YType::uint64, "noCarrierErrors"},
    inputdribble{YType::uint64, "inputdribble"},
    babble{YType::uint64, "babble"},
    runts{YType::uint64, "runts"}
{

    yang_name = "dbgDot3Stats-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgDot3StatsItems::~DbgDot3StatsItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgDot3StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return alignmenterrors.is_set
	|| fcserrors.is_set
	|| singlecollisionframes.is_set
	|| multiplecollisionframes.is_set
	|| sqettesterrors.is_set
	|| deferredtransmissions.is_set
	|| latecollisions.is_set
	|| excessivecollisions.is_set
	|| internalmactransmiterrors.is_set
	|| carriersenseerrors.is_set
	|| frametoolongs.is_set
	|| internalmacreceiveerrors.is_set
	|| symbolerrors.is_set
	|| controlinunknownopcodes.is_set
	|| inpauseframes.is_set
	|| outpauseframes.is_set
	|| lostcarriererrors.is_set
	|| nocarriererrors.is_set
	|| inputdribble.is_set
	|| babble.is_set
	|| runts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgDot3StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alignmenterrors.yfilter)
	|| ydk::is_set(fcserrors.yfilter)
	|| ydk::is_set(singlecollisionframes.yfilter)
	|| ydk::is_set(multiplecollisionframes.yfilter)
	|| ydk::is_set(sqettesterrors.yfilter)
	|| ydk::is_set(deferredtransmissions.yfilter)
	|| ydk::is_set(latecollisions.yfilter)
	|| ydk::is_set(excessivecollisions.yfilter)
	|| ydk::is_set(internalmactransmiterrors.yfilter)
	|| ydk::is_set(carriersenseerrors.yfilter)
	|| ydk::is_set(frametoolongs.yfilter)
	|| ydk::is_set(internalmacreceiveerrors.yfilter)
	|| ydk::is_set(symbolerrors.yfilter)
	|| ydk::is_set(controlinunknownopcodes.yfilter)
	|| ydk::is_set(inpauseframes.yfilter)
	|| ydk::is_set(outpauseframes.yfilter)
	|| ydk::is_set(lostcarriererrors.yfilter)
	|| ydk::is_set(nocarriererrors.yfilter)
	|| ydk::is_set(inputdribble.yfilter)
	|| ydk::is_set(babble.yfilter)
	|| ydk::is_set(runts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot3Stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alignmenterrors.is_set || is_set(alignmenterrors.yfilter)) leaf_name_data.push_back(alignmenterrors.get_name_leafdata());
    if (fcserrors.is_set || is_set(fcserrors.yfilter)) leaf_name_data.push_back(fcserrors.get_name_leafdata());
    if (singlecollisionframes.is_set || is_set(singlecollisionframes.yfilter)) leaf_name_data.push_back(singlecollisionframes.get_name_leafdata());
    if (multiplecollisionframes.is_set || is_set(multiplecollisionframes.yfilter)) leaf_name_data.push_back(multiplecollisionframes.get_name_leafdata());
    if (sqettesterrors.is_set || is_set(sqettesterrors.yfilter)) leaf_name_data.push_back(sqettesterrors.get_name_leafdata());
    if (deferredtransmissions.is_set || is_set(deferredtransmissions.yfilter)) leaf_name_data.push_back(deferredtransmissions.get_name_leafdata());
    if (latecollisions.is_set || is_set(latecollisions.yfilter)) leaf_name_data.push_back(latecollisions.get_name_leafdata());
    if (excessivecollisions.is_set || is_set(excessivecollisions.yfilter)) leaf_name_data.push_back(excessivecollisions.get_name_leafdata());
    if (internalmactransmiterrors.is_set || is_set(internalmactransmiterrors.yfilter)) leaf_name_data.push_back(internalmactransmiterrors.get_name_leafdata());
    if (carriersenseerrors.is_set || is_set(carriersenseerrors.yfilter)) leaf_name_data.push_back(carriersenseerrors.get_name_leafdata());
    if (frametoolongs.is_set || is_set(frametoolongs.yfilter)) leaf_name_data.push_back(frametoolongs.get_name_leafdata());
    if (internalmacreceiveerrors.is_set || is_set(internalmacreceiveerrors.yfilter)) leaf_name_data.push_back(internalmacreceiveerrors.get_name_leafdata());
    if (symbolerrors.is_set || is_set(symbolerrors.yfilter)) leaf_name_data.push_back(symbolerrors.get_name_leafdata());
    if (controlinunknownopcodes.is_set || is_set(controlinunknownopcodes.yfilter)) leaf_name_data.push_back(controlinunknownopcodes.get_name_leafdata());
    if (inpauseframes.is_set || is_set(inpauseframes.yfilter)) leaf_name_data.push_back(inpauseframes.get_name_leafdata());
    if (outpauseframes.is_set || is_set(outpauseframes.yfilter)) leaf_name_data.push_back(outpauseframes.get_name_leafdata());
    if (lostcarriererrors.is_set || is_set(lostcarriererrors.yfilter)) leaf_name_data.push_back(lostcarriererrors.get_name_leafdata());
    if (nocarriererrors.is_set || is_set(nocarriererrors.yfilter)) leaf_name_data.push_back(nocarriererrors.get_name_leafdata());
    if (inputdribble.is_set || is_set(inputdribble.yfilter)) leaf_name_data.push_back(inputdribble.get_name_leafdata());
    if (babble.is_set || is_set(babble.yfilter)) leaf_name_data.push_back(babble.get_name_leafdata());
    if (runts.is_set || is_set(runts.yfilter)) leaf_name_data.push_back(runts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgDot3StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors = value;
        alignmenterrors.value_namespace = name_space;
        alignmenterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors = value;
        fcserrors.value_namespace = name_space;
        fcserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes = value;
        singlecollisionframes.value_namespace = name_space;
        singlecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes = value;
        multiplecollisionframes.value_namespace = name_space;
        multiplecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors = value;
        sqettesterrors.value_namespace = name_space;
        sqettesterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions = value;
        deferredtransmissions.value_namespace = name_space;
        deferredtransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions = value;
        latecollisions.value_namespace = name_space;
        latecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions = value;
        excessivecollisions.value_namespace = name_space;
        excessivecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors = value;
        internalmactransmiterrors.value_namespace = name_space;
        internalmactransmiterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors = value;
        carriersenseerrors.value_namespace = name_space;
        carriersenseerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs = value;
        frametoolongs.value_namespace = name_space;
        frametoolongs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors = value;
        internalmacreceiveerrors.value_namespace = name_space;
        internalmacreceiveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors = value;
        symbolerrors.value_namespace = name_space;
        symbolerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes = value;
        controlinunknownopcodes.value_namespace = name_space;
        controlinunknownopcodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes = value;
        inpauseframes.value_namespace = name_space;
        inpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes = value;
        outpauseframes.value_namespace = name_space;
        outpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors = value;
        lostcarriererrors.value_namespace = name_space;
        lostcarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors = value;
        nocarriererrors.value_namespace = name_space;
        nocarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputdribble")
    {
        inputdribble = value;
        inputdribble.value_namespace = name_space;
        inputdribble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "babble")
    {
        babble = value;
        babble.value_namespace = name_space;
        babble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runts")
    {
        runts = value;
        runts.value_namespace = name_space;
        runts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgDot3StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors.yfilter = yfilter;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors.yfilter = yfilter;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes.yfilter = yfilter;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes.yfilter = yfilter;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors.yfilter = yfilter;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions.yfilter = yfilter;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions.yfilter = yfilter;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions.yfilter = yfilter;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors.yfilter = yfilter;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs.yfilter = yfilter;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors.yfilter = yfilter;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes.yfilter = yfilter;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes.yfilter = yfilter;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes.yfilter = yfilter;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors.yfilter = yfilter;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors.yfilter = yfilter;
    }
    if(value_path == "inputdribble")
    {
        inputdribble.yfilter = yfilter;
    }
    if(value_path == "babble")
    {
        babble.yfilter = yfilter;
    }
    if(value_path == "runts")
    {
        runts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgDot3StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alignmentErrors" || name == "fCSErrors" || name == "singleCollisionFrames" || name == "multipleCollisionFrames" || name == "sQETTestErrors" || name == "deferredTransmissions" || name == "lateCollisions" || name == "excessiveCollisions" || name == "internalMacTransmitErrors" || name == "carrierSenseErrors" || name == "frameTooLongs" || name == "internalMacReceiveErrors" || name == "symbolErrors" || name == "controlInUnknownOpcodes" || name == "inPauseFrames" || name == "outPauseFrames" || name == "lostCarrierErrors" || name == "noCarrierErrors" || name == "inputdribble" || name == "babble" || name == "runts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfHCInItems::DbgIfHCInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCIn-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfHCInItems::~DbgIfHCInItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfHCInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfHCInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgIfHCInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfHCInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfHCInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPkts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfHCOutItems::DbgIfHCOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpckts{YType::uint64, "broadcastPckts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCOut-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfHCOutItems::~DbgIfHCOutItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfHCOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpckts.is_set
	|| broadcastpkts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfHCOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpckts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpckts.is_set || is_set(broadcastpckts.yfilter)) leaf_name_data.push_back(broadcastpckts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgIfHCOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts = value;
        broadcastpckts.value_namespace = name_space;
        broadcastpckts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfHCOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfHCOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPckts" || name == "broadcastPkts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::DbgIpv6IfStatsItems()
    :
    inreceives{YType::uint64, "inReceives"},
    inhdrerrors{YType::uint64, "inHdrErrors"},
    inaddrerrors{YType::uint64, "inAddrErrors"},
    indiscards{YType::uint64, "inDiscards"},
    outforwdatagrams{YType::uint64, "outForwDatagrams"},
    outdiscards{YType::uint64, "outDiscards"},
    inmcastpkts{YType::uint64, "inMcastPkts"},
    outmcastpkts{YType::uint64, "outMcastPkts"}
{

    yang_name = "dbgIpv6IfStats-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::~DbgIpv6IfStatsItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return inreceives.is_set
	|| inhdrerrors.is_set
	|| inaddrerrors.is_set
	|| indiscards.is_set
	|| outforwdatagrams.is_set
	|| outdiscards.is_set
	|| inmcastpkts.is_set
	|| outmcastpkts.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inreceives.yfilter)
	|| ydk::is_set(inhdrerrors.yfilter)
	|| ydk::is_set(inaddrerrors.yfilter)
	|| ydk::is_set(indiscards.yfilter)
	|| ydk::is_set(outforwdatagrams.yfilter)
	|| ydk::is_set(outdiscards.yfilter)
	|| ydk::is_set(inmcastpkts.yfilter)
	|| ydk::is_set(outmcastpkts.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpv6IfStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inreceives.is_set || is_set(inreceives.yfilter)) leaf_name_data.push_back(inreceives.get_name_leafdata());
    if (inhdrerrors.is_set || is_set(inhdrerrors.yfilter)) leaf_name_data.push_back(inhdrerrors.get_name_leafdata());
    if (inaddrerrors.is_set || is_set(inaddrerrors.yfilter)) leaf_name_data.push_back(inaddrerrors.get_name_leafdata());
    if (indiscards.is_set || is_set(indiscards.yfilter)) leaf_name_data.push_back(indiscards.get_name_leafdata());
    if (outforwdatagrams.is_set || is_set(outforwdatagrams.yfilter)) leaf_name_data.push_back(outforwdatagrams.get_name_leafdata());
    if (outdiscards.is_set || is_set(outdiscards.yfilter)) leaf_name_data.push_back(outdiscards.get_name_leafdata());
    if (inmcastpkts.is_set || is_set(inmcastpkts.yfilter)) leaf_name_data.push_back(inmcastpkts.get_name_leafdata());
    if (outmcastpkts.is_set || is_set(outmcastpkts.yfilter)) leaf_name_data.push_back(outmcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inReceives")
    {
        inreceives = value;
        inreceives.value_namespace = name_space;
        inreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors = value;
        inhdrerrors.value_namespace = name_space;
        inhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors = value;
        inaddrerrors.value_namespace = name_space;
        inaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inDiscards")
    {
        indiscards = value;
        indiscards.value_namespace = name_space;
        indiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams = value;
        outforwdatagrams.value_namespace = name_space;
        outforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outDiscards")
    {
        outdiscards = value;
        outdiscards.value_namespace = name_space;
        outdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts = value;
        inmcastpkts.value_namespace = name_space;
        inmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts = value;
        outmcastpkts.value_namespace = name_space;
        outmcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inReceives")
    {
        inreceives.yfilter = yfilter;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors.yfilter = yfilter;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors.yfilter = yfilter;
    }
    if(value_path == "inDiscards")
    {
        indiscards.yfilter = yfilter;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "outDiscards")
    {
        outdiscards.yfilter = yfilter;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts.yfilter = yfilter;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inReceives" || name == "inHdrErrors" || name == "inAddrErrors" || name == "inDiscards" || name == "outForwDatagrams" || name == "outDiscards" || name == "inMcastPkts" || name == "outMcastPkts")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::DbgIfStormItems::DbgIfStormItems()
    :
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIfStorm-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::DbgIfStormItems::~DbgIfStormItems()
{
}

bool System::MgmtItems::MgmtIfList::DbgIfStormItems::has_data() const
{
    if (is_presence_container) return true;
    return dropbytes.is_set;
}

bool System::MgmtItems::MgmtIfList::DbgIfStormItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::MgmtItems::MgmtIfList::DbgIfStormItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfStorm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MgmtItems::MgmtIfList::DbgIfStormItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfStormItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfStormItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::DbgIfStormItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::DbgIfStormItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::DbgIfStormItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropBytes")
        return true;
    return false;
}

System::SnmpItems::SnmpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::SnmpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "snmp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::~SnmpItems()
{
}

bool System::SnmpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::SnmpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::SnmpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SnmpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::SnmpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SnmpItems::InstItems::InstItems()
    :
    engid{YType::str, "engId"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    clgrp_items(std::make_shared<System::SnmpItems::InstItems::ClgrpItems>())
    , globals_items(std::make_shared<System::SnmpItems::InstItems::GlobalsItems>())
    , host_items(std::make_shared<System::SnmpItems::InstItems::HostItems>())
    , rmon_items(std::make_shared<System::SnmpItems::InstItems::RmonItems>())
    , community_items(std::make_shared<System::SnmpItems::InstItems::CommunityItems>())
    , user_items(std::make_shared<System::SnmpItems::InstItems::UserItems>())
    , ctx_items(std::make_shared<System::SnmpItems::InstItems::CtxItems>())
    , sysinfo_items(std::make_shared<System::SnmpItems::InstItems::SysinfoItems>())
    , traps_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems>())
    , rmtuser_items(std::make_shared<System::SnmpItems::InstItems::RmtUserItems>())
    , lcluser_items(std::make_shared<System::SnmpItems::InstItems::LclUserItems>())
{
    clgrp_items->parent = this;
    globals_items->parent = this;
    host_items->parent = this;
    rmon_items->parent = this;
    community_items->parent = this;
    user_items->parent = this;
    ctx_items->parent = this;
    sysinfo_items->parent = this;
    traps_items->parent = this;
    rmtuser_items->parent = this;
    lcluser_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "snmp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::~InstItems()
{
}

bool System::SnmpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return engid.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (clgrp_items !=  nullptr && clgrp_items->has_data())
	|| (globals_items !=  nullptr && globals_items->has_data())
	|| (host_items !=  nullptr && host_items->has_data())
	|| (rmon_items !=  nullptr && rmon_items->has_data())
	|| (community_items !=  nullptr && community_items->has_data())
	|| (user_items !=  nullptr && user_items->has_data())
	|| (ctx_items !=  nullptr && ctx_items->has_data())
	|| (sysinfo_items !=  nullptr && sysinfo_items->has_data())
	|| (traps_items !=  nullptr && traps_items->has_data())
	|| (rmtuser_items !=  nullptr && rmtuser_items->has_data())
	|| (lcluser_items !=  nullptr && lcluser_items->has_data());
}

bool System::SnmpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(engid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (clgrp_items !=  nullptr && clgrp_items->has_operation())
	|| (globals_items !=  nullptr && globals_items->has_operation())
	|| (host_items !=  nullptr && host_items->has_operation())
	|| (rmon_items !=  nullptr && rmon_items->has_operation())
	|| (community_items !=  nullptr && community_items->has_operation())
	|| (user_items !=  nullptr && user_items->has_operation())
	|| (ctx_items !=  nullptr && ctx_items->has_operation())
	|| (sysinfo_items !=  nullptr && sysinfo_items->has_operation())
	|| (traps_items !=  nullptr && traps_items->has_operation())
	|| (rmtuser_items !=  nullptr && rmtuser_items->has_operation())
	|| (lcluser_items !=  nullptr && lcluser_items->has_operation());
}

std::string System::SnmpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (engid.is_set || is_set(engid.yfilter)) leaf_name_data.push_back(engid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clgrp-items")
    {
        if(clgrp_items == nullptr)
        {
            clgrp_items = std::make_shared<System::SnmpItems::InstItems::ClgrpItems>();
        }
        return clgrp_items;
    }

    if(child_yang_name == "globals-items")
    {
        if(globals_items == nullptr)
        {
            globals_items = std::make_shared<System::SnmpItems::InstItems::GlobalsItems>();
        }
        return globals_items;
    }

    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::SnmpItems::InstItems::HostItems>();
        }
        return host_items;
    }

    if(child_yang_name == "rmon-items")
    {
        if(rmon_items == nullptr)
        {
            rmon_items = std::make_shared<System::SnmpItems::InstItems::RmonItems>();
        }
        return rmon_items;
    }

    if(child_yang_name == "community-items")
    {
        if(community_items == nullptr)
        {
            community_items = std::make_shared<System::SnmpItems::InstItems::CommunityItems>();
        }
        return community_items;
    }

    if(child_yang_name == "user-items")
    {
        if(user_items == nullptr)
        {
            user_items = std::make_shared<System::SnmpItems::InstItems::UserItems>();
        }
        return user_items;
    }

    if(child_yang_name == "ctx-items")
    {
        if(ctx_items == nullptr)
        {
            ctx_items = std::make_shared<System::SnmpItems::InstItems::CtxItems>();
        }
        return ctx_items;
    }

    if(child_yang_name == "sysinfo-items")
    {
        if(sysinfo_items == nullptr)
        {
            sysinfo_items = std::make_shared<System::SnmpItems::InstItems::SysinfoItems>();
        }
        return sysinfo_items;
    }

    if(child_yang_name == "traps-items")
    {
        if(traps_items == nullptr)
        {
            traps_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems>();
        }
        return traps_items;
    }

    if(child_yang_name == "rmtUser-items")
    {
        if(rmtuser_items == nullptr)
        {
            rmtuser_items = std::make_shared<System::SnmpItems::InstItems::RmtUserItems>();
        }
        return rmtuser_items;
    }

    if(child_yang_name == "lclUser-items")
    {
        if(lcluser_items == nullptr)
        {
            lcluser_items = std::make_shared<System::SnmpItems::InstItems::LclUserItems>();
        }
        return lcluser_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clgrp_items != nullptr)
    {
        _children["clgrp-items"] = clgrp_items;
    }

    if(globals_items != nullptr)
    {
        _children["globals-items"] = globals_items;
    }

    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    if(rmon_items != nullptr)
    {
        _children["rmon-items"] = rmon_items;
    }

    if(community_items != nullptr)
    {
        _children["community-items"] = community_items;
    }

    if(user_items != nullptr)
    {
        _children["user-items"] = user_items;
    }

    if(ctx_items != nullptr)
    {
        _children["ctx-items"] = ctx_items;
    }

    if(sysinfo_items != nullptr)
    {
        _children["sysinfo-items"] = sysinfo_items;
    }

    if(traps_items != nullptr)
    {
        _children["traps-items"] = traps_items;
    }

    if(rmtuser_items != nullptr)
    {
        _children["rmtUser-items"] = rmtuser_items;
    }

    if(lcluser_items != nullptr)
    {
        _children["lclUser-items"] = lcluser_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "engId")
    {
        engid = value;
        engid.value_namespace = name_space;
        engid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "engId")
    {
        engid.yfilter = yfilter;
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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clgrp-items" || name == "globals-items" || name == "host-items" || name == "rmon-items" || name == "community-items" || name == "user-items" || name == "ctx-items" || name == "sysinfo-items" || name == "traps-items" || name == "rmtUser-items" || name == "lclUser-items" || name == "engId" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClgrpItems()
    :
    clientgrp_list(this, {"name"})
{

    yang_name = "clgrp-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::ClgrpItems::~ClgrpItems()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientgrp_list.len(); index++)
    {
        if(clientgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::ClgrpItems::has_operation() const
{
    for (std::size_t index=0; index<clientgrp_list.len(); index++)
    {
        if(clientgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::ClgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientGrp-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList>();
        ent_->parent = this;
        clientgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clientgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::ClgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::ClgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::ClgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClientGrp-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientGrpList()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"},
    epgdn{YType::str, "epgDn"}
        ,
    client_items(std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems>())
    , rscommsecpclientgrpatt_items(std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems>())
{
    client_items->parent = this;
    rscommsecpclientgrpatt_items->parent = this;

    yang_name = "ClientGrp-list"; yang_parent_name = "clgrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::~ClientGrpList()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrf.is_set
	|| operst.is_set
	|| descr.is_set
	|| epgdn.is_set
	|| (client_items !=  nullptr && client_items->has_data())
	|| (rscommsecpclientgrpatt_items !=  nullptr && rscommsecpclientgrpatt_items->has_data());
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (rscommsecpclientgrpatt_items !=  nullptr && rscommsecpclientgrpatt_items->has_operation());
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/clgrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClientGrp-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "rscommSecPClientGrpAtt-items")
    {
        if(rscommsecpclientgrpatt_items == nullptr)
        {
            rscommsecpclientgrpatt_items = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems>();
        }
        return rscommsecpclientgrpatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_items != nullptr)
    {
        _children["client-items"] = client_items;
    }

    if(rscommsecpclientgrpatt_items != nullptr)
    {
        _children["rscommSecPClientGrpAtt-items"] = rscommsecpclientgrpatt_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
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
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-items" || name == "rscommSecPClientGrpAtt-items" || name == "name" || name == "vrf" || name == "operSt" || name == "descr" || name == "epgDn")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientItems()
    :
    client_list(this, {"addr"})
{

    yang_name = "client-items"; yang_parent_name = "ClientGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::~ClientItems()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_list.len(); index++)
    {
        if(client_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::has_operation() const
{
    for (std::size_t index=0; index<client_list.len(); index++)
    {
        if(client_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Client-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList>();
        ent_->parent = this;
        client_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_children() const
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

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Client-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::ClientList()
    :
    addr{YType::str, "addr"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
{

    yang_name = "Client-list"; yang_parent_name = "client-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::~ClientList()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| operst.is_set
	|| name.is_set;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Client-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RscommSecPClientGrpAttItems()
    :
    rscommsecpclientgrpatt_list(this, {"tdn"})
{

    yang_name = "rscommSecPClientGrpAtt-items"; yang_parent_name = "ClientGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::~RscommSecPClientGrpAttItems()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rscommsecpclientgrpatt_list.len(); index++)
    {
        if(rscommsecpclientgrpatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rscommsecpclientgrpatt_list.len(); index++)
    {
        if(rscommsecpclientgrpatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscommSecPClientGrpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCommSecPClientGrpAtt-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList>();
        ent_->parent = this;
        rscommsecpclientgrpatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rscommsecpclientgrpatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCommSecPClientGrpAtt-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::RsCommSecPClientGrpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsCommSecPClientGrpAtt-list"; yang_parent_name = "rscommSecPClientGrpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::~RsCommSecPClientGrpAttList()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCommSecPClientGrpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SnmpItems::InstItems::GlobalsItems::GlobalsItems()
    :
    aaausercachetimeout{YType::uint32, "aaaUserCacheTimeout"},
    protocolenable{YType::enumeration, "protocolEnable"},
    countercacheenable{YType::enumeration, "counterCacheEnable"},
    countercachetimeout{YType::uint16, "counterCacheTimeout"},
    pktsize{YType::uint16, "pktSize"},
    tcpsessionauth{YType::enumeration, "tcpSessionAuth"}
        ,
    srcinterfacetraps_items(std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems>())
    , srcinterfaceinforms_items(std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems>())
{
    srcinterfacetraps_items->parent = this;
    srcinterfaceinforms_items->parent = this;

    yang_name = "globals-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::GlobalsItems::~GlobalsItems()
{
}

bool System::SnmpItems::InstItems::GlobalsItems::has_data() const
{
    if (is_presence_container) return true;
    return aaausercachetimeout.is_set
	|| protocolenable.is_set
	|| countercacheenable.is_set
	|| countercachetimeout.is_set
	|| pktsize.is_set
	|| tcpsessionauth.is_set
	|| (srcinterfacetraps_items !=  nullptr && srcinterfacetraps_items->has_data())
	|| (srcinterfaceinforms_items !=  nullptr && srcinterfaceinforms_items->has_data());
}

bool System::SnmpItems::InstItems::GlobalsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaausercachetimeout.yfilter)
	|| ydk::is_set(protocolenable.yfilter)
	|| ydk::is_set(countercacheenable.yfilter)
	|| ydk::is_set(countercachetimeout.yfilter)
	|| ydk::is_set(pktsize.yfilter)
	|| ydk::is_set(tcpsessionauth.yfilter)
	|| (srcinterfacetraps_items !=  nullptr && srcinterfacetraps_items->has_operation())
	|| (srcinterfaceinforms_items !=  nullptr && srcinterfaceinforms_items->has_operation());
}

std::string System::SnmpItems::InstItems::GlobalsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::GlobalsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globals-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::GlobalsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaausercachetimeout.is_set || is_set(aaausercachetimeout.yfilter)) leaf_name_data.push_back(aaausercachetimeout.get_name_leafdata());
    if (protocolenable.is_set || is_set(protocolenable.yfilter)) leaf_name_data.push_back(protocolenable.get_name_leafdata());
    if (countercacheenable.is_set || is_set(countercacheenable.yfilter)) leaf_name_data.push_back(countercacheenable.get_name_leafdata());
    if (countercachetimeout.is_set || is_set(countercachetimeout.yfilter)) leaf_name_data.push_back(countercachetimeout.get_name_leafdata());
    if (pktsize.is_set || is_set(pktsize.yfilter)) leaf_name_data.push_back(pktsize.get_name_leafdata());
    if (tcpsessionauth.is_set || is_set(tcpsessionauth.yfilter)) leaf_name_data.push_back(tcpsessionauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::GlobalsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srcInterfaceTraps-items")
    {
        if(srcinterfacetraps_items == nullptr)
        {
            srcinterfacetraps_items = std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems>();
        }
        return srcinterfacetraps_items;
    }

    if(child_yang_name == "srcInterfaceInforms-items")
    {
        if(srcinterfaceinforms_items == nullptr)
        {
            srcinterfaceinforms_items = std::make_shared<System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems>();
        }
        return srcinterfaceinforms_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::GlobalsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srcinterfacetraps_items != nullptr)
    {
        _children["srcInterfaceTraps-items"] = srcinterfacetraps_items;
    }

    if(srcinterfaceinforms_items != nullptr)
    {
        _children["srcInterfaceInforms-items"] = srcinterfaceinforms_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::GlobalsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaaUserCacheTimeout")
    {
        aaausercachetimeout = value;
        aaausercachetimeout.value_namespace = name_space;
        aaausercachetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolEnable")
    {
        protocolenable = value;
        protocolenable.value_namespace = name_space;
        protocolenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counterCacheEnable")
    {
        countercacheenable = value;
        countercacheenable.value_namespace = name_space;
        countercacheenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counterCacheTimeout")
    {
        countercachetimeout = value;
        countercachetimeout.value_namespace = name_space;
        countercachetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSize")
    {
        pktsize = value;
        pktsize.value_namespace = name_space;
        pktsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpSessionAuth")
    {
        tcpsessionauth = value;
        tcpsessionauth.value_namespace = name_space;
        tcpsessionauth.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::GlobalsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaaUserCacheTimeout")
    {
        aaausercachetimeout.yfilter = yfilter;
    }
    if(value_path == "protocolEnable")
    {
        protocolenable.yfilter = yfilter;
    }
    if(value_path == "counterCacheEnable")
    {
        countercacheenable.yfilter = yfilter;
    }
    if(value_path == "counterCacheTimeout")
    {
        countercachetimeout.yfilter = yfilter;
    }
    if(value_path == "pktSize")
    {
        pktsize.yfilter = yfilter;
    }
    if(value_path == "tcpSessionAuth")
    {
        tcpsessionauth.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::GlobalsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcInterfaceTraps-items" || name == "srcInterfaceInforms-items" || name == "aaaUserCacheTimeout" || name == "protocolEnable" || name == "counterCacheEnable" || name == "counterCacheTimeout" || name == "pktSize" || name == "tcpSessionAuth")
        return true;
    return false;
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::SrcInterfaceTrapsItems()
    :
    ifname{YType::str, "ifname"}
{

    yang_name = "srcInterfaceTraps-items"; yang_parent_name = "globals-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::~SrcInterfaceTrapsItems()
{
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set;
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter);
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/globals-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcInterfaceTraps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifname")
        return true;
    return false;
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::SrcInterfaceInformsItems()
    :
    ifname{YType::str, "ifname"}
{

    yang_name = "srcInterfaceInforms-items"; yang_parent_name = "globals-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::~SrcInterfaceInformsItems()
{
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set;
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter);
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/globals-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcInterfaceInforms-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifname")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostItems()
    :
    host_list(this, {"hostname", "udpportid"})
{

    yang_name = "host-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::HostItems::~HostItems()
{
}

bool System::SnmpItems::InstItems::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::HostItems::has_operation() const
{
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Host-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList>();
        ent_->parent = this;
        host_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Host-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::HostList()
    :
    hostname{YType::str, "hostName"},
    udpportid{YType::uint32, "udpPortID"},
    commname{YType::str, "commName"},
    notiftype{YType::enumeration, "notifType"},
    version{YType::enumeration, "version"},
    seclevel{YType::enumeration, "secLevel"}
        ,
    usevrf_items(std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems>())
{
    usevrf_items->parent = this;

    yang_name = "Host-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::HostItems::HostList::~HostList()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| udpportid.is_set
	|| commname.is_set
	|| notiftype.is_set
	|| version.is_set
	|| seclevel.is_set
	|| (usevrf_items !=  nullptr && usevrf_items->has_data());
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(udpportid.yfilter)
	|| ydk::is_set(commname.yfilter)
	|| ydk::is_set(notiftype.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(seclevel.yfilter)
	|| (usevrf_items !=  nullptr && usevrf_items->has_operation());
}

std::string System::SnmpItems::InstItems::HostItems::HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/host-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::HostItems::HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Host-list";
    ADD_KEY_TOKEN(hostname, "hostName");
    ADD_KEY_TOKEN(udpportid, "udpPortID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (udpportid.is_set || is_set(udpportid.yfilter)) leaf_name_data.push_back(udpportid.get_name_leafdata());
    if (commname.is_set || is_set(commname.yfilter)) leaf_name_data.push_back(commname.get_name_leafdata());
    if (notiftype.is_set || is_set(notiftype.yfilter)) leaf_name_data.push_back(notiftype.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (seclevel.is_set || is_set(seclevel.yfilter)) leaf_name_data.push_back(seclevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usevrf-items")
    {
        if(usevrf_items == nullptr)
        {
            usevrf_items = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems>();
        }
        return usevrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(usevrf_items != nullptr)
    {
        _children["usevrf-items"] = usevrf_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::HostItems::HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostName")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpPortID")
    {
        udpportid = value;
        udpportid.value_namespace = name_space;
        udpportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commName")
    {
        commname = value;
        commname.value_namespace = name_space;
        commname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifType")
    {
        notiftype = value;
        notiftype.value_namespace = name_space;
        notiftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secLevel")
    {
        seclevel = value;
        seclevel.value_namespace = name_space;
        seclevel.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::HostItems::HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostName")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "udpPortID")
    {
        udpportid.yfilter = yfilter;
    }
    if(value_path == "commName")
    {
        commname.yfilter = yfilter;
    }
    if(value_path == "notifType")
    {
        notiftype.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "secLevel")
    {
        seclevel.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usevrf-items" || name == "hostName" || name == "udpPortID" || name == "commName" || name == "notifType" || name == "version" || name == "secLevel")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UsevrfItems()
    :
    usevrf_list(this, {"vrfname"})
{

    yang_name = "usevrf-items"; yang_parent_name = "Host-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::~UsevrfItems()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usevrf_list.len(); index++)
    {
        if(usevrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::has_operation() const
{
    for (std::size_t index=0; index<usevrf_list.len(); index++)
    {
        if(usevrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usevrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UseVrf-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList>();
        ent_->parent = this;
        usevrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usevrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UseVrf-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::UseVrfList()
    :
    vrfname{YType::str, "vrfname"}
{

    yang_name = "UseVrf-list"; yang_parent_name = "usevrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::~UseVrfList()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set;
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UseVrf-list";
    ADD_KEY_TOKEN(vrfname, "vrfname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfname")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfname")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfname")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::RmonItems()
    :
    event_items(std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems>())
    , alarm_items(std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems>())
{
    event_items->parent = this;
    alarm_items->parent = this;

    yang_name = "rmon-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::~RmonItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::has_data() const
{
    if (is_presence_container) return true;
    return (event_items !=  nullptr && event_items->has_data())
	|| (alarm_items !=  nullptr && alarm_items->has_data());
}

bool System::SnmpItems::InstItems::RmonItems::has_operation() const
{
    return is_set(yfilter)
	|| (event_items !=  nullptr && event_items->has_operation())
	|| (alarm_items !=  nullptr && alarm_items->has_operation());
}

std::string System::SnmpItems::InstItems::RmonItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-items")
    {
        if(event_items == nullptr)
        {
            event_items = std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems>();
        }
        return event_items;
    }

    if(child_yang_name == "alarm-items")
    {
        if(alarm_items == nullptr)
        {
            alarm_items = std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems>();
        }
        return alarm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_items != nullptr)
    {
        _children["event-items"] = event_items;
    }

    if(alarm_items != nullptr)
    {
        _children["alarm-items"] = alarm_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::RmonItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmonItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmonItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-items" || name == "alarm-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::EventItems::EventItems()
    :
    event_list(this, {"num"})
{

    yang_name = "event-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::EventItems::~EventItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_list.len(); index++)
    {
        if(event_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::has_operation() const
{
    for (std::size_t index=0; index<event_list.len(); index++)
    {
        if(event_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::EventItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::EventItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Event-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems::EventList>();
        ent_->parent = this;
        event_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::EventItems::get_children() const
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

void System::SnmpItems::InstItems::RmonItems::EventItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmonItems::EventItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Event-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::EventItems::EventList::EventList()
    :
    num{YType::uint16, "num"},
    log{YType::enumeration, "log"},
    owner{YType::str, "owner"},
    description{YType::str, "description"},
    trap{YType::str, "trap"}
{

    yang_name = "Event-list"; yang_parent_name = "event-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::EventItems::EventList::~EventList()
{
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::EventList::has_data() const
{
    if (is_presence_container) return true;
    return num.is_set
	|| log.is_set
	|| owner.is_set
	|| description.is_set
	|| trap.is_set;
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::EventList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/event-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Event-list";
    ADD_KEY_TOKEN(num, "num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::RmonItems::EventItems::EventList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::RmonItems::EventItems::EventList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::RmonItems::EventItems::EventList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num" || name == "log" || name == "owner" || name == "description" || name == "trap")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmItems()
    :
    alarm_list(this, {"num"})
{

    yang_name = "alarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::~AlarmItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_list.len(); index++)
    {
        if(alarm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::has_operation() const
{
    for (std::size_t index=0; index<alarm_list.len(); index++)
    {
        if(alarm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::AlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::AlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Alarm-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList>();
        ent_->parent = this;
        alarm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::AlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alarm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Alarm-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::AlarmList()
    :
    num{YType::uint16, "num"},
    oid{YType::str, "oid"},
    sampleinterval{YType::uint32, "sampleInterval"},
    sampletype{YType::enumeration, "sampleType"},
    risingthr{YType::int32, "risingThr"},
    risingevntindx{YType::uint16, "risingEvntIndx"},
    fallingthr{YType::int32, "fallingThr"},
    fallingevntindx{YType::uint16, "fallingEvntIndx"},
    owner{YType::str, "owner"}
{

    yang_name = "Alarm-list"; yang_parent_name = "alarm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::~AlarmList()
{
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::has_data() const
{
    if (is_presence_container) return true;
    return num.is_set
	|| oid.is_set
	|| sampleinterval.is_set
	|| sampletype.is_set
	|| risingthr.is_set
	|| risingevntindx.is_set
	|| fallingthr.is_set
	|| fallingevntindx.is_set
	|| owner.is_set;
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num.yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(sampleinterval.yfilter)
	|| ydk::is_set(sampletype.yfilter)
	|| ydk::is_set(risingthr.yfilter)
	|| ydk::is_set(risingevntindx.yfilter)
	|| ydk::is_set(fallingthr.yfilter)
	|| ydk::is_set(fallingevntindx.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/alarm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Alarm-list";
    ADD_KEY_TOKEN(num, "num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());
    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (sampleinterval.is_set || is_set(sampleinterval.yfilter)) leaf_name_data.push_back(sampleinterval.get_name_leafdata());
    if (sampletype.is_set || is_set(sampletype.yfilter)) leaf_name_data.push_back(sampletype.get_name_leafdata());
    if (risingthr.is_set || is_set(risingthr.yfilter)) leaf_name_data.push_back(risingthr.get_name_leafdata());
    if (risingevntindx.is_set || is_set(risingevntindx.yfilter)) leaf_name_data.push_back(risingevntindx.get_name_leafdata());
    if (fallingthr.is_set || is_set(fallingthr.yfilter)) leaf_name_data.push_back(fallingthr.get_name_leafdata());
    if (fallingevntindx.is_set || is_set(fallingevntindx.yfilter)) leaf_name_data.push_back(fallingevntindx.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampleInterval")
    {
        sampleinterval = value;
        sampleinterval.value_namespace = name_space;
        sampleinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampleType")
    {
        sampletype = value;
        sampletype.value_namespace = name_space;
        sampletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "risingThr")
    {
        risingthr = value;
        risingthr.value_namespace = name_space;
        risingthr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "risingEvntIndx")
    {
        risingevntindx = value;
        risingevntindx.value_namespace = name_space;
        risingevntindx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallingThr")
    {
        fallingthr = value;
        fallingthr.value_namespace = name_space;
        fallingthr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallingEvntIndx")
    {
        fallingevntindx = value;
        fallingevntindx.value_namespace = name_space;
        fallingevntindx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "sampleInterval")
    {
        sampleinterval.yfilter = yfilter;
    }
    if(value_path == "sampleType")
    {
        sampletype.yfilter = yfilter;
    }
    if(value_path == "risingThr")
    {
        risingthr.yfilter = yfilter;
    }
    if(value_path == "risingEvntIndx")
    {
        risingevntindx.yfilter = yfilter;
    }
    if(value_path == "fallingThr")
    {
        fallingthr.yfilter = yfilter;
    }
    if(value_path == "fallingEvntIndx")
    {
        fallingevntindx.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num" || name == "oid" || name == "sampleInterval" || name == "sampleType" || name == "risingThr" || name == "risingEvntIndx" || name == "fallingThr" || name == "fallingEvntIndx" || name == "owner")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommunityItems()
    :
    commsecp_list(this, {"name"})
{

    yang_name = "community-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CommunityItems::~CommunityItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<commsecp_list.len(); index++)
    {
        if(commsecp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::CommunityItems::has_operation() const
{
    for (std::size_t index=0; index<commsecp_list.len(); index++)
    {
        if(commsecp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CommunityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CommSecP-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList>();
        ent_->parent = this;
        commsecp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : commsecp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::CommunityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::CommunityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::CommunityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CommSecP-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::CommSecPList()
    :
    name{YType::str, "name"},
    grpname{YType::str, "grpName"},
    commacess{YType::enumeration, "commAcess"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"}
        ,
    acl_items(std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems>())
    , rscommtoctxatt_items(std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems>())
{
    acl_items->parent = this;
    rscommtoctxatt_items->parent = this;

    yang_name = "CommSecP-list"; yang_parent_name = "community-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::~CommSecPList()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| grpname.is_set
	|| commacess.is_set
	|| operst.is_set
	|| descr.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (rscommtoctxatt_items !=  nullptr && rscommtoctxatt_items->has_data());
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(grpname.yfilter)
	|| ydk::is_set(commacess.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (rscommtoctxatt_items !=  nullptr && rscommtoctxatt_items->has_operation());
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/community-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CommSecP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (grpname.is_set || is_set(grpname.yfilter)) leaf_name_data.push_back(grpname.get_name_leafdata());
    if (commacess.is_set || is_set(commacess.yfilter)) leaf_name_data.push_back(commacess.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "rscommToCtxAtt-items")
    {
        if(rscommtoctxatt_items == nullptr)
        {
            rscommtoctxatt_items = std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems>();
        }
        return rscommtoctxatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(rscommtoctxatt_items != nullptr)
    {
        _children["rscommToCtxAtt-items"] = rscommtoctxatt_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpName")
    {
        grpname = value;
        grpname.value_namespace = name_space;
        grpname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commAcess")
    {
        commacess = value;
        commacess.value_namespace = name_space;
        commacess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "grpName")
    {
        grpname.yfilter = yfilter;
    }
    if(value_path == "commAcess")
    {
        commacess.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "rscommToCtxAtt-items" || name == "name" || name == "grpName" || name == "commAcess" || name == "operSt" || name == "descr")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::AclItems()
    :
    useaclname{YType::str, "useAclName"},
    useipv4aclname{YType::str, "useIpv4AclName"},
    useipv6aclname{YType::str, "useIpv6AclName"}
{

    yang_name = "acl-items"; yang_parent_name = "CommSecP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::~AclItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    return useaclname.is_set
	|| useipv4aclname.is_set
	|| useipv6aclname.is_set;
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(useaclname.yfilter)
	|| ydk::is_set(useipv4aclname.yfilter)
	|| ydk::is_set(useipv6aclname.yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (useaclname.is_set || is_set(useaclname.yfilter)) leaf_name_data.push_back(useaclname.get_name_leafdata());
    if (useipv4aclname.is_set || is_set(useipv4aclname.yfilter)) leaf_name_data.push_back(useipv4aclname.get_name_leafdata());
    if (useipv6aclname.is_set || is_set(useipv6aclname.yfilter)) leaf_name_data.push_back(useipv6aclname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "useAclName")
    {
        useaclname = value;
        useaclname.value_namespace = name_space;
        useaclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useIpv4AclName")
    {
        useipv4aclname = value;
        useipv4aclname.value_namespace = name_space;
        useipv4aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useIpv6AclName")
    {
        useipv6aclname = value;
        useipv6aclname.value_namespace = name_space;
        useipv6aclname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "useAclName")
    {
        useaclname.yfilter = yfilter;
    }
    if(value_path == "useIpv4AclName")
    {
        useipv4aclname.yfilter = yfilter;
    }
    if(value_path == "useIpv6AclName")
    {
        useipv6aclname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "useAclName" || name == "useIpv4AclName" || name == "useIpv6AclName")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::RscommToCtxAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"}
{

    yang_name = "rscommToCtxAtt-items"; yang_parent_name = "CommSecP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::~RscommToCtxAttItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscommToCtxAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
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

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::SnmpItems::InstItems::UserItems::UserItems()
    :
    usersecp_list(this, {"name"})
{

    yang_name = "user-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::UserItems::~UserItems()
{
}

bool System::SnmpItems::InstItems::UserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usersecp_list.len(); index++)
    {
        if(usersecp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::UserItems::has_operation() const
{
    for (std::size_t index=0; index<usersecp_list.len(); index++)
    {
        if(usersecp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::UserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::UserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::UserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::UserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserSecP-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::UserItems::UserSecPList>();
        ent_->parent = this;
        usersecp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::UserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usersecp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::UserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::UserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::UserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserSecP-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::UserItems::UserSecPList::UserSecPList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"},
    authtype{YType::enumeration, "authType"},
    authkey{YType::str, "authKey"},
    privtype{YType::enumeration, "privType"},
    privkey{YType::str, "privKey"}
{

    yang_name = "UserSecP-list"; yang_parent_name = "user-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::UserItems::UserSecPList::~UserSecPList()
{
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| descr.is_set
	|| authtype.is_set
	|| authkey.is_set
	|| privtype.is_set
	|| privkey.is_set;
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(privkey.yfilter);
}

std::string System::SnmpItems::InstItems::UserItems::UserSecPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/user-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::UserItems::UserSecPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserSecP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::UserItems::UserSecPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (privkey.is_set || is_set(privkey.yfilter)) leaf_name_data.push_back(privkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::UserItems::UserSecPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::UserItems::UserSecPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::UserItems::UserSecPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privType")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privKey")
    {
        privkey = value;
        privkey.value_namespace = name_space;
        privkey.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::UserItems::UserSecPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "privType")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "privKey")
    {
        privkey.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "operSt" || name == "descr" || name == "authType" || name == "authKey" || name == "privType" || name == "privKey")
        return true;
    return false;
}

System::SnmpItems::InstItems::CtxItems::CtxItems()
    :
    ctx_list(this, {"name"})
{

    yang_name = "ctx-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CtxItems::~CtxItems()
{
}

bool System::SnmpItems::InstItems::CtxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::CtxItems::has_operation() const
{
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::CtxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CtxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CtxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CtxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ctx-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::CtxItems::CtxList>();
        ent_->parent = this;
        ctx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CtxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ctx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::CtxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::CtxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::CtxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ctx-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::CtxItems::CtxList::CtxList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"}
{

    yang_name = "Ctx-list"; yang_parent_name = "ctx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CtxItems::CtxList::~CtxList()
{
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| descr.is_set;
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SnmpItems::InstItems::CtxItems::CtxList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/ctx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CtxItems::CtxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ctx-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CtxItems::CtxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CtxItems::CtxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CtxItems::CtxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::CtxItems::CtxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CtxItems::CtxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "operSt" || name == "descr")
        return true;
    return false;
}

System::SnmpItems::InstItems::SysinfoItems::SysinfoItems()
    :
    syslocation{YType::str, "sysLocation"},
    syscontact{YType::str, "sysContact"},
    sysdescription{YType::str, "sysDescription"}
{

    yang_name = "sysinfo-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::SysinfoItems::~SysinfoItems()
{
}

bool System::SnmpItems::InstItems::SysinfoItems::has_data() const
{
    if (is_presence_container) return true;
    return syslocation.is_set
	|| syscontact.is_set
	|| sysdescription.is_set;
}

bool System::SnmpItems::InstItems::SysinfoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(syslocation.yfilter)
	|| ydk::is_set(syscontact.yfilter)
	|| ydk::is_set(sysdescription.yfilter);
}

std::string System::SnmpItems::InstItems::SysinfoItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::SysinfoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysinfo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::SysinfoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslocation.is_set || is_set(syslocation.yfilter)) leaf_name_data.push_back(syslocation.get_name_leafdata());
    if (syscontact.is_set || is_set(syscontact.yfilter)) leaf_name_data.push_back(syscontact.get_name_leafdata());
    if (sysdescription.is_set || is_set(sysdescription.yfilter)) leaf_name_data.push_back(sysdescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::SysinfoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::SysinfoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::SysinfoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysLocation")
    {
        syslocation = value;
        syslocation.value_namespace = name_space;
        syslocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysContact")
    {
        syscontact = value;
        syscontact.value_namespace = name_space;
        syscontact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDescription")
    {
        sysdescription = value;
        sysdescription.value_namespace = name_space;
        sysdescription.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::SysinfoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysLocation")
    {
        syslocation.yfilter = yfilter;
    }
    if(value_path == "sysContact")
    {
        syscontact.yfilter = yfilter;
    }
    if(value_path == "sysDescription")
    {
        sysdescription.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::SysinfoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysLocation" || name == "sysContact" || name == "sysDescription")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::TrapsItems()
    :
    stormcontrol_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems>())
    , aaa_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems>())
    , bfd_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems>())
    , bridge_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems>())
    , callhome_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems>())
    , cfs_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems>())
    , config_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems>())
    , entity_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems>())
    , featurecontrol_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems>())
    , hsrp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems>())
    , generic_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems>())
    , ip_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems>())
    , license_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems>())
    , poe_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems>())
    , link_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems>())
    , lldp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems>())
    , msdp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems>())
    , mmode_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems>())
    , pim_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems>())
    , rf_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems>())
    , rmon_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems>())
    , snmp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_>())
    , stpx_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems>())
    , sysmgr_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems>())
    , system_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems>())
    , upgrade_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems>())
    , vsan_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems>())
    , vtp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems>())
    , portsecurity_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems>())
    , mpls_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems>())
{
    stormcontrol_items->parent = this;
    aaa_items->parent = this;
    bfd_items->parent = this;
    bridge_items->parent = this;
    callhome_items->parent = this;
    cfs_items->parent = this;
    config_items->parent = this;
    entity_items->parent = this;
    featurecontrol_items->parent = this;
    hsrp_items->parent = this;
    generic_items->parent = this;
    ip_items->parent = this;
    license_items->parent = this;
    poe_items->parent = this;
    link_items->parent = this;
    lldp_items->parent = this;
    msdp_items->parent = this;
    mmode_items->parent = this;
    pim_items->parent = this;
    rf_items->parent = this;
    rmon_items->parent = this;
    snmp_items->parent = this;
    stpx_items->parent = this;
    sysmgr_items->parent = this;
    system_items->parent = this;
    upgrade_items->parent = this;
    vsan_items->parent = this;
    vtp_items->parent = this;
    portsecurity_items->parent = this;
    mpls_items->parent = this;

    yang_name = "traps-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::~TrapsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::has_data() const
{
    if (is_presence_container) return true;
    return (stormcontrol_items !=  nullptr && stormcontrol_items->has_data())
	|| (aaa_items !=  nullptr && aaa_items->has_data())
	|| (bfd_items !=  nullptr && bfd_items->has_data())
	|| (bridge_items !=  nullptr && bridge_items->has_data())
	|| (callhome_items !=  nullptr && callhome_items->has_data())
	|| (cfs_items !=  nullptr && cfs_items->has_data())
	|| (config_items !=  nullptr && config_items->has_data())
	|| (entity_items !=  nullptr && entity_items->has_data())
	|| (featurecontrol_items !=  nullptr && featurecontrol_items->has_data())
	|| (hsrp_items !=  nullptr && hsrp_items->has_data())
	|| (generic_items !=  nullptr && generic_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (license_items !=  nullptr && license_items->has_data())
	|| (poe_items !=  nullptr && poe_items->has_data())
	|| (link_items !=  nullptr && link_items->has_data())
	|| (lldp_items !=  nullptr && lldp_items->has_data())
	|| (msdp_items !=  nullptr && msdp_items->has_data())
	|| (mmode_items !=  nullptr && mmode_items->has_data())
	|| (pim_items !=  nullptr && pim_items->has_data())
	|| (rf_items !=  nullptr && rf_items->has_data())
	|| (rmon_items !=  nullptr && rmon_items->has_data())
	|| (snmp_items !=  nullptr && snmp_items->has_data())
	|| (stpx_items !=  nullptr && stpx_items->has_data())
	|| (sysmgr_items !=  nullptr && sysmgr_items->has_data())
	|| (system_items !=  nullptr && system_items->has_data())
	|| (upgrade_items !=  nullptr && upgrade_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (vtp_items !=  nullptr && vtp_items->has_data())
	|| (portsecurity_items !=  nullptr && portsecurity_items->has_data())
	|| (mpls_items !=  nullptr && mpls_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::has_operation() const
{
    return is_set(yfilter)
	|| (stormcontrol_items !=  nullptr && stormcontrol_items->has_operation())
	|| (aaa_items !=  nullptr && aaa_items->has_operation())
	|| (bfd_items !=  nullptr && bfd_items->has_operation())
	|| (bridge_items !=  nullptr && bridge_items->has_operation())
	|| (callhome_items !=  nullptr && callhome_items->has_operation())
	|| (cfs_items !=  nullptr && cfs_items->has_operation())
	|| (config_items !=  nullptr && config_items->has_operation())
	|| (entity_items !=  nullptr && entity_items->has_operation())
	|| (featurecontrol_items !=  nullptr && featurecontrol_items->has_operation())
	|| (hsrp_items !=  nullptr && hsrp_items->has_operation())
	|| (generic_items !=  nullptr && generic_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (license_items !=  nullptr && license_items->has_operation())
	|| (poe_items !=  nullptr && poe_items->has_operation())
	|| (link_items !=  nullptr && link_items->has_operation())
	|| (lldp_items !=  nullptr && lldp_items->has_operation())
	|| (msdp_items !=  nullptr && msdp_items->has_operation())
	|| (mmode_items !=  nullptr && mmode_items->has_operation())
	|| (pim_items !=  nullptr && pim_items->has_operation())
	|| (rf_items !=  nullptr && rf_items->has_operation())
	|| (rmon_items !=  nullptr && rmon_items->has_operation())
	|| (snmp_items !=  nullptr && snmp_items->has_operation())
	|| (stpx_items !=  nullptr && stpx_items->has_operation())
	|| (sysmgr_items !=  nullptr && sysmgr_items->has_operation())
	|| (system_items !=  nullptr && system_items->has_operation())
	|| (upgrade_items !=  nullptr && upgrade_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (vtp_items !=  nullptr && vtp_items->has_operation())
	|| (portsecurity_items !=  nullptr && portsecurity_items->has_operation())
	|| (mpls_items !=  nullptr && mpls_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stormcontrol-items")
    {
        if(stormcontrol_items == nullptr)
        {
            stormcontrol_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems>();
        }
        return stormcontrol_items;
    }

    if(child_yang_name == "aaa-items")
    {
        if(aaa_items == nullptr)
        {
            aaa_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems>();
        }
        return aaa_items;
    }

    if(child_yang_name == "bfd-items")
    {
        if(bfd_items == nullptr)
        {
            bfd_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems>();
        }
        return bfd_items;
    }

    if(child_yang_name == "bridge-items")
    {
        if(bridge_items == nullptr)
        {
            bridge_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems>();
        }
        return bridge_items;
    }

    if(child_yang_name == "callhome-items")
    {
        if(callhome_items == nullptr)
        {
            callhome_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems>();
        }
        return callhome_items;
    }

    if(child_yang_name == "cfs-items")
    {
        if(cfs_items == nullptr)
        {
            cfs_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems>();
        }
        return cfs_items;
    }

    if(child_yang_name == "config-items")
    {
        if(config_items == nullptr)
        {
            config_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems>();
        }
        return config_items;
    }

    if(child_yang_name == "entity-items")
    {
        if(entity_items == nullptr)
        {
            entity_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems>();
        }
        return entity_items;
    }

    if(child_yang_name == "featurecontrol-items")
    {
        if(featurecontrol_items == nullptr)
        {
            featurecontrol_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems>();
        }
        return featurecontrol_items;
    }

    if(child_yang_name == "hsrp-items")
    {
        if(hsrp_items == nullptr)
        {
            hsrp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems>();
        }
        return hsrp_items;
    }

    if(child_yang_name == "generic-items")
    {
        if(generic_items == nullptr)
        {
            generic_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems>();
        }
        return generic_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "license-items")
    {
        if(license_items == nullptr)
        {
            license_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems>();
        }
        return license_items;
    }

    if(child_yang_name == "poe-items")
    {
        if(poe_items == nullptr)
        {
            poe_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems>();
        }
        return poe_items;
    }

    if(child_yang_name == "link-items")
    {
        if(link_items == nullptr)
        {
            link_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems>();
        }
        return link_items;
    }

    if(child_yang_name == "lldp-items")
    {
        if(lldp_items == nullptr)
        {
            lldp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems>();
        }
        return lldp_items;
    }

    if(child_yang_name == "msdp-items")
    {
        if(msdp_items == nullptr)
        {
            msdp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems>();
        }
        return msdp_items;
    }

    if(child_yang_name == "mmode-items")
    {
        if(mmode_items == nullptr)
        {
            mmode_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems>();
        }
        return mmode_items;
    }

    if(child_yang_name == "pim-items")
    {
        if(pim_items == nullptr)
        {
            pim_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems>();
        }
        return pim_items;
    }

    if(child_yang_name == "rf-items")
    {
        if(rf_items == nullptr)
        {
            rf_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems>();
        }
        return rf_items;
    }

    if(child_yang_name == "rmon-items")
    {
        if(rmon_items == nullptr)
        {
            rmon_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems>();
        }
        return rmon_items;
    }

    if(child_yang_name == "snmp-items")
    {
        if(snmp_items == nullptr)
        {
            snmp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_>();
        }
        return snmp_items;
    }

    if(child_yang_name == "stpx-items")
    {
        if(stpx_items == nullptr)
        {
            stpx_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems>();
        }
        return stpx_items;
    }

    if(child_yang_name == "sysmgr-items")
    {
        if(sysmgr_items == nullptr)
        {
            sysmgr_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems>();
        }
        return sysmgr_items;
    }

    if(child_yang_name == "system-items")
    {
        if(system_items == nullptr)
        {
            system_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems>();
        }
        return system_items;
    }

    if(child_yang_name == "upgrade-items")
    {
        if(upgrade_items == nullptr)
        {
            upgrade_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems>();
        }
        return upgrade_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "vtp-items")
    {
        if(vtp_items == nullptr)
        {
            vtp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems>();
        }
        return vtp_items;
    }

    if(child_yang_name == "portsecurity-items")
    {
        if(portsecurity_items == nullptr)
        {
            portsecurity_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems>();
        }
        return portsecurity_items;
    }

    if(child_yang_name == "mpls-items")
    {
        if(mpls_items == nullptr)
        {
            mpls_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems>();
        }
        return mpls_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stormcontrol_items != nullptr)
    {
        _children["stormcontrol-items"] = stormcontrol_items;
    }

    if(aaa_items != nullptr)
    {
        _children["aaa-items"] = aaa_items;
    }

    if(bfd_items != nullptr)
    {
        _children["bfd-items"] = bfd_items;
    }

    if(bridge_items != nullptr)
    {
        _children["bridge-items"] = bridge_items;
    }

    if(callhome_items != nullptr)
    {
        _children["callhome-items"] = callhome_items;
    }

    if(cfs_items != nullptr)
    {
        _children["cfs-items"] = cfs_items;
    }

    if(config_items != nullptr)
    {
        _children["config-items"] = config_items;
    }

    if(entity_items != nullptr)
    {
        _children["entity-items"] = entity_items;
    }

    if(featurecontrol_items != nullptr)
    {
        _children["featurecontrol-items"] = featurecontrol_items;
    }

    if(hsrp_items != nullptr)
    {
        _children["hsrp-items"] = hsrp_items;
    }

    if(generic_items != nullptr)
    {
        _children["generic-items"] = generic_items;
    }

    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(license_items != nullptr)
    {
        _children["license-items"] = license_items;
    }

    if(poe_items != nullptr)
    {
        _children["poe-items"] = poe_items;
    }

    if(link_items != nullptr)
    {
        _children["link-items"] = link_items;
    }

    if(lldp_items != nullptr)
    {
        _children["lldp-items"] = lldp_items;
    }

    if(msdp_items != nullptr)
    {
        _children["msdp-items"] = msdp_items;
    }

    if(mmode_items != nullptr)
    {
        _children["mmode-items"] = mmode_items;
    }

    if(pim_items != nullptr)
    {
        _children["pim-items"] = pim_items;
    }

    if(rf_items != nullptr)
    {
        _children["rf-items"] = rf_items;
    }

    if(rmon_items != nullptr)
    {
        _children["rmon-items"] = rmon_items;
    }

    if(snmp_items != nullptr)
    {
        _children["snmp-items"] = snmp_items;
    }

    if(stpx_items != nullptr)
    {
        _children["stpx-items"] = stpx_items;
    }

    if(sysmgr_items != nullptr)
    {
        _children["sysmgr-items"] = sysmgr_items;
    }

    if(system_items != nullptr)
    {
        _children["system-items"] = system_items;
    }

    if(upgrade_items != nullptr)
    {
        _children["upgrade-items"] = upgrade_items;
    }

    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    if(vtp_items != nullptr)
    {
        _children["vtp-items"] = vtp_items;
    }

    if(portsecurity_items != nullptr)
    {
        _children["portsecurity-items"] = portsecurity_items;
    }

    if(mpls_items != nullptr)
    {
        _children["mpls-items"] = mpls_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stormcontrol-items" || name == "aaa-items" || name == "bfd-items" || name == "bridge-items" || name == "callhome-items" || name == "cfs-items" || name == "config-items" || name == "entity-items" || name == "featurecontrol-items" || name == "hsrp-items" || name == "generic-items" || name == "ip-items" || name == "license-items" || name == "poe-items" || name == "link-items" || name == "lldp-items" || name == "msdp-items" || name == "mmode-items" || name == "pim-items" || name == "rf-items" || name == "rmon-items" || name == "snmp-items" || name == "stpx-items" || name == "sysmgr-items" || name == "system-items" || name == "upgrade-items" || name == "vsan-items" || name == "vtp-items" || name == "portsecurity-items" || name == "mpls-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::StormcontrolItems()
    :
    traprate{YType::uint16, "traprate"}
        ,
    cpsceventrev1_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items>())
{
    cpsceventrev1_items->parent = this;

    yang_name = "stormcontrol-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::~StormcontrolItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_data() const
{
    if (is_presence_container) return true;
    return traprate.is_set
	|| (cpsceventrev1_items !=  nullptr && cpsceventrev1_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traprate.yfilter)
	|| (cpsceventrev1_items !=  nullptr && cpsceventrev1_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stormcontrol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traprate.is_set || is_set(traprate.yfilter)) leaf_name_data.push_back(traprate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpscEventRev1-items")
    {
        if(cpsceventrev1_items == nullptr)
        {
            cpsceventrev1_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items>();
        }
        return cpsceventrev1_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpsceventrev1_items != nullptr)
    {
        _children["cpscEventRev1-items"] = cpsceventrev1_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traprate")
    {
        traprate = value;
        traprate.value_namespace = name_space;
        traprate.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traprate")
    {
        traprate.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpscEventRev1-items" || name == "traprate")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::CpscEventRev1Items()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cpscEventRev1-items"; yang_parent_name = "stormcontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::~CpscEventRev1Items()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stormcontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpscEventRev1-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::AaaItems()
    :
    serverstatechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems>())
{
    serverstatechange_items->parent = this;

    yang_name = "aaa-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::~AaaItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_data() const
{
    if (is_presence_container) return true;
    return (serverstatechange_items !=  nullptr && serverstatechange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_operation() const
{
    return is_set(yfilter)
	|| (serverstatechange_items !=  nullptr && serverstatechange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::AaaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::AaaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serverstatechange-items")
    {
        if(serverstatechange_items == nullptr)
        {
            serverstatechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems>();
        }
        return serverstatechange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::AaaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(serverstatechange_items != nullptr)
    {
        _children["serverstatechange-items"] = serverstatechange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serverstatechange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::ServerstatechangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "serverstatechange-items"; yang_parent_name = "aaa-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::~ServerstatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/aaa-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serverstatechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::BfdItems()
    :
    sessiondown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems>())
    , sessionup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems>())
{
    sessiondown_items->parent = this;
    sessionup_items->parent = this;

    yang_name = "bfd-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::~BfdItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_data() const
{
    if (is_presence_container) return true;
    return (sessiondown_items !=  nullptr && sessiondown_items->has_data())
	|| (sessionup_items !=  nullptr && sessionup_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_operation() const
{
    return is_set(yfilter)
	|| (sessiondown_items !=  nullptr && sessiondown_items->has_operation())
	|| (sessionup_items !=  nullptr && sessionup_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessiondown-items")
    {
        if(sessiondown_items == nullptr)
        {
            sessiondown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems>();
        }
        return sessiondown_items;
    }

    if(child_yang_name == "sessionup-items")
    {
        if(sessionup_items == nullptr)
        {
            sessionup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems>();
        }
        return sessionup_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessiondown_items != nullptr)
    {
        _children["sessiondown-items"] = sessiondown_items;
    }

    if(sessionup_items != nullptr)
    {
        _children["sessionup-items"] = sessionup_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessiondown-items" || name == "sessionup-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::SessiondownItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sessiondown-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::~SessiondownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessiondown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::SessionupItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sessionup-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::~SessionupItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessionup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::BridgeItems()
    :
    newroot_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems>())
    , topologychange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems>())
{
    newroot_items->parent = this;
    topologychange_items->parent = this;

    yang_name = "bridge-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::~BridgeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_data() const
{
    if (is_presence_container) return true;
    return (newroot_items !=  nullptr && newroot_items->has_data())
	|| (topologychange_items !=  nullptr && topologychange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_operation() const
{
    return is_set(yfilter)
	|| (newroot_items !=  nullptr && newroot_items->has_operation())
	|| (topologychange_items !=  nullptr && topologychange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "newroot-items")
    {
        if(newroot_items == nullptr)
        {
            newroot_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems>();
        }
        return newroot_items;
    }

    if(child_yang_name == "topologychange-items")
    {
        if(topologychange_items == nullptr)
        {
            topologychange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems>();
        }
        return topologychange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(newroot_items != nullptr)
    {
        _children["newroot-items"] = newroot_items;
    }

    if(topologychange_items != nullptr)
    {
        _children["topologychange-items"] = topologychange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "newroot-items" || name == "topologychange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::NewrootItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "newroot-items"; yang_parent_name = "bridge-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::~NewrootItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bridge-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "newroot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::TopologychangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "topologychange-items"; yang_parent_name = "bridge-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::~TopologychangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bridge-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologychange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::CallhomeItems()
    :
    eventnotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems>())
    , smtpsendfail_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems>())
{
    eventnotify_items->parent = this;
    smtpsendfail_items->parent = this;

    yang_name = "callhome-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::~CallhomeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_data() const
{
    if (is_presence_container) return true;
    return (eventnotify_items !=  nullptr && eventnotify_items->has_data())
	|| (smtpsendfail_items !=  nullptr && smtpsendfail_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_operation() const
{
    return is_set(yfilter)
	|| (eventnotify_items !=  nullptr && eventnotify_items->has_operation())
	|| (smtpsendfail_items !=  nullptr && smtpsendfail_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callhome-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eventnotify-items")
    {
        if(eventnotify_items == nullptr)
        {
            eventnotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems>();
        }
        return eventnotify_items;
    }

    if(child_yang_name == "smtpsendfail-items")
    {
        if(smtpsendfail_items == nullptr)
        {
            smtpsendfail_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems>();
        }
        return smtpsendfail_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eventnotify_items != nullptr)
    {
        _children["eventnotify-items"] = eventnotify_items;
    }

    if(smtpsendfail_items != nullptr)
    {
        _children["smtpsendfail-items"] = smtpsendfail_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventnotify-items" || name == "smtpsendfail-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::EventnotifyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "eventnotify-items"; yang_parent_name = "callhome-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::~EventnotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/callhome-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventnotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::SmtpsendfailItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "smtpsendfail-items"; yang_parent_name = "callhome-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::~SmtpsendfailItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/callhome-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtpsendfail-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::CfsItems()
    :
    statechangenotif_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems>())
    , mergefailure_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems>())
{
    statechangenotif_items->parent = this;
    mergefailure_items->parent = this;

    yang_name = "cfs-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::~CfsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_data() const
{
    if (is_presence_container) return true;
    return (statechangenotif_items !=  nullptr && statechangenotif_items->has_data())
	|| (mergefailure_items !=  nullptr && mergefailure_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_operation() const
{
    return is_set(yfilter)
	|| (statechangenotif_items !=  nullptr && statechangenotif_items->has_operation())
	|| (mergefailure_items !=  nullptr && mergefailure_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statechangenotif-items")
    {
        if(statechangenotif_items == nullptr)
        {
            statechangenotif_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems>();
        }
        return statechangenotif_items;
    }

    if(child_yang_name == "mergefailure-items")
    {
        if(mergefailure_items == nullptr)
        {
            mergefailure_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems>();
        }
        return mergefailure_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statechangenotif_items != nullptr)
    {
        _children["statechangenotif-items"] = statechangenotif_items;
    }

    if(mergefailure_items != nullptr)
    {
        _children["mergefailure-items"] = mergefailure_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statechangenotif-items" || name == "mergefailure-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::StatechangenotifItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "statechangenotif-items"; yang_parent_name = "cfs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::~StatechangenotifItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/cfs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statechangenotif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::MergefailureItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "mergefailure-items"; yang_parent_name = "cfs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::~MergefailureItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/cfs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mergefailure-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::ConfigItems()
    :
    ccmclirunningconfigchanged_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems>())
{
    ccmclirunningconfigchanged_items->parent = this;

    yang_name = "config-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::~ConfigItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_data() const
{
    if (is_presence_container) return true;
    return (ccmclirunningconfigchanged_items !=  nullptr && ccmclirunningconfigchanged_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_operation() const
{
    return is_set(yfilter)
	|| (ccmclirunningconfigchanged_items !=  nullptr && ccmclirunningconfigchanged_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmCLIRunningConfigChanged-items")
    {
        if(ccmclirunningconfigchanged_items == nullptr)
        {
            ccmclirunningconfigchanged_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems>();
        }
        return ccmclirunningconfigchanged_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ccmclirunningconfigchanged_items != nullptr)
    {
        _children["ccmCLIRunningConfigChanged-items"] = ccmclirunningconfigchanged_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLIRunningConfigChanged-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::CcmCLIRunningConfigChangedItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ccmCLIRunningConfigChanged-items"; yang_parent_name = "config-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::~CcmCLIRunningConfigChangedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/config-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIRunningConfigChanged-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityItems()
    :
    entitymibchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems>())
    , entitymodulestatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems>())
    , entitypowerstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems>())
    , entitymoduleinserted_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems>())
    , entitymoduleremoved_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems>())
    , entityunrecognisedmodule_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems>())
    , entityfanstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems>())
    , entitypoweroutchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems>())
    , entitysensor_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems>())
    , cefcmibenablestatusnotification_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems>())
{
    entitymibchange_items->parent = this;
    entitymodulestatuschange_items->parent = this;
    entitypowerstatuschange_items->parent = this;
    entitymoduleinserted_items->parent = this;
    entitymoduleremoved_items->parent = this;
    entityunrecognisedmodule_items->parent = this;
    entityfanstatuschange_items->parent = this;
    entitypoweroutchange_items->parent = this;
    entitysensor_items->parent = this;
    cefcmibenablestatusnotification_items->parent = this;

    yang_name = "entity-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::~EntityItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_data() const
{
    if (is_presence_container) return true;
    return (entitymibchange_items !=  nullptr && entitymibchange_items->has_data())
	|| (entitymodulestatuschange_items !=  nullptr && entitymodulestatuschange_items->has_data())
	|| (entitypowerstatuschange_items !=  nullptr && entitypowerstatuschange_items->has_data())
	|| (entitymoduleinserted_items !=  nullptr && entitymoduleinserted_items->has_data())
	|| (entitymoduleremoved_items !=  nullptr && entitymoduleremoved_items->has_data())
	|| (entityunrecognisedmodule_items !=  nullptr && entityunrecognisedmodule_items->has_data())
	|| (entityfanstatuschange_items !=  nullptr && entityfanstatuschange_items->has_data())
	|| (entitypoweroutchange_items !=  nullptr && entitypoweroutchange_items->has_data())
	|| (entitysensor_items !=  nullptr && entitysensor_items->has_data())
	|| (cefcmibenablestatusnotification_items !=  nullptr && cefcmibenablestatusnotification_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_operation() const
{
    return is_set(yfilter)
	|| (entitymibchange_items !=  nullptr && entitymibchange_items->has_operation())
	|| (entitymodulestatuschange_items !=  nullptr && entitymodulestatuschange_items->has_operation())
	|| (entitypowerstatuschange_items !=  nullptr && entitypowerstatuschange_items->has_operation())
	|| (entitymoduleinserted_items !=  nullptr && entitymoduleinserted_items->has_operation())
	|| (entitymoduleremoved_items !=  nullptr && entitymoduleremoved_items->has_operation())
	|| (entityunrecognisedmodule_items !=  nullptr && entityunrecognisedmodule_items->has_operation())
	|| (entityfanstatuschange_items !=  nullptr && entityfanstatuschange_items->has_operation())
	|| (entitypoweroutchange_items !=  nullptr && entitypoweroutchange_items->has_operation())
	|| (entitysensor_items !=  nullptr && entitysensor_items->has_operation())
	|| (cefcmibenablestatusnotification_items !=  nullptr && cefcmibenablestatusnotification_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entitymibchange-items")
    {
        if(entitymibchange_items == nullptr)
        {
            entitymibchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems>();
        }
        return entitymibchange_items;
    }

    if(child_yang_name == "entitymodulestatuschange-items")
    {
        if(entitymodulestatuschange_items == nullptr)
        {
            entitymodulestatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems>();
        }
        return entitymodulestatuschange_items;
    }

    if(child_yang_name == "entitypowerstatuschange-items")
    {
        if(entitypowerstatuschange_items == nullptr)
        {
            entitypowerstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems>();
        }
        return entitypowerstatuschange_items;
    }

    if(child_yang_name == "entitymoduleinserted-items")
    {
        if(entitymoduleinserted_items == nullptr)
        {
            entitymoduleinserted_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems>();
        }
        return entitymoduleinserted_items;
    }

    if(child_yang_name == "entitymoduleremoved-items")
    {
        if(entitymoduleremoved_items == nullptr)
        {
            entitymoduleremoved_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems>();
        }
        return entitymoduleremoved_items;
    }

    if(child_yang_name == "entityunrecognisedmodule-items")
    {
        if(entityunrecognisedmodule_items == nullptr)
        {
            entityunrecognisedmodule_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems>();
        }
        return entityunrecognisedmodule_items;
    }

    if(child_yang_name == "entityfanstatuschange-items")
    {
        if(entityfanstatuschange_items == nullptr)
        {
            entityfanstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems>();
        }
        return entityfanstatuschange_items;
    }

    if(child_yang_name == "entitypoweroutchange-items")
    {
        if(entitypoweroutchange_items == nullptr)
        {
            entitypoweroutchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems>();
        }
        return entitypoweroutchange_items;
    }

    if(child_yang_name == "entitysensor-items")
    {
        if(entitysensor_items == nullptr)
        {
            entitysensor_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems>();
        }
        return entitysensor_items;
    }

    if(child_yang_name == "cefcMIBEnableStatusNotification-items")
    {
        if(cefcmibenablestatusnotification_items == nullptr)
        {
            cefcmibenablestatusnotification_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems>();
        }
        return cefcmibenablestatusnotification_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entitymibchange_items != nullptr)
    {
        _children["entitymibchange-items"] = entitymibchange_items;
    }

    if(entitymodulestatuschange_items != nullptr)
    {
        _children["entitymodulestatuschange-items"] = entitymodulestatuschange_items;
    }

    if(entitypowerstatuschange_items != nullptr)
    {
        _children["entitypowerstatuschange-items"] = entitypowerstatuschange_items;
    }

    if(entitymoduleinserted_items != nullptr)
    {
        _children["entitymoduleinserted-items"] = entitymoduleinserted_items;
    }

    if(entitymoduleremoved_items != nullptr)
    {
        _children["entitymoduleremoved-items"] = entitymoduleremoved_items;
    }

    if(entityunrecognisedmodule_items != nullptr)
    {
        _children["entityunrecognisedmodule-items"] = entityunrecognisedmodule_items;
    }

    if(entityfanstatuschange_items != nullptr)
    {
        _children["entityfanstatuschange-items"] = entityfanstatuschange_items;
    }

    if(entitypoweroutchange_items != nullptr)
    {
        _children["entitypoweroutchange-items"] = entitypoweroutchange_items;
    }

    if(entitysensor_items != nullptr)
    {
        _children["entitysensor-items"] = entitysensor_items;
    }

    if(cefcmibenablestatusnotification_items != nullptr)
    {
        _children["cefcMIBEnableStatusNotification-items"] = cefcmibenablestatusnotification_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entitymibchange-items" || name == "entitymodulestatuschange-items" || name == "entitypowerstatuschange-items" || name == "entitymoduleinserted-items" || name == "entitymoduleremoved-items" || name == "entityunrecognisedmodule-items" || name == "entityfanstatuschange-items" || name == "entitypoweroutchange-items" || name == "entitysensor-items" || name == "cefcMIBEnableStatusNotification-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::EntitymibchangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymibchange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::~EntitymibchangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymibchange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::EntitymodulestatuschangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymodulestatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::~EntitymodulestatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymodulestatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::EntitypowerstatuschangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitypowerstatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::~EntitypowerstatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitypowerstatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::EntitymoduleinsertedItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymoduleinserted-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::~EntitymoduleinsertedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymoduleinserted-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::EntitymoduleremovedItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymoduleremoved-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::~EntitymoduleremovedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymoduleremoved-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::EntityunrecognisedmoduleItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entityunrecognisedmodule-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::~EntityunrecognisedmoduleItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityunrecognisedmodule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::EntityfanstatuschangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entityfanstatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::~EntityfanstatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityfanstatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::EntitypoweroutchangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitypoweroutchange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::~EntitypoweroutchangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitypoweroutchange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::EntitysensorItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitysensor-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::~EntitysensorItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitysensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::CefcMIBEnableStatusNotificationItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cefcMIBEnableStatusNotification-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::~CefcMIBEnableStatusNotificationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcMIBEnableStatusNotification-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeaturecontrolItems()
    :
    featureopstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems>())
    , ciscofeatopstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems>())
{
    featureopstatuschange_items->parent = this;
    ciscofeatopstatuschange_items->parent = this;

    yang_name = "featurecontrol-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::~FeaturecontrolItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_data() const
{
    if (is_presence_container) return true;
    return (featureopstatuschange_items !=  nullptr && featureopstatuschange_items->has_data())
	|| (ciscofeatopstatuschange_items !=  nullptr && ciscofeatopstatuschange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_operation() const
{
    return is_set(yfilter)
	|| (featureopstatuschange_items !=  nullptr && featureopstatuschange_items->has_operation())
	|| (ciscofeatopstatuschange_items !=  nullptr && ciscofeatopstatuschange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "featurecontrol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FeatureOpStatusChange-items")
    {
        if(featureopstatuschange_items == nullptr)
        {
            featureopstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems>();
        }
        return featureopstatuschange_items;
    }

    if(child_yang_name == "ciscoFeatOpStatusChange-items")
    {
        if(ciscofeatopstatuschange_items == nullptr)
        {
            ciscofeatopstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems>();
        }
        return ciscofeatopstatuschange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(featureopstatuschange_items != nullptr)
    {
        _children["FeatureOpStatusChange-items"] = featureopstatuschange_items;
    }

    if(ciscofeatopstatuschange_items != nullptr)
    {
        _children["ciscoFeatOpStatusChange-items"] = ciscofeatopstatuschange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FeatureOpStatusChange-items" || name == "ciscoFeatOpStatusChange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::FeatureOpStatusChangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "FeatureOpStatusChange-items"; yang_parent_name = "featurecontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::~FeatureOpStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/featurecontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FeatureOpStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::CiscoFeatOpStatusChangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ciscoFeatOpStatusChange-items"; yang_parent_name = "featurecontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::~CiscoFeatOpStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/featurecontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFeatOpStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::HsrpItems()
    :
    statechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems>())
{
    statechange_items->parent = this;

    yang_name = "hsrp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::~HsrpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_data() const
{
    if (is_presence_container) return true;
    return (statechange_items !=  nullptr && statechange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_operation() const
{
    return is_set(yfilter)
	|| (statechange_items !=  nullptr && statechange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hsrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statechange-items")
    {
        if(statechange_items == nullptr)
        {
            statechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems>();
        }
        return statechange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statechange_items != nullptr)
    {
        _children["statechange-items"] = statechange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statechange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::StatechangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "statechange-items"; yang_parent_name = "hsrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::~StatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/hsrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::GenericItems()
    :
    coldstart_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems>())
    , warmstart_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems>())
{
    coldstart_items->parent = this;
    warmstart_items->parent = this;

    yang_name = "generic-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::~GenericItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_data() const
{
    if (is_presence_container) return true;
    return (coldstart_items !=  nullptr && coldstart_items->has_data())
	|| (warmstart_items !=  nullptr && warmstart_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_operation() const
{
    return is_set(yfilter)
	|| (coldstart_items !=  nullptr && coldstart_items->has_operation())
	|| (warmstart_items !=  nullptr && warmstart_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "coldStart-items")
    {
        if(coldstart_items == nullptr)
        {
            coldstart_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems>();
        }
        return coldstart_items;
    }

    if(child_yang_name == "warmStart-items")
    {
        if(warmstart_items == nullptr)
        {
            warmstart_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems>();
        }
        return warmstart_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(coldstart_items != nullptr)
    {
        _children["coldStart-items"] = coldstart_items;
    }

    if(warmstart_items != nullptr)
    {
        _children["warmStart-items"] = warmstart_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coldStart-items" || name == "warmStart-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::ColdStartItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "coldStart-items"; yang_parent_name = "generic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::~ColdStartItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/generic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coldStart-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::WarmStartItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "warmStart-items"; yang_parent_name = "generic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::~WarmStartItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/generic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warmStart-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::IpItems::IpItems()
    :
    sla_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems>())
{
    sla_items->parent = this;

    yang_name = "ip-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::IpItems::~IpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_data() const
{
    if (is_presence_container) return true;
    return (sla_items !=  nullptr && sla_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_operation() const
{
    return is_set(yfilter)
	|| (sla_items !=  nullptr && sla_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-items")
    {
        if(sla_items == nullptr)
        {
            sla_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems>();
        }
        return sla_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sla_items != nullptr)
    {
        _children["sla-items"] = sla_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::SlaItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sla-items"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::~SlaItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/ip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(notifylicenseexpiry_items != nullptr)
    {
        _children["notifylicenseexpiry-items"] = notifylicenseexpiry_items;
    }

    if(notifylicenseexpirywarning_items != nullptr)
    {
        _children["notifylicenseexpirywarning-items"] = notifylicenseexpirywarning_items;
    }

    if(notifylicensefilemissing_items != nullptr)
    {
        _children["notifylicensefilemissing-items"] = notifylicensefilemissing_items;
    }

    if(notifynolicenseforfeature_items != nullptr)
    {
        _children["notifynolicenseforfeature-items"] = notifynolicenseforfeature_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::NotifylicenseexpirywarningItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::NotifylicensefilemissingItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::NotifynolicenseforfeatureItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policenotify_items != nullptr)
    {
        _children["policenotify-items"] = policenotify_items;
    }

    if(controlenable_items != nullptr)
    {
        _children["controlenable-items"] = controlenable_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , cerrdisableinterfaceeventrev1_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items>())
    , cmnmacmovenotification_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems>())
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
    cmnmacmovenotification_items->parent = this;

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
	|| (cerrdisableinterfaceeventrev1_items !=  nullptr && cerrdisableinterfaceeventrev1_items->has_data())
	|| (cmnmacmovenotification_items !=  nullptr && cmnmacmovenotification_items->has_data());
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
	|| (cerrdisableinterfaceeventrev1_items !=  nullptr && cerrdisableinterfaceeventrev1_items->has_operation())
	|| (cmnmacmovenotification_items !=  nullptr && cmnmacmovenotification_items->has_operation());
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "cerrdisableinterfaceeventrev1-items")
    {
        if(cerrdisableinterfaceeventrev1_items == nullptr)
        {
            cerrdisableinterfaceeventrev1_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items>();
        }
        return cerrdisableinterfaceeventrev1_items;
    }

    if(child_yang_name == "cmnmacmovenotification-items")
    {
        if(cmnmacmovenotification_items == nullptr)
        {
            cmnmacmovenotification_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems>();
        }
        return cmnmacmovenotification_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ciscoxcvrmonstatuschg_items != nullptr)
    {
        _children["ciscoxcvrmonstatuschg-items"] = ciscoxcvrmonstatuschg_items;
    }

    if(linkdown_items != nullptr)
    {
        _children["linkDown-items"] = linkdown_items;
    }

    if(linkup_items != nullptr)
    {
        _children["linkUp-items"] = linkup_items;
    }

    if(extendedlinkdown_items != nullptr)
    {
        _children["extendedlinkDown-items"] = extendedlinkdown_items;
    }

    if(extendedlinkup_items != nullptr)
    {
        _children["extendedlinkUp-items"] = extendedlinkup_items;
    }

    if(cielinkdown_items != nullptr)
    {
        _children["cieLinkDown-items"] = cielinkdown_items;
    }

    if(cielinkup_items != nullptr)
    {
        _children["cieLinkUp-items"] = cielinkup_items;
    }

    if(delayedlinkstatechange_items != nullptr)
    {
        _children["delayedlinkstatechange-items"] = delayedlinkstatechange_items;
    }

    if(cerrdisableinterfaceeventrev1_items != nullptr)
    {
        _children["cerrdisableinterfaceeventrev1-items"] = cerrdisableinterfaceeventrev1_items;
    }

    if(cmnmacmovenotification_items != nullptr)
    {
        _children["cmnmacmovenotification-items"] = cmnmacmovenotification_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoxcvrmonstatuschg-items" || name == "linkDown-items" || name == "linkUp-items" || name == "extendedlinkDown-items" || name == "extendedlinkUp-items" || name == "cieLinkDown-items" || name == "cieLinkUp-items" || name == "delayedlinkstatechange-items" || name == "cerrdisableinterfaceeventrev1-items" || name == "cmnmacmovenotification-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::CiscoxcvrmonstatuschgItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::LinkDownItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::LinkUpItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::ExtendedlinkDownItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::ExtendedlinkUpItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::CieLinkDownItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::CieLinkUpItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::DelayedlinkstatechangeItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::Cerrdisableinterfaceeventrev1Items()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cerrdisableinterfaceeventrev1-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::~Cerrdisableinterfaceeventrev1Items()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cerrdisableinterfaceeventrev1-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::CmnmacmovenotificationItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cmnmacmovenotification-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::~CmnmacmovenotificationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmnmacmovenotification-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lldpremtableschange_items != nullptr)
    {
        _children["lldpRemTablesChange-items"] = lldpremtableschange_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(msdpbackwardtransition_items != nullptr)
    {
        _children["msdpBackwardTransition-items"] = msdpbackwardtransition_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csemaintmodechangenotify_items != nullptr)
    {
        _children["cseMaintModeChangeNotify-items"] = csemaintmodechangenotify_items;
    }

    if(csenormalmodechangenotify_items != nullptr)
    {
        _children["cseNormalModeChangeNotify-items"] = csenormalmodechangenotify_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::CseNormalModeChangeNotifyItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PimItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PimItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pimneighborloss_items != nullptr)
    {
        _children["pimNeighborLoss-items"] = pimneighborloss_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redundancyframework_items != nullptr)
    {
        _children["redundancyframework-items"] = redundancyframework_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(risingalarm_items != nullptr)
    {
        _children["risingAlarm-items"] = risingalarm_items;
    }

    if(fallingalarm_items != nullptr)
    {
        _children["fallingAlarm-items"] = fallingalarm_items;
    }

    if(hcrisingalarm_items != nullptr)
    {
        _children["hcRisingAlarm-items"] = hcrisingalarm_items;
    }

    if(hcfallingalarm_items != nullptr)
    {
        _children["hcFallingAlarm-items"] = hcfallingalarm_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::FallingAlarmItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::HcRisingAlarmItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::HcFallingAlarmItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication_items != nullptr)
    {
        _children["authentication-items"] = authentication_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inconsistency_items != nullptr)
    {
        _children["inconsistency-items"] = inconsistency_items;
    }

    if(rootinconsistency_items != nullptr)
    {
        _children["rootinconsistency-items"] = rootinconsistency_items;
    }

    if(loopinconsistency_items != nullptr)
    {
        _children["loopinconsistency-items"] = loopinconsistency_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::RootinconsistencyItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::LoopinconsistencyItems()
    :
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csefailswcorenotifyextended_items != nullptr)
    {
        _children["cseFailSwCoreNotifyExtended-items"] = csefailswcorenotifyextended_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SystemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SystemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clockchangenotification_items != nullptr)
    {
        _children["Clockchangenotification-items"] = clockchangenotification_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(upgradejobstatusnotify_items != nullptr)
    {
        _children["UpgradeJobStatusNotify-items"] = upgradejobstatusnotify_items;
    }

    return _children;
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
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_operation() const
{
    return is_set(yfilter)
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

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsanportmembershipchange_items != nullptr)
    {
        _children["vsanPortMembershipChange-items"] = vsanportmembershipchange_items;
    }

    if(vsanstatuschange_items != nullptr)
    {
        _children["vsanStatusChange-items"] = vsanstatuschange_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(notifs_items != nullptr)
    {
        _children["notifs-items"] = notifs_items;
    }

    if(vlancreate_items != nullptr)
    {
        _children["vlancreate-items"] = vlancreate_items;
    }

    if(vlandelete_items != nullptr)
    {
        _children["vlandelete-items"] = vlandelete_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accesssecuremacviolation_items != nullptr)
    {
        _children["accesssecuremacviolation-items"] = accesssecuremacviolation_items;
    }

    if(trunksecuremacviolation_items != nullptr)
    {
        _children["trunksecuremacviolation-items"] = trunksecuremacviolation_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldp_items != nullptr)
    {
        _children["ldp-items"] = ldp_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldpsessiondown_items != nullptr)
    {
        _children["ldpsessiondown-items"] = ldpsessiondown_items;
    }

    if(ldpsessionup_items != nullptr)
    {
        _children["ldpsessionup-items"] = ldpsessionup_items;
    }

    return _children;
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


}
}

