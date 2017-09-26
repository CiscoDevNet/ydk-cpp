
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_DIAL_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VOICE_DIAL_CONTROL_MIB {

CISCOVOICEDIALCONTROLMIB::CISCOVOICEDIALCONTROLMIB()
    :
    cvactivecallstatstable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable>())
	,cvactivecallwmtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable>())
	,cvcallactivetable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallactivetable>())
	,cvcalldurationstatstable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable>())
	,cvcallhistorytable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable>())
	,cvcalllegratestatstable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable>())
	,cvcalllegratewmtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable>())
	,cvcallratemonitor(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor>())
	,cvcallratestatstable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable>())
	,cvcallratewmtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable>())
	,cvcallvolconntable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable>())
	,cvcallvoliftable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable>())
	,cvcallvolume(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvolume>())
	,cvcallvolumestatshistory(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory>())
	,cvgatewaycallactive(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive>())
	,cvgeneralconfiguration(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration>())
	,cvpeercfgtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable>())
	,cvpeercommoncfgtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable>())
	,cvsipmsgratestatstable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable>())
	,cvsipmsgratewmtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable>())
	,cvvoicepeercfgtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable>())
	,cvvoipcallactivetable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable>())
	,cvvoipcallhistorytable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable>())
	,cvvoippeercfgtable(std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable>())
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

    yang_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::~CISCOVOICEDIALCONTROLMIB()
{
}

bool CISCOVOICEDIALCONTROLMIB::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::has_operation() const
{
    return is_set(yfilter)
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

std::string CISCOVOICEDIALCONTROLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvActiveCallStatsTable")
    {
        if(cvactivecallstatstable == nullptr)
        {
            cvactivecallstatstable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable>();
        }
        return cvactivecallstatstable;
    }

    if(child_yang_name == "cvActiveCallWMTable")
    {
        if(cvactivecallwmtable == nullptr)
        {
            cvactivecallwmtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable>();
        }
        return cvactivecallwmtable;
    }

    if(child_yang_name == "cvCallActiveTable")
    {
        if(cvcallactivetable == nullptr)
        {
            cvcallactivetable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallactivetable>();
        }
        return cvcallactivetable;
    }

    if(child_yang_name == "cvCallDurationStatsTable")
    {
        if(cvcalldurationstatstable == nullptr)
        {
            cvcalldurationstatstable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable>();
        }
        return cvcalldurationstatstable;
    }

    if(child_yang_name == "cvCallHistoryTable")
    {
        if(cvcallhistorytable == nullptr)
        {
            cvcallhistorytable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable>();
        }
        return cvcallhistorytable;
    }

    if(child_yang_name == "cvCallLegRateStatsTable")
    {
        if(cvcalllegratestatstable == nullptr)
        {
            cvcalllegratestatstable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable>();
        }
        return cvcalllegratestatstable;
    }

    if(child_yang_name == "cvCallLegRateWMTable")
    {
        if(cvcalllegratewmtable == nullptr)
        {
            cvcalllegratewmtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable>();
        }
        return cvcalllegratewmtable;
    }

    if(child_yang_name == "cvCallRateMonitor")
    {
        if(cvcallratemonitor == nullptr)
        {
            cvcallratemonitor = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor>();
        }
        return cvcallratemonitor;
    }

    if(child_yang_name == "cvCallRateStatsTable")
    {
        if(cvcallratestatstable == nullptr)
        {
            cvcallratestatstable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable>();
        }
        return cvcallratestatstable;
    }

    if(child_yang_name == "cvCallRateWMTable")
    {
        if(cvcallratewmtable == nullptr)
        {
            cvcallratewmtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable>();
        }
        return cvcallratewmtable;
    }

    if(child_yang_name == "cvCallVolConnTable")
    {
        if(cvcallvolconntable == nullptr)
        {
            cvcallvolconntable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable>();
        }
        return cvcallvolconntable;
    }

    if(child_yang_name == "cvCallVolIfTable")
    {
        if(cvcallvoliftable == nullptr)
        {
            cvcallvoliftable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable>();
        }
        return cvcallvoliftable;
    }

    if(child_yang_name == "cvCallVolume")
    {
        if(cvcallvolume == nullptr)
        {
            cvcallvolume = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvolume>();
        }
        return cvcallvolume;
    }

    if(child_yang_name == "cvCallVolumeStatsHistory")
    {
        if(cvcallvolumestatshistory == nullptr)
        {
            cvcallvolumestatshistory = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory>();
        }
        return cvcallvolumestatshistory;
    }

    if(child_yang_name == "cvGatewayCallActive")
    {
        if(cvgatewaycallactive == nullptr)
        {
            cvgatewaycallactive = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive>();
        }
        return cvgatewaycallactive;
    }

    if(child_yang_name == "cvGeneralConfiguration")
    {
        if(cvgeneralconfiguration == nullptr)
        {
            cvgeneralconfiguration = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration>();
        }
        return cvgeneralconfiguration;
    }

    if(child_yang_name == "cvPeerCfgTable")
    {
        if(cvpeercfgtable == nullptr)
        {
            cvpeercfgtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable>();
        }
        return cvpeercfgtable;
    }

    if(child_yang_name == "cvPeerCommonCfgTable")
    {
        if(cvpeercommoncfgtable == nullptr)
        {
            cvpeercommoncfgtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable>();
        }
        return cvpeercommoncfgtable;
    }

    if(child_yang_name == "cvSipMsgRateStatsTable")
    {
        if(cvsipmsgratestatstable == nullptr)
        {
            cvsipmsgratestatstable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable>();
        }
        return cvsipmsgratestatstable;
    }

    if(child_yang_name == "cvSipMsgRateWMTable")
    {
        if(cvsipmsgratewmtable == nullptr)
        {
            cvsipmsgratewmtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable>();
        }
        return cvsipmsgratewmtable;
    }

    if(child_yang_name == "cvVoicePeerCfgTable")
    {
        if(cvvoicepeercfgtable == nullptr)
        {
            cvvoicepeercfgtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable>();
        }
        return cvvoicepeercfgtable;
    }

    if(child_yang_name == "cvVoIPCallActiveTable")
    {
        if(cvvoipcallactivetable == nullptr)
        {
            cvvoipcallactivetable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable>();
        }
        return cvvoipcallactivetable;
    }

    if(child_yang_name == "cvVoIPCallHistoryTable")
    {
        if(cvvoipcallhistorytable == nullptr)
        {
            cvvoipcallhistorytable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable>();
        }
        return cvvoipcallhistorytable;
    }

    if(child_yang_name == "cvVoIPPeerCfgTable")
    {
        if(cvvoippeercfgtable == nullptr)
        {
            cvvoippeercfgtable = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable>();
        }
        return cvvoippeercfgtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::get_children() const
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

void CISCOVOICEDIALCONTROLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::clone_ptr() const
{
    return std::make_shared<CISCOVOICEDIALCONTROLMIB>();
}

std::string CISCOVOICEDIALCONTROLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVOICEDIALCONTROLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVOICEDIALCONTROLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVOICEDIALCONTROLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVOICEDIALCONTROLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvActiveCallStatsTable" || name == "cvActiveCallWMTable" || name == "cvCallActiveTable" || name == "cvCallDurationStatsTable" || name == "cvCallHistoryTable" || name == "cvCallLegRateStatsTable" || name == "cvCallLegRateWMTable" || name == "cvCallRateMonitor" || name == "cvCallRateStatsTable" || name == "cvCallRateWMTable" || name == "cvCallVolConnTable" || name == "cvCallVolIfTable" || name == "cvCallVolume" || name == "cvCallVolumeStatsHistory" || name == "cvGatewayCallActive" || name == "cvGeneralConfiguration" || name == "cvPeerCfgTable" || name == "cvPeerCommonCfgTable" || name == "cvSipMsgRateStatsTable" || name == "cvSipMsgRateWMTable" || name == "cvVoicePeerCfgTable" || name == "cvVoIPCallActiveTable" || name == "cvVoIPCallHistoryTable" || name == "cvVoIPPeerCfgTable")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatstable()
{

    yang_name = "cvActiveCallStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::~Cvactivecallstatstable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::has_data() const
{
    for (std::size_t index=0; index<cvactivecallstatsentry.size(); index++)
    {
        if(cvactivecallstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::has_operation() const
{
    for (std::size_t index=0; index<cvactivecallstatsentry.size(); index++)
    {
        if(cvactivecallstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry>();
        c->parent = this;
        cvactivecallstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvactivecallstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvActiveCallStatsEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::Cvactivecallstatsentry()
    :
    cvactivecallstatsintvldurunits{YType::enumeration, "cvActiveCallStatsIntvlDurUnits"},
    cvactivecallstatsintvldur{YType::uint32, "cvActiveCallStatsIntvlDur"},
    cvactivecallstatsavgval{YType::uint32, "cvActiveCallStatsAvgVal"},
    cvactivecallstatsmaxval{YType::uint32, "cvActiveCallStatsMaxVal"}
{

    yang_name = "cvActiveCallStatsEntry"; yang_parent_name = "cvActiveCallStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::~Cvactivecallstatsentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::has_data() const
{
    return cvactivecallstatsintvldurunits.is_set
	|| cvactivecallstatsintvldur.is_set
	|| cvactivecallstatsavgval.is_set
	|| cvactivecallstatsmaxval.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvactivecallstatsintvldurunits.yfilter)
	|| ydk::is_set(cvactivecallstatsintvldur.yfilter)
	|| ydk::is_set(cvactivecallstatsavgval.yfilter)
	|| ydk::is_set(cvactivecallstatsmaxval.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvActiveCallStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallStatsEntry" <<"[cvActiveCallStatsIntvlDurUnits='" <<cvactivecallstatsintvldurunits <<"']" <<"[cvActiveCallStatsIntvlDur='" <<cvactivecallstatsintvldur <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvactivecallstatsintvldurunits.is_set || is_set(cvactivecallstatsintvldurunits.yfilter)) leaf_name_data.push_back(cvactivecallstatsintvldurunits.get_name_leafdata());
    if (cvactivecallstatsintvldur.is_set || is_set(cvactivecallstatsintvldur.yfilter)) leaf_name_data.push_back(cvactivecallstatsintvldur.get_name_leafdata());
    if (cvactivecallstatsavgval.is_set || is_set(cvactivecallstatsavgval.yfilter)) leaf_name_data.push_back(cvactivecallstatsavgval.get_name_leafdata());
    if (cvactivecallstatsmaxval.is_set || is_set(cvactivecallstatsmaxval.yfilter)) leaf_name_data.push_back(cvactivecallstatsmaxval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvActiveCallStatsIntvlDurUnits")
    {
        cvactivecallstatsintvldurunits = value;
        cvactivecallstatsintvldurunits.value_namespace = name_space;
        cvactivecallstatsintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvActiveCallStatsIntvlDur")
    {
        cvactivecallstatsintvldur = value;
        cvactivecallstatsintvldur.value_namespace = name_space;
        cvactivecallstatsintvldur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvActiveCallStatsAvgVal")
    {
        cvactivecallstatsavgval = value;
        cvactivecallstatsavgval.value_namespace = name_space;
        cvactivecallstatsavgval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvActiveCallStatsMaxVal")
    {
        cvactivecallstatsmaxval = value;
        cvactivecallstatsmaxval.value_namespace = name_space;
        cvactivecallstatsmaxval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvActiveCallStatsIntvlDurUnits")
    {
        cvactivecallstatsintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvActiveCallStatsIntvlDur")
    {
        cvactivecallstatsintvldur.yfilter = yfilter;
    }
    if(value_path == "cvActiveCallStatsAvgVal")
    {
        cvactivecallstatsavgval.yfilter = yfilter;
    }
    if(value_path == "cvActiveCallStatsMaxVal")
    {
        cvactivecallstatsmaxval.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvActiveCallStatsIntvlDurUnits" || name == "cvActiveCallStatsIntvlDur" || name == "cvActiveCallStatsAvgVal" || name == "cvActiveCallStatsMaxVal")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmtable()
{

    yang_name = "cvActiveCallWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::~Cvactivecallwmtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::has_data() const
{
    for (std::size_t index=0; index<cvactivecallwmentry.size(); index++)
    {
        if(cvactivecallwmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::has_operation() const
{
    for (std::size_t index=0; index<cvactivecallwmentry.size(); index++)
    {
        if(cvactivecallwmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallWMTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry>();
        c->parent = this;
        cvactivecallwmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvactivecallwmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvActiveCallWMEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::Cvactivecallwmentry()
    :
    cvactivecallwmintvldurunits{YType::enumeration, "cvActiveCallWMIntvlDurUnits"},
    cvactivecallwmindex{YType::uint32, "cvActiveCallWMIndex"},
    cvactivecallwmts{YType::str, "cvActiveCallWMts"},
    cvactivecallwmvalue{YType::uint32, "cvActiveCallWMValue"}
{

    yang_name = "cvActiveCallWMEntry"; yang_parent_name = "cvActiveCallWMTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::~Cvactivecallwmentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::has_data() const
{
    return cvactivecallwmintvldurunits.is_set
	|| cvactivecallwmindex.is_set
	|| cvactivecallwmts.is_set
	|| cvactivecallwmvalue.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvactivecallwmintvldurunits.yfilter)
	|| ydk::is_set(cvactivecallwmindex.yfilter)
	|| ydk::is_set(cvactivecallwmts.yfilter)
	|| ydk::is_set(cvactivecallwmvalue.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvActiveCallWMTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvActiveCallWMEntry" <<"[cvActiveCallWMIntvlDurUnits='" <<cvactivecallwmintvldurunits <<"']" <<"[cvActiveCallWMIndex='" <<cvactivecallwmindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvactivecallwmintvldurunits.is_set || is_set(cvactivecallwmintvldurunits.yfilter)) leaf_name_data.push_back(cvactivecallwmintvldurunits.get_name_leafdata());
    if (cvactivecallwmindex.is_set || is_set(cvactivecallwmindex.yfilter)) leaf_name_data.push_back(cvactivecallwmindex.get_name_leafdata());
    if (cvactivecallwmts.is_set || is_set(cvactivecallwmts.yfilter)) leaf_name_data.push_back(cvactivecallwmts.get_name_leafdata());
    if (cvactivecallwmvalue.is_set || is_set(cvactivecallwmvalue.yfilter)) leaf_name_data.push_back(cvactivecallwmvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvActiveCallWMIntvlDurUnits")
    {
        cvactivecallwmintvldurunits = value;
        cvactivecallwmintvldurunits.value_namespace = name_space;
        cvactivecallwmintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvActiveCallWMIndex")
    {
        cvactivecallwmindex = value;
        cvactivecallwmindex.value_namespace = name_space;
        cvactivecallwmindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvActiveCallWMts")
    {
        cvactivecallwmts = value;
        cvactivecallwmts.value_namespace = name_space;
        cvactivecallwmts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvActiveCallWMValue")
    {
        cvactivecallwmvalue = value;
        cvactivecallwmvalue.value_namespace = name_space;
        cvactivecallwmvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvActiveCallWMIntvlDurUnits")
    {
        cvactivecallwmintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvActiveCallWMIndex")
    {
        cvactivecallwmindex.yfilter = yfilter;
    }
    if(value_path == "cvActiveCallWMts")
    {
        cvactivecallwmts.yfilter = yfilter;
    }
    if(value_path == "cvActiveCallWMValue")
    {
        cvactivecallwmvalue.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvActiveCallWMIntvlDurUnits" || name == "cvActiveCallWMIndex" || name == "cvActiveCallWMts" || name == "cvActiveCallWMValue")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactivetable()
{

    yang_name = "cvCallActiveTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::~Cvcallactivetable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::has_data() const
{
    for (std::size_t index=0; index<cvcallactiveentry.size(); index++)
    {
        if(cvcallactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::has_operation() const
{
    for (std::size_t index=0; index<cvcallactiveentry.size(); index++)
    {
        if(cvcallactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallActiveTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry>();
        c->parent = this;
        cvcallactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallActiveEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::Cvcallactiveentry()
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

    yang_name = "cvCallActiveEntry"; yang_parent_name = "cvCallActiveTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::~Cvcallactiveentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(cvcallactiveaccountcode.yfilter)
	|| ydk::is_set(cvcallactiveacomlevel.yfilter)
	|| ydk::is_set(cvcallactivecalleridblock.yfilter)
	|| ydk::is_set(cvcallactivecallid.yfilter)
	|| ydk::is_set(cvcallactivecallingname.yfilter)
	|| ydk::is_set(cvcallactivecodertyperate.yfilter)
	|| ydk::is_set(cvcallactiveconnectionid.yfilter)
	|| ydk::is_set(cvcallactiveecanreflectorlocation.yfilter)
	|| ydk::is_set(cvcallactiveerllevel.yfilter)
	|| ydk::is_set(cvcallactiveerllevelrev1.yfilter)
	|| ydk::is_set(cvcallactivefaxtxduration.yfilter)
	|| ydk::is_set(cvcallactiveimgpagecount.yfilter)
	|| ydk::is_set(cvcallactiveinsignallevel.yfilter)
	|| ydk::is_set(cvcallactivenoiselevel.yfilter)
	|| ydk::is_set(cvcallactiveoutsignallevel.yfilter)
	|| ydk::is_set(cvcallactivesessiontarget.yfilter)
	|| ydk::is_set(cvcallactivetxduration.yfilter)
	|| ydk::is_set(cvcallactivevoicetxduration.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallActiveTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallActiveEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (cvcallactiveaccountcode.is_set || is_set(cvcallactiveaccountcode.yfilter)) leaf_name_data.push_back(cvcallactiveaccountcode.get_name_leafdata());
    if (cvcallactiveacomlevel.is_set || is_set(cvcallactiveacomlevel.yfilter)) leaf_name_data.push_back(cvcallactiveacomlevel.get_name_leafdata());
    if (cvcallactivecalleridblock.is_set || is_set(cvcallactivecalleridblock.yfilter)) leaf_name_data.push_back(cvcallactivecalleridblock.get_name_leafdata());
    if (cvcallactivecallid.is_set || is_set(cvcallactivecallid.yfilter)) leaf_name_data.push_back(cvcallactivecallid.get_name_leafdata());
    if (cvcallactivecallingname.is_set || is_set(cvcallactivecallingname.yfilter)) leaf_name_data.push_back(cvcallactivecallingname.get_name_leafdata());
    if (cvcallactivecodertyperate.is_set || is_set(cvcallactivecodertyperate.yfilter)) leaf_name_data.push_back(cvcallactivecodertyperate.get_name_leafdata());
    if (cvcallactiveconnectionid.is_set || is_set(cvcallactiveconnectionid.yfilter)) leaf_name_data.push_back(cvcallactiveconnectionid.get_name_leafdata());
    if (cvcallactiveecanreflectorlocation.is_set || is_set(cvcallactiveecanreflectorlocation.yfilter)) leaf_name_data.push_back(cvcallactiveecanreflectorlocation.get_name_leafdata());
    if (cvcallactiveerllevel.is_set || is_set(cvcallactiveerllevel.yfilter)) leaf_name_data.push_back(cvcallactiveerllevel.get_name_leafdata());
    if (cvcallactiveerllevelrev1.is_set || is_set(cvcallactiveerllevelrev1.yfilter)) leaf_name_data.push_back(cvcallactiveerllevelrev1.get_name_leafdata());
    if (cvcallactivefaxtxduration.is_set || is_set(cvcallactivefaxtxduration.yfilter)) leaf_name_data.push_back(cvcallactivefaxtxduration.get_name_leafdata());
    if (cvcallactiveimgpagecount.is_set || is_set(cvcallactiveimgpagecount.yfilter)) leaf_name_data.push_back(cvcallactiveimgpagecount.get_name_leafdata());
    if (cvcallactiveinsignallevel.is_set || is_set(cvcallactiveinsignallevel.yfilter)) leaf_name_data.push_back(cvcallactiveinsignallevel.get_name_leafdata());
    if (cvcallactivenoiselevel.is_set || is_set(cvcallactivenoiselevel.yfilter)) leaf_name_data.push_back(cvcallactivenoiselevel.get_name_leafdata());
    if (cvcallactiveoutsignallevel.is_set || is_set(cvcallactiveoutsignallevel.yfilter)) leaf_name_data.push_back(cvcallactiveoutsignallevel.get_name_leafdata());
    if (cvcallactivesessiontarget.is_set || is_set(cvcallactivesessiontarget.yfilter)) leaf_name_data.push_back(cvcallactivesessiontarget.get_name_leafdata());
    if (cvcallactivetxduration.is_set || is_set(cvcallactivetxduration.yfilter)) leaf_name_data.push_back(cvcallactivetxduration.get_name_leafdata());
    if (cvcallactivevoicetxduration.is_set || is_set(cvcallactivevoicetxduration.yfilter)) leaf_name_data.push_back(cvcallactivevoicetxduration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
        callactivesetuptime.value_namespace = name_space;
        callactivesetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
        callactiveindex.value_namespace = name_space;
        callactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveAccountCode")
    {
        cvcallactiveaccountcode = value;
        cvcallactiveaccountcode.value_namespace = name_space;
        cvcallactiveaccountcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveACOMLevel")
    {
        cvcallactiveacomlevel = value;
        cvcallactiveacomlevel.value_namespace = name_space;
        cvcallactiveacomlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveCallerIDBlock")
    {
        cvcallactivecalleridblock = value;
        cvcallactivecalleridblock.value_namespace = name_space;
        cvcallactivecalleridblock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveCallId")
    {
        cvcallactivecallid = value;
        cvcallactivecallid.value_namespace = name_space;
        cvcallactivecallid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveCallingName")
    {
        cvcallactivecallingname = value;
        cvcallactivecallingname.value_namespace = name_space;
        cvcallactivecallingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveCoderTypeRate")
    {
        cvcallactivecodertyperate = value;
        cvcallactivecodertyperate.value_namespace = name_space;
        cvcallactivecodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveConnectionId")
    {
        cvcallactiveconnectionid = value;
        cvcallactiveconnectionid.value_namespace = name_space;
        cvcallactiveconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveEcanReflectorLocation")
    {
        cvcallactiveecanreflectorlocation = value;
        cvcallactiveecanreflectorlocation.value_namespace = name_space;
        cvcallactiveecanreflectorlocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveERLLevel")
    {
        cvcallactiveerllevel = value;
        cvcallactiveerllevel.value_namespace = name_space;
        cvcallactiveerllevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveERLLevelRev1")
    {
        cvcallactiveerllevelrev1 = value;
        cvcallactiveerllevelrev1.value_namespace = name_space;
        cvcallactiveerllevelrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveFaxTxDuration")
    {
        cvcallactivefaxtxduration = value;
        cvcallactivefaxtxduration.value_namespace = name_space;
        cvcallactivefaxtxduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveImgPageCount")
    {
        cvcallactiveimgpagecount = value;
        cvcallactiveimgpagecount.value_namespace = name_space;
        cvcallactiveimgpagecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveInSignalLevel")
    {
        cvcallactiveinsignallevel = value;
        cvcallactiveinsignallevel.value_namespace = name_space;
        cvcallactiveinsignallevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveNoiseLevel")
    {
        cvcallactivenoiselevel = value;
        cvcallactivenoiselevel.value_namespace = name_space;
        cvcallactivenoiselevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveOutSignalLevel")
    {
        cvcallactiveoutsignallevel = value;
        cvcallactiveoutsignallevel.value_namespace = name_space;
        cvcallactiveoutsignallevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveSessionTarget")
    {
        cvcallactivesessiontarget = value;
        cvcallactivesessiontarget.value_namespace = name_space;
        cvcallactivesessiontarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveTxDuration")
    {
        cvcallactivetxduration = value;
        cvcallactivetxduration.value_namespace = name_space;
        cvcallactivetxduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveVoiceTxDuration")
    {
        cvcallactivevoicetxduration = value;
        cvcallactivevoicetxduration.value_namespace = name_space;
        cvcallactivevoicetxduration.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveAccountCode")
    {
        cvcallactiveaccountcode.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveACOMLevel")
    {
        cvcallactiveacomlevel.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveCallerIDBlock")
    {
        cvcallactivecalleridblock.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveCallId")
    {
        cvcallactivecallid.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveCallingName")
    {
        cvcallactivecallingname.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveCoderTypeRate")
    {
        cvcallactivecodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveConnectionId")
    {
        cvcallactiveconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveEcanReflectorLocation")
    {
        cvcallactiveecanreflectorlocation.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveERLLevel")
    {
        cvcallactiveerllevel.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveERLLevelRev1")
    {
        cvcallactiveerllevelrev1.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveFaxTxDuration")
    {
        cvcallactivefaxtxduration.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveImgPageCount")
    {
        cvcallactiveimgpagecount.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveInSignalLevel")
    {
        cvcallactiveinsignallevel.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveNoiseLevel")
    {
        cvcallactivenoiselevel.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveOutSignalLevel")
    {
        cvcallactiveoutsignallevel.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveSessionTarget")
    {
        cvcallactivesessiontarget.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveTxDuration")
    {
        cvcallactivetxduration.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveVoiceTxDuration")
    {
        cvcallactivevoicetxduration.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "cvCallActiveAccountCode" || name == "cvCallActiveACOMLevel" || name == "cvCallActiveCallerIDBlock" || name == "cvCallActiveCallId" || name == "cvCallActiveCallingName" || name == "cvCallActiveCoderTypeRate" || name == "cvCallActiveConnectionId" || name == "cvCallActiveEcanReflectorLocation" || name == "cvCallActiveERLLevel" || name == "cvCallActiveERLLevelRev1" || name == "cvCallActiveFaxTxDuration" || name == "cvCallActiveImgPageCount" || name == "cvCallActiveInSignalLevel" || name == "cvCallActiveNoiseLevel" || name == "cvCallActiveOutSignalLevel" || name == "cvCallActiveSessionTarget" || name == "cvCallActiveTxDuration" || name == "cvCallActiveVoiceTxDuration")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatstable()
{

    yang_name = "cvCallDurationStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::~Cvcalldurationstatstable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::has_data() const
{
    for (std::size_t index=0; index<cvcalldurationstatsentry.size(); index++)
    {
        if(cvcalldurationstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::has_operation() const
{
    for (std::size_t index=0; index<cvcalldurationstatsentry.size(); index++)
    {
        if(cvcalldurationstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallDurationStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry>();
        c->parent = this;
        cvcalldurationstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcalldurationstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallDurationStatsEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::Cvcalldurationstatsentry()
    :
    cvcalldurationstatsintvldurunits{YType::enumeration, "cvCallDurationStatsIntvlDurUnits"},
    cvcalldurationstatsintvldur{YType::uint32, "cvCallDurationStatsIntvlDur"},
    cvcalldurationstatsavgval{YType::uint32, "cvCallDurationStatsAvgVal"},
    cvcalldurationstatsmaxval{YType::uint32, "cvCallDurationStatsMaxVal"}
{

    yang_name = "cvCallDurationStatsEntry"; yang_parent_name = "cvCallDurationStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::~Cvcalldurationstatsentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::has_data() const
{
    return cvcalldurationstatsintvldurunits.is_set
	|| cvcalldurationstatsintvldur.is_set
	|| cvcalldurationstatsavgval.is_set
	|| cvcalldurationstatsmaxval.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcalldurationstatsintvldurunits.yfilter)
	|| ydk::is_set(cvcalldurationstatsintvldur.yfilter)
	|| ydk::is_set(cvcalldurationstatsavgval.yfilter)
	|| ydk::is_set(cvcalldurationstatsmaxval.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallDurationStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallDurationStatsEntry" <<"[cvCallDurationStatsIntvlDurUnits='" <<cvcalldurationstatsintvldurunits <<"']" <<"[cvCallDurationStatsIntvlDur='" <<cvcalldurationstatsintvldur <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalldurationstatsintvldurunits.is_set || is_set(cvcalldurationstatsintvldurunits.yfilter)) leaf_name_data.push_back(cvcalldurationstatsintvldurunits.get_name_leafdata());
    if (cvcalldurationstatsintvldur.is_set || is_set(cvcalldurationstatsintvldur.yfilter)) leaf_name_data.push_back(cvcalldurationstatsintvldur.get_name_leafdata());
    if (cvcalldurationstatsavgval.is_set || is_set(cvcalldurationstatsavgval.yfilter)) leaf_name_data.push_back(cvcalldurationstatsavgval.get_name_leafdata());
    if (cvcalldurationstatsmaxval.is_set || is_set(cvcalldurationstatsmaxval.yfilter)) leaf_name_data.push_back(cvcalldurationstatsmaxval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallDurationStatsIntvlDurUnits")
    {
        cvcalldurationstatsintvldurunits = value;
        cvcalldurationstatsintvldurunits.value_namespace = name_space;
        cvcalldurationstatsintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallDurationStatsIntvlDur")
    {
        cvcalldurationstatsintvldur = value;
        cvcalldurationstatsintvldur.value_namespace = name_space;
        cvcalldurationstatsintvldur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallDurationStatsAvgVal")
    {
        cvcalldurationstatsavgval = value;
        cvcalldurationstatsavgval.value_namespace = name_space;
        cvcalldurationstatsavgval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallDurationStatsMaxVal")
    {
        cvcalldurationstatsmaxval = value;
        cvcalldurationstatsmaxval.value_namespace = name_space;
        cvcalldurationstatsmaxval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallDurationStatsIntvlDurUnits")
    {
        cvcalldurationstatsintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvCallDurationStatsIntvlDur")
    {
        cvcalldurationstatsintvldur.yfilter = yfilter;
    }
    if(value_path == "cvCallDurationStatsAvgVal")
    {
        cvcalldurationstatsavgval.yfilter = yfilter;
    }
    if(value_path == "cvCallDurationStatsMaxVal")
    {
        cvcalldurationstatsmaxval.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallDurationStatsIntvlDurUnits" || name == "cvCallDurationStatsIntvlDur" || name == "cvCallDurationStatsAvgVal" || name == "cvCallDurationStatsMaxVal")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistorytable()
{

    yang_name = "cvCallHistoryTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::~Cvcallhistorytable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::has_data() const
{
    for (std::size_t index=0; index<cvcallhistoryentry.size(); index++)
    {
        if(cvcallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cvcallhistoryentry.size(); index++)
    {
        if(cvcallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry>();
        c->parent = this;
        cvcallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallHistoryEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::Cvcallhistoryentry()
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

    yang_name = "cvCallHistoryEntry"; yang_parent_name = "cvCallHistoryTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::~Cvcallhistoryentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(cvcallhistoryaccountcode.yfilter)
	|| ydk::is_set(cvcallhistoryacomlevel.yfilter)
	|| ydk::is_set(cvcallhistorycalleridblock.yfilter)
	|| ydk::is_set(cvcallhistorycallid.yfilter)
	|| ydk::is_set(cvcallhistorycallingname.yfilter)
	|| ydk::is_set(cvcallhistorycodertyperate.yfilter)
	|| ydk::is_set(cvcallhistoryconnectionid.yfilter)
	|| ydk::is_set(cvcallhistoryfaxtxduration.yfilter)
	|| ydk::is_set(cvcallhistoryimgpagecount.yfilter)
	|| ydk::is_set(cvcallhistorynoiselevel.yfilter)
	|| ydk::is_set(cvcallhistorysessiontarget.yfilter)
	|| ydk::is_set(cvcallhistorytxduration.yfilter)
	|| ydk::is_set(cvcallhistoryvoicetxduration.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (cvcallhistoryaccountcode.is_set || is_set(cvcallhistoryaccountcode.yfilter)) leaf_name_data.push_back(cvcallhistoryaccountcode.get_name_leafdata());
    if (cvcallhistoryacomlevel.is_set || is_set(cvcallhistoryacomlevel.yfilter)) leaf_name_data.push_back(cvcallhistoryacomlevel.get_name_leafdata());
    if (cvcallhistorycalleridblock.is_set || is_set(cvcallhistorycalleridblock.yfilter)) leaf_name_data.push_back(cvcallhistorycalleridblock.get_name_leafdata());
    if (cvcallhistorycallid.is_set || is_set(cvcallhistorycallid.yfilter)) leaf_name_data.push_back(cvcallhistorycallid.get_name_leafdata());
    if (cvcallhistorycallingname.is_set || is_set(cvcallhistorycallingname.yfilter)) leaf_name_data.push_back(cvcallhistorycallingname.get_name_leafdata());
    if (cvcallhistorycodertyperate.is_set || is_set(cvcallhistorycodertyperate.yfilter)) leaf_name_data.push_back(cvcallhistorycodertyperate.get_name_leafdata());
    if (cvcallhistoryconnectionid.is_set || is_set(cvcallhistoryconnectionid.yfilter)) leaf_name_data.push_back(cvcallhistoryconnectionid.get_name_leafdata());
    if (cvcallhistoryfaxtxduration.is_set || is_set(cvcallhistoryfaxtxduration.yfilter)) leaf_name_data.push_back(cvcallhistoryfaxtxduration.get_name_leafdata());
    if (cvcallhistoryimgpagecount.is_set || is_set(cvcallhistoryimgpagecount.yfilter)) leaf_name_data.push_back(cvcallhistoryimgpagecount.get_name_leafdata());
    if (cvcallhistorynoiselevel.is_set || is_set(cvcallhistorynoiselevel.yfilter)) leaf_name_data.push_back(cvcallhistorynoiselevel.get_name_leafdata());
    if (cvcallhistorysessiontarget.is_set || is_set(cvcallhistorysessiontarget.yfilter)) leaf_name_data.push_back(cvcallhistorysessiontarget.get_name_leafdata());
    if (cvcallhistorytxduration.is_set || is_set(cvcallhistorytxduration.yfilter)) leaf_name_data.push_back(cvcallhistorytxduration.get_name_leafdata());
    if (cvcallhistoryvoicetxduration.is_set || is_set(cvcallhistoryvoicetxduration.yfilter)) leaf_name_data.push_back(cvcallhistoryvoicetxduration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
        ccallhistoryindex.value_namespace = name_space;
        ccallhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryAccountCode")
    {
        cvcallhistoryaccountcode = value;
        cvcallhistoryaccountcode.value_namespace = name_space;
        cvcallhistoryaccountcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryACOMLevel")
    {
        cvcallhistoryacomlevel = value;
        cvcallhistoryacomlevel.value_namespace = name_space;
        cvcallhistoryacomlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryCallerIDBlock")
    {
        cvcallhistorycalleridblock = value;
        cvcallhistorycalleridblock.value_namespace = name_space;
        cvcallhistorycalleridblock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryCallId")
    {
        cvcallhistorycallid = value;
        cvcallhistorycallid.value_namespace = name_space;
        cvcallhistorycallid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryCallingName")
    {
        cvcallhistorycallingname = value;
        cvcallhistorycallingname.value_namespace = name_space;
        cvcallhistorycallingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryCoderTypeRate")
    {
        cvcallhistorycodertyperate = value;
        cvcallhistorycodertyperate.value_namespace = name_space;
        cvcallhistorycodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryConnectionId")
    {
        cvcallhistoryconnectionid = value;
        cvcallhistoryconnectionid.value_namespace = name_space;
        cvcallhistoryconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryFaxTxDuration")
    {
        cvcallhistoryfaxtxduration = value;
        cvcallhistoryfaxtxduration.value_namespace = name_space;
        cvcallhistoryfaxtxduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryImgPageCount")
    {
        cvcallhistoryimgpagecount = value;
        cvcallhistoryimgpagecount.value_namespace = name_space;
        cvcallhistoryimgpagecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryNoiseLevel")
    {
        cvcallhistorynoiselevel = value;
        cvcallhistorynoiselevel.value_namespace = name_space;
        cvcallhistorynoiselevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistorySessionTarget")
    {
        cvcallhistorysessiontarget = value;
        cvcallhistorysessiontarget.value_namespace = name_space;
        cvcallhistorysessiontarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryTxDuration")
    {
        cvcallhistorytxduration = value;
        cvcallhistorytxduration.value_namespace = name_space;
        cvcallhistorytxduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallHistoryVoiceTxDuration")
    {
        cvcallhistoryvoicetxduration = value;
        cvcallhistoryvoicetxduration.value_namespace = name_space;
        cvcallhistoryvoicetxduration.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryAccountCode")
    {
        cvcallhistoryaccountcode.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryACOMLevel")
    {
        cvcallhistoryacomlevel.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryCallerIDBlock")
    {
        cvcallhistorycalleridblock.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryCallId")
    {
        cvcallhistorycallid.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryCallingName")
    {
        cvcallhistorycallingname.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryCoderTypeRate")
    {
        cvcallhistorycodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryConnectionId")
    {
        cvcallhistoryconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryFaxTxDuration")
    {
        cvcallhistoryfaxtxduration.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryImgPageCount")
    {
        cvcallhistoryimgpagecount.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryNoiseLevel")
    {
        cvcallhistorynoiselevel.yfilter = yfilter;
    }
    if(value_path == "cvCallHistorySessionTarget")
    {
        cvcallhistorysessiontarget.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryTxDuration")
    {
        cvcallhistorytxduration.yfilter = yfilter;
    }
    if(value_path == "cvCallHistoryVoiceTxDuration")
    {
        cvcallhistoryvoicetxduration.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cvCallHistoryAccountCode" || name == "cvCallHistoryACOMLevel" || name == "cvCallHistoryCallerIDBlock" || name == "cvCallHistoryCallId" || name == "cvCallHistoryCallingName" || name == "cvCallHistoryCoderTypeRate" || name == "cvCallHistoryConnectionId" || name == "cvCallHistoryFaxTxDuration" || name == "cvCallHistoryImgPageCount" || name == "cvCallHistoryNoiseLevel" || name == "cvCallHistorySessionTarget" || name == "cvCallHistoryTxDuration" || name == "cvCallHistoryVoiceTxDuration")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatstable()
{

    yang_name = "cvCallLegRateStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::~Cvcalllegratestatstable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::has_data() const
{
    for (std::size_t index=0; index<cvcalllegratestatsentry.size(); index++)
    {
        if(cvcalllegratestatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::has_operation() const
{
    for (std::size_t index=0; index<cvcalllegratestatsentry.size(); index++)
    {
        if(cvcalllegratestatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry>();
        c->parent = this;
        cvcalllegratestatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcalllegratestatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallLegRateStatsEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::Cvcalllegratestatsentry()
    :
    cvcalllegratestatsintvldurunits{YType::enumeration, "cvCallLegRateStatsIntvlDurUnits"},
    cvcalllegratestatsintvldur{YType::uint32, "cvCallLegRateStatsIntvlDur"},
    cvcalllegratestatsavgval{YType::uint32, "cvCallLegRateStatsAvgVal"},
    cvcalllegratestatsmaxval{YType::uint32, "cvCallLegRateStatsMaxVal"}
{

    yang_name = "cvCallLegRateStatsEntry"; yang_parent_name = "cvCallLegRateStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::~Cvcalllegratestatsentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::has_data() const
{
    return cvcalllegratestatsintvldurunits.is_set
	|| cvcalllegratestatsintvldur.is_set
	|| cvcalllegratestatsavgval.is_set
	|| cvcalllegratestatsmaxval.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcalllegratestatsintvldurunits.yfilter)
	|| ydk::is_set(cvcalllegratestatsintvldur.yfilter)
	|| ydk::is_set(cvcalllegratestatsavgval.yfilter)
	|| ydk::is_set(cvcalllegratestatsmaxval.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallLegRateStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateStatsEntry" <<"[cvCallLegRateStatsIntvlDurUnits='" <<cvcalllegratestatsintvldurunits <<"']" <<"[cvCallLegRateStatsIntvlDur='" <<cvcalllegratestatsintvldur <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalllegratestatsintvldurunits.is_set || is_set(cvcalllegratestatsintvldurunits.yfilter)) leaf_name_data.push_back(cvcalllegratestatsintvldurunits.get_name_leafdata());
    if (cvcalllegratestatsintvldur.is_set || is_set(cvcalllegratestatsintvldur.yfilter)) leaf_name_data.push_back(cvcalllegratestatsintvldur.get_name_leafdata());
    if (cvcalllegratestatsavgval.is_set || is_set(cvcalllegratestatsavgval.yfilter)) leaf_name_data.push_back(cvcalllegratestatsavgval.get_name_leafdata());
    if (cvcalllegratestatsmaxval.is_set || is_set(cvcalllegratestatsmaxval.yfilter)) leaf_name_data.push_back(cvcalllegratestatsmaxval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallLegRateStatsIntvlDurUnits")
    {
        cvcalllegratestatsintvldurunits = value;
        cvcalllegratestatsintvldurunits.value_namespace = name_space;
        cvcalllegratestatsintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallLegRateStatsIntvlDur")
    {
        cvcalllegratestatsintvldur = value;
        cvcalllegratestatsintvldur.value_namespace = name_space;
        cvcalllegratestatsintvldur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallLegRateStatsAvgVal")
    {
        cvcalllegratestatsavgval = value;
        cvcalllegratestatsavgval.value_namespace = name_space;
        cvcalllegratestatsavgval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallLegRateStatsMaxVal")
    {
        cvcalllegratestatsmaxval = value;
        cvcalllegratestatsmaxval.value_namespace = name_space;
        cvcalllegratestatsmaxval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallLegRateStatsIntvlDurUnits")
    {
        cvcalllegratestatsintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvCallLegRateStatsIntvlDur")
    {
        cvcalllegratestatsintvldur.yfilter = yfilter;
    }
    if(value_path == "cvCallLegRateStatsAvgVal")
    {
        cvcalllegratestatsavgval.yfilter = yfilter;
    }
    if(value_path == "cvCallLegRateStatsMaxVal")
    {
        cvcalllegratestatsmaxval.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallLegRateStatsIntvlDurUnits" || name == "cvCallLegRateStatsIntvlDur" || name == "cvCallLegRateStatsAvgVal" || name == "cvCallLegRateStatsMaxVal")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmtable()
{

    yang_name = "cvCallLegRateWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::~Cvcalllegratewmtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::has_data() const
{
    for (std::size_t index=0; index<cvcalllegratewmentry.size(); index++)
    {
        if(cvcalllegratewmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::has_operation() const
{
    for (std::size_t index=0; index<cvcalllegratewmentry.size(); index++)
    {
        if(cvcalllegratewmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateWMTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry>();
        c->parent = this;
        cvcalllegratewmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcalllegratewmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallLegRateWMEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::Cvcalllegratewmentry()
    :
    cvcalllegratewmintvldurunits{YType::enumeration, "cvCallLegRateWMIntvlDurUnits"},
    cvcalllegratewmindex{YType::uint32, "cvCallLegRateWMIndex"},
    cvcalllegratewmts{YType::str, "cvCallLegRateWMts"},
    cvcalllegratewmvalue{YType::uint32, "cvCallLegRateWMValue"}
{

    yang_name = "cvCallLegRateWMEntry"; yang_parent_name = "cvCallLegRateWMTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::~Cvcalllegratewmentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::has_data() const
{
    return cvcalllegratewmintvldurunits.is_set
	|| cvcalllegratewmindex.is_set
	|| cvcalllegratewmts.is_set
	|| cvcalllegratewmvalue.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcalllegratewmintvldurunits.yfilter)
	|| ydk::is_set(cvcalllegratewmindex.yfilter)
	|| ydk::is_set(cvcalllegratewmts.yfilter)
	|| ydk::is_set(cvcalllegratewmvalue.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallLegRateWMTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallLegRateWMEntry" <<"[cvCallLegRateWMIntvlDurUnits='" <<cvcalllegratewmintvldurunits <<"']" <<"[cvCallLegRateWMIndex='" <<cvcalllegratewmindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalllegratewmintvldurunits.is_set || is_set(cvcalllegratewmintvldurunits.yfilter)) leaf_name_data.push_back(cvcalllegratewmintvldurunits.get_name_leafdata());
    if (cvcalllegratewmindex.is_set || is_set(cvcalllegratewmindex.yfilter)) leaf_name_data.push_back(cvcalllegratewmindex.get_name_leafdata());
    if (cvcalllegratewmts.is_set || is_set(cvcalllegratewmts.yfilter)) leaf_name_data.push_back(cvcalllegratewmts.get_name_leafdata());
    if (cvcalllegratewmvalue.is_set || is_set(cvcalllegratewmvalue.yfilter)) leaf_name_data.push_back(cvcalllegratewmvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallLegRateWMIntvlDurUnits")
    {
        cvcalllegratewmintvldurunits = value;
        cvcalllegratewmintvldurunits.value_namespace = name_space;
        cvcalllegratewmintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallLegRateWMIndex")
    {
        cvcalllegratewmindex = value;
        cvcalllegratewmindex.value_namespace = name_space;
        cvcalllegratewmindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallLegRateWMts")
    {
        cvcalllegratewmts = value;
        cvcalllegratewmts.value_namespace = name_space;
        cvcalllegratewmts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallLegRateWMValue")
    {
        cvcalllegratewmvalue = value;
        cvcalllegratewmvalue.value_namespace = name_space;
        cvcalllegratewmvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallLegRateWMIntvlDurUnits")
    {
        cvcalllegratewmintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvCallLegRateWMIndex")
    {
        cvcalllegratewmindex.yfilter = yfilter;
    }
    if(value_path == "cvCallLegRateWMts")
    {
        cvcalllegratewmts.yfilter = yfilter;
    }
    if(value_path == "cvCallLegRateWMValue")
    {
        cvcalllegratewmvalue.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallLegRateWMIntvlDurUnits" || name == "cvCallLegRateWMIndex" || name == "cvCallLegRateWMts" || name == "cvCallLegRateWMValue")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::Cvcallratemonitor()
    :
    cvcallrate{YType::uint32, "cvCallRate"},
    cvcallratehiwatermark{YType::uint32, "cvCallRateHiWaterMark"},
    cvcallratemonitorenable{YType::boolean, "cvCallRateMonitorEnable"},
    cvcallratemonitortime{YType::uint32, "cvCallRateMonitorTime"}
{

    yang_name = "cvCallRateMonitor"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::~Cvcallratemonitor()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::has_data() const
{
    return cvcallrate.is_set
	|| cvcallratehiwatermark.is_set
	|| cvcallratemonitorenable.is_set
	|| cvcallratemonitortime.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcallrate.yfilter)
	|| ydk::is_set(cvcallratehiwatermark.yfilter)
	|| ydk::is_set(cvcallratemonitorenable.yfilter)
	|| ydk::is_set(cvcallratemonitortime.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateMonitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallrate.is_set || is_set(cvcallrate.yfilter)) leaf_name_data.push_back(cvcallrate.get_name_leafdata());
    if (cvcallratehiwatermark.is_set || is_set(cvcallratehiwatermark.yfilter)) leaf_name_data.push_back(cvcallratehiwatermark.get_name_leafdata());
    if (cvcallratemonitorenable.is_set || is_set(cvcallratemonitorenable.yfilter)) leaf_name_data.push_back(cvcallratemonitorenable.get_name_leafdata());
    if (cvcallratemonitortime.is_set || is_set(cvcallratemonitortime.yfilter)) leaf_name_data.push_back(cvcallratemonitortime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallRate")
    {
        cvcallrate = value;
        cvcallrate.value_namespace = name_space;
        cvcallrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateHiWaterMark")
    {
        cvcallratehiwatermark = value;
        cvcallratehiwatermark.value_namespace = name_space;
        cvcallratehiwatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateMonitorEnable")
    {
        cvcallratemonitorenable = value;
        cvcallratemonitorenable.value_namespace = name_space;
        cvcallratemonitorenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateMonitorTime")
    {
        cvcallratemonitortime = value;
        cvcallratemonitortime.value_namespace = name_space;
        cvcallratemonitortime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallRate")
    {
        cvcallrate.yfilter = yfilter;
    }
    if(value_path == "cvCallRateHiWaterMark")
    {
        cvcallratehiwatermark.yfilter = yfilter;
    }
    if(value_path == "cvCallRateMonitorEnable")
    {
        cvcallratemonitorenable.yfilter = yfilter;
    }
    if(value_path == "cvCallRateMonitorTime")
    {
        cvcallratemonitortime.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallRate" || name == "cvCallRateHiWaterMark" || name == "cvCallRateMonitorEnable" || name == "cvCallRateMonitorTime")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatstable()
{

    yang_name = "cvCallRateStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::~Cvcallratestatstable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::has_data() const
{
    for (std::size_t index=0; index<cvcallratestatsentry.size(); index++)
    {
        if(cvcallratestatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::has_operation() const
{
    for (std::size_t index=0; index<cvcallratestatsentry.size(); index++)
    {
        if(cvcallratestatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry>();
        c->parent = this;
        cvcallratestatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallratestatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallRateStatsEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::Cvcallratestatsentry()
    :
    cvcallratestatsintvldurunits{YType::enumeration, "cvCallRateStatsIntvlDurUnits"},
    cvcallratestatsintvldur{YType::uint32, "cvCallRateStatsIntvlDur"},
    cvcallratestatsavgval{YType::uint32, "cvCallRateStatsAvgVal"},
    cvcallratestatsmaxval{YType::uint32, "cvCallRateStatsMaxVal"}
{

    yang_name = "cvCallRateStatsEntry"; yang_parent_name = "cvCallRateStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::~Cvcallratestatsentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::has_data() const
{
    return cvcallratestatsintvldurunits.is_set
	|| cvcallratestatsintvldur.is_set
	|| cvcallratestatsavgval.is_set
	|| cvcallratestatsmaxval.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcallratestatsintvldurunits.yfilter)
	|| ydk::is_set(cvcallratestatsintvldur.yfilter)
	|| ydk::is_set(cvcallratestatsavgval.yfilter)
	|| ydk::is_set(cvcallratestatsmaxval.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallRateStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateStatsEntry" <<"[cvCallRateStatsIntvlDurUnits='" <<cvcallratestatsintvldurunits <<"']" <<"[cvCallRateStatsIntvlDur='" <<cvcallratestatsintvldur <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallratestatsintvldurunits.is_set || is_set(cvcallratestatsintvldurunits.yfilter)) leaf_name_data.push_back(cvcallratestatsintvldurunits.get_name_leafdata());
    if (cvcallratestatsintvldur.is_set || is_set(cvcallratestatsintvldur.yfilter)) leaf_name_data.push_back(cvcallratestatsintvldur.get_name_leafdata());
    if (cvcallratestatsavgval.is_set || is_set(cvcallratestatsavgval.yfilter)) leaf_name_data.push_back(cvcallratestatsavgval.get_name_leafdata());
    if (cvcallratestatsmaxval.is_set || is_set(cvcallratestatsmaxval.yfilter)) leaf_name_data.push_back(cvcallratestatsmaxval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallRateStatsIntvlDurUnits")
    {
        cvcallratestatsintvldurunits = value;
        cvcallratestatsintvldurunits.value_namespace = name_space;
        cvcallratestatsintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateStatsIntvlDur")
    {
        cvcallratestatsintvldur = value;
        cvcallratestatsintvldur.value_namespace = name_space;
        cvcallratestatsintvldur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateStatsAvgVal")
    {
        cvcallratestatsavgval = value;
        cvcallratestatsavgval.value_namespace = name_space;
        cvcallratestatsavgval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateStatsMaxVal")
    {
        cvcallratestatsmaxval = value;
        cvcallratestatsmaxval.value_namespace = name_space;
        cvcallratestatsmaxval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallRateStatsIntvlDurUnits")
    {
        cvcallratestatsintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvCallRateStatsIntvlDur")
    {
        cvcallratestatsintvldur.yfilter = yfilter;
    }
    if(value_path == "cvCallRateStatsAvgVal")
    {
        cvcallratestatsavgval.yfilter = yfilter;
    }
    if(value_path == "cvCallRateStatsMaxVal")
    {
        cvcallratestatsmaxval.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallRateStatsIntvlDurUnits" || name == "cvCallRateStatsIntvlDur" || name == "cvCallRateStatsAvgVal" || name == "cvCallRateStatsMaxVal")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmtable()
{

    yang_name = "cvCallRateWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::~Cvcallratewmtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::has_data() const
{
    for (std::size_t index=0; index<cvcallratewmentry.size(); index++)
    {
        if(cvcallratewmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::has_operation() const
{
    for (std::size_t index=0; index<cvcallratewmentry.size(); index++)
    {
        if(cvcallratewmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateWMTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry>();
        c->parent = this;
        cvcallratewmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallratewmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallRateWMEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::Cvcallratewmentry()
    :
    cvcallratewmintvldurunits{YType::enumeration, "cvCallRateWMIntvlDurUnits"},
    cvcallratewmindex{YType::uint32, "cvCallRateWMIndex"},
    cvcallratewmts{YType::str, "cvCallRateWMts"},
    cvcallratewmvalue{YType::uint32, "cvCallRateWMValue"}
{

    yang_name = "cvCallRateWMEntry"; yang_parent_name = "cvCallRateWMTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::~Cvcallratewmentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::has_data() const
{
    return cvcallratewmintvldurunits.is_set
	|| cvcallratewmindex.is_set
	|| cvcallratewmts.is_set
	|| cvcallratewmvalue.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcallratewmintvldurunits.yfilter)
	|| ydk::is_set(cvcallratewmindex.yfilter)
	|| ydk::is_set(cvcallratewmts.yfilter)
	|| ydk::is_set(cvcallratewmvalue.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallRateWMTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallRateWMEntry" <<"[cvCallRateWMIntvlDurUnits='" <<cvcallratewmintvldurunits <<"']" <<"[cvCallRateWMIndex='" <<cvcallratewmindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallratewmintvldurunits.is_set || is_set(cvcallratewmintvldurunits.yfilter)) leaf_name_data.push_back(cvcallratewmintvldurunits.get_name_leafdata());
    if (cvcallratewmindex.is_set || is_set(cvcallratewmindex.yfilter)) leaf_name_data.push_back(cvcallratewmindex.get_name_leafdata());
    if (cvcallratewmts.is_set || is_set(cvcallratewmts.yfilter)) leaf_name_data.push_back(cvcallratewmts.get_name_leafdata());
    if (cvcallratewmvalue.is_set || is_set(cvcallratewmvalue.yfilter)) leaf_name_data.push_back(cvcallratewmvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallRateWMIntvlDurUnits")
    {
        cvcallratewmintvldurunits = value;
        cvcallratewmintvldurunits.value_namespace = name_space;
        cvcallratewmintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateWMIndex")
    {
        cvcallratewmindex = value;
        cvcallratewmindex.value_namespace = name_space;
        cvcallratewmindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateWMts")
    {
        cvcallratewmts = value;
        cvcallratewmts.value_namespace = name_space;
        cvcallratewmts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallRateWMValue")
    {
        cvcallratewmvalue = value;
        cvcallratewmvalue.value_namespace = name_space;
        cvcallratewmvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallRateWMIntvlDurUnits")
    {
        cvcallratewmintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvCallRateWMIndex")
    {
        cvcallratewmindex.yfilter = yfilter;
    }
    if(value_path == "cvCallRateWMts")
    {
        cvcallratewmts.yfilter = yfilter;
    }
    if(value_path == "cvCallRateWMValue")
    {
        cvcallratewmvalue.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallRateWMIntvlDurUnits" || name == "cvCallRateWMIndex" || name == "cvCallRateWMts" || name == "cvCallRateWMValue")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconntable()
{

    yang_name = "cvCallVolConnTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::~Cvcallvolconntable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::has_data() const
{
    for (std::size_t index=0; index<cvcallvolconnentry.size(); index++)
    {
        if(cvcallvolconnentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::has_operation() const
{
    for (std::size_t index=0; index<cvcallvolconnentry.size(); index++)
    {
        if(cvcallvolconnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolConnTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry>();
        c->parent = this;
        cvcallvolconnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallvolconnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallVolConnEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::Cvcallvolconnentry()
    :
    cvcallvolconnindex{YType::enumeration, "cvCallVolConnIndex"},
    cvcallvolconnactiveconnection{YType::uint32, "cvCallVolConnActiveConnection"}
{

    yang_name = "cvCallVolConnEntry"; yang_parent_name = "cvCallVolConnTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::~Cvcallvolconnentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::has_data() const
{
    return cvcallvolconnindex.is_set
	|| cvcallvolconnactiveconnection.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcallvolconnindex.yfilter)
	|| ydk::is_set(cvcallvolconnactiveconnection.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallVolConnTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolConnEntry" <<"[cvCallVolConnIndex='" <<cvcallvolconnindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallvolconnindex.is_set || is_set(cvcallvolconnindex.yfilter)) leaf_name_data.push_back(cvcallvolconnindex.get_name_leafdata());
    if (cvcallvolconnactiveconnection.is_set || is_set(cvcallvolconnactiveconnection.yfilter)) leaf_name_data.push_back(cvcallvolconnactiveconnection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallVolConnIndex")
    {
        cvcallvolconnindex = value;
        cvcallvolconnindex.value_namespace = name_space;
        cvcallvolconnindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallVolConnActiveConnection")
    {
        cvcallvolconnactiveconnection = value;
        cvcallvolconnactiveconnection.value_namespace = name_space;
        cvcallvolconnactiveconnection.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallVolConnIndex")
    {
        cvcallvolconnindex.yfilter = yfilter;
    }
    if(value_path == "cvCallVolConnActiveConnection")
    {
        cvcallvolconnactiveconnection.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallVolConnIndex" || name == "cvCallVolConnActiveConnection")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvoliftable()
{

    yang_name = "cvCallVolIfTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::~Cvcallvoliftable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::has_data() const
{
    for (std::size_t index=0; index<cvcallvolifentry.size(); index++)
    {
        if(cvcallvolifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::has_operation() const
{
    for (std::size_t index=0; index<cvcallvolifentry.size(); index++)
    {
        if(cvcallvolifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry>();
        c->parent = this;
        cvcallvolifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcallvolifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallVolIfEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::Cvcallvolifentry()
    :
    ifindex{YType::str, "ifIndex"},
    cvcallvolmediaincomingcalls{YType::uint32, "cvCallVolMediaIncomingCalls"},
    cvcallvolmediaoutgoingcalls{YType::uint32, "cvCallVolMediaOutgoingCalls"}
{

    yang_name = "cvCallVolIfEntry"; yang_parent_name = "cvCallVolIfTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::~Cvcallvolifentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::has_data() const
{
    return ifindex.is_set
	|| cvcallvolmediaincomingcalls.is_set
	|| cvcallvolmediaoutgoingcalls.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cvcallvolmediaincomingcalls.yfilter)
	|| ydk::is_set(cvcallvolmediaoutgoingcalls.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvCallVolIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolIfEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvcallvolmediaincomingcalls.is_set || is_set(cvcallvolmediaincomingcalls.yfilter)) leaf_name_data.push_back(cvcallvolmediaincomingcalls.get_name_leafdata());
    if (cvcallvolmediaoutgoingcalls.is_set || is_set(cvcallvolmediaoutgoingcalls.yfilter)) leaf_name_data.push_back(cvcallvolmediaoutgoingcalls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallVolMediaIncomingCalls")
    {
        cvcallvolmediaincomingcalls = value;
        cvcallvolmediaincomingcalls.value_namespace = name_space;
        cvcallvolmediaincomingcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallVolMediaOutgoingCalls")
    {
        cvcallvolmediaoutgoingcalls = value;
        cvcallvolmediaoutgoingcalls.value_namespace = name_space;
        cvcallvolmediaoutgoingcalls.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cvCallVolMediaIncomingCalls")
    {
        cvcallvolmediaincomingcalls.yfilter = yfilter;
    }
    if(value_path == "cvCallVolMediaOutgoingCalls")
    {
        cvcallvolmediaoutgoingcalls.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cvCallVolMediaIncomingCalls" || name == "cvCallVolMediaOutgoingCalls")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolume::Cvcallvolume()
    :
    cvcallvolconnmaxcallconnectionlicenese{YType::uint32, "cvCallVolConnMaxCallConnectionLicenese"},
    cvcallvolconntotalactiveconnections{YType::uint32, "cvCallVolConnTotalActiveConnections"}
{

    yang_name = "cvCallVolume"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolume::~Cvcallvolume()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolume::has_data() const
{
    return cvcallvolconnmaxcallconnectionlicenese.is_set
	|| cvcallvolconntotalactiveconnections.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolume::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcallvolconnmaxcallconnectionlicenese.yfilter)
	|| ydk::is_set(cvcallvolconntotalactiveconnections.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolume::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolume";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallvolume::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallvolconnmaxcallconnectionlicenese.is_set || is_set(cvcallvolconnmaxcallconnectionlicenese.yfilter)) leaf_name_data.push_back(cvcallvolconnmaxcallconnectionlicenese.get_name_leafdata());
    if (cvcallvolconntotalactiveconnections.is_set || is_set(cvcallvolconntotalactiveconnections.yfilter)) leaf_name_data.push_back(cvcallvolconntotalactiveconnections.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallvolume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallvolume::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolume::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallVolConnMaxCallConnectionLicenese")
    {
        cvcallvolconnmaxcallconnectionlicenese = value;
        cvcallvolconnmaxcallconnectionlicenese.value_namespace = name_space;
        cvcallvolconnmaxcallconnectionlicenese.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallVolConnTotalActiveConnections")
    {
        cvcallvolconntotalactiveconnections = value;
        cvcallvolconntotalactiveconnections.value_namespace = name_space;
        cvcallvolconntotalactiveconnections.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolume::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallVolConnMaxCallConnectionLicenese")
    {
        cvcallvolconnmaxcallconnectionlicenese.yfilter = yfilter;
    }
    if(value_path == "cvCallVolConnTotalActiveConnections")
    {
        cvcallvolconntotalactiveconnections.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolume::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallVolConnMaxCallConnectionLicenese" || name == "cvCallVolConnTotalActiveConnections")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::Cvcallvolumestatshistory()
    :
    cvcalldurationstatsthreshold{YType::uint32, "cvCallDurationStatsThreshold"},
    cvcallvolumewmtablesize{YType::uint32, "cvCallVolumeWMTableSize"}
{

    yang_name = "cvCallVolumeStatsHistory"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::~Cvcallvolumestatshistory()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::has_data() const
{
    return cvcalldurationstatsthreshold.is_set
	|| cvcallvolumewmtablesize.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcalldurationstatsthreshold.yfilter)
	|| ydk::is_set(cvcallvolumewmtablesize.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCallVolumeStatsHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcalldurationstatsthreshold.is_set || is_set(cvcalldurationstatsthreshold.yfilter)) leaf_name_data.push_back(cvcalldurationstatsthreshold.get_name_leafdata());
    if (cvcallvolumewmtablesize.is_set || is_set(cvcallvolumewmtablesize.yfilter)) leaf_name_data.push_back(cvcallvolumewmtablesize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallDurationStatsThreshold")
    {
        cvcalldurationstatsthreshold = value;
        cvcalldurationstatsthreshold.value_namespace = name_space;
        cvcalldurationstatsthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallVolumeWMTableSize")
    {
        cvcallvolumewmtablesize = value;
        cvcallvolumewmtablesize.value_namespace = name_space;
        cvcallvolumewmtablesize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallDurationStatsThreshold")
    {
        cvcalldurationstatsthreshold.yfilter = yfilter;
    }
    if(value_path == "cvCallVolumeWMTableSize")
    {
        cvcallvolumewmtablesize.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallDurationStatsThreshold" || name == "cvCallVolumeWMTableSize")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::Cvgatewaycallactive()
    :
    cvcallactiveds0s{YType::uint32, "cvCallActiveDS0s"},
    cvcallactiveds0shighnotifyenable{YType::boolean, "cvCallActiveDS0sHighNotifyEnable"},
    cvcallactiveds0shighthreshold{YType::uint32, "cvCallActiveDS0sHighThreshold"},
    cvcallactiveds0slownotifyenable{YType::boolean, "cvCallActiveDS0sLowNotifyEnable"},
    cvcallactiveds0slowthreshold{YType::uint32, "cvCallActiveDS0sLowThreshold"}
{

    yang_name = "cvGatewayCallActive"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::~Cvgatewaycallactive()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::has_data() const
{
    return cvcallactiveds0s.is_set
	|| cvcallactiveds0shighnotifyenable.is_set
	|| cvcallactiveds0shighthreshold.is_set
	|| cvcallactiveds0slownotifyenable.is_set
	|| cvcallactiveds0slowthreshold.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvcallactiveds0s.yfilter)
	|| ydk::is_set(cvcallactiveds0shighnotifyenable.yfilter)
	|| ydk::is_set(cvcallactiveds0shighthreshold.yfilter)
	|| ydk::is_set(cvcallactiveds0slownotifyenable.yfilter)
	|| ydk::is_set(cvcallactiveds0slowthreshold.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvGatewayCallActive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvcallactiveds0s.is_set || is_set(cvcallactiveds0s.yfilter)) leaf_name_data.push_back(cvcallactiveds0s.get_name_leafdata());
    if (cvcallactiveds0shighnotifyenable.is_set || is_set(cvcallactiveds0shighnotifyenable.yfilter)) leaf_name_data.push_back(cvcallactiveds0shighnotifyenable.get_name_leafdata());
    if (cvcallactiveds0shighthreshold.is_set || is_set(cvcallactiveds0shighthreshold.yfilter)) leaf_name_data.push_back(cvcallactiveds0shighthreshold.get_name_leafdata());
    if (cvcallactiveds0slownotifyenable.is_set || is_set(cvcallactiveds0slownotifyenable.yfilter)) leaf_name_data.push_back(cvcallactiveds0slownotifyenable.get_name_leafdata());
    if (cvcallactiveds0slowthreshold.is_set || is_set(cvcallactiveds0slowthreshold.yfilter)) leaf_name_data.push_back(cvcallactiveds0slowthreshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvCallActiveDS0s")
    {
        cvcallactiveds0s = value;
        cvcallactiveds0s.value_namespace = name_space;
        cvcallactiveds0s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveDS0sHighNotifyEnable")
    {
        cvcallactiveds0shighnotifyenable = value;
        cvcallactiveds0shighnotifyenable.value_namespace = name_space;
        cvcallactiveds0shighnotifyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveDS0sHighThreshold")
    {
        cvcallactiveds0shighthreshold = value;
        cvcallactiveds0shighthreshold.value_namespace = name_space;
        cvcallactiveds0shighthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveDS0sLowNotifyEnable")
    {
        cvcallactiveds0slownotifyenable = value;
        cvcallactiveds0slownotifyenable.value_namespace = name_space;
        cvcallactiveds0slownotifyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallActiveDS0sLowThreshold")
    {
        cvcallactiveds0slowthreshold = value;
        cvcallactiveds0slowthreshold.value_namespace = name_space;
        cvcallactiveds0slowthreshold.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvCallActiveDS0s")
    {
        cvcallactiveds0s.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveDS0sHighNotifyEnable")
    {
        cvcallactiveds0shighnotifyenable.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveDS0sHighThreshold")
    {
        cvcallactiveds0shighthreshold.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveDS0sLowNotifyEnable")
    {
        cvcallactiveds0slownotifyenable.yfilter = yfilter;
    }
    if(value_path == "cvCallActiveDS0sLowThreshold")
    {
        cvcallactiveds0slowthreshold.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCallActiveDS0s" || name == "cvCallActiveDS0sHighNotifyEnable" || name == "cvCallActiveDS0sHighThreshold" || name == "cvCallActiveDS0sLowNotifyEnable" || name == "cvCallActiveDS0sLowThreshold")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::Cvgeneralconfiguration()
    :
    cvgeneraldscppolicynotificationenable{YType::boolean, "cvGeneralDSCPPolicyNotificationEnable"},
    cvgeneralfallbacknotificationenable{YType::boolean, "cvGeneralFallbackNotificationEnable"},
    cvgeneralmediapolicynotificationenable{YType::boolean, "cvGeneralMediaPolicyNotificationEnable"},
    cvgeneralpoorqovnotificationenable{YType::boolean, "cvGeneralPoorQoVNotificationEnable"}
{

    yang_name = "cvGeneralConfiguration"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::~Cvgeneralconfiguration()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::has_data() const
{
    return cvgeneraldscppolicynotificationenable.is_set
	|| cvgeneralfallbacknotificationenable.is_set
	|| cvgeneralmediapolicynotificationenable.is_set
	|| cvgeneralpoorqovnotificationenable.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvgeneraldscppolicynotificationenable.yfilter)
	|| ydk::is_set(cvgeneralfallbacknotificationenable.yfilter)
	|| ydk::is_set(cvgeneralmediapolicynotificationenable.yfilter)
	|| ydk::is_set(cvgeneralpoorqovnotificationenable.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvGeneralConfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvgeneraldscppolicynotificationenable.is_set || is_set(cvgeneraldscppolicynotificationenable.yfilter)) leaf_name_data.push_back(cvgeneraldscppolicynotificationenable.get_name_leafdata());
    if (cvgeneralfallbacknotificationenable.is_set || is_set(cvgeneralfallbacknotificationenable.yfilter)) leaf_name_data.push_back(cvgeneralfallbacknotificationenable.get_name_leafdata());
    if (cvgeneralmediapolicynotificationenable.is_set || is_set(cvgeneralmediapolicynotificationenable.yfilter)) leaf_name_data.push_back(cvgeneralmediapolicynotificationenable.get_name_leafdata());
    if (cvgeneralpoorqovnotificationenable.is_set || is_set(cvgeneralpoorqovnotificationenable.yfilter)) leaf_name_data.push_back(cvgeneralpoorqovnotificationenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvGeneralDSCPPolicyNotificationEnable")
    {
        cvgeneraldscppolicynotificationenable = value;
        cvgeneraldscppolicynotificationenable.value_namespace = name_space;
        cvgeneraldscppolicynotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvGeneralFallbackNotificationEnable")
    {
        cvgeneralfallbacknotificationenable = value;
        cvgeneralfallbacknotificationenable.value_namespace = name_space;
        cvgeneralfallbacknotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvGeneralMediaPolicyNotificationEnable")
    {
        cvgeneralmediapolicynotificationenable = value;
        cvgeneralmediapolicynotificationenable.value_namespace = name_space;
        cvgeneralmediapolicynotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvGeneralPoorQoVNotificationEnable")
    {
        cvgeneralpoorqovnotificationenable = value;
        cvgeneralpoorqovnotificationenable.value_namespace = name_space;
        cvgeneralpoorqovnotificationenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvGeneralDSCPPolicyNotificationEnable")
    {
        cvgeneraldscppolicynotificationenable.yfilter = yfilter;
    }
    if(value_path == "cvGeneralFallbackNotificationEnable")
    {
        cvgeneralfallbacknotificationenable.yfilter = yfilter;
    }
    if(value_path == "cvGeneralMediaPolicyNotificationEnable")
    {
        cvgeneralmediapolicynotificationenable.yfilter = yfilter;
    }
    if(value_path == "cvGeneralPoorQoVNotificationEnable")
    {
        cvgeneralpoorqovnotificationenable.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvGeneralDSCPPolicyNotificationEnable" || name == "cvGeneralFallbackNotificationEnable" || name == "cvGeneralMediaPolicyNotificationEnable" || name == "cvGeneralPoorQoVNotificationEnable")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgtable()
{

    yang_name = "cvPeerCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::~Cvpeercfgtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::has_data() const
{
    for (std::size_t index=0; index<cvpeercfgentry.size(); index++)
    {
        if(cvpeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvpeercfgentry.size(); index++)
    {
        if(cvpeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry>();
        c->parent = this;
        cvpeercfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpeercfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvPeerCfgEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgentry()
    :
    cvpeercfgindex{YType::int32, "cvPeerCfgIndex"},
    cvcallvolpeerincomingcalls{YType::uint32, "cvCallVolPeerIncomingCalls"},
    cvcallvolpeeroutgoingcalls{YType::uint32, "cvCallVolPeerOutgoingCalls"},
    cvpeercfgifindex{YType::int32, "cvPeerCfgIfIndex"},
    cvpeercfgpeertype{YType::enumeration, "cvPeerCfgPeerType"},
    cvpeercfgrowstatus{YType::enumeration, "cvPeerCfgRowStatus"},
    cvpeercfgtype{YType::enumeration, "cvPeerCfgType"}
{

    yang_name = "cvPeerCfgEntry"; yang_parent_name = "cvPeerCfgTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::~Cvpeercfgentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::has_data() const
{
    return cvpeercfgindex.is_set
	|| cvcallvolpeerincomingcalls.is_set
	|| cvcallvolpeeroutgoingcalls.is_set
	|| cvpeercfgifindex.is_set
	|| cvpeercfgpeertype.is_set
	|| cvpeercfgrowstatus.is_set
	|| cvpeercfgtype.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpeercfgindex.yfilter)
	|| ydk::is_set(cvcallvolpeerincomingcalls.yfilter)
	|| ydk::is_set(cvcallvolpeeroutgoingcalls.yfilter)
	|| ydk::is_set(cvpeercfgifindex.yfilter)
	|| ydk::is_set(cvpeercfgpeertype.yfilter)
	|| ydk::is_set(cvpeercfgrowstatus.yfilter)
	|| ydk::is_set(cvpeercfgtype.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvPeerCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCfgEntry" <<"[cvPeerCfgIndex='" <<cvpeercfgindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpeercfgindex.is_set || is_set(cvpeercfgindex.yfilter)) leaf_name_data.push_back(cvpeercfgindex.get_name_leafdata());
    if (cvcallvolpeerincomingcalls.is_set || is_set(cvcallvolpeerincomingcalls.yfilter)) leaf_name_data.push_back(cvcallvolpeerincomingcalls.get_name_leafdata());
    if (cvcallvolpeeroutgoingcalls.is_set || is_set(cvcallvolpeeroutgoingcalls.yfilter)) leaf_name_data.push_back(cvcallvolpeeroutgoingcalls.get_name_leafdata());
    if (cvpeercfgifindex.is_set || is_set(cvpeercfgifindex.yfilter)) leaf_name_data.push_back(cvpeercfgifindex.get_name_leafdata());
    if (cvpeercfgpeertype.is_set || is_set(cvpeercfgpeertype.yfilter)) leaf_name_data.push_back(cvpeercfgpeertype.get_name_leafdata());
    if (cvpeercfgrowstatus.is_set || is_set(cvpeercfgrowstatus.yfilter)) leaf_name_data.push_back(cvpeercfgrowstatus.get_name_leafdata());
    if (cvpeercfgtype.is_set || is_set(cvpeercfgtype.yfilter)) leaf_name_data.push_back(cvpeercfgtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvPeerCfgIndex")
    {
        cvpeercfgindex = value;
        cvpeercfgindex.value_namespace = name_space;
        cvpeercfgindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallVolPeerIncomingCalls")
    {
        cvcallvolpeerincomingcalls = value;
        cvcallvolpeerincomingcalls.value_namespace = name_space;
        cvcallvolpeerincomingcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCallVolPeerOutgoingCalls")
    {
        cvcallvolpeeroutgoingcalls = value;
        cvcallvolpeeroutgoingcalls.value_namespace = name_space;
        cvcallvolpeeroutgoingcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCfgIfIndex")
    {
        cvpeercfgifindex = value;
        cvpeercfgifindex.value_namespace = name_space;
        cvpeercfgifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCfgPeerType")
    {
        cvpeercfgpeertype = value;
        cvpeercfgpeertype.value_namespace = name_space;
        cvpeercfgpeertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCfgRowStatus")
    {
        cvpeercfgrowstatus = value;
        cvpeercfgrowstatus.value_namespace = name_space;
        cvpeercfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCfgType")
    {
        cvpeercfgtype = value;
        cvpeercfgtype.value_namespace = name_space;
        cvpeercfgtype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvPeerCfgIndex")
    {
        cvpeercfgindex.yfilter = yfilter;
    }
    if(value_path == "cvCallVolPeerIncomingCalls")
    {
        cvcallvolpeerincomingcalls.yfilter = yfilter;
    }
    if(value_path == "cvCallVolPeerOutgoingCalls")
    {
        cvcallvolpeeroutgoingcalls.yfilter = yfilter;
    }
    if(value_path == "cvPeerCfgIfIndex")
    {
        cvpeercfgifindex.yfilter = yfilter;
    }
    if(value_path == "cvPeerCfgPeerType")
    {
        cvpeercfgpeertype.yfilter = yfilter;
    }
    if(value_path == "cvPeerCfgRowStatus")
    {
        cvpeercfgrowstatus.yfilter = yfilter;
    }
    if(value_path == "cvPeerCfgType")
    {
        cvpeercfgtype.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvPeerCfgIndex" || name == "cvCallVolPeerIncomingCalls" || name == "cvCallVolPeerOutgoingCalls" || name == "cvPeerCfgIfIndex" || name == "cvPeerCfgPeerType" || name == "cvPeerCfgRowStatus" || name == "cvPeerCfgType")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgtable()
{

    yang_name = "cvPeerCommonCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::~Cvpeercommoncfgtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::has_data() const
{
    for (std::size_t index=0; index<cvpeercommoncfgentry.size(); index++)
    {
        if(cvpeercommoncfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvpeercommoncfgentry.size(); index++)
    {
        if(cvpeercommoncfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCommonCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry>();
        c->parent = this;
        cvpeercommoncfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpeercommoncfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvPeerCommonCfgEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::Cvpeercommoncfgentry()
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

    yang_name = "cvPeerCommonCfgEntry"; yang_parent_name = "cvPeerCommonCfgTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::~Cvpeercommoncfgentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cvpeercommoncfgapplicationname.yfilter)
	|| ydk::is_set(cvpeercommoncfgdnismappingname.yfilter)
	|| ydk::is_set(cvpeercommoncfghuntstop.yfilter)
	|| ydk::is_set(cvpeercommoncfgincomingdnisdigits.yfilter)
	|| ydk::is_set(cvpeercommoncfgmaxconnections.yfilter)
	|| ydk::is_set(cvpeercommoncfgpreference.yfilter)
	|| ydk::is_set(cvpeercommoncfgsourcecarrierid.yfilter)
	|| ydk::is_set(cvpeercommoncfgsourcetrunkgrplabel.yfilter)
	|| ydk::is_set(cvpeercommoncfgtargetcarrierid.yfilter)
	|| ydk::is_set(cvpeercommoncfgtargettrunkgrplabel.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvPeerCommonCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvPeerCommonCfgEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvpeercommoncfgapplicationname.is_set || is_set(cvpeercommoncfgapplicationname.yfilter)) leaf_name_data.push_back(cvpeercommoncfgapplicationname.get_name_leafdata());
    if (cvpeercommoncfgdnismappingname.is_set || is_set(cvpeercommoncfgdnismappingname.yfilter)) leaf_name_data.push_back(cvpeercommoncfgdnismappingname.get_name_leafdata());
    if (cvpeercommoncfghuntstop.is_set || is_set(cvpeercommoncfghuntstop.yfilter)) leaf_name_data.push_back(cvpeercommoncfghuntstop.get_name_leafdata());
    if (cvpeercommoncfgincomingdnisdigits.is_set || is_set(cvpeercommoncfgincomingdnisdigits.yfilter)) leaf_name_data.push_back(cvpeercommoncfgincomingdnisdigits.get_name_leafdata());
    if (cvpeercommoncfgmaxconnections.is_set || is_set(cvpeercommoncfgmaxconnections.yfilter)) leaf_name_data.push_back(cvpeercommoncfgmaxconnections.get_name_leafdata());
    if (cvpeercommoncfgpreference.is_set || is_set(cvpeercommoncfgpreference.yfilter)) leaf_name_data.push_back(cvpeercommoncfgpreference.get_name_leafdata());
    if (cvpeercommoncfgsourcecarrierid.is_set || is_set(cvpeercommoncfgsourcecarrierid.yfilter)) leaf_name_data.push_back(cvpeercommoncfgsourcecarrierid.get_name_leafdata());
    if (cvpeercommoncfgsourcetrunkgrplabel.is_set || is_set(cvpeercommoncfgsourcetrunkgrplabel.yfilter)) leaf_name_data.push_back(cvpeercommoncfgsourcetrunkgrplabel.get_name_leafdata());
    if (cvpeercommoncfgtargetcarrierid.is_set || is_set(cvpeercommoncfgtargetcarrierid.yfilter)) leaf_name_data.push_back(cvpeercommoncfgtargetcarrierid.get_name_leafdata());
    if (cvpeercommoncfgtargettrunkgrplabel.is_set || is_set(cvpeercommoncfgtargettrunkgrplabel.yfilter)) leaf_name_data.push_back(cvpeercommoncfgtargettrunkgrplabel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgApplicationName")
    {
        cvpeercommoncfgapplicationname = value;
        cvpeercommoncfgapplicationname.value_namespace = name_space;
        cvpeercommoncfgapplicationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgDnisMappingName")
    {
        cvpeercommoncfgdnismappingname = value;
        cvpeercommoncfgdnismappingname.value_namespace = name_space;
        cvpeercommoncfgdnismappingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgHuntStop")
    {
        cvpeercommoncfghuntstop = value;
        cvpeercommoncfghuntstop.value_namespace = name_space;
        cvpeercommoncfghuntstop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgIncomingDnisDigits")
    {
        cvpeercommoncfgincomingdnisdigits = value;
        cvpeercommoncfgincomingdnisdigits.value_namespace = name_space;
        cvpeercommoncfgincomingdnisdigits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgMaxConnections")
    {
        cvpeercommoncfgmaxconnections = value;
        cvpeercommoncfgmaxconnections.value_namespace = name_space;
        cvpeercommoncfgmaxconnections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgPreference")
    {
        cvpeercommoncfgpreference = value;
        cvpeercommoncfgpreference.value_namespace = name_space;
        cvpeercommoncfgpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgSourceCarrierId")
    {
        cvpeercommoncfgsourcecarrierid = value;
        cvpeercommoncfgsourcecarrierid.value_namespace = name_space;
        cvpeercommoncfgsourcecarrierid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgSourceTrunkGrpLabel")
    {
        cvpeercommoncfgsourcetrunkgrplabel = value;
        cvpeercommoncfgsourcetrunkgrplabel.value_namespace = name_space;
        cvpeercommoncfgsourcetrunkgrplabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgTargetCarrierId")
    {
        cvpeercommoncfgtargetcarrierid = value;
        cvpeercommoncfgtargetcarrierid.value_namespace = name_space;
        cvpeercommoncfgtargetcarrierid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvPeerCommonCfgTargetTrunkGrpLabel")
    {
        cvpeercommoncfgtargettrunkgrplabel = value;
        cvpeercommoncfgtargettrunkgrplabel.value_namespace = name_space;
        cvpeercommoncfgtargettrunkgrplabel.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgApplicationName")
    {
        cvpeercommoncfgapplicationname.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgDnisMappingName")
    {
        cvpeercommoncfgdnismappingname.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgHuntStop")
    {
        cvpeercommoncfghuntstop.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgIncomingDnisDigits")
    {
        cvpeercommoncfgincomingdnisdigits.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgMaxConnections")
    {
        cvpeercommoncfgmaxconnections.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgPreference")
    {
        cvpeercommoncfgpreference.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgSourceCarrierId")
    {
        cvpeercommoncfgsourcecarrierid.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgSourceTrunkGrpLabel")
    {
        cvpeercommoncfgsourcetrunkgrplabel.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgTargetCarrierId")
    {
        cvpeercommoncfgtargetcarrierid.yfilter = yfilter;
    }
    if(value_path == "cvPeerCommonCfgTargetTrunkGrpLabel")
    {
        cvpeercommoncfgtargettrunkgrplabel.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cvPeerCommonCfgApplicationName" || name == "cvPeerCommonCfgDnisMappingName" || name == "cvPeerCommonCfgHuntStop" || name == "cvPeerCommonCfgIncomingDnisDigits" || name == "cvPeerCommonCfgMaxConnections" || name == "cvPeerCommonCfgPreference" || name == "cvPeerCommonCfgSourceCarrierId" || name == "cvPeerCommonCfgSourceTrunkGrpLabel" || name == "cvPeerCommonCfgTargetCarrierId" || name == "cvPeerCommonCfgTargetTrunkGrpLabel")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatstable()
{

    yang_name = "cvSipMsgRateStatsTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::~Cvsipmsgratestatstable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::has_data() const
{
    for (std::size_t index=0; index<cvsipmsgratestatsentry.size(); index++)
    {
        if(cvsipmsgratestatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::has_operation() const
{
    for (std::size_t index=0; index<cvsipmsgratestatsentry.size(); index++)
    {
        if(cvsipmsgratestatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry>();
        c->parent = this;
        cvsipmsgratestatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvsipmsgratestatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvSipMsgRateStatsEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::Cvsipmsgratestatsentry()
    :
    cvsipmsgratestatsintvldurunits{YType::enumeration, "cvSipMsgRateStatsIntvlDurUnits"},
    cvsipmsgratestatsintvldur{YType::uint32, "cvSipMsgRateStatsIntvlDur"},
    cvsipmsgratestatsavgval{YType::uint32, "cvSipMsgRateStatsAvgVal"},
    cvsipmsgratestatsmaxval{YType::uint32, "cvSipMsgRateStatsMaxVal"}
{

    yang_name = "cvSipMsgRateStatsEntry"; yang_parent_name = "cvSipMsgRateStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::~Cvsipmsgratestatsentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::has_data() const
{
    return cvsipmsgratestatsintvldurunits.is_set
	|| cvsipmsgratestatsintvldur.is_set
	|| cvsipmsgratestatsavgval.is_set
	|| cvsipmsgratestatsmaxval.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvsipmsgratestatsintvldurunits.yfilter)
	|| ydk::is_set(cvsipmsgratestatsintvldur.yfilter)
	|| ydk::is_set(cvsipmsgratestatsavgval.yfilter)
	|| ydk::is_set(cvsipmsgratestatsmaxval.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvSipMsgRateStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateStatsEntry" <<"[cvSipMsgRateStatsIntvlDurUnits='" <<cvsipmsgratestatsintvldurunits <<"']" <<"[cvSipMsgRateStatsIntvlDur='" <<cvsipmsgratestatsintvldur <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvsipmsgratestatsintvldurunits.is_set || is_set(cvsipmsgratestatsintvldurunits.yfilter)) leaf_name_data.push_back(cvsipmsgratestatsintvldurunits.get_name_leafdata());
    if (cvsipmsgratestatsintvldur.is_set || is_set(cvsipmsgratestatsintvldur.yfilter)) leaf_name_data.push_back(cvsipmsgratestatsintvldur.get_name_leafdata());
    if (cvsipmsgratestatsavgval.is_set || is_set(cvsipmsgratestatsavgval.yfilter)) leaf_name_data.push_back(cvsipmsgratestatsavgval.get_name_leafdata());
    if (cvsipmsgratestatsmaxval.is_set || is_set(cvsipmsgratestatsmaxval.yfilter)) leaf_name_data.push_back(cvsipmsgratestatsmaxval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvSipMsgRateStatsIntvlDurUnits")
    {
        cvsipmsgratestatsintvldurunits = value;
        cvsipmsgratestatsintvldurunits.value_namespace = name_space;
        cvsipmsgratestatsintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvSipMsgRateStatsIntvlDur")
    {
        cvsipmsgratestatsintvldur = value;
        cvsipmsgratestatsintvldur.value_namespace = name_space;
        cvsipmsgratestatsintvldur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvSipMsgRateStatsAvgVal")
    {
        cvsipmsgratestatsavgval = value;
        cvsipmsgratestatsavgval.value_namespace = name_space;
        cvsipmsgratestatsavgval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvSipMsgRateStatsMaxVal")
    {
        cvsipmsgratestatsmaxval = value;
        cvsipmsgratestatsmaxval.value_namespace = name_space;
        cvsipmsgratestatsmaxval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvSipMsgRateStatsIntvlDurUnits")
    {
        cvsipmsgratestatsintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvSipMsgRateStatsIntvlDur")
    {
        cvsipmsgratestatsintvldur.yfilter = yfilter;
    }
    if(value_path == "cvSipMsgRateStatsAvgVal")
    {
        cvsipmsgratestatsavgval.yfilter = yfilter;
    }
    if(value_path == "cvSipMsgRateStatsMaxVal")
    {
        cvsipmsgratestatsmaxval.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvSipMsgRateStatsIntvlDurUnits" || name == "cvSipMsgRateStatsIntvlDur" || name == "cvSipMsgRateStatsAvgVal" || name == "cvSipMsgRateStatsMaxVal")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmtable()
{

    yang_name = "cvSipMsgRateWMTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::~Cvsipmsgratewmtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::has_data() const
{
    for (std::size_t index=0; index<cvsipmsgratewmentry.size(); index++)
    {
        if(cvsipmsgratewmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::has_operation() const
{
    for (std::size_t index=0; index<cvsipmsgratewmentry.size(); index++)
    {
        if(cvsipmsgratewmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateWMTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry>();
        c->parent = this;
        cvsipmsgratewmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvsipmsgratewmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvSipMsgRateWMEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::Cvsipmsgratewmentry()
    :
    cvsipmsgratewmintvldurunits{YType::enumeration, "cvSipMsgRateWMIntvlDurUnits"},
    cvsipmsgratewmindex{YType::uint32, "cvSipMsgRateWMIndex"},
    cvsipmsgratewmts{YType::str, "cvSipMsgRateWMts"},
    cvsipmsgratewmvalue{YType::uint32, "cvSipMsgRateWMValue"}
{

    yang_name = "cvSipMsgRateWMEntry"; yang_parent_name = "cvSipMsgRateWMTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::~Cvsipmsgratewmentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::has_data() const
{
    return cvsipmsgratewmintvldurunits.is_set
	|| cvsipmsgratewmindex.is_set
	|| cvsipmsgratewmts.is_set
	|| cvsipmsgratewmvalue.is_set;
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvsipmsgratewmintvldurunits.yfilter)
	|| ydk::is_set(cvsipmsgratewmindex.yfilter)
	|| ydk::is_set(cvsipmsgratewmts.yfilter)
	|| ydk::is_set(cvsipmsgratewmvalue.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvSipMsgRateWMTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvSipMsgRateWMEntry" <<"[cvSipMsgRateWMIntvlDurUnits='" <<cvsipmsgratewmintvldurunits <<"']" <<"[cvSipMsgRateWMIndex='" <<cvsipmsgratewmindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvsipmsgratewmintvldurunits.is_set || is_set(cvsipmsgratewmintvldurunits.yfilter)) leaf_name_data.push_back(cvsipmsgratewmintvldurunits.get_name_leafdata());
    if (cvsipmsgratewmindex.is_set || is_set(cvsipmsgratewmindex.yfilter)) leaf_name_data.push_back(cvsipmsgratewmindex.get_name_leafdata());
    if (cvsipmsgratewmts.is_set || is_set(cvsipmsgratewmts.yfilter)) leaf_name_data.push_back(cvsipmsgratewmts.get_name_leafdata());
    if (cvsipmsgratewmvalue.is_set || is_set(cvsipmsgratewmvalue.yfilter)) leaf_name_data.push_back(cvsipmsgratewmvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvSipMsgRateWMIntvlDurUnits")
    {
        cvsipmsgratewmintvldurunits = value;
        cvsipmsgratewmintvldurunits.value_namespace = name_space;
        cvsipmsgratewmintvldurunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvSipMsgRateWMIndex")
    {
        cvsipmsgratewmindex = value;
        cvsipmsgratewmindex.value_namespace = name_space;
        cvsipmsgratewmindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvSipMsgRateWMts")
    {
        cvsipmsgratewmts = value;
        cvsipmsgratewmts.value_namespace = name_space;
        cvsipmsgratewmts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvSipMsgRateWMValue")
    {
        cvsipmsgratewmvalue = value;
        cvsipmsgratewmvalue.value_namespace = name_space;
        cvsipmsgratewmvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvSipMsgRateWMIntvlDurUnits")
    {
        cvsipmsgratewmintvldurunits.yfilter = yfilter;
    }
    if(value_path == "cvSipMsgRateWMIndex")
    {
        cvsipmsgratewmindex.yfilter = yfilter;
    }
    if(value_path == "cvSipMsgRateWMts")
    {
        cvsipmsgratewmts.yfilter = yfilter;
    }
    if(value_path == "cvSipMsgRateWMValue")
    {
        cvsipmsgratewmvalue.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvSipMsgRateWMIntvlDurUnits" || name == "cvSipMsgRateWMIndex" || name == "cvSipMsgRateWMts" || name == "cvSipMsgRateWMValue")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgtable()
{

    yang_name = "cvVoicePeerCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::~Cvvoicepeercfgtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::has_data() const
{
    for (std::size_t index=0; index<cvvoicepeercfgentry.size(); index++)
    {
        if(cvvoicepeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvvoicepeercfgentry.size(); index++)
    {
        if(cvvoicepeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoicePeerCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry>();
        c->parent = this;
        cvvoicepeercfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoicepeercfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvVoicePeerCfgEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgentry()
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

    yang_name = "cvVoicePeerCfgEntry"; yang_parent_name = "cvVoicePeerCfgTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::~Cvvoicepeercfgentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cvvoicepeercfgcasgroup.yfilter)
	|| ydk::is_set(cvvoicepeercfgdialdigitsprefix.yfilter)
	|| ydk::is_set(cvvoicepeercfgdidcallenable.yfilter)
	|| ydk::is_set(cvvoicepeercfgechocancellertest.yfilter)
	|| ydk::is_set(cvvoicepeercfgforwarddigits.yfilter)
	|| ydk::is_set(cvvoicepeercfgregistere164.yfilter)
	|| ydk::is_set(cvvoicepeercfgsessiontarget.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoicePeerCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoicePeerCfgEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvvoicepeercfgcasgroup.is_set || is_set(cvvoicepeercfgcasgroup.yfilter)) leaf_name_data.push_back(cvvoicepeercfgcasgroup.get_name_leafdata());
    if (cvvoicepeercfgdialdigitsprefix.is_set || is_set(cvvoicepeercfgdialdigitsprefix.yfilter)) leaf_name_data.push_back(cvvoicepeercfgdialdigitsprefix.get_name_leafdata());
    if (cvvoicepeercfgdidcallenable.is_set || is_set(cvvoicepeercfgdidcallenable.yfilter)) leaf_name_data.push_back(cvvoicepeercfgdidcallenable.get_name_leafdata());
    if (cvvoicepeercfgechocancellertest.is_set || is_set(cvvoicepeercfgechocancellertest.yfilter)) leaf_name_data.push_back(cvvoicepeercfgechocancellertest.get_name_leafdata());
    if (cvvoicepeercfgforwarddigits.is_set || is_set(cvvoicepeercfgforwarddigits.yfilter)) leaf_name_data.push_back(cvvoicepeercfgforwarddigits.get_name_leafdata());
    if (cvvoicepeercfgregistere164.is_set || is_set(cvvoicepeercfgregistere164.yfilter)) leaf_name_data.push_back(cvvoicepeercfgregistere164.get_name_leafdata());
    if (cvvoicepeercfgsessiontarget.is_set || is_set(cvvoicepeercfgsessiontarget.yfilter)) leaf_name_data.push_back(cvvoicepeercfgsessiontarget.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoicePeerCfgCasGroup")
    {
        cvvoicepeercfgcasgroup = value;
        cvvoicepeercfgcasgroup.value_namespace = name_space;
        cvvoicepeercfgcasgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoicePeerCfgDialDigitsPrefix")
    {
        cvvoicepeercfgdialdigitsprefix = value;
        cvvoicepeercfgdialdigitsprefix.value_namespace = name_space;
        cvvoicepeercfgdialdigitsprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoicePeerCfgDIDCallEnable")
    {
        cvvoicepeercfgdidcallenable = value;
        cvvoicepeercfgdidcallenable.value_namespace = name_space;
        cvvoicepeercfgdidcallenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoicePeerCfgEchoCancellerTest")
    {
        cvvoicepeercfgechocancellertest = value;
        cvvoicepeercfgechocancellertest.value_namespace = name_space;
        cvvoicepeercfgechocancellertest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoicePeerCfgForwardDigits")
    {
        cvvoicepeercfgforwarddigits = value;
        cvvoicepeercfgforwarddigits.value_namespace = name_space;
        cvvoicepeercfgforwarddigits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoicePeerCfgRegisterE164")
    {
        cvvoicepeercfgregistere164 = value;
        cvvoicepeercfgregistere164.value_namespace = name_space;
        cvvoicepeercfgregistere164.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoicePeerCfgSessionTarget")
    {
        cvvoicepeercfgsessiontarget = value;
        cvvoicepeercfgsessiontarget.value_namespace = name_space;
        cvvoicepeercfgsessiontarget.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cvVoicePeerCfgCasGroup")
    {
        cvvoicepeercfgcasgroup.yfilter = yfilter;
    }
    if(value_path == "cvVoicePeerCfgDialDigitsPrefix")
    {
        cvvoicepeercfgdialdigitsprefix.yfilter = yfilter;
    }
    if(value_path == "cvVoicePeerCfgDIDCallEnable")
    {
        cvvoicepeercfgdidcallenable.yfilter = yfilter;
    }
    if(value_path == "cvVoicePeerCfgEchoCancellerTest")
    {
        cvvoicepeercfgechocancellertest.yfilter = yfilter;
    }
    if(value_path == "cvVoicePeerCfgForwardDigits")
    {
        cvvoicepeercfgforwarddigits.yfilter = yfilter;
    }
    if(value_path == "cvVoicePeerCfgRegisterE164")
    {
        cvvoicepeercfgregistere164.yfilter = yfilter;
    }
    if(value_path == "cvVoicePeerCfgSessionTarget")
    {
        cvvoicepeercfgsessiontarget.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cvVoicePeerCfgCasGroup" || name == "cvVoicePeerCfgDialDigitsPrefix" || name == "cvVoicePeerCfgDIDCallEnable" || name == "cvVoicePeerCfgEchoCancellerTest" || name == "cvVoicePeerCfgForwardDigits" || name == "cvVoicePeerCfgRegisterE164" || name == "cvVoicePeerCfgSessionTarget")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactivetable()
{

    yang_name = "cvVoIPCallActiveTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::~Cvvoipcallactivetable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::has_data() const
{
    for (std::size_t index=0; index<cvvoipcallactiveentry.size(); index++)
    {
        if(cvvoipcallactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::has_operation() const
{
    for (std::size_t index=0; index<cvvoipcallactiveentry.size(); index++)
    {
        if(cvvoipcallactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallActiveTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry>();
        c->parent = this;
        cvvoipcallactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoipcallactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvVoIPCallActiveEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::Cvvoipcallactiveentry()
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

    yang_name = "cvVoIPCallActiveEntry"; yang_parent_name = "cvVoIPCallActiveTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::~Cvvoipcallactiveentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(ccvoipcallactivepolicyname.yfilter)
	|| ydk::is_set(cvvoipcallactivebitrates.yfilter)
	|| ydk::is_set(cvvoipcallactivecallid.yfilter)
	|| ydk::is_set(cvvoipcallactivecallreferenceid.yfilter)
	|| ydk::is_set(cvvoipcallactivechannels.yfilter)
	|| ydk::is_set(cvvoipcallactivecodermode.yfilter)
	|| ydk::is_set(cvvoipcallactivecodertyperate.yfilter)
	|| ydk::is_set(cvvoipcallactiveconnectionid.yfilter)
	|| ydk::is_set(cvvoipcallactivecrc.yfilter)
	|| ydk::is_set(cvvoipcallactiveearlypackets.yfilter)
	|| ydk::is_set(cvvoipcallactiveencap.yfilter)
	|| ydk::is_set(cvvoipcallactivegapfillwithinterpolation.yfilter)
	|| ydk::is_set(cvvoipcallactivegapfillwithprediction.yfilter)
	|| ydk::is_set(cvvoipcallactivegapfillwithredundancy.yfilter)
	|| ydk::is_set(cvvoipcallactivegapfillwithsilence.yfilter)
	|| ydk::is_set(cvvoipcallactivehiwaterplayoutdelay.yfilter)
	|| ydk::is_set(cvvoipcallactiveinterleaving.yfilter)
	|| ydk::is_set(cvvoipcallactivelatepackets.yfilter)
	|| ydk::is_set(cvvoipcallactivelostpackets.yfilter)
	|| ydk::is_set(cvvoipcallactivelowaterplayoutdelay.yfilter)
	|| ydk::is_set(cvvoipcallactivemaxptime.yfilter)
	|| ydk::is_set(cvvoipcallactivemodechgneighbor.yfilter)
	|| ydk::is_set(cvvoipcallactivemodechgperiod.yfilter)
	|| ydk::is_set(cvvoipcallactiveoctetaligned.yfilter)
	|| ydk::is_set(cvvoipcallactiveontimervplayout.yfilter)
	|| ydk::is_set(cvvoipcallactiveprotocolcallid.yfilter)
	|| ydk::is_set(cvvoipcallactiveptime.yfilter)
	|| ydk::is_set(cvvoipcallactivereceivedelay.yfilter)
	|| ydk::is_set(cvvoipcallactiveremmediaipaddr.yfilter)
	|| ydk::is_set(cvvoipcallactiveremmediaipaddrt.yfilter)
	|| ydk::is_set(cvvoipcallactiveremmediaport.yfilter)
	|| ydk::is_set(cvvoipcallactiveremoteipaddress.yfilter)
	|| ydk::is_set(cvvoipcallactiveremoteudpport.yfilter)
	|| ydk::is_set(cvvoipcallactiveremsigipaddr.yfilter)
	|| ydk::is_set(cvvoipcallactiveremsigipaddrt.yfilter)
	|| ydk::is_set(cvvoipcallactiveremsigport.yfilter)
	|| ydk::is_set(cvvoipcallactivereverseddirectionpeeraddress.yfilter)
	|| ydk::is_set(cvvoipcallactiverobustsorting.yfilter)
	|| ydk::is_set(cvvoipcallactiveroundtripdelay.yfilter)
	|| ydk::is_set(cvvoipcallactiveselectedqos.yfilter)
	|| ydk::is_set(cvvoipcallactivesessionid.yfilter)
	|| ydk::is_set(cvvoipcallactivesessionprotocol.yfilter)
	|| ydk::is_set(cvvoipcallactivesessiontarget.yfilter)
	|| ydk::is_set(cvvoipcallactivesrtpenable.yfilter)
	|| ydk::is_set(cvvoipcallactiveusername.yfilter)
	|| ydk::is_set(cvvoipcallactivevadenable.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoIPCallActiveTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallActiveEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (ccvoipcallactivepolicyname.is_set || is_set(ccvoipcallactivepolicyname.yfilter)) leaf_name_data.push_back(ccvoipcallactivepolicyname.get_name_leafdata());
    if (cvvoipcallactivebitrates.is_set || is_set(cvvoipcallactivebitrates.yfilter)) leaf_name_data.push_back(cvvoipcallactivebitrates.get_name_leafdata());
    if (cvvoipcallactivecallid.is_set || is_set(cvvoipcallactivecallid.yfilter)) leaf_name_data.push_back(cvvoipcallactivecallid.get_name_leafdata());
    if (cvvoipcallactivecallreferenceid.is_set || is_set(cvvoipcallactivecallreferenceid.yfilter)) leaf_name_data.push_back(cvvoipcallactivecallreferenceid.get_name_leafdata());
    if (cvvoipcallactivechannels.is_set || is_set(cvvoipcallactivechannels.yfilter)) leaf_name_data.push_back(cvvoipcallactivechannels.get_name_leafdata());
    if (cvvoipcallactivecodermode.is_set || is_set(cvvoipcallactivecodermode.yfilter)) leaf_name_data.push_back(cvvoipcallactivecodermode.get_name_leafdata());
    if (cvvoipcallactivecodertyperate.is_set || is_set(cvvoipcallactivecodertyperate.yfilter)) leaf_name_data.push_back(cvvoipcallactivecodertyperate.get_name_leafdata());
    if (cvvoipcallactiveconnectionid.is_set || is_set(cvvoipcallactiveconnectionid.yfilter)) leaf_name_data.push_back(cvvoipcallactiveconnectionid.get_name_leafdata());
    if (cvvoipcallactivecrc.is_set || is_set(cvvoipcallactivecrc.yfilter)) leaf_name_data.push_back(cvvoipcallactivecrc.get_name_leafdata());
    if (cvvoipcallactiveearlypackets.is_set || is_set(cvvoipcallactiveearlypackets.yfilter)) leaf_name_data.push_back(cvvoipcallactiveearlypackets.get_name_leafdata());
    if (cvvoipcallactiveencap.is_set || is_set(cvvoipcallactiveencap.yfilter)) leaf_name_data.push_back(cvvoipcallactiveencap.get_name_leafdata());
    if (cvvoipcallactivegapfillwithinterpolation.is_set || is_set(cvvoipcallactivegapfillwithinterpolation.yfilter)) leaf_name_data.push_back(cvvoipcallactivegapfillwithinterpolation.get_name_leafdata());
    if (cvvoipcallactivegapfillwithprediction.is_set || is_set(cvvoipcallactivegapfillwithprediction.yfilter)) leaf_name_data.push_back(cvvoipcallactivegapfillwithprediction.get_name_leafdata());
    if (cvvoipcallactivegapfillwithredundancy.is_set || is_set(cvvoipcallactivegapfillwithredundancy.yfilter)) leaf_name_data.push_back(cvvoipcallactivegapfillwithredundancy.get_name_leafdata());
    if (cvvoipcallactivegapfillwithsilence.is_set || is_set(cvvoipcallactivegapfillwithsilence.yfilter)) leaf_name_data.push_back(cvvoipcallactivegapfillwithsilence.get_name_leafdata());
    if (cvvoipcallactivehiwaterplayoutdelay.is_set || is_set(cvvoipcallactivehiwaterplayoutdelay.yfilter)) leaf_name_data.push_back(cvvoipcallactivehiwaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallactiveinterleaving.is_set || is_set(cvvoipcallactiveinterleaving.yfilter)) leaf_name_data.push_back(cvvoipcallactiveinterleaving.get_name_leafdata());
    if (cvvoipcallactivelatepackets.is_set || is_set(cvvoipcallactivelatepackets.yfilter)) leaf_name_data.push_back(cvvoipcallactivelatepackets.get_name_leafdata());
    if (cvvoipcallactivelostpackets.is_set || is_set(cvvoipcallactivelostpackets.yfilter)) leaf_name_data.push_back(cvvoipcallactivelostpackets.get_name_leafdata());
    if (cvvoipcallactivelowaterplayoutdelay.is_set || is_set(cvvoipcallactivelowaterplayoutdelay.yfilter)) leaf_name_data.push_back(cvvoipcallactivelowaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallactivemaxptime.is_set || is_set(cvvoipcallactivemaxptime.yfilter)) leaf_name_data.push_back(cvvoipcallactivemaxptime.get_name_leafdata());
    if (cvvoipcallactivemodechgneighbor.is_set || is_set(cvvoipcallactivemodechgneighbor.yfilter)) leaf_name_data.push_back(cvvoipcallactivemodechgneighbor.get_name_leafdata());
    if (cvvoipcallactivemodechgperiod.is_set || is_set(cvvoipcallactivemodechgperiod.yfilter)) leaf_name_data.push_back(cvvoipcallactivemodechgperiod.get_name_leafdata());
    if (cvvoipcallactiveoctetaligned.is_set || is_set(cvvoipcallactiveoctetaligned.yfilter)) leaf_name_data.push_back(cvvoipcallactiveoctetaligned.get_name_leafdata());
    if (cvvoipcallactiveontimervplayout.is_set || is_set(cvvoipcallactiveontimervplayout.yfilter)) leaf_name_data.push_back(cvvoipcallactiveontimervplayout.get_name_leafdata());
    if (cvvoipcallactiveprotocolcallid.is_set || is_set(cvvoipcallactiveprotocolcallid.yfilter)) leaf_name_data.push_back(cvvoipcallactiveprotocolcallid.get_name_leafdata());
    if (cvvoipcallactiveptime.is_set || is_set(cvvoipcallactiveptime.yfilter)) leaf_name_data.push_back(cvvoipcallactiveptime.get_name_leafdata());
    if (cvvoipcallactivereceivedelay.is_set || is_set(cvvoipcallactivereceivedelay.yfilter)) leaf_name_data.push_back(cvvoipcallactivereceivedelay.get_name_leafdata());
    if (cvvoipcallactiveremmediaipaddr.is_set || is_set(cvvoipcallactiveremmediaipaddr.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremmediaipaddr.get_name_leafdata());
    if (cvvoipcallactiveremmediaipaddrt.is_set || is_set(cvvoipcallactiveremmediaipaddrt.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremmediaipaddrt.get_name_leafdata());
    if (cvvoipcallactiveremmediaport.is_set || is_set(cvvoipcallactiveremmediaport.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremmediaport.get_name_leafdata());
    if (cvvoipcallactiveremoteipaddress.is_set || is_set(cvvoipcallactiveremoteipaddress.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremoteipaddress.get_name_leafdata());
    if (cvvoipcallactiveremoteudpport.is_set || is_set(cvvoipcallactiveremoteudpport.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremoteudpport.get_name_leafdata());
    if (cvvoipcallactiveremsigipaddr.is_set || is_set(cvvoipcallactiveremsigipaddr.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremsigipaddr.get_name_leafdata());
    if (cvvoipcallactiveremsigipaddrt.is_set || is_set(cvvoipcallactiveremsigipaddrt.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremsigipaddrt.get_name_leafdata());
    if (cvvoipcallactiveremsigport.is_set || is_set(cvvoipcallactiveremsigport.yfilter)) leaf_name_data.push_back(cvvoipcallactiveremsigport.get_name_leafdata());
    if (cvvoipcallactivereverseddirectionpeeraddress.is_set || is_set(cvvoipcallactivereverseddirectionpeeraddress.yfilter)) leaf_name_data.push_back(cvvoipcallactivereverseddirectionpeeraddress.get_name_leafdata());
    if (cvvoipcallactiverobustsorting.is_set || is_set(cvvoipcallactiverobustsorting.yfilter)) leaf_name_data.push_back(cvvoipcallactiverobustsorting.get_name_leafdata());
    if (cvvoipcallactiveroundtripdelay.is_set || is_set(cvvoipcallactiveroundtripdelay.yfilter)) leaf_name_data.push_back(cvvoipcallactiveroundtripdelay.get_name_leafdata());
    if (cvvoipcallactiveselectedqos.is_set || is_set(cvvoipcallactiveselectedqos.yfilter)) leaf_name_data.push_back(cvvoipcallactiveselectedqos.get_name_leafdata());
    if (cvvoipcallactivesessionid.is_set || is_set(cvvoipcallactivesessionid.yfilter)) leaf_name_data.push_back(cvvoipcallactivesessionid.get_name_leafdata());
    if (cvvoipcallactivesessionprotocol.is_set || is_set(cvvoipcallactivesessionprotocol.yfilter)) leaf_name_data.push_back(cvvoipcallactivesessionprotocol.get_name_leafdata());
    if (cvvoipcallactivesessiontarget.is_set || is_set(cvvoipcallactivesessiontarget.yfilter)) leaf_name_data.push_back(cvvoipcallactivesessiontarget.get_name_leafdata());
    if (cvvoipcallactivesrtpenable.is_set || is_set(cvvoipcallactivesrtpenable.yfilter)) leaf_name_data.push_back(cvvoipcallactivesrtpenable.get_name_leafdata());
    if (cvvoipcallactiveusername.is_set || is_set(cvvoipcallactiveusername.yfilter)) leaf_name_data.push_back(cvvoipcallactiveusername.get_name_leafdata());
    if (cvvoipcallactivevadenable.is_set || is_set(cvvoipcallactivevadenable.yfilter)) leaf_name_data.push_back(cvvoipcallactivevadenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
        callactivesetuptime.value_namespace = name_space;
        callactivesetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
        callactiveindex.value_namespace = name_space;
        callactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccVoIPCallActivePolicyName")
    {
        ccvoipcallactivepolicyname = value;
        ccvoipcallactivepolicyname.value_namespace = name_space;
        ccvoipcallactivepolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveBitRates")
    {
        cvvoipcallactivebitrates[value] = true;
    }
    if(value_path == "cvVoIPCallActiveCallId")
    {
        cvvoipcallactivecallid = value;
        cvvoipcallactivecallid.value_namespace = name_space;
        cvvoipcallactivecallid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveCallReferenceId")
    {
        cvvoipcallactivecallreferenceid = value;
        cvvoipcallactivecallreferenceid.value_namespace = name_space;
        cvvoipcallactivecallreferenceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveChannels")
    {
        cvvoipcallactivechannels = value;
        cvvoipcallactivechannels.value_namespace = name_space;
        cvvoipcallactivechannels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveCoderMode")
    {
        cvvoipcallactivecodermode = value;
        cvvoipcallactivecodermode.value_namespace = name_space;
        cvvoipcallactivecodermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveCoderTypeRate")
    {
        cvvoipcallactivecodertyperate = value;
        cvvoipcallactivecodertyperate.value_namespace = name_space;
        cvvoipcallactivecodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveConnectionId")
    {
        cvvoipcallactiveconnectionid = value;
        cvvoipcallactiveconnectionid.value_namespace = name_space;
        cvvoipcallactiveconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveCRC")
    {
        cvvoipcallactivecrc = value;
        cvvoipcallactivecrc.value_namespace = name_space;
        cvvoipcallactivecrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveEarlyPackets")
    {
        cvvoipcallactiveearlypackets = value;
        cvvoipcallactiveearlypackets.value_namespace = name_space;
        cvvoipcallactiveearlypackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveEncap")
    {
        cvvoipcallactiveencap = value;
        cvvoipcallactiveencap.value_namespace = name_space;
        cvvoipcallactiveencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithInterpolation")
    {
        cvvoipcallactivegapfillwithinterpolation = value;
        cvvoipcallactivegapfillwithinterpolation.value_namespace = name_space;
        cvvoipcallactivegapfillwithinterpolation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithPrediction")
    {
        cvvoipcallactivegapfillwithprediction = value;
        cvvoipcallactivegapfillwithprediction.value_namespace = name_space;
        cvvoipcallactivegapfillwithprediction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithRedundancy")
    {
        cvvoipcallactivegapfillwithredundancy = value;
        cvvoipcallactivegapfillwithredundancy.value_namespace = name_space;
        cvvoipcallactivegapfillwithredundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithSilence")
    {
        cvvoipcallactivegapfillwithsilence = value;
        cvvoipcallactivegapfillwithsilence.value_namespace = name_space;
        cvvoipcallactivegapfillwithsilence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveHiWaterPlayoutDelay")
    {
        cvvoipcallactivehiwaterplayoutdelay = value;
        cvvoipcallactivehiwaterplayoutdelay.value_namespace = name_space;
        cvvoipcallactivehiwaterplayoutdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveInterleaving")
    {
        cvvoipcallactiveinterleaving = value;
        cvvoipcallactiveinterleaving.value_namespace = name_space;
        cvvoipcallactiveinterleaving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveLatePackets")
    {
        cvvoipcallactivelatepackets = value;
        cvvoipcallactivelatepackets.value_namespace = name_space;
        cvvoipcallactivelatepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveLostPackets")
    {
        cvvoipcallactivelostpackets = value;
        cvvoipcallactivelostpackets.value_namespace = name_space;
        cvvoipcallactivelostpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveLoWaterPlayoutDelay")
    {
        cvvoipcallactivelowaterplayoutdelay = value;
        cvvoipcallactivelowaterplayoutdelay.value_namespace = name_space;
        cvvoipcallactivelowaterplayoutdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveMaxPtime")
    {
        cvvoipcallactivemaxptime = value;
        cvvoipcallactivemaxptime.value_namespace = name_space;
        cvvoipcallactivemaxptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveModeChgNeighbor")
    {
        cvvoipcallactivemodechgneighbor = value;
        cvvoipcallactivemodechgneighbor.value_namespace = name_space;
        cvvoipcallactivemodechgneighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveModeChgPeriod")
    {
        cvvoipcallactivemodechgperiod = value;
        cvvoipcallactivemodechgperiod.value_namespace = name_space;
        cvvoipcallactivemodechgperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveOctetAligned")
    {
        cvvoipcallactiveoctetaligned = value;
        cvvoipcallactiveoctetaligned.value_namespace = name_space;
        cvvoipcallactiveoctetaligned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveOnTimeRvPlayout")
    {
        cvvoipcallactiveontimervplayout = value;
        cvvoipcallactiveontimervplayout.value_namespace = name_space;
        cvvoipcallactiveontimervplayout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveProtocolCallId")
    {
        cvvoipcallactiveprotocolcallid = value;
        cvvoipcallactiveprotocolcallid.value_namespace = name_space;
        cvvoipcallactiveprotocolcallid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActivePtime")
    {
        cvvoipcallactiveptime = value;
        cvvoipcallactiveptime.value_namespace = name_space;
        cvvoipcallactiveptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveReceiveDelay")
    {
        cvvoipcallactivereceivedelay = value;
        cvvoipcallactivereceivedelay.value_namespace = name_space;
        cvvoipcallactivereceivedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemMediaIPAddr")
    {
        cvvoipcallactiveremmediaipaddr = value;
        cvvoipcallactiveremmediaipaddr.value_namespace = name_space;
        cvvoipcallactiveremmediaipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemMediaIPAddrT")
    {
        cvvoipcallactiveremmediaipaddrt = value;
        cvvoipcallactiveremmediaipaddrt.value_namespace = name_space;
        cvvoipcallactiveremmediaipaddrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemMediaPort")
    {
        cvvoipcallactiveremmediaport = value;
        cvvoipcallactiveremmediaport.value_namespace = name_space;
        cvvoipcallactiveremmediaport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemoteIPAddress")
    {
        cvvoipcallactiveremoteipaddress = value;
        cvvoipcallactiveremoteipaddress.value_namespace = name_space;
        cvvoipcallactiveremoteipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemoteUDPPort")
    {
        cvvoipcallactiveremoteudpport = value;
        cvvoipcallactiveremoteudpport.value_namespace = name_space;
        cvvoipcallactiveremoteudpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemSigIPAddr")
    {
        cvvoipcallactiveremsigipaddr = value;
        cvvoipcallactiveremsigipaddr.value_namespace = name_space;
        cvvoipcallactiveremsigipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemSigIPAddrT")
    {
        cvvoipcallactiveremsigipaddrt = value;
        cvvoipcallactiveremsigipaddrt.value_namespace = name_space;
        cvvoipcallactiveremsigipaddrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRemSigPort")
    {
        cvvoipcallactiveremsigport = value;
        cvvoipcallactiveremsigport.value_namespace = name_space;
        cvvoipcallactiveremsigport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveReversedDirectionPeerAddress")
    {
        cvvoipcallactivereverseddirectionpeeraddress = value;
        cvvoipcallactivereverseddirectionpeeraddress.value_namespace = name_space;
        cvvoipcallactivereverseddirectionpeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRobustSorting")
    {
        cvvoipcallactiverobustsorting = value;
        cvvoipcallactiverobustsorting.value_namespace = name_space;
        cvvoipcallactiverobustsorting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveRoundTripDelay")
    {
        cvvoipcallactiveroundtripdelay = value;
        cvvoipcallactiveroundtripdelay.value_namespace = name_space;
        cvvoipcallactiveroundtripdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveSelectedQoS")
    {
        cvvoipcallactiveselectedqos = value;
        cvvoipcallactiveselectedqos.value_namespace = name_space;
        cvvoipcallactiveselectedqos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveSessionId")
    {
        cvvoipcallactivesessionid = value;
        cvvoipcallactivesessionid.value_namespace = name_space;
        cvvoipcallactivesessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveSessionProtocol")
    {
        cvvoipcallactivesessionprotocol = value;
        cvvoipcallactivesessionprotocol.value_namespace = name_space;
        cvvoipcallactivesessionprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveSessionTarget")
    {
        cvvoipcallactivesessiontarget = value;
        cvvoipcallactivesessiontarget.value_namespace = name_space;
        cvvoipcallactivesessiontarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveSRTPEnable")
    {
        cvvoipcallactivesrtpenable = value;
        cvvoipcallactivesrtpenable.value_namespace = name_space;
        cvvoipcallactivesrtpenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveUsername")
    {
        cvvoipcallactiveusername = value;
        cvvoipcallactiveusername.value_namespace = name_space;
        cvvoipcallactiveusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallActiveVADEnable")
    {
        cvvoipcallactivevadenable = value;
        cvvoipcallactivevadenable.value_namespace = name_space;
        cvvoipcallactivevadenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "ccVoIPCallActivePolicyName")
    {
        ccvoipcallactivepolicyname.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveBitRates")
    {
        cvvoipcallactivebitrates.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveCallId")
    {
        cvvoipcallactivecallid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveCallReferenceId")
    {
        cvvoipcallactivecallreferenceid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveChannels")
    {
        cvvoipcallactivechannels.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveCoderMode")
    {
        cvvoipcallactivecodermode.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveCoderTypeRate")
    {
        cvvoipcallactivecodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveConnectionId")
    {
        cvvoipcallactiveconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveCRC")
    {
        cvvoipcallactivecrc.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveEarlyPackets")
    {
        cvvoipcallactiveearlypackets.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveEncap")
    {
        cvvoipcallactiveencap.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithInterpolation")
    {
        cvvoipcallactivegapfillwithinterpolation.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithPrediction")
    {
        cvvoipcallactivegapfillwithprediction.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithRedundancy")
    {
        cvvoipcallactivegapfillwithredundancy.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveGapFillWithSilence")
    {
        cvvoipcallactivegapfillwithsilence.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveHiWaterPlayoutDelay")
    {
        cvvoipcallactivehiwaterplayoutdelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveInterleaving")
    {
        cvvoipcallactiveinterleaving.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveLatePackets")
    {
        cvvoipcallactivelatepackets.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveLostPackets")
    {
        cvvoipcallactivelostpackets.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveLoWaterPlayoutDelay")
    {
        cvvoipcallactivelowaterplayoutdelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveMaxPtime")
    {
        cvvoipcallactivemaxptime.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveModeChgNeighbor")
    {
        cvvoipcallactivemodechgneighbor.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveModeChgPeriod")
    {
        cvvoipcallactivemodechgperiod.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveOctetAligned")
    {
        cvvoipcallactiveoctetaligned.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveOnTimeRvPlayout")
    {
        cvvoipcallactiveontimervplayout.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveProtocolCallId")
    {
        cvvoipcallactiveprotocolcallid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActivePtime")
    {
        cvvoipcallactiveptime.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveReceiveDelay")
    {
        cvvoipcallactivereceivedelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemMediaIPAddr")
    {
        cvvoipcallactiveremmediaipaddr.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemMediaIPAddrT")
    {
        cvvoipcallactiveremmediaipaddrt.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemMediaPort")
    {
        cvvoipcallactiveremmediaport.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemoteIPAddress")
    {
        cvvoipcallactiveremoteipaddress.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemoteUDPPort")
    {
        cvvoipcallactiveremoteudpport.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemSigIPAddr")
    {
        cvvoipcallactiveremsigipaddr.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemSigIPAddrT")
    {
        cvvoipcallactiveremsigipaddrt.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRemSigPort")
    {
        cvvoipcallactiveremsigport.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveReversedDirectionPeerAddress")
    {
        cvvoipcallactivereverseddirectionpeeraddress.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRobustSorting")
    {
        cvvoipcallactiverobustsorting.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveRoundTripDelay")
    {
        cvvoipcallactiveroundtripdelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveSelectedQoS")
    {
        cvvoipcallactiveselectedqos.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveSessionId")
    {
        cvvoipcallactivesessionid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveSessionProtocol")
    {
        cvvoipcallactivesessionprotocol.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveSessionTarget")
    {
        cvvoipcallactivesessiontarget.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveSRTPEnable")
    {
        cvvoipcallactivesrtpenable.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveUsername")
    {
        cvvoipcallactiveusername.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallActiveVADEnable")
    {
        cvvoipcallactivevadenable.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "ccVoIPCallActivePolicyName" || name == "cvVoIPCallActiveBitRates" || name == "cvVoIPCallActiveCallId" || name == "cvVoIPCallActiveCallReferenceId" || name == "cvVoIPCallActiveChannels" || name == "cvVoIPCallActiveCoderMode" || name == "cvVoIPCallActiveCoderTypeRate" || name == "cvVoIPCallActiveConnectionId" || name == "cvVoIPCallActiveCRC" || name == "cvVoIPCallActiveEarlyPackets" || name == "cvVoIPCallActiveEncap" || name == "cvVoIPCallActiveGapFillWithInterpolation" || name == "cvVoIPCallActiveGapFillWithPrediction" || name == "cvVoIPCallActiveGapFillWithRedundancy" || name == "cvVoIPCallActiveGapFillWithSilence" || name == "cvVoIPCallActiveHiWaterPlayoutDelay" || name == "cvVoIPCallActiveInterleaving" || name == "cvVoIPCallActiveLatePackets" || name == "cvVoIPCallActiveLostPackets" || name == "cvVoIPCallActiveLoWaterPlayoutDelay" || name == "cvVoIPCallActiveMaxPtime" || name == "cvVoIPCallActiveModeChgNeighbor" || name == "cvVoIPCallActiveModeChgPeriod" || name == "cvVoIPCallActiveOctetAligned" || name == "cvVoIPCallActiveOnTimeRvPlayout" || name == "cvVoIPCallActiveProtocolCallId" || name == "cvVoIPCallActivePtime" || name == "cvVoIPCallActiveReceiveDelay" || name == "cvVoIPCallActiveRemMediaIPAddr" || name == "cvVoIPCallActiveRemMediaIPAddrT" || name == "cvVoIPCallActiveRemMediaPort" || name == "cvVoIPCallActiveRemoteIPAddress" || name == "cvVoIPCallActiveRemoteUDPPort" || name == "cvVoIPCallActiveRemSigIPAddr" || name == "cvVoIPCallActiveRemSigIPAddrT" || name == "cvVoIPCallActiveRemSigPort" || name == "cvVoIPCallActiveReversedDirectionPeerAddress" || name == "cvVoIPCallActiveRobustSorting" || name == "cvVoIPCallActiveRoundTripDelay" || name == "cvVoIPCallActiveSelectedQoS" || name == "cvVoIPCallActiveSessionId" || name == "cvVoIPCallActiveSessionProtocol" || name == "cvVoIPCallActiveSessionTarget" || name == "cvVoIPCallActiveSRTPEnable" || name == "cvVoIPCallActiveUsername" || name == "cvVoIPCallActiveVADEnable")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistorytable()
{

    yang_name = "cvVoIPCallHistoryTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::~Cvvoipcallhistorytable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::has_data() const
{
    for (std::size_t index=0; index<cvvoipcallhistoryentry.size(); index++)
    {
        if(cvvoipcallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cvvoipcallhistoryentry.size(); index++)
    {
        if(cvvoipcallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry>();
        c->parent = this;
        cvvoipcallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoipcallhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvVoIPCallHistoryEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::Cvvoipcallhistoryentry()
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

    yang_name = "cvVoIPCallHistoryEntry"; yang_parent_name = "cvVoIPCallHistoryTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::~Cvvoipcallhistoryentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(cvvoipcallhistorybitrates.yfilter)
	|| ydk::is_set(cvvoipcallhistorycallid.yfilter)
	|| ydk::is_set(cvvoipcallhistorycallreferenceid.yfilter)
	|| ydk::is_set(cvvoipcallhistorychannels.yfilter)
	|| ydk::is_set(cvvoipcallhistorycodermode.yfilter)
	|| ydk::is_set(cvvoipcallhistorycodertyperate.yfilter)
	|| ydk::is_set(cvvoipcallhistoryconnectionid.yfilter)
	|| ydk::is_set(cvvoipcallhistorycrc.yfilter)
	|| ydk::is_set(cvvoipcallhistoryearlypackets.yfilter)
	|| ydk::is_set(cvvoipcallhistoryencap.yfilter)
	|| ydk::is_set(cvvoipcallhistoryfallbackdelay.yfilter)
	|| ydk::is_set(cvvoipcallhistoryfallbackicpif.yfilter)
	|| ydk::is_set(cvvoipcallhistoryfallbackloss.yfilter)
	|| ydk::is_set(cvvoipcallhistorygapfillwithinterpolation.yfilter)
	|| ydk::is_set(cvvoipcallhistorygapfillwithprediction.yfilter)
	|| ydk::is_set(cvvoipcallhistorygapfillwithredundancy.yfilter)
	|| ydk::is_set(cvvoipcallhistorygapfillwithsilence.yfilter)
	|| ydk::is_set(cvvoipcallhistoryhiwaterplayoutdelay.yfilter)
	|| ydk::is_set(cvvoipcallhistoryicpif.yfilter)
	|| ydk::is_set(cvvoipcallhistoryinterleaving.yfilter)
	|| ydk::is_set(cvvoipcallhistorylatepackets.yfilter)
	|| ydk::is_set(cvvoipcallhistorylostpackets.yfilter)
	|| ydk::is_set(cvvoipcallhistorylowaterplayoutdelay.yfilter)
	|| ydk::is_set(cvvoipcallhistorymaxptime.yfilter)
	|| ydk::is_set(cvvoipcallhistorymodechgneighbor.yfilter)
	|| ydk::is_set(cvvoipcallhistorymodechgperiod.yfilter)
	|| ydk::is_set(cvvoipcallhistoryoctetaligned.yfilter)
	|| ydk::is_set(cvvoipcallhistoryontimervplayout.yfilter)
	|| ydk::is_set(cvvoipcallhistoryprotocolcallid.yfilter)
	|| ydk::is_set(cvvoipcallhistoryptime.yfilter)
	|| ydk::is_set(cvvoipcallhistoryreceivedelay.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremmediaipaddr.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremmediaipaddrt.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremmediaport.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremoteipaddress.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremoteudpport.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremsigipaddr.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremsigipaddrt.yfilter)
	|| ydk::is_set(cvvoipcallhistoryremsigport.yfilter)
	|| ydk::is_set(cvvoipcallhistoryrobustsorting.yfilter)
	|| ydk::is_set(cvvoipcallhistoryroundtripdelay.yfilter)
	|| ydk::is_set(cvvoipcallhistoryselectedqos.yfilter)
	|| ydk::is_set(cvvoipcallhistorysessionid.yfilter)
	|| ydk::is_set(cvvoipcallhistorysessionprotocol.yfilter)
	|| ydk::is_set(cvvoipcallhistorysessiontarget.yfilter)
	|| ydk::is_set(cvvoipcallhistorysrtpenable.yfilter)
	|| ydk::is_set(cvvoipcallhistoryusername.yfilter)
	|| ydk::is_set(cvvoipcallhistoryvadenable.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoIPCallHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (cvvoipcallhistorybitrates.is_set || is_set(cvvoipcallhistorybitrates.yfilter)) leaf_name_data.push_back(cvvoipcallhistorybitrates.get_name_leafdata());
    if (cvvoipcallhistorycallid.is_set || is_set(cvvoipcallhistorycallid.yfilter)) leaf_name_data.push_back(cvvoipcallhistorycallid.get_name_leafdata());
    if (cvvoipcallhistorycallreferenceid.is_set || is_set(cvvoipcallhistorycallreferenceid.yfilter)) leaf_name_data.push_back(cvvoipcallhistorycallreferenceid.get_name_leafdata());
    if (cvvoipcallhistorychannels.is_set || is_set(cvvoipcallhistorychannels.yfilter)) leaf_name_data.push_back(cvvoipcallhistorychannels.get_name_leafdata());
    if (cvvoipcallhistorycodermode.is_set || is_set(cvvoipcallhistorycodermode.yfilter)) leaf_name_data.push_back(cvvoipcallhistorycodermode.get_name_leafdata());
    if (cvvoipcallhistorycodertyperate.is_set || is_set(cvvoipcallhistorycodertyperate.yfilter)) leaf_name_data.push_back(cvvoipcallhistorycodertyperate.get_name_leafdata());
    if (cvvoipcallhistoryconnectionid.is_set || is_set(cvvoipcallhistoryconnectionid.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryconnectionid.get_name_leafdata());
    if (cvvoipcallhistorycrc.is_set || is_set(cvvoipcallhistorycrc.yfilter)) leaf_name_data.push_back(cvvoipcallhistorycrc.get_name_leafdata());
    if (cvvoipcallhistoryearlypackets.is_set || is_set(cvvoipcallhistoryearlypackets.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryearlypackets.get_name_leafdata());
    if (cvvoipcallhistoryencap.is_set || is_set(cvvoipcallhistoryencap.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryencap.get_name_leafdata());
    if (cvvoipcallhistoryfallbackdelay.is_set || is_set(cvvoipcallhistoryfallbackdelay.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryfallbackdelay.get_name_leafdata());
    if (cvvoipcallhistoryfallbackicpif.is_set || is_set(cvvoipcallhistoryfallbackicpif.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryfallbackicpif.get_name_leafdata());
    if (cvvoipcallhistoryfallbackloss.is_set || is_set(cvvoipcallhistoryfallbackloss.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryfallbackloss.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithinterpolation.is_set || is_set(cvvoipcallhistorygapfillwithinterpolation.yfilter)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithinterpolation.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithprediction.is_set || is_set(cvvoipcallhistorygapfillwithprediction.yfilter)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithprediction.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithredundancy.is_set || is_set(cvvoipcallhistorygapfillwithredundancy.yfilter)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithredundancy.get_name_leafdata());
    if (cvvoipcallhistorygapfillwithsilence.is_set || is_set(cvvoipcallhistorygapfillwithsilence.yfilter)) leaf_name_data.push_back(cvvoipcallhistorygapfillwithsilence.get_name_leafdata());
    if (cvvoipcallhistoryhiwaterplayoutdelay.is_set || is_set(cvvoipcallhistoryhiwaterplayoutdelay.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryhiwaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallhistoryicpif.is_set || is_set(cvvoipcallhistoryicpif.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryicpif.get_name_leafdata());
    if (cvvoipcallhistoryinterleaving.is_set || is_set(cvvoipcallhistoryinterleaving.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryinterleaving.get_name_leafdata());
    if (cvvoipcallhistorylatepackets.is_set || is_set(cvvoipcallhistorylatepackets.yfilter)) leaf_name_data.push_back(cvvoipcallhistorylatepackets.get_name_leafdata());
    if (cvvoipcallhistorylostpackets.is_set || is_set(cvvoipcallhistorylostpackets.yfilter)) leaf_name_data.push_back(cvvoipcallhistorylostpackets.get_name_leafdata());
    if (cvvoipcallhistorylowaterplayoutdelay.is_set || is_set(cvvoipcallhistorylowaterplayoutdelay.yfilter)) leaf_name_data.push_back(cvvoipcallhistorylowaterplayoutdelay.get_name_leafdata());
    if (cvvoipcallhistorymaxptime.is_set || is_set(cvvoipcallhistorymaxptime.yfilter)) leaf_name_data.push_back(cvvoipcallhistorymaxptime.get_name_leafdata());
    if (cvvoipcallhistorymodechgneighbor.is_set || is_set(cvvoipcallhistorymodechgneighbor.yfilter)) leaf_name_data.push_back(cvvoipcallhistorymodechgneighbor.get_name_leafdata());
    if (cvvoipcallhistorymodechgperiod.is_set || is_set(cvvoipcallhistorymodechgperiod.yfilter)) leaf_name_data.push_back(cvvoipcallhistorymodechgperiod.get_name_leafdata());
    if (cvvoipcallhistoryoctetaligned.is_set || is_set(cvvoipcallhistoryoctetaligned.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryoctetaligned.get_name_leafdata());
    if (cvvoipcallhistoryontimervplayout.is_set || is_set(cvvoipcallhistoryontimervplayout.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryontimervplayout.get_name_leafdata());
    if (cvvoipcallhistoryprotocolcallid.is_set || is_set(cvvoipcallhistoryprotocolcallid.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryprotocolcallid.get_name_leafdata());
    if (cvvoipcallhistoryptime.is_set || is_set(cvvoipcallhistoryptime.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryptime.get_name_leafdata());
    if (cvvoipcallhistoryreceivedelay.is_set || is_set(cvvoipcallhistoryreceivedelay.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryreceivedelay.get_name_leafdata());
    if (cvvoipcallhistoryremmediaipaddr.is_set || is_set(cvvoipcallhistoryremmediaipaddr.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremmediaipaddr.get_name_leafdata());
    if (cvvoipcallhistoryremmediaipaddrt.is_set || is_set(cvvoipcallhistoryremmediaipaddrt.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremmediaipaddrt.get_name_leafdata());
    if (cvvoipcallhistoryremmediaport.is_set || is_set(cvvoipcallhistoryremmediaport.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremmediaport.get_name_leafdata());
    if (cvvoipcallhistoryremoteipaddress.is_set || is_set(cvvoipcallhistoryremoteipaddress.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremoteipaddress.get_name_leafdata());
    if (cvvoipcallhistoryremoteudpport.is_set || is_set(cvvoipcallhistoryremoteudpport.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremoteudpport.get_name_leafdata());
    if (cvvoipcallhistoryremsigipaddr.is_set || is_set(cvvoipcallhistoryremsigipaddr.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremsigipaddr.get_name_leafdata());
    if (cvvoipcallhistoryremsigipaddrt.is_set || is_set(cvvoipcallhistoryremsigipaddrt.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremsigipaddrt.get_name_leafdata());
    if (cvvoipcallhistoryremsigport.is_set || is_set(cvvoipcallhistoryremsigport.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryremsigport.get_name_leafdata());
    if (cvvoipcallhistoryrobustsorting.is_set || is_set(cvvoipcallhistoryrobustsorting.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryrobustsorting.get_name_leafdata());
    if (cvvoipcallhistoryroundtripdelay.is_set || is_set(cvvoipcallhistoryroundtripdelay.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryroundtripdelay.get_name_leafdata());
    if (cvvoipcallhistoryselectedqos.is_set || is_set(cvvoipcallhistoryselectedqos.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryselectedqos.get_name_leafdata());
    if (cvvoipcallhistorysessionid.is_set || is_set(cvvoipcallhistorysessionid.yfilter)) leaf_name_data.push_back(cvvoipcallhistorysessionid.get_name_leafdata());
    if (cvvoipcallhistorysessionprotocol.is_set || is_set(cvvoipcallhistorysessionprotocol.yfilter)) leaf_name_data.push_back(cvvoipcallhistorysessionprotocol.get_name_leafdata());
    if (cvvoipcallhistorysessiontarget.is_set || is_set(cvvoipcallhistorysessiontarget.yfilter)) leaf_name_data.push_back(cvvoipcallhistorysessiontarget.get_name_leafdata());
    if (cvvoipcallhistorysrtpenable.is_set || is_set(cvvoipcallhistorysrtpenable.yfilter)) leaf_name_data.push_back(cvvoipcallhistorysrtpenable.get_name_leafdata());
    if (cvvoipcallhistoryusername.is_set || is_set(cvvoipcallhistoryusername.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryusername.get_name_leafdata());
    if (cvvoipcallhistoryvadenable.is_set || is_set(cvvoipcallhistoryvadenable.yfilter)) leaf_name_data.push_back(cvvoipcallhistoryvadenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
        ccallhistoryindex.value_namespace = name_space;
        ccallhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryBitRates")
    {
        cvvoipcallhistorybitrates[value] = true;
    }
    if(value_path == "cvVoIPCallHistoryCallId")
    {
        cvvoipcallhistorycallid = value;
        cvvoipcallhistorycallid.value_namespace = name_space;
        cvvoipcallhistorycallid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryCallReferenceId")
    {
        cvvoipcallhistorycallreferenceid = value;
        cvvoipcallhistorycallreferenceid.value_namespace = name_space;
        cvvoipcallhistorycallreferenceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryChannels")
    {
        cvvoipcallhistorychannels = value;
        cvvoipcallhistorychannels.value_namespace = name_space;
        cvvoipcallhistorychannels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryCoderMode")
    {
        cvvoipcallhistorycodermode = value;
        cvvoipcallhistorycodermode.value_namespace = name_space;
        cvvoipcallhistorycodermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryCoderTypeRate")
    {
        cvvoipcallhistorycodertyperate = value;
        cvvoipcallhistorycodertyperate.value_namespace = name_space;
        cvvoipcallhistorycodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryConnectionId")
    {
        cvvoipcallhistoryconnectionid = value;
        cvvoipcallhistoryconnectionid.value_namespace = name_space;
        cvvoipcallhistoryconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryCRC")
    {
        cvvoipcallhistorycrc = value;
        cvvoipcallhistorycrc.value_namespace = name_space;
        cvvoipcallhistorycrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryEarlyPackets")
    {
        cvvoipcallhistoryearlypackets = value;
        cvvoipcallhistoryearlypackets.value_namespace = name_space;
        cvvoipcallhistoryearlypackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryEncap")
    {
        cvvoipcallhistoryencap = value;
        cvvoipcallhistoryencap.value_namespace = name_space;
        cvvoipcallhistoryencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryFallbackDelay")
    {
        cvvoipcallhistoryfallbackdelay = value;
        cvvoipcallhistoryfallbackdelay.value_namespace = name_space;
        cvvoipcallhistoryfallbackdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryFallbackIcpif")
    {
        cvvoipcallhistoryfallbackicpif = value;
        cvvoipcallhistoryfallbackicpif.value_namespace = name_space;
        cvvoipcallhistoryfallbackicpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryFallbackLoss")
    {
        cvvoipcallhistoryfallbackloss = value;
        cvvoipcallhistoryfallbackloss.value_namespace = name_space;
        cvvoipcallhistoryfallbackloss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithInterpolation")
    {
        cvvoipcallhistorygapfillwithinterpolation = value;
        cvvoipcallhistorygapfillwithinterpolation.value_namespace = name_space;
        cvvoipcallhistorygapfillwithinterpolation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithPrediction")
    {
        cvvoipcallhistorygapfillwithprediction = value;
        cvvoipcallhistorygapfillwithprediction.value_namespace = name_space;
        cvvoipcallhistorygapfillwithprediction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithRedundancy")
    {
        cvvoipcallhistorygapfillwithredundancy = value;
        cvvoipcallhistorygapfillwithredundancy.value_namespace = name_space;
        cvvoipcallhistorygapfillwithredundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithSilence")
    {
        cvvoipcallhistorygapfillwithsilence = value;
        cvvoipcallhistorygapfillwithsilence.value_namespace = name_space;
        cvvoipcallhistorygapfillwithsilence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryHiWaterPlayoutDelay")
    {
        cvvoipcallhistoryhiwaterplayoutdelay = value;
        cvvoipcallhistoryhiwaterplayoutdelay.value_namespace = name_space;
        cvvoipcallhistoryhiwaterplayoutdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryIcpif")
    {
        cvvoipcallhistoryicpif = value;
        cvvoipcallhistoryicpif.value_namespace = name_space;
        cvvoipcallhistoryicpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryInterleaving")
    {
        cvvoipcallhistoryinterleaving = value;
        cvvoipcallhistoryinterleaving.value_namespace = name_space;
        cvvoipcallhistoryinterleaving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryLatePackets")
    {
        cvvoipcallhistorylatepackets = value;
        cvvoipcallhistorylatepackets.value_namespace = name_space;
        cvvoipcallhistorylatepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryLostPackets")
    {
        cvvoipcallhistorylostpackets = value;
        cvvoipcallhistorylostpackets.value_namespace = name_space;
        cvvoipcallhistorylostpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryLoWaterPlayoutDelay")
    {
        cvvoipcallhistorylowaterplayoutdelay = value;
        cvvoipcallhistorylowaterplayoutdelay.value_namespace = name_space;
        cvvoipcallhistorylowaterplayoutdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryMaxPtime")
    {
        cvvoipcallhistorymaxptime = value;
        cvvoipcallhistorymaxptime.value_namespace = name_space;
        cvvoipcallhistorymaxptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryModeChgNeighbor")
    {
        cvvoipcallhistorymodechgneighbor = value;
        cvvoipcallhistorymodechgneighbor.value_namespace = name_space;
        cvvoipcallhistorymodechgneighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryModeChgPeriod")
    {
        cvvoipcallhistorymodechgperiod = value;
        cvvoipcallhistorymodechgperiod.value_namespace = name_space;
        cvvoipcallhistorymodechgperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryOctetAligned")
    {
        cvvoipcallhistoryoctetaligned = value;
        cvvoipcallhistoryoctetaligned.value_namespace = name_space;
        cvvoipcallhistoryoctetaligned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryOnTimeRvPlayout")
    {
        cvvoipcallhistoryontimervplayout = value;
        cvvoipcallhistoryontimervplayout.value_namespace = name_space;
        cvvoipcallhistoryontimervplayout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryProtocolCallId")
    {
        cvvoipcallhistoryprotocolcallid = value;
        cvvoipcallhistoryprotocolcallid.value_namespace = name_space;
        cvvoipcallhistoryprotocolcallid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryPtime")
    {
        cvvoipcallhistoryptime = value;
        cvvoipcallhistoryptime.value_namespace = name_space;
        cvvoipcallhistoryptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryReceiveDelay")
    {
        cvvoipcallhistoryreceivedelay = value;
        cvvoipcallhistoryreceivedelay.value_namespace = name_space;
        cvvoipcallhistoryreceivedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaIPAddr")
    {
        cvvoipcallhistoryremmediaipaddr = value;
        cvvoipcallhistoryremmediaipaddr.value_namespace = name_space;
        cvvoipcallhistoryremmediaipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaIPAddrT")
    {
        cvvoipcallhistoryremmediaipaddrt = value;
        cvvoipcallhistoryremmediaipaddrt.value_namespace = name_space;
        cvvoipcallhistoryremmediaipaddrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaPort")
    {
        cvvoipcallhistoryremmediaport = value;
        cvvoipcallhistoryremmediaport.value_namespace = name_space;
        cvvoipcallhistoryremmediaport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemoteIPAddress")
    {
        cvvoipcallhistoryremoteipaddress = value;
        cvvoipcallhistoryremoteipaddress.value_namespace = name_space;
        cvvoipcallhistoryremoteipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemoteUDPPort")
    {
        cvvoipcallhistoryremoteudpport = value;
        cvvoipcallhistoryremoteudpport.value_namespace = name_space;
        cvvoipcallhistoryremoteudpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemSigIPAddr")
    {
        cvvoipcallhistoryremsigipaddr = value;
        cvvoipcallhistoryremsigipaddr.value_namespace = name_space;
        cvvoipcallhistoryremsigipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemSigIPAddrT")
    {
        cvvoipcallhistoryremsigipaddrt = value;
        cvvoipcallhistoryremsigipaddrt.value_namespace = name_space;
        cvvoipcallhistoryremsigipaddrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRemSigPort")
    {
        cvvoipcallhistoryremsigport = value;
        cvvoipcallhistoryremsigport.value_namespace = name_space;
        cvvoipcallhistoryremsigport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRobustSorting")
    {
        cvvoipcallhistoryrobustsorting = value;
        cvvoipcallhistoryrobustsorting.value_namespace = name_space;
        cvvoipcallhistoryrobustsorting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryRoundTripDelay")
    {
        cvvoipcallhistoryroundtripdelay = value;
        cvvoipcallhistoryroundtripdelay.value_namespace = name_space;
        cvvoipcallhistoryroundtripdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistorySelectedQoS")
    {
        cvvoipcallhistoryselectedqos = value;
        cvvoipcallhistoryselectedqos.value_namespace = name_space;
        cvvoipcallhistoryselectedqos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistorySessionId")
    {
        cvvoipcallhistorysessionid = value;
        cvvoipcallhistorysessionid.value_namespace = name_space;
        cvvoipcallhistorysessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistorySessionProtocol")
    {
        cvvoipcallhistorysessionprotocol = value;
        cvvoipcallhistorysessionprotocol.value_namespace = name_space;
        cvvoipcallhistorysessionprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistorySessionTarget")
    {
        cvvoipcallhistorysessiontarget = value;
        cvvoipcallhistorysessiontarget.value_namespace = name_space;
        cvvoipcallhistorysessiontarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistorySRTPEnable")
    {
        cvvoipcallhistorysrtpenable = value;
        cvvoipcallhistorysrtpenable.value_namespace = name_space;
        cvvoipcallhistorysrtpenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryUsername")
    {
        cvvoipcallhistoryusername = value;
        cvvoipcallhistoryusername.value_namespace = name_space;
        cvvoipcallhistoryusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPCallHistoryVADEnable")
    {
        cvvoipcallhistoryvadenable = value;
        cvvoipcallhistoryvadenable.value_namespace = name_space;
        cvvoipcallhistoryvadenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryBitRates")
    {
        cvvoipcallhistorybitrates.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryCallId")
    {
        cvvoipcallhistorycallid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryCallReferenceId")
    {
        cvvoipcallhistorycallreferenceid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryChannels")
    {
        cvvoipcallhistorychannels.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryCoderMode")
    {
        cvvoipcallhistorycodermode.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryCoderTypeRate")
    {
        cvvoipcallhistorycodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryConnectionId")
    {
        cvvoipcallhistoryconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryCRC")
    {
        cvvoipcallhistorycrc.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryEarlyPackets")
    {
        cvvoipcallhistoryearlypackets.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryEncap")
    {
        cvvoipcallhistoryencap.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryFallbackDelay")
    {
        cvvoipcallhistoryfallbackdelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryFallbackIcpif")
    {
        cvvoipcallhistoryfallbackicpif.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryFallbackLoss")
    {
        cvvoipcallhistoryfallbackloss.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithInterpolation")
    {
        cvvoipcallhistorygapfillwithinterpolation.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithPrediction")
    {
        cvvoipcallhistorygapfillwithprediction.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithRedundancy")
    {
        cvvoipcallhistorygapfillwithredundancy.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryGapFillWithSilence")
    {
        cvvoipcallhistorygapfillwithsilence.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryHiWaterPlayoutDelay")
    {
        cvvoipcallhistoryhiwaterplayoutdelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryIcpif")
    {
        cvvoipcallhistoryicpif.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryInterleaving")
    {
        cvvoipcallhistoryinterleaving.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryLatePackets")
    {
        cvvoipcallhistorylatepackets.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryLostPackets")
    {
        cvvoipcallhistorylostpackets.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryLoWaterPlayoutDelay")
    {
        cvvoipcallhistorylowaterplayoutdelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryMaxPtime")
    {
        cvvoipcallhistorymaxptime.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryModeChgNeighbor")
    {
        cvvoipcallhistorymodechgneighbor.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryModeChgPeriod")
    {
        cvvoipcallhistorymodechgperiod.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryOctetAligned")
    {
        cvvoipcallhistoryoctetaligned.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryOnTimeRvPlayout")
    {
        cvvoipcallhistoryontimervplayout.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryProtocolCallId")
    {
        cvvoipcallhistoryprotocolcallid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryPtime")
    {
        cvvoipcallhistoryptime.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryReceiveDelay")
    {
        cvvoipcallhistoryreceivedelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaIPAddr")
    {
        cvvoipcallhistoryremmediaipaddr.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaIPAddrT")
    {
        cvvoipcallhistoryremmediaipaddrt.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemMediaPort")
    {
        cvvoipcallhistoryremmediaport.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemoteIPAddress")
    {
        cvvoipcallhistoryremoteipaddress.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemoteUDPPort")
    {
        cvvoipcallhistoryremoteudpport.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemSigIPAddr")
    {
        cvvoipcallhistoryremsigipaddr.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemSigIPAddrT")
    {
        cvvoipcallhistoryremsigipaddrt.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRemSigPort")
    {
        cvvoipcallhistoryremsigport.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRobustSorting")
    {
        cvvoipcallhistoryrobustsorting.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryRoundTripDelay")
    {
        cvvoipcallhistoryroundtripdelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistorySelectedQoS")
    {
        cvvoipcallhistoryselectedqos.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistorySessionId")
    {
        cvvoipcallhistorysessionid.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistorySessionProtocol")
    {
        cvvoipcallhistorysessionprotocol.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistorySessionTarget")
    {
        cvvoipcallhistorysessiontarget.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistorySRTPEnable")
    {
        cvvoipcallhistorysrtpenable.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryUsername")
    {
        cvvoipcallhistoryusername.yfilter = yfilter;
    }
    if(value_path == "cvVoIPCallHistoryVADEnable")
    {
        cvvoipcallhistoryvadenable.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cvVoIPCallHistoryBitRates" || name == "cvVoIPCallHistoryCallId" || name == "cvVoIPCallHistoryCallReferenceId" || name == "cvVoIPCallHistoryChannels" || name == "cvVoIPCallHistoryCoderMode" || name == "cvVoIPCallHistoryCoderTypeRate" || name == "cvVoIPCallHistoryConnectionId" || name == "cvVoIPCallHistoryCRC" || name == "cvVoIPCallHistoryEarlyPackets" || name == "cvVoIPCallHistoryEncap" || name == "cvVoIPCallHistoryFallbackDelay" || name == "cvVoIPCallHistoryFallbackIcpif" || name == "cvVoIPCallHistoryFallbackLoss" || name == "cvVoIPCallHistoryGapFillWithInterpolation" || name == "cvVoIPCallHistoryGapFillWithPrediction" || name == "cvVoIPCallHistoryGapFillWithRedundancy" || name == "cvVoIPCallHistoryGapFillWithSilence" || name == "cvVoIPCallHistoryHiWaterPlayoutDelay" || name == "cvVoIPCallHistoryIcpif" || name == "cvVoIPCallHistoryInterleaving" || name == "cvVoIPCallHistoryLatePackets" || name == "cvVoIPCallHistoryLostPackets" || name == "cvVoIPCallHistoryLoWaterPlayoutDelay" || name == "cvVoIPCallHistoryMaxPtime" || name == "cvVoIPCallHistoryModeChgNeighbor" || name == "cvVoIPCallHistoryModeChgPeriod" || name == "cvVoIPCallHistoryOctetAligned" || name == "cvVoIPCallHistoryOnTimeRvPlayout" || name == "cvVoIPCallHistoryProtocolCallId" || name == "cvVoIPCallHistoryPtime" || name == "cvVoIPCallHistoryReceiveDelay" || name == "cvVoIPCallHistoryRemMediaIPAddr" || name == "cvVoIPCallHistoryRemMediaIPAddrT" || name == "cvVoIPCallHistoryRemMediaPort" || name == "cvVoIPCallHistoryRemoteIPAddress" || name == "cvVoIPCallHistoryRemoteUDPPort" || name == "cvVoIPCallHistoryRemSigIPAddr" || name == "cvVoIPCallHistoryRemSigIPAddrT" || name == "cvVoIPCallHistoryRemSigPort" || name == "cvVoIPCallHistoryRobustSorting" || name == "cvVoIPCallHistoryRoundTripDelay" || name == "cvVoIPCallHistorySelectedQoS" || name == "cvVoIPCallHistorySessionId" || name == "cvVoIPCallHistorySessionProtocol" || name == "cvVoIPCallHistorySessionTarget" || name == "cvVoIPCallHistorySRTPEnable" || name == "cvVoIPCallHistoryUsername" || name == "cvVoIPCallHistoryVADEnable")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgtable()
{

    yang_name = "cvVoIPPeerCfgTable"; yang_parent_name = "CISCO-VOICE-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::~Cvvoippeercfgtable()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::has_data() const
{
    for (std::size_t index=0; index<cvvoippeercfgentry.size(); index++)
    {
        if(cvvoippeercfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::has_operation() const
{
    for (std::size_t index=0; index<cvvoippeercfgentry.size(); index++)
    {
        if(cvvoippeercfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPPeerCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry>();
        c->parent = this;
        cvvoippeercfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvvoippeercfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvVoIPPeerCfgEntry")
        return true;
    return false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgentry()
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

    yang_name = "cvVoIPPeerCfgEntry"; yang_parent_name = "cvVoIPPeerCfgTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::~Cvvoippeercfgentry()
{
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::has_data() const
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

bool CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cvvoippeercfgbitrate.yfilter)
	|| ydk::is_set(cvvoippeercfgbitrates.yfilter)
	|| ydk::is_set(cvvoippeercfgcoderbytes.yfilter)
	|| ydk::is_set(cvvoippeercfgcodermode.yfilter)
	|| ydk::is_set(cvvoippeercfgcoderrate.yfilter)
	|| ydk::is_set(cvvoippeercfgcodingmode.yfilter)
	|| ydk::is_set(cvvoippeercfgcrc.yfilter)
	|| ydk::is_set(cvvoippeercfgdesiredqos.yfilter)
	|| ydk::is_set(cvvoippeercfgdesiredqosvideo.yfilter)
	|| ydk::is_set(cvvoippeercfgdigitrelay.yfilter)
	|| ydk::is_set(cvvoippeercfgdscppolicynotificationenable.yfilter)
	|| ydk::is_set(cvvoippeercfgexpectfactor.yfilter)
	|| ydk::is_set(cvvoippeercfgfaxbytes.yfilter)
	|| ydk::is_set(cvvoippeercfgfaxrate.yfilter)
	|| ydk::is_set(cvvoippeercfgframesize.yfilter)
	|| ydk::is_set(cvvoippeercfgicpif.yfilter)
	|| ydk::is_set(cvvoippeercfginbandsignaling.yfilter)
	|| ydk::is_set(cvvoippeercfgipprecedence.yfilter)
	|| ydk::is_set(cvvoippeercfgmediapolicynotificationenable.yfilter)
	|| ydk::is_set(cvvoippeercfgmediasetting.yfilter)
	|| ydk::is_set(cvvoippeercfgminacceptableqos.yfilter)
	|| ydk::is_set(cvvoippeercfgminacceptableqosvideo.yfilter)
	|| ydk::is_set(cvvoippeercfgoctetaligned.yfilter)
	|| ydk::is_set(cvvoippeercfgpoorqovnotificationenable.yfilter)
	|| ydk::is_set(cvvoippeercfgredirectip2ip.yfilter)
	|| ydk::is_set(cvvoippeercfgsessionprotocol.yfilter)
	|| ydk::is_set(cvvoippeercfgsessiontarget.yfilter)
	|| ydk::is_set(cvvoippeercfgtechprefix.yfilter)
	|| ydk::is_set(cvvoippeercfgudpchecksumenable.yfilter)
	|| ydk::is_set(cvvoippeercfgvadenable.yfilter);
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DIAL-CONTROL-MIB:CISCO-VOICE-DIAL-CONTROL-MIB/cvVoIPPeerCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvVoIPPeerCfgEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cvvoippeercfgbitrate.is_set || is_set(cvvoippeercfgbitrate.yfilter)) leaf_name_data.push_back(cvvoippeercfgbitrate.get_name_leafdata());
    if (cvvoippeercfgbitrates.is_set || is_set(cvvoippeercfgbitrates.yfilter)) leaf_name_data.push_back(cvvoippeercfgbitrates.get_name_leafdata());
    if (cvvoippeercfgcoderbytes.is_set || is_set(cvvoippeercfgcoderbytes.yfilter)) leaf_name_data.push_back(cvvoippeercfgcoderbytes.get_name_leafdata());
    if (cvvoippeercfgcodermode.is_set || is_set(cvvoippeercfgcodermode.yfilter)) leaf_name_data.push_back(cvvoippeercfgcodermode.get_name_leafdata());
    if (cvvoippeercfgcoderrate.is_set || is_set(cvvoippeercfgcoderrate.yfilter)) leaf_name_data.push_back(cvvoippeercfgcoderrate.get_name_leafdata());
    if (cvvoippeercfgcodingmode.is_set || is_set(cvvoippeercfgcodingmode.yfilter)) leaf_name_data.push_back(cvvoippeercfgcodingmode.get_name_leafdata());
    if (cvvoippeercfgcrc.is_set || is_set(cvvoippeercfgcrc.yfilter)) leaf_name_data.push_back(cvvoippeercfgcrc.get_name_leafdata());
    if (cvvoippeercfgdesiredqos.is_set || is_set(cvvoippeercfgdesiredqos.yfilter)) leaf_name_data.push_back(cvvoippeercfgdesiredqos.get_name_leafdata());
    if (cvvoippeercfgdesiredqosvideo.is_set || is_set(cvvoippeercfgdesiredqosvideo.yfilter)) leaf_name_data.push_back(cvvoippeercfgdesiredqosvideo.get_name_leafdata());
    if (cvvoippeercfgdigitrelay.is_set || is_set(cvvoippeercfgdigitrelay.yfilter)) leaf_name_data.push_back(cvvoippeercfgdigitrelay.get_name_leafdata());
    if (cvvoippeercfgdscppolicynotificationenable.is_set || is_set(cvvoippeercfgdscppolicynotificationenable.yfilter)) leaf_name_data.push_back(cvvoippeercfgdscppolicynotificationenable.get_name_leafdata());
    if (cvvoippeercfgexpectfactor.is_set || is_set(cvvoippeercfgexpectfactor.yfilter)) leaf_name_data.push_back(cvvoippeercfgexpectfactor.get_name_leafdata());
    if (cvvoippeercfgfaxbytes.is_set || is_set(cvvoippeercfgfaxbytes.yfilter)) leaf_name_data.push_back(cvvoippeercfgfaxbytes.get_name_leafdata());
    if (cvvoippeercfgfaxrate.is_set || is_set(cvvoippeercfgfaxrate.yfilter)) leaf_name_data.push_back(cvvoippeercfgfaxrate.get_name_leafdata());
    if (cvvoippeercfgframesize.is_set || is_set(cvvoippeercfgframesize.yfilter)) leaf_name_data.push_back(cvvoippeercfgframesize.get_name_leafdata());
    if (cvvoippeercfgicpif.is_set || is_set(cvvoippeercfgicpif.yfilter)) leaf_name_data.push_back(cvvoippeercfgicpif.get_name_leafdata());
    if (cvvoippeercfginbandsignaling.is_set || is_set(cvvoippeercfginbandsignaling.yfilter)) leaf_name_data.push_back(cvvoippeercfginbandsignaling.get_name_leafdata());
    if (cvvoippeercfgipprecedence.is_set || is_set(cvvoippeercfgipprecedence.yfilter)) leaf_name_data.push_back(cvvoippeercfgipprecedence.get_name_leafdata());
    if (cvvoippeercfgmediapolicynotificationenable.is_set || is_set(cvvoippeercfgmediapolicynotificationenable.yfilter)) leaf_name_data.push_back(cvvoippeercfgmediapolicynotificationenable.get_name_leafdata());
    if (cvvoippeercfgmediasetting.is_set || is_set(cvvoippeercfgmediasetting.yfilter)) leaf_name_data.push_back(cvvoippeercfgmediasetting.get_name_leafdata());
    if (cvvoippeercfgminacceptableqos.is_set || is_set(cvvoippeercfgminacceptableqos.yfilter)) leaf_name_data.push_back(cvvoippeercfgminacceptableqos.get_name_leafdata());
    if (cvvoippeercfgminacceptableqosvideo.is_set || is_set(cvvoippeercfgminacceptableqosvideo.yfilter)) leaf_name_data.push_back(cvvoippeercfgminacceptableqosvideo.get_name_leafdata());
    if (cvvoippeercfgoctetaligned.is_set || is_set(cvvoippeercfgoctetaligned.yfilter)) leaf_name_data.push_back(cvvoippeercfgoctetaligned.get_name_leafdata());
    if (cvvoippeercfgpoorqovnotificationenable.is_set || is_set(cvvoippeercfgpoorqovnotificationenable.yfilter)) leaf_name_data.push_back(cvvoippeercfgpoorqovnotificationenable.get_name_leafdata());
    if (cvvoippeercfgredirectip2ip.is_set || is_set(cvvoippeercfgredirectip2ip.yfilter)) leaf_name_data.push_back(cvvoippeercfgredirectip2ip.get_name_leafdata());
    if (cvvoippeercfgsessionprotocol.is_set || is_set(cvvoippeercfgsessionprotocol.yfilter)) leaf_name_data.push_back(cvvoippeercfgsessionprotocol.get_name_leafdata());
    if (cvvoippeercfgsessiontarget.is_set || is_set(cvvoippeercfgsessiontarget.yfilter)) leaf_name_data.push_back(cvvoippeercfgsessiontarget.get_name_leafdata());
    if (cvvoippeercfgtechprefix.is_set || is_set(cvvoippeercfgtechprefix.yfilter)) leaf_name_data.push_back(cvvoippeercfgtechprefix.get_name_leafdata());
    if (cvvoippeercfgudpchecksumenable.is_set || is_set(cvvoippeercfgudpchecksumenable.yfilter)) leaf_name_data.push_back(cvvoippeercfgudpchecksumenable.get_name_leafdata());
    if (cvvoippeercfgvadenable.is_set || is_set(cvvoippeercfgvadenable.yfilter)) leaf_name_data.push_back(cvvoippeercfgvadenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgBitRate")
    {
        cvvoippeercfgbitrate = value;
        cvvoippeercfgbitrate.value_namespace = name_space;
        cvvoippeercfgbitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgBitRates")
    {
        cvvoippeercfgbitrates[value] = true;
    }
    if(value_path == "cvVoIPPeerCfgCoderBytes")
    {
        cvvoippeercfgcoderbytes = value;
        cvvoippeercfgcoderbytes.value_namespace = name_space;
        cvvoippeercfgcoderbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgCoderMode")
    {
        cvvoippeercfgcodermode = value;
        cvvoippeercfgcodermode.value_namespace = name_space;
        cvvoippeercfgcodermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgCoderRate")
    {
        cvvoippeercfgcoderrate = value;
        cvvoippeercfgcoderrate.value_namespace = name_space;
        cvvoippeercfgcoderrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgCodingMode")
    {
        cvvoippeercfgcodingmode = value;
        cvvoippeercfgcodingmode.value_namespace = name_space;
        cvvoippeercfgcodingmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgCRC")
    {
        cvvoippeercfgcrc = value;
        cvvoippeercfgcrc.value_namespace = name_space;
        cvvoippeercfgcrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgDesiredQoS")
    {
        cvvoippeercfgdesiredqos = value;
        cvvoippeercfgdesiredqos.value_namespace = name_space;
        cvvoippeercfgdesiredqos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgDesiredQoSVideo")
    {
        cvvoippeercfgdesiredqosvideo = value;
        cvvoippeercfgdesiredqosvideo.value_namespace = name_space;
        cvvoippeercfgdesiredqosvideo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgDigitRelay")
    {
        cvvoippeercfgdigitrelay[value] = true;
    }
    if(value_path == "cvVoIPPeerCfgDSCPPolicyNotificationEnable")
    {
        cvvoippeercfgdscppolicynotificationenable = value;
        cvvoippeercfgdscppolicynotificationenable.value_namespace = name_space;
        cvvoippeercfgdscppolicynotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgExpectFactor")
    {
        cvvoippeercfgexpectfactor = value;
        cvvoippeercfgexpectfactor.value_namespace = name_space;
        cvvoippeercfgexpectfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgFaxBytes")
    {
        cvvoippeercfgfaxbytes = value;
        cvvoippeercfgfaxbytes.value_namespace = name_space;
        cvvoippeercfgfaxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgFaxRate")
    {
        cvvoippeercfgfaxrate = value;
        cvvoippeercfgfaxrate.value_namespace = name_space;
        cvvoippeercfgfaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgFrameSize")
    {
        cvvoippeercfgframesize = value;
        cvvoippeercfgframesize.value_namespace = name_space;
        cvvoippeercfgframesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgIcpif")
    {
        cvvoippeercfgicpif = value;
        cvvoippeercfgicpif.value_namespace = name_space;
        cvvoippeercfgicpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgInBandSignaling")
    {
        cvvoippeercfginbandsignaling = value;
        cvvoippeercfginbandsignaling.value_namespace = name_space;
        cvvoippeercfginbandsignaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgIPPrecedence")
    {
        cvvoippeercfgipprecedence = value;
        cvvoippeercfgipprecedence.value_namespace = name_space;
        cvvoippeercfgipprecedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgMediaPolicyNotificationEnable")
    {
        cvvoippeercfgmediapolicynotificationenable = value;
        cvvoippeercfgmediapolicynotificationenable.value_namespace = name_space;
        cvvoippeercfgmediapolicynotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgMediaSetting")
    {
        cvvoippeercfgmediasetting = value;
        cvvoippeercfgmediasetting.value_namespace = name_space;
        cvvoippeercfgmediasetting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgMinAcceptableQoS")
    {
        cvvoippeercfgminacceptableqos = value;
        cvvoippeercfgminacceptableqos.value_namespace = name_space;
        cvvoippeercfgminacceptableqos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgMinAcceptableQoSVideo")
    {
        cvvoippeercfgminacceptableqosvideo = value;
        cvvoippeercfgminacceptableqosvideo.value_namespace = name_space;
        cvvoippeercfgminacceptableqosvideo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgOctetAligned")
    {
        cvvoippeercfgoctetaligned = value;
        cvvoippeercfgoctetaligned.value_namespace = name_space;
        cvvoippeercfgoctetaligned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgPoorQoVNotificationEnable")
    {
        cvvoippeercfgpoorqovnotificationenable = value;
        cvvoippeercfgpoorqovnotificationenable.value_namespace = name_space;
        cvvoippeercfgpoorqovnotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgRedirectip2ip")
    {
        cvvoippeercfgredirectip2ip = value;
        cvvoippeercfgredirectip2ip.value_namespace = name_space;
        cvvoippeercfgredirectip2ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgSessionProtocol")
    {
        cvvoippeercfgsessionprotocol = value;
        cvvoippeercfgsessionprotocol.value_namespace = name_space;
        cvvoippeercfgsessionprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgSessionTarget")
    {
        cvvoippeercfgsessiontarget = value;
        cvvoippeercfgsessiontarget.value_namespace = name_space;
        cvvoippeercfgsessiontarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgTechPrefix")
    {
        cvvoippeercfgtechprefix = value;
        cvvoippeercfgtechprefix.value_namespace = name_space;
        cvvoippeercfgtechprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgUDPChecksumEnable")
    {
        cvvoippeercfgudpchecksumenable = value;
        cvvoippeercfgudpchecksumenable.value_namespace = name_space;
        cvvoippeercfgudpchecksumenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvVoIPPeerCfgVADEnable")
    {
        cvvoippeercfgvadenable = value;
        cvvoippeercfgvadenable.value_namespace = name_space;
        cvvoippeercfgvadenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgBitRate")
    {
        cvvoippeercfgbitrate.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgBitRates")
    {
        cvvoippeercfgbitrates.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgCoderBytes")
    {
        cvvoippeercfgcoderbytes.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgCoderMode")
    {
        cvvoippeercfgcodermode.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgCoderRate")
    {
        cvvoippeercfgcoderrate.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgCodingMode")
    {
        cvvoippeercfgcodingmode.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgCRC")
    {
        cvvoippeercfgcrc.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgDesiredQoS")
    {
        cvvoippeercfgdesiredqos.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgDesiredQoSVideo")
    {
        cvvoippeercfgdesiredqosvideo.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgDigitRelay")
    {
        cvvoippeercfgdigitrelay.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgDSCPPolicyNotificationEnable")
    {
        cvvoippeercfgdscppolicynotificationenable.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgExpectFactor")
    {
        cvvoippeercfgexpectfactor.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgFaxBytes")
    {
        cvvoippeercfgfaxbytes.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgFaxRate")
    {
        cvvoippeercfgfaxrate.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgFrameSize")
    {
        cvvoippeercfgframesize.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgIcpif")
    {
        cvvoippeercfgicpif.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgInBandSignaling")
    {
        cvvoippeercfginbandsignaling.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgIPPrecedence")
    {
        cvvoippeercfgipprecedence.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgMediaPolicyNotificationEnable")
    {
        cvvoippeercfgmediapolicynotificationenable.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgMediaSetting")
    {
        cvvoippeercfgmediasetting.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgMinAcceptableQoS")
    {
        cvvoippeercfgminacceptableqos.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgMinAcceptableQoSVideo")
    {
        cvvoippeercfgminacceptableqosvideo.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgOctetAligned")
    {
        cvvoippeercfgoctetaligned.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgPoorQoVNotificationEnable")
    {
        cvvoippeercfgpoorqovnotificationenable.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgRedirectip2ip")
    {
        cvvoippeercfgredirectip2ip.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgSessionProtocol")
    {
        cvvoippeercfgsessionprotocol.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgSessionTarget")
    {
        cvvoippeercfgsessiontarget.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgTechPrefix")
    {
        cvvoippeercfgtechprefix.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgUDPChecksumEnable")
    {
        cvvoippeercfgudpchecksumenable.yfilter = yfilter;
    }
    if(value_path == "cvVoIPPeerCfgVADEnable")
    {
        cvvoippeercfgvadenable.yfilter = yfilter;
    }
}

bool CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cvVoIPPeerCfgBitRate" || name == "cvVoIPPeerCfgBitRates" || name == "cvVoIPPeerCfgCoderBytes" || name == "cvVoIPPeerCfgCoderMode" || name == "cvVoIPPeerCfgCoderRate" || name == "cvVoIPPeerCfgCodingMode" || name == "cvVoIPPeerCfgCRC" || name == "cvVoIPPeerCfgDesiredQoS" || name == "cvVoIPPeerCfgDesiredQoSVideo" || name == "cvVoIPPeerCfgDigitRelay" || name == "cvVoIPPeerCfgDSCPPolicyNotificationEnable" || name == "cvVoIPPeerCfgExpectFactor" || name == "cvVoIPPeerCfgFaxBytes" || name == "cvVoIPPeerCfgFaxRate" || name == "cvVoIPPeerCfgFrameSize" || name == "cvVoIPPeerCfgIcpif" || name == "cvVoIPPeerCfgInBandSignaling" || name == "cvVoIPPeerCfgIPPrecedence" || name == "cvVoIPPeerCfgMediaPolicyNotificationEnable" || name == "cvVoIPPeerCfgMediaSetting" || name == "cvVoIPPeerCfgMinAcceptableQoS" || name == "cvVoIPPeerCfgMinAcceptableQoSVideo" || name == "cvVoIPPeerCfgOctetAligned" || name == "cvVoIPPeerCfgPoorQoVNotificationEnable" || name == "cvVoIPPeerCfgRedirectip2ip" || name == "cvVoIPPeerCfgSessionProtocol" || name == "cvVoIPPeerCfgSessionTarget" || name == "cvVoIPPeerCfgTechPrefix" || name == "cvVoIPPeerCfgUDPChecksumEnable" || name == "cvVoIPPeerCfgVADEnable")
        return true;
    return false;
}

const Enum::YLeaf CvCallConnectionType::h323 {1, "h323"};
const Enum::YLeaf CvCallConnectionType::sip {2, "sip"};
const Enum::YLeaf CvCallConnectionType::mgcp {3, "mgcp"};
const Enum::YLeaf CvCallConnectionType::sccp {4, "sccp"};
const Enum::YLeaf CvCallConnectionType::multicast {5, "multicast"};
const Enum::YLeaf CvCallConnectionType::cacontrol {6, "cacontrol"};
const Enum::YLeaf CvCallConnectionType::telephony {7, "telephony"};

const Enum::YLeaf CvSessionProtocol::other {1, "other"};
const Enum::YLeaf CvSessionProtocol::cisco {2, "cisco"};
const Enum::YLeaf CvSessionProtocol::sdp {3, "sdp"};
const Enum::YLeaf CvSessionProtocol::sip {4, "sip"};
const Enum::YLeaf CvSessionProtocol::multicast {5, "multicast"};
const Enum::YLeaf CvSessionProtocol::sccp {6, "sccp"};

const Enum::YLeaf CvCallVolumeWMIntvlType::secondStats {1, "secondStats"};
const Enum::YLeaf CvCallVolumeWMIntvlType::minuteStats {2, "minuteStats"};
const Enum::YLeaf CvCallVolumeWMIntvlType::hourStats {3, "hourStats"};
const Enum::YLeaf CvCallVolumeWMIntvlType::fromReloadStats {4, "fromReloadStats"};

const Enum::YLeaf CvIlbcFrameMode::frameMode20 {20, "frameMode20"};
const Enum::YLeaf CvIlbcFrameMode::frameMode30 {30, "frameMode30"};

const Enum::YLeaf CvCallVolumeStatsIntvlType::secondStats {1, "secondStats"};
const Enum::YLeaf CvCallVolumeStatsIntvlType::minuteStats {2, "minuteStats"};
const Enum::YLeaf CvCallVolumeStatsIntvlType::hourStats {3, "hourStats"};

const Enum::YLeaf CvAmrNbRtpEncap::rfc3267 {1, "rfc3267"};

const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgtype::voice {1, "voice"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgtype::voip {2, "voip"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgtype::mmail {3, "mmail"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgtype::voatm {4, "voatm"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgtype::vofr {5, "vofr"};

const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgpeertype::voice {1, "voice"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgpeertype::data {2, "data"};

const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerTestNone {1, "echoCancellerTestNone"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test2A {2, "echoCancellerG168Test2A"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test2B {3, "echoCancellerG168Test2B"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test2Ca {4, "echoCancellerG168Test2Ca"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test2Cb {5, "echoCancellerG168Test2Cb"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test3A {6, "echoCancellerG168Test3A"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test3B {7, "echoCancellerG168Test3B"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test3C {8, "echoCancellerG168Test3C"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test4 {9, "echoCancellerG168Test4"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test6 {10, "echoCancellerG168Test6"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test9 {11, "echoCancellerG168Test9"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test5 {12, "echoCancellerG168Test5"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest::echoCancellerG168Test7 {13, "echoCancellerG168Test7"};

const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgmediasetting::flowThrough {1, "flowThrough"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgmediasetting::flowAround {2, "flowAround"};

const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgcodingmode::adaptive {1, "adaptive"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgcodingmode::independent {2, "independent"};

const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgframesize::frameSize30 {1, "frameSize30"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgframesize::frameSize60 {2, "frameSize60"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgframesize::frameSize30fixed {3, "frameSize30fixed"};
const Enum::YLeaf CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgframesize::frameSize60fixed {4, "frameSize60fixed"};


}
}

