
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_DIAL_CONTROL_MIB.hpp"

namespace ydk {
namespace CISCO_VOICE_DIAL_CONTROL_MIB {

CiscoVoiceDialControlMib::CiscoVoiceDialControlMib()
    :
    cvactivecallstatstable(std::make_shared<CiscoVoiceDialControlMib::Cvactivecallstatstable>())
	,cvactivecallwmtable(std::make_shared<CiscoVoiceDialControlMib::Cvactivecallwmtable>())
	,cvcallactivetable(std::make_shared<CiscoVoiceDialControlMib::Cvcallactivetable>())
	,cvcalldurationstatstable(std::make_shared<CiscoVoiceDialControlMib::Cvcalldurationstatstable>())
	,cvcallhistorytable(std::make_shared<CiscoVoiceDialControlMib::Cvcallhistorytable>())
	,cvcalllegratestatstable(std::make_shared<CiscoVoiceDialControlMib::Cvcalllegratestatstable>())
	,cvcalllegratewmtable(std::make_shared<CiscoVoiceDialControlMib::Cvcalllegratewmtable>())
	,cvcallratemonitor(std::make_shared<CiscoVoiceDialControlMib::Cvcallratemonitor>())
	,cvcallratestatstable(std::make_shared<CiscoVoiceDialControlMib::Cvcallratestatstable>())
	,cvcallratewmtable(std::make_shared<CiscoVoiceDialControlMib::Cvcallratewmtable>())
	,cvcallvolconntable(std::make_shared<CiscoVoiceDialControlMib::Cvcallvolconntable>())
	,cvcallvoliftable(std::make_shared<CiscoVoiceDialControlMib::Cvcallvoliftable>())
	,cvcallvolume(std::make_shared<CiscoVoiceDialControlMib::Cvcallvolume>())
	,cvcallvolumestatshistory(std::make_shared<CiscoVoiceDialControlMib::Cvcallvolumestatshistory>())
	,cvgatewaycallactive(std::make_shared<CiscoVoiceDialControlMib::Cvgatewaycallactive>())
	,cvgeneralconfiguration(std::make_shared<CiscoVoiceDialControlMib::Cvgeneralconfiguration>())
	,cvpeercfgtable(std::make_shared<CiscoVoiceDialControlMib::Cvpeercfgtable>())
	,cvpeercommoncfgtable(std::make_shared<CiscoVoiceDialControlMib::Cvpeercommoncfgtable>())
	,cvsipmsgratestatstable(std::make_shared<CiscoVoiceDialControlMib::Cvsipmsgratestatstable>())
	,cvsipmsgratewmtable(std::make_shared<CiscoVoiceDialControlMib::Cvsipmsgratewmtable>())
	,cvvoicepeercfgtable(std::make_shared<CiscoVoiceDialControlMib::Cvvoicepeercfgtable>())
	,cvvoipcallactivetable(std::make_shared<CiscoVoiceDialControlMib::Cvvoipcallactivetable>())
	,cvvoipcallhistorytable(std::make_shared<CiscoVoiceDialControlMib::Cvvoipcallhistorytable>())
	,cvvoippeercfgtable(std::make_shared<CiscoVoiceDialControlMib::Cvvoippeercfgtable>())
{
    cvactivecallstatstable->parent = this;

    cvactivecallwmtable->parent = this;

    cvcallactivetable->parent = this;

    cvcalldurationstatstable->parent = this;

    cvcallhistorytable->parent = this;

    cvcalllegratestatstable->parent = this;

    cvcalllegratewmtable->parent = this;

    cvcallratemonitor->parent = this;

    cvcallratestatstable->parent = this;

    cvcallratewmtable->parent = this;

    cvcallvolconntable->parent = this;

    cvcallvoliftable->parent = this;

    cvcallvolume->parent = this;

    cvcallvolumestatshistory->parent = this;

    cvgatewaycallactive->parent = this;

    cvgeneralconfiguration->parent = this;

    cvpeercfgtable->parent = this;

    cvpeercommoncfgtable->parent = this;

    cvsipmsgratestatstable->parent = this;

    cvsipmsgratewmtable->parent = this;

    cvvoicepeercfgtable->parent = this;

    cvvoipcallactivetable->parent = this;

    cvvoipcallhistorytable->parent = this;

    cvvoippeercfgtable->parent = this;

    yang_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::~CiscoVoiceDialControlMib()
{
}

bool CiscoVoiceDialControlMib::has_data() const
{
    return (cvactivecallstatstable !=  nullptr && cvactivecallstatstable->has_data())
	|| (cvactivecallwmtable !=  nullptr && cvactivecallwmtable->has_data())
	|| (cvcallactivetable !=  nullptr && cvcallactivetable->has_data())
	|| (cvcalldurationstatstable !=  nullptr && cvcalldurationstatstable->has_data())
	|| (cvcallhistorytable !=  nullptr && cvcallhistorytable->has_data())
	|| (cvcalllegratestatstable !=  nullptr && cvcalllegratestatstable->has_data())
	|| (cvcalllegratewmtable !=  nullptr && cvcalllegratewmtable->has_data())
	|| (cvcallratemonitor !=  nullptr && cvcallratemonitor->has_data())
	|| (cvcallratestatstable !=  nullptr && cvcallratestatstable->has_data())
	|| (cvcallratewmtable !=  nullptr && cvcallratewmtable->has_data())
	|| (cvcallvolconntable !=  nullptr && cvcallvolconntable->has_data())
	|| (cvcallvoliftable !=  nullptr && cvcallvoliftable->has_data())
	|| (cvcallvolume !=  nullptr && cvcallvolume->has_data())
	|| (cvcallvolumestatshistory !=  nullptr && cvcallvolumestatshistory->has_data())
	|| (cvgatewaycallactive !=  nullptr && cvgatewaycallactive->has_data())
	|| (cvgeneralconfiguration !=  nullptr && cvgeneralconfiguration->has_data())
	|| (cvpeercfgtable !=  nullptr && cvpeercfgtable->has_data())
	|| (cvpeercommoncfgtable !=  nullptr && cvpeercommoncfgtable->has_data())
	|| (cvsipmsgratestatstable !=  nullptr && cvsipmsgratestatstable->has_data())
	|| (cvsipmsgratewmtable !=  nullptr && cvsipmsgratewmtable->has_data())
	|| (cvvoicepeercfgtable !=  nullptr && cvvoicepeercfgtable->has_data())
	|| (cvvoipcallactivetable !=  nullptr && cvvoipcallactivetable->has_data())
	|| (cvvoipcallhistorytable !=  nullptr && cvvoipcallhistorytable->has_data())
	|| (cvvoippeercfgtable !=  nullptr && cvvoippeercfgtable->has_data());
}

bool CiscoVoiceDialControlMib::has_operation() const
{
    return is_set(operation)
	|| (cvactivecallstatstable !=  nullptr && cvactivecallstatstable->has_operation())
	|| (cvactivecallwmtable !=  nullptr && cvactivecallwmtable->has_operation())
	|| (cvcallactivetable !=  nullptr && cvcallactivetable->has_operation())
	|| (cvcalldurationstatstable !=  nullptr && cvcalldurationstatstable->has_operation())
	|| (cvcallhistorytable !=  nullptr && cvcallhistorytable->has_operation())
	|| (cvcalllegratestatstable !=  nullptr && cvcalllegratestatstable->has_operation())
	|| (cvcalllegratewmtable !=  nullptr && cvcalllegratewmtable->has_operation())
	|| (cvcallratemonitor !=  nullptr && cvcallratemonitor->has_operation())
	|| (cvcallratestatstable !=  nullptr && cvcallratestatstable->has_operation())
	|| (cvcallratewmtable !=  nullptr && cvcallratewmtable->has_operation())
	|| (cvcallvolconntable !=  nullptr && cvcallvolconntable->has_operation())
	|| (cvcallvoliftable !=  nullptr && cvcallvoliftable->has_operation())
	|| (cvcallvolume !=  nullptr && cvcallvolume->has_operation())
	|| (cvcallvolumestatshistory !=  nullptr && cvcallvolumestatshistory->has_operation())
	|| (cvgatewaycallactive !=  nullptr && cvgatewaycallactive->has_operation())
	|| (cvgeneralconfiguration !=  nullptr && cvgeneralconfiguration->has_operation())
	|| (cvpeercfgtable !=  nullptr && cvpeercfgtable->has_operation())
	|| (cvpeercommoncfgtable !=  nullptr && cvpeercommoncfgtable->has_operation())
	|| (cvsipmsgratestatstable !=  nullptr && cvsipmsgratestatstable->has_operation())
	|| (cvsipmsgratewmtable !=  nullptr && cvsipmsgratewmtable->has_operation())
	|| (cvvoicepeercfgtable !=  nullptr && cvvoicepeercfgtable->has_operation())
	|| (cvvoipcallactivetable !=  nullptr && cvvoipcallactivetable->has_operation())
	|| (cvvoipcallhistorytable !=  nullptr && cvvoipcallhistorytable->has_operation())
	|| (cvvoippeercfgtable !=  nullptr && cvvoippeercfgtable->has_operation());
}

std::string CiscoVoiceDialControlMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoVoiceDialControlMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvActiveCallStatsTable")
    {
        if(cvactivecallstatstable == nullptr)
        {
            cvactivecallstatstable = std::make_shared<CiscoVoiceDialControlMib::Cvactivecallstatstable>();
        }
        return cvactivecallstatstable;
    }

    if(child_yang_name == "cvActiveCallWMTable")
    {
        if(cvactivecallwmtable == nullptr)
        {
            cvactivecallwmtable = std::make_shared<CiscoVoiceDialControlMib::Cvactivecallwmtable>();
        }
        return cvactivecallwmtable;
    }

    if(child_yang_name == "cvCallActiveTable")
    {
        if(cvcallactivetable == nullptr)
        {
            cvcallactivetable = std::make_shared<CiscoVoiceDialControlMib::Cvcallactivetable>();
        }
        return cvcallactivetable;
    }

    if(child_yang_name == "cvCallDurationStatsTable")
    {
        if(cvcalldurationstatstable == nullptr)
        {
            cvcalldurationstatstable = std::make_shared<CiscoVoiceDialControlMib::Cvcalldurationstatstable>();
        }
        return cvcalldurationstatstable;
    }

    if(child_yang_name == "cvCallHistoryTable")
    {
        if(cvcallhistorytable == nullptr)
        {
            cvcallhistorytable = std::make_shared<CiscoVoiceDialControlMib::Cvcallhistorytable>();
        }
        return cvcallhistorytable;
    }

    if(child_yang_name == "cvCallLegRateStatsTable")
    {
        if(cvcalllegratestatstable == nullptr)
        {
            cvcalllegratestatstable = std::make_shared<CiscoVoiceDialControlMib::Cvcalllegratestatstable>();
        }
        return cvcalllegratestatstable;
    }

    if(child_yang_name == "cvCallLegRateWMTable")
    {
        if(cvcalllegratewmtable == nullptr)
        {
            cvcalllegratewmtable = std::make_shared<CiscoVoiceDialControlMib::Cvcalllegratewmtable>();
        }
        return cvcalllegratewmtable;
    }

    if(child_yang_name == "cvCallRateMonitor")
    {
        if(cvcallratemonitor == nullptr)
        {
            cvcallratemonitor = std::make_shared<CiscoVoiceDialControlMib::Cvcallratemonitor>();
        }
        return cvcallratemonitor;
    }

    if(child_yang_name == "cvCallRateStatsTable")
    {
        if(cvcallratestatstable == nullptr)
        {
            cvcallratestatstable = std::make_shared<CiscoVoiceDialControlMib::Cvcallratestatstable>();
        }
        return cvcallratestatstable;
    }

    if(child_yang_name == "cvCallRateWMTable")
    {
        if(cvcallratewmtable == nullptr)
        {
            cvcallratewmtable = std::make_shared<CiscoVoiceDialControlMib::Cvcallratewmtable>();
        }
        return cvcallratewmtable;
    }

    if(child_yang_name == "cvCallVolConnTable")
    {
        if(cvcallvolconntable == nullptr)
        {
            cvcallvolconntable = std::make_shared<CiscoVoiceDialControlMib::Cvcallvolconntable>();
        }
        return cvcallvolconntable;
    }

    if(child_yang_name == "cvCallVolIfTable")
    {
        if(cvcallvoliftable == nullptr)
        {
            cvcallvoliftable = std::make_shared<CiscoVoiceDialControlMib::Cvcallvoliftable>();
        }
        return cvcallvoliftable;
    }

    if(child_yang_name == "cvCallVolume")
    {
        if(cvcallvolume == nullptr)
        {
            cvcallvolume = std::make_shared<CiscoVoiceDialControlMib::Cvcallvolume>();
        }
        return cvcallvolume;
    }

    if(child_yang_name == "cvCallVolumeStatsHistory")
    {
        if(cvcallvolumestatshistory == nullptr)
        {
            cvcallvolumestatshistory = std::make_shared<CiscoVoiceDialControlMib::Cvcallvolumestatshistory>();
        }
        return cvcallvolumestatshistory;
    }

    if(child_yang_name == "cvGatewayCallActive")
    {
        if(cvgatewaycallactive == nullptr)
        {
            cvgatewaycallactive = std::make_shared<CiscoVoiceDialControlMib::Cvgatewaycallactive>();
        }
        return cvgatewaycallactive;
    }

    if(child_yang_name == "cvGeneralConfiguration")
    {
        if(cvgeneralconfiguration == nullptr)
        {
            cvgeneralconfiguration = std::make_shared<CiscoVoiceDialControlMib::Cvgeneralconfiguration>();
        }
        return cvgeneralconfiguration;
    }

    if(child_yang_name == "cvPeerCfgTable")
    {
        if(cvpeercfgtable == nullptr)
        {
            cvpeercfgtable = std::make_shared<CiscoVoiceDialControlMib::Cvpeercfgtable>();
        }
        return cvpeercfgtable;
    }

    if(child_yang_name == "cvPeerCommonCfgTable")
    {
        if(cvpeercommoncfgtable == nullptr)
        {
            cvpeercommoncfgtable = std::make_shared<CiscoVoiceDialControlMib::Cvpeercommoncfgtable>();
        }
        return cvpeercommoncfgtable;
    }

    if(child_yang_name == "cvSipMsgRateStatsTable")
    {
        if(cvsipmsgratestatstable == nullptr)
        {
            cvsipmsgratestatstable = std::make_shared<CiscoVoiceDialControlMib::Cvsipmsgratestatstable>();
        }
        return cvsipmsgratestatstable;
    }

    if(child_yang_name == "cvSipMsgRateWMTable")
    {
        if(cvsipmsgratewmtable == nullptr)
        {
            cvsipmsgratewmtable = std::make_shared<CiscoVoiceDialControlMib::Cvsipmsgratewmtable>();
        }
        return cvsipmsgratewmtable;
    }

    if(child_yang_name == "cvVoicePeerCfgTable")
    {
        if(cvvoicepeercfgtable == nullptr)
        {
            cvvoicepeercfgtable = std::make_shared<CiscoVoiceDialControlMib::Cvvoicepeercfgtable>();
        }
        return cvvoicepeercfgtable;
    }

    if(child_yang_name == "cvVoIPCallActiveTable")
    {
        if(cvvoipcallactivetable == nullptr)
        {
            cvvoipcallactivetable = std::make_shared<CiscoVoiceDialControlMib::Cvvoipcallactivetable>();
        }
        return cvvoipcallactivetable;
    }

    if(child_yang_name == "cvVoIPCallHistoryTable")
    {
        if(cvvoipcallhistorytable == nullptr)
        {
            cvvoipcallhistorytable = std::make_shared<CiscoVoiceDialControlMib::Cvvoipcallhistorytable>();
        }
        return cvvoipcallhistorytable;
    }

    if(child_yang_name == "cvVoIPPeerCfgTable")
    {
        if(cvvoippeercfgtable == nullptr)
        {
            cvvoippeercfgtable = std::make_shared<CiscoVoiceDialControlMib::Cvvoippeercfgtable>();
        }
        return cvvoippeercfgtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cvactivecallstatstable != nullptr)
    {
        children["cvActiveCallStatsTable"] = cvactivecallstatstable;
    }

    if(cvactivecallwmtable != nullptr)
    {
        children["cvActiveCallWMTable"] = cvactivecallwmtable;
    }

    if(cvcallactivetable != nullptr)
    {
        children["cvCallActiveTable"] = cvcallactivetable;
    }

    if(cvcalldurationstatstable != nullptr)
    {
        children["cvCallDurationStatsTable"] = cvcalldurationstatstable;
    }

    if(cvcallhistorytable != nullptr)
    {
        children["cvCallHistoryTable"] = cvcallhistorytable;
    }

    if(cvcalllegratestatstable != nullptr)
    {
        children["cvCallLegRateStatsTable"] = cvcalllegratestatstable;
    }

    if(cvcalllegratewmtable != nullptr)
    {
        children["cvCallLegRateWMTable"] = cvcalllegratewmtable;
    }

    if(cvcallratemonitor != nullptr)
    {
        children["cvCallRateMonitor"] = cvcallratemonitor;
    }

    if(cvcallratestatstable != nullptr)
    {
        children["cvCallRateStatsTable"] = cvcallratestatstable;
    }

    if(cvcallratewmtable != nullptr)
    {
        children["cvCallRateWMTable"] = cvcallratewmtable;
    }

    if(cvcallvolconntable != nullptr)
    {
        children["cvCallVolConnTable"] = cvcallvolconntable;
    }

    if(cvcallvoliftable != nullptr)
    {
        children["cvCallVolIfTable"] = cvcallvoliftable;
    }

    if(cvcallvolume != nullptr)
    {
        children["cvCallVolume"] = cvcallvolume;
    }

    if(cvcallvolumestatshistory != nullptr)
    {
        children["cvCallVolumeStatsHistory"] = cvcallvolumestatshistory;
    }

    if(cvgatewaycallactive != nullptr)
    {
        children["cvGatewayCallActive"] = cvgatewaycallactive;
    }

    if(cvgeneralconfiguration != nullptr)
    {
        children["cvGeneralConfiguration"] = cvgeneralconfiguration;
    }

    if(cvpeercfgtable != nullptr)
    {
        children["cvPeerCfgTable"] = cvpeercfgtable;
    }

    if(cvpeercommoncfgtable != nullptr)
    {
        children["cvPeerCommonCfgTable"] = cvpeercommoncfgtable;
    }

    if(cvsipmsgratestatstable != nullptr)
    {
        children["cvSipMsgRateStatsTable"] = cvsipmsgratestatstable;
    }

    if(cvsipmsgratewmtable != nullptr)
    {
        children["cvSipMsgRateWMTable"] = cvsipmsgratewmtable;
    }

    if(cvvoicepeercfgtable != nullptr)
    {
        children["cvVoicePeerCfgTable"] = cvvoicepeercfgtable;
    }

    if(cvvoipcallactivetable != nullptr)
    {
        children["cvVoIPCallActiveTable"] = cvvoipcallactivetable;
    }

    if(cvvoipcallhistorytable != nullptr)
    {
        children["cvVoIPCallHistoryTable"] = cvvoipcallhistorytable;
    }

    if(cvvoippeercfgtable != nullptr)
    {
        children["cvVoIPPeerCfgTable"] = cvvoippeercfgtable;
    }

    return children;
}

void CiscoVoiceDialControlMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::clone_ptr() const
{
    return std::make_shared<CiscoVoiceDialControlMib>();
}

std::string CiscoVoiceDialControlMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoVoiceDialControlMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoVoiceDialControlMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoVoiceDialControlMib::Cvgeneralconfiguration::Cvgeneralconfiguration()
    :
    cvgeneraldscppolicynotificationenable{YType::boolean, "cvGeneralDSCPPolicyNotificationEnable"},
    cvgeneralfallbacknotificationenable{YType::boolean, "cvGeneralFallbackNotificationEnable"},
    cvgeneralmediapolicynotificationenable{YType::boolean, "cvGeneralMediaPolicyNotificationEnable"},
    cvgeneralpoorqovnotificationenable{YType::boolean, "cvGeneralPoorQoVNotificationEnable"}
{
    yang_name = "cvGeneralConfiguration"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvgeneralconfiguration::~Cvgeneralconfiguration()
{
}

bool CiscoVoiceDialControlMib::Cvgeneralconfiguration::has_data() const
{
    return cvgeneraldscppolicynotificationenable.is_set
	|| cvgeneralfallbacknotificationenable.is_set
	|| cvgeneralmediapolicynotificationenable.is_set
	|| cvgeneralpoorqovnotificationenable.is_set;
}

bool CiscoVoiceDialControlMib::Cvgeneralconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(cvgeneraldscppolicynotificationenable.operation)
	|| is_set(cvgeneralfallbacknotificationenable.operation)
	|| is_set(cvgeneralmediapolicynotificationenable.operation)
	|| is_set(cvgeneralpoorqovnotificationenable.operation);
}

std::string CiscoVoiceDialControlMib::Cvgeneralconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvGeneralConfiguration";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvgeneralconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvgeneraldscppolicynotificationenable.is_set || is_set(cvgeneraldscppolicynotificationenable.operation)) leaf_name_data.push_back(cvgeneraldscppolicynotificationenable.get_name_leafdata());
    if (cvgeneralfallbacknotificationenable.is_set || is_set(cvgeneralfallbacknotificationenable.operation)) leaf_name_data.push_back(cvgeneralfallbacknotificationenable.get_name_leafdata());
    if (cvgeneralmediapolicynotificationenable.is_set || is_set(cvgeneralmediapolicynotificationenable.operation)) leaf_name_data.push_back(cvgeneralmediapolicynotificationenable.get_name_leafdata());
    if (cvgeneralpoorqovnotificationenable.is_set || is_set(cvgeneralpoorqovnotificationenable.operation)) leaf_name_data.push_back(cvgeneralpoorqovnotificationenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvgeneralconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvgeneralconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvgeneralconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvGeneralDSCPPolicyNotificationEnable")
    {
        cvgeneraldscppolicynotificationenable = value;
    }
    if(value_path == "cvGeneralFallbackNotificationEnable")
    {
        cvgeneralfallbacknotificationenable = value;
    }
    if(value_path == "cvGeneralMediaPolicyNotificationEnable")
    {
        cvgeneralmediapolicynotificationenable = value;
    }
    if(value_path == "cvGeneralPoorQoVNotificationEnable")
    {
        cvgeneralpoorqovnotificationenable = value;
    }
}

CiscoVoiceDialControlMib::Cvgatewaycallactive::Cvgatewaycallactive()
    :
    cvcallactiveds0s{YType::uint32, "cvCallActiveDS0s"},
    cvcallactiveds0shighnotifyenable{YType::boolean, "cvCallActiveDS0sHighNotifyEnable"},
    cvcallactiveds0shighthreshold{YType::uint32, "cvCallActiveDS0sHighThreshold"},
    cvcallactiveds0slownotifyenable{YType::boolean, "cvCallActiveDS0sLowNotifyEnable"},
    cvcallactiveds0slowthreshold{YType::uint32, "cvCallActiveDS0sLowThreshold"}
{
    yang_name = "cvGatewayCallActive"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvgatewaycallactive::~Cvgatewaycallactive()
{
}

bool CiscoVoiceDialControlMib::Cvgatewaycallactive::has_data() const
{
    return cvcallactiveds0s.is_set
	|| cvcallactiveds0shighnotifyenable.is_set
	|| cvcallactiveds0shighthreshold.is_set
	|| cvcallactiveds0slownotifyenable.is_set
	|| cvcallactiveds0slowthreshold.is_set;
}

bool CiscoVoiceDialControlMib::Cvgatewaycallactive::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcallactiveds0s.operation)
	|| is_set(cvcallactiveds0shighnotifyenable.operation)
	|| is_set(cvcallactiveds0shighthreshold.operation)
	|| is_set(cvcallactiveds0slownotifyenable.operation)
	|| is_set(cvcallactiveds0slowthreshold.operation);
}

std::string CiscoVoiceDialControlMib::Cvgatewaycallactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvGatewayCallActive";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvgatewaycallactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallactiveds0s.is_set || is_set(cvcallactiveds0s.operation)) leaf_name_data.push_back(cvcallactiveds0s.get_name_leafdata());
    if (cvcallactiveds0shighnotifyenable.is_set || is_set(cvcallactiveds0shighnotifyenable.operation)) leaf_name_data.push_back(cvcallactiveds0shighnotifyenable.get_name_leafdata());
    if (cvcallactiveds0shighthreshold.is_set || is_set(cvcallactiveds0shighthreshold.operation)) leaf_name_data.push_back(cvcallactiveds0shighthreshold.get_name_leafdata());
    if (cvcallactiveds0slownotifyenable.is_set || is_set(cvcallactiveds0slownotifyenable.operation)) leaf_name_data.push_back(cvcallactiveds0slownotifyenable.get_name_leafdata());
    if (cvcallactiveds0slowthreshold.is_set || is_set(cvcallactiveds0slowthreshold.operation)) leaf_name_data.push_back(cvcallactiveds0slowthreshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvgatewaycallactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvgatewaycallactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvgatewaycallactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallActiveDS0s")
    {
        cvcallactiveds0s = value;
    }
    if(value_path == "cvCallActiveDS0sHighNotifyEnable")
    {
        cvcallactiveds0shighnotifyenable = value;
    }
    if(value_path == "cvCallActiveDS0sHighThreshold")
    {
        cvcallactiveds0shighthreshold = value;
    }
    if(value_path == "cvCallActiveDS0sLowNotifyEnable")
    {
        cvcallactiveds0slownotifyenable = value;
    }
    if(value_path == "cvCallActiveDS0sLowThreshold")
    {
        cvcallactiveds0slowthreshold = value;
    }
}

CiscoVoiceDialControlMib::Cvcallvolume::Cvcallvolume()
    :
    cvcallvolconnmaxcallconnectionlicenese{YType::uint32, "cvCallVolConnMaxCallConnectionLicenese"},
    cvcallvolconntotalactiveconnections{YType::uint32, "cvCallVolConnTotalActiveConnections"}
{
    yang_name = "cvCallVolume"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallvolume::~Cvcallvolume()
{
}

bool CiscoVoiceDialControlMib::Cvcallvolume::has_data() const
{
    return cvcallvolconnmaxcallconnectionlicenese.is_set
	|| cvcallvolconntotalactiveconnections.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallvolume::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcallvolconnmaxcallconnectionlicenese.operation)
	|| is_set(cvcallvolconntotalactiveconnections.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallvolume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolume";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallvolume::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallvolconnmaxcallconnectionlicenese.is_set || is_set(cvcallvolconnmaxcallconnectionlicenese.operation)) leaf_name_data.push_back(cvcallvolconnmaxcallconnectionlicenese.get_name_leafdata());
    if (cvcallvolconntotalactiveconnections.is_set || is_set(cvcallvolconntotalactiveconnections.operation)) leaf_name_data.push_back(cvcallvolconntotalactiveconnections.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallvolume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallvolume::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallvolume::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallVolConnMaxCallConnectionLicenese")
    {
        cvcallvolconnmaxcallconnectionlicenese = value;
    }
    if(value_path == "cvCallVolConnTotalActiveConnections")
    {
        cvcallvolconntotalactiveconnections = value;
    }
}

CiscoVoiceDialControlMib::Cvcallratemonitor::Cvcallratemonitor()
    :
    cvcallrate{YType::uint32, "cvCallRate"},
    cvcallratehiwatermark{YType::uint32, "cvCallRateHiWaterMark"},
    cvcallratemonitorenable{YType::boolean, "cvCallRateMonitorEnable"},
    cvcallratemonitortime{YType::uint32, "cvCallRateMonitorTime"}
{
    yang_name = "cvCallRateMonitor"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallratemonitor::~Cvcallratemonitor()
{
}

bool CiscoVoiceDialControlMib::Cvcallratemonitor::has_data() const
{
    return cvcallrate.is_set
	|| cvcallratehiwatermark.is_set
	|| cvcallratemonitorenable.is_set
	|| cvcallratemonitortime.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallratemonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcallrate.operation)
	|| is_set(cvcallratehiwatermark.operation)
	|| is_set(cvcallratemonitorenable.operation)
	|| is_set(cvcallratemonitortime.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallratemonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateMonitor";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallratemonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallrate.is_set || is_set(cvcallrate.operation)) leaf_name_data.push_back(cvcallrate.get_name_leafdata());
    if (cvcallratehiwatermark.is_set || is_set(cvcallratehiwatermark.operation)) leaf_name_data.push_back(cvcallratehiwatermark.get_name_leafdata());
    if (cvcallratemonitorenable.is_set || is_set(cvcallratemonitorenable.operation)) leaf_name_data.push_back(cvcallratemonitorenable.get_name_leafdata());
    if (cvcallratemonitortime.is_set || is_set(cvcallratemonitortime.operation)) leaf_name_data.push_back(cvcallratemonitortime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallratemonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallratemonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallratemonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallRate")
    {
        cvcallrate = value;
    }
    if(value_path == "cvCallRateHiWaterMark")
    {
        cvcallratehiwatermark = value;
    }
    if(value_path == "cvCallRateMonitorEnable")
    {
        cvcallratemonitorenable = value;
    }
    if(value_path == "cvCallRateMonitorTime")
    {
        cvcallratemonitortime = value;
    }
}

CiscoVoiceDialControlMib::Cvcallvolumestatshistory::Cvcallvolumestatshistory()
    :
    cvcalldurationstatsthreshold{YType::uint32, "cvCallDurationStatsThreshold"},
    cvcallvolumewmtablesize{YType::uint32, "cvCallVolumeWMTableSize"}
{
    yang_name = "cvCallVolumeStatsHistory"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallvolumestatshistory::~Cvcallvolumestatshistory()
{
}

bool CiscoVoiceDialControlMib::Cvcallvolumestatshistory::has_data() const
{
    return cvcalldurationstatsthreshold.is_set
	|| cvcallvolumewmtablesize.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallvolumestatshistory::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcalldurationstatsthreshold.operation)
	|| is_set(cvcallvolumewmtablesize.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallvolumestatshistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolumeStatsHistory";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallvolumestatshistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalldurationstatsthreshold.is_set || is_set(cvcalldurationstatsthreshold.operation)) leaf_name_data.push_back(cvcalldurationstatsthreshold.get_name_leafdata());
    if (cvcallvolumewmtablesize.is_set || is_set(cvcallvolumewmtablesize.operation)) leaf_name_data.push_back(cvcallvolumewmtablesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallvolumestatshistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallvolumestatshistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallvolumestatshistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallDurationStatsThreshold")
    {
        cvcalldurationstatsthreshold = value;
    }
    if(value_path == "cvCallVolumeWMTableSize")
    {
        cvcallvolumewmtablesize = value;
    }
}

CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgtable()
{
    yang_name = "cvPeerCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvpeercfgtable::~Cvpeercfgtable()
{
}

bool CiscoVoiceDialControlMib::Cvpeercfgtable::has_data() const
{
    for (std::size_t index=0; index<cvpeercfgentry.size(); index++)
    {
        if(cvpeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvpeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvpeercfgentry.size(); index++)
    {
        if(cvpeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvpeercfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCfgTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvpeercfgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvpeercfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvPeerCfgEntry")
    {
        for(auto const & c : cvpeercfgentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry>();
        c->parent = this;
        cvpeercfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvpeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpeercfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvpeercfgtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgentry()
    :
    cvpeercfgindex{YType::int32, "cvPeerCfgIndex"},
    cvcallvolpeerincomingcalls{YType::uint32, "cvCallVolPeerIncomingCalls"},
    cvcallvolpeeroutgoingcalls{YType::uint32, "cvCallVolPeerOutgoingCalls"},
    cvpeercfgifindex{YType::int32, "cvPeerCfgIfIndex"},
    cvpeercfgpeertype{YType::enumeration, "cvPeerCfgPeerType"},
    cvpeercfgrowstatus{YType::enumeration, "cvPeerCfgRowStatus"},
    cvpeercfgtype{YType::enumeration, "cvPeerCfgType"}
{
    yang_name = "cvPeerCfgEntry"; yang_parent_name = "cvPeerCfgTable";
}

CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::~Cvpeercfgentry()
{
}

bool CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::has_data() const
{
    return cvpeercfgindex.is_set
	|| cvcallvolpeerincomingcalls.is_set
	|| cvcallvolpeeroutgoingcalls.is_set
	|| cvpeercfgifindex.is_set
	|| cvpeercfgpeertype.is_set
	|| cvpeercfgrowstatus.is_set
	|| cvpeercfgtype.is_set;
}

bool CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpeercfgindex.operation)
	|| is_set(cvcallvolpeerincomingcalls.operation)
	|| is_set(cvcallvolpeeroutgoingcalls.operation)
	|| is_set(cvpeercfgifindex.operation)
	|| is_set(cvpeercfgpeertype.operation)
	|| is_set(cvpeercfgrowstatus.operation)
	|| is_set(cvpeercfgtype.operation);
}

std::string CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCfgEntry" <<"[cvPeerCfgIndex='" <<cvpeercfgindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvPeerCfgTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpeercfgindex.is_set || is_set(cvpeercfgindex.operation)) leaf_name_data.push_back(cvpeercfgindex.get_name_leafdata());
    if (cvcallvolpeerincomingcalls.is_set || is_set(cvcallvolpeerincomingcalls.operation)) leaf_name_data.push_back(cvcallvolpeerincomingcalls.get_name_leafdata());
    if (cvcallvolpeeroutgoingcalls.is_set || is_set(cvcallvolpeeroutgoingcalls.operation)) leaf_name_data.push_back(cvcallvolpeeroutgoingcalls.get_name_leafdata());
    if (cvpeercfgifindex.is_set || is_set(cvpeercfgifindex.operation)) leaf_name_data.push_back(cvpeercfgifindex.get_name_leafdata());
    if (cvpeercfgpeertype.is_set || is_set(cvpeercfgpeertype.operation)) leaf_name_data.push_back(cvpeercfgpeertype.get_name_leafdata());
    if (cvpeercfgrowstatus.is_set || is_set(cvpeercfgrowstatus.operation)) leaf_name_data.push_back(cvpeercfgrowstatus.get_name_leafdata());
    if (cvpeercfgtype.is_set || is_set(cvpeercfgtype.operation)) leaf_name_data.push_back(cvpeercfgtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvPeerCfgIndex")
    {
        cvpeercfgindex = value;
    }
    if(value_path == "cvCallVolPeerIncomingCalls")
    {
        cvcallvolpeerincomingcalls = value;
    }
    if(value_path == "cvCallVolPeerOutgoingCalls")
    {
        cvcallvolpeeroutgoingcalls = value;
    }
    if(value_path == "cvPeerCfgIfIndex")
    {
        cvpeercfgifindex = value;
    }
    if(value_path == "cvPeerCfgPeerType")
    {
        cvpeercfgpeertype = value;
    }
    if(value_path == "cvPeerCfgRowStatus")
    {
        cvpeercfgrowstatus = value;
    }
    if(value_path == "cvPeerCfgType")
    {
        cvpeercfgtype = value;
    }
}

CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgtable()
{
    yang_name = "cvVoicePeerCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvvoicepeercfgtable::~Cvvoicepeercfgtable()
{
}

bool CiscoVoiceDialControlMib::Cvvoicepeercfgtable::has_data() const
{
    for (std::size_t index=0; index<cvvoicepeercfgentry.size(); index++)
    {
        if(cvvoicepeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvvoicepeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvvoicepeercfgentry.size(); index++)
    {
        if(cvvoicepeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvvoicepeercfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoicePeerCfgTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoicepeercfgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoicepeercfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvVoicePeerCfgEntry")
    {
        for(auto const & c : cvvoicepeercfgentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry>();
        c->parent = this;
        cvvoicepeercfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoicepeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoicepeercfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvvoicepeercfgtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgentry()
    :
    ifindex{YType::str, "ifIndex"},
    cvvoicepeercfgcasgroup{YType::int32, "cvVoicePeerCfgCasGroup"},
    cvvoicepeercfgdialdigitsprefix{YType::str, "cvVoicePeerCfgDialDigitsPrefix"},
    cvvoicepeercfgdidcallenable{YType::boolean, "cvVoicePeerCfgDIDCallEnable"},
    cvvoicepeercfgechocancellertest{YType::enumeration, "cvVoicePeerCfgEchoCancellerTest"},
    cvvoicepeercfgforwarddigits{YType::int32, "cvVoicePeerCfgForwardDigits"},
    cvvoicepeercfgregistere164{YType::boolean, "cvVoicePeerCfgRegisterE164"},
    cvvoicepeercfgsessiontarget{YType::str, "cvVoicePeerCfgSessionTarget"}
{
    yang_name = "cvVoicePeerCfgEntry"; yang_parent_name = "cvVoicePeerCfgTable";
}

CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::~Cvvoicepeercfgentry()
{
}

bool CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::has_data() const
{
    return ifindex.is_set
	|| cvvoicepeercfgcasgroup.is_set
	|| cvvoicepeercfgdialdigitsprefix.is_set
	|| cvvoicepeercfgdidcallenable.is_set
	|| cvvoicepeercfgechocancellertest.is_set
	|| cvvoicepeercfgforwarddigits.is_set
	|| cvvoicepeercfgregistere164.is_set
	|| cvvoicepeercfgsessiontarget.is_set;
}

bool CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cvvoicepeercfgcasgroup.operation)
	|| is_set(cvvoicepeercfgdialdigitsprefix.operation)
	|| is_set(cvvoicepeercfgdidcallenable.operation)
	|| is_set(cvvoicepeercfgechocancellertest.operation)
	|| is_set(cvvoicepeercfgforwarddigits.operation)
	|| is_set(cvvoicepeercfgregistere164.operation)
	|| is_set(cvvoicepeercfgsessiontarget.operation);
}

std::string CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoicePeerCfgEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoicePeerCfgTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvvoicepeercfgcasgroup.is_set || is_set(cvvoicepeercfgcasgroup.operation)) leaf_name_data.push_back(cvvoicepeercfgcasgroup.get_name_leafdata());
    if (cvvoicepeercfgdialdigitsprefix.is_set || is_set(cvvoicepeercfgdialdigitsprefix.operation)) leaf_name_data.push_back(cvvoicepeercfgdialdigitsprefix.get_name_leafdata());
    if (cvvoicepeercfgdidcallenable.is_set || is_set(cvvoicepeercfgdidcallenable.operation)) leaf_name_data.push_back(cvvoicepeercfgdidcallenable.get_name_leafdata());
    if (cvvoicepeercfgechocancellertest.is_set || is_set(cvvoicepeercfgechocancellertest.operation)) leaf_name_data.push_back(cvvoicepeercfgechocancellertest.get_name_leafdata());
    if (cvvoicepeercfgforwarddigits.is_set || is_set(cvvoicepeercfgforwarddigits.operation)) leaf_name_data.push_back(cvvoicepeercfgforwarddigits.get_name_leafdata());
    if (cvvoicepeercfgregistere164.is_set || is_set(cvvoicepeercfgregistere164.operation)) leaf_name_data.push_back(cvvoicepeercfgregistere164.get_name_leafdata());
    if (cvvoicepeercfgsessiontarget.is_set || is_set(cvvoicepeercfgsessiontarget.operation)) leaf_name_data.push_back(cvvoicepeercfgsessiontarget.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cvVoicePeerCfgCasGroup")
    {
        cvvoicepeercfgcasgroup = value;
    }
    if(value_path == "cvVoicePeerCfgDialDigitsPrefix")
    {
        cvvoicepeercfgdialdigitsprefix = value;
    }
    if(value_path == "cvVoicePeerCfgDIDCallEnable")
    {
        cvvoicepeercfgdidcallenable = value;
    }
    if(value_path == "cvVoicePeerCfgEchoCancellerTest")
    {
        cvvoicepeercfgechocancellertest = value;
    }
    if(value_path == "cvVoicePeerCfgForwardDigits")
    {
        cvvoicepeercfgforwarddigits = value;
    }
    if(value_path == "cvVoicePeerCfgRegisterE164")
    {
        cvvoicepeercfgregistere164 = value;
    }
    if(value_path == "cvVoicePeerCfgSessionTarget")
    {
        cvvoicepeercfgsessiontarget = value;
    }
}

CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgtable()
{
    yang_name = "cvVoIPPeerCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvvoippeercfgtable::~Cvvoippeercfgtable()
{
}

bool CiscoVoiceDialControlMib::Cvvoippeercfgtable::has_data() const
{
    for (std::size_t index=0; index<cvvoippeercfgentry.size(); index++)
    {
        if(cvvoippeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvvoippeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvvoippeercfgentry.size(); index++)
    {
        if(cvvoippeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvvoippeercfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPPeerCfgTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoippeercfgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoippeercfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvVoIPPeerCfgEntry")
    {
        for(auto const & c : cvvoippeercfgentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry>();
        c->parent = this;
        cvvoippeercfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoippeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoippeercfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvvoippeercfgtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgentry()
    :
    ifindex{YType::str, "ifIndex"},
    cvvoippeercfgbitrate{YType::uint32, "cvVoIPPeerCfgBitRate"},
    cvvoippeercfgbitrates{YType::bits, "cvVoIPPeerCfgBitRates"},
    cvvoippeercfgcoderbytes{YType::int32, "cvVoIPPeerCfgCoderBytes"},
    cvvoippeercfgcodermode{YType::enumeration, "cvVoIPPeerCfgCoderMode"},
    cvvoippeercfgcoderrate{YType::enumeration, "cvVoIPPeerCfgCoderRate"},
    cvvoippeercfgcodingmode{YType::enumeration, "cvVoIPPeerCfgCodingMode"},
    cvvoippeercfgcrc{YType::boolean, "cvVoIPPeerCfgCRC"},
    cvvoippeercfgdesiredqos{YType::enumeration, "cvVoIPPeerCfgDesiredQoS"},
    cvvoippeercfgdesiredqosvideo{YType::enumeration, "cvVoIPPeerCfgDesiredQoSVideo"},
    cvvoippeercfgdigitrelay{YType::bits, "cvVoIPPeerCfgDigitRelay"},
    cvvoippeercfgdscppolicynotificationenable{YType::boolean, "cvVoIPPeerCfgDSCPPolicyNotificationEnable"},
    cvvoippeercfgexpectfactor{YType::int32, "cvVoIPPeerCfgExpectFactor"},
    cvvoippeercfgfaxbytes{YType::int32, "cvVoIPPeerCfgFaxBytes"},
    cvvoippeercfgfaxrate{YType::enumeration, "cvVoIPPeerCfgFaxRate"},
    cvvoippeercfgframesize{YType::enumeration, "cvVoIPPeerCfgFrameSize"},
    cvvoippeercfgicpif{YType::int32, "cvVoIPPeerCfgIcpif"},
    cvvoippeercfginbandsignaling{YType::enumeration, "cvVoIPPeerCfgInBandSignaling"},
    cvvoippeercfgipprecedence{YType::int32, "cvVoIPPeerCfgIPPrecedence"},
    cvvoippeercfgmediapolicynotificationenable{YType::boolean, "cvVoIPPeerCfgMediaPolicyNotificationEnable"},
    cvvoippeercfgmediasetting{YType::enumeration, "cvVoIPPeerCfgMediaSetting"},
    cvvoippeercfgminacceptableqos{YType::enumeration, "cvVoIPPeerCfgMinAcceptableQoS"},
    cvvoippeercfgminacceptableqosvideo{YType::enumeration, "cvVoIPPeerCfgMinAcceptableQoSVideo"},
    cvvoippeercfgoctetaligned{YType::boolean, "cvVoIPPeerCfgOctetAligned"},
    cvvoippeercfgpoorqovnotificationenable{YType::boolean, "cvVoIPPeerCfgPoorQoVNotificationEnable"},
    cvvoippeercfgredirectip2ip{YType::boolean, "cvVoIPPeerCfgRedirectip2ip"},
    cvvoippeercfgsessionprotocol{YType::enumeration, "cvVoIPPeerCfgSessionProtocol"},
    cvvoippeercfgsessiontarget{YType::str, "cvVoIPPeerCfgSessionTarget"},
    cvvoippeercfgtechprefix{YType::str, "cvVoIPPeerCfgTechPrefix"},
    cvvoippeercfgudpchecksumenable{YType::boolean, "cvVoIPPeerCfgUDPChecksumEnable"},
    cvvoippeercfgvadenable{YType::boolean, "cvVoIPPeerCfgVADEnable"}
{
    yang_name = "cvVoIPPeerCfgEntry"; yang_parent_name = "cvVoIPPeerCfgTable";
}

CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::~Cvvoippeercfgentry()
{
}

bool CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::has_data() const
{
    return ifindex.is_set
	|| cvvoippeercfgbitrate.is_set
	|| cvvoippeercfgbitrates.is_set
	|| cvvoippeercfgcoderbytes.is_set
	|| cvvoippeercfgcodermode.is_set
	|| cvvoippeercfgcoderrate.is_set
	|| cvvoippeercfgcodingmode.is_set
	|| cvvoippeercfgcrc.is_set
	|| cvvoippeercfgdesiredqos.is_set
	|| cvvoippeercfgdesiredqosvideo.is_set
	|| cvvoippeercfgdigitrelay.is_set
	|| cvvoippeercfgdscppolicynotificationenable.is_set
	|| cvvoippeercfgexpectfactor.is_set
	|| cvvoippeercfgfaxbytes.is_set
	|| cvvoippeercfgfaxrate.is_set
	|| cvvoippeercfgframesize.is_set
	|| cvvoippeercfgicpif.is_set
	|| cvvoippeercfginbandsignaling.is_set
	|| cvvoippeercfgipprecedence.is_set
	|| cvvoippeercfgmediapolicynotificationenable.is_set
	|| cvvoippeercfgmediasetting.is_set
	|| cvvoippeercfgminacceptableqos.is_set
	|| cvvoippeercfgminacceptableqosvideo.is_set
	|| cvvoippeercfgoctetaligned.is_set
	|| cvvoippeercfgpoorqovnotificationenable.is_set
	|| cvvoippeercfgredirectip2ip.is_set
	|| cvvoippeercfgsessionprotocol.is_set
	|| cvvoippeercfgsessiontarget.is_set
	|| cvvoippeercfgtechprefix.is_set
	|| cvvoippeercfgudpchecksumenable.is_set
	|| cvvoippeercfgvadenable.is_set;
}

bool CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cvvoippeercfgbitrate.operation)
	|| is_set(cvvoippeercfgbitrates.operation)
	|| is_set(cvvoippeercfgcoderbytes.operation)
	|| is_set(cvvoippeercfgcodermode.operation)
	|| is_set(cvvoippeercfgcoderrate.operation)
	|| is_set(cvvoippeercfgcodingmode.operation)
	|| is_set(cvvoippeercfgcrc.operation)
	|| is_set(cvvoippeercfgdesiredqos.operation)
	|| is_set(cvvoippeercfgdesiredqosvideo.operation)
	|| is_set(cvvoippeercfgdigitrelay.operation)
	|| is_set(cvvoippeercfgdscppolicynotificationenable.operation)
	|| is_set(cvvoippeercfgexpectfactor.operation)
	|| is_set(cvvoippeercfgfaxbytes.operation)
	|| is_set(cvvoippeercfgfaxrate.operation)
	|| is_set(cvvoippeercfgframesize.operation)
	|| is_set(cvvoippeercfgicpif.operation)
	|| is_set(cvvoippeercfginbandsignaling.operation)
	|| is_set(cvvoippeercfgipprecedence.operation)
	|| is_set(cvvoippeercfgmediapolicynotificationenable.operation)
	|| is_set(cvvoippeercfgmediasetting.operation)
	|| is_set(cvvoippeercfgminacceptableqos.operation)
	|| is_set(cvvoippeercfgminacceptableqosvideo.operation)
	|| is_set(cvvoippeercfgoctetaligned.operation)
	|| is_set(cvvoippeercfgpoorqovnotificationenable.operation)
	|| is_set(cvvoippeercfgredirectip2ip.operation)
	|| is_set(cvvoippeercfgsessionprotocol.operation)
	|| is_set(cvvoippeercfgsessiontarget.operation)
	|| is_set(cvvoippeercfgtechprefix.operation)
	|| is_set(cvvoippeercfgudpchecksumenable.operation)
	|| is_set(cvvoippeercfgvadenable.operation);
}

std::string CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPPeerCfgEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoIPPeerCfgTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvvoippeercfgbitrate.is_set || is_set(cvvoippeercfgbitrate.operation)) leaf_name_data.push_back(cvvoippeercfgbitrate.get_name_leafdata());
    if (cvvoippeercfgbitrates.is_set || is_set(cvvoippeercfgbitrates.operation)) leaf_name_data.push_back(cvvoippeercfgbitrates.get_name_leafdata());
    if (cvvoippeercfgcoderbytes.is_set || is_set(cvvoippeercfgcoderbytes.operation)) leaf_name_data.push_back(cvvoippeercfgcoderbytes.get_name_leafdata());
    if (cvvoippeercfgcodermode.is_set || is_set(cvvoippeercfgcodermode.operation)) leaf_name_data.push_back(cvvoippeercfgcodermode.get_name_leafdata());
    if (cvvoippeercfgcoderrate.is_set || is_set(cvvoippeercfgcoderrate.operation)) leaf_name_data.push_back(cvvoippeercfgcoderrate.get_name_leafdata());
    if (cvvoippeercfgcodingmode.is_set || is_set(cvvoippeercfgcodingmode.operation)) leaf_name_data.push_back(cvvoippeercfgcodingmode.get_name_leafdata());
    if (cvvoippeercfgcrc.is_set || is_set(cvvoippeercfgcrc.operation)) leaf_name_data.push_back(cvvoippeercfgcrc.get_name_leafdata());
    if (cvvoippeercfgdesiredqos.is_set || is_set(cvvoippeercfgdesiredqos.operation)) leaf_name_data.push_back(cvvoippeercfgdesiredqos.get_name_leafdata());
    if (cvvoippeercfgdesiredqosvideo.is_set || is_set(cvvoippeercfgdesiredqosvideo.operation)) leaf_name_data.push_back(cvvoippeercfgdesiredqosvideo.get_name_leafdata());
    if (cvvoippeercfgdigitrelay.is_set || is_set(cvvoippeercfgdigitrelay.operation)) leaf_name_data.push_back(cvvoippeercfgdigitrelay.get_name_leafdata());
    if (cvvoippeercfgdscppolicynotificationenable.is_set || is_set(cvvoippeercfgdscppolicynotificationenable.operation)) leaf_name_data.push_back(cvvoippeercfgdscppolicynotificationenable.get_name_leafdata());
    if (cvvoippeercfgexpectfactor.is_set || is_set(cvvoippeercfgexpectfactor.operation)) leaf_name_data.push_back(cvvoippeercfgexpectfactor.get_name_leafdata());
    if (cvvoippeercfgfaxbytes.is_set || is_set(cvvoippeercfgfaxbytes.operation)) leaf_name_data.push_back(cvvoippeercfgfaxbytes.get_name_leafdata());
    if (cvvoippeercfgfaxrate.is_set || is_set(cvvoippeercfgfaxrate.operation)) leaf_name_data.push_back(cvvoippeercfgfaxrate.get_name_leafdata());
    if (cvvoippeercfgframesize.is_set || is_set(cvvoippeercfgframesize.operation)) leaf_name_data.push_back(cvvoippeercfgframesize.get_name_leafdata());
    if (cvvoippeercfgicpif.is_set || is_set(cvvoippeercfgicpif.operation)) leaf_name_data.push_back(cvvoippeercfgicpif.get_name_leafdata());
    if (cvvoippeercfginbandsignaling.is_set || is_set(cvvoippeercfginbandsignaling.operation)) leaf_name_data.push_back(cvvoippeercfginbandsignaling.get_name_leafdata());
    if (cvvoippeercfgipprecedence.is_set || is_set(cvvoippeercfgipprecedence.operation)) leaf_name_data.push_back(cvvoippeercfgipprecedence.get_name_leafdata());
    if (cvvoippeercfgmediapolicynotificationenable.is_set || is_set(cvvoippeercfgmediapolicynotificationenable.operation)) leaf_name_data.push_back(cvvoippeercfgmediapolicynotificationenable.get_name_leafdata());
    if (cvvoippeercfgmediasetting.is_set || is_set(cvvoippeercfgmediasetting.operation)) leaf_name_data.push_back(cvvoippeercfgmediasetting.get_name_leafdata());
    if (cvvoippeercfgminacceptableqos.is_set || is_set(cvvoippeercfgminacceptableqos.operation)) leaf_name_data.push_back(cvvoippeercfgminacceptableqos.get_name_leafdata());
    if (cvvoippeercfgminacceptableqosvideo.is_set || is_set(cvvoippeercfgminacceptableqosvideo.operation)) leaf_name_data.push_back(cvvoippeercfgminacceptableqosvideo.get_name_leafdata());
    if (cvvoippeercfgoctetaligned.is_set || is_set(cvvoippeercfgoctetaligned.operation)) leaf_name_data.push_back(cvvoippeercfgoctetaligned.get_name_leafdata());
    if (cvvoippeercfgpoorqovnotificationenable.is_set || is_set(cvvoippeercfgpoorqovnotificationenable.operation)) leaf_name_data.push_back(cvvoippeercfgpoorqovnotificationenable.get_name_leafdata());
    if (cvvoippeercfgredirectip2ip.is_set || is_set(cvvoippeercfgredirectip2ip.operation)) leaf_name_data.push_back(cvvoippeercfgredirectip2ip.get_name_leafdata());
    if (cvvoippeercfgsessionprotocol.is_set || is_set(cvvoippeercfgsessionprotocol.operation)) leaf_name_data.push_back(cvvoippeercfgsessionprotocol.get_name_leafdata());
    if (cvvoippeercfgsessiontarget.is_set || is_set(cvvoippeercfgsessiontarget.operation)) leaf_name_data.push_back(cvvoippeercfgsessiontarget.get_name_leafdata());
    if (cvvoippeercfgtechprefix.is_set || is_set(cvvoippeercfgtechprefix.operation)) leaf_name_data.push_back(cvvoippeercfgtechprefix.get_name_leafdata());
    if (cvvoippeercfgudpchecksumenable.is_set || is_set(cvvoippeercfgudpchecksumenable.operation)) leaf_name_data.push_back(cvvoippeercfgudpchecksumenable.get_name_leafdata());
    if (cvvoippeercfgvadenable.is_set || is_set(cvvoippeercfgvadenable.operation)) leaf_name_data.push_back(cvvoippeercfgvadenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cvVoIPPeerCfgBitRate")
    {
        cvvoippeercfgbitrate = value;
    }
    if(value_path == "cvVoIPPeerCfgBitRates")
    {
        cvvoippeercfgbitrates[value] = true;
    }
    if(value_path == "cvVoIPPeerCfgCoderBytes")
    {
        cvvoippeercfgcoderbytes = value;
    }
    if(value_path == "cvVoIPPeerCfgCoderMode")
    {
        cvvoippeercfgcodermode = value;
    }
    if(value_path == "cvVoIPPeerCfgCoderRate")
    {
        cvvoippeercfgcoderrate = value;
    }
    if(value_path == "cvVoIPPeerCfgCodingMode")
    {
        cvvoippeercfgcodingmode = value;
    }
    if(value_path == "cvVoIPPeerCfgCRC")
    {
        cvvoippeercfgcrc = value;
    }
    if(value_path == "cvVoIPPeerCfgDesiredQoS")
    {
        cvvoippeercfgdesiredqos = value;
    }
    if(value_path == "cvVoIPPeerCfgDesiredQoSVideo")
    {
        cvvoippeercfgdesiredqosvideo = value;
    }
    if(value_path == "cvVoIPPeerCfgDigitRelay")
    {
        cvvoippeercfgdigitrelay[value] = true;
    }
    if(value_path == "cvVoIPPeerCfgDSCPPolicyNotificationEnable")
    {
        cvvoippeercfgdscppolicynotificationenable = value;
    }
    if(value_path == "cvVoIPPeerCfgExpectFactor")
    {
        cvvoippeercfgexpectfactor = value;
    }
    if(value_path == "cvVoIPPeerCfgFaxBytes")
    {
        cvvoippeercfgfaxbytes = value;
    }
    if(value_path == "cvVoIPPeerCfgFaxRate")
    {
        cvvoippeercfgfaxrate = value;
    }
    if(value_path == "cvVoIPPeerCfgFrameSize")
    {
        cvvoippeercfgframesize = value;
    }
    if(value_path == "cvVoIPPeerCfgIcpif")
    {
        cvvoippeercfgicpif = value;
    }
    if(value_path == "cvVoIPPeerCfgInBandSignaling")
    {
        cvvoippeercfginbandsignaling = value;
    }
    if(value_path == "cvVoIPPeerCfgIPPrecedence")
    {
        cvvoippeercfgipprecedence = value;
    }
    if(value_path == "cvVoIPPeerCfgMediaPolicyNotificationEnable")
    {
        cvvoippeercfgmediapolicynotificationenable = value;
    }
    if(value_path == "cvVoIPPeerCfgMediaSetting")
    {
        cvvoippeercfgmediasetting = value;
    }
    if(value_path == "cvVoIPPeerCfgMinAcceptableQoS")
    {
        cvvoippeercfgminacceptableqos = value;
    }
    if(value_path == "cvVoIPPeerCfgMinAcceptableQoSVideo")
    {
        cvvoippeercfgminacceptableqosvideo = value;
    }
    if(value_path == "cvVoIPPeerCfgOctetAligned")
    {
        cvvoippeercfgoctetaligned = value;
    }
    if(value_path == "cvVoIPPeerCfgPoorQoVNotificationEnable")
    {
        cvvoippeercfgpoorqovnotificationenable = value;
    }
    if(value_path == "cvVoIPPeerCfgRedirectip2ip")
    {
        cvvoippeercfgredirectip2ip = value;
    }
    if(value_path == "cvVoIPPeerCfgSessionProtocol")
    {
        cvvoippeercfgsessionprotocol = value;
    }
    if(value_path == "cvVoIPPeerCfgSessionTarget")
    {
        cvvoippeercfgsessiontarget = value;
    }
    if(value_path == "cvVoIPPeerCfgTechPrefix")
    {
        cvvoippeercfgtechprefix = value;
    }
    if(value_path == "cvVoIPPeerCfgUDPChecksumEnable")
    {
        cvvoippeercfgudpchecksumenable = value;
    }
    if(value_path == "cvVoIPPeerCfgVADEnable")
    {
        cvvoippeercfgvadenable = value;
    }
}

CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgtable()
{
    yang_name = "cvPeerCommonCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvpeercommoncfgtable::~Cvpeercommoncfgtable()
{
}

bool CiscoVoiceDialControlMib::Cvpeercommoncfgtable::has_data() const
{
    for (std::size_t index=0; index<cvpeercommoncfgentry.size(); index++)
    {
        if(cvpeercommoncfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvpeercommoncfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvpeercommoncfgentry.size(); index++)
    {
        if(cvpeercommoncfgentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvpeercommoncfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCommonCfgTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvpeercommoncfgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvpeercommoncfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvPeerCommonCfgEntry")
    {
        for(auto const & c : cvpeercommoncfgentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry>();
        c->parent = this;
        cvpeercommoncfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvpeercommoncfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpeercommoncfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvpeercommoncfgtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::Cvpeercommoncfgentry()
    :
    ifindex{YType::str, "ifIndex"},
    cvpeercommoncfgapplicationname{YType::str, "cvPeerCommonCfgApplicationName"},
    cvpeercommoncfgdnismappingname{YType::str, "cvPeerCommonCfgDnisMappingName"},
    cvpeercommoncfghuntstop{YType::boolean, "cvPeerCommonCfgHuntStop"},
    cvpeercommoncfgincomingdnisdigits{YType::str, "cvPeerCommonCfgIncomingDnisDigits"},
    cvpeercommoncfgmaxconnections{YType::int32, "cvPeerCommonCfgMaxConnections"},
    cvpeercommoncfgpreference{YType::int32, "cvPeerCommonCfgPreference"},
    cvpeercommoncfgsourcecarrierid{YType::str, "cvPeerCommonCfgSourceCarrierId"},
    cvpeercommoncfgsourcetrunkgrplabel{YType::str, "cvPeerCommonCfgSourceTrunkGrpLabel"},
    cvpeercommoncfgtargetcarrierid{YType::str, "cvPeerCommonCfgTargetCarrierId"},
    cvpeercommoncfgtargettrunkgrplabel{YType::str, "cvPeerCommonCfgTargetTrunkGrpLabel"}
{
    yang_name = "cvPeerCommonCfgEntry"; yang_parent_name = "cvPeerCommonCfgTable";
}

CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::~Cvpeercommoncfgentry()
{
}

bool CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::has_data() const
{
    return ifindex.is_set
	|| cvpeercommoncfgapplicationname.is_set
	|| cvpeercommoncfgdnismappingname.is_set
	|| cvpeercommoncfghuntstop.is_set
	|| cvpeercommoncfgincomingdnisdigits.is_set
	|| cvpeercommoncfgmaxconnections.is_set
	|| cvpeercommoncfgpreference.is_set
	|| cvpeercommoncfgsourcecarrierid.is_set
	|| cvpeercommoncfgsourcetrunkgrplabel.is_set
	|| cvpeercommoncfgtargetcarrierid.is_set
	|| cvpeercommoncfgtargettrunkgrplabel.is_set;
}

bool CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cvpeercommoncfgapplicationname.operation)
	|| is_set(cvpeercommoncfgdnismappingname.operation)
	|| is_set(cvpeercommoncfghuntstop.operation)
	|| is_set(cvpeercommoncfgincomingdnisdigits.operation)
	|| is_set(cvpeercommoncfgmaxconnections.operation)
	|| is_set(cvpeercommoncfgpreference.operation)
	|| is_set(cvpeercommoncfgsourcecarrierid.operation)
	|| is_set(cvpeercommoncfgsourcetrunkgrplabel.operation)
	|| is_set(cvpeercommoncfgtargetcarrierid.operation)
	|| is_set(cvpeercommoncfgtargettrunkgrplabel.operation);
}

std::string CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCommonCfgEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvPeerCommonCfgTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvpeercommoncfgapplicationname.is_set || is_set(cvpeercommoncfgapplicationname.operation)) leaf_name_data.push_back(cvpeercommoncfgapplicationname.get_name_leafdata());
    if (cvpeercommoncfgdnismappingname.is_set || is_set(cvpeercommoncfgdnismappingname.operation)) leaf_name_data.push_back(cvpeercommoncfgdnismappingname.get_name_leafdata());
    if (cvpeercommoncfghuntstop.is_set || is_set(cvpeercommoncfghuntstop.operation)) leaf_name_data.push_back(cvpeercommoncfghuntstop.get_name_leafdata());
    if (cvpeercommoncfgincomingdnisdigits.is_set || is_set(cvpeercommoncfgincomingdnisdigits.operation)) leaf_name_data.push_back(cvpeercommoncfgincomingdnisdigits.get_name_leafdata());
    if (cvpeercommoncfgmaxconnections.is_set || is_set(cvpeercommoncfgmaxconnections.operation)) leaf_name_data.push_back(cvpeercommoncfgmaxconnections.get_name_leafdata());
    if (cvpeercommoncfgpreference.is_set || is_set(cvpeercommoncfgpreference.operation)) leaf_name_data.push_back(cvpeercommoncfgpreference.get_name_leafdata());
    if (cvpeercommoncfgsourcecarrierid.is_set || is_set(cvpeercommoncfgsourcecarrierid.operation)) leaf_name_data.push_back(cvpeercommoncfgsourcecarrierid.get_name_leafdata());
    if (cvpeercommoncfgsourcetrunkgrplabel.is_set || is_set(cvpeercommoncfgsourcetrunkgrplabel.operation)) leaf_name_data.push_back(cvpeercommoncfgsourcetrunkgrplabel.get_name_leafdata());
    if (cvpeercommoncfgtargetcarrierid.is_set || is_set(cvpeercommoncfgtargetcarrierid.operation)) leaf_name_data.push_back(cvpeercommoncfgtargetcarrierid.get_name_leafdata());
    if (cvpeercommoncfgtargettrunkgrplabel.is_set || is_set(cvpeercommoncfgtargettrunkgrplabel.operation)) leaf_name_data.push_back(cvpeercommoncfgtargettrunkgrplabel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cvPeerCommonCfgApplicationName")
    {
        cvpeercommoncfgapplicationname = value;
    }
    if(value_path == "cvPeerCommonCfgDnisMappingName")
    {
        cvpeercommoncfgdnismappingname = value;
    }
    if(value_path == "cvPeerCommonCfgHuntStop")
    {
        cvpeercommoncfghuntstop = value;
    }
    if(value_path == "cvPeerCommonCfgIncomingDnisDigits")
    {
        cvpeercommoncfgincomingdnisdigits = value;
    }
    if(value_path == "cvPeerCommonCfgMaxConnections")
    {
        cvpeercommoncfgmaxconnections = value;
    }
    if(value_path == "cvPeerCommonCfgPreference")
    {
        cvpeercommoncfgpreference = value;
    }
    if(value_path == "cvPeerCommonCfgSourceCarrierId")
    {
        cvpeercommoncfgsourcecarrierid = value;
    }
    if(value_path == "cvPeerCommonCfgSourceTrunkGrpLabel")
    {
        cvpeercommoncfgsourcetrunkgrplabel = value;
    }
    if(value_path == "cvPeerCommonCfgTargetCarrierId")
    {
        cvpeercommoncfgtargetcarrierid = value;
    }
    if(value_path == "cvPeerCommonCfgTargetTrunkGrpLabel")
    {
        cvpeercommoncfgtargettrunkgrplabel = value;
    }
}

CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactivetable()
{
    yang_name = "cvCallActiveTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallactivetable::~Cvcallactivetable()
{
}

bool CiscoVoiceDialControlMib::Cvcallactivetable::has_data() const
{
    for (std::size_t index=0; index<cvcallactiveentry.size(); index++)
    {
        if(cvcallactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcallactivetable::has_operation() const
{
    for (std::size_t index=0; index<cvcallactiveentry.size(); index++)
    {
        if(cvcallactiveentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcallactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallActiveTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallactivetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallActiveEntry")
    {
        for(auto const & c : cvcallactiveentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry>();
        c->parent = this;
        cvcallactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcallactivetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::Cvcallactiveentry()
    :
    callactivesetuptime{YType::str, "callActiveSetupTime"},
    callactiveindex{YType::str, "callActiveIndex"},
    cvcallactiveaccountcode{YType::str, "cvCallActiveAccountCode"},
    cvcallactiveacomlevel{YType::int32, "cvCallActiveACOMLevel"},
    cvcallactivecalleridblock{YType::boolean, "cvCallActiveCallerIDBlock"},
    cvcallactivecallid{YType::uint32, "cvCallActiveCallId"},
    cvcallactivecallingname{YType::str, "cvCallActiveCallingName"},
    cvcallactivecodertyperate{YType::enumeration, "cvCallActiveCoderTypeRate"},
    cvcallactiveconnectionid{YType::str, "cvCallActiveConnectionId"},
    cvcallactiveecanreflectorlocation{YType::int32, "cvCallActiveEcanReflectorLocation"},
    cvcallactiveerllevel{YType::int32, "cvCallActiveERLLevel"},
    cvcallactiveerllevelrev1{YType::int32, "cvCallActiveERLLevelRev1"},
    cvcallactivefaxtxduration{YType::uint32, "cvCallActiveFaxTxDuration"},
    cvcallactiveimgpagecount{YType::uint32, "cvCallActiveImgPageCount"},
    cvcallactiveinsignallevel{YType::int32, "cvCallActiveInSignalLevel"},
    cvcallactivenoiselevel{YType::int32, "cvCallActiveNoiseLevel"},
    cvcallactiveoutsignallevel{YType::int32, "cvCallActiveOutSignalLevel"},
    cvcallactivesessiontarget{YType::str, "cvCallActiveSessionTarget"},
    cvcallactivetxduration{YType::uint32, "cvCallActiveTxDuration"},
    cvcallactivevoicetxduration{YType::uint32, "cvCallActiveVoiceTxDuration"}
{
    yang_name = "cvCallActiveEntry"; yang_parent_name = "cvCallActiveTable";
}

CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::~Cvcallactiveentry()
{
}

bool CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::has_data() const
{
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| cvcallactiveaccountcode.is_set
	|| cvcallactiveacomlevel.is_set
	|| cvcallactivecalleridblock.is_set
	|| cvcallactivecallid.is_set
	|| cvcallactivecallingname.is_set
	|| cvcallactivecodertyperate.is_set
	|| cvcallactiveconnectionid.is_set
	|| cvcallactiveecanreflectorlocation.is_set
	|| cvcallactiveerllevel.is_set
	|| cvcallactiveerllevelrev1.is_set
	|| cvcallactivefaxtxduration.is_set
	|| cvcallactiveimgpagecount.is_set
	|| cvcallactiveinsignallevel.is_set
	|| cvcallactivenoiselevel.is_set
	|| cvcallactiveoutsignallevel.is_set
	|| cvcallactivesessiontarget.is_set
	|| cvcallactivetxduration.is_set
	|| cvcallactivevoicetxduration.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::has_operation() const
{
    return is_set(operation)
	|| is_set(callactivesetuptime.operation)
	|| is_set(callactiveindex.operation)
	|| is_set(cvcallactiveaccountcode.operation)
	|| is_set(cvcallactiveacomlevel.operation)
	|| is_set(cvcallactivecalleridblock.operation)
	|| is_set(cvcallactivecallid.operation)
	|| is_set(cvcallactivecallingname.operation)
	|| is_set(cvcallactivecodertyperate.operation)
	|| is_set(cvcallactiveconnectionid.operation)
	|| is_set(cvcallactiveecanreflectorlocation.operation)
	|| is_set(cvcallactiveerllevel.operation)
	|| is_set(cvcallactiveerllevelrev1.operation)
	|| is_set(cvcallactivefaxtxduration.operation)
	|| is_set(cvcallactiveimgpagecount.operation)
	|| is_set(cvcallactiveinsignallevel.operation)
	|| is_set(cvcallactivenoiselevel.operation)
	|| is_set(cvcallactiveoutsignallevel.operation)
	|| is_set(cvcallactivesessiontarget.operation)
	|| is_set(cvcallactivetxduration.operation)
	|| is_set(cvcallactivevoicetxduration.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallActiveEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallActiveTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.operation)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.operation)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (cvcallactiveaccountcode.is_set || is_set(cvcallactiveaccountcode.operation)) leaf_name_data.push_back(cvcallactiveaccountcode.get_name_leafdata());
    if (cvcallactiveacomlevel.is_set || is_set(cvcallactiveacomlevel.operation)) leaf_name_data.push_back(cvcallactiveacomlevel.get_name_leafdata());
    if (cvcallactivecalleridblock.is_set || is_set(cvcallactivecalleridblock.operation)) leaf_name_data.push_back(cvcallactivecalleridblock.get_name_leafdata());
    if (cvcallactivecallid.is_set || is_set(cvcallactivecallid.operation)) leaf_name_data.push_back(cvcallactivecallid.get_name_leafdata());
    if (cvcallactivecallingname.is_set || is_set(cvcallactivecallingname.operation)) leaf_name_data.push_back(cvcallactivecallingname.get_name_leafdata());
    if (cvcallactivecodertyperate.is_set || is_set(cvcallactivecodertyperate.operation)) leaf_name_data.push_back(cvcallactivecodertyperate.get_name_leafdata());
    if (cvcallactiveconnectionid.is_set || is_set(cvcallactiveconnectionid.operation)) leaf_name_data.push_back(cvcallactiveconnectionid.get_name_leafdata());
    if (cvcallactiveecanreflectorlocation.is_set || is_set(cvcallactiveecanreflectorlocation.operation)) leaf_name_data.push_back(cvcallactiveecanreflectorlocation.get_name_leafdata());
    if (cvcallactiveerllevel.is_set || is_set(cvcallactiveerllevel.operation)) leaf_name_data.push_back(cvcallactiveerllevel.get_name_leafdata());
    if (cvcallactiveerllevelrev1.is_set || is_set(cvcallactiveerllevelrev1.operation)) leaf_name_data.push_back(cvcallactiveerllevelrev1.get_name_leafdata());
    if (cvcallactivefaxtxduration.is_set || is_set(cvcallactivefaxtxduration.operation)) leaf_name_data.push_back(cvcallactivefaxtxduration.get_name_leafdata());
    if (cvcallactiveimgpagecount.is_set || is_set(cvcallactiveimgpagecount.operation)) leaf_name_data.push_back(cvcallactiveimgpagecount.get_name_leafdata());
    if (cvcallactiveinsignallevel.is_set || is_set(cvcallactiveinsignallevel.operation)) leaf_name_data.push_back(cvcallactiveinsignallevel.get_name_leafdata());
    if (cvcallactivenoiselevel.is_set || is_set(cvcallactivenoiselevel.operation)) leaf_name_data.push_back(cvcallactivenoiselevel.get_name_leafdata());
    if (cvcallactiveoutsignallevel.is_set || is_set(cvcallactiveoutsignallevel.operation)) leaf_name_data.push_back(cvcallactiveoutsignallevel.get_name_leafdata());
    if (cvcallactivesessiontarget.is_set || is_set(cvcallactivesessiontarget.operation)) leaf_name_data.push_back(cvcallactivesessiontarget.get_name_leafdata());
    if (cvcallactivetxduration.is_set || is_set(cvcallactivetxduration.operation)) leaf_name_data.push_back(cvcallactivetxduration.get_name_leafdata());
    if (cvcallactivevoicetxduration.is_set || is_set(cvcallactivevoicetxduration.operation)) leaf_name_data.push_back(cvcallactivevoicetxduration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
    }
    if(value_path == "cvCallActiveAccountCode")
    {
        cvcallactiveaccountcode = value;
    }
    if(value_path == "cvCallActiveACOMLevel")
    {
        cvcallactiveacomlevel = value;
    }
    if(value_path == "cvCallActiveCallerIDBlock")
    {
        cvcallactivecalleridblock = value;
    }
    if(value_path == "cvCallActiveCallId")
    {
        cvcallactivecallid = value;
    }
    if(value_path == "cvCallActiveCallingName")
    {
        cvcallactivecallingname = value;
    }
    if(value_path == "cvCallActiveCoderTypeRate")
    {
        cvcallactivecodertyperate = value;
    }
    if(value_path == "cvCallActiveConnectionId")
    {
        cvcallactiveconnectionid = value;
    }
    if(value_path == "cvCallActiveEcanReflectorLocation")
    {
        cvcallactiveecanreflectorlocation = value;
    }
    if(value_path == "cvCallActiveERLLevel")
    {
        cvcallactiveerllevel = value;
    }
    if(value_path == "cvCallActiveERLLevelRev1")
    {
        cvcallactiveerllevelrev1 = value;
    }
    if(value_path == "cvCallActiveFaxTxDuration")
    {
        cvcallactivefaxtxduration = value;
    }
    if(value_path == "cvCallActiveImgPageCount")
    {
        cvcallactiveimgpagecount = value;
    }
    if(value_path == "cvCallActiveInSignalLevel")
    {
        cvcallactiveinsignallevel = value;
    }
    if(value_path == "cvCallActiveNoiseLevel")
    {
        cvcallactivenoiselevel = value;
    }
    if(value_path == "cvCallActiveOutSignalLevel")
    {
        cvcallactiveoutsignallevel = value;
    }
    if(value_path == "cvCallActiveSessionTarget")
    {
        cvcallactivesessiontarget = value;
    }
    if(value_path == "cvCallActiveTxDuration")
    {
        cvcallactivetxduration = value;
    }
    if(value_path == "cvCallActiveVoiceTxDuration")
    {
        cvcallactivevoicetxduration = value;
    }
}

CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactivetable()
{
    yang_name = "cvVoIPCallActiveTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvvoipcallactivetable::~Cvvoipcallactivetable()
{
}

bool CiscoVoiceDialControlMib::Cvvoipcallactivetable::has_data() const
{
    for (std::size_t index=0; index<cvvoipcallactiveentry.size(); index++)
    {
        if(cvvoipcallactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvvoipcallactivetable::has_operation() const
{
    for (std::size_t index=0; index<cvvoipcallactiveentry.size(); index++)
    {
        if(cvvoipcallactiveentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvvoipcallactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallActiveTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoipcallactivetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoipcallactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvVoIPCallActiveEntry")
    {
        for(auto const & c : cvvoipcallactiveentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry>();
        c->parent = this;
        cvvoipcallactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoipcallactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoipcallactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvvoipcallactivetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::Cvvoipcallactiveentry()
    :
    callactivesetuptime{YType::str, "callActiveSetupTime"},
    callactiveindex{YType::str, "callActiveIndex"},
    ccvoipcallactivepolicyname{YType::str, "ccVoIPCallActivePolicyName"},
    cvvoipcallactivebitrates{YType::bits, "cvVoIPCallActiveBitRates"},
    cvvoipcallactivecallid{YType::uint32, "cvVoIPCallActiveCallId"},
    cvvoipcallactivecallreferenceid{YType::uint32, "cvVoIPCallActiveCallReferenceId"},
    cvvoipcallactivechannels{YType::int32, "cvVoIPCallActiveChannels"},
    cvvoipcallactivecodermode{YType::enumeration, "cvVoIPCallActiveCoderMode"},
    cvvoipcallactivecodertyperate{YType::enumeration, "cvVoIPCallActiveCoderTypeRate"},
    cvvoipcallactiveconnectionid{YType::str, "cvVoIPCallActiveConnectionId"},
    cvvoipcallactivecrc{YType::boolean, "cvVoIPCallActiveCRC"},
    cvvoipcallactiveearlypackets{YType::uint32, "cvVoIPCallActiveEarlyPackets"},
    cvvoipcallactiveencap{YType::enumeration, "cvVoIPCallActiveEncap"},
    cvvoipcallactivegapfillwithinterpolation{YType::uint32, "cvVoIPCallActiveGapFillWithInterpolation"},
    cvvoipcallactivegapfillwithprediction{YType::uint32, "cvVoIPCallActiveGapFillWithPrediction"},
    cvvoipcallactivegapfillwithredundancy{YType::uint32, "cvVoIPCallActiveGapFillWithRedundancy"},
    cvvoipcallactivegapfillwithsilence{YType::uint32, "cvVoIPCallActiveGapFillWithSilence"},
    cvvoipcallactivehiwaterplayoutdelay{YType::uint32, "cvVoIPCallActiveHiWaterPlayoutDelay"},
    cvvoipcallactiveinterleaving{YType::int32, "cvVoIPCallActiveInterleaving"},
    cvvoipcallactivelatepackets{YType::uint32, "cvVoIPCallActiveLatePackets"},
    cvvoipcallactivelostpackets{YType::uint32, "cvVoIPCallActiveLostPackets"},
    cvvoipcallactivelowaterplayoutdelay{YType::uint32, "cvVoIPCallActiveLoWaterPlayoutDelay"},
    cvvoipcallactivemaxptime{YType::int32, "cvVoIPCallActiveMaxPtime"},
    cvvoipcallactivemodechgneighbor{YType::boolean, "cvVoIPCallActiveModeChgNeighbor"},
    cvvoipcallactivemodechgperiod{YType::int32, "cvVoIPCallActiveModeChgPeriod"},
    cvvoipcallactiveoctetaligned{YType::boolean, "cvVoIPCallActiveOctetAligned"},
    cvvoipcallactiveontimervplayout{YType::uint32, "cvVoIPCallActiveOnTimeRvPlayout"},
    cvvoipcallactiveprotocolcallid{YType::str, "cvVoIPCallActiveProtocolCallId"},
    cvvoipcallactiveptime{YType::int32, "cvVoIPCallActivePtime"},
    cvvoipcallactivereceivedelay{YType::uint32, "cvVoIPCallActiveReceiveDelay"},
    cvvoipcallactiveremmediaipaddr{YType::str, "cvVoIPCallActiveRemMediaIPAddr"},
    cvvoipcallactiveremmediaipaddrt{YType::enumeration, "cvVoIPCallActiveRemMediaIPAddrT"},
    cvvoipcallactiveremmediaport{YType::int32, "cvVoIPCallActiveRemMediaPort"},
    cvvoipcallactiveremoteipaddress{YType::str, "cvVoIPCallActiveRemoteIPAddress"},
    cvvoipcallactiveremoteudpport{YType::int32, "cvVoIPCallActiveRemoteUDPPort"},
    cvvoipcallactiveremsigipaddr{YType::str, "cvVoIPCallActiveRemSigIPAddr"},
    cvvoipcallactiveremsigipaddrt{YType::enumeration, "cvVoIPCallActiveRemSigIPAddrT"},
    cvvoipcallactiveremsigport{YType::int32, "cvVoIPCallActiveRemSigPort"},
    cvvoipcallactivereverseddirectionpeeraddress{YType::str, "cvVoIPCallActiveReversedDirectionPeerAddress"},
    cvvoipcallactiverobustsorting{YType::boolean, "cvVoIPCallActiveRobustSorting"},
    cvvoipcallactiveroundtripdelay{YType::uint32, "cvVoIPCallActiveRoundTripDelay"},
    cvvoipcallactiveselectedqos{YType::enumeration, "cvVoIPCallActiveSelectedQoS"},
    cvvoipcallactivesessionid{YType::uint32, "cvVoIPCallActiveSessionId"},
    cvvoipcallactivesessionprotocol{YType::enumeration, "cvVoIPCallActiveSessionProtocol"},
    cvvoipcallactivesessiontarget{YType::str, "cvVoIPCallActiveSessionTarget"},
    cvvoipcallactivesrtpenable{YType::boolean, "cvVoIPCallActiveSRTPEnable"},
    cvvoipcallactiveusername{YType::str, "cvVoIPCallActiveUsername"},
    cvvoipcallactivevadenable{YType::boolean, "cvVoIPCallActiveVADEnable"}
{
    yang_name = "cvVoIPCallActiveEntry"; yang_parent_name = "cvVoIPCallActiveTable";
}

CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::~Cvvoipcallactiveentry()
{
}

bool CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::has_data() const
{
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| ccvoipcallactivepolicyname.is_set
	|| cvvoipcallactivebitrates.is_set
	|| cvvoipcallactivecallid.is_set
	|| cvvoipcallactivecallreferenceid.is_set
	|| cvvoipcallactivechannels.is_set
	|| cvvoipcallactivecodermode.is_set
	|| cvvoipcallactivecodertyperate.is_set
	|| cvvoipcallactiveconnectionid.is_set
	|| cvvoipcallactivecrc.is_set
	|| cvvoipcallactiveearlypackets.is_set
	|| cvvoipcallactiveencap.is_set
	|| cvvoipcallactivegapfillwithinterpolation.is_set
	|| cvvoipcallactivegapfillwithprediction.is_set
	|| cvvoipcallactivegapfillwithredundancy.is_set
	|| cvvoipcallactivegapfillwithsilence.is_set
	|| cvvoipcallactivehiwaterplayoutdelay.is_set
	|| cvvoipcallactiveinterleaving.is_set
	|| cvvoipcallactivelatepackets.is_set
	|| cvvoipcallactivelostpackets.is_set
	|| cvvoipcallactivelowaterplayoutdelay.is_set
	|| cvvoipcallactivemaxptime.is_set
	|| cvvoipcallactivemodechgneighbor.is_set
	|| cvvoipcallactivemodechgperiod.is_set
	|| cvvoipcallactiveoctetaligned.is_set
	|| cvvoipcallactiveontimervplayout.is_set
	|| cvvoipcallactiveprotocolcallid.is_set
	|| cvvoipcallactiveptime.is_set
	|| cvvoipcallactivereceivedelay.is_set
	|| cvvoipcallactiveremmediaipaddr.is_set
	|| cvvoipcallactiveremmediaipaddrt.is_set
	|| cvvoipcallactiveremmediaport.is_set
	|| cvvoipcallactiveremoteipaddress.is_set
	|| cvvoipcallactiveremoteudpport.is_set
	|| cvvoipcallactiveremsigipaddr.is_set
	|| cvvoipcallactiveremsigipaddrt.is_set
	|| cvvoipcallactiveremsigport.is_set
	|| cvvoipcallactivereverseddirectionpeeraddress.is_set
	|| cvvoipcallactiverobustsorting.is_set
	|| cvvoipcallactiveroundtripdelay.is_set
	|| cvvoipcallactiveselectedqos.is_set
	|| cvvoipcallactivesessionid.is_set
	|| cvvoipcallactivesessionprotocol.is_set
	|| cvvoipcallactivesessiontarget.is_set
	|| cvvoipcallactivesrtpenable.is_set
	|| cvvoipcallactiveusername.is_set
	|| cvvoipcallactivevadenable.is_set;
}

bool CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::has_operation() const
{
    return is_set(operation)
	|| is_set(callactivesetuptime.operation)
	|| is_set(callactiveindex.operation)
	|| is_set(ccvoipcallactivepolicyname.operation)
	|| is_set(cvvoipcallactivebitrates.operation)
	|| is_set(cvvoipcallactivecallid.operation)
	|| is_set(cvvoipcallactivecallreferenceid.operation)
	|| is_set(cvvoipcallactivechannels.operation)
	|| is_set(cvvoipcallactivecodermode.operation)
	|| is_set(cvvoipcallactivecodertyperate.operation)
	|| is_set(cvvoipcallactiveconnectionid.operation)
	|| is_set(cvvoipcallactivecrc.operation)
	|| is_set(cvvoipcallactiveearlypackets.operation)
	|| is_set(cvvoipcallactiveencap.operation)
	|| is_set(cvvoipcallactivegapfillwithinterpolation.operation)
	|| is_set(cvvoipcallactivegapfillwithprediction.operation)
	|| is_set(cvvoipcallactivegapfillwithredundancy.operation)
	|| is_set(cvvoipcallactivegapfillwithsilence.operation)
	|| is_set(cvvoipcallactivehiwaterplayoutdelay.operation)
	|| is_set(cvvoipcallactiveinterleaving.operation)
	|| is_set(cvvoipcallactivelatepackets.operation)
	|| is_set(cvvoipcallactivelostpackets.operation)
	|| is_set(cvvoipcallactivelowaterplayoutdelay.operation)
	|| is_set(cvvoipcallactivemaxptime.operation)
	|| is_set(cvvoipcallactivemodechgneighbor.operation)
	|| is_set(cvvoipcallactivemodechgperiod.operation)
	|| is_set(cvvoipcallactiveoctetaligned.operation)
	|| is_set(cvvoipcallactiveontimervplayout.operation)
	|| is_set(cvvoipcallactiveprotocolcallid.operation)
	|| is_set(cvvoipcallactiveptime.operation)
	|| is_set(cvvoipcallactivereceivedelay.operation)
	|| is_set(cvvoipcallactiveremmediaipaddr.operation)
	|| is_set(cvvoipcallactiveremmediaipaddrt.operation)
	|| is_set(cvvoipcallactiveremmediaport.operation)
	|| is_set(cvvoipcallactiveremoteipaddress.operation)
	|| is_set(cvvoipcallactiveremoteudpport.operation)
	|| is_set(cvvoipcallactiveremsigipaddr.operation)
	|| is_set(cvvoipcallactiveremsigipaddrt.operation)
	|| is_set(cvvoipcallactiveremsigport.operation)
	|| is_set(cvvoipcallactivereverseddirectionpeeraddress.operation)
	|| is_set(cvvoipcallactiverobustsorting.operation)
	|| is_set(cvvoipcallactiveroundtripdelay.operation)
	|| is_set(cvvoipcallactiveselectedqos.operation)
	|| is_set(cvvoipcallactivesessionid.operation)
	|| is_set(cvvoipcallactivesessionprotocol.operation)
	|| is_set(cvvoipcallactivesessiontarget.operation)
	|| is_set(cvvoipcallactivesrtpenable.operation)
	|| is_set(cvvoipcallactiveusername.operation)
	|| is_set(cvvoipcallactivevadenable.operation);
}

std::string CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallActiveEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoIPCallActiveTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.operation)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.operation)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (ccvoipcallactivepolicyname.is_set || is_set(ccvoipcallactivepolicyname.operation)) leaf_name_data.push_back(ccvoipcallactivepolicyname.get_name_leafdata());
    if (cvvoipcallactivebitrates.is_set || is_set(cvvoipcallactivebitrates.operation)) leaf_name_data.push_back(cvvoipcallactivebitrates.get_name_leafdata());
    if (cvvoipcallactivecallid.is_set || is_set(cvvoipcallactivecallid.operation)) leaf_name_data.push_back(cvvoipcallactivecallid.get_name_leafdata());
    if (cvvoipcallactivecallreferenceid.is_set || is_set(cvvoipcallactivecallreferenceid.operation)) leaf_name_data.push_back(cvvoipcallactivecallreferenceid.get_name_leafdata());
    if (cvvoipcallactivechannels.is_set || is_set(cvvoipcallactivechannels.operation)) leaf_name_data.push_back(cvvoipcallactivechannels.get_name_leafdata());
    if (cvvoipcallactivecodermode.is_set || is_set(cvvoipcallactivecodermode.operation)) leaf_name_data.push_back(cvvoipcallactivecodermode.get_name_leafdata());
    if (cvvoipcallactivecodertyperate.is_set || is_set(cvvoipcallactivecodertyperate.operation)) leaf_name_data.push_back(cvvoipcallactivecodertyperate.get_name_leafdata());
    if (cvvoipcallactiveconnectionid.is_set || is_set(cvvoipcallactiveconnectionid.operation)) leaf_name_data.push_back(cvvoipcallactiveconnectionid.get_name_leafdata());
    if (cvvoipcallactivecrc.is_set || is_set(cvvoipcallactivecrc.operation)) leaf_name_data.push_back(cvvoipcallactivecrc.get_name_leafdata());
    if (cvvoipcallactiveearlypackets.is_set || is_set(cvvoipcallactiveearlypackets.operation)) leaf_name_data.push_back(cvvoipcallactiveearlypackets.get_name_leafdata());
    if (cvvoipcallactiveencap.is_set || is_set(cvvoipcallactiveencap.operation)) leaf_name_data.push_back(cvvoipcallactiveencap.get_name_leafdata());
    if (cvvoipcallactivegapfillwithinterpolation.is_set || is_set(cvvoipcallactivegapfillwithinterpolation.operation)) leaf_name_data.push_back(cvvoipcallactivegapfillwithinterpolation.get_name_leafdata());
    if (cvvoipcallactivegapfillwithprediction.is_set || is_set(cvvoipcallactivegapfillwithprediction.operation)) leaf_name_data.push_back(cvvoipcallactivegapfillwithprediction.get_name_leafdata());
    if (cvvoipcallactivegapfillwithredundancy.is_set || is_set(cvvoipcallactivegapfillwithredundancy.operation)) leaf_name_data.push_back(cvvoipcallactivegapfillwithredundancy.get_name_leafdata());
    if (cvvoipcallactivegapfillwithsilence.is_set || is_set(cvvoipcallactivegapfillwithsilence.operation)) leaf_name_data.push_back(cvvoipcallactivegapfillwithsilence.get_name_leafdata());
    if (cvvoipcallactivehiwaterplayoutdelay.is_set || is_set(cvvoipcallactivehiwaterplayoutdelay.operation)) leaf_name_data.push_back(cvvoipcallactivehiwaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallactiveinterleaving.is_set || is_set(cvvoipcallactiveinterleaving.operation)) leaf_name_data.push_back(cvvoipcallactiveinterleaving.get_name_leafdata());
    if (cvvoipcallactivelatepackets.is_set || is_set(cvvoipcallactivelatepackets.operation)) leaf_name_data.push_back(cvvoipcallactivelatepackets.get_name_leafdata());
    if (cvvoipcallactivelostpackets.is_set || is_set(cvvoipcallactivelostpackets.operation)) leaf_name_data.push_back(cvvoipcallactivelostpackets.get_name_leafdata());
    if (cvvoipcallactivelowaterplayoutdelay.is_set || is_set(cvvoipcallactivelowaterplayoutdelay.operation)) leaf_name_data.push_back(cvvoipcallactivelowaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallactivemaxptime.is_set || is_set(cvvoipcallactivemaxptime.operation)) leaf_name_data.push_back(cvvoipcallactivemaxptime.get_name_leafdata());
    if (cvvoipcallactivemodechgneighbor.is_set || is_set(cvvoipcallactivemodechgneighbor.operation)) leaf_name_data.push_back(cvvoipcallactivemodechgneighbor.get_name_leafdata());
    if (cvvoipcallactivemodechgperiod.is_set || is_set(cvvoipcallactivemodechgperiod.operation)) leaf_name_data.push_back(cvvoipcallactivemodechgperiod.get_name_leafdata());
    if (cvvoipcallactiveoctetaligned.is_set || is_set(cvvoipcallactiveoctetaligned.operation)) leaf_name_data.push_back(cvvoipcallactiveoctetaligned.get_name_leafdata());
    if (cvvoipcallactiveontimervplayout.is_set || is_set(cvvoipcallactiveontimervplayout.operation)) leaf_name_data.push_back(cvvoipcallactiveontimervplayout.get_name_leafdata());
    if (cvvoipcallactiveprotocolcallid.is_set || is_set(cvvoipcallactiveprotocolcallid.operation)) leaf_name_data.push_back(cvvoipcallactiveprotocolcallid.get_name_leafdata());
    if (cvvoipcallactiveptime.is_set || is_set(cvvoipcallactiveptime.operation)) leaf_name_data.push_back(cvvoipcallactiveptime.get_name_leafdata());
    if (cvvoipcallactivereceivedelay.is_set || is_set(cvvoipcallactivereceivedelay.operation)) leaf_name_data.push_back(cvvoipcallactivereceivedelay.get_name_leafdata());
    if (cvvoipcallactiveremmediaipaddr.is_set || is_set(cvvoipcallactiveremmediaipaddr.operation)) leaf_name_data.push_back(cvvoipcallactiveremmediaipaddr.get_name_leafdata());
    if (cvvoipcallactiveremmediaipaddrt.is_set || is_set(cvvoipcallactiveremmediaipaddrt.operation)) leaf_name_data.push_back(cvvoipcallactiveremmediaipaddrt.get_name_leafdata());
    if (cvvoipcallactiveremmediaport.is_set || is_set(cvvoipcallactiveremmediaport.operation)) leaf_name_data.push_back(cvvoipcallactiveremmediaport.get_name_leafdata());
    if (cvvoipcallactiveremoteipaddress.is_set || is_set(cvvoipcallactiveremoteipaddress.operation)) leaf_name_data.push_back(cvvoipcallactiveremoteipaddress.get_name_leafdata());
    if (cvvoipcallactiveremoteudpport.is_set || is_set(cvvoipcallactiveremoteudpport.operation)) leaf_name_data.push_back(cvvoipcallactiveremoteudpport.get_name_leafdata());
    if (cvvoipcallactiveremsigipaddr.is_set || is_set(cvvoipcallactiveremsigipaddr.operation)) leaf_name_data.push_back(cvvoipcallactiveremsigipaddr.get_name_leafdata());
    if (cvvoipcallactiveremsigipaddrt.is_set || is_set(cvvoipcallactiveremsigipaddrt.operation)) leaf_name_data.push_back(cvvoipcallactiveremsigipaddrt.get_name_leafdata());
    if (cvvoipcallactiveremsigport.is_set || is_set(cvvoipcallactiveremsigport.operation)) leaf_name_data.push_back(cvvoipcallactiveremsigport.get_name_leafdata());
    if (cvvoipcallactivereverseddirectionpeeraddress.is_set || is_set(cvvoipcallactivereverseddirectionpeeraddress.operation)) leaf_name_data.push_back(cvvoipcallactivereverseddirectionpeeraddress.get_name_leafdata());
    if (cvvoipcallactiverobustsorting.is_set || is_set(cvvoipcallactiverobustsorting.operation)) leaf_name_data.push_back(cvvoipcallactiverobustsorting.get_name_leafdata());
    if (cvvoipcallactiveroundtripdelay.is_set || is_set(cvvoipcallactiveroundtripdelay.operation)) leaf_name_data.push_back(cvvoipcallactiveroundtripdelay.get_name_leafdata());
    if (cvvoipcallactiveselectedqos.is_set || is_set(cvvoipcallactiveselectedqos.operation)) leaf_name_data.push_back(cvvoipcallactiveselectedqos.get_name_leafdata());
    if (cvvoipcallactivesessionid.is_set || is_set(cvvoipcallactivesessionid.operation)) leaf_name_data.push_back(cvvoipcallactivesessionid.get_name_leafdata());
    if (cvvoipcallactivesessionprotocol.is_set || is_set(cvvoipcallactivesessionprotocol.operation)) leaf_name_data.push_back(cvvoipcallactivesessionprotocol.get_name_leafdata());
    if (cvvoipcallactivesessiontarget.is_set || is_set(cvvoipcallactivesessiontarget.operation)) leaf_name_data.push_back(cvvoipcallactivesessiontarget.get_name_leafdata());
    if (cvvoipcallactivesrtpenable.is_set || is_set(cvvoipcallactivesrtpenable.operation)) leaf_name_data.push_back(cvvoipcallactivesrtpenable.get_name_leafdata());
    if (cvvoipcallactiveusername.is_set || is_set(cvvoipcallactiveusername.operation)) leaf_name_data.push_back(cvvoipcallactiveusername.get_name_leafdata());
    if (cvvoipcallactivevadenable.is_set || is_set(cvvoipcallactivevadenable.operation)) leaf_name_data.push_back(cvvoipcallactivevadenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
    }
    if(value_path == "ccVoIPCallActivePolicyName")
    {
        ccvoipcallactivepolicyname = value;
    }
    if(value_path == "cvVoIPCallActiveBitRates")
    {
        cvvoipcallactivebitrates[value] = true;
    }
    if(value_path == "cvVoIPCallActiveCallId")
    {
        cvvoipcallactivecallid = value;
    }
    if(value_path == "cvVoIPCallActiveCallReferenceId")
    {
        cvvoipcallactivecallreferenceid = value;
    }
    if(value_path == "cvVoIPCallActiveChannels")
    {
        cvvoipcallactivechannels = value;
    }
    if(value_path == "cvVoIPCallActiveCoderMode")
    {
        cvvoipcallactivecodermode = value;
    }
    if(value_path == "cvVoIPCallActiveCoderTypeRate")
    {
        cvvoipcallactivecodertyperate = value;
    }
    if(value_path == "cvVoIPCallActiveConnectionId")
    {
        cvvoipcallactiveconnectionid = value;
    }
    if(value_path == "cvVoIPCallActiveCRC")
    {
        cvvoipcallactivecrc = value;
    }
    if(value_path == "cvVoIPCallActiveEarlyPackets")
    {
        cvvoipcallactiveearlypackets = value;
    }
    if(value_path == "cvVoIPCallActiveEncap")
    {
        cvvoipcallactiveencap = value;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithInterpolation")
    {
        cvvoipcallactivegapfillwithinterpolation = value;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithPrediction")
    {
        cvvoipcallactivegapfillwithprediction = value;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithRedundancy")
    {
        cvvoipcallactivegapfillwithredundancy = value;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithSilence")
    {
        cvvoipcallactivegapfillwithsilence = value;
    }
    if(value_path == "cvVoIPCallActiveHiWaterPlayoutDelay")
    {
        cvvoipcallactivehiwaterplayoutdelay = value;
    }
    if(value_path == "cvVoIPCallActiveInterleaving")
    {
        cvvoipcallactiveinterleaving = value;
    }
    if(value_path == "cvVoIPCallActiveLatePackets")
    {
        cvvoipcallactivelatepackets = value;
    }
    if(value_path == "cvVoIPCallActiveLostPackets")
    {
        cvvoipcallactivelostpackets = value;
    }
    if(value_path == "cvVoIPCallActiveLoWaterPlayoutDelay")
    {
        cvvoipcallactivelowaterplayoutdelay = value;
    }
    if(value_path == "cvVoIPCallActiveMaxPtime")
    {
        cvvoipcallactivemaxptime = value;
    }
    if(value_path == "cvVoIPCallActiveModeChgNeighbor")
    {
        cvvoipcallactivemodechgneighbor = value;
    }
    if(value_path == "cvVoIPCallActiveModeChgPeriod")
    {
        cvvoipcallactivemodechgperiod = value;
    }
    if(value_path == "cvVoIPCallActiveOctetAligned")
    {
        cvvoipcallactiveoctetaligned = value;
    }
    if(value_path == "cvVoIPCallActiveOnTimeRvPlayout")
    {
        cvvoipcallactiveontimervplayout = value;
    }
    if(value_path == "cvVoIPCallActiveProtocolCallId")
    {
        cvvoipcallactiveprotocolcallid = value;
    }
    if(value_path == "cvVoIPCallActivePtime")
    {
        cvvoipcallactiveptime = value;
    }
    if(value_path == "cvVoIPCallActiveReceiveDelay")
    {
        cvvoipcallactivereceivedelay = value;
    }
    if(value_path == "cvVoIPCallActiveRemMediaIPAddr")
    {
        cvvoipcallactiveremmediaipaddr = value;
    }
    if(value_path == "cvVoIPCallActiveRemMediaIPAddrT")
    {
        cvvoipcallactiveremmediaipaddrt = value;
    }
    if(value_path == "cvVoIPCallActiveRemMediaPort")
    {
        cvvoipcallactiveremmediaport = value;
    }
    if(value_path == "cvVoIPCallActiveRemoteIPAddress")
    {
        cvvoipcallactiveremoteipaddress = value;
    }
    if(value_path == "cvVoIPCallActiveRemoteUDPPort")
    {
        cvvoipcallactiveremoteudpport = value;
    }
    if(value_path == "cvVoIPCallActiveRemSigIPAddr")
    {
        cvvoipcallactiveremsigipaddr = value;
    }
    if(value_path == "cvVoIPCallActiveRemSigIPAddrT")
    {
        cvvoipcallactiveremsigipaddrt = value;
    }
    if(value_path == "cvVoIPCallActiveRemSigPort")
    {
        cvvoipcallactiveremsigport = value;
    }
    if(value_path == "cvVoIPCallActiveReversedDirectionPeerAddress")
    {
        cvvoipcallactivereverseddirectionpeeraddress = value;
    }
    if(value_path == "cvVoIPCallActiveRobustSorting")
    {
        cvvoipcallactiverobustsorting = value;
    }
    if(value_path == "cvVoIPCallActiveRoundTripDelay")
    {
        cvvoipcallactiveroundtripdelay = value;
    }
    if(value_path == "cvVoIPCallActiveSelectedQoS")
    {
        cvvoipcallactiveselectedqos = value;
    }
    if(value_path == "cvVoIPCallActiveSessionId")
    {
        cvvoipcallactivesessionid = value;
    }
    if(value_path == "cvVoIPCallActiveSessionProtocol")
    {
        cvvoipcallactivesessionprotocol = value;
    }
    if(value_path == "cvVoIPCallActiveSessionTarget")
    {
        cvvoipcallactivesessiontarget = value;
    }
    if(value_path == "cvVoIPCallActiveSRTPEnable")
    {
        cvvoipcallactivesrtpenable = value;
    }
    if(value_path == "cvVoIPCallActiveUsername")
    {
        cvvoipcallactiveusername = value;
    }
    if(value_path == "cvVoIPCallActiveVADEnable")
    {
        cvvoipcallactivevadenable = value;
    }
}

CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconntable()
{
    yang_name = "cvCallVolConnTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallvolconntable::~Cvcallvolconntable()
{
}

bool CiscoVoiceDialControlMib::Cvcallvolconntable::has_data() const
{
    for (std::size_t index=0; index<cvcallvolconnentry.size(); index++)
    {
        if(cvcallvolconnentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcallvolconntable::has_operation() const
{
    for (std::size_t index=0; index<cvcallvolconnentry.size(); index++)
    {
        if(cvcallvolconnentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcallvolconntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolConnTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallvolconntable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallvolconntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallVolConnEntry")
    {
        for(auto const & c : cvcallvolconnentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry>();
        c->parent = this;
        cvcallvolconnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallvolconntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallvolconnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcallvolconntable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::Cvcallvolconnentry()
    :
    cvcallvolconnindex{YType::enumeration, "cvCallVolConnIndex"},
    cvcallvolconnactiveconnection{YType::uint32, "cvCallVolConnActiveConnection"}
{
    yang_name = "cvCallVolConnEntry"; yang_parent_name = "cvCallVolConnTable";
}

CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::~Cvcallvolconnentry()
{
}

bool CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::has_data() const
{
    return cvcallvolconnindex.is_set
	|| cvcallvolconnactiveconnection.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcallvolconnindex.operation)
	|| is_set(cvcallvolconnactiveconnection.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolConnEntry" <<"[cvCallVolConnIndex='" <<cvcallvolconnindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallVolConnTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallvolconnindex.is_set || is_set(cvcallvolconnindex.operation)) leaf_name_data.push_back(cvcallvolconnindex.get_name_leafdata());
    if (cvcallvolconnactiveconnection.is_set || is_set(cvcallvolconnactiveconnection.operation)) leaf_name_data.push_back(cvcallvolconnactiveconnection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallVolConnIndex")
    {
        cvcallvolconnindex = value;
    }
    if(value_path == "cvCallVolConnActiveConnection")
    {
        cvcallvolconnactiveconnection = value;
    }
}

CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvoliftable()
{
    yang_name = "cvCallVolIfTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallvoliftable::~Cvcallvoliftable()
{
}

bool CiscoVoiceDialControlMib::Cvcallvoliftable::has_data() const
{
    for (std::size_t index=0; index<cvcallvolifentry.size(); index++)
    {
        if(cvcallvolifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcallvoliftable::has_operation() const
{
    for (std::size_t index=0; index<cvcallvolifentry.size(); index++)
    {
        if(cvcallvolifentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcallvoliftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolIfTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallvoliftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallvoliftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallVolIfEntry")
    {
        for(auto const & c : cvcallvolifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry>();
        c->parent = this;
        cvcallvolifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallvoliftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallvolifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcallvoliftable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::Cvcallvolifentry()
    :
    ifindex{YType::str, "ifIndex"},
    cvcallvolmediaincomingcalls{YType::uint32, "cvCallVolMediaIncomingCalls"},
    cvcallvolmediaoutgoingcalls{YType::uint32, "cvCallVolMediaOutgoingCalls"}
{
    yang_name = "cvCallVolIfEntry"; yang_parent_name = "cvCallVolIfTable";
}

CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::~Cvcallvolifentry()
{
}

bool CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::has_data() const
{
    return ifindex.is_set
	|| cvcallvolmediaincomingcalls.is_set
	|| cvcallvolmediaoutgoingcalls.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cvcallvolmediaincomingcalls.operation)
	|| is_set(cvcallvolmediaoutgoingcalls.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolIfEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallVolIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvcallvolmediaincomingcalls.is_set || is_set(cvcallvolmediaincomingcalls.operation)) leaf_name_data.push_back(cvcallvolmediaincomingcalls.get_name_leafdata());
    if (cvcallvolmediaoutgoingcalls.is_set || is_set(cvcallvolmediaoutgoingcalls.operation)) leaf_name_data.push_back(cvcallvolmediaoutgoingcalls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cvCallVolMediaIncomingCalls")
    {
        cvcallvolmediaincomingcalls = value;
    }
    if(value_path == "cvCallVolMediaOutgoingCalls")
    {
        cvcallvolmediaoutgoingcalls = value;
    }
}

CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistorytable()
{
    yang_name = "cvCallHistoryTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallhistorytable::~Cvcallhistorytable()
{
}

bool CiscoVoiceDialControlMib::Cvcallhistorytable::has_data() const
{
    for (std::size_t index=0; index<cvcallhistoryentry.size(); index++)
    {
        if(cvcallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cvcallhistoryentry.size(); index++)
    {
        if(cvcallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallHistoryTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallHistoryEntry")
    {
        for(auto const & c : cvcallhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry>();
        c->parent = this;
        cvcallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcallhistorytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::Cvcallhistoryentry()
    :
    ccallhistoryindex{YType::str, "cCallHistoryIndex"},
    cvcallhistoryaccountcode{YType::str, "cvCallHistoryAccountCode"},
    cvcallhistoryacomlevel{YType::int32, "cvCallHistoryACOMLevel"},
    cvcallhistorycalleridblock{YType::boolean, "cvCallHistoryCallerIDBlock"},
    cvcallhistorycallid{YType::uint32, "cvCallHistoryCallId"},
    cvcallhistorycallingname{YType::str, "cvCallHistoryCallingName"},
    cvcallhistorycodertyperate{YType::enumeration, "cvCallHistoryCoderTypeRate"},
    cvcallhistoryconnectionid{YType::str, "cvCallHistoryConnectionId"},
    cvcallhistoryfaxtxduration{YType::uint32, "cvCallHistoryFaxTxDuration"},
    cvcallhistoryimgpagecount{YType::uint32, "cvCallHistoryImgPageCount"},
    cvcallhistorynoiselevel{YType::int32, "cvCallHistoryNoiseLevel"},
    cvcallhistorysessiontarget{YType::str, "cvCallHistorySessionTarget"},
    cvcallhistorytxduration{YType::uint32, "cvCallHistoryTxDuration"},
    cvcallhistoryvoicetxduration{YType::uint32, "cvCallHistoryVoiceTxDuration"}
{
    yang_name = "cvCallHistoryEntry"; yang_parent_name = "cvCallHistoryTable";
}

CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::~Cvcallhistoryentry()
{
}

bool CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| cvcallhistoryaccountcode.is_set
	|| cvcallhistoryacomlevel.is_set
	|| cvcallhistorycalleridblock.is_set
	|| cvcallhistorycallid.is_set
	|| cvcallhistorycallingname.is_set
	|| cvcallhistorycodertyperate.is_set
	|| cvcallhistoryconnectionid.is_set
	|| cvcallhistoryfaxtxduration.is_set
	|| cvcallhistoryimgpagecount.is_set
	|| cvcallhistorynoiselevel.is_set
	|| cvcallhistorysessiontarget.is_set
	|| cvcallhistorytxduration.is_set
	|| cvcallhistoryvoicetxduration.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ccallhistoryindex.operation)
	|| is_set(cvcallhistoryaccountcode.operation)
	|| is_set(cvcallhistoryacomlevel.operation)
	|| is_set(cvcallhistorycalleridblock.operation)
	|| is_set(cvcallhistorycallid.operation)
	|| is_set(cvcallhistorycallingname.operation)
	|| is_set(cvcallhistorycodertyperate.operation)
	|| is_set(cvcallhistoryconnectionid.operation)
	|| is_set(cvcallhistoryfaxtxduration.operation)
	|| is_set(cvcallhistoryimgpagecount.operation)
	|| is_set(cvcallhistorynoiselevel.operation)
	|| is_set(cvcallhistorysessiontarget.operation)
	|| is_set(cvcallhistorytxduration.operation)
	|| is_set(cvcallhistoryvoicetxduration.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.operation)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (cvcallhistoryaccountcode.is_set || is_set(cvcallhistoryaccountcode.operation)) leaf_name_data.push_back(cvcallhistoryaccountcode.get_name_leafdata());
    if (cvcallhistoryacomlevel.is_set || is_set(cvcallhistoryacomlevel.operation)) leaf_name_data.push_back(cvcallhistoryacomlevel.get_name_leafdata());
    if (cvcallhistorycalleridblock.is_set || is_set(cvcallhistorycalleridblock.operation)) leaf_name_data.push_back(cvcallhistorycalleridblock.get_name_leafdata());
    if (cvcallhistorycallid.is_set || is_set(cvcallhistorycallid.operation)) leaf_name_data.push_back(cvcallhistorycallid.get_name_leafdata());
    if (cvcallhistorycallingname.is_set || is_set(cvcallhistorycallingname.operation)) leaf_name_data.push_back(cvcallhistorycallingname.get_name_leafdata());
    if (cvcallhistorycodertyperate.is_set || is_set(cvcallhistorycodertyperate.operation)) leaf_name_data.push_back(cvcallhistorycodertyperate.get_name_leafdata());
    if (cvcallhistoryconnectionid.is_set || is_set(cvcallhistoryconnectionid.operation)) leaf_name_data.push_back(cvcallhistoryconnectionid.get_name_leafdata());
    if (cvcallhistoryfaxtxduration.is_set || is_set(cvcallhistoryfaxtxduration.operation)) leaf_name_data.push_back(cvcallhistoryfaxtxduration.get_name_leafdata());
    if (cvcallhistoryimgpagecount.is_set || is_set(cvcallhistoryimgpagecount.operation)) leaf_name_data.push_back(cvcallhistoryimgpagecount.get_name_leafdata());
    if (cvcallhistorynoiselevel.is_set || is_set(cvcallhistorynoiselevel.operation)) leaf_name_data.push_back(cvcallhistorynoiselevel.get_name_leafdata());
    if (cvcallhistorysessiontarget.is_set || is_set(cvcallhistorysessiontarget.operation)) leaf_name_data.push_back(cvcallhistorysessiontarget.get_name_leafdata());
    if (cvcallhistorytxduration.is_set || is_set(cvcallhistorytxduration.operation)) leaf_name_data.push_back(cvcallhistorytxduration.get_name_leafdata());
    if (cvcallhistoryvoicetxduration.is_set || is_set(cvcallhistoryvoicetxduration.operation)) leaf_name_data.push_back(cvcallhistoryvoicetxduration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
    }
    if(value_path == "cvCallHistoryAccountCode")
    {
        cvcallhistoryaccountcode = value;
    }
    if(value_path == "cvCallHistoryACOMLevel")
    {
        cvcallhistoryacomlevel = value;
    }
    if(value_path == "cvCallHistoryCallerIDBlock")
    {
        cvcallhistorycalleridblock = value;
    }
    if(value_path == "cvCallHistoryCallId")
    {
        cvcallhistorycallid = value;
    }
    if(value_path == "cvCallHistoryCallingName")
    {
        cvcallhistorycallingname = value;
    }
    if(value_path == "cvCallHistoryCoderTypeRate")
    {
        cvcallhistorycodertyperate = value;
    }
    if(value_path == "cvCallHistoryConnectionId")
    {
        cvcallhistoryconnectionid = value;
    }
    if(value_path == "cvCallHistoryFaxTxDuration")
    {
        cvcallhistoryfaxtxduration = value;
    }
    if(value_path == "cvCallHistoryImgPageCount")
    {
        cvcallhistoryimgpagecount = value;
    }
    if(value_path == "cvCallHistoryNoiseLevel")
    {
        cvcallhistorynoiselevel = value;
    }
    if(value_path == "cvCallHistorySessionTarget")
    {
        cvcallhistorysessiontarget = value;
    }
    if(value_path == "cvCallHistoryTxDuration")
    {
        cvcallhistorytxduration = value;
    }
    if(value_path == "cvCallHistoryVoiceTxDuration")
    {
        cvcallhistoryvoicetxduration = value;
    }
}

CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistorytable()
{
    yang_name = "cvVoIPCallHistoryTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvvoipcallhistorytable::~Cvvoipcallhistorytable()
{
}

bool CiscoVoiceDialControlMib::Cvvoipcallhistorytable::has_data() const
{
    for (std::size_t index=0; index<cvvoipcallhistoryentry.size(); index++)
    {
        if(cvvoipcallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvvoipcallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cvvoipcallhistoryentry.size(); index++)
    {
        if(cvvoipcallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvvoipcallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallHistoryTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoipcallhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoipcallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvVoIPCallHistoryEntry")
    {
        for(auto const & c : cvvoipcallhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry>();
        c->parent = this;
        cvvoipcallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoipcallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoipcallhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvvoipcallhistorytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::Cvvoipcallhistoryentry()
    :
    ccallhistoryindex{YType::str, "cCallHistoryIndex"},
    cvvoipcallhistorybitrates{YType::bits, "cvVoIPCallHistoryBitRates"},
    cvvoipcallhistorycallid{YType::uint32, "cvVoIPCallHistoryCallId"},
    cvvoipcallhistorycallreferenceid{YType::uint32, "cvVoIPCallHistoryCallReferenceId"},
    cvvoipcallhistorychannels{YType::int32, "cvVoIPCallHistoryChannels"},
    cvvoipcallhistorycodermode{YType::enumeration, "cvVoIPCallHistoryCoderMode"},
    cvvoipcallhistorycodertyperate{YType::enumeration, "cvVoIPCallHistoryCoderTypeRate"},
    cvvoipcallhistoryconnectionid{YType::str, "cvVoIPCallHistoryConnectionId"},
    cvvoipcallhistorycrc{YType::boolean, "cvVoIPCallHistoryCRC"},
    cvvoipcallhistoryearlypackets{YType::uint32, "cvVoIPCallHistoryEarlyPackets"},
    cvvoipcallhistoryencap{YType::enumeration, "cvVoIPCallHistoryEncap"},
    cvvoipcallhistoryfallbackdelay{YType::uint32, "cvVoIPCallHistoryFallbackDelay"},
    cvvoipcallhistoryfallbackicpif{YType::int32, "cvVoIPCallHistoryFallbackIcpif"},
    cvvoipcallhistoryfallbackloss{YType::uint32, "cvVoIPCallHistoryFallbackLoss"},
    cvvoipcallhistorygapfillwithinterpolation{YType::uint32, "cvVoIPCallHistoryGapFillWithInterpolation"},
    cvvoipcallhistorygapfillwithprediction{YType::uint32, "cvVoIPCallHistoryGapFillWithPrediction"},
    cvvoipcallhistorygapfillwithredundancy{YType::uint32, "cvVoIPCallHistoryGapFillWithRedundancy"},
    cvvoipcallhistorygapfillwithsilence{YType::uint32, "cvVoIPCallHistoryGapFillWithSilence"},
    cvvoipcallhistoryhiwaterplayoutdelay{YType::uint32, "cvVoIPCallHistoryHiWaterPlayoutDelay"},
    cvvoipcallhistoryicpif{YType::int32, "cvVoIPCallHistoryIcpif"},
    cvvoipcallhistoryinterleaving{YType::int32, "cvVoIPCallHistoryInterleaving"},
    cvvoipcallhistorylatepackets{YType::uint32, "cvVoIPCallHistoryLatePackets"},
    cvvoipcallhistorylostpackets{YType::uint32, "cvVoIPCallHistoryLostPackets"},
    cvvoipcallhistorylowaterplayoutdelay{YType::uint32, "cvVoIPCallHistoryLoWaterPlayoutDelay"},
    cvvoipcallhistorymaxptime{YType::int32, "cvVoIPCallHistoryMaxPtime"},
    cvvoipcallhistorymodechgneighbor{YType::boolean, "cvVoIPCallHistoryModeChgNeighbor"},
    cvvoipcallhistorymodechgperiod{YType::int32, "cvVoIPCallHistoryModeChgPeriod"},
    cvvoipcallhistoryoctetaligned{YType::boolean, "cvVoIPCallHistoryOctetAligned"},
    cvvoipcallhistoryontimervplayout{YType::uint32, "cvVoIPCallHistoryOnTimeRvPlayout"},
    cvvoipcallhistoryprotocolcallid{YType::str, "cvVoIPCallHistoryProtocolCallId"},
    cvvoipcallhistoryptime{YType::int32, "cvVoIPCallHistoryPtime"},
    cvvoipcallhistoryreceivedelay{YType::uint32, "cvVoIPCallHistoryReceiveDelay"},
    cvvoipcallhistoryremmediaipaddr{YType::str, "cvVoIPCallHistoryRemMediaIPAddr"},
    cvvoipcallhistoryremmediaipaddrt{YType::enumeration, "cvVoIPCallHistoryRemMediaIPAddrT"},
    cvvoipcallhistoryremmediaport{YType::int32, "cvVoIPCallHistoryRemMediaPort"},
    cvvoipcallhistoryremoteipaddress{YType::str, "cvVoIPCallHistoryRemoteIPAddress"},
    cvvoipcallhistoryremoteudpport{YType::int32, "cvVoIPCallHistoryRemoteUDPPort"},
    cvvoipcallhistoryremsigipaddr{YType::str, "cvVoIPCallHistoryRemSigIPAddr"},
    cvvoipcallhistoryremsigipaddrt{YType::enumeration, "cvVoIPCallHistoryRemSigIPAddrT"},
    cvvoipcallhistoryremsigport{YType::int32, "cvVoIPCallHistoryRemSigPort"},
    cvvoipcallhistoryrobustsorting{YType::boolean, "cvVoIPCallHistoryRobustSorting"},
    cvvoipcallhistoryroundtripdelay{YType::uint32, "cvVoIPCallHistoryRoundTripDelay"},
    cvvoipcallhistoryselectedqos{YType::enumeration, "cvVoIPCallHistorySelectedQoS"},
    cvvoipcallhistorysessionid{YType::uint32, "cvVoIPCallHistorySessionId"},
    cvvoipcallhistorysessionprotocol{YType::enumeration, "cvVoIPCallHistorySessionProtocol"},
    cvvoipcallhistorysessiontarget{YType::str, "cvVoIPCallHistorySessionTarget"},
    cvvoipcallhistorysrtpenable{YType::boolean, "cvVoIPCallHistorySRTPEnable"},
    cvvoipcallhistoryusername{YType::str, "cvVoIPCallHistoryUsername"},
    cvvoipcallhistoryvadenable{YType::boolean, "cvVoIPCallHistoryVADEnable"}
{
    yang_name = "cvVoIPCallHistoryEntry"; yang_parent_name = "cvVoIPCallHistoryTable";
}

CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::~Cvvoipcallhistoryentry()
{
}

bool CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| cvvoipcallhistorybitrates.is_set
	|| cvvoipcallhistorycallid.is_set
	|| cvvoipcallhistorycallreferenceid.is_set
	|| cvvoipcallhistorychannels.is_set
	|| cvvoipcallhistorycodermode.is_set
	|| cvvoipcallhistorycodertyperate.is_set
	|| cvvoipcallhistoryconnectionid.is_set
	|| cvvoipcallhistorycrc.is_set
	|| cvvoipcallhistoryearlypackets.is_set
	|| cvvoipcallhistoryencap.is_set
	|| cvvoipcallhistoryfallbackdelay.is_set
	|| cvvoipcallhistoryfallbackicpif.is_set
	|| cvvoipcallhistoryfallbackloss.is_set
	|| cvvoipcallhistorygapfillwithinterpolation.is_set
	|| cvvoipcallhistorygapfillwithprediction.is_set
	|| cvvoipcallhistorygapfillwithredundancy.is_set
	|| cvvoipcallhistorygapfillwithsilence.is_set
	|| cvvoipcallhistoryhiwaterplayoutdelay.is_set
	|| cvvoipcallhistoryicpif.is_set
	|| cvvoipcallhistoryinterleaving.is_set
	|| cvvoipcallhistorylatepackets.is_set
	|| cvvoipcallhistorylostpackets.is_set
	|| cvvoipcallhistorylowaterplayoutdelay.is_set
	|| cvvoipcallhistorymaxptime.is_set
	|| cvvoipcallhistorymodechgneighbor.is_set
	|| cvvoipcallhistorymodechgperiod.is_set
	|| cvvoipcallhistoryoctetaligned.is_set
	|| cvvoipcallhistoryontimervplayout.is_set
	|| cvvoipcallhistoryprotocolcallid.is_set
	|| cvvoipcallhistoryptime.is_set
	|| cvvoipcallhistoryreceivedelay.is_set
	|| cvvoipcallhistoryremmediaipaddr.is_set
	|| cvvoipcallhistoryremmediaipaddrt.is_set
	|| cvvoipcallhistoryremmediaport.is_set
	|| cvvoipcallhistoryremoteipaddress.is_set
	|| cvvoipcallhistoryremoteudpport.is_set
	|| cvvoipcallhistoryremsigipaddr.is_set
	|| cvvoipcallhistoryremsigipaddrt.is_set
	|| cvvoipcallhistoryremsigport.is_set
	|| cvvoipcallhistoryrobustsorting.is_set
	|| cvvoipcallhistoryroundtripdelay.is_set
	|| cvvoipcallhistoryselectedqos.is_set
	|| cvvoipcallhistorysessionid.is_set
	|| cvvoipcallhistorysessionprotocol.is_set
	|| cvvoipcallhistorysessiontarget.is_set
	|| cvvoipcallhistorysrtpenable.is_set
	|| cvvoipcallhistoryusername.is_set
	|| cvvoipcallhistoryvadenable.is_set;
}

bool CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ccallhistoryindex.operation)
	|| is_set(cvvoipcallhistorybitrates.operation)
	|| is_set(cvvoipcallhistorycallid.operation)
	|| is_set(cvvoipcallhistorycallreferenceid.operation)
	|| is_set(cvvoipcallhistorychannels.operation)
	|| is_set(cvvoipcallhistorycodermode.operation)
	|| is_set(cvvoipcallhistorycodertyperate.operation)
	|| is_set(cvvoipcallhistoryconnectionid.operation)
	|| is_set(cvvoipcallhistorycrc.operation)
	|| is_set(cvvoipcallhistoryearlypackets.operation)
	|| is_set(cvvoipcallhistoryencap.operation)
	|| is_set(cvvoipcallhistoryfallbackdelay.operation)
	|| is_set(cvvoipcallhistoryfallbackicpif.operation)
	|| is_set(cvvoipcallhistoryfallbackloss.operation)
	|| is_set(cvvoipcallhistorygapfillwithinterpolation.operation)
	|| is_set(cvvoipcallhistorygapfillwithprediction.operation)
	|| is_set(cvvoipcallhistorygapfillwithredundancy.operation)
	|| is_set(cvvoipcallhistorygapfillwithsilence.operation)
	|| is_set(cvvoipcallhistoryhiwaterplayoutdelay.operation)
	|| is_set(cvvoipcallhistoryicpif.operation)
	|| is_set(cvvoipcallhistoryinterleaving.operation)
	|| is_set(cvvoipcallhistorylatepackets.operation)
	|| is_set(cvvoipcallhistorylostpackets.operation)
	|| is_set(cvvoipcallhistorylowaterplayoutdelay.operation)
	|| is_set(cvvoipcallhistorymaxptime.operation)
	|| is_set(cvvoipcallhistorymodechgneighbor.operation)
	|| is_set(cvvoipcallhistorymodechgperiod.operation)
	|| is_set(cvvoipcallhistoryoctetaligned.operation)
	|| is_set(cvvoipcallhistoryontimervplayout.operation)
	|| is_set(cvvoipcallhistoryprotocolcallid.operation)
	|| is_set(cvvoipcallhistoryptime.operation)
	|| is_set(cvvoipcallhistoryreceivedelay.operation)
	|| is_set(cvvoipcallhistoryremmediaipaddr.operation)
	|| is_set(cvvoipcallhistoryremmediaipaddrt.operation)
	|| is_set(cvvoipcallhistoryremmediaport.operation)
	|| is_set(cvvoipcallhistoryremoteipaddress.operation)
	|| is_set(cvvoipcallhistoryremoteudpport.operation)
	|| is_set(cvvoipcallhistoryremsigipaddr.operation)
	|| is_set(cvvoipcallhistoryremsigipaddrt.operation)
	|| is_set(cvvoipcallhistoryremsigport.operation)
	|| is_set(cvvoipcallhistoryrobustsorting.operation)
	|| is_set(cvvoipcallhistoryroundtripdelay.operation)
	|| is_set(cvvoipcallhistoryselectedqos.operation)
	|| is_set(cvvoipcallhistorysessionid.operation)
	|| is_set(cvvoipcallhistorysessionprotocol.operation)
	|| is_set(cvvoipcallhistorysessiontarget.operation)
	|| is_set(cvvoipcallhistorysrtpenable.operation)
	|| is_set(cvvoipcallhistoryusername.operation)
	|| is_set(cvvoipcallhistoryvadenable.operation);
}

std::string CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoIPCallHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.operation)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (cvvoipcallhistorybitrates.is_set || is_set(cvvoipcallhistorybitrates.operation)) leaf_name_data.push_back(cvvoipcallhistorybitrates.get_name_leafdata());
    if (cvvoipcallhistorycallid.is_set || is_set(cvvoipcallhistorycallid.operation)) leaf_name_data.push_back(cvvoipcallhistorycallid.get_name_leafdata());
    if (cvvoipcallhistorycallreferenceid.is_set || is_set(cvvoipcallhistorycallreferenceid.operation)) leaf_name_data.push_back(cvvoipcallhistorycallreferenceid.get_name_leafdata());
    if (cvvoipcallhistorychannels.is_set || is_set(cvvoipcallhistorychannels.operation)) leaf_name_data.push_back(cvvoipcallhistorychannels.get_name_leafdata());
    if (cvvoipcallhistorycodermode.is_set || is_set(cvvoipcallhistorycodermode.operation)) leaf_name_data.push_back(cvvoipcallhistorycodermode.get_name_leafdata());
    if (cvvoipcallhistorycodertyperate.is_set || is_set(cvvoipcallhistorycodertyperate.operation)) leaf_name_data.push_back(cvvoipcallhistorycodertyperate.get_name_leafdata());
    if (cvvoipcallhistoryconnectionid.is_set || is_set(cvvoipcallhistoryconnectionid.operation)) leaf_name_data.push_back(cvvoipcallhistoryconnectionid.get_name_leafdata());
    if (cvvoipcallhistorycrc.is_set || is_set(cvvoipcallhistorycrc.operation)) leaf_name_data.push_back(cvvoipcallhistorycrc.get_name_leafdata());
    if (cvvoipcallhistoryearlypackets.is_set || is_set(cvvoipcallhistoryearlypackets.operation)) leaf_name_data.push_back(cvvoipcallhistoryearlypackets.get_name_leafdata());
    if (cvvoipcallhistoryencap.is_set || is_set(cvvoipcallhistoryencap.operation)) leaf_name_data.push_back(cvvoipcallhistoryencap.get_name_leafdata());
    if (cvvoipcallhistoryfallbackdelay.is_set || is_set(cvvoipcallhistoryfallbackdelay.operation)) leaf_name_data.push_back(cvvoipcallhistoryfallbackdelay.get_name_leafdata());
    if (cvvoipcallhistoryfallbackicpif.is_set || is_set(cvvoipcallhistoryfallbackicpif.operation)) leaf_name_data.push_back(cvvoipcallhistoryfallbackicpif.get_name_leafdata());
    if (cvvoipcallhistoryfallbackloss.is_set || is_set(cvvoipcallhistoryfallbackloss.operation)) leaf_name_data.push_back(cvvoipcallhistoryfallbackloss.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithinterpolation.is_set || is_set(cvvoipcallhistorygapfillwithinterpolation.operation)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithinterpolation.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithprediction.is_set || is_set(cvvoipcallhistorygapfillwithprediction.operation)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithprediction.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithredundancy.is_set || is_set(cvvoipcallhistorygapfillwithredundancy.operation)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithredundancy.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithsilence.is_set || is_set(cvvoipcallhistorygapfillwithsilence.operation)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithsilence.get_name_leafdata());
    if (cvvoipcallhistoryhiwaterplayoutdelay.is_set || is_set(cvvoipcallhistoryhiwaterplayoutdelay.operation)) leaf_name_data.push_back(cvvoipcallhistoryhiwaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallhistoryicpif.is_set || is_set(cvvoipcallhistoryicpif.operation)) leaf_name_data.push_back(cvvoipcallhistoryicpif.get_name_leafdata());
    if (cvvoipcallhistoryinterleaving.is_set || is_set(cvvoipcallhistoryinterleaving.operation)) leaf_name_data.push_back(cvvoipcallhistoryinterleaving.get_name_leafdata());
    if (cvvoipcallhistorylatepackets.is_set || is_set(cvvoipcallhistorylatepackets.operation)) leaf_name_data.push_back(cvvoipcallhistorylatepackets.get_name_leafdata());
    if (cvvoipcallhistorylostpackets.is_set || is_set(cvvoipcallhistorylostpackets.operation)) leaf_name_data.push_back(cvvoipcallhistorylostpackets.get_name_leafdata());
    if (cvvoipcallhistorylowaterplayoutdelay.is_set || is_set(cvvoipcallhistorylowaterplayoutdelay.operation)) leaf_name_data.push_back(cvvoipcallhistorylowaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallhistorymaxptime.is_set || is_set(cvvoipcallhistorymaxptime.operation)) leaf_name_data.push_back(cvvoipcallhistorymaxptime.get_name_leafdata());
    if (cvvoipcallhistorymodechgneighbor.is_set || is_set(cvvoipcallhistorymodechgneighbor.operation)) leaf_name_data.push_back(cvvoipcallhistorymodechgneighbor.get_name_leafdata());
    if (cvvoipcallhistorymodechgperiod.is_set || is_set(cvvoipcallhistorymodechgperiod.operation)) leaf_name_data.push_back(cvvoipcallhistorymodechgperiod.get_name_leafdata());
    if (cvvoipcallhistoryoctetaligned.is_set || is_set(cvvoipcallhistoryoctetaligned.operation)) leaf_name_data.push_back(cvvoipcallhistoryoctetaligned.get_name_leafdata());
    if (cvvoipcallhistoryontimervplayout.is_set || is_set(cvvoipcallhistoryontimervplayout.operation)) leaf_name_data.push_back(cvvoipcallhistoryontimervplayout.get_name_leafdata());
    if (cvvoipcallhistoryprotocolcallid.is_set || is_set(cvvoipcallhistoryprotocolcallid.operation)) leaf_name_data.push_back(cvvoipcallhistoryprotocolcallid.get_name_leafdata());
    if (cvvoipcallhistoryptime.is_set || is_set(cvvoipcallhistoryptime.operation)) leaf_name_data.push_back(cvvoipcallhistoryptime.get_name_leafdata());
    if (cvvoipcallhistoryreceivedelay.is_set || is_set(cvvoipcallhistoryreceivedelay.operation)) leaf_name_data.push_back(cvvoipcallhistoryreceivedelay.get_name_leafdata());
    if (cvvoipcallhistoryremmediaipaddr.is_set || is_set(cvvoipcallhistoryremmediaipaddr.operation)) leaf_name_data.push_back(cvvoipcallhistoryremmediaipaddr.get_name_leafdata());
    if (cvvoipcallhistoryremmediaipaddrt.is_set || is_set(cvvoipcallhistoryremmediaipaddrt.operation)) leaf_name_data.push_back(cvvoipcallhistoryremmediaipaddrt.get_name_leafdata());
    if (cvvoipcallhistoryremmediaport.is_set || is_set(cvvoipcallhistoryremmediaport.operation)) leaf_name_data.push_back(cvvoipcallhistoryremmediaport.get_name_leafdata());
    if (cvvoipcallhistoryremoteipaddress.is_set || is_set(cvvoipcallhistoryremoteipaddress.operation)) leaf_name_data.push_back(cvvoipcallhistoryremoteipaddress.get_name_leafdata());
    if (cvvoipcallhistoryremoteudpport.is_set || is_set(cvvoipcallhistoryremoteudpport.operation)) leaf_name_data.push_back(cvvoipcallhistoryremoteudpport.get_name_leafdata());
    if (cvvoipcallhistoryremsigipaddr.is_set || is_set(cvvoipcallhistoryremsigipaddr.operation)) leaf_name_data.push_back(cvvoipcallhistoryremsigipaddr.get_name_leafdata());
    if (cvvoipcallhistoryremsigipaddrt.is_set || is_set(cvvoipcallhistoryremsigipaddrt.operation)) leaf_name_data.push_back(cvvoipcallhistoryremsigipaddrt.get_name_leafdata());
    if (cvvoipcallhistoryremsigport.is_set || is_set(cvvoipcallhistoryremsigport.operation)) leaf_name_data.push_back(cvvoipcallhistoryremsigport.get_name_leafdata());
    if (cvvoipcallhistoryrobustsorting.is_set || is_set(cvvoipcallhistoryrobustsorting.operation)) leaf_name_data.push_back(cvvoipcallhistoryrobustsorting.get_name_leafdata());
    if (cvvoipcallhistoryroundtripdelay.is_set || is_set(cvvoipcallhistoryroundtripdelay.operation)) leaf_name_data.push_back(cvvoipcallhistoryroundtripdelay.get_name_leafdata());
    if (cvvoipcallhistoryselectedqos.is_set || is_set(cvvoipcallhistoryselectedqos.operation)) leaf_name_data.push_back(cvvoipcallhistoryselectedqos.get_name_leafdata());
    if (cvvoipcallhistorysessionid.is_set || is_set(cvvoipcallhistorysessionid.operation)) leaf_name_data.push_back(cvvoipcallhistorysessionid.get_name_leafdata());
    if (cvvoipcallhistorysessionprotocol.is_set || is_set(cvvoipcallhistorysessionprotocol.operation)) leaf_name_data.push_back(cvvoipcallhistorysessionprotocol.get_name_leafdata());
    if (cvvoipcallhistorysessiontarget.is_set || is_set(cvvoipcallhistorysessiontarget.operation)) leaf_name_data.push_back(cvvoipcallhistorysessiontarget.get_name_leafdata());
    if (cvvoipcallhistorysrtpenable.is_set || is_set(cvvoipcallhistorysrtpenable.operation)) leaf_name_data.push_back(cvvoipcallhistorysrtpenable.get_name_leafdata());
    if (cvvoipcallhistoryusername.is_set || is_set(cvvoipcallhistoryusername.operation)) leaf_name_data.push_back(cvvoipcallhistoryusername.get_name_leafdata());
    if (cvvoipcallhistoryvadenable.is_set || is_set(cvvoipcallhistoryvadenable.operation)) leaf_name_data.push_back(cvvoipcallhistoryvadenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
    }
    if(value_path == "cvVoIPCallHistoryBitRates")
    {
        cvvoipcallhistorybitrates[value] = true;
    }
    if(value_path == "cvVoIPCallHistoryCallId")
    {
        cvvoipcallhistorycallid = value;
    }
    if(value_path == "cvVoIPCallHistoryCallReferenceId")
    {
        cvvoipcallhistorycallreferenceid = value;
    }
    if(value_path == "cvVoIPCallHistoryChannels")
    {
        cvvoipcallhistorychannels = value;
    }
    if(value_path == "cvVoIPCallHistoryCoderMode")
    {
        cvvoipcallhistorycodermode = value;
    }
    if(value_path == "cvVoIPCallHistoryCoderTypeRate")
    {
        cvvoipcallhistorycodertyperate = value;
    }
    if(value_path == "cvVoIPCallHistoryConnectionId")
    {
        cvvoipcallhistoryconnectionid = value;
    }
    if(value_path == "cvVoIPCallHistoryCRC")
    {
        cvvoipcallhistorycrc = value;
    }
    if(value_path == "cvVoIPCallHistoryEarlyPackets")
    {
        cvvoipcallhistoryearlypackets = value;
    }
    if(value_path == "cvVoIPCallHistoryEncap")
    {
        cvvoipcallhistoryencap = value;
    }
    if(value_path == "cvVoIPCallHistoryFallbackDelay")
    {
        cvvoipcallhistoryfallbackdelay = value;
    }
    if(value_path == "cvVoIPCallHistoryFallbackIcpif")
    {
        cvvoipcallhistoryfallbackicpif = value;
    }
    if(value_path == "cvVoIPCallHistoryFallbackLoss")
    {
        cvvoipcallhistoryfallbackloss = value;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithInterpolation")
    {
        cvvoipcallhistorygapfillwithinterpolation = value;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithPrediction")
    {
        cvvoipcallhistorygapfillwithprediction = value;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithRedundancy")
    {
        cvvoipcallhistorygapfillwithredundancy = value;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithSilence")
    {
        cvvoipcallhistorygapfillwithsilence = value;
    }
    if(value_path == "cvVoIPCallHistoryHiWaterPlayoutDelay")
    {
        cvvoipcallhistoryhiwaterplayoutdelay = value;
    }
    if(value_path == "cvVoIPCallHistoryIcpif")
    {
        cvvoipcallhistoryicpif = value;
    }
    if(value_path == "cvVoIPCallHistoryInterleaving")
    {
        cvvoipcallhistoryinterleaving = value;
    }
    if(value_path == "cvVoIPCallHistoryLatePackets")
    {
        cvvoipcallhistorylatepackets = value;
    }
    if(value_path == "cvVoIPCallHistoryLostPackets")
    {
        cvvoipcallhistorylostpackets = value;
    }
    if(value_path == "cvVoIPCallHistoryLoWaterPlayoutDelay")
    {
        cvvoipcallhistorylowaterplayoutdelay = value;
    }
    if(value_path == "cvVoIPCallHistoryMaxPtime")
    {
        cvvoipcallhistorymaxptime = value;
    }
    if(value_path == "cvVoIPCallHistoryModeChgNeighbor")
    {
        cvvoipcallhistorymodechgneighbor = value;
    }
    if(value_path == "cvVoIPCallHistoryModeChgPeriod")
    {
        cvvoipcallhistorymodechgperiod = value;
    }
    if(value_path == "cvVoIPCallHistoryOctetAligned")
    {
        cvvoipcallhistoryoctetaligned = value;
    }
    if(value_path == "cvVoIPCallHistoryOnTimeRvPlayout")
    {
        cvvoipcallhistoryontimervplayout = value;
    }
    if(value_path == "cvVoIPCallHistoryProtocolCallId")
    {
        cvvoipcallhistoryprotocolcallid = value;
    }
    if(value_path == "cvVoIPCallHistoryPtime")
    {
        cvvoipcallhistoryptime = value;
    }
    if(value_path == "cvVoIPCallHistoryReceiveDelay")
    {
        cvvoipcallhistoryreceivedelay = value;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaIPAddr")
    {
        cvvoipcallhistoryremmediaipaddr = value;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaIPAddrT")
    {
        cvvoipcallhistoryremmediaipaddrt = value;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaPort")
    {
        cvvoipcallhistoryremmediaport = value;
    }
    if(value_path == "cvVoIPCallHistoryRemoteIPAddress")
    {
        cvvoipcallhistoryremoteipaddress = value;
    }
    if(value_path == "cvVoIPCallHistoryRemoteUDPPort")
    {
        cvvoipcallhistoryremoteudpport = value;
    }
    if(value_path == "cvVoIPCallHistoryRemSigIPAddr")
    {
        cvvoipcallhistoryremsigipaddr = value;
    }
    if(value_path == "cvVoIPCallHistoryRemSigIPAddrT")
    {
        cvvoipcallhistoryremsigipaddrt = value;
    }
    if(value_path == "cvVoIPCallHistoryRemSigPort")
    {
        cvvoipcallhistoryremsigport = value;
    }
    if(value_path == "cvVoIPCallHistoryRobustSorting")
    {
        cvvoipcallhistoryrobustsorting = value;
    }
    if(value_path == "cvVoIPCallHistoryRoundTripDelay")
    {
        cvvoipcallhistoryroundtripdelay = value;
    }
    if(value_path == "cvVoIPCallHistorySelectedQoS")
    {
        cvvoipcallhistoryselectedqos = value;
    }
    if(value_path == "cvVoIPCallHistorySessionId")
    {
        cvvoipcallhistorysessionid = value;
    }
    if(value_path == "cvVoIPCallHistorySessionProtocol")
    {
        cvvoipcallhistorysessionprotocol = value;
    }
    if(value_path == "cvVoIPCallHistorySessionTarget")
    {
        cvvoipcallhistorysessiontarget = value;
    }
    if(value_path == "cvVoIPCallHistorySRTPEnable")
    {
        cvvoipcallhistorysrtpenable = value;
    }
    if(value_path == "cvVoIPCallHistoryUsername")
    {
        cvvoipcallhistoryusername = value;
    }
    if(value_path == "cvVoIPCallHistoryVADEnable")
    {
        cvvoipcallhistoryvadenable = value;
    }
}

CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatstable()
{
    yang_name = "cvCallRateStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallratestatstable::~Cvcallratestatstable()
{
}

bool CiscoVoiceDialControlMib::Cvcallratestatstable::has_data() const
{
    for (std::size_t index=0; index<cvcallratestatsentry.size(); index++)
    {
        if(cvcallratestatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcallratestatstable::has_operation() const
{
    for (std::size_t index=0; index<cvcallratestatsentry.size(); index++)
    {
        if(cvcallratestatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcallratestatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallratestatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallratestatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallRateStatsEntry")
    {
        for(auto const & c : cvcallratestatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry>();
        c->parent = this;
        cvcallratestatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallratestatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallratestatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcallratestatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::Cvcallratestatsentry()
    :
    cvcallratestatsintvldurunits{YType::enumeration, "cvCallRateStatsIntvlDurUnits"},
    cvcallratestatsintvldur{YType::uint32, "cvCallRateStatsIntvlDur"},
    cvcallratestatsavgval{YType::uint32, "cvCallRateStatsAvgVal"},
    cvcallratestatsmaxval{YType::uint32, "cvCallRateStatsMaxVal"}
{
    yang_name = "cvCallRateStatsEntry"; yang_parent_name = "cvCallRateStatsTable";
}

CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::~Cvcallratestatsentry()
{
}

bool CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::has_data() const
{
    return cvcallratestatsintvldurunits.is_set
	|| cvcallratestatsintvldur.is_set
	|| cvcallratestatsavgval.is_set
	|| cvcallratestatsmaxval.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcallratestatsintvldurunits.operation)
	|| is_set(cvcallratestatsintvldur.operation)
	|| is_set(cvcallratestatsavgval.operation)
	|| is_set(cvcallratestatsmaxval.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateStatsEntry" <<"[cvCallRateStatsIntvlDurUnits='" <<cvcallratestatsintvldurunits <<"']" <<"[cvCallRateStatsIntvlDur='" <<cvcallratestatsintvldur <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallRateStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallratestatsintvldurunits.is_set || is_set(cvcallratestatsintvldurunits.operation)) leaf_name_data.push_back(cvcallratestatsintvldurunits.get_name_leafdata());
    if (cvcallratestatsintvldur.is_set || is_set(cvcallratestatsintvldur.operation)) leaf_name_data.push_back(cvcallratestatsintvldur.get_name_leafdata());
    if (cvcallratestatsavgval.is_set || is_set(cvcallratestatsavgval.operation)) leaf_name_data.push_back(cvcallratestatsavgval.get_name_leafdata());
    if (cvcallratestatsmaxval.is_set || is_set(cvcallratestatsmaxval.operation)) leaf_name_data.push_back(cvcallratestatsmaxval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallRateStatsIntvlDurUnits")
    {
        cvcallratestatsintvldurunits = value;
    }
    if(value_path == "cvCallRateStatsIntvlDur")
    {
        cvcallratestatsintvldur = value;
    }
    if(value_path == "cvCallRateStatsAvgVal")
    {
        cvcallratestatsavgval = value;
    }
    if(value_path == "cvCallRateStatsMaxVal")
    {
        cvcallratestatsmaxval = value;
    }
}

CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatstable()
{
    yang_name = "cvCallLegRateStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcalllegratestatstable::~Cvcalllegratestatstable()
{
}

bool CiscoVoiceDialControlMib::Cvcalllegratestatstable::has_data() const
{
    for (std::size_t index=0; index<cvcalllegratestatsentry.size(); index++)
    {
        if(cvcalllegratestatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcalllegratestatstable::has_operation() const
{
    for (std::size_t index=0; index<cvcalllegratestatsentry.size(); index++)
    {
        if(cvcalllegratestatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcalllegratestatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcalllegratestatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcalllegratestatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallLegRateStatsEntry")
    {
        for(auto const & c : cvcalllegratestatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry>();
        c->parent = this;
        cvcalllegratestatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcalllegratestatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcalllegratestatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcalllegratestatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::Cvcalllegratestatsentry()
    :
    cvcalllegratestatsintvldurunits{YType::enumeration, "cvCallLegRateStatsIntvlDurUnits"},
    cvcalllegratestatsintvldur{YType::uint32, "cvCallLegRateStatsIntvlDur"},
    cvcalllegratestatsavgval{YType::uint32, "cvCallLegRateStatsAvgVal"},
    cvcalllegratestatsmaxval{YType::uint32, "cvCallLegRateStatsMaxVal"}
{
    yang_name = "cvCallLegRateStatsEntry"; yang_parent_name = "cvCallLegRateStatsTable";
}

CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::~Cvcalllegratestatsentry()
{
}

bool CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::has_data() const
{
    return cvcalllegratestatsintvldurunits.is_set
	|| cvcalllegratestatsintvldur.is_set
	|| cvcalllegratestatsavgval.is_set
	|| cvcalllegratestatsmaxval.is_set;
}

bool CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcalllegratestatsintvldurunits.operation)
	|| is_set(cvcalllegratestatsintvldur.operation)
	|| is_set(cvcalllegratestatsavgval.operation)
	|| is_set(cvcalllegratestatsmaxval.operation);
}

std::string CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateStatsEntry" <<"[cvCallLegRateStatsIntvlDurUnits='" <<cvcalllegratestatsintvldurunits <<"']" <<"[cvCallLegRateStatsIntvlDur='" <<cvcalllegratestatsintvldur <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallLegRateStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalllegratestatsintvldurunits.is_set || is_set(cvcalllegratestatsintvldurunits.operation)) leaf_name_data.push_back(cvcalllegratestatsintvldurunits.get_name_leafdata());
    if (cvcalllegratestatsintvldur.is_set || is_set(cvcalllegratestatsintvldur.operation)) leaf_name_data.push_back(cvcalllegratestatsintvldur.get_name_leafdata());
    if (cvcalllegratestatsavgval.is_set || is_set(cvcalllegratestatsavgval.operation)) leaf_name_data.push_back(cvcalllegratestatsavgval.get_name_leafdata());
    if (cvcalllegratestatsmaxval.is_set || is_set(cvcalllegratestatsmaxval.operation)) leaf_name_data.push_back(cvcalllegratestatsmaxval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallLegRateStatsIntvlDurUnits")
    {
        cvcalllegratestatsintvldurunits = value;
    }
    if(value_path == "cvCallLegRateStatsIntvlDur")
    {
        cvcalllegratestatsintvldur = value;
    }
    if(value_path == "cvCallLegRateStatsAvgVal")
    {
        cvcalllegratestatsavgval = value;
    }
    if(value_path == "cvCallLegRateStatsMaxVal")
    {
        cvcalllegratestatsmaxval = value;
    }
}

CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatstable()
{
    yang_name = "cvActiveCallStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvactivecallstatstable::~Cvactivecallstatstable()
{
}

bool CiscoVoiceDialControlMib::Cvactivecallstatstable::has_data() const
{
    for (std::size_t index=0; index<cvactivecallstatsentry.size(); index++)
    {
        if(cvactivecallstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvactivecallstatstable::has_operation() const
{
    for (std::size_t index=0; index<cvactivecallstatsentry.size(); index++)
    {
        if(cvactivecallstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvactivecallstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvactivecallstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvactivecallstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvActiveCallStatsEntry")
    {
        for(auto const & c : cvactivecallstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry>();
        c->parent = this;
        cvactivecallstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvactivecallstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvactivecallstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvactivecallstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::Cvactivecallstatsentry()
    :
    cvactivecallstatsintvldurunits{YType::enumeration, "cvActiveCallStatsIntvlDurUnits"},
    cvactivecallstatsintvldur{YType::uint32, "cvActiveCallStatsIntvlDur"},
    cvactivecallstatsavgval{YType::uint32, "cvActiveCallStatsAvgVal"},
    cvactivecallstatsmaxval{YType::uint32, "cvActiveCallStatsMaxVal"}
{
    yang_name = "cvActiveCallStatsEntry"; yang_parent_name = "cvActiveCallStatsTable";
}

CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::~Cvactivecallstatsentry()
{
}

bool CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::has_data() const
{
    return cvactivecallstatsintvldurunits.is_set
	|| cvactivecallstatsintvldur.is_set
	|| cvactivecallstatsavgval.is_set
	|| cvactivecallstatsmaxval.is_set;
}

bool CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvactivecallstatsintvldurunits.operation)
	|| is_set(cvactivecallstatsintvldur.operation)
	|| is_set(cvactivecallstatsavgval.operation)
	|| is_set(cvactivecallstatsmaxval.operation);
}

std::string CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallStatsEntry" <<"[cvActiveCallStatsIntvlDurUnits='" <<cvactivecallstatsintvldurunits <<"']" <<"[cvActiveCallStatsIntvlDur='" <<cvactivecallstatsintvldur <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvActiveCallStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvactivecallstatsintvldurunits.is_set || is_set(cvactivecallstatsintvldurunits.operation)) leaf_name_data.push_back(cvactivecallstatsintvldurunits.get_name_leafdata());
    if (cvactivecallstatsintvldur.is_set || is_set(cvactivecallstatsintvldur.operation)) leaf_name_data.push_back(cvactivecallstatsintvldur.get_name_leafdata());
    if (cvactivecallstatsavgval.is_set || is_set(cvactivecallstatsavgval.operation)) leaf_name_data.push_back(cvactivecallstatsavgval.get_name_leafdata());
    if (cvactivecallstatsmaxval.is_set || is_set(cvactivecallstatsmaxval.operation)) leaf_name_data.push_back(cvactivecallstatsmaxval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvActiveCallStatsIntvlDurUnits")
    {
        cvactivecallstatsintvldurunits = value;
    }
    if(value_path == "cvActiveCallStatsIntvlDur")
    {
        cvactivecallstatsintvldur = value;
    }
    if(value_path == "cvActiveCallStatsAvgVal")
    {
        cvactivecallstatsavgval = value;
    }
    if(value_path == "cvActiveCallStatsMaxVal")
    {
        cvactivecallstatsmaxval = value;
    }
}

CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatstable()
{
    yang_name = "cvCallDurationStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcalldurationstatstable::~Cvcalldurationstatstable()
{
}

bool CiscoVoiceDialControlMib::Cvcalldurationstatstable::has_data() const
{
    for (std::size_t index=0; index<cvcalldurationstatsentry.size(); index++)
    {
        if(cvcalldurationstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcalldurationstatstable::has_operation() const
{
    for (std::size_t index=0; index<cvcalldurationstatsentry.size(); index++)
    {
        if(cvcalldurationstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcalldurationstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallDurationStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcalldurationstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcalldurationstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallDurationStatsEntry")
    {
        for(auto const & c : cvcalldurationstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry>();
        c->parent = this;
        cvcalldurationstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcalldurationstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcalldurationstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcalldurationstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::Cvcalldurationstatsentry()
    :
    cvcalldurationstatsintvldurunits{YType::enumeration, "cvCallDurationStatsIntvlDurUnits"},
    cvcalldurationstatsintvldur{YType::uint32, "cvCallDurationStatsIntvlDur"},
    cvcalldurationstatsavgval{YType::uint32, "cvCallDurationStatsAvgVal"},
    cvcalldurationstatsmaxval{YType::uint32, "cvCallDurationStatsMaxVal"}
{
    yang_name = "cvCallDurationStatsEntry"; yang_parent_name = "cvCallDurationStatsTable";
}

CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::~Cvcalldurationstatsentry()
{
}

bool CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::has_data() const
{
    return cvcalldurationstatsintvldurunits.is_set
	|| cvcalldurationstatsintvldur.is_set
	|| cvcalldurationstatsavgval.is_set
	|| cvcalldurationstatsmaxval.is_set;
}

bool CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcalldurationstatsintvldurunits.operation)
	|| is_set(cvcalldurationstatsintvldur.operation)
	|| is_set(cvcalldurationstatsavgval.operation)
	|| is_set(cvcalldurationstatsmaxval.operation);
}

std::string CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallDurationStatsEntry" <<"[cvCallDurationStatsIntvlDurUnits='" <<cvcalldurationstatsintvldurunits <<"']" <<"[cvCallDurationStatsIntvlDur='" <<cvcalldurationstatsintvldur <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallDurationStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalldurationstatsintvldurunits.is_set || is_set(cvcalldurationstatsintvldurunits.operation)) leaf_name_data.push_back(cvcalldurationstatsintvldurunits.get_name_leafdata());
    if (cvcalldurationstatsintvldur.is_set || is_set(cvcalldurationstatsintvldur.operation)) leaf_name_data.push_back(cvcalldurationstatsintvldur.get_name_leafdata());
    if (cvcalldurationstatsavgval.is_set || is_set(cvcalldurationstatsavgval.operation)) leaf_name_data.push_back(cvcalldurationstatsavgval.get_name_leafdata());
    if (cvcalldurationstatsmaxval.is_set || is_set(cvcalldurationstatsmaxval.operation)) leaf_name_data.push_back(cvcalldurationstatsmaxval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallDurationStatsIntvlDurUnits")
    {
        cvcalldurationstatsintvldurunits = value;
    }
    if(value_path == "cvCallDurationStatsIntvlDur")
    {
        cvcalldurationstatsintvldur = value;
    }
    if(value_path == "cvCallDurationStatsAvgVal")
    {
        cvcalldurationstatsavgval = value;
    }
    if(value_path == "cvCallDurationStatsMaxVal")
    {
        cvcalldurationstatsmaxval = value;
    }
}

CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatstable()
{
    yang_name = "cvSipMsgRateStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvsipmsgratestatstable::~Cvsipmsgratestatstable()
{
}

bool CiscoVoiceDialControlMib::Cvsipmsgratestatstable::has_data() const
{
    for (std::size_t index=0; index<cvsipmsgratestatsentry.size(); index++)
    {
        if(cvsipmsgratestatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvsipmsgratestatstable::has_operation() const
{
    for (std::size_t index=0; index<cvsipmsgratestatsentry.size(); index++)
    {
        if(cvsipmsgratestatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvsipmsgratestatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvsipmsgratestatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvsipmsgratestatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvSipMsgRateStatsEntry")
    {
        for(auto const & c : cvsipmsgratestatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry>();
        c->parent = this;
        cvsipmsgratestatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvsipmsgratestatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvsipmsgratestatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvsipmsgratestatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::Cvsipmsgratestatsentry()
    :
    cvsipmsgratestatsintvldurunits{YType::enumeration, "cvSipMsgRateStatsIntvlDurUnits"},
    cvsipmsgratestatsintvldur{YType::uint32, "cvSipMsgRateStatsIntvlDur"},
    cvsipmsgratestatsavgval{YType::uint32, "cvSipMsgRateStatsAvgVal"},
    cvsipmsgratestatsmaxval{YType::uint32, "cvSipMsgRateStatsMaxVal"}
{
    yang_name = "cvSipMsgRateStatsEntry"; yang_parent_name = "cvSipMsgRateStatsTable";
}

CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::~Cvsipmsgratestatsentry()
{
}

bool CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::has_data() const
{
    return cvsipmsgratestatsintvldurunits.is_set
	|| cvsipmsgratestatsintvldur.is_set
	|| cvsipmsgratestatsavgval.is_set
	|| cvsipmsgratestatsmaxval.is_set;
}

bool CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvsipmsgratestatsintvldurunits.operation)
	|| is_set(cvsipmsgratestatsintvldur.operation)
	|| is_set(cvsipmsgratestatsavgval.operation)
	|| is_set(cvsipmsgratestatsmaxval.operation);
}

std::string CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateStatsEntry" <<"[cvSipMsgRateStatsIntvlDurUnits='" <<cvsipmsgratestatsintvldurunits <<"']" <<"[cvSipMsgRateStatsIntvlDur='" <<cvsipmsgratestatsintvldur <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvSipMsgRateStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvsipmsgratestatsintvldurunits.is_set || is_set(cvsipmsgratestatsintvldurunits.operation)) leaf_name_data.push_back(cvsipmsgratestatsintvldurunits.get_name_leafdata());
    if (cvsipmsgratestatsintvldur.is_set || is_set(cvsipmsgratestatsintvldur.operation)) leaf_name_data.push_back(cvsipmsgratestatsintvldur.get_name_leafdata());
    if (cvsipmsgratestatsavgval.is_set || is_set(cvsipmsgratestatsavgval.operation)) leaf_name_data.push_back(cvsipmsgratestatsavgval.get_name_leafdata());
    if (cvsipmsgratestatsmaxval.is_set || is_set(cvsipmsgratestatsmaxval.operation)) leaf_name_data.push_back(cvsipmsgratestatsmaxval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvSipMsgRateStatsIntvlDurUnits")
    {
        cvsipmsgratestatsintvldurunits = value;
    }
    if(value_path == "cvSipMsgRateStatsIntvlDur")
    {
        cvsipmsgratestatsintvldur = value;
    }
    if(value_path == "cvSipMsgRateStatsAvgVal")
    {
        cvsipmsgratestatsavgval = value;
    }
    if(value_path == "cvSipMsgRateStatsMaxVal")
    {
        cvsipmsgratestatsmaxval = value;
    }
}

CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmtable()
{
    yang_name = "cvCallRateWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcallratewmtable::~Cvcallratewmtable()
{
}

bool CiscoVoiceDialControlMib::Cvcallratewmtable::has_data() const
{
    for (std::size_t index=0; index<cvcallratewmentry.size(); index++)
    {
        if(cvcallratewmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcallratewmtable::has_operation() const
{
    for (std::size_t index=0; index<cvcallratewmentry.size(); index++)
    {
        if(cvcallratewmentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcallratewmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateWMTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallratewmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallratewmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallRateWMEntry")
    {
        for(auto const & c : cvcallratewmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry>();
        c->parent = this;
        cvcallratewmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallratewmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallratewmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcallratewmtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::Cvcallratewmentry()
    :
    cvcallratewmintvldurunits{YType::enumeration, "cvCallRateWMIntvlDurUnits"},
    cvcallratewmindex{YType::uint32, "cvCallRateWMIndex"},
    cvcallratewmts{YType::str, "cvCallRateWMts"},
    cvcallratewmvalue{YType::uint32, "cvCallRateWMValue"}
{
    yang_name = "cvCallRateWMEntry"; yang_parent_name = "cvCallRateWMTable";
}

CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::~Cvcallratewmentry()
{
}

bool CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::has_data() const
{
    return cvcallratewmintvldurunits.is_set
	|| cvcallratewmindex.is_set
	|| cvcallratewmts.is_set
	|| cvcallratewmvalue.is_set;
}

bool CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcallratewmintvldurunits.operation)
	|| is_set(cvcallratewmindex.operation)
	|| is_set(cvcallratewmts.operation)
	|| is_set(cvcallratewmvalue.operation);
}

std::string CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateWMEntry" <<"[cvCallRateWMIntvlDurUnits='" <<cvcallratewmintvldurunits <<"']" <<"[cvCallRateWMIndex='" <<cvcallratewmindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallRateWMTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallratewmintvldurunits.is_set || is_set(cvcallratewmintvldurunits.operation)) leaf_name_data.push_back(cvcallratewmintvldurunits.get_name_leafdata());
    if (cvcallratewmindex.is_set || is_set(cvcallratewmindex.operation)) leaf_name_data.push_back(cvcallratewmindex.get_name_leafdata());
    if (cvcallratewmts.is_set || is_set(cvcallratewmts.operation)) leaf_name_data.push_back(cvcallratewmts.get_name_leafdata());
    if (cvcallratewmvalue.is_set || is_set(cvcallratewmvalue.operation)) leaf_name_data.push_back(cvcallratewmvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallRateWMIntvlDurUnits")
    {
        cvcallratewmintvldurunits = value;
    }
    if(value_path == "cvCallRateWMIndex")
    {
        cvcallratewmindex = value;
    }
    if(value_path == "cvCallRateWMts")
    {
        cvcallratewmts = value;
    }
    if(value_path == "cvCallRateWMValue")
    {
        cvcallratewmvalue = value;
    }
}

CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmtable()
{
    yang_name = "cvCallLegRateWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvcalllegratewmtable::~Cvcalllegratewmtable()
{
}

bool CiscoVoiceDialControlMib::Cvcalllegratewmtable::has_data() const
{
    for (std::size_t index=0; index<cvcalllegratewmentry.size(); index++)
    {
        if(cvcalllegratewmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvcalllegratewmtable::has_operation() const
{
    for (std::size_t index=0; index<cvcalllegratewmentry.size(); index++)
    {
        if(cvcalllegratewmentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvcalllegratewmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateWMTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcalllegratewmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcalllegratewmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCallLegRateWMEntry")
    {
        for(auto const & c : cvcalllegratewmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry>();
        c->parent = this;
        cvcalllegratewmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcalllegratewmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcalllegratewmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvcalllegratewmtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::Cvcalllegratewmentry()
    :
    cvcalllegratewmintvldurunits{YType::enumeration, "cvCallLegRateWMIntvlDurUnits"},
    cvcalllegratewmindex{YType::uint32, "cvCallLegRateWMIndex"},
    cvcalllegratewmts{YType::str, "cvCallLegRateWMts"},
    cvcalllegratewmvalue{YType::uint32, "cvCallLegRateWMValue"}
{
    yang_name = "cvCallLegRateWMEntry"; yang_parent_name = "cvCallLegRateWMTable";
}

CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::~Cvcalllegratewmentry()
{
}

bool CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::has_data() const
{
    return cvcalllegratewmintvldurunits.is_set
	|| cvcalllegratewmindex.is_set
	|| cvcalllegratewmts.is_set
	|| cvcalllegratewmvalue.is_set;
}

bool CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvcalllegratewmintvldurunits.operation)
	|| is_set(cvcalllegratewmindex.operation)
	|| is_set(cvcalllegratewmts.operation)
	|| is_set(cvcalllegratewmvalue.operation);
}

std::string CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateWMEntry" <<"[cvCallLegRateWMIntvlDurUnits='" <<cvcalllegratewmintvldurunits <<"']" <<"[cvCallLegRateWMIndex='" <<cvcalllegratewmindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallLegRateWMTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalllegratewmintvldurunits.is_set || is_set(cvcalllegratewmintvldurunits.operation)) leaf_name_data.push_back(cvcalllegratewmintvldurunits.get_name_leafdata());
    if (cvcalllegratewmindex.is_set || is_set(cvcalllegratewmindex.operation)) leaf_name_data.push_back(cvcalllegratewmindex.get_name_leafdata());
    if (cvcalllegratewmts.is_set || is_set(cvcalllegratewmts.operation)) leaf_name_data.push_back(cvcalllegratewmts.get_name_leafdata());
    if (cvcalllegratewmvalue.is_set || is_set(cvcalllegratewmvalue.operation)) leaf_name_data.push_back(cvcalllegratewmvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvCallLegRateWMIntvlDurUnits")
    {
        cvcalllegratewmintvldurunits = value;
    }
    if(value_path == "cvCallLegRateWMIndex")
    {
        cvcalllegratewmindex = value;
    }
    if(value_path == "cvCallLegRateWMts")
    {
        cvcalllegratewmts = value;
    }
    if(value_path == "cvCallLegRateWMValue")
    {
        cvcalllegratewmvalue = value;
    }
}

CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmtable()
{
    yang_name = "cvActiveCallWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvactivecallwmtable::~Cvactivecallwmtable()
{
}

bool CiscoVoiceDialControlMib::Cvactivecallwmtable::has_data() const
{
    for (std::size_t index=0; index<cvactivecallwmentry.size(); index++)
    {
        if(cvactivecallwmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvactivecallwmtable::has_operation() const
{
    for (std::size_t index=0; index<cvactivecallwmentry.size(); index++)
    {
        if(cvactivecallwmentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvactivecallwmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallWMTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvactivecallwmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvactivecallwmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvActiveCallWMEntry")
    {
        for(auto const & c : cvactivecallwmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry>();
        c->parent = this;
        cvactivecallwmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvactivecallwmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvactivecallwmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvactivecallwmtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::Cvactivecallwmentry()
    :
    cvactivecallwmintvldurunits{YType::enumeration, "cvActiveCallWMIntvlDurUnits"},
    cvactivecallwmindex{YType::uint32, "cvActiveCallWMIndex"},
    cvactivecallwmts{YType::str, "cvActiveCallWMts"},
    cvactivecallwmvalue{YType::uint32, "cvActiveCallWMValue"}
{
    yang_name = "cvActiveCallWMEntry"; yang_parent_name = "cvActiveCallWMTable";
}

CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::~Cvactivecallwmentry()
{
}

bool CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::has_data() const
{
    return cvactivecallwmintvldurunits.is_set
	|| cvactivecallwmindex.is_set
	|| cvactivecallwmts.is_set
	|| cvactivecallwmvalue.is_set;
}

bool CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvactivecallwmintvldurunits.operation)
	|| is_set(cvactivecallwmindex.operation)
	|| is_set(cvactivecallwmts.operation)
	|| is_set(cvactivecallwmvalue.operation);
}

std::string CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallWMEntry" <<"[cvActiveCallWMIntvlDurUnits='" <<cvactivecallwmintvldurunits <<"']" <<"[cvActiveCallWMIndex='" <<cvactivecallwmindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvActiveCallWMTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvactivecallwmintvldurunits.is_set || is_set(cvactivecallwmintvldurunits.operation)) leaf_name_data.push_back(cvactivecallwmintvldurunits.get_name_leafdata());
    if (cvactivecallwmindex.is_set || is_set(cvactivecallwmindex.operation)) leaf_name_data.push_back(cvactivecallwmindex.get_name_leafdata());
    if (cvactivecallwmts.is_set || is_set(cvactivecallwmts.operation)) leaf_name_data.push_back(cvactivecallwmts.get_name_leafdata());
    if (cvactivecallwmvalue.is_set || is_set(cvactivecallwmvalue.operation)) leaf_name_data.push_back(cvactivecallwmvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvActiveCallWMIntvlDurUnits")
    {
        cvactivecallwmintvldurunits = value;
    }
    if(value_path == "cvActiveCallWMIndex")
    {
        cvactivecallwmindex = value;
    }
    if(value_path == "cvActiveCallWMts")
    {
        cvactivecallwmts = value;
    }
    if(value_path == "cvActiveCallWMValue")
    {
        cvactivecallwmvalue = value;
    }
}

CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmtable()
{
    yang_name = "cvSipMsgRateWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB";
}

CiscoVoiceDialControlMib::Cvsipmsgratewmtable::~Cvsipmsgratewmtable()
{
}

bool CiscoVoiceDialControlMib::Cvsipmsgratewmtable::has_data() const
{
    for (std::size_t index=0; index<cvsipmsgratewmentry.size(); index++)
    {
        if(cvsipmsgratewmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDialControlMib::Cvsipmsgratewmtable::has_operation() const
{
    for (std::size_t index=0; index<cvsipmsgratewmentry.size(); index++)
    {
        if(cvsipmsgratewmentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDialControlMib::Cvsipmsgratewmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateWMTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvsipmsgratewmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvsipmsgratewmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvSipMsgRateWMEntry")
    {
        for(auto const & c : cvsipmsgratewmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry>();
        c->parent = this;
        cvsipmsgratewmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvsipmsgratewmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvsipmsgratewmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDialControlMib::Cvsipmsgratewmtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::Cvsipmsgratewmentry()
    :
    cvsipmsgratewmintvldurunits{YType::enumeration, "cvSipMsgRateWMIntvlDurUnits"},
    cvsipmsgratewmindex{YType::uint32, "cvSipMsgRateWMIndex"},
    cvsipmsgratewmts{YType::str, "cvSipMsgRateWMts"},
    cvsipmsgratewmvalue{YType::uint32, "cvSipMsgRateWMValue"}
{
    yang_name = "cvSipMsgRateWMEntry"; yang_parent_name = "cvSipMsgRateWMTable";
}

CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::~Cvsipmsgratewmentry()
{
}

bool CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::has_data() const
{
    return cvsipmsgratewmintvldurunits.is_set
	|| cvsipmsgratewmindex.is_set
	|| cvsipmsgratewmts.is_set
	|| cvsipmsgratewmvalue.is_set;
}

bool CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvsipmsgratewmintvldurunits.operation)
	|| is_set(cvsipmsgratewmindex.operation)
	|| is_set(cvsipmsgratewmts.operation)
	|| is_set(cvsipmsgratewmvalue.operation);
}

std::string CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateWMEntry" <<"[cvSipMsgRateWMIntvlDurUnits='" <<cvsipmsgratewmintvldurunits <<"']" <<"[cvSipMsgRateWMIndex='" <<cvsipmsgratewmindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvSipMsgRateWMTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvsipmsgratewmintvldurunits.is_set || is_set(cvsipmsgratewmintvldurunits.operation)) leaf_name_data.push_back(cvsipmsgratewmintvldurunits.get_name_leafdata());
    if (cvsipmsgratewmindex.is_set || is_set(cvsipmsgratewmindex.operation)) leaf_name_data.push_back(cvsipmsgratewmindex.get_name_leafdata());
    if (cvsipmsgratewmts.is_set || is_set(cvsipmsgratewmts.operation)) leaf_name_data.push_back(cvsipmsgratewmts.get_name_leafdata());
    if (cvsipmsgratewmvalue.is_set || is_set(cvsipmsgratewmvalue.operation)) leaf_name_data.push_back(cvsipmsgratewmvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvSipMsgRateWMIntvlDurUnits")
    {
        cvsipmsgratewmintvldurunits = value;
    }
    if(value_path == "cvSipMsgRateWMIndex")
    {
        cvsipmsgratewmindex = value;
    }
    if(value_path == "cvSipMsgRateWMts")
    {
        cvsipmsgratewmts = value;
    }
    if(value_path == "cvSipMsgRateWMValue")
    {
        cvsipmsgratewmvalue = value;
    }
}

const Enum::YLeaf CvcallvolumewmintvltypeEnum::secondStats {1, "secondStats"};
const Enum::YLeaf CvcallvolumewmintvltypeEnum::minuteStats {2, "minuteStats"};
const Enum::YLeaf CvcallvolumewmintvltypeEnum::hourStats {3, "hourStats"};
const Enum::YLeaf CvcallvolumewmintvltypeEnum::fromReloadStats {4, "fromReloadStats"};

const Enum::YLeaf CvilbcframemodeEnum::frameMode20 {20, "frameMode20"};
const Enum::YLeaf CvilbcframemodeEnum::frameMode30 {30, "frameMode30"};

const Enum::YLeaf CvamrnbrtpencapEnum::rfc3267 {1, "rfc3267"};

const Enum::YLeaf CvsessionprotocolEnum::other {1, "other"};
const Enum::YLeaf CvsessionprotocolEnum::cisco {2, "cisco"};
const Enum::YLeaf CvsessionprotocolEnum::sdp {3, "sdp"};
const Enum::YLeaf CvsessionprotocolEnum::sip {4, "sip"};
const Enum::YLeaf CvsessionprotocolEnum::multicast {5, "multicast"};
const Enum::YLeaf CvsessionprotocolEnum::sccp {6, "sccp"};

const Enum::YLeaf CvcallconnectiontypeEnum::h323 {1, "h323"};
const Enum::YLeaf CvcallconnectiontypeEnum::sip {2, "sip"};
const Enum::YLeaf CvcallconnectiontypeEnum::mgcp {3, "mgcp"};
const Enum::YLeaf CvcallconnectiontypeEnum::sccp {4, "sccp"};
const Enum::YLeaf CvcallconnectiontypeEnum::multicast {5, "multicast"};
const Enum::YLeaf CvcallconnectiontypeEnum::cacontrol {6, "cacontrol"};
const Enum::YLeaf CvcallconnectiontypeEnum::telephony {7, "telephony"};

const Enum::YLeaf CvcallvolumestatsintvltypeEnum::secondStats {1, "secondStats"};
const Enum::YLeaf CvcallvolumestatsintvltypeEnum::minuteStats {2, "minuteStats"};
const Enum::YLeaf CvcallvolumestatsintvltypeEnum::hourStats {3, "hourStats"};

const Enum::YLeaf CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgtypeEnum::voice {1, "voice"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgtypeEnum::voip {2, "voip"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgtypeEnum::mmail {3, "mmail"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgtypeEnum::voatm {4, "voatm"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgtypeEnum::vofr {5, "vofr"};

const Enum::YLeaf CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgpeertypeEnum::voice {1, "voice"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgpeertypeEnum::data {2, "data"};

const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerTestNone {1, "echoCancellerTestNone"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test2A {2, "echoCancellerG168Test2A"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test2B {3, "echoCancellerG168Test2B"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test2Ca {4, "echoCancellerG168Test2Ca"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test2Cb {5, "echoCancellerG168Test2Cb"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test3A {6, "echoCancellerG168Test3A"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test3B {7, "echoCancellerG168Test3B"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test3C {8, "echoCancellerG168Test3C"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test4 {9, "echoCancellerG168Test4"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test6 {10, "echoCancellerG168Test6"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test9 {11, "echoCancellerG168Test9"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test5 {12, "echoCancellerG168Test5"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum::echoCancellerG168Test7 {13, "echoCancellerG168Test7"};

const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgmediasettingEnum::flowThrough {1, "flowThrough"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgmediasettingEnum::flowAround {2, "flowAround"};

const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgcodingmodeEnum::adaptive {1, "adaptive"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgcodingmodeEnum::independent {2, "independent"};

const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgframesizeEnum::frameSize30 {1, "frameSize30"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgframesizeEnum::frameSize60 {2, "frameSize60"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgframesizeEnum::frameSize30fixed {3, "frameSize30fixed"};
const Enum::YLeaf CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgframesizeEnum::frameSize60fixed {4, "frameSize60fixed"};


}
}

