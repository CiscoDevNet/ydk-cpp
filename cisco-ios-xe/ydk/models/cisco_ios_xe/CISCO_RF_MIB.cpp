
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RF_MIB.hpp"

namespace ydk {
namespace CISCO_RF_MIB {

CiscoRfMib::CiscoRfMib()
    :
    crfcfg_(std::make_shared<CiscoRfMib::Crfcfg>())
	,crfhistory_(std::make_shared<CiscoRfMib::Crfhistory>())
	,crfhistoryswitchovertable_(std::make_shared<CiscoRfMib::Crfhistoryswitchovertable>())
	,crfstatus_(std::make_shared<CiscoRfMib::Crfstatus>())
	,crfstatusrfclienttable_(std::make_shared<CiscoRfMib::Crfstatusrfclienttable>())
	,crfstatusrfmodecapstable_(std::make_shared<CiscoRfMib::Crfstatusrfmodecapstable>())
{
    crfcfg_->parent = this;

    crfhistory_->parent = this;

    crfhistoryswitchovertable_->parent = this;

    crfstatus_->parent = this;

    crfstatusrfclienttable_->parent = this;

    crfstatusrfmodecapstable_->parent = this;

    yang_name = "CISCO-RF-MIB"; yang_parent_name = "CISCO-RF-MIB";
}

CiscoRfMib::~CiscoRfMib()
{
}

bool CiscoRfMib::has_data() const
{
    return (crfcfg_ !=  nullptr && crfcfg_->has_data())
	|| (crfhistory_ !=  nullptr && crfhistory_->has_data())
	|| (crfhistoryswitchovertable_ !=  nullptr && crfhistoryswitchovertable_->has_data())
	|| (crfstatus_ !=  nullptr && crfstatus_->has_data())
	|| (crfstatusrfclienttable_ !=  nullptr && crfstatusrfclienttable_->has_data())
	|| (crfstatusrfmodecapstable_ !=  nullptr && crfstatusrfmodecapstable_->has_data());
}

bool CiscoRfMib::has_operation() const
{
    return is_set(operation)
	|| (crfcfg_ !=  nullptr && crfcfg_->has_operation())
	|| (crfhistory_ !=  nullptr && crfhistory_->has_operation())
	|| (crfhistoryswitchovertable_ !=  nullptr && crfhistoryswitchovertable_->has_operation())
	|| (crfstatus_ !=  nullptr && crfstatus_->has_operation())
	|| (crfstatusrfclienttable_ !=  nullptr && crfstatusrfclienttable_->has_operation())
	|| (crfstatusrfmodecapstable_ !=  nullptr && crfstatusrfmodecapstable_->has_operation());
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
        if(crfcfg_ == nullptr)
        {
            crfcfg_ = std::make_shared<CiscoRfMib::Crfcfg>();
        }
        return crfcfg_;
    }

    if(child_yang_name == "cRFHistory")
    {
        if(crfhistory_ == nullptr)
        {
            crfhistory_ = std::make_shared<CiscoRfMib::Crfhistory>();
        }
        return crfhistory_;
    }

    if(child_yang_name == "cRFHistorySwitchOverTable")
    {
        if(crfhistoryswitchovertable_ == nullptr)
        {
            crfhistoryswitchovertable_ = std::make_shared<CiscoRfMib::Crfhistoryswitchovertable>();
        }
        return crfhistoryswitchovertable_;
    }

    if(child_yang_name == "cRFStatus")
    {
        if(crfstatus_ == nullptr)
        {
            crfstatus_ = std::make_shared<CiscoRfMib::Crfstatus>();
        }
        return crfstatus_;
    }

    if(child_yang_name == "cRFStatusRFClientTable")
    {
        if(crfstatusrfclienttable_ == nullptr)
        {
            crfstatusrfclienttable_ = std::make_shared<CiscoRfMib::Crfstatusrfclienttable>();
        }
        return crfstatusrfclienttable_;
    }

    if(child_yang_name == "cRFStatusRFModeCapsTable")
    {
        if(crfstatusrfmodecapstable_ == nullptr)
        {
            crfstatusrfmodecapstable_ = std::make_shared<CiscoRfMib::Crfstatusrfmodecapstable>();
        }
        return crfstatusrfmodecapstable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crfcfg_ != nullptr)
    {
        children["cRFCfg"] = crfcfg_;
    }

    if(crfhistory_ != nullptr)
    {
        children["cRFHistory"] = crfhistory_;
    }

    if(crfhistoryswitchovertable_ != nullptr)
    {
        children["cRFHistorySwitchOverTable"] = crfhistoryswitchovertable_;
    }

    if(crfstatus_ != nullptr)
    {
        children["cRFStatus"] = crfstatus_;
    }

    if(crfstatusrfclienttable_ != nullptr)
    {
        children["cRFStatusRFClientTable"] = crfstatusrfclienttable_;
    }

    if(crfstatusrfmodecapstable_ != nullptr)
    {
        children["cRFStatusRFModeCapsTable"] = crfstatusrfmodecapstable_;
    }

    return children;
}

void CiscoRfMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(crfstatusduplexmode.operation)
	|| is_set(crfstatusfailovertime.operation)
	|| is_set(crfstatusissufromversion.operation)
	|| is_set(crfstatusissustate.operation)
	|| is_set(crfstatusissustaterev1.operation)
	|| is_set(crfstatusissutoversion.operation)
	|| is_set(crfstatuslastswactreasoncode.operation)
	|| is_set(crfstatusmanualswactinhibit.operation)
	|| is_set(crfstatuspeerstandbyentrytime.operation)
	|| is_set(crfstatuspeerunitid.operation)
	|| is_set(crfstatuspeerunitstate.operation)
	|| is_set(crfstatusprimarymode.operation)
	|| is_set(crfstatusunitid.operation)
	|| is_set(crfstatusunitstate.operation);
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

    if (crfstatusduplexmode.is_set || is_set(crfstatusduplexmode.operation)) leaf_name_data.push_back(crfstatusduplexmode.get_name_leafdata());
    if (crfstatusfailovertime.is_set || is_set(crfstatusfailovertime.operation)) leaf_name_data.push_back(crfstatusfailovertime.get_name_leafdata());
    if (crfstatusissufromversion.is_set || is_set(crfstatusissufromversion.operation)) leaf_name_data.push_back(crfstatusissufromversion.get_name_leafdata());
    if (crfstatusissustate.is_set || is_set(crfstatusissustate.operation)) leaf_name_data.push_back(crfstatusissustate.get_name_leafdata());
    if (crfstatusissustaterev1.is_set || is_set(crfstatusissustaterev1.operation)) leaf_name_data.push_back(crfstatusissustaterev1.get_name_leafdata());
    if (crfstatusissutoversion.is_set || is_set(crfstatusissutoversion.operation)) leaf_name_data.push_back(crfstatusissutoversion.get_name_leafdata());
    if (crfstatuslastswactreasoncode.is_set || is_set(crfstatuslastswactreasoncode.operation)) leaf_name_data.push_back(crfstatuslastswactreasoncode.get_name_leafdata());
    if (crfstatusmanualswactinhibit.is_set || is_set(crfstatusmanualswactinhibit.operation)) leaf_name_data.push_back(crfstatusmanualswactinhibit.get_name_leafdata());
    if (crfstatuspeerstandbyentrytime.is_set || is_set(crfstatuspeerstandbyentrytime.operation)) leaf_name_data.push_back(crfstatuspeerstandbyentrytime.get_name_leafdata());
    if (crfstatuspeerunitid.is_set || is_set(crfstatuspeerunitid.operation)) leaf_name_data.push_back(crfstatuspeerunitid.get_name_leafdata());
    if (crfstatuspeerunitstate.is_set || is_set(crfstatuspeerunitstate.operation)) leaf_name_data.push_back(crfstatuspeerunitstate.get_name_leafdata());
    if (crfstatusprimarymode.is_set || is_set(crfstatusprimarymode.operation)) leaf_name_data.push_back(crfstatusprimarymode.get_name_leafdata());
    if (crfstatusunitid.is_set || is_set(crfstatusunitid.operation)) leaf_name_data.push_back(crfstatusunitid.get_name_leafdata());
    if (crfstatusunitstate.is_set || is_set(crfstatusunitstate.operation)) leaf_name_data.push_back(crfstatusunitstate.get_name_leafdata());


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

void CiscoRfMib::Crfstatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cRFStatusDuplexMode")
    {
        crfstatusduplexmode = value;
    }
    if(value_path == "cRFStatusFailoverTime")
    {
        crfstatusfailovertime = value;
    }
    if(value_path == "cRFStatusIssuFromVersion")
    {
        crfstatusissufromversion = value;
    }
    if(value_path == "cRFStatusIssuState")
    {
        crfstatusissustate = value;
    }
    if(value_path == "cRFStatusIssuStateRev1")
    {
        crfstatusissustaterev1 = value;
    }
    if(value_path == "cRFStatusIssuToVersion")
    {
        crfstatusissutoversion = value;
    }
    if(value_path == "cRFStatusLastSwactReasonCode")
    {
        crfstatuslastswactreasoncode = value;
    }
    if(value_path == "cRFStatusManualSwactInhibit")
    {
        crfstatusmanualswactinhibit = value;
    }
    if(value_path == "cRFStatusPeerStandByEntryTime")
    {
        crfstatuspeerstandbyentrytime = value;
    }
    if(value_path == "cRFStatusPeerUnitId")
    {
        crfstatuspeerunitid = value;
    }
    if(value_path == "cRFStatusPeerUnitState")
    {
        crfstatuspeerunitstate = value;
    }
    if(value_path == "cRFStatusPrimaryMode")
    {
        crfstatusprimarymode = value;
    }
    if(value_path == "cRFStatusUnitId")
    {
        crfstatusunitid = value;
    }
    if(value_path == "cRFStatusUnitState")
    {
        crfstatusunitstate = value;
    }
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
    return is_set(operation)
	|| is_set(crfcfgadminaction.operation)
	|| is_set(crfcfgkeepalivethresh.operation)
	|| is_set(crfcfgkeepalivethreshmax.operation)
	|| is_set(crfcfgkeepalivethreshmin.operation)
	|| is_set(crfcfgkeepalivetimer.operation)
	|| is_set(crfcfgkeepalivetimermax.operation)
	|| is_set(crfcfgkeepalivetimermin.operation)
	|| is_set(crfcfgmaintenancemode.operation)
	|| is_set(crfcfgnotifsenabled.operation)
	|| is_set(crfcfgnotiftimer.operation)
	|| is_set(crfcfgnotiftimermax.operation)
	|| is_set(crfcfgnotiftimermin.operation)
	|| is_set(crfcfgredundancymode.operation)
	|| is_set(crfcfgredundancymodedescr.operation)
	|| is_set(crfcfgredundancyopermode.operation)
	|| is_set(crfcfgsplitmode.operation);
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

    if (crfcfgadminaction.is_set || is_set(crfcfgadminaction.operation)) leaf_name_data.push_back(crfcfgadminaction.get_name_leafdata());
    if (crfcfgkeepalivethresh.is_set || is_set(crfcfgkeepalivethresh.operation)) leaf_name_data.push_back(crfcfgkeepalivethresh.get_name_leafdata());
    if (crfcfgkeepalivethreshmax.is_set || is_set(crfcfgkeepalivethreshmax.operation)) leaf_name_data.push_back(crfcfgkeepalivethreshmax.get_name_leafdata());
    if (crfcfgkeepalivethreshmin.is_set || is_set(crfcfgkeepalivethreshmin.operation)) leaf_name_data.push_back(crfcfgkeepalivethreshmin.get_name_leafdata());
    if (crfcfgkeepalivetimer.is_set || is_set(crfcfgkeepalivetimer.operation)) leaf_name_data.push_back(crfcfgkeepalivetimer.get_name_leafdata());
    if (crfcfgkeepalivetimermax.is_set || is_set(crfcfgkeepalivetimermax.operation)) leaf_name_data.push_back(crfcfgkeepalivetimermax.get_name_leafdata());
    if (crfcfgkeepalivetimermin.is_set || is_set(crfcfgkeepalivetimermin.operation)) leaf_name_data.push_back(crfcfgkeepalivetimermin.get_name_leafdata());
    if (crfcfgmaintenancemode.is_set || is_set(crfcfgmaintenancemode.operation)) leaf_name_data.push_back(crfcfgmaintenancemode.get_name_leafdata());
    if (crfcfgnotifsenabled.is_set || is_set(crfcfgnotifsenabled.operation)) leaf_name_data.push_back(crfcfgnotifsenabled.get_name_leafdata());
    if (crfcfgnotiftimer.is_set || is_set(crfcfgnotiftimer.operation)) leaf_name_data.push_back(crfcfgnotiftimer.get_name_leafdata());
    if (crfcfgnotiftimermax.is_set || is_set(crfcfgnotiftimermax.operation)) leaf_name_data.push_back(crfcfgnotiftimermax.get_name_leafdata());
    if (crfcfgnotiftimermin.is_set || is_set(crfcfgnotiftimermin.operation)) leaf_name_data.push_back(crfcfgnotiftimermin.get_name_leafdata());
    if (crfcfgredundancymode.is_set || is_set(crfcfgredundancymode.operation)) leaf_name_data.push_back(crfcfgredundancymode.get_name_leafdata());
    if (crfcfgredundancymodedescr.is_set || is_set(crfcfgredundancymodedescr.operation)) leaf_name_data.push_back(crfcfgredundancymodedescr.get_name_leafdata());
    if (crfcfgredundancyopermode.is_set || is_set(crfcfgredundancyopermode.operation)) leaf_name_data.push_back(crfcfgredundancyopermode.get_name_leafdata());
    if (crfcfgsplitmode.is_set || is_set(crfcfgsplitmode.operation)) leaf_name_data.push_back(crfcfgsplitmode.get_name_leafdata());


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

void CiscoRfMib::Crfcfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cRFCfgAdminAction")
    {
        crfcfgadminaction = value;
    }
    if(value_path == "cRFCfgKeepaliveThresh")
    {
        crfcfgkeepalivethresh = value;
    }
    if(value_path == "cRFCfgKeepaliveThreshMax")
    {
        crfcfgkeepalivethreshmax = value;
    }
    if(value_path == "cRFCfgKeepaliveThreshMin")
    {
        crfcfgkeepalivethreshmin = value;
    }
    if(value_path == "cRFCfgKeepaliveTimer")
    {
        crfcfgkeepalivetimer = value;
    }
    if(value_path == "cRFCfgKeepaliveTimerMax")
    {
        crfcfgkeepalivetimermax = value;
    }
    if(value_path == "cRFCfgKeepaliveTimerMin")
    {
        crfcfgkeepalivetimermin = value;
    }
    if(value_path == "cRFCfgMaintenanceMode")
    {
        crfcfgmaintenancemode = value;
    }
    if(value_path == "cRFCfgNotifsEnabled")
    {
        crfcfgnotifsenabled = value;
    }
    if(value_path == "cRFCfgNotifTimer")
    {
        crfcfgnotiftimer = value;
    }
    if(value_path == "cRFCfgNotifTimerMax")
    {
        crfcfgnotiftimermax = value;
    }
    if(value_path == "cRFCfgNotifTimerMin")
    {
        crfcfgnotiftimermin = value;
    }
    if(value_path == "cRFCfgRedundancyMode")
    {
        crfcfgredundancymode = value;
    }
    if(value_path == "cRFCfgRedundancyModeDescr")
    {
        crfcfgredundancymodedescr = value;
    }
    if(value_path == "cRFCfgRedundancyOperMode")
    {
        crfcfgredundancyopermode = value;
    }
    if(value_path == "cRFCfgSplitMode")
    {
        crfcfgsplitmode = value;
    }
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
    return is_set(operation)
	|| is_set(crfhistorycoldstarts.operation)
	|| is_set(crfhistorystandbyavailtime.operation)
	|| is_set(crfhistorytablemaxlength.operation);
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

    if (crfhistorycoldstarts.is_set || is_set(crfhistorycoldstarts.operation)) leaf_name_data.push_back(crfhistorycoldstarts.get_name_leafdata());
    if (crfhistorystandbyavailtime.is_set || is_set(crfhistorystandbyavailtime.operation)) leaf_name_data.push_back(crfhistorystandbyavailtime.get_name_leafdata());
    if (crfhistorytablemaxlength.is_set || is_set(crfhistorytablemaxlength.operation)) leaf_name_data.push_back(crfhistorytablemaxlength.get_name_leafdata());


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

void CiscoRfMib::Crfhistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cRFHistoryColdStarts")
    {
        crfhistorycoldstarts = value;
    }
    if(value_path == "cRFHistoryStandByAvailTime")
    {
        crfhistorystandbyavailtime = value;
    }
    if(value_path == "cRFHistoryTableMaxLength")
    {
        crfhistorytablemaxlength = value;
    }
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
    for (std::size_t index=0; index<crfstatusrfmodecapsentry_.size(); index++)
    {
        if(crfstatusrfmodecapsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoRfMib::Crfstatusrfmodecapstable::has_operation() const
{
    for (std::size_t index=0; index<crfstatusrfmodecapsentry_.size(); index++)
    {
        if(crfstatusrfmodecapsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : crfstatusrfmodecapsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry>();
        c->parent = this;
        crfstatusrfmodecapsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfstatusrfmodecapstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : crfstatusrfmodecapsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoRfMib::Crfstatusrfmodecapstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(crfstatusrfmodecapsmode.operation)
	|| is_set(crfstatusrfmodecapsmodedescr.operation);
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

    if (crfstatusrfmodecapsmode.is_set || is_set(crfstatusrfmodecapsmode.operation)) leaf_name_data.push_back(crfstatusrfmodecapsmode.get_name_leafdata());
    if (crfstatusrfmodecapsmodedescr.is_set || is_set(crfstatusrfmodecapsmodedescr.operation)) leaf_name_data.push_back(crfstatusrfmodecapsmodedescr.get_name_leafdata());


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

void CiscoRfMib::Crfstatusrfmodecapstable::Crfstatusrfmodecapsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cRFStatusRFModeCapsMode")
    {
        crfstatusrfmodecapsmode = value;
    }
    if(value_path == "cRFStatusRFModeCapsModeDescr")
    {
        crfstatusrfmodecapsmodedescr = value;
    }
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
    for (std::size_t index=0; index<crfhistoryswitchoverentry_.size(); index++)
    {
        if(crfhistoryswitchoverentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoRfMib::Crfhistoryswitchovertable::has_operation() const
{
    for (std::size_t index=0; index<crfhistoryswitchoverentry_.size(); index++)
    {
        if(crfhistoryswitchoverentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : crfhistoryswitchoverentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry>();
        c->parent = this;
        crfhistoryswitchoverentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfhistoryswitchovertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : crfhistoryswitchoverentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoRfMib::Crfhistoryswitchovertable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(crfhistoryswitchoverindex.operation)
	|| is_set(crfhistorycurractiveunitid.operation)
	|| is_set(crfhistoryprevactiveunitid.operation)
	|| is_set(crfhistoryswacttime.operation)
	|| is_set(crfhistoryswitchoverreason.operation);
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

    if (crfhistoryswitchoverindex.is_set || is_set(crfhistoryswitchoverindex.operation)) leaf_name_data.push_back(crfhistoryswitchoverindex.get_name_leafdata());
    if (crfhistorycurractiveunitid.is_set || is_set(crfhistorycurractiveunitid.operation)) leaf_name_data.push_back(crfhistorycurractiveunitid.get_name_leafdata());
    if (crfhistoryprevactiveunitid.is_set || is_set(crfhistoryprevactiveunitid.operation)) leaf_name_data.push_back(crfhistoryprevactiveunitid.get_name_leafdata());
    if (crfhistoryswacttime.is_set || is_set(crfhistoryswacttime.operation)) leaf_name_data.push_back(crfhistoryswacttime.get_name_leafdata());
    if (crfhistoryswitchoverreason.is_set || is_set(crfhistoryswitchoverreason.operation)) leaf_name_data.push_back(crfhistoryswitchoverreason.get_name_leafdata());


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

void CiscoRfMib::Crfhistoryswitchovertable::Crfhistoryswitchoverentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cRFHistorySwitchOverIndex")
    {
        crfhistoryswitchoverindex = value;
    }
    if(value_path == "cRFHistoryCurrActiveUnitId")
    {
        crfhistorycurractiveunitid = value;
    }
    if(value_path == "cRFHistoryPrevActiveUnitId")
    {
        crfhistoryprevactiveunitid = value;
    }
    if(value_path == "cRFHistorySwactTime")
    {
        crfhistoryswacttime = value;
    }
    if(value_path == "cRFHistorySwitchOverReason")
    {
        crfhistoryswitchoverreason = value;
    }
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
    for (std::size_t index=0; index<crfstatusrfcliententry_.size(); index++)
    {
        if(crfstatusrfcliententry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoRfMib::Crfstatusrfclienttable::has_operation() const
{
    for (std::size_t index=0; index<crfstatusrfcliententry_.size(); index++)
    {
        if(crfstatusrfcliententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : crfstatusrfcliententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry>();
        c->parent = this;
        crfstatusrfcliententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRfMib::Crfstatusrfclienttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : crfstatusrfcliententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoRfMib::Crfstatusrfclienttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(crfstatusrfclientid.operation)
	|| is_set(crfstatusrfclientdescr.operation)
	|| is_set(crfstatusrfclientredtime.operation)
	|| is_set(crfstatusrfclientseq.operation)
	|| is_set(crfstatusrfclientstatus.operation);
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

    if (crfstatusrfclientid.is_set || is_set(crfstatusrfclientid.operation)) leaf_name_data.push_back(crfstatusrfclientid.get_name_leafdata());
    if (crfstatusrfclientdescr.is_set || is_set(crfstatusrfclientdescr.operation)) leaf_name_data.push_back(crfstatusrfclientdescr.get_name_leafdata());
    if (crfstatusrfclientredtime.is_set || is_set(crfstatusrfclientredtime.operation)) leaf_name_data.push_back(crfstatusrfclientredtime.get_name_leafdata());
    if (crfstatusrfclientseq.is_set || is_set(crfstatusrfclientseq.operation)) leaf_name_data.push_back(crfstatusrfclientseq.get_name_leafdata());
    if (crfstatusrfclientstatus.is_set || is_set(crfstatusrfclientstatus.operation)) leaf_name_data.push_back(crfstatusrfclientstatus.get_name_leafdata());


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

void CiscoRfMib::Crfstatusrfclienttable::Crfstatusrfcliententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cRFStatusRFClientID")
    {
        crfstatusrfclientid = value;
    }
    if(value_path == "cRFStatusRFClientDescr")
    {
        crfstatusrfclientdescr = value;
    }
    if(value_path == "cRFStatusRFClientRedTime")
    {
        crfstatusrfclientredtime = value;
    }
    if(value_path == "cRFStatusRFClientSeq")
    {
        crfstatusrfclientseq = value;
    }
    if(value_path == "cRFStatusRFClientStatus")
    {
        crfstatusrfclientstatus = value;
    }
}

const Enum::YLeaf RfstateEnum::notKnown {1, "notKnown"};
const Enum::YLeaf RfstateEnum::disabled {2, "disabled"};
const Enum::YLeaf RfstateEnum::initialization {3, "initialization"};
const Enum::YLeaf RfstateEnum::negotiation {4, "negotiation"};
const Enum::YLeaf RfstateEnum::standbyCold {5, "standbyCold"};
const Enum::YLeaf RfstateEnum::standbyColdConfig {6, "standbyColdConfig"};
const Enum::YLeaf RfstateEnum::standbyColdFileSys {7, "standbyColdFileSys"};
const Enum::YLeaf RfstateEnum::standbyColdBulk {8, "standbyColdBulk"};
const Enum::YLeaf RfstateEnum::standbyHot {9, "standbyHot"};
const Enum::YLeaf RfstateEnum::activeFast {10, "activeFast"};
const Enum::YLeaf RfstateEnum::activeDrain {11, "activeDrain"};
const Enum::YLeaf RfstateEnum::activePreconfig {12, "activePreconfig"};
const Enum::YLeaf RfstateEnum::activePostconfig {13, "activePostconfig"};
const Enum::YLeaf RfstateEnum::active {14, "active"};
const Enum::YLeaf RfstateEnum::activeExtraload {15, "activeExtraload"};
const Enum::YLeaf RfstateEnum::activeHandback {16, "activeHandback"};

const Enum::YLeaf RfissustateEnum::unset {0, "unset"};
const Enum::YLeaf RfissustateEnum::init {1, "init"};
const Enum::YLeaf RfissustateEnum::loadVersion {2, "loadVersion"};
const Enum::YLeaf RfissustateEnum::runVersion {3, "runVersion"};
const Enum::YLeaf RfissustateEnum::commitVersion {4, "commitVersion"};

const Enum::YLeaf RfactionEnum::noAction {0, "noAction"};
const Enum::YLeaf RfactionEnum::reloadPeer {1, "reloadPeer"};
const Enum::YLeaf RfactionEnum::reloadShelf {2, "reloadShelf"};
const Enum::YLeaf RfactionEnum::switchActivity {3, "switchActivity"};
const Enum::YLeaf RfactionEnum::forceSwitchActivity {4, "forceSwitchActivity"};

const Enum::YLeaf RfmodeEnum::nonRedundant {1, "nonRedundant"};
const Enum::YLeaf RfmodeEnum::staticLoadShareNonRedundant {2, "staticLoadShareNonRedundant"};
const Enum::YLeaf RfmodeEnum::dynamicLoadShareNonRedundant {3, "dynamicLoadShareNonRedundant"};
const Enum::YLeaf RfmodeEnum::staticLoadShareRedundant {4, "staticLoadShareRedundant"};
const Enum::YLeaf RfmodeEnum::dynamicLoadShareRedundant {5, "dynamicLoadShareRedundant"};
const Enum::YLeaf RfmodeEnum::coldStandbyRedundant {6, "coldStandbyRedundant"};
const Enum::YLeaf RfmodeEnum::warmStandbyRedundant {7, "warmStandbyRedundant"};
const Enum::YLeaf RfmodeEnum::hotStandbyRedundant {8, "hotStandbyRedundant"};

const Enum::YLeaf RfclientstatusEnum::noStatus {1, "noStatus"};
const Enum::YLeaf RfclientstatusEnum::clientNotRedundant {2, "clientNotRedundant"};
const Enum::YLeaf RfclientstatusEnum::clientRedundancyInProgress {3, "clientRedundancyInProgress"};
const Enum::YLeaf RfclientstatusEnum::clientRedundant {4, "clientRedundant"};

const Enum::YLeaf RfswactreasontypeEnum::unsupported {1, "unsupported"};
const Enum::YLeaf RfswactreasontypeEnum::none {2, "none"};
const Enum::YLeaf RfswactreasontypeEnum::notKnown {3, "notKnown"};
const Enum::YLeaf RfswactreasontypeEnum::userInitiated {4, "userInitiated"};
const Enum::YLeaf RfswactreasontypeEnum::userForced {5, "userForced"};
const Enum::YLeaf RfswactreasontypeEnum::activeUnitFailed {6, "activeUnitFailed"};
const Enum::YLeaf RfswactreasontypeEnum::activeUnitRemoved {7, "activeUnitRemoved"};

const Enum::YLeaf Rfissustaterev1Enum::init {0, "init"};
const Enum::YLeaf Rfissustaterev1Enum::systemReset {1, "systemReset"};
const Enum::YLeaf Rfissustaterev1Enum::loadVersion {3, "loadVersion"};
const Enum::YLeaf Rfissustaterev1Enum::loadVersionSwitchover {4, "loadVersionSwitchover"};
const Enum::YLeaf Rfissustaterev1Enum::runVersion {6, "runVersion"};
const Enum::YLeaf Rfissustaterev1Enum::runVersionSwitchover {7, "runVersionSwitchover"};
const Enum::YLeaf Rfissustaterev1Enum::commitVersion {9, "commitVersion"};


}
}

