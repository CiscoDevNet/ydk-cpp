
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_RF_MIB {

CiscoRfMib::CiscoRfMib()
    :
    crfcfg(std::make_shared<CiscoRfMib::Crfcfg>())
	,crfhistory(std::make_shared<CiscoRfMib::Crfhistory>())
	,crfhistoryswitchovertable(std::make_shared<CiscoRfMib::Crfhistoryswitchovertable>())
	,crfstatus(std::make_shared<CiscoRfMib::Crfstatus>())
	,crfstatusrfclienttable(std::make_shared<CiscoRfMib::Crfstatusrfclienttable>())
	,crfstatusrfmodecapstable(std::make_shared<CiscoRfMib::Crfstatusrfmodecapstable>())
{
    crfcfg->parent = this;

    crfhistory->parent = this;

    crfhistoryswitchovertable->parent = this;

    crfstatus->parent = this;

    crfstatusrfclienttable->parent = this;

    crfstatusrfmodecapstable->parent = this;

    yang_name = "CISCO-RF-MIB"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::~CiscoRfMib()
{
}

bool CiscoRfMib::has_data() const
{
    return (crfcfg !=  nullptr && crfcfg->has_data())
	|| (crfhistory !=  nullptr && crfhistory->has_data())
	|| (crfhistoryswitchovertable !=  nullptr && crfhistoryswitchovertable->has_data())
	|| (crfstatus !=  nullptr && crfstatus->has_data())
	|| (crfstatusrfclienttable !=  nullptr && crfstatusrfclienttable->has_data())
	|| (crfstatusrfmodecapstable !=  nullptr && crfstatusrfmodecapstable->has_data());
}

bool CiscoRfMib::has_operation() const
{
    return is_set(yfilter)
	|| (crfcfg !=  nullptr && crfcfg->has_operation())
	|| (crfhistory !=  nullptr && crfhistory->has_operation())
	|| (crfhistoryswitchovertable !=  nullptr && crfhistoryswitchovertable->has_operation())
	|| (crfstatus !=  nullptr && crfstatus->has_operation())
	|| (crfstatusrfclienttable !=  nullptr && crfstatusrfclienttable->has_operation())
	|| (crfstatusrfmodecapstable !=  nullptr && crfstatusrfmodecapstable->has_operation());
}

std::string CiscoRfMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cRFCfg")
    {
        if(crfcfg == nullptr)
        {
            crfcfg = std::make_shared<CiscoRfMib::Crfcfg>();
        }
        return crfcfg;
    }

    if(child_yang_name == "cRFHistory")
    {
        if(crfhistory == nullptr)
        {
            crfhistory = std::make_shared<CiscoRfMib::Crfhistory>();
        }
        return crfhistory;
    }

    if(child_yang_name == "cRFHistorySwitchOverTable")
    {
        if(crfhistoryswitchovertable == nullptr)
        {
            crfhistoryswitchovertable = std::make_shared<CiscoRfMib::Crfhistoryswitchovertable>();
        }
        return crfhistoryswitchovertable;
    }

    if(child_yang_name == "cRFStatus")
    {
        if(crfstatus == nullptr)
        {
            crfstatus = std::make_shared<CiscoRfMib::Crfstatus>();
        }
        return crfstatus;
    }

    if(child_yang_name == "cRFStatusRFClientTable")
    {
        if(crfstatusrfclienttable == nullptr)
        {
            crfstatusrfclienttable = std::make_shared<CiscoRfMib::Crfstatusrfclienttable>();
        }
        return crfstatusrfclienttable;
    }

    if(child_yang_name == "cRFStatusRFModeCapsTable")
    {
        if(crfstatusrfmodecapstable == nullptr)
        {
            crfstatusrfmodecapstable = std::make_shared<CiscoRfMib::Crfstatusrfmodecapstable>();
        }
        return crfstatusrfmodecapstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crfcfg != nullptr)
    {
        children["cRFCfg"] = crfcfg;
    }

    if(crfhistory != nullptr)
    {
        children["cRFHistory"] = crfhistory;
    }

    if(crfhistoryswitchovertable != nullptr)
    {
        children["cRFHistorySwitchOverTable"] = crfhistoryswitchovertable;
    }

    if(crfstatus != nullptr)
    {
        children["cRFStatus"] = crfstatus;
    }

    if(crfstatusrfclienttable != nullptr)
    {
        children["cRFStatusRFClientTable"] = crfstatusrfclienttable;
    }

    if(crfstatusrfmodecapstable != nullptr)
    {
        children["cRFStatusRFModeCapsTable"] = crfstatusrfmodecapstable;
    }

    return children;
}

void CiscoRfMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoRfMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoRfMib::clone_ptr() const
{
    return std::make_shared<CiscoRfMib>();
}

std::string CiscoRfMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoRfMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoRfMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoRfMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoRfMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFCfg" || name == "cRFHistory" || name == "cRFHistorySwitchOverTable" || name == "cRFStatus" || name == "cRFStatusRFClientTable" || name == "cRFStatusRFModeCapsTable")
        return true;
    return false;
}

CiscoRfMib::Crfstatus::Crfstatus()
    :
    crfstatusduplexmode{YType::boolean, "cRFStatusDuplexMode"},
    crfstatusfailovertime{YType::uint32, "cRFStatusFailoverTime"},
    crfstatusissufromversion{YType::str, "cRFStatusIssuFromVersion"},
    crfstatusissustate{YType::enumeration, "cRFStatusIssuState"},
    crfstatusissustaterev1{YType::enumeration, "cRFStatusIssuStateRev1"},
    crfstatusissutoversion{YType::str, "cRFStatusIssuToVersion"},
    crfstatuslastswactreasoncode{YType::enumeration, "cRFStatusLastSwactReasonCode"},
    crfstatusmanualswactinhibit{YType::boolean, "cRFStatusManualSwactInhibit"},
    crfstatuspeerstandbyentrytime{YType::uint32, "cRFStatusPeerStandByEntryTime"},
    crfstatuspeerunitid{YType::int32, "cRFStatusPeerUnitId"},
    crfstatuspeerunitstate{YType::enumeration, "cRFStatusPeerUnitState"},
    crfstatusprimarymode{YType::boolean, "cRFStatusPrimaryMode"},
    crfstatusunitid{YType::int32, "cRFStatusUnitId"},
    crfstatusunitstate{YType::enumeration, "cRFStatusUnitState"}
{
    yang_name = "cRFStatus"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::Crfstatus::~Crfstatus()
{
}

bool CiscoRfMib::Crfstatus::has_data() const
{
    return crfstatusduplexmode.is_set
	|| crfstatusfailovertime.is_set
	|| crfstatusissufromversion.is_set
	|| crfstatusissustate.is_set
	|| crfstatusissustaterev1.is_set
	|| crfstatusissutoversion.is_set
	|| crfstatuslastswactreasoncode.is_set
	|| crfstatusmanualswactinhibit.is_set
	|| crfstatuspeerstandbyentrytime.is_set
	|| crfstatuspeerunitid.is_set
	|| crfstatuspeerunitstate.is_set
	|| crfstatusprimarymode.is_set
	|| crfstatusunitid.is_set
	|| crfstatusunitstate.is_set;
}

bool CiscoRfMib::Crfstatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crfstatusduplexmode.yfilter)
	|| ydk::is_set(crfstatusfailovertime.yfilter)
	|| ydk::is_set(crfstatusissufromversion.yfilter)
	|| ydk::is_set(crfstatusissustate.yfilter)
	|| ydk::is_set(crfstatusissustaterev1.yfilter)
	|| ydk::is_set(crfstatusissutoversion.yfilter)
	|| ydk::is_set(crfstatuslastswactreasoncode.yfilter)
	|| ydk::is_set(crfstatusmanualswactinhibit.yfilter)
	|| ydk::is_set(crfstatuspeerstandbyentrytime.yfilter)
	|| ydk::is_set(crfstatuspeerunitid.yfilter)
	|| ydk::is_set(crfstatuspeerunitstate.yfilter)
	|| ydk::is_set(crfstatusprimarymode.yfilter)
	|| ydk::is_set(crfstatusunitid.yfilter)
	|| ydk::is_set(crfstatusunitstate.yfilter);
}

std::string CiscoRfMib::Crfstatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFStatus";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfstatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crfstatusduplexmode.is_set || is_set(crfstatusduplexmode.yfilter)) leaf_name_data.push_back(crfstatusduplexmode.get_name_leafdata());
    if (crfstatusfailovertime.is_set || is_set(crfstatusfailovertime.yfilter)) leaf_name_data.push_back(crfstatusfailovertime.get_name_leafdata());
    if (crfstatusissufromversion.is_set || is_set(crfstatusissufromversion.yfilter)) leaf_name_data.push_back(crfstatusissufromversion.get_name_leafdata());
    if (crfstatusissustate.is_set || is_set(crfstatusissustate.yfilter)) leaf_name_data.push_back(crfstatusissustate.get_name_leafdata());
    if (crfstatusissustaterev1.is_set || is_set(crfstatusissustaterev1.yfilter)) leaf_name_data.push_back(crfstatusissustaterev1.get_name_leafdata());
    if (crfstatusissutoversion.is_set || is_set(crfstatusissutoversion.yfilter)) leaf_name_data.push_back(crfstatusissutoversion.get_name_leafdata());
    if (crfstatuslastswactreasoncode.is_set || is_set(crfstatuslastswactreasoncode.yfilter)) leaf_name_data.push_back(crfstatuslastswactreasoncode.get_name_leafdata());
    if (crfstatusmanualswactinhibit.is_set || is_set(crfstatusmanualswactinhibit.yfilter)) leaf_name_data.push_back(crfstatusmanualswactinhibit.get_name_leafdata());
    if (crfstatuspeerstandbyentrytime.is_set || is_set(crfstatuspeerstandbyentrytime.yfilter)) leaf_name_data.push_back(crfstatuspeerstandbyentrytime.get_name_leafdata());
    if (crfstatuspeerunitid.is_set || is_set(crfstatuspeerunitid.yfilter)) leaf_name_data.push_back(crfstatuspeerunitid.get_name_leafdata());
    if (crfstatuspeerunitstate.is_set || is_set(crfstatuspeerunitstate.yfilter)) leaf_name_data.push_back(crfstatuspeerunitstate.get_name_leafdata());
    if (crfstatusprimarymode.is_set || is_set(crfstatusprimarymode.yfilter)) leaf_name_data.push_back(crfstatusprimarymode.get_name_leafdata());
    if (crfstatusunitid.is_set || is_set(crfstatusunitid.yfilter)) leaf_name_data.push_back(crfstatusunitid.get_name_leafdata());
    if (crfstatusunitstate.is_set || is_set(crfstatusunitstate.yfilter)) leaf_name_data.push_back(crfstatusunitstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfstatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfstatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRfMib::Crfstatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cRFStatusDuplexMode")
    {
        crfstatusduplexmode = value;
        crfstatusduplexmode.value_namespace = name_space;
        crfstatusduplexmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusFailoverTime")
    {
        crfstatusfailovertime = value;
        crfstatusfailovertime.value_namespace = name_space;
        crfstatusfailovertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusIssuFromVersion")
    {
        crfstatusissufromversion = value;
        crfstatusissufromversion.value_namespace = name_space;
        crfstatusissufromversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusIssuState")
    {
        crfstatusissustate = value;
        crfstatusissustate.value_namespace = name_space;
        crfstatusissustate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusIssuStateRev1")
    {
        crfstatusissustaterev1 = value;
        crfstatusissustaterev1.value_namespace = name_space;
        crfstatusissustaterev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusIssuToVersion")
    {
        crfstatusissutoversion = value;
        crfstatusissutoversion.value_namespace = name_space;
        crfstatusissutoversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusLastSwactReasonCode")
    {
        crfstatuslastswactreasoncode = value;
        crfstatuslastswactreasoncode.value_namespace = name_space;
        crfstatuslastswactreasoncode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusManualSwactInhibit")
    {
        crfstatusmanualswactinhibit = value;
        crfstatusmanualswactinhibit.value_namespace = name_space;
        crfstatusmanualswactinhibit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusPeerStandByEntryTime")
    {
        crfstatuspeerstandbyentrytime = value;
        crfstatuspeerstandbyentrytime.value_namespace = name_space;
        crfstatuspeerstandbyentrytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusPeerUnitId")
    {
        crfstatuspeerunitid = value;
        crfstatuspeerunitid.value_namespace = name_space;
        crfstatuspeerunitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusPeerUnitState")
    {
        crfstatuspeerunitstate = value;
        crfstatuspeerunitstate.value_namespace = name_space;
        crfstatuspeerunitstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusPrimaryMode")
    {
        crfstatusprimarymode = value;
        crfstatusprimarymode.value_namespace = name_space;
        crfstatusprimarymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusUnitId")
    {
        crfstatusunitid = value;
        crfstatusunitid.value_namespace = name_space;
        crfstatusunitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusUnitState")
    {
        crfstatusunitstate = value;
        crfstatusunitstate.value_namespace = name_space;
        crfstatusunitstate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRfMib::Crfstatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cRFStatusDuplexMode")
    {
        crfstatusduplexmode.yfilter = yfilter;
    }
    if(value_path == "cRFStatusFailoverTime")
    {
        crfstatusfailovertime.yfilter = yfilter;
    }
    if(value_path == "cRFStatusIssuFromVersion")
    {
        crfstatusissufromversion.yfilter = yfilter;
    }
    if(value_path == "cRFStatusIssuState")
    {
        crfstatusissustate.yfilter = yfilter;
    }
    if(value_path == "cRFStatusIssuStateRev1")
    {
        crfstatusissustaterev1.yfilter = yfilter;
    }
    if(value_path == "cRFStatusIssuToVersion")
    {
        crfstatusissutoversion.yfilter = yfilter;
    }
    if(value_path == "cRFStatusLastSwactReasonCode")
    {
        crfstatuslastswactreasoncode.yfilter = yfilter;
    }
    if(value_path == "cRFStatusManualSwactInhibit")
    {
        crfstatusmanualswactinhibit.yfilter = yfilter;
    }
    if(value_path == "cRFStatusPeerStandByEntryTime")
    {
        crfstatuspeerstandbyentrytime.yfilter = yfilter;
    }
    if(value_path == "cRFStatusPeerUnitId")
    {
        crfstatuspeerunitid.yfilter = yfilter;
    }
    if(value_path == "cRFStatusPeerUnitState")
    {
        crfstatuspeerunitstate.yfilter = yfilter;
    }
    if(value_path == "cRFStatusPrimaryMode")
    {
        crfstatusprimarymode.yfilter = yfilter;
    }
    if(value_path == "cRFStatusUnitId")
    {
        crfstatusunitid.yfilter = yfilter;
    }
    if(value_path == "cRFStatusUnitState")
    {
        crfstatusunitstate.yfilter = yfilter;
    }
}

bool CiscoRfMib::Crfstatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFStatusDuplexMode" || name == "cRFStatusFailoverTime" || name == "cRFStatusIssuFromVersion" || name == "cRFStatusIssuState" || name == "cRFStatusIssuStateRev1" || name == "cRFStatusIssuToVersion" || name == "cRFStatusLastSwactReasonCode" || name == "cRFStatusManualSwactInhibit" || name == "cRFStatusPeerStandByEntryTime" || name == "cRFStatusPeerUnitId" || name == "cRFStatusPeerUnitState" || name == "cRFStatusPrimaryMode" || name == "cRFStatusUnitId" || name == "cRFStatusUnitState")
        return true;
    return false;
}

CiscoRfMib::Crfcfg::Crfcfg()
    :
    crfcfgadminaction{YType::enumeration, "cRFCfgAdminAction"},
    crfcfgkeepalivethresh{YType::uint32, "cRFCfgKeepaliveThresh"},
    crfcfgkeepalivethreshmax{YType::uint32, "cRFCfgKeepaliveThreshMax"},
    crfcfgkeepalivethreshmin{YType::uint32, "cRFCfgKeepaliveThreshMin"},
    crfcfgkeepalivetimer{YType::uint32, "cRFCfgKeepaliveTimer"},
    crfcfgkeepalivetimermax{YType::uint32, "cRFCfgKeepaliveTimerMax"},
    crfcfgkeepalivetimermin{YType::uint32, "cRFCfgKeepaliveTimerMin"},
    crfcfgmaintenancemode{YType::boolean, "cRFCfgMaintenanceMode"},
    crfcfgnotifsenabled{YType::boolean, "cRFCfgNotifsEnabled"},
    crfcfgnotiftimer{YType::uint32, "cRFCfgNotifTimer"},
    crfcfgnotiftimermax{YType::uint32, "cRFCfgNotifTimerMax"},
    crfcfgnotiftimermin{YType::uint32, "cRFCfgNotifTimerMin"},
    crfcfgredundancymode{YType::enumeration, "cRFCfgRedundancyMode"},
    crfcfgredundancymodedescr{YType::str, "cRFCfgRedundancyModeDescr"},
    crfcfgredundancyopermode{YType::enumeration, "cRFCfgRedundancyOperMode"},
    crfcfgsplitmode{YType::boolean, "cRFCfgSplitMode"}
{
    yang_name = "cRFCfg"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::Crfcfg::~Crfcfg()
{
}

bool CiscoRfMib::Crfcfg::has_data() const
{
    return crfcfgadminaction.is_set
	|| crfcfgkeepalivethresh.is_set
	|| crfcfgkeepalivethreshmax.is_set
	|| crfcfgkeepalivethreshmin.is_set
	|| crfcfgkeepalivetimer.is_set
	|| crfcfgkeepalivetimermax.is_set
	|| crfcfgkeepalivetimermin.is_set
	|| crfcfgmaintenancemode.is_set
	|| crfcfgnotifsenabled.is_set
	|| crfcfgnotiftimer.is_set
	|| crfcfgnotiftimermax.is_set
	|| crfcfgnotiftimermin.is_set
	|| crfcfgredundancymode.is_set
	|| crfcfgredundancymodedescr.is_set
	|| crfcfgredundancyopermode.is_set
	|| crfcfgsplitmode.is_set;
}

bool CiscoRfMib::Crfcfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crfcfgadminaction.yfilter)
	|| ydk::is_set(crfcfgkeepalivethresh.yfilter)
	|| ydk::is_set(crfcfgkeepalivethreshmax.yfilter)
	|| ydk::is_set(crfcfgkeepalivethreshmin.yfilter)
	|| ydk::is_set(crfcfgkeepalivetimer.yfilter)
	|| ydk::is_set(crfcfgkeepalivetimermax.yfilter)
	|| ydk::is_set(crfcfgkeepalivetimermin.yfilter)
	|| ydk::is_set(crfcfgmaintenancemode.yfilter)
	|| ydk::is_set(crfcfgnotifsenabled.yfilter)
	|| ydk::is_set(crfcfgnotiftimer.yfilter)
	|| ydk::is_set(crfcfgnotiftimermax.yfilter)
	|| ydk::is_set(crfcfgnotiftimermin.yfilter)
	|| ydk::is_set(crfcfgredundancymode.yfilter)
	|| ydk::is_set(crfcfgredundancymodedescr.yfilter)
	|| ydk::is_set(crfcfgredundancyopermode.yfilter)
	|| ydk::is_set(crfcfgsplitmode.yfilter);
}

std::string CiscoRfMib::Crfcfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFCfg";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfcfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crfcfgadminaction.is_set || is_set(crfcfgadminaction.yfilter)) leaf_name_data.push_back(crfcfgadminaction.get_name_leafdata());
    if (crfcfgkeepalivethresh.is_set || is_set(crfcfgkeepalivethresh.yfilter)) leaf_name_data.push_back(crfcfgkeepalivethresh.get_name_leafdata());
    if (crfcfgkeepalivethreshmax.is_set || is_set(crfcfgkeepalivethreshmax.yfilter)) leaf_name_data.push_back(crfcfgkeepalivethreshmax.get_name_leafdata());
    if (crfcfgkeepalivethreshmin.is_set || is_set(crfcfgkeepalivethreshmin.yfilter)) leaf_name_data.push_back(crfcfgkeepalivethreshmin.get_name_leafdata());
    if (crfcfgkeepalivetimer.is_set || is_set(crfcfgkeepalivetimer.yfilter)) leaf_name_data.push_back(crfcfgkeepalivetimer.get_name_leafdata());
    if (crfcfgkeepalivetimermax.is_set || is_set(crfcfgkeepalivetimermax.yfilter)) leaf_name_data.push_back(crfcfgkeepalivetimermax.get_name_leafdata());
    if (crfcfgkeepalivetimermin.is_set || is_set(crfcfgkeepalivetimermin.yfilter)) leaf_name_data.push_back(crfcfgkeepalivetimermin.get_name_leafdata());
    if (crfcfgmaintenancemode.is_set || is_set(crfcfgmaintenancemode.yfilter)) leaf_name_data.push_back(crfcfgmaintenancemode.get_name_leafdata());
    if (crfcfgnotifsenabled.is_set || is_set(crfcfgnotifsenabled.yfilter)) leaf_name_data.push_back(crfcfgnotifsenabled.get_name_leafdata());
    if (crfcfgnotiftimer.is_set || is_set(crfcfgnotiftimer.yfilter)) leaf_name_data.push_back(crfcfgnotiftimer.get_name_leafdata());
    if (crfcfgnotiftimermax.is_set || is_set(crfcfgnotiftimermax.yfilter)) leaf_name_data.push_back(crfcfgnotiftimermax.get_name_leafdata());
    if (crfcfgnotiftimermin.is_set || is_set(crfcfgnotiftimermin.yfilter)) leaf_name_data.push_back(crfcfgnotiftimermin.get_name_leafdata());
    if (crfcfgredundancymode.is_set || is_set(crfcfgredundancymode.yfilter)) leaf_name_data.push_back(crfcfgredundancymode.get_name_leafdata());
    if (crfcfgredundancymodedescr.is_set || is_set(crfcfgredundancymodedescr.yfilter)) leaf_name_data.push_back(crfcfgredundancymodedescr.get_name_leafdata());
    if (crfcfgredundancyopermode.is_set || is_set(crfcfgredundancyopermode.yfilter)) leaf_name_data.push_back(crfcfgredundancyopermode.get_name_leafdata());
    if (crfcfgsplitmode.is_set || is_set(crfcfgsplitmode.yfilter)) leaf_name_data.push_back(crfcfgsplitmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfcfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfcfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRfMib::Crfcfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cRFCfgAdminAction")
    {
        crfcfgadminaction = value;
        crfcfgadminaction.value_namespace = name_space;
        crfcfgadminaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgKeepaliveThresh")
    {
        crfcfgkeepalivethresh = value;
        crfcfgkeepalivethresh.value_namespace = name_space;
        crfcfgkeepalivethresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgKeepaliveThreshMax")
    {
        crfcfgkeepalivethreshmax = value;
        crfcfgkeepalivethreshmax.value_namespace = name_space;
        crfcfgkeepalivethreshmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgKeepaliveThreshMin")
    {
        crfcfgkeepalivethreshmin = value;
        crfcfgkeepalivethreshmin.value_namespace = name_space;
        crfcfgkeepalivethreshmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgKeepaliveTimer")
    {
        crfcfgkeepalivetimer = value;
        crfcfgkeepalivetimer.value_namespace = name_space;
        crfcfgkeepalivetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgKeepaliveTimerMax")
    {
        crfcfgkeepalivetimermax = value;
        crfcfgkeepalivetimermax.value_namespace = name_space;
        crfcfgkeepalivetimermax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgKeepaliveTimerMin")
    {
        crfcfgkeepalivetimermin = value;
        crfcfgkeepalivetimermin.value_namespace = name_space;
        crfcfgkeepalivetimermin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgMaintenanceMode")
    {
        crfcfgmaintenancemode = value;
        crfcfgmaintenancemode.value_namespace = name_space;
        crfcfgmaintenancemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgNotifsEnabled")
    {
        crfcfgnotifsenabled = value;
        crfcfgnotifsenabled.value_namespace = name_space;
        crfcfgnotifsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgNotifTimer")
    {
        crfcfgnotiftimer = value;
        crfcfgnotiftimer.value_namespace = name_space;
        crfcfgnotiftimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgNotifTimerMax")
    {
        crfcfgnotiftimermax = value;
        crfcfgnotiftimermax.value_namespace = name_space;
        crfcfgnotiftimermax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgNotifTimerMin")
    {
        crfcfgnotiftimermin = value;
        crfcfgnotiftimermin.value_namespace = name_space;
        crfcfgnotiftimermin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgRedundancyMode")
    {
        crfcfgredundancymode = value;
        crfcfgredundancymode.value_namespace = name_space;
        crfcfgredundancymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgRedundancyModeDescr")
    {
        crfcfgredundancymodedescr = value;
        crfcfgredundancymodedescr.value_namespace = name_space;
        crfcfgredundancymodedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgRedundancyOperMode")
    {
        crfcfgredundancyopermode = value;
        crfcfgredundancyopermode.value_namespace = name_space;
        crfcfgredundancyopermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFCfgSplitMode")
    {
        crfcfgsplitmode = value;
        crfcfgsplitmode.value_namespace = name_space;
        crfcfgsplitmode.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRfMib::Crfcfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cRFCfgAdminAction")
    {
        crfcfgadminaction.yfilter = yfilter;
    }
    if(value_path == "cRFCfgKeepaliveThresh")
    {
        crfcfgkeepalivethresh.yfilter = yfilter;
    }
    if(value_path == "cRFCfgKeepaliveThreshMax")
    {
        crfcfgkeepalivethreshmax.yfilter = yfilter;
    }
    if(value_path == "cRFCfgKeepaliveThreshMin")
    {
        crfcfgkeepalivethreshmin.yfilter = yfilter;
    }
    if(value_path == "cRFCfgKeepaliveTimer")
    {
        crfcfgkeepalivetimer.yfilter = yfilter;
    }
    if(value_path == "cRFCfgKeepaliveTimerMax")
    {
        crfcfgkeepalivetimermax.yfilter = yfilter;
    }
    if(value_path == "cRFCfgKeepaliveTimerMin")
    {
        crfcfgkeepalivetimermin.yfilter = yfilter;
    }
    if(value_path == "cRFCfgMaintenanceMode")
    {
        crfcfgmaintenancemode.yfilter = yfilter;
    }
    if(value_path == "cRFCfgNotifsEnabled")
    {
        crfcfgnotifsenabled.yfilter = yfilter;
    }
    if(value_path == "cRFCfgNotifTimer")
    {
        crfcfgnotiftimer.yfilter = yfilter;
    }
    if(value_path == "cRFCfgNotifTimerMax")
    {
        crfcfgnotiftimermax.yfilter = yfilter;
    }
    if(value_path == "cRFCfgNotifTimerMin")
    {
        crfcfgnotiftimermin.yfilter = yfilter;
    }
    if(value_path == "cRFCfgRedundancyMode")
    {
        crfcfgredundancymode.yfilter = yfilter;
    }
    if(value_path == "cRFCfgRedundancyModeDescr")
    {
        crfcfgredundancymodedescr.yfilter = yfilter;
    }
    if(value_path == "cRFCfgRedundancyOperMode")
    {
        crfcfgredundancyopermode.yfilter = yfilter;
    }
    if(value_path == "cRFCfgSplitMode")
    {
        crfcfgsplitmode.yfilter = yfilter;
    }
}

bool CiscoRfMib::Crfcfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFCfgAdminAction" || name == "cRFCfgKeepaliveThresh" || name == "cRFCfgKeepaliveThreshMax" || name == "cRFCfgKeepaliveThreshMin" || name == "cRFCfgKeepaliveTimer" || name == "cRFCfgKeepaliveTimerMax" || name == "cRFCfgKeepaliveTimerMin" || name == "cRFCfgMaintenanceMode" || name == "cRFCfgNotifsEnabled" || name == "cRFCfgNotifTimer" || name == "cRFCfgNotifTimerMax" || name == "cRFCfgNotifTimerMin" || name == "cRFCfgRedundancyMode" || name == "cRFCfgRedundancyModeDescr" || name == "cRFCfgRedundancyOperMode" || name == "cRFCfgSplitMode")
        return true;
    return false;
}

CiscoRfMib::Crfhistory::Crfhistory()
    :
    crfhistorycoldstarts{YType::uint32, "cRFHistoryColdStarts"},
    crfhistorystandbyavailtime{YType::int32, "cRFHistoryStandByAvailTime"},
    crfhistorytablemaxlength{YType::uint32, "cRFHistoryTableMaxLength"}
{
    yang_name = "cRFHistory"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::Crfhistory::~Crfhistory()
{
}

bool CiscoRfMib::Crfhistory::has_data() const
{
    return crfhistorycoldstarts.is_set
	|| crfhistorystandbyavailtime.is_set
	|| crfhistorytablemaxlength.is_set;
}

bool CiscoRfMib::Crfhistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crfhistorycoldstarts.yfilter)
	|| ydk::is_set(crfhistorystandbyavailtime.yfilter)
	|| ydk::is_set(crfhistorytablemaxlength.yfilter);
}

std::string CiscoRfMib::Crfhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFHistory";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfhistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crfhistorycoldstarts.is_set || is_set(crfhistorycoldstarts.yfilter)) leaf_name_data.push_back(crfhistorycoldstarts.get_name_leafdata());
    if (crfhistorystandbyavailtime.is_set || is_set(crfhistorystandbyavailtime.yfilter)) leaf_name_data.push_back(crfhistorystandbyavailtime.get_name_leafdata());
    if (crfhistorytablemaxlength.is_set || is_set(crfhistorytablemaxlength.yfilter)) leaf_name_data.push_back(crfhistorytablemaxlength.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRfMib::Crfhistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cRFHistoryColdStarts")
    {
        crfhistorycoldstarts = value;
        crfhistorycoldstarts.value_namespace = name_space;
        crfhistorycoldstarts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFHistoryStandByAvailTime")
    {
        crfhistorystandbyavailtime = value;
        crfhistorystandbyavailtime.value_namespace = name_space;
        crfhistorystandbyavailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFHistoryTableMaxLength")
    {
        crfhistorytablemaxlength = value;
        crfhistorytablemaxlength.value_namespace = name_space;
        crfhistorytablemaxlength.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRfMib::Crfhistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cRFHistoryColdStarts")
    {
        crfhistorycoldstarts.yfilter = yfilter;
    }
    if(value_path == "cRFHistoryStandByAvailTime")
    {
        crfhistorystandbyavailtime.yfilter = yfilter;
    }
    if(value_path == "cRFHistoryTableMaxLength")
    {
        crfhistorytablemaxlength.yfilter = yfilter;
    }
}

bool CiscoRfMib::Crfhistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFHistoryColdStarts" || name == "cRFHistoryStandByAvailTime" || name == "cRFHistoryTableMaxLength")
        return true;
    return false;
}

CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapstable()
{
    yang_name = "cRFStatusRFModeCapsTable"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::Crfstatusrfmodecapstable::~Crfstatusrfmodecapstable()
{
}

bool CiscoRfMib::Crfstatusrfmodecapstable::has_data() const
{
    for (std::size_t index=0; index<crfstatusrfmodecapsentry.size(); index++)
    {
        if(crfstatusrfmodecapsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoRfMib::Crfstatusrfmodecapstable::has_operation() const
{
    for (std::size_t index=0; index<crfstatusrfmodecapsentry.size(); index++)
    {
        if(crfstatusrfmodecapsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoRfMib::Crfstatusrfmodecapstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFStatusRFModeCapsTable";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfstatusrfmodecapstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfstatusrfmodecapstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cRFStatusRFModeCapsEntry")
    {
        for(auto const & c : crfstatusrfmodecapsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry>();
        c->parent = this;
        crfstatusrfmodecapsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfstatusrfmodecapstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : crfstatusrfmodecapsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoRfMib::Crfstatusrfmodecapstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoRfMib::Crfstatusrfmodecapstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoRfMib::Crfstatusrfmodecapstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFStatusRFModeCapsEntry")
        return true;
    return false;
}

CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::Crfstatusrfmodecapsentry()
    :
    crfstatusrfmodecapsmode{YType::enumeration, "cRFStatusRFModeCapsMode"},
    crfstatusrfmodecapsmodedescr{YType::str, "cRFStatusRFModeCapsModeDescr"}
{
    yang_name = "cRFStatusRFModeCapsEntry"; yang_parent_name = "cRFStatusRFModeCapsTable";
}

CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::~Crfstatusrfmodecapsentry()
{
}

bool CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::has_data() const
{
    return crfstatusrfmodecapsmode.is_set
	|| crfstatusrfmodecapsmodedescr.is_set;
}

bool CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crfstatusrfmodecapsmode.yfilter)
	|| ydk::is_set(crfstatusrfmodecapsmodedescr.yfilter);
}

std::string CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFStatusRFModeCapsEntry" <<"[cRFStatusRFModeCapsMode='" <<crfstatusrfmodecapsmode <<"']";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/cRFStatusRFModeCapsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crfstatusrfmodecapsmode.is_set || is_set(crfstatusrfmodecapsmode.yfilter)) leaf_name_data.push_back(crfstatusrfmodecapsmode.get_name_leafdata());
    if (crfstatusrfmodecapsmodedescr.is_set || is_set(crfstatusrfmodecapsmodedescr.yfilter)) leaf_name_data.push_back(crfstatusrfmodecapsmodedescr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cRFStatusRFModeCapsMode")
    {
        crfstatusrfmodecapsmode = value;
        crfstatusrfmodecapsmode.value_namespace = name_space;
        crfstatusrfmodecapsmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusRFModeCapsModeDescr")
    {
        crfstatusrfmodecapsmodedescr = value;
        crfstatusrfmodecapsmodedescr.value_namespace = name_space;
        crfstatusrfmodecapsmodedescr.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cRFStatusRFModeCapsMode")
    {
        crfstatusrfmodecapsmode.yfilter = yfilter;
    }
    if(value_path == "cRFStatusRFModeCapsModeDescr")
    {
        crfstatusrfmodecapsmodedescr.yfilter = yfilter;
    }
}

bool CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFStatusRFModeCapsMode" || name == "cRFStatusRFModeCapsModeDescr")
        return true;
    return false;
}

CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchovertable()
{
    yang_name = "cRFHistorySwitchOverTable"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::Crfhistoryswitchovertable::~Crfhistoryswitchovertable()
{
}

bool CiscoRfMib::Crfhistoryswitchovertable::has_data() const
{
    for (std::size_t index=0; index<crfhistoryswitchoverentry.size(); index++)
    {
        if(crfhistoryswitchoverentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoRfMib::Crfhistoryswitchovertable::has_operation() const
{
    for (std::size_t index=0; index<crfhistoryswitchoverentry.size(); index++)
    {
        if(crfhistoryswitchoverentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoRfMib::Crfhistoryswitchovertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFHistorySwitchOverTable";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfhistoryswitchovertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfhistoryswitchovertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cRFHistorySwitchOverEntry")
    {
        for(auto const & c : crfhistoryswitchoverentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry>();
        c->parent = this;
        crfhistoryswitchoverentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfhistoryswitchovertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : crfhistoryswitchoverentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoRfMib::Crfhistoryswitchovertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoRfMib::Crfhistoryswitchovertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoRfMib::Crfhistoryswitchovertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFHistorySwitchOverEntry")
        return true;
    return false;
}

CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::Crfhistoryswitchoverentry()
    :
    crfhistoryswitchoverindex{YType::uint32, "cRFHistorySwitchOverIndex"},
    crfhistorycurractiveunitid{YType::int32, "cRFHistoryCurrActiveUnitId"},
    crfhistoryprevactiveunitid{YType::int32, "cRFHistoryPrevActiveUnitId"},
    crfhistoryswacttime{YType::str, "cRFHistorySwactTime"},
    crfhistoryswitchoverreason{YType::enumeration, "cRFHistorySwitchOverReason"}
{
    yang_name = "cRFHistorySwitchOverEntry"; yang_parent_name = "cRFHistorySwitchOverTable";
}

CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::~Crfhistoryswitchoverentry()
{
}

bool CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::has_data() const
{
    return crfhistoryswitchoverindex.is_set
	|| crfhistorycurractiveunitid.is_set
	|| crfhistoryprevactiveunitid.is_set
	|| crfhistoryswacttime.is_set
	|| crfhistoryswitchoverreason.is_set;
}

bool CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crfhistoryswitchoverindex.yfilter)
	|| ydk::is_set(crfhistorycurractiveunitid.yfilter)
	|| ydk::is_set(crfhistoryprevactiveunitid.yfilter)
	|| ydk::is_set(crfhistoryswacttime.yfilter)
	|| ydk::is_set(crfhistoryswitchoverreason.yfilter);
}

std::string CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFHistorySwitchOverEntry" <<"[cRFHistorySwitchOverIndex='" <<crfhistoryswitchoverindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/cRFHistorySwitchOverTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crfhistoryswitchoverindex.is_set || is_set(crfhistoryswitchoverindex.yfilter)) leaf_name_data.push_back(crfhistoryswitchoverindex.get_name_leafdata());
    if (crfhistorycurractiveunitid.is_set || is_set(crfhistorycurractiveunitid.yfilter)) leaf_name_data.push_back(crfhistorycurractiveunitid.get_name_leafdata());
    if (crfhistoryprevactiveunitid.is_set || is_set(crfhistoryprevactiveunitid.yfilter)) leaf_name_data.push_back(crfhistoryprevactiveunitid.get_name_leafdata());
    if (crfhistoryswacttime.is_set || is_set(crfhistoryswacttime.yfilter)) leaf_name_data.push_back(crfhistoryswacttime.get_name_leafdata());
    if (crfhistoryswitchoverreason.is_set || is_set(crfhistoryswitchoverreason.yfilter)) leaf_name_data.push_back(crfhistoryswitchoverreason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cRFHistorySwitchOverIndex")
    {
        crfhistoryswitchoverindex = value;
        crfhistoryswitchoverindex.value_namespace = name_space;
        crfhistoryswitchoverindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFHistoryCurrActiveUnitId")
    {
        crfhistorycurractiveunitid = value;
        crfhistorycurractiveunitid.value_namespace = name_space;
        crfhistorycurractiveunitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFHistoryPrevActiveUnitId")
    {
        crfhistoryprevactiveunitid = value;
        crfhistoryprevactiveunitid.value_namespace = name_space;
        crfhistoryprevactiveunitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFHistorySwactTime")
    {
        crfhistoryswacttime = value;
        crfhistoryswacttime.value_namespace = name_space;
        crfhistoryswacttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFHistorySwitchOverReason")
    {
        crfhistoryswitchoverreason = value;
        crfhistoryswitchoverreason.value_namespace = name_space;
        crfhistoryswitchoverreason.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cRFHistorySwitchOverIndex")
    {
        crfhistoryswitchoverindex.yfilter = yfilter;
    }
    if(value_path == "cRFHistoryCurrActiveUnitId")
    {
        crfhistorycurractiveunitid.yfilter = yfilter;
    }
    if(value_path == "cRFHistoryPrevActiveUnitId")
    {
        crfhistoryprevactiveunitid.yfilter = yfilter;
    }
    if(value_path == "cRFHistorySwactTime")
    {
        crfhistoryswacttime.yfilter = yfilter;
    }
    if(value_path == "cRFHistorySwitchOverReason")
    {
        crfhistoryswitchoverreason.yfilter = yfilter;
    }
}

bool CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFHistorySwitchOverIndex" || name == "cRFHistoryCurrActiveUnitId" || name == "cRFHistoryPrevActiveUnitId" || name == "cRFHistorySwactTime" || name == "cRFHistorySwitchOverReason")
        return true;
    return false;
}

CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfclienttable()
{
    yang_name = "cRFStatusRFClientTable"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::Crfstatusrfclienttable::~Crfstatusrfclienttable()
{
}

bool CiscoRfMib::Crfstatusrfclienttable::has_data() const
{
    for (std::size_t index=0; index<crfstatusrfcliententry.size(); index++)
    {
        if(crfstatusrfcliententry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoRfMib::Crfstatusrfclienttable::has_operation() const
{
    for (std::size_t index=0; index<crfstatusrfcliententry.size(); index++)
    {
        if(crfstatusrfcliententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoRfMib::Crfstatusrfclienttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFStatusRFClientTable";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfstatusrfclienttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfstatusrfclienttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cRFStatusRFClientEntry")
    {
        for(auto const & c : crfstatusrfcliententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry>();
        c->parent = this;
        crfstatusrfcliententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfstatusrfclienttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : crfstatusrfcliententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoRfMib::Crfstatusrfclienttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoRfMib::Crfstatusrfclienttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoRfMib::Crfstatusrfclienttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFStatusRFClientEntry")
        return true;
    return false;
}

CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::Crfstatusrfcliententry()
    :
    crfstatusrfclientid{YType::uint32, "cRFStatusRFClientID"},
    crfstatusrfclientdescr{YType::str, "cRFStatusRFClientDescr"},
    crfstatusrfclientredtime{YType::uint32, "cRFStatusRFClientRedTime"},
    crfstatusrfclientseq{YType::uint32, "cRFStatusRFClientSeq"},
    crfstatusrfclientstatus{YType::enumeration, "cRFStatusRFClientStatus"}
{
    yang_name = "cRFStatusRFClientEntry"; yang_parent_name = "cRFStatusRFClientTable";
}

CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::~Crfstatusrfcliententry()
{
}

bool CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::has_data() const
{
    return crfstatusrfclientid.is_set
	|| crfstatusrfclientdescr.is_set
	|| crfstatusrfclientredtime.is_set
	|| crfstatusrfclientseq.is_set
	|| crfstatusrfclientstatus.is_set;
}

bool CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crfstatusrfclientid.yfilter)
	|| ydk::is_set(crfstatusrfclientdescr.yfilter)
	|| ydk::is_set(crfstatusrfclientredtime.yfilter)
	|| ydk::is_set(crfstatusrfclientseq.yfilter)
	|| ydk::is_set(crfstatusrfclientstatus.yfilter);
}

std::string CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cRFStatusRFClientEntry" <<"[cRFStatusRFClientID='" <<crfstatusrfclientid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RF-MIB:CISCO-RF-MIB/cRFStatusRFClientTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crfstatusrfclientid.is_set || is_set(crfstatusrfclientid.yfilter)) leaf_name_data.push_back(crfstatusrfclientid.get_name_leafdata());
    if (crfstatusrfclientdescr.is_set || is_set(crfstatusrfclientdescr.yfilter)) leaf_name_data.push_back(crfstatusrfclientdescr.get_name_leafdata());
    if (crfstatusrfclientredtime.is_set || is_set(crfstatusrfclientredtime.yfilter)) leaf_name_data.push_back(crfstatusrfclientredtime.get_name_leafdata());
    if (crfstatusrfclientseq.is_set || is_set(crfstatusrfclientseq.yfilter)) leaf_name_data.push_back(crfstatusrfclientseq.get_name_leafdata());
    if (crfstatusrfclientstatus.is_set || is_set(crfstatusrfclientstatus.yfilter)) leaf_name_data.push_back(crfstatusrfclientstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cRFStatusRFClientID")
    {
        crfstatusrfclientid = value;
        crfstatusrfclientid.value_namespace = name_space;
        crfstatusrfclientid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusRFClientDescr")
    {
        crfstatusrfclientdescr = value;
        crfstatusrfclientdescr.value_namespace = name_space;
        crfstatusrfclientdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusRFClientRedTime")
    {
        crfstatusrfclientredtime = value;
        crfstatusrfclientredtime.value_namespace = name_space;
        crfstatusrfclientredtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusRFClientSeq")
    {
        crfstatusrfclientseq = value;
        crfstatusrfclientseq.value_namespace = name_space;
        crfstatusrfclientseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRFStatusRFClientStatus")
    {
        crfstatusrfclientstatus = value;
        crfstatusrfclientstatus.value_namespace = name_space;
        crfstatusrfclientstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cRFStatusRFClientID")
    {
        crfstatusrfclientid.yfilter = yfilter;
    }
    if(value_path == "cRFStatusRFClientDescr")
    {
        crfstatusrfclientdescr.yfilter = yfilter;
    }
    if(value_path == "cRFStatusRFClientRedTime")
    {
        crfstatusrfclientredtime.yfilter = yfilter;
    }
    if(value_path == "cRFStatusRFClientSeq")
    {
        crfstatusrfclientseq.yfilter = yfilter;
    }
    if(value_path == "cRFStatusRFClientStatus")
    {
        crfstatusrfclientstatus.yfilter = yfilter;
    }
}

bool CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cRFStatusRFClientID" || name == "cRFStatusRFClientDescr" || name == "cRFStatusRFClientRedTime" || name == "cRFStatusRFClientSeq" || name == "cRFStatusRFClientStatus")
        return true;
    return false;
}

const Enum::YLeaf Rfaction::noAction {0, "noAction"};
const Enum::YLeaf Rfaction::reloadPeer {1, "reloadPeer"};
const Enum::YLeaf Rfaction::reloadShelf {2, "reloadShelf"};
const Enum::YLeaf Rfaction::switchActivity {3, "switchActivity"};
const Enum::YLeaf Rfaction::forceSwitchActivity {4, "forceSwitchActivity"};

const Enum::YLeaf Rfmode::nonRedundant {1, "nonRedundant"};
const Enum::YLeaf Rfmode::staticLoadShareNonRedundant {2, "staticLoadShareNonRedundant"};
const Enum::YLeaf Rfmode::dynamicLoadShareNonRedundant {3, "dynamicLoadShareNonRedundant"};
const Enum::YLeaf Rfmode::staticLoadShareRedundant {4, "staticLoadShareRedundant"};
const Enum::YLeaf Rfmode::dynamicLoadShareRedundant {5, "dynamicLoadShareRedundant"};
const Enum::YLeaf Rfmode::coldStandbyRedundant {6, "coldStandbyRedundant"};
const Enum::YLeaf Rfmode::warmStandbyRedundant {7, "warmStandbyRedundant"};
const Enum::YLeaf Rfmode::hotStandbyRedundant {8, "hotStandbyRedundant"};

const Enum::YLeaf Rfstate::notKnown {1, "notKnown"};
const Enum::YLeaf Rfstate::disabled {2, "disabled"};
const Enum::YLeaf Rfstate::initialization {3, "initialization"};
const Enum::YLeaf Rfstate::negotiation {4, "negotiation"};
const Enum::YLeaf Rfstate::standbyCold {5, "standbyCold"};
const Enum::YLeaf Rfstate::standbyColdConfig {6, "standbyColdConfig"};
const Enum::YLeaf Rfstate::standbyColdFileSys {7, "standbyColdFileSys"};
const Enum::YLeaf Rfstate::standbyColdBulk {8, "standbyColdBulk"};
const Enum::YLeaf Rfstate::standbyHot {9, "standbyHot"};
const Enum::YLeaf Rfstate::activeFast {10, "activeFast"};
const Enum::YLeaf Rfstate::activeDrain {11, "activeDrain"};
const Enum::YLeaf Rfstate::activePreconfig {12, "activePreconfig"};
const Enum::YLeaf Rfstate::activePostconfig {13, "activePostconfig"};
const Enum::YLeaf Rfstate::active {14, "active"};
const Enum::YLeaf Rfstate::activeExtraload {15, "activeExtraload"};
const Enum::YLeaf Rfstate::activeHandback {16, "activeHandback"};

const Enum::YLeaf Rfissustaterev1::init {0, "init"};
const Enum::YLeaf Rfissustaterev1::systemReset {1, "systemReset"};
const Enum::YLeaf Rfissustaterev1::loadVersion {3, "loadVersion"};
const Enum::YLeaf Rfissustaterev1::loadVersionSwitchover {4, "loadVersionSwitchover"};
const Enum::YLeaf Rfissustaterev1::runVersion {6, "runVersion"};
const Enum::YLeaf Rfissustaterev1::runVersionSwitchover {7, "runVersionSwitchover"};
const Enum::YLeaf Rfissustaterev1::commitVersion {9, "commitVersion"};

const Enum::YLeaf Rfswactreasontype::unsupported {1, "unsupported"};
const Enum::YLeaf Rfswactreasontype::none {2, "none"};
const Enum::YLeaf Rfswactreasontype::notKnown {3, "notKnown"};
const Enum::YLeaf Rfswactreasontype::userInitiated {4, "userInitiated"};
const Enum::YLeaf Rfswactreasontype::userForced {5, "userForced"};
const Enum::YLeaf Rfswactreasontype::activeUnitFailed {6, "activeUnitFailed"};
const Enum::YLeaf Rfswactreasontype::activeUnitRemoved {7, "activeUnitRemoved"};

const Enum::YLeaf Rfissustate::unset {0, "unset"};
const Enum::YLeaf Rfissustate::init {1, "init"};
const Enum::YLeaf Rfissustate::loadVersion {2, "loadVersion"};
const Enum::YLeaf Rfissustate::runVersion {3, "runVersion"};
const Enum::YLeaf Rfissustate::commitVersion {4, "commitVersion"};

const Enum::YLeaf Rfclientstatus::noStatus {1, "noStatus"};
const Enum::YLeaf Rfclientstatus::clientNotRedundant {2, "clientNotRedundant"};
const Enum::YLeaf Rfclientstatus::clientRedundancyInProgress {3, "clientRedundancyInProgress"};
const Enum::YLeaf Rfclientstatus::clientRedundant {4, "clientRedundant"};


}
}

