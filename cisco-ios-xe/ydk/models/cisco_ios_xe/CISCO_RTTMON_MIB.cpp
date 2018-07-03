
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RTTMON_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_RTTMON_MIB {

CISCORTTMONMIB::CISCORTTMONMIB()
    :
    rttmonappl(std::make_shared<CISCORTTMONMIB::RttMonAppl>())
    , rttmonapplsupportedrtttypestable(std::make_shared<CISCORTTMONMIB::RttMonApplSupportedRttTypesTable>())
    , rttmonapplsupportedprotocolstable(std::make_shared<CISCORTTMONMIB::RttMonApplSupportedProtocolsTable>())
    , rttmonapplpreconfigedtable(std::make_shared<CISCORTTMONMIB::RttMonApplPreConfigedTable>())
    , rttmonapplauthtable(std::make_shared<CISCORTTMONMIB::RttMonApplAuthTable>())
    , rttmonctrladmintable(std::make_shared<CISCORTTMONMIB::RttMonCtrlAdminTable>())
    , rttmonechoadmintable(std::make_shared<CISCORTTMONMIB::RttMonEchoAdminTable>())
    , rttmonfileioadmintable(std::make_shared<CISCORTTMONMIB::RttMonFileIOAdminTable>())
    , rttmonscriptadmintable(std::make_shared<CISCORTTMONMIB::RttMonScriptAdminTable>())
    , rttmonreacttriggeradmintable(std::make_shared<CISCORTTMONMIB::RttMonReactTriggerAdminTable>())
    , rttmonechopathadmintable(std::make_shared<CISCORTTMONMIB::RttMonEchoPathAdminTable>())
    , rttmongrpscheduleadmintable(std::make_shared<CISCORTTMONMIB::RttMonGrpScheduleAdminTable>())
    , rttmplsvpnmonctrltable(std::make_shared<CISCORTTMONMIB::RttMplsVpnMonCtrlTable>())
    , rttmonreacttable(std::make_shared<CISCORTTMONMIB::RttMonReactTable>())
    , rttmongeneratedopertable(std::make_shared<CISCORTTMONMIB::RttMonGeneratedOperTable>())
    , rttmonstatscapturetable(std::make_shared<CISCORTTMONMIB::RttMonStatsCaptureTable>())
    , rttmonstatscollecttable(std::make_shared<CISCORTTMONMIB::RttMonStatsCollectTable>())
    , rttmonstatstotalstable(std::make_shared<CISCORTTMONMIB::RttMonStatsTotalsTable>())
    , rttmonhttpstatstable(std::make_shared<CISCORTTMONMIB::RttMonHTTPStatsTable>())
    , rttmonjitterstatstable(std::make_shared<CISCORTTMONMIB::RttMonJitterStatsTable>())
    , rttmonlpdgrpstatstable(std::make_shared<CISCORTTMONMIB::RttMonLpdGrpStatsTable>())
    , rttmonhistorycollectiontable(std::make_shared<CISCORTTMONMIB::RttMonHistoryCollectionTable>())
    , rttmonlatesthttpopertable(std::make_shared<CISCORTTMONMIB::RttMonLatestHTTPOperTable>())
    , rttmonlatestjitteropertable(std::make_shared<CISCORTTMONMIB::RttMonLatestJitterOperTable>())
{
    rttmonappl->parent = this;
    rttmonapplsupportedrtttypestable->parent = this;
    rttmonapplsupportedprotocolstable->parent = this;
    rttmonapplpreconfigedtable->parent = this;
    rttmonapplauthtable->parent = this;
    rttmonctrladmintable->parent = this;
    rttmonechoadmintable->parent = this;
    rttmonfileioadmintable->parent = this;
    rttmonscriptadmintable->parent = this;
    rttmonreacttriggeradmintable->parent = this;
    rttmonechopathadmintable->parent = this;
    rttmongrpscheduleadmintable->parent = this;
    rttmplsvpnmonctrltable->parent = this;
    rttmonreacttable->parent = this;
    rttmongeneratedopertable->parent = this;
    rttmonstatscapturetable->parent = this;
    rttmonstatscollecttable->parent = this;
    rttmonstatstotalstable->parent = this;
    rttmonhttpstatstable->parent = this;
    rttmonjitterstatstable->parent = this;
    rttmonlpdgrpstatstable->parent = this;
    rttmonhistorycollectiontable->parent = this;
    rttmonlatesthttpopertable->parent = this;
    rttmonlatestjitteropertable->parent = this;

    yang_name = "CISCO-RTTMON-MIB"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCORTTMONMIB::~CISCORTTMONMIB()
{
}

bool CISCORTTMONMIB::has_data() const
{
    if (is_presence_container) return true;
    return (rttmonappl !=  nullptr && rttmonappl->has_data())
	|| (rttmonapplsupportedrtttypestable !=  nullptr && rttmonapplsupportedrtttypestable->has_data())
	|| (rttmonapplsupportedprotocolstable !=  nullptr && rttmonapplsupportedprotocolstable->has_data())
	|| (rttmonapplpreconfigedtable !=  nullptr && rttmonapplpreconfigedtable->has_data())
	|| (rttmonapplauthtable !=  nullptr && rttmonapplauthtable->has_data())
	|| (rttmonctrladmintable !=  nullptr && rttmonctrladmintable->has_data())
	|| (rttmonechoadmintable !=  nullptr && rttmonechoadmintable->has_data())
	|| (rttmonfileioadmintable !=  nullptr && rttmonfileioadmintable->has_data())
	|| (rttmonscriptadmintable !=  nullptr && rttmonscriptadmintable->has_data())
	|| (rttmonreacttriggeradmintable !=  nullptr && rttmonreacttriggeradmintable->has_data())
	|| (rttmonechopathadmintable !=  nullptr && rttmonechopathadmintable->has_data())
	|| (rttmongrpscheduleadmintable !=  nullptr && rttmongrpscheduleadmintable->has_data())
	|| (rttmplsvpnmonctrltable !=  nullptr && rttmplsvpnmonctrltable->has_data())
	|| (rttmonreacttable !=  nullptr && rttmonreacttable->has_data())
	|| (rttmongeneratedopertable !=  nullptr && rttmongeneratedopertable->has_data())
	|| (rttmonstatscapturetable !=  nullptr && rttmonstatscapturetable->has_data())
	|| (rttmonstatscollecttable !=  nullptr && rttmonstatscollecttable->has_data())
	|| (rttmonstatstotalstable !=  nullptr && rttmonstatstotalstable->has_data())
	|| (rttmonhttpstatstable !=  nullptr && rttmonhttpstatstable->has_data())
	|| (rttmonjitterstatstable !=  nullptr && rttmonjitterstatstable->has_data())
	|| (rttmonlpdgrpstatstable !=  nullptr && rttmonlpdgrpstatstable->has_data())
	|| (rttmonhistorycollectiontable !=  nullptr && rttmonhistorycollectiontable->has_data())
	|| (rttmonlatesthttpopertable !=  nullptr && rttmonlatesthttpopertable->has_data())
	|| (rttmonlatestjitteropertable !=  nullptr && rttmonlatestjitteropertable->has_data());
}

bool CISCORTTMONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (rttmonappl !=  nullptr && rttmonappl->has_operation())
	|| (rttmonapplsupportedrtttypestable !=  nullptr && rttmonapplsupportedrtttypestable->has_operation())
	|| (rttmonapplsupportedprotocolstable !=  nullptr && rttmonapplsupportedprotocolstable->has_operation())
	|| (rttmonapplpreconfigedtable !=  nullptr && rttmonapplpreconfigedtable->has_operation())
	|| (rttmonapplauthtable !=  nullptr && rttmonapplauthtable->has_operation())
	|| (rttmonctrladmintable !=  nullptr && rttmonctrladmintable->has_operation())
	|| (rttmonechoadmintable !=  nullptr && rttmonechoadmintable->has_operation())
	|| (rttmonfileioadmintable !=  nullptr && rttmonfileioadmintable->has_operation())
	|| (rttmonscriptadmintable !=  nullptr && rttmonscriptadmintable->has_operation())
	|| (rttmonreacttriggeradmintable !=  nullptr && rttmonreacttriggeradmintable->has_operation())
	|| (rttmonechopathadmintable !=  nullptr && rttmonechopathadmintable->has_operation())
	|| (rttmongrpscheduleadmintable !=  nullptr && rttmongrpscheduleadmintable->has_operation())
	|| (rttmplsvpnmonctrltable !=  nullptr && rttmplsvpnmonctrltable->has_operation())
	|| (rttmonreacttable !=  nullptr && rttmonreacttable->has_operation())
	|| (rttmongeneratedopertable !=  nullptr && rttmongeneratedopertable->has_operation())
	|| (rttmonstatscapturetable !=  nullptr && rttmonstatscapturetable->has_operation())
	|| (rttmonstatscollecttable !=  nullptr && rttmonstatscollecttable->has_operation())
	|| (rttmonstatstotalstable !=  nullptr && rttmonstatstotalstable->has_operation())
	|| (rttmonhttpstatstable !=  nullptr && rttmonhttpstatstable->has_operation())
	|| (rttmonjitterstatstable !=  nullptr && rttmonjitterstatstable->has_operation())
	|| (rttmonlpdgrpstatstable !=  nullptr && rttmonlpdgrpstatstable->has_operation())
	|| (rttmonhistorycollectiontable !=  nullptr && rttmonhistorycollectiontable->has_operation())
	|| (rttmonlatesthttpopertable !=  nullptr && rttmonlatesthttpopertable->has_operation())
	|| (rttmonlatestjitteropertable !=  nullptr && rttmonlatestjitteropertable->has_operation());
}

std::string CISCORTTMONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonAppl")
    {
        if(rttmonappl == nullptr)
        {
            rttmonappl = std::make_shared<CISCORTTMONMIB::RttMonAppl>();
        }
        return rttmonappl;
    }

    if(child_yang_name == "rttMonApplSupportedRttTypesTable")
    {
        if(rttmonapplsupportedrtttypestable == nullptr)
        {
            rttmonapplsupportedrtttypestable = std::make_shared<CISCORTTMONMIB::RttMonApplSupportedRttTypesTable>();
        }
        return rttmonapplsupportedrtttypestable;
    }

    if(child_yang_name == "rttMonApplSupportedProtocolsTable")
    {
        if(rttmonapplsupportedprotocolstable == nullptr)
        {
            rttmonapplsupportedprotocolstable = std::make_shared<CISCORTTMONMIB::RttMonApplSupportedProtocolsTable>();
        }
        return rttmonapplsupportedprotocolstable;
    }

    if(child_yang_name == "rttMonApplPreConfigedTable")
    {
        if(rttmonapplpreconfigedtable == nullptr)
        {
            rttmonapplpreconfigedtable = std::make_shared<CISCORTTMONMIB::RttMonApplPreConfigedTable>();
        }
        return rttmonapplpreconfigedtable;
    }

    if(child_yang_name == "rttMonApplAuthTable")
    {
        if(rttmonapplauthtable == nullptr)
        {
            rttmonapplauthtable = std::make_shared<CISCORTTMONMIB::RttMonApplAuthTable>();
        }
        return rttmonapplauthtable;
    }

    if(child_yang_name == "rttMonCtrlAdminTable")
    {
        if(rttmonctrladmintable == nullptr)
        {
            rttmonctrladmintable = std::make_shared<CISCORTTMONMIB::RttMonCtrlAdminTable>();
        }
        return rttmonctrladmintable;
    }

    if(child_yang_name == "rttMonEchoAdminTable")
    {
        if(rttmonechoadmintable == nullptr)
        {
            rttmonechoadmintable = std::make_shared<CISCORTTMONMIB::RttMonEchoAdminTable>();
        }
        return rttmonechoadmintable;
    }

    if(child_yang_name == "rttMonFileIOAdminTable")
    {
        if(rttmonfileioadmintable == nullptr)
        {
            rttmonfileioadmintable = std::make_shared<CISCORTTMONMIB::RttMonFileIOAdminTable>();
        }
        return rttmonfileioadmintable;
    }

    if(child_yang_name == "rttMonScriptAdminTable")
    {
        if(rttmonscriptadmintable == nullptr)
        {
            rttmonscriptadmintable = std::make_shared<CISCORTTMONMIB::RttMonScriptAdminTable>();
        }
        return rttmonscriptadmintable;
    }

    if(child_yang_name == "rttMonReactTriggerAdminTable")
    {
        if(rttmonreacttriggeradmintable == nullptr)
        {
            rttmonreacttriggeradmintable = std::make_shared<CISCORTTMONMIB::RttMonReactTriggerAdminTable>();
        }
        return rttmonreacttriggeradmintable;
    }

    if(child_yang_name == "rttMonEchoPathAdminTable")
    {
        if(rttmonechopathadmintable == nullptr)
        {
            rttmonechopathadmintable = std::make_shared<CISCORTTMONMIB::RttMonEchoPathAdminTable>();
        }
        return rttmonechopathadmintable;
    }

    if(child_yang_name == "rttMonGrpScheduleAdminTable")
    {
        if(rttmongrpscheduleadmintable == nullptr)
        {
            rttmongrpscheduleadmintable = std::make_shared<CISCORTTMONMIB::RttMonGrpScheduleAdminTable>();
        }
        return rttmongrpscheduleadmintable;
    }

    if(child_yang_name == "rttMplsVpnMonCtrlTable")
    {
        if(rttmplsvpnmonctrltable == nullptr)
        {
            rttmplsvpnmonctrltable = std::make_shared<CISCORTTMONMIB::RttMplsVpnMonCtrlTable>();
        }
        return rttmplsvpnmonctrltable;
    }

    if(child_yang_name == "rttMonReactTable")
    {
        if(rttmonreacttable == nullptr)
        {
            rttmonreacttable = std::make_shared<CISCORTTMONMIB::RttMonReactTable>();
        }
        return rttmonreacttable;
    }

    if(child_yang_name == "rttMonGeneratedOperTable")
    {
        if(rttmongeneratedopertable == nullptr)
        {
            rttmongeneratedopertable = std::make_shared<CISCORTTMONMIB::RttMonGeneratedOperTable>();
        }
        return rttmongeneratedopertable;
    }

    if(child_yang_name == "rttMonStatsCaptureTable")
    {
        if(rttmonstatscapturetable == nullptr)
        {
            rttmonstatscapturetable = std::make_shared<CISCORTTMONMIB::RttMonStatsCaptureTable>();
        }
        return rttmonstatscapturetable;
    }

    if(child_yang_name == "rttMonStatsCollectTable")
    {
        if(rttmonstatscollecttable == nullptr)
        {
            rttmonstatscollecttable = std::make_shared<CISCORTTMONMIB::RttMonStatsCollectTable>();
        }
        return rttmonstatscollecttable;
    }

    if(child_yang_name == "rttMonStatsTotalsTable")
    {
        if(rttmonstatstotalstable == nullptr)
        {
            rttmonstatstotalstable = std::make_shared<CISCORTTMONMIB::RttMonStatsTotalsTable>();
        }
        return rttmonstatstotalstable;
    }

    if(child_yang_name == "rttMonHTTPStatsTable")
    {
        if(rttmonhttpstatstable == nullptr)
        {
            rttmonhttpstatstable = std::make_shared<CISCORTTMONMIB::RttMonHTTPStatsTable>();
        }
        return rttmonhttpstatstable;
    }

    if(child_yang_name == "rttMonJitterStatsTable")
    {
        if(rttmonjitterstatstable == nullptr)
        {
            rttmonjitterstatstable = std::make_shared<CISCORTTMONMIB::RttMonJitterStatsTable>();
        }
        return rttmonjitterstatstable;
    }

    if(child_yang_name == "rttMonLpdGrpStatsTable")
    {
        if(rttmonlpdgrpstatstable == nullptr)
        {
            rttmonlpdgrpstatstable = std::make_shared<CISCORTTMONMIB::RttMonLpdGrpStatsTable>();
        }
        return rttmonlpdgrpstatstable;
    }

    if(child_yang_name == "rttMonHistoryCollectionTable")
    {
        if(rttmonhistorycollectiontable == nullptr)
        {
            rttmonhistorycollectiontable = std::make_shared<CISCORTTMONMIB::RttMonHistoryCollectionTable>();
        }
        return rttmonhistorycollectiontable;
    }

    if(child_yang_name == "rttMonLatestHTTPOperTable")
    {
        if(rttmonlatesthttpopertable == nullptr)
        {
            rttmonlatesthttpopertable = std::make_shared<CISCORTTMONMIB::RttMonLatestHTTPOperTable>();
        }
        return rttmonlatesthttpopertable;
    }

    if(child_yang_name == "rttMonLatestJitterOperTable")
    {
        if(rttmonlatestjitteropertable == nullptr)
        {
            rttmonlatestjitteropertable = std::make_shared<CISCORTTMONMIB::RttMonLatestJitterOperTable>();
        }
        return rttmonlatestjitteropertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttmonappl != nullptr)
    {
        children["rttMonAppl"] = rttmonappl;
    }

    if(rttmonapplsupportedrtttypestable != nullptr)
    {
        children["rttMonApplSupportedRttTypesTable"] = rttmonapplsupportedrtttypestable;
    }

    if(rttmonapplsupportedprotocolstable != nullptr)
    {
        children["rttMonApplSupportedProtocolsTable"] = rttmonapplsupportedprotocolstable;
    }

    if(rttmonapplpreconfigedtable != nullptr)
    {
        children["rttMonApplPreConfigedTable"] = rttmonapplpreconfigedtable;
    }

    if(rttmonapplauthtable != nullptr)
    {
        children["rttMonApplAuthTable"] = rttmonapplauthtable;
    }

    if(rttmonctrladmintable != nullptr)
    {
        children["rttMonCtrlAdminTable"] = rttmonctrladmintable;
    }

    if(rttmonechoadmintable != nullptr)
    {
        children["rttMonEchoAdminTable"] = rttmonechoadmintable;
    }

    if(rttmonfileioadmintable != nullptr)
    {
        children["rttMonFileIOAdminTable"] = rttmonfileioadmintable;
    }

    if(rttmonscriptadmintable != nullptr)
    {
        children["rttMonScriptAdminTable"] = rttmonscriptadmintable;
    }

    if(rttmonreacttriggeradmintable != nullptr)
    {
        children["rttMonReactTriggerAdminTable"] = rttmonreacttriggeradmintable;
    }

    if(rttmonechopathadmintable != nullptr)
    {
        children["rttMonEchoPathAdminTable"] = rttmonechopathadmintable;
    }

    if(rttmongrpscheduleadmintable != nullptr)
    {
        children["rttMonGrpScheduleAdminTable"] = rttmongrpscheduleadmintable;
    }

    if(rttmplsvpnmonctrltable != nullptr)
    {
        children["rttMplsVpnMonCtrlTable"] = rttmplsvpnmonctrltable;
    }

    if(rttmonreacttable != nullptr)
    {
        children["rttMonReactTable"] = rttmonreacttable;
    }

    if(rttmongeneratedopertable != nullptr)
    {
        children["rttMonGeneratedOperTable"] = rttmongeneratedopertable;
    }

    if(rttmonstatscapturetable != nullptr)
    {
        children["rttMonStatsCaptureTable"] = rttmonstatscapturetable;
    }

    if(rttmonstatscollecttable != nullptr)
    {
        children["rttMonStatsCollectTable"] = rttmonstatscollecttable;
    }

    if(rttmonstatstotalstable != nullptr)
    {
        children["rttMonStatsTotalsTable"] = rttmonstatstotalstable;
    }

    if(rttmonhttpstatstable != nullptr)
    {
        children["rttMonHTTPStatsTable"] = rttmonhttpstatstable;
    }

    if(rttmonjitterstatstable != nullptr)
    {
        children["rttMonJitterStatsTable"] = rttmonjitterstatstable;
    }

    if(rttmonlpdgrpstatstable != nullptr)
    {
        children["rttMonLpdGrpStatsTable"] = rttmonlpdgrpstatstable;
    }

    if(rttmonhistorycollectiontable != nullptr)
    {
        children["rttMonHistoryCollectionTable"] = rttmonhistorycollectiontable;
    }

    if(rttmonlatesthttpopertable != nullptr)
    {
        children["rttMonLatestHTTPOperTable"] = rttmonlatesthttpopertable;
    }

    if(rttmonlatestjitteropertable != nullptr)
    {
        children["rttMonLatestJitterOperTable"] = rttmonlatestjitteropertable;
    }

    return children;
}

void CISCORTTMONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCORTTMONMIB::clone_ptr() const
{
    return std::make_shared<CISCORTTMONMIB>();
}

std::string CISCORTTMONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCORTTMONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCORTTMONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCORTTMONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCORTTMONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonAppl" || name == "rttMonApplSupportedRttTypesTable" || name == "rttMonApplSupportedProtocolsTable" || name == "rttMonApplPreConfigedTable" || name == "rttMonApplAuthTable" || name == "rttMonCtrlAdminTable" || name == "rttMonEchoAdminTable" || name == "rttMonFileIOAdminTable" || name == "rttMonScriptAdminTable" || name == "rttMonReactTriggerAdminTable" || name == "rttMonEchoPathAdminTable" || name == "rttMonGrpScheduleAdminTable" || name == "rttMplsVpnMonCtrlTable" || name == "rttMonReactTable" || name == "rttMonGeneratedOperTable" || name == "rttMonStatsCaptureTable" || name == "rttMonStatsCollectTable" || name == "rttMonStatsTotalsTable" || name == "rttMonHTTPStatsTable" || name == "rttMonJitterStatsTable" || name == "rttMonLpdGrpStatsTable" || name == "rttMonHistoryCollectionTable" || name == "rttMonLatestHTTPOperTable" || name == "rttMonLatestJitterOperTable")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonAppl::RttMonAppl()
    :
    rttmonapplversion{YType::str, "rttMonApplVersion"},
    rttmonapplmaxpacketdatasize{YType::int32, "rttMonApplMaxPacketDataSize"},
    rttmonappltimeoflastset{YType::uint32, "rttMonApplTimeOfLastSet"},
    rttmonapplnumctrladminentry{YType::int32, "rttMonApplNumCtrlAdminEntry"},
    rttmonapplreset{YType::enumeration, "rttMonApplReset"},
    rttmonapplpreconfigedreset{YType::enumeration, "rttMonApplPreConfigedReset"},
    rttmonapplprobecapacity{YType::int32, "rttMonApplProbeCapacity"},
    rttmonapplfreememlowwatermark{YType::int32, "rttMonApplFreeMemLowWaterMark"},
    rttmonappllatestseterror{YType::str, "rttMonApplLatestSetError"},
    rttmonapplresponder{YType::boolean, "rttMonApplResponder"},
    rttmonappllpdgrpstatsreset{YType::int32, "rttMonApplLpdGrpStatsReset"}
{

    yang_name = "rttMonAppl"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonAppl::~RttMonAppl()
{
}

bool CISCORTTMONMIB::RttMonAppl::has_data() const
{
    if (is_presence_container) return true;
    return rttmonapplversion.is_set
	|| rttmonapplmaxpacketdatasize.is_set
	|| rttmonappltimeoflastset.is_set
	|| rttmonapplnumctrladminentry.is_set
	|| rttmonapplreset.is_set
	|| rttmonapplpreconfigedreset.is_set
	|| rttmonapplprobecapacity.is_set
	|| rttmonapplfreememlowwatermark.is_set
	|| rttmonappllatestseterror.is_set
	|| rttmonapplresponder.is_set
	|| rttmonappllpdgrpstatsreset.is_set;
}

bool CISCORTTMONMIB::RttMonAppl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplversion.yfilter)
	|| ydk::is_set(rttmonapplmaxpacketdatasize.yfilter)
	|| ydk::is_set(rttmonappltimeoflastset.yfilter)
	|| ydk::is_set(rttmonapplnumctrladminentry.yfilter)
	|| ydk::is_set(rttmonapplreset.yfilter)
	|| ydk::is_set(rttmonapplpreconfigedreset.yfilter)
	|| ydk::is_set(rttmonapplprobecapacity.yfilter)
	|| ydk::is_set(rttmonapplfreememlowwatermark.yfilter)
	|| ydk::is_set(rttmonappllatestseterror.yfilter)
	|| ydk::is_set(rttmonapplresponder.yfilter)
	|| ydk::is_set(rttmonappllpdgrpstatsreset.yfilter);
}

std::string CISCORTTMONMIB::RttMonAppl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonAppl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonAppl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonAppl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplversion.is_set || is_set(rttmonapplversion.yfilter)) leaf_name_data.push_back(rttmonapplversion.get_name_leafdata());
    if (rttmonapplmaxpacketdatasize.is_set || is_set(rttmonapplmaxpacketdatasize.yfilter)) leaf_name_data.push_back(rttmonapplmaxpacketdatasize.get_name_leafdata());
    if (rttmonappltimeoflastset.is_set || is_set(rttmonappltimeoflastset.yfilter)) leaf_name_data.push_back(rttmonappltimeoflastset.get_name_leafdata());
    if (rttmonapplnumctrladminentry.is_set || is_set(rttmonapplnumctrladminentry.yfilter)) leaf_name_data.push_back(rttmonapplnumctrladminentry.get_name_leafdata());
    if (rttmonapplreset.is_set || is_set(rttmonapplreset.yfilter)) leaf_name_data.push_back(rttmonapplreset.get_name_leafdata());
    if (rttmonapplpreconfigedreset.is_set || is_set(rttmonapplpreconfigedreset.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedreset.get_name_leafdata());
    if (rttmonapplprobecapacity.is_set || is_set(rttmonapplprobecapacity.yfilter)) leaf_name_data.push_back(rttmonapplprobecapacity.get_name_leafdata());
    if (rttmonapplfreememlowwatermark.is_set || is_set(rttmonapplfreememlowwatermark.yfilter)) leaf_name_data.push_back(rttmonapplfreememlowwatermark.get_name_leafdata());
    if (rttmonappllatestseterror.is_set || is_set(rttmonappllatestseterror.yfilter)) leaf_name_data.push_back(rttmonappllatestseterror.get_name_leafdata());
    if (rttmonapplresponder.is_set || is_set(rttmonapplresponder.yfilter)) leaf_name_data.push_back(rttmonapplresponder.get_name_leafdata());
    if (rttmonappllpdgrpstatsreset.is_set || is_set(rttmonappllpdgrpstatsreset.yfilter)) leaf_name_data.push_back(rttmonappllpdgrpstatsreset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonAppl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonAppl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonAppl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonApplVersion")
    {
        rttmonapplversion = value;
        rttmonapplversion.value_namespace = name_space;
        rttmonapplversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplMaxPacketDataSize")
    {
        rttmonapplmaxpacketdatasize = value;
        rttmonapplmaxpacketdatasize.value_namespace = name_space;
        rttmonapplmaxpacketdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplTimeOfLastSet")
    {
        rttmonappltimeoflastset = value;
        rttmonappltimeoflastset.value_namespace = name_space;
        rttmonappltimeoflastset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplNumCtrlAdminEntry")
    {
        rttmonapplnumctrladminentry = value;
        rttmonapplnumctrladminentry.value_namespace = name_space;
        rttmonapplnumctrladminentry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplReset")
    {
        rttmonapplreset = value;
        rttmonapplreset.value_namespace = name_space;
        rttmonapplreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplPreConfigedReset")
    {
        rttmonapplpreconfigedreset = value;
        rttmonapplpreconfigedreset.value_namespace = name_space;
        rttmonapplpreconfigedreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplProbeCapacity")
    {
        rttmonapplprobecapacity = value;
        rttmonapplprobecapacity.value_namespace = name_space;
        rttmonapplprobecapacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplFreeMemLowWaterMark")
    {
        rttmonapplfreememlowwatermark = value;
        rttmonapplfreememlowwatermark.value_namespace = name_space;
        rttmonapplfreememlowwatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplLatestSetError")
    {
        rttmonappllatestseterror = value;
        rttmonappllatestseterror.value_namespace = name_space;
        rttmonappllatestseterror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplResponder")
    {
        rttmonapplresponder = value;
        rttmonapplresponder.value_namespace = name_space;
        rttmonapplresponder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplLpdGrpStatsReset")
    {
        rttmonappllpdgrpstatsreset = value;
        rttmonappllpdgrpstatsreset.value_namespace = name_space;
        rttmonappllpdgrpstatsreset.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonAppl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonApplVersion")
    {
        rttmonapplversion.yfilter = yfilter;
    }
    if(value_path == "rttMonApplMaxPacketDataSize")
    {
        rttmonapplmaxpacketdatasize.yfilter = yfilter;
    }
    if(value_path == "rttMonApplTimeOfLastSet")
    {
        rttmonappltimeoflastset.yfilter = yfilter;
    }
    if(value_path == "rttMonApplNumCtrlAdminEntry")
    {
        rttmonapplnumctrladminentry.yfilter = yfilter;
    }
    if(value_path == "rttMonApplReset")
    {
        rttmonapplreset.yfilter = yfilter;
    }
    if(value_path == "rttMonApplPreConfigedReset")
    {
        rttmonapplpreconfigedreset.yfilter = yfilter;
    }
    if(value_path == "rttMonApplProbeCapacity")
    {
        rttmonapplprobecapacity.yfilter = yfilter;
    }
    if(value_path == "rttMonApplFreeMemLowWaterMark")
    {
        rttmonapplfreememlowwatermark.yfilter = yfilter;
    }
    if(value_path == "rttMonApplLatestSetError")
    {
        rttmonappllatestseterror.yfilter = yfilter;
    }
    if(value_path == "rttMonApplResponder")
    {
        rttmonapplresponder.yfilter = yfilter;
    }
    if(value_path == "rttMonApplLpdGrpStatsReset")
    {
        rttmonappllpdgrpstatsreset.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonAppl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplVersion" || name == "rttMonApplMaxPacketDataSize" || name == "rttMonApplTimeOfLastSet" || name == "rttMonApplNumCtrlAdminEntry" || name == "rttMonApplReset" || name == "rttMonApplPreConfigedReset" || name == "rttMonApplProbeCapacity" || name == "rttMonApplFreeMemLowWaterMark" || name == "rttMonApplLatestSetError" || name == "rttMonApplResponder" || name == "rttMonApplLpdGrpStatsReset")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesTable()
    :
    rttmonapplsupportedrtttypesentry(this, {"rttmonapplsupportedrtttypes"})
{

    yang_name = "rttMonApplSupportedRttTypesTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::~RttMonApplSupportedRttTypesTable()
{
}

bool CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonapplsupportedrtttypesentry.len(); index++)
    {
        if(rttmonapplsupportedrtttypesentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplsupportedrtttypesentry.len(); index++)
    {
        if(rttmonapplsupportedrtttypesentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedRttTypesTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplSupportedRttTypesEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry>();
        c->parent = this;
        rttmonapplsupportedrtttypesentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonapplsupportedrtttypesentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedRttTypesEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::RttMonApplSupportedRttTypesEntry()
    :
    rttmonapplsupportedrtttypes{YType::enumeration, "rttMonApplSupportedRttTypes"},
    rttmonapplsupportedrtttypesvalid{YType::boolean, "rttMonApplSupportedRttTypesValid"}
{

    yang_name = "rttMonApplSupportedRttTypesEntry"; yang_parent_name = "rttMonApplSupportedRttTypesTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::~RttMonApplSupportedRttTypesEntry()
{
}

bool CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonapplsupportedrtttypes.is_set
	|| rttmonapplsupportedrtttypesvalid.is_set;
}

bool CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplsupportedrtttypes.yfilter)
	|| ydk::is_set(rttmonapplsupportedrtttypesvalid.yfilter);
}

std::string CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplSupportedRttTypesTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedRttTypesEntry";
    ADD_KEY_TOKEN(rttmonapplsupportedrtttypes, "rttMonApplSupportedRttTypes");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplsupportedrtttypes.is_set || is_set(rttmonapplsupportedrtttypes.yfilter)) leaf_name_data.push_back(rttmonapplsupportedrtttypes.get_name_leafdata());
    if (rttmonapplsupportedrtttypesvalid.is_set || is_set(rttmonapplsupportedrtttypesvalid.yfilter)) leaf_name_data.push_back(rttmonapplsupportedrtttypesvalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonApplSupportedRttTypes")
    {
        rttmonapplsupportedrtttypes = value;
        rttmonapplsupportedrtttypes.value_namespace = name_space;
        rttmonapplsupportedrtttypes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplSupportedRttTypesValid")
    {
        rttmonapplsupportedrtttypesvalid = value;
        rttmonapplsupportedrtttypesvalid.value_namespace = name_space;
        rttmonapplsupportedrtttypesvalid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonApplSupportedRttTypes")
    {
        rttmonapplsupportedrtttypes.yfilter = yfilter;
    }
    if(value_path == "rttMonApplSupportedRttTypesValid")
    {
        rttmonapplsupportedrtttypesvalid.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedRttTypes" || name == "rttMonApplSupportedRttTypesValid")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsTable()
    :
    rttmonapplsupportedprotocolsentry(this, {"rttmonapplsupportedprotocols"})
{

    yang_name = "rttMonApplSupportedProtocolsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::~RttMonApplSupportedProtocolsTable()
{
}

bool CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonapplsupportedprotocolsentry.len(); index++)
    {
        if(rttmonapplsupportedprotocolsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplsupportedprotocolsentry.len(); index++)
    {
        if(rttmonapplsupportedprotocolsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedProtocolsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplSupportedProtocolsEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry>();
        c->parent = this;
        rttmonapplsupportedprotocolsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonapplsupportedprotocolsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedProtocolsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::RttMonApplSupportedProtocolsEntry()
    :
    rttmonapplsupportedprotocols{YType::enumeration, "rttMonApplSupportedProtocols"},
    rttmonapplsupportedprotocolsvalid{YType::boolean, "rttMonApplSupportedProtocolsValid"}
{

    yang_name = "rttMonApplSupportedProtocolsEntry"; yang_parent_name = "rttMonApplSupportedProtocolsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::~RttMonApplSupportedProtocolsEntry()
{
}

bool CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonapplsupportedprotocols.is_set
	|| rttmonapplsupportedprotocolsvalid.is_set;
}

bool CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplsupportedprotocols.yfilter)
	|| ydk::is_set(rttmonapplsupportedprotocolsvalid.yfilter);
}

std::string CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplSupportedProtocolsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedProtocolsEntry";
    ADD_KEY_TOKEN(rttmonapplsupportedprotocols, "rttMonApplSupportedProtocols");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplsupportedprotocols.is_set || is_set(rttmonapplsupportedprotocols.yfilter)) leaf_name_data.push_back(rttmonapplsupportedprotocols.get_name_leafdata());
    if (rttmonapplsupportedprotocolsvalid.is_set || is_set(rttmonapplsupportedprotocolsvalid.yfilter)) leaf_name_data.push_back(rttmonapplsupportedprotocolsvalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonApplSupportedProtocols")
    {
        rttmonapplsupportedprotocols = value;
        rttmonapplsupportedprotocols.value_namespace = name_space;
        rttmonapplsupportedprotocols.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplSupportedProtocolsValid")
    {
        rttmonapplsupportedprotocolsvalid = value;
        rttmonapplsupportedprotocolsvalid.value_namespace = name_space;
        rttmonapplsupportedprotocolsvalid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonApplSupportedProtocols")
    {
        rttmonapplsupportedprotocols.yfilter = yfilter;
    }
    if(value_path == "rttMonApplSupportedProtocolsValid")
    {
        rttmonapplsupportedprotocolsvalid.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedProtocols" || name == "rttMonApplSupportedProtocolsValid")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedTable()
    :
    rttmonapplpreconfigedentry(this, {"rttmonapplpreconfigedtype", "rttmonapplpreconfigedname"})
{

    yang_name = "rttMonApplPreConfigedTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplPreConfigedTable::~RttMonApplPreConfigedTable()
{
}

bool CISCORTTMONMIB::RttMonApplPreConfigedTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonapplpreconfigedentry.len(); index++)
    {
        if(rttmonapplpreconfigedentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonApplPreConfigedTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplpreconfigedentry.len(); index++)
    {
        if(rttmonapplpreconfigedentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonApplPreConfigedTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplPreConfigedTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplPreConfigedTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplPreConfigedTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplPreConfigedTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplPreConfigedEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry>();
        c->parent = this;
        rttmonapplpreconfigedentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplPreConfigedTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonapplpreconfigedentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonApplPreConfigedTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonApplPreConfigedTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonApplPreConfigedTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplPreConfigedEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::RttMonApplPreConfigedEntry()
    :
    rttmonapplpreconfigedtype{YType::enumeration, "rttMonApplPreConfigedType"},
    rttmonapplpreconfigedname{YType::str, "rttMonApplPreConfigedName"},
    rttmonapplpreconfigedvalid{YType::boolean, "rttMonApplPreConfigedValid"}
{

    yang_name = "rttMonApplPreConfigedEntry"; yang_parent_name = "rttMonApplPreConfigedTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::~RttMonApplPreConfigedEntry()
{
}

bool CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonapplpreconfigedtype.is_set
	|| rttmonapplpreconfigedname.is_set
	|| rttmonapplpreconfigedvalid.is_set;
}

bool CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplpreconfigedtype.yfilter)
	|| ydk::is_set(rttmonapplpreconfigedname.yfilter)
	|| ydk::is_set(rttmonapplpreconfigedvalid.yfilter);
}

std::string CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplPreConfigedTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplPreConfigedEntry";
    ADD_KEY_TOKEN(rttmonapplpreconfigedtype, "rttMonApplPreConfigedType");
    ADD_KEY_TOKEN(rttmonapplpreconfigedname, "rttMonApplPreConfigedName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplpreconfigedtype.is_set || is_set(rttmonapplpreconfigedtype.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedtype.get_name_leafdata());
    if (rttmonapplpreconfigedname.is_set || is_set(rttmonapplpreconfigedname.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedname.get_name_leafdata());
    if (rttmonapplpreconfigedvalid.is_set || is_set(rttmonapplpreconfigedvalid.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedvalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonApplPreConfigedType")
    {
        rttmonapplpreconfigedtype = value;
        rttmonapplpreconfigedtype.value_namespace = name_space;
        rttmonapplpreconfigedtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplPreConfigedName")
    {
        rttmonapplpreconfigedname = value;
        rttmonapplpreconfigedname.value_namespace = name_space;
        rttmonapplpreconfigedname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplPreConfigedValid")
    {
        rttmonapplpreconfigedvalid = value;
        rttmonapplpreconfigedvalid.value_namespace = name_space;
        rttmonapplpreconfigedvalid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonApplPreConfigedType")
    {
        rttmonapplpreconfigedtype.yfilter = yfilter;
    }
    if(value_path == "rttMonApplPreConfigedName")
    {
        rttmonapplpreconfigedname.yfilter = yfilter;
    }
    if(value_path == "rttMonApplPreConfigedValid")
    {
        rttmonapplpreconfigedvalid.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplPreConfigedType" || name == "rttMonApplPreConfigedName" || name == "rttMonApplPreConfigedValid")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthTable()
    :
    rttmonapplauthentry(this, {"rttmonapplauthindex"})
{

    yang_name = "rttMonApplAuthTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplAuthTable::~RttMonApplAuthTable()
{
}

bool CISCORTTMONMIB::RttMonApplAuthTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonapplauthentry.len(); index++)
    {
        if(rttmonapplauthentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonApplAuthTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplauthentry.len(); index++)
    {
        if(rttmonapplauthentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonApplAuthTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplAuthTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplAuthTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplAuthTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplAuthTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplAuthEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry>();
        c->parent = this;
        rttmonapplauthentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplAuthTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonapplauthentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonApplAuthTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonApplAuthTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonApplAuthTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplAuthEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::RttMonApplAuthEntry()
    :
    rttmonapplauthindex{YType::int32, "rttMonApplAuthIndex"},
    rttmonapplauthkeychain{YType::str, "rttMonApplAuthKeyChain"},
    rttmonapplauthkeystring1{YType::str, "rttMonApplAuthKeyString1"},
    rttmonapplauthkeystring2{YType::str, "rttMonApplAuthKeyString2"},
    rttmonapplauthkeystring3{YType::str, "rttMonApplAuthKeyString3"},
    rttmonapplauthkeystring4{YType::str, "rttMonApplAuthKeyString4"},
    rttmonapplauthkeystring5{YType::str, "rttMonApplAuthKeyString5"},
    rttmonapplauthstatus{YType::enumeration, "rttMonApplAuthStatus"}
{

    yang_name = "rttMonApplAuthEntry"; yang_parent_name = "rttMonApplAuthTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::~RttMonApplAuthEntry()
{
}

bool CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonapplauthindex.is_set
	|| rttmonapplauthkeychain.is_set
	|| rttmonapplauthkeystring1.is_set
	|| rttmonapplauthkeystring2.is_set
	|| rttmonapplauthkeystring3.is_set
	|| rttmonapplauthkeystring4.is_set
	|| rttmonapplauthkeystring5.is_set
	|| rttmonapplauthstatus.is_set;
}

bool CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplauthindex.yfilter)
	|| ydk::is_set(rttmonapplauthkeychain.yfilter)
	|| ydk::is_set(rttmonapplauthkeystring1.yfilter)
	|| ydk::is_set(rttmonapplauthkeystring2.yfilter)
	|| ydk::is_set(rttmonapplauthkeystring3.yfilter)
	|| ydk::is_set(rttmonapplauthkeystring4.yfilter)
	|| ydk::is_set(rttmonapplauthkeystring5.yfilter)
	|| ydk::is_set(rttmonapplauthstatus.yfilter);
}

std::string CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplAuthTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplAuthEntry";
    ADD_KEY_TOKEN(rttmonapplauthindex, "rttMonApplAuthIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplauthindex.is_set || is_set(rttmonapplauthindex.yfilter)) leaf_name_data.push_back(rttmonapplauthindex.get_name_leafdata());
    if (rttmonapplauthkeychain.is_set || is_set(rttmonapplauthkeychain.yfilter)) leaf_name_data.push_back(rttmonapplauthkeychain.get_name_leafdata());
    if (rttmonapplauthkeystring1.is_set || is_set(rttmonapplauthkeystring1.yfilter)) leaf_name_data.push_back(rttmonapplauthkeystring1.get_name_leafdata());
    if (rttmonapplauthkeystring2.is_set || is_set(rttmonapplauthkeystring2.yfilter)) leaf_name_data.push_back(rttmonapplauthkeystring2.get_name_leafdata());
    if (rttmonapplauthkeystring3.is_set || is_set(rttmonapplauthkeystring3.yfilter)) leaf_name_data.push_back(rttmonapplauthkeystring3.get_name_leafdata());
    if (rttmonapplauthkeystring4.is_set || is_set(rttmonapplauthkeystring4.yfilter)) leaf_name_data.push_back(rttmonapplauthkeystring4.get_name_leafdata());
    if (rttmonapplauthkeystring5.is_set || is_set(rttmonapplauthkeystring5.yfilter)) leaf_name_data.push_back(rttmonapplauthkeystring5.get_name_leafdata());
    if (rttmonapplauthstatus.is_set || is_set(rttmonapplauthstatus.yfilter)) leaf_name_data.push_back(rttmonapplauthstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonApplAuthIndex")
    {
        rttmonapplauthindex = value;
        rttmonapplauthindex.value_namespace = name_space;
        rttmonapplauthindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplAuthKeyChain")
    {
        rttmonapplauthkeychain = value;
        rttmonapplauthkeychain.value_namespace = name_space;
        rttmonapplauthkeychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplAuthKeyString1")
    {
        rttmonapplauthkeystring1 = value;
        rttmonapplauthkeystring1.value_namespace = name_space;
        rttmonapplauthkeystring1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplAuthKeyString2")
    {
        rttmonapplauthkeystring2 = value;
        rttmonapplauthkeystring2.value_namespace = name_space;
        rttmonapplauthkeystring2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplAuthKeyString3")
    {
        rttmonapplauthkeystring3 = value;
        rttmonapplauthkeystring3.value_namespace = name_space;
        rttmonapplauthkeystring3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplAuthKeyString4")
    {
        rttmonapplauthkeystring4 = value;
        rttmonapplauthkeystring4.value_namespace = name_space;
        rttmonapplauthkeystring4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplAuthKeyString5")
    {
        rttmonapplauthkeystring5 = value;
        rttmonapplauthkeystring5.value_namespace = name_space;
        rttmonapplauthkeystring5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplAuthStatus")
    {
        rttmonapplauthstatus = value;
        rttmonapplauthstatus.value_namespace = name_space;
        rttmonapplauthstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonApplAuthIndex")
    {
        rttmonapplauthindex.yfilter = yfilter;
    }
    if(value_path == "rttMonApplAuthKeyChain")
    {
        rttmonapplauthkeychain.yfilter = yfilter;
    }
    if(value_path == "rttMonApplAuthKeyString1")
    {
        rttmonapplauthkeystring1.yfilter = yfilter;
    }
    if(value_path == "rttMonApplAuthKeyString2")
    {
        rttmonapplauthkeystring2.yfilter = yfilter;
    }
    if(value_path == "rttMonApplAuthKeyString3")
    {
        rttmonapplauthkeystring3.yfilter = yfilter;
    }
    if(value_path == "rttMonApplAuthKeyString4")
    {
        rttmonapplauthkeystring4.yfilter = yfilter;
    }
    if(value_path == "rttMonApplAuthKeyString5")
    {
        rttmonapplauthkeystring5.yfilter = yfilter;
    }
    if(value_path == "rttMonApplAuthStatus")
    {
        rttmonapplauthstatus.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplAuthIndex" || name == "rttMonApplAuthKeyChain" || name == "rttMonApplAuthKeyString1" || name == "rttMonApplAuthKeyString2" || name == "rttMonApplAuthKeyString3" || name == "rttMonApplAuthKeyString4" || name == "rttMonApplAuthKeyString5" || name == "rttMonApplAuthStatus")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminTable()
    :
    rttmonctrladminentry(this, {"rttmonctrladminindex"})
{

    yang_name = "rttMonCtrlAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonCtrlAdminTable::~RttMonCtrlAdminTable()
{
}

bool CISCORTTMONMIB::RttMonCtrlAdminTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonctrladminentry.len(); index++)
    {
        if(rttmonctrladminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonCtrlAdminTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonctrladminentry.len(); index++)
    {
        if(rttmonctrladminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonCtrlAdminTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonCtrlAdminTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonCtrlAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonCtrlAdminTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonCtrlAdminTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonCtrlAdminEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry>();
        c->parent = this;
        rttmonctrladminentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonCtrlAdminTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonctrladminentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonCtrlAdminTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonCtrlAdminTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonCtrlAdminTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlAdminEntry()
    :
    rttmonctrladminindex{YType::int32, "rttMonCtrlAdminIndex"},
    rttmonctrladminowner{YType::str, "rttMonCtrlAdminOwner"},
    rttmonctrladmintag{YType::str, "rttMonCtrlAdminTag"},
    rttmonctrladminrtttype{YType::enumeration, "rttMonCtrlAdminRttType"},
    rttmonctrladminthreshold{YType::int32, "rttMonCtrlAdminThreshold"},
    rttmonctrladminfrequency{YType::int32, "rttMonCtrlAdminFrequency"},
    rttmonctrladmintimeout{YType::int32, "rttMonCtrlAdminTimeout"},
    rttmonctrladminverifydata{YType::boolean, "rttMonCtrlAdminVerifyData"},
    rttmonctrladminstatus{YType::enumeration, "rttMonCtrlAdminStatus"},
    rttmonctrladminnvgen{YType::boolean, "rttMonCtrlAdminNvgen"},
    rttmonctrladmingroupname{YType::str, "rttMonCtrlAdminGroupName"},
    rttmonscheduleadminrttlife{YType::int32, "rttMonScheduleAdminRttLife"},
    rttmonscheduleadminrttstarttime{YType::uint32, "rttMonScheduleAdminRttStartTime"},
    rttmonscheduleadminconceptrowageout{YType::int32, "rttMonScheduleAdminConceptRowAgeout"},
    rttmonscheduleadminrttrecurring{YType::boolean, "rttMonScheduleAdminRttRecurring"},
    rttmonscheduleadminconceptrowageoutv2{YType::int32, "rttMonScheduleAdminConceptRowAgeoutV2"},
    rttmonreactadminconnectionenable{YType::boolean, "rttMonReactAdminConnectionEnable"},
    rttmonreactadmintimeoutenable{YType::boolean, "rttMonReactAdminTimeoutEnable"},
    rttmonreactadminthresholdtype{YType::enumeration, "rttMonReactAdminThresholdType"},
    rttmonreactadminthresholdfalling{YType::int32, "rttMonReactAdminThresholdFalling"},
    rttmonreactadminthresholdcount{YType::int32, "rttMonReactAdminThresholdCount"},
    rttmonreactadminthresholdcount2{YType::int32, "rttMonReactAdminThresholdCount2"},
    rttmonreactadminactiontype{YType::enumeration, "rttMonReactAdminActionType"},
    rttmonreactadminverifyerrorenable{YType::boolean, "rttMonReactAdminVerifyErrorEnable"},
    rttmonstatisticsadminnumhourgroups{YType::int32, "rttMonStatisticsAdminNumHourGroups"},
    rttmonstatisticsadminnumpaths{YType::int32, "rttMonStatisticsAdminNumPaths"},
    rttmonstatisticsadminnumhops{YType::int32, "rttMonStatisticsAdminNumHops"},
    rttmonstatisticsadminnumdistbuckets{YType::int32, "rttMonStatisticsAdminNumDistBuckets"},
    rttmonstatisticsadmindistinterval{YType::int32, "rttMonStatisticsAdminDistInterval"},
    rttmonhistoryadminnumlives{YType::int32, "rttMonHistoryAdminNumLives"},
    rttmonhistoryadminnumbuckets{YType::int32, "rttMonHistoryAdminNumBuckets"},
    rttmonhistoryadminnumsamples{YType::int32, "rttMonHistoryAdminNumSamples"},
    rttmonhistoryadminfilter{YType::enumeration, "rttMonHistoryAdminFilter"},
    rttmonctrlopermodificationtime{YType::uint32, "rttMonCtrlOperModificationTime"},
    rttmonctrloperdiagtext{YType::str, "rttMonCtrlOperDiagText"},
    rttmonctrloperresettime{YType::uint32, "rttMonCtrlOperResetTime"},
    rttmonctrloperoctetsinuse{YType::uint32, "rttMonCtrlOperOctetsInUse"},
    rttmonctrloperconnectionlostoccurred{YType::boolean, "rttMonCtrlOperConnectionLostOccurred"},
    rttmonctrlopertimeoutoccurred{YType::boolean, "rttMonCtrlOperTimeoutOccurred"},
    rttmonctrloperoverthresholdoccurred{YType::boolean, "rttMonCtrlOperOverThresholdOccurred"},
    rttmonctrlopernumrtts{YType::int32, "rttMonCtrlOperNumRtts"},
    rttmonctrloperrttlife{YType::int32, "rttMonCtrlOperRttLife"},
    rttmonctrloperstate{YType::enumeration, "rttMonCtrlOperState"},
    rttmonctrloperverifyerroroccurred{YType::boolean, "rttMonCtrlOperVerifyErrorOccurred"},
    rttmonlatestrttopercompletiontime{YType::uint32, "rttMonLatestRttOperCompletionTime"},
    rttmonlatestrttopersense{YType::enumeration, "rttMonLatestRttOperSense"},
    rttmonlatestrttoperapplspecificsense{YType::int32, "rttMonLatestRttOperApplSpecificSense"},
    rttmonlatestrttopersensedescription{YType::str, "rttMonLatestRttOperSenseDescription"},
    rttmonlatestrttopertime{YType::uint32, "rttMonLatestRttOperTime"},
    rttmonlatestrttoperaddress{YType::str, "rttMonLatestRttOperAddress"}
{

    yang_name = "rttMonCtrlAdminEntry"; yang_parent_name = "rttMonCtrlAdminTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::~RttMonCtrlAdminEntry()
{
}

bool CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonctrladminowner.is_set
	|| rttmonctrladmintag.is_set
	|| rttmonctrladminrtttype.is_set
	|| rttmonctrladminthreshold.is_set
	|| rttmonctrladminfrequency.is_set
	|| rttmonctrladmintimeout.is_set
	|| rttmonctrladminverifydata.is_set
	|| rttmonctrladminstatus.is_set
	|| rttmonctrladminnvgen.is_set
	|| rttmonctrladmingroupname.is_set
	|| rttmonscheduleadminrttlife.is_set
	|| rttmonscheduleadminrttstarttime.is_set
	|| rttmonscheduleadminconceptrowageout.is_set
	|| rttmonscheduleadminrttrecurring.is_set
	|| rttmonscheduleadminconceptrowageoutv2.is_set
	|| rttmonreactadminconnectionenable.is_set
	|| rttmonreactadmintimeoutenable.is_set
	|| rttmonreactadminthresholdtype.is_set
	|| rttmonreactadminthresholdfalling.is_set
	|| rttmonreactadminthresholdcount.is_set
	|| rttmonreactadminthresholdcount2.is_set
	|| rttmonreactadminactiontype.is_set
	|| rttmonreactadminverifyerrorenable.is_set
	|| rttmonstatisticsadminnumhourgroups.is_set
	|| rttmonstatisticsadminnumpaths.is_set
	|| rttmonstatisticsadminnumhops.is_set
	|| rttmonstatisticsadminnumdistbuckets.is_set
	|| rttmonstatisticsadmindistinterval.is_set
	|| rttmonhistoryadminnumlives.is_set
	|| rttmonhistoryadminnumbuckets.is_set
	|| rttmonhistoryadminnumsamples.is_set
	|| rttmonhistoryadminfilter.is_set
	|| rttmonctrlopermodificationtime.is_set
	|| rttmonctrloperdiagtext.is_set
	|| rttmonctrloperresettime.is_set
	|| rttmonctrloperoctetsinuse.is_set
	|| rttmonctrloperconnectionlostoccurred.is_set
	|| rttmonctrlopertimeoutoccurred.is_set
	|| rttmonctrloperoverthresholdoccurred.is_set
	|| rttmonctrlopernumrtts.is_set
	|| rttmonctrloperrttlife.is_set
	|| rttmonctrloperstate.is_set
	|| rttmonctrloperverifyerroroccurred.is_set
	|| rttmonlatestrttopercompletiontime.is_set
	|| rttmonlatestrttopersense.is_set
	|| rttmonlatestrttoperapplspecificsense.is_set
	|| rttmonlatestrttopersensedescription.is_set
	|| rttmonlatestrttopertime.is_set
	|| rttmonlatestrttoperaddress.is_set;
}

bool CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonctrladminowner.yfilter)
	|| ydk::is_set(rttmonctrladmintag.yfilter)
	|| ydk::is_set(rttmonctrladminrtttype.yfilter)
	|| ydk::is_set(rttmonctrladminthreshold.yfilter)
	|| ydk::is_set(rttmonctrladminfrequency.yfilter)
	|| ydk::is_set(rttmonctrladmintimeout.yfilter)
	|| ydk::is_set(rttmonctrladminverifydata.yfilter)
	|| ydk::is_set(rttmonctrladminstatus.yfilter)
	|| ydk::is_set(rttmonctrladminnvgen.yfilter)
	|| ydk::is_set(rttmonctrladmingroupname.yfilter)
	|| ydk::is_set(rttmonscheduleadminrttlife.yfilter)
	|| ydk::is_set(rttmonscheduleadminrttstarttime.yfilter)
	|| ydk::is_set(rttmonscheduleadminconceptrowageout.yfilter)
	|| ydk::is_set(rttmonscheduleadminrttrecurring.yfilter)
	|| ydk::is_set(rttmonscheduleadminconceptrowageoutv2.yfilter)
	|| ydk::is_set(rttmonreactadminconnectionenable.yfilter)
	|| ydk::is_set(rttmonreactadmintimeoutenable.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdtype.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdfalling.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdcount.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdcount2.yfilter)
	|| ydk::is_set(rttmonreactadminactiontype.yfilter)
	|| ydk::is_set(rttmonreactadminverifyerrorenable.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumhourgroups.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumpaths.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumhops.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumdistbuckets.yfilter)
	|| ydk::is_set(rttmonstatisticsadmindistinterval.yfilter)
	|| ydk::is_set(rttmonhistoryadminnumlives.yfilter)
	|| ydk::is_set(rttmonhistoryadminnumbuckets.yfilter)
	|| ydk::is_set(rttmonhistoryadminnumsamples.yfilter)
	|| ydk::is_set(rttmonhistoryadminfilter.yfilter)
	|| ydk::is_set(rttmonctrlopermodificationtime.yfilter)
	|| ydk::is_set(rttmonctrloperdiagtext.yfilter)
	|| ydk::is_set(rttmonctrloperresettime.yfilter)
	|| ydk::is_set(rttmonctrloperoctetsinuse.yfilter)
	|| ydk::is_set(rttmonctrloperconnectionlostoccurred.yfilter)
	|| ydk::is_set(rttmonctrlopertimeoutoccurred.yfilter)
	|| ydk::is_set(rttmonctrloperoverthresholdoccurred.yfilter)
	|| ydk::is_set(rttmonctrlopernumrtts.yfilter)
	|| ydk::is_set(rttmonctrloperrttlife.yfilter)
	|| ydk::is_set(rttmonctrloperstate.yfilter)
	|| ydk::is_set(rttmonctrloperverifyerroroccurred.yfilter)
	|| ydk::is_set(rttmonlatestrttopercompletiontime.yfilter)
	|| ydk::is_set(rttmonlatestrttopersense.yfilter)
	|| ydk::is_set(rttmonlatestrttoperapplspecificsense.yfilter)
	|| ydk::is_set(rttmonlatestrttopersensedescription.yfilter)
	|| ydk::is_set(rttmonlatestrttopertime.yfilter)
	|| ydk::is_set(rttmonlatestrttoperaddress.yfilter);
}

std::string CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonCtrlAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonCtrlAdminEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonctrladminowner.is_set || is_set(rttmonctrladminowner.yfilter)) leaf_name_data.push_back(rttmonctrladminowner.get_name_leafdata());
    if (rttmonctrladmintag.is_set || is_set(rttmonctrladmintag.yfilter)) leaf_name_data.push_back(rttmonctrladmintag.get_name_leafdata());
    if (rttmonctrladminrtttype.is_set || is_set(rttmonctrladminrtttype.yfilter)) leaf_name_data.push_back(rttmonctrladminrtttype.get_name_leafdata());
    if (rttmonctrladminthreshold.is_set || is_set(rttmonctrladminthreshold.yfilter)) leaf_name_data.push_back(rttmonctrladminthreshold.get_name_leafdata());
    if (rttmonctrladminfrequency.is_set || is_set(rttmonctrladminfrequency.yfilter)) leaf_name_data.push_back(rttmonctrladminfrequency.get_name_leafdata());
    if (rttmonctrladmintimeout.is_set || is_set(rttmonctrladmintimeout.yfilter)) leaf_name_data.push_back(rttmonctrladmintimeout.get_name_leafdata());
    if (rttmonctrladminverifydata.is_set || is_set(rttmonctrladminverifydata.yfilter)) leaf_name_data.push_back(rttmonctrladminverifydata.get_name_leafdata());
    if (rttmonctrladminstatus.is_set || is_set(rttmonctrladminstatus.yfilter)) leaf_name_data.push_back(rttmonctrladminstatus.get_name_leafdata());
    if (rttmonctrladminnvgen.is_set || is_set(rttmonctrladminnvgen.yfilter)) leaf_name_data.push_back(rttmonctrladminnvgen.get_name_leafdata());
    if (rttmonctrladmingroupname.is_set || is_set(rttmonctrladmingroupname.yfilter)) leaf_name_data.push_back(rttmonctrladmingroupname.get_name_leafdata());
    if (rttmonscheduleadminrttlife.is_set || is_set(rttmonscheduleadminrttlife.yfilter)) leaf_name_data.push_back(rttmonscheduleadminrttlife.get_name_leafdata());
    if (rttmonscheduleadminrttstarttime.is_set || is_set(rttmonscheduleadminrttstarttime.yfilter)) leaf_name_data.push_back(rttmonscheduleadminrttstarttime.get_name_leafdata());
    if (rttmonscheduleadminconceptrowageout.is_set || is_set(rttmonscheduleadminconceptrowageout.yfilter)) leaf_name_data.push_back(rttmonscheduleadminconceptrowageout.get_name_leafdata());
    if (rttmonscheduleadminrttrecurring.is_set || is_set(rttmonscheduleadminrttrecurring.yfilter)) leaf_name_data.push_back(rttmonscheduleadminrttrecurring.get_name_leafdata());
    if (rttmonscheduleadminconceptrowageoutv2.is_set || is_set(rttmonscheduleadminconceptrowageoutv2.yfilter)) leaf_name_data.push_back(rttmonscheduleadminconceptrowageoutv2.get_name_leafdata());
    if (rttmonreactadminconnectionenable.is_set || is_set(rttmonreactadminconnectionenable.yfilter)) leaf_name_data.push_back(rttmonreactadminconnectionenable.get_name_leafdata());
    if (rttmonreactadmintimeoutenable.is_set || is_set(rttmonreactadmintimeoutenable.yfilter)) leaf_name_data.push_back(rttmonreactadmintimeoutenable.get_name_leafdata());
    if (rttmonreactadminthresholdtype.is_set || is_set(rttmonreactadminthresholdtype.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdtype.get_name_leafdata());
    if (rttmonreactadminthresholdfalling.is_set || is_set(rttmonreactadminthresholdfalling.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdfalling.get_name_leafdata());
    if (rttmonreactadminthresholdcount.is_set || is_set(rttmonreactadminthresholdcount.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdcount.get_name_leafdata());
    if (rttmonreactadminthresholdcount2.is_set || is_set(rttmonreactadminthresholdcount2.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdcount2.get_name_leafdata());
    if (rttmonreactadminactiontype.is_set || is_set(rttmonreactadminactiontype.yfilter)) leaf_name_data.push_back(rttmonreactadminactiontype.get_name_leafdata());
    if (rttmonreactadminverifyerrorenable.is_set || is_set(rttmonreactadminverifyerrorenable.yfilter)) leaf_name_data.push_back(rttmonreactadminverifyerrorenable.get_name_leafdata());
    if (rttmonstatisticsadminnumhourgroups.is_set || is_set(rttmonstatisticsadminnumhourgroups.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumhourgroups.get_name_leafdata());
    if (rttmonstatisticsadminnumpaths.is_set || is_set(rttmonstatisticsadminnumpaths.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumpaths.get_name_leafdata());
    if (rttmonstatisticsadminnumhops.is_set || is_set(rttmonstatisticsadminnumhops.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumhops.get_name_leafdata());
    if (rttmonstatisticsadminnumdistbuckets.is_set || is_set(rttmonstatisticsadminnumdistbuckets.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumdistbuckets.get_name_leafdata());
    if (rttmonstatisticsadmindistinterval.is_set || is_set(rttmonstatisticsadmindistinterval.yfilter)) leaf_name_data.push_back(rttmonstatisticsadmindistinterval.get_name_leafdata());
    if (rttmonhistoryadminnumlives.is_set || is_set(rttmonhistoryadminnumlives.yfilter)) leaf_name_data.push_back(rttmonhistoryadminnumlives.get_name_leafdata());
    if (rttmonhistoryadminnumbuckets.is_set || is_set(rttmonhistoryadminnumbuckets.yfilter)) leaf_name_data.push_back(rttmonhistoryadminnumbuckets.get_name_leafdata());
    if (rttmonhistoryadminnumsamples.is_set || is_set(rttmonhistoryadminnumsamples.yfilter)) leaf_name_data.push_back(rttmonhistoryadminnumsamples.get_name_leafdata());
    if (rttmonhistoryadminfilter.is_set || is_set(rttmonhistoryadminfilter.yfilter)) leaf_name_data.push_back(rttmonhistoryadminfilter.get_name_leafdata());
    if (rttmonctrlopermodificationtime.is_set || is_set(rttmonctrlopermodificationtime.yfilter)) leaf_name_data.push_back(rttmonctrlopermodificationtime.get_name_leafdata());
    if (rttmonctrloperdiagtext.is_set || is_set(rttmonctrloperdiagtext.yfilter)) leaf_name_data.push_back(rttmonctrloperdiagtext.get_name_leafdata());
    if (rttmonctrloperresettime.is_set || is_set(rttmonctrloperresettime.yfilter)) leaf_name_data.push_back(rttmonctrloperresettime.get_name_leafdata());
    if (rttmonctrloperoctetsinuse.is_set || is_set(rttmonctrloperoctetsinuse.yfilter)) leaf_name_data.push_back(rttmonctrloperoctetsinuse.get_name_leafdata());
    if (rttmonctrloperconnectionlostoccurred.is_set || is_set(rttmonctrloperconnectionlostoccurred.yfilter)) leaf_name_data.push_back(rttmonctrloperconnectionlostoccurred.get_name_leafdata());
    if (rttmonctrlopertimeoutoccurred.is_set || is_set(rttmonctrlopertimeoutoccurred.yfilter)) leaf_name_data.push_back(rttmonctrlopertimeoutoccurred.get_name_leafdata());
    if (rttmonctrloperoverthresholdoccurred.is_set || is_set(rttmonctrloperoverthresholdoccurred.yfilter)) leaf_name_data.push_back(rttmonctrloperoverthresholdoccurred.get_name_leafdata());
    if (rttmonctrlopernumrtts.is_set || is_set(rttmonctrlopernumrtts.yfilter)) leaf_name_data.push_back(rttmonctrlopernumrtts.get_name_leafdata());
    if (rttmonctrloperrttlife.is_set || is_set(rttmonctrloperrttlife.yfilter)) leaf_name_data.push_back(rttmonctrloperrttlife.get_name_leafdata());
    if (rttmonctrloperstate.is_set || is_set(rttmonctrloperstate.yfilter)) leaf_name_data.push_back(rttmonctrloperstate.get_name_leafdata());
    if (rttmonctrloperverifyerroroccurred.is_set || is_set(rttmonctrloperverifyerroroccurred.yfilter)) leaf_name_data.push_back(rttmonctrloperverifyerroroccurred.get_name_leafdata());
    if (rttmonlatestrttopercompletiontime.is_set || is_set(rttmonlatestrttopercompletiontime.yfilter)) leaf_name_data.push_back(rttmonlatestrttopercompletiontime.get_name_leafdata());
    if (rttmonlatestrttopersense.is_set || is_set(rttmonlatestrttopersense.yfilter)) leaf_name_data.push_back(rttmonlatestrttopersense.get_name_leafdata());
    if (rttmonlatestrttoperapplspecificsense.is_set || is_set(rttmonlatestrttoperapplspecificsense.yfilter)) leaf_name_data.push_back(rttmonlatestrttoperapplspecificsense.get_name_leafdata());
    if (rttmonlatestrttopersensedescription.is_set || is_set(rttmonlatestrttopersensedescription.yfilter)) leaf_name_data.push_back(rttmonlatestrttopersensedescription.get_name_leafdata());
    if (rttmonlatestrttopertime.is_set || is_set(rttmonlatestrttopertime.yfilter)) leaf_name_data.push_back(rttmonlatestrttopertime.get_name_leafdata());
    if (rttmonlatestrttoperaddress.is_set || is_set(rttmonlatestrttoperaddress.yfilter)) leaf_name_data.push_back(rttmonlatestrttoperaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminOwner")
    {
        rttmonctrladminowner = value;
        rttmonctrladminowner.value_namespace = name_space;
        rttmonctrladminowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminTag")
    {
        rttmonctrladmintag = value;
        rttmonctrladmintag.value_namespace = name_space;
        rttmonctrladmintag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminRttType")
    {
        rttmonctrladminrtttype = value;
        rttmonctrladminrtttype.value_namespace = name_space;
        rttmonctrladminrtttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminThreshold")
    {
        rttmonctrladminthreshold = value;
        rttmonctrladminthreshold.value_namespace = name_space;
        rttmonctrladminthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminFrequency")
    {
        rttmonctrladminfrequency = value;
        rttmonctrladminfrequency.value_namespace = name_space;
        rttmonctrladminfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminTimeout")
    {
        rttmonctrladmintimeout = value;
        rttmonctrladmintimeout.value_namespace = name_space;
        rttmonctrladmintimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminVerifyData")
    {
        rttmonctrladminverifydata = value;
        rttmonctrladminverifydata.value_namespace = name_space;
        rttmonctrladminverifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminStatus")
    {
        rttmonctrladminstatus = value;
        rttmonctrladminstatus.value_namespace = name_space;
        rttmonctrladminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminNvgen")
    {
        rttmonctrladminnvgen = value;
        rttmonctrladminnvgen.value_namespace = name_space;
        rttmonctrladminnvgen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminGroupName")
    {
        rttmonctrladmingroupname = value;
        rttmonctrladmingroupname.value_namespace = name_space;
        rttmonctrladmingroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminRttLife")
    {
        rttmonscheduleadminrttlife = value;
        rttmonscheduleadminrttlife.value_namespace = name_space;
        rttmonscheduleadminrttlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminRttStartTime")
    {
        rttmonscheduleadminrttstarttime = value;
        rttmonscheduleadminrttstarttime.value_namespace = name_space;
        rttmonscheduleadminrttstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeout")
    {
        rttmonscheduleadminconceptrowageout = value;
        rttmonscheduleadminconceptrowageout.value_namespace = name_space;
        rttmonscheduleadminconceptrowageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminRttRecurring")
    {
        rttmonscheduleadminrttrecurring = value;
        rttmonscheduleadminrttrecurring.value_namespace = name_space;
        rttmonscheduleadminrttrecurring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeoutV2")
    {
        rttmonscheduleadminconceptrowageoutv2 = value;
        rttmonscheduleadminconceptrowageoutv2.value_namespace = name_space;
        rttmonscheduleadminconceptrowageoutv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminConnectionEnable")
    {
        rttmonreactadminconnectionenable = value;
        rttmonreactadminconnectionenable.value_namespace = name_space;
        rttmonreactadminconnectionenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminTimeoutEnable")
    {
        rttmonreactadmintimeoutenable = value;
        rttmonreactadmintimeoutenable.value_namespace = name_space;
        rttmonreactadmintimeoutenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminThresholdType")
    {
        rttmonreactadminthresholdtype = value;
        rttmonreactadminthresholdtype.value_namespace = name_space;
        rttmonreactadminthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminThresholdFalling")
    {
        rttmonreactadminthresholdfalling = value;
        rttmonreactadminthresholdfalling.value_namespace = name_space;
        rttmonreactadminthresholdfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminThresholdCount")
    {
        rttmonreactadminthresholdcount = value;
        rttmonreactadminthresholdcount.value_namespace = name_space;
        rttmonreactadminthresholdcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminThresholdCount2")
    {
        rttmonreactadminthresholdcount2 = value;
        rttmonreactadminthresholdcount2.value_namespace = name_space;
        rttmonreactadminthresholdcount2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminActionType")
    {
        rttmonreactadminactiontype = value;
        rttmonreactadminactiontype.value_namespace = name_space;
        rttmonreactadminactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminVerifyErrorEnable")
    {
        rttmonreactadminverifyerrorenable = value;
        rttmonreactadminverifyerrorenable.value_namespace = name_space;
        rttmonreactadminverifyerrorenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminNumHourGroups")
    {
        rttmonstatisticsadminnumhourgroups = value;
        rttmonstatisticsadminnumhourgroups.value_namespace = name_space;
        rttmonstatisticsadminnumhourgroups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminNumPaths")
    {
        rttmonstatisticsadminnumpaths = value;
        rttmonstatisticsadminnumpaths.value_namespace = name_space;
        rttmonstatisticsadminnumpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminNumHops")
    {
        rttmonstatisticsadminnumhops = value;
        rttmonstatisticsadminnumhops.value_namespace = name_space;
        rttmonstatisticsadminnumhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminNumDistBuckets")
    {
        rttmonstatisticsadminnumdistbuckets = value;
        rttmonstatisticsadminnumdistbuckets.value_namespace = name_space;
        rttmonstatisticsadminnumdistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminDistInterval")
    {
        rttmonstatisticsadmindistinterval = value;
        rttmonstatisticsadmindistinterval.value_namespace = name_space;
        rttmonstatisticsadmindistinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminNumLives")
    {
        rttmonhistoryadminnumlives = value;
        rttmonhistoryadminnumlives.value_namespace = name_space;
        rttmonhistoryadminnumlives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminNumBuckets")
    {
        rttmonhistoryadminnumbuckets = value;
        rttmonhistoryadminnumbuckets.value_namespace = name_space;
        rttmonhistoryadminnumbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminNumSamples")
    {
        rttmonhistoryadminnumsamples = value;
        rttmonhistoryadminnumsamples.value_namespace = name_space;
        rttmonhistoryadminnumsamples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminFilter")
    {
        rttmonhistoryadminfilter = value;
        rttmonhistoryadminfilter.value_namespace = name_space;
        rttmonhistoryadminfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperModificationTime")
    {
        rttmonctrlopermodificationtime = value;
        rttmonctrlopermodificationtime.value_namespace = name_space;
        rttmonctrlopermodificationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperDiagText")
    {
        rttmonctrloperdiagtext = value;
        rttmonctrloperdiagtext.value_namespace = name_space;
        rttmonctrloperdiagtext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperResetTime")
    {
        rttmonctrloperresettime = value;
        rttmonctrloperresettime.value_namespace = name_space;
        rttmonctrloperresettime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperOctetsInUse")
    {
        rttmonctrloperoctetsinuse = value;
        rttmonctrloperoctetsinuse.value_namespace = name_space;
        rttmonctrloperoctetsinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperConnectionLostOccurred")
    {
        rttmonctrloperconnectionlostoccurred = value;
        rttmonctrloperconnectionlostoccurred.value_namespace = name_space;
        rttmonctrloperconnectionlostoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperTimeoutOccurred")
    {
        rttmonctrlopertimeoutoccurred = value;
        rttmonctrlopertimeoutoccurred.value_namespace = name_space;
        rttmonctrlopertimeoutoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperOverThresholdOccurred")
    {
        rttmonctrloperoverthresholdoccurred = value;
        rttmonctrloperoverthresholdoccurred.value_namespace = name_space;
        rttmonctrloperoverthresholdoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperNumRtts")
    {
        rttmonctrlopernumrtts = value;
        rttmonctrlopernumrtts.value_namespace = name_space;
        rttmonctrlopernumrtts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperRttLife")
    {
        rttmonctrloperrttlife = value;
        rttmonctrloperrttlife.value_namespace = name_space;
        rttmonctrloperrttlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperState")
    {
        rttmonctrloperstate = value;
        rttmonctrloperstate.value_namespace = name_space;
        rttmonctrloperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperVerifyErrorOccurred")
    {
        rttmonctrloperverifyerroroccurred = value;
        rttmonctrloperverifyerroroccurred.value_namespace = name_space;
        rttmonctrloperverifyerroroccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperCompletionTime")
    {
        rttmonlatestrttopercompletiontime = value;
        rttmonlatestrttopercompletiontime.value_namespace = name_space;
        rttmonlatestrttopercompletiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperSense")
    {
        rttmonlatestrttopersense = value;
        rttmonlatestrttopersense.value_namespace = name_space;
        rttmonlatestrttopersense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperApplSpecificSense")
    {
        rttmonlatestrttoperapplspecificsense = value;
        rttmonlatestrttoperapplspecificsense.value_namespace = name_space;
        rttmonlatestrttoperapplspecificsense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperSenseDescription")
    {
        rttmonlatestrttopersensedescription = value;
        rttmonlatestrttopersensedescription.value_namespace = name_space;
        rttmonlatestrttopersensedescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperTime")
    {
        rttmonlatestrttopertime = value;
        rttmonlatestrttopertime.value_namespace = name_space;
        rttmonlatestrttopertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperAddress")
    {
        rttmonlatestrttoperaddress = value;
        rttmonlatestrttoperaddress.value_namespace = name_space;
        rttmonlatestrttoperaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminOwner")
    {
        rttmonctrladminowner.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminTag")
    {
        rttmonctrladmintag.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminRttType")
    {
        rttmonctrladminrtttype.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminThreshold")
    {
        rttmonctrladminthreshold.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminFrequency")
    {
        rttmonctrladminfrequency.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminTimeout")
    {
        rttmonctrladmintimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminVerifyData")
    {
        rttmonctrladminverifydata.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminStatus")
    {
        rttmonctrladminstatus.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminNvgen")
    {
        rttmonctrladminnvgen.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminGroupName")
    {
        rttmonctrladmingroupname.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminRttLife")
    {
        rttmonscheduleadminrttlife.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminRttStartTime")
    {
        rttmonscheduleadminrttstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeout")
    {
        rttmonscheduleadminconceptrowageout.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminRttRecurring")
    {
        rttmonscheduleadminrttrecurring.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeoutV2")
    {
        rttmonscheduleadminconceptrowageoutv2.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminConnectionEnable")
    {
        rttmonreactadminconnectionenable.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminTimeoutEnable")
    {
        rttmonreactadmintimeoutenable.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdType")
    {
        rttmonreactadminthresholdtype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdFalling")
    {
        rttmonreactadminthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdCount")
    {
        rttmonreactadminthresholdcount.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdCount2")
    {
        rttmonreactadminthresholdcount2.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminActionType")
    {
        rttmonreactadminactiontype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminVerifyErrorEnable")
    {
        rttmonreactadminverifyerrorenable.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumHourGroups")
    {
        rttmonstatisticsadminnumhourgroups.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumPaths")
    {
        rttmonstatisticsadminnumpaths.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumHops")
    {
        rttmonstatisticsadminnumhops.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumDistBuckets")
    {
        rttmonstatisticsadminnumdistbuckets.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminDistInterval")
    {
        rttmonstatisticsadmindistinterval.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminNumLives")
    {
        rttmonhistoryadminnumlives.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminNumBuckets")
    {
        rttmonhistoryadminnumbuckets.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminNumSamples")
    {
        rttmonhistoryadminnumsamples.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminFilter")
    {
        rttmonhistoryadminfilter.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperModificationTime")
    {
        rttmonctrlopermodificationtime.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperDiagText")
    {
        rttmonctrloperdiagtext.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperResetTime")
    {
        rttmonctrloperresettime.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperOctetsInUse")
    {
        rttmonctrloperoctetsinuse.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperConnectionLostOccurred")
    {
        rttmonctrloperconnectionlostoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperTimeoutOccurred")
    {
        rttmonctrlopertimeoutoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperOverThresholdOccurred")
    {
        rttmonctrloperoverthresholdoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperNumRtts")
    {
        rttmonctrlopernumrtts.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperRttLife")
    {
        rttmonctrloperrttlife.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperState")
    {
        rttmonctrloperstate.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperVerifyErrorOccurred")
    {
        rttmonctrloperverifyerroroccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperCompletionTime")
    {
        rttmonlatestrttopercompletiontime.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperSense")
    {
        rttmonlatestrttopersense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperApplSpecificSense")
    {
        rttmonlatestrttoperapplspecificsense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperSenseDescription")
    {
        rttmonlatestrttopersensedescription.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperTime")
    {
        rttmonlatestrttopertime.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperAddress")
    {
        rttmonlatestrttoperaddress.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonCtrlAdminOwner" || name == "rttMonCtrlAdminTag" || name == "rttMonCtrlAdminRttType" || name == "rttMonCtrlAdminThreshold" || name == "rttMonCtrlAdminFrequency" || name == "rttMonCtrlAdminTimeout" || name == "rttMonCtrlAdminVerifyData" || name == "rttMonCtrlAdminStatus" || name == "rttMonCtrlAdminNvgen" || name == "rttMonCtrlAdminGroupName" || name == "rttMonScheduleAdminRttLife" || name == "rttMonScheduleAdminRttStartTime" || name == "rttMonScheduleAdminConceptRowAgeout" || name == "rttMonScheduleAdminRttRecurring" || name == "rttMonScheduleAdminConceptRowAgeoutV2" || name == "rttMonReactAdminConnectionEnable" || name == "rttMonReactAdminTimeoutEnable" || name == "rttMonReactAdminThresholdType" || name == "rttMonReactAdminThresholdFalling" || name == "rttMonReactAdminThresholdCount" || name == "rttMonReactAdminThresholdCount2" || name == "rttMonReactAdminActionType" || name == "rttMonReactAdminVerifyErrorEnable" || name == "rttMonStatisticsAdminNumHourGroups" || name == "rttMonStatisticsAdminNumPaths" || name == "rttMonStatisticsAdminNumHops" || name == "rttMonStatisticsAdminNumDistBuckets" || name == "rttMonStatisticsAdminDistInterval" || name == "rttMonHistoryAdminNumLives" || name == "rttMonHistoryAdminNumBuckets" || name == "rttMonHistoryAdminNumSamples" || name == "rttMonHistoryAdminFilter" || name == "rttMonCtrlOperModificationTime" || name == "rttMonCtrlOperDiagText" || name == "rttMonCtrlOperResetTime" || name == "rttMonCtrlOperOctetsInUse" || name == "rttMonCtrlOperConnectionLostOccurred" || name == "rttMonCtrlOperTimeoutOccurred" || name == "rttMonCtrlOperOverThresholdOccurred" || name == "rttMonCtrlOperNumRtts" || name == "rttMonCtrlOperRttLife" || name == "rttMonCtrlOperState" || name == "rttMonCtrlOperVerifyErrorOccurred" || name == "rttMonLatestRttOperCompletionTime" || name == "rttMonLatestRttOperSense" || name == "rttMonLatestRttOperApplSpecificSense" || name == "rttMonLatestRttOperSenseDescription" || name == "rttMonLatestRttOperTime" || name == "rttMonLatestRttOperAddress")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminTable()
    :
    rttmonechoadminentry(this, {"rttmonctrladminindex"})
{

    yang_name = "rttMonEchoAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonEchoAdminTable::~RttMonEchoAdminTable()
{
}

bool CISCORTTMONMIB::RttMonEchoAdminTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonechoadminentry.len(); index++)
    {
        if(rttmonechoadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonEchoAdminTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonechoadminentry.len(); index++)
    {
        if(rttmonechoadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonEchoAdminTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonEchoAdminTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonEchoAdminTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonEchoAdminTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonEchoAdminEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry>();
        c->parent = this;
        rttmonechoadminentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonEchoAdminTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonechoadminentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonEchoAdminTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonEchoAdminTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonEchoAdminTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonEchoAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonechoadminprotocol{YType::enumeration, "rttMonEchoAdminProtocol"},
    rttmonechoadmintargetaddress{YType::str, "rttMonEchoAdminTargetAddress"},
    rttmonechoadminpktdatarequestsize{YType::int32, "rttMonEchoAdminPktDataRequestSize"},
    rttmonechoadminpktdataresponsesize{YType::int32, "rttMonEchoAdminPktDataResponseSize"},
    rttmonechoadmintargetport{YType::int32, "rttMonEchoAdminTargetPort"},
    rttmonechoadminsourceaddress{YType::str, "rttMonEchoAdminSourceAddress"},
    rttmonechoadminsourceport{YType::int32, "rttMonEchoAdminSourcePort"},
    rttmonechoadmincontrolenable{YType::boolean, "rttMonEchoAdminControlEnable"},
    rttmonechoadmintos{YType::int32, "rttMonEchoAdminTOS"},
    rttmonechoadminlsrenable{YType::boolean, "rttMonEchoAdminLSREnable"},
    rttmonechoadmintargetaddressstring{YType::str, "rttMonEchoAdminTargetAddressString"},
    rttmonechoadminnameserver{YType::str, "rttMonEchoAdminNameServer"},
    rttmonechoadminoperation{YType::enumeration, "rttMonEchoAdminOperation"},
    rttmonechoadminhttpversion{YType::str, "rttMonEchoAdminHTTPVersion"},
    rttmonechoadminurl{YType::str, "rttMonEchoAdminURL"},
    rttmonechoadmincache{YType::boolean, "rttMonEchoAdminCache"},
    rttmonechoadmininterval{YType::int32, "rttMonEchoAdminInterval"},
    rttmonechoadminnumpackets{YType::int32, "rttMonEchoAdminNumPackets"},
    rttmonechoadminproxy{YType::str, "rttMonEchoAdminProxy"},
    rttmonechoadminstring1{YType::str, "rttMonEchoAdminString1"},
    rttmonechoadminstring2{YType::str, "rttMonEchoAdminString2"},
    rttmonechoadminstring3{YType::str, "rttMonEchoAdminString3"},
    rttmonechoadminstring4{YType::str, "rttMonEchoAdminString4"},
    rttmonechoadminstring5{YType::str, "rttMonEchoAdminString5"},
    rttmonechoadminmode{YType::enumeration, "rttMonEchoAdminMode"},
    rttmonechoadminvrfname{YType::str, "rttMonEchoAdminVrfName"},
    rttmonechoadmincodectype{YType::enumeration, "rttMonEchoAdminCodecType"},
    rttmonechoadmincodecinterval{YType::int32, "rttMonEchoAdminCodecInterval"},
    rttmonechoadmincodecpayload{YType::int32, "rttMonEchoAdminCodecPayload"},
    rttmonechoadmincodecnumpackets{YType::int32, "rttMonEchoAdminCodecNumPackets"},
    rttmonechoadminicpifadvfactor{YType::int32, "rttMonEchoAdminICPIFAdvFactor"},
    rttmonechoadminlspfectype{YType::enumeration, "rttMonEchoAdminLSPFECType"},
    rttmonechoadminlspselector{YType::str, "rttMonEchoAdminLSPSelector"},
    rttmonechoadminlspreplymode{YType::enumeration, "rttMonEchoAdminLSPReplyMode"},
    rttmonechoadminlspttl{YType::int32, "rttMonEchoAdminLSPTTL"},
    rttmonechoadminlspexp{YType::int32, "rttMonEchoAdminLSPExp"},
    rttmonechoadminprecision{YType::enumeration, "rttMonEchoAdminPrecision"},
    rttmonechoadminprobepakpriority{YType::enumeration, "rttMonEchoAdminProbePakPriority"},
    rttmonechoadminowntpsynctolabs{YType::int32, "rttMonEchoAdminOWNTPSyncTolAbs"},
    rttmonechoadminowntpsynctolpct{YType::int32, "rttMonEchoAdminOWNTPSyncTolPct"},
    rttmonechoadminowntpsynctoltype{YType::enumeration, "rttMonEchoAdminOWNTPSyncTolType"},
    rttmonechoadmincallednumber{YType::str, "rttMonEchoAdminCalledNumber"},
    rttmonechoadmindetectpoint{YType::enumeration, "rttMonEchoAdminDetectPoint"},
    rttmonechoadmingkregistration{YType::boolean, "rttMonEchoAdminGKRegistration"},
    rttmonechoadminsourcevoiceport{YType::str, "rttMonEchoAdminSourceVoicePort"},
    rttmonechoadmincallduration{YType::int32, "rttMonEchoAdminCallDuration"},
    rttmonechoadminlspreplydscp{YType::int32, "rttMonEchoAdminLSPReplyDscp"},
    rttmonechoadminlspnullshim{YType::boolean, "rttMonEchoAdminLSPNullShim"},
    rttmonechoadmintargetmpid{YType::uint32, "rttMonEchoAdminTargetMPID"},
    rttmonechoadmintargetdomainname{YType::str, "rttMonEchoAdminTargetDomainName"},
    rttmonechoadmintargetvlan{YType::int32, "rttMonEchoAdminTargetVLAN"},
    rttmonechoadminethernetcos{YType::int32, "rttMonEchoAdminEthernetCOS"},
    rttmonechoadminlspvccvid{YType::int32, "rttMonEchoAdminLSPVccvID"},
    rttmonechoadmintargetevc{YType::str, "rttMonEchoAdminTargetEVC"},
    rttmonechoadmintargetmepport{YType::boolean, "rttMonEchoAdminTargetMEPPort"},
    rttmonechoadminvideotrafficprofile{YType::str, "rttMonEchoAdminVideoTrafficProfile"},
    rttmonechoadmindscp{YType::uint8, "rttMonEchoAdminDscp"},
    rttmonechoadminreservedsp{YType::enumeration, "rttMonEchoAdminReserveDsp"},
    rttmonechoadmininputinterface{YType::int32, "rttMonEchoAdminInputInterface"},
    rttmonechoadminemulatesourceaddress{YType::str, "rttMonEchoAdminEmulateSourceAddress"},
    rttmonechoadminemulatesourceport{YType::int32, "rttMonEchoAdminEmulateSourcePort"},
    rttmonechoadminemulatetargetaddress{YType::str, "rttMonEchoAdminEmulateTargetAddress"},
    rttmonechoadminemulatetargetport{YType::int32, "rttMonEchoAdminEmulateTargetPort"},
    rttmonechoadmintargetmacaddress{YType::str, "rttMonEchoAdminTargetMacAddress"},
    rttmonechoadminsourcemacaddress{YType::str, "rttMonEchoAdminSourceMacAddress"},
    rttmonechoadminsourcempid{YType::uint32, "rttMonEchoAdminSourceMPID"},
    rttmonechoadminendpointlistname{YType::str, "rttMonEchoAdminEndPointListName"},
    rttmonechoadminssm{YType::boolean, "rttMonEchoAdminSSM"},
    rttmonechoadmincontrolretry{YType::uint32, "rttMonEchoAdminControlRetry"},
    rttmonechoadmincontroltimeout{YType::uint32, "rttMonEchoAdminControlTimeout"},
    rttmonechoadminigmptreeinit{YType::uint32, "rttMonEchoAdminIgmpTreeInit"},
    rttmonechoadminenableburst{YType::boolean, "rttMonEchoAdminEnableBurst"},
    rttmonechoadminaggburstcycles{YType::int32, "rttMonEchoAdminAggBurstCycles"},
    rttmonechoadminlossrationumframes{YType::int32, "rttMonEchoAdminLossRatioNumFrames"},
    rttmonechoadminavailnumframes{YType::int32, "rttMonEchoAdminAvailNumFrames"},
    rttmonechoadmintstampoptimization{YType::boolean, "rttMonEchoAdminTstampOptimization"}
{

    yang_name = "rttMonEchoAdminEntry"; yang_parent_name = "rttMonEchoAdminTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::~RttMonEchoAdminEntry()
{
}

bool CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonechoadminprotocol.is_set
	|| rttmonechoadmintargetaddress.is_set
	|| rttmonechoadminpktdatarequestsize.is_set
	|| rttmonechoadminpktdataresponsesize.is_set
	|| rttmonechoadmintargetport.is_set
	|| rttmonechoadminsourceaddress.is_set
	|| rttmonechoadminsourceport.is_set
	|| rttmonechoadmincontrolenable.is_set
	|| rttmonechoadmintos.is_set
	|| rttmonechoadminlsrenable.is_set
	|| rttmonechoadmintargetaddressstring.is_set
	|| rttmonechoadminnameserver.is_set
	|| rttmonechoadminoperation.is_set
	|| rttmonechoadminhttpversion.is_set
	|| rttmonechoadminurl.is_set
	|| rttmonechoadmincache.is_set
	|| rttmonechoadmininterval.is_set
	|| rttmonechoadminnumpackets.is_set
	|| rttmonechoadminproxy.is_set
	|| rttmonechoadminstring1.is_set
	|| rttmonechoadminstring2.is_set
	|| rttmonechoadminstring3.is_set
	|| rttmonechoadminstring4.is_set
	|| rttmonechoadminstring5.is_set
	|| rttmonechoadminmode.is_set
	|| rttmonechoadminvrfname.is_set
	|| rttmonechoadmincodectype.is_set
	|| rttmonechoadmincodecinterval.is_set
	|| rttmonechoadmincodecpayload.is_set
	|| rttmonechoadmincodecnumpackets.is_set
	|| rttmonechoadminicpifadvfactor.is_set
	|| rttmonechoadminlspfectype.is_set
	|| rttmonechoadminlspselector.is_set
	|| rttmonechoadminlspreplymode.is_set
	|| rttmonechoadminlspttl.is_set
	|| rttmonechoadminlspexp.is_set
	|| rttmonechoadminprecision.is_set
	|| rttmonechoadminprobepakpriority.is_set
	|| rttmonechoadminowntpsynctolabs.is_set
	|| rttmonechoadminowntpsynctolpct.is_set
	|| rttmonechoadminowntpsynctoltype.is_set
	|| rttmonechoadmincallednumber.is_set
	|| rttmonechoadmindetectpoint.is_set
	|| rttmonechoadmingkregistration.is_set
	|| rttmonechoadminsourcevoiceport.is_set
	|| rttmonechoadmincallduration.is_set
	|| rttmonechoadminlspreplydscp.is_set
	|| rttmonechoadminlspnullshim.is_set
	|| rttmonechoadmintargetmpid.is_set
	|| rttmonechoadmintargetdomainname.is_set
	|| rttmonechoadmintargetvlan.is_set
	|| rttmonechoadminethernetcos.is_set
	|| rttmonechoadminlspvccvid.is_set
	|| rttmonechoadmintargetevc.is_set
	|| rttmonechoadmintargetmepport.is_set
	|| rttmonechoadminvideotrafficprofile.is_set
	|| rttmonechoadmindscp.is_set
	|| rttmonechoadminreservedsp.is_set
	|| rttmonechoadmininputinterface.is_set
	|| rttmonechoadminemulatesourceaddress.is_set
	|| rttmonechoadminemulatesourceport.is_set
	|| rttmonechoadminemulatetargetaddress.is_set
	|| rttmonechoadminemulatetargetport.is_set
	|| rttmonechoadmintargetmacaddress.is_set
	|| rttmonechoadminsourcemacaddress.is_set
	|| rttmonechoadminsourcempid.is_set
	|| rttmonechoadminendpointlistname.is_set
	|| rttmonechoadminssm.is_set
	|| rttmonechoadmincontrolretry.is_set
	|| rttmonechoadmincontroltimeout.is_set
	|| rttmonechoadminigmptreeinit.is_set
	|| rttmonechoadminenableburst.is_set
	|| rttmonechoadminaggburstcycles.is_set
	|| rttmonechoadminlossrationumframes.is_set
	|| rttmonechoadminavailnumframes.is_set
	|| rttmonechoadmintstampoptimization.is_set;
}

bool CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonechoadminprotocol.yfilter)
	|| ydk::is_set(rttmonechoadmintargetaddress.yfilter)
	|| ydk::is_set(rttmonechoadminpktdatarequestsize.yfilter)
	|| ydk::is_set(rttmonechoadminpktdataresponsesize.yfilter)
	|| ydk::is_set(rttmonechoadmintargetport.yfilter)
	|| ydk::is_set(rttmonechoadminsourceaddress.yfilter)
	|| ydk::is_set(rttmonechoadminsourceport.yfilter)
	|| ydk::is_set(rttmonechoadmincontrolenable.yfilter)
	|| ydk::is_set(rttmonechoadmintos.yfilter)
	|| ydk::is_set(rttmonechoadminlsrenable.yfilter)
	|| ydk::is_set(rttmonechoadmintargetaddressstring.yfilter)
	|| ydk::is_set(rttmonechoadminnameserver.yfilter)
	|| ydk::is_set(rttmonechoadminoperation.yfilter)
	|| ydk::is_set(rttmonechoadminhttpversion.yfilter)
	|| ydk::is_set(rttmonechoadminurl.yfilter)
	|| ydk::is_set(rttmonechoadmincache.yfilter)
	|| ydk::is_set(rttmonechoadmininterval.yfilter)
	|| ydk::is_set(rttmonechoadminnumpackets.yfilter)
	|| ydk::is_set(rttmonechoadminproxy.yfilter)
	|| ydk::is_set(rttmonechoadminstring1.yfilter)
	|| ydk::is_set(rttmonechoadminstring2.yfilter)
	|| ydk::is_set(rttmonechoadminstring3.yfilter)
	|| ydk::is_set(rttmonechoadminstring4.yfilter)
	|| ydk::is_set(rttmonechoadminstring5.yfilter)
	|| ydk::is_set(rttmonechoadminmode.yfilter)
	|| ydk::is_set(rttmonechoadminvrfname.yfilter)
	|| ydk::is_set(rttmonechoadmincodectype.yfilter)
	|| ydk::is_set(rttmonechoadmincodecinterval.yfilter)
	|| ydk::is_set(rttmonechoadmincodecpayload.yfilter)
	|| ydk::is_set(rttmonechoadmincodecnumpackets.yfilter)
	|| ydk::is_set(rttmonechoadminicpifadvfactor.yfilter)
	|| ydk::is_set(rttmonechoadminlspfectype.yfilter)
	|| ydk::is_set(rttmonechoadminlspselector.yfilter)
	|| ydk::is_set(rttmonechoadminlspreplymode.yfilter)
	|| ydk::is_set(rttmonechoadminlspttl.yfilter)
	|| ydk::is_set(rttmonechoadminlspexp.yfilter)
	|| ydk::is_set(rttmonechoadminprecision.yfilter)
	|| ydk::is_set(rttmonechoadminprobepakpriority.yfilter)
	|| ydk::is_set(rttmonechoadminowntpsynctolabs.yfilter)
	|| ydk::is_set(rttmonechoadminowntpsynctolpct.yfilter)
	|| ydk::is_set(rttmonechoadminowntpsynctoltype.yfilter)
	|| ydk::is_set(rttmonechoadmincallednumber.yfilter)
	|| ydk::is_set(rttmonechoadmindetectpoint.yfilter)
	|| ydk::is_set(rttmonechoadmingkregistration.yfilter)
	|| ydk::is_set(rttmonechoadminsourcevoiceport.yfilter)
	|| ydk::is_set(rttmonechoadmincallduration.yfilter)
	|| ydk::is_set(rttmonechoadminlspreplydscp.yfilter)
	|| ydk::is_set(rttmonechoadminlspnullshim.yfilter)
	|| ydk::is_set(rttmonechoadmintargetmpid.yfilter)
	|| ydk::is_set(rttmonechoadmintargetdomainname.yfilter)
	|| ydk::is_set(rttmonechoadmintargetvlan.yfilter)
	|| ydk::is_set(rttmonechoadminethernetcos.yfilter)
	|| ydk::is_set(rttmonechoadminlspvccvid.yfilter)
	|| ydk::is_set(rttmonechoadmintargetevc.yfilter)
	|| ydk::is_set(rttmonechoadmintargetmepport.yfilter)
	|| ydk::is_set(rttmonechoadminvideotrafficprofile.yfilter)
	|| ydk::is_set(rttmonechoadmindscp.yfilter)
	|| ydk::is_set(rttmonechoadminreservedsp.yfilter)
	|| ydk::is_set(rttmonechoadmininputinterface.yfilter)
	|| ydk::is_set(rttmonechoadminemulatesourceaddress.yfilter)
	|| ydk::is_set(rttmonechoadminemulatesourceport.yfilter)
	|| ydk::is_set(rttmonechoadminemulatetargetaddress.yfilter)
	|| ydk::is_set(rttmonechoadminemulatetargetport.yfilter)
	|| ydk::is_set(rttmonechoadmintargetmacaddress.yfilter)
	|| ydk::is_set(rttmonechoadminsourcemacaddress.yfilter)
	|| ydk::is_set(rttmonechoadminsourcempid.yfilter)
	|| ydk::is_set(rttmonechoadminendpointlistname.yfilter)
	|| ydk::is_set(rttmonechoadminssm.yfilter)
	|| ydk::is_set(rttmonechoadmincontrolretry.yfilter)
	|| ydk::is_set(rttmonechoadmincontroltimeout.yfilter)
	|| ydk::is_set(rttmonechoadminigmptreeinit.yfilter)
	|| ydk::is_set(rttmonechoadminenableburst.yfilter)
	|| ydk::is_set(rttmonechoadminaggburstcycles.yfilter)
	|| ydk::is_set(rttmonechoadminlossrationumframes.yfilter)
	|| ydk::is_set(rttmonechoadminavailnumframes.yfilter)
	|| ydk::is_set(rttmonechoadmintstampoptimization.yfilter);
}

std::string CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonEchoAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoAdminEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonechoadminprotocol.is_set || is_set(rttmonechoadminprotocol.yfilter)) leaf_name_data.push_back(rttmonechoadminprotocol.get_name_leafdata());
    if (rttmonechoadmintargetaddress.is_set || is_set(rttmonechoadmintargetaddress.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetaddress.get_name_leafdata());
    if (rttmonechoadminpktdatarequestsize.is_set || is_set(rttmonechoadminpktdatarequestsize.yfilter)) leaf_name_data.push_back(rttmonechoadminpktdatarequestsize.get_name_leafdata());
    if (rttmonechoadminpktdataresponsesize.is_set || is_set(rttmonechoadminpktdataresponsesize.yfilter)) leaf_name_data.push_back(rttmonechoadminpktdataresponsesize.get_name_leafdata());
    if (rttmonechoadmintargetport.is_set || is_set(rttmonechoadmintargetport.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetport.get_name_leafdata());
    if (rttmonechoadminsourceaddress.is_set || is_set(rttmonechoadminsourceaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminsourceaddress.get_name_leafdata());
    if (rttmonechoadminsourceport.is_set || is_set(rttmonechoadminsourceport.yfilter)) leaf_name_data.push_back(rttmonechoadminsourceport.get_name_leafdata());
    if (rttmonechoadmincontrolenable.is_set || is_set(rttmonechoadmincontrolenable.yfilter)) leaf_name_data.push_back(rttmonechoadmincontrolenable.get_name_leafdata());
    if (rttmonechoadmintos.is_set || is_set(rttmonechoadmintos.yfilter)) leaf_name_data.push_back(rttmonechoadmintos.get_name_leafdata());
    if (rttmonechoadminlsrenable.is_set || is_set(rttmonechoadminlsrenable.yfilter)) leaf_name_data.push_back(rttmonechoadminlsrenable.get_name_leafdata());
    if (rttmonechoadmintargetaddressstring.is_set || is_set(rttmonechoadmintargetaddressstring.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetaddressstring.get_name_leafdata());
    if (rttmonechoadminnameserver.is_set || is_set(rttmonechoadminnameserver.yfilter)) leaf_name_data.push_back(rttmonechoadminnameserver.get_name_leafdata());
    if (rttmonechoadminoperation.is_set || is_set(rttmonechoadminoperation.yfilter)) leaf_name_data.push_back(rttmonechoadminoperation.get_name_leafdata());
    if (rttmonechoadminhttpversion.is_set || is_set(rttmonechoadminhttpversion.yfilter)) leaf_name_data.push_back(rttmonechoadminhttpversion.get_name_leafdata());
    if (rttmonechoadminurl.is_set || is_set(rttmonechoadminurl.yfilter)) leaf_name_data.push_back(rttmonechoadminurl.get_name_leafdata());
    if (rttmonechoadmincache.is_set || is_set(rttmonechoadmincache.yfilter)) leaf_name_data.push_back(rttmonechoadmincache.get_name_leafdata());
    if (rttmonechoadmininterval.is_set || is_set(rttmonechoadmininterval.yfilter)) leaf_name_data.push_back(rttmonechoadmininterval.get_name_leafdata());
    if (rttmonechoadminnumpackets.is_set || is_set(rttmonechoadminnumpackets.yfilter)) leaf_name_data.push_back(rttmonechoadminnumpackets.get_name_leafdata());
    if (rttmonechoadminproxy.is_set || is_set(rttmonechoadminproxy.yfilter)) leaf_name_data.push_back(rttmonechoadminproxy.get_name_leafdata());
    if (rttmonechoadminstring1.is_set || is_set(rttmonechoadminstring1.yfilter)) leaf_name_data.push_back(rttmonechoadminstring1.get_name_leafdata());
    if (rttmonechoadminstring2.is_set || is_set(rttmonechoadminstring2.yfilter)) leaf_name_data.push_back(rttmonechoadminstring2.get_name_leafdata());
    if (rttmonechoadminstring3.is_set || is_set(rttmonechoadminstring3.yfilter)) leaf_name_data.push_back(rttmonechoadminstring3.get_name_leafdata());
    if (rttmonechoadminstring4.is_set || is_set(rttmonechoadminstring4.yfilter)) leaf_name_data.push_back(rttmonechoadminstring4.get_name_leafdata());
    if (rttmonechoadminstring5.is_set || is_set(rttmonechoadminstring5.yfilter)) leaf_name_data.push_back(rttmonechoadminstring5.get_name_leafdata());
    if (rttmonechoadminmode.is_set || is_set(rttmonechoadminmode.yfilter)) leaf_name_data.push_back(rttmonechoadminmode.get_name_leafdata());
    if (rttmonechoadminvrfname.is_set || is_set(rttmonechoadminvrfname.yfilter)) leaf_name_data.push_back(rttmonechoadminvrfname.get_name_leafdata());
    if (rttmonechoadmincodectype.is_set || is_set(rttmonechoadmincodectype.yfilter)) leaf_name_data.push_back(rttmonechoadmincodectype.get_name_leafdata());
    if (rttmonechoadmincodecinterval.is_set || is_set(rttmonechoadmincodecinterval.yfilter)) leaf_name_data.push_back(rttmonechoadmincodecinterval.get_name_leafdata());
    if (rttmonechoadmincodecpayload.is_set || is_set(rttmonechoadmincodecpayload.yfilter)) leaf_name_data.push_back(rttmonechoadmincodecpayload.get_name_leafdata());
    if (rttmonechoadmincodecnumpackets.is_set || is_set(rttmonechoadmincodecnumpackets.yfilter)) leaf_name_data.push_back(rttmonechoadmincodecnumpackets.get_name_leafdata());
    if (rttmonechoadminicpifadvfactor.is_set || is_set(rttmonechoadminicpifadvfactor.yfilter)) leaf_name_data.push_back(rttmonechoadminicpifadvfactor.get_name_leafdata());
    if (rttmonechoadminlspfectype.is_set || is_set(rttmonechoadminlspfectype.yfilter)) leaf_name_data.push_back(rttmonechoadminlspfectype.get_name_leafdata());
    if (rttmonechoadminlspselector.is_set || is_set(rttmonechoadminlspselector.yfilter)) leaf_name_data.push_back(rttmonechoadminlspselector.get_name_leafdata());
    if (rttmonechoadminlspreplymode.is_set || is_set(rttmonechoadminlspreplymode.yfilter)) leaf_name_data.push_back(rttmonechoadminlspreplymode.get_name_leafdata());
    if (rttmonechoadminlspttl.is_set || is_set(rttmonechoadminlspttl.yfilter)) leaf_name_data.push_back(rttmonechoadminlspttl.get_name_leafdata());
    if (rttmonechoadminlspexp.is_set || is_set(rttmonechoadminlspexp.yfilter)) leaf_name_data.push_back(rttmonechoadminlspexp.get_name_leafdata());
    if (rttmonechoadminprecision.is_set || is_set(rttmonechoadminprecision.yfilter)) leaf_name_data.push_back(rttmonechoadminprecision.get_name_leafdata());
    if (rttmonechoadminprobepakpriority.is_set || is_set(rttmonechoadminprobepakpriority.yfilter)) leaf_name_data.push_back(rttmonechoadminprobepakpriority.get_name_leafdata());
    if (rttmonechoadminowntpsynctolabs.is_set || is_set(rttmonechoadminowntpsynctolabs.yfilter)) leaf_name_data.push_back(rttmonechoadminowntpsynctolabs.get_name_leafdata());
    if (rttmonechoadminowntpsynctolpct.is_set || is_set(rttmonechoadminowntpsynctolpct.yfilter)) leaf_name_data.push_back(rttmonechoadminowntpsynctolpct.get_name_leafdata());
    if (rttmonechoadminowntpsynctoltype.is_set || is_set(rttmonechoadminowntpsynctoltype.yfilter)) leaf_name_data.push_back(rttmonechoadminowntpsynctoltype.get_name_leafdata());
    if (rttmonechoadmincallednumber.is_set || is_set(rttmonechoadmincallednumber.yfilter)) leaf_name_data.push_back(rttmonechoadmincallednumber.get_name_leafdata());
    if (rttmonechoadmindetectpoint.is_set || is_set(rttmonechoadmindetectpoint.yfilter)) leaf_name_data.push_back(rttmonechoadmindetectpoint.get_name_leafdata());
    if (rttmonechoadmingkregistration.is_set || is_set(rttmonechoadmingkregistration.yfilter)) leaf_name_data.push_back(rttmonechoadmingkregistration.get_name_leafdata());
    if (rttmonechoadminsourcevoiceport.is_set || is_set(rttmonechoadminsourcevoiceport.yfilter)) leaf_name_data.push_back(rttmonechoadminsourcevoiceport.get_name_leafdata());
    if (rttmonechoadmincallduration.is_set || is_set(rttmonechoadmincallduration.yfilter)) leaf_name_data.push_back(rttmonechoadmincallduration.get_name_leafdata());
    if (rttmonechoadminlspreplydscp.is_set || is_set(rttmonechoadminlspreplydscp.yfilter)) leaf_name_data.push_back(rttmonechoadminlspreplydscp.get_name_leafdata());
    if (rttmonechoadminlspnullshim.is_set || is_set(rttmonechoadminlspnullshim.yfilter)) leaf_name_data.push_back(rttmonechoadminlspnullshim.get_name_leafdata());
    if (rttmonechoadmintargetmpid.is_set || is_set(rttmonechoadmintargetmpid.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetmpid.get_name_leafdata());
    if (rttmonechoadmintargetdomainname.is_set || is_set(rttmonechoadmintargetdomainname.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetdomainname.get_name_leafdata());
    if (rttmonechoadmintargetvlan.is_set || is_set(rttmonechoadmintargetvlan.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetvlan.get_name_leafdata());
    if (rttmonechoadminethernetcos.is_set || is_set(rttmonechoadminethernetcos.yfilter)) leaf_name_data.push_back(rttmonechoadminethernetcos.get_name_leafdata());
    if (rttmonechoadminlspvccvid.is_set || is_set(rttmonechoadminlspvccvid.yfilter)) leaf_name_data.push_back(rttmonechoadminlspvccvid.get_name_leafdata());
    if (rttmonechoadmintargetevc.is_set || is_set(rttmonechoadmintargetevc.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetevc.get_name_leafdata());
    if (rttmonechoadmintargetmepport.is_set || is_set(rttmonechoadmintargetmepport.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetmepport.get_name_leafdata());
    if (rttmonechoadminvideotrafficprofile.is_set || is_set(rttmonechoadminvideotrafficprofile.yfilter)) leaf_name_data.push_back(rttmonechoadminvideotrafficprofile.get_name_leafdata());
    if (rttmonechoadmindscp.is_set || is_set(rttmonechoadmindscp.yfilter)) leaf_name_data.push_back(rttmonechoadmindscp.get_name_leafdata());
    if (rttmonechoadminreservedsp.is_set || is_set(rttmonechoadminreservedsp.yfilter)) leaf_name_data.push_back(rttmonechoadminreservedsp.get_name_leafdata());
    if (rttmonechoadmininputinterface.is_set || is_set(rttmonechoadmininputinterface.yfilter)) leaf_name_data.push_back(rttmonechoadmininputinterface.get_name_leafdata());
    if (rttmonechoadminemulatesourceaddress.is_set || is_set(rttmonechoadminemulatesourceaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatesourceaddress.get_name_leafdata());
    if (rttmonechoadminemulatesourceport.is_set || is_set(rttmonechoadminemulatesourceport.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatesourceport.get_name_leafdata());
    if (rttmonechoadminemulatetargetaddress.is_set || is_set(rttmonechoadminemulatetargetaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatetargetaddress.get_name_leafdata());
    if (rttmonechoadminemulatetargetport.is_set || is_set(rttmonechoadminemulatetargetport.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatetargetport.get_name_leafdata());
    if (rttmonechoadmintargetmacaddress.is_set || is_set(rttmonechoadmintargetmacaddress.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetmacaddress.get_name_leafdata());
    if (rttmonechoadminsourcemacaddress.is_set || is_set(rttmonechoadminsourcemacaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminsourcemacaddress.get_name_leafdata());
    if (rttmonechoadminsourcempid.is_set || is_set(rttmonechoadminsourcempid.yfilter)) leaf_name_data.push_back(rttmonechoadminsourcempid.get_name_leafdata());
    if (rttmonechoadminendpointlistname.is_set || is_set(rttmonechoadminendpointlistname.yfilter)) leaf_name_data.push_back(rttmonechoadminendpointlistname.get_name_leafdata());
    if (rttmonechoadminssm.is_set || is_set(rttmonechoadminssm.yfilter)) leaf_name_data.push_back(rttmonechoadminssm.get_name_leafdata());
    if (rttmonechoadmincontrolretry.is_set || is_set(rttmonechoadmincontrolretry.yfilter)) leaf_name_data.push_back(rttmonechoadmincontrolretry.get_name_leafdata());
    if (rttmonechoadmincontroltimeout.is_set || is_set(rttmonechoadmincontroltimeout.yfilter)) leaf_name_data.push_back(rttmonechoadmincontroltimeout.get_name_leafdata());
    if (rttmonechoadminigmptreeinit.is_set || is_set(rttmonechoadminigmptreeinit.yfilter)) leaf_name_data.push_back(rttmonechoadminigmptreeinit.get_name_leafdata());
    if (rttmonechoadminenableburst.is_set || is_set(rttmonechoadminenableburst.yfilter)) leaf_name_data.push_back(rttmonechoadminenableburst.get_name_leafdata());
    if (rttmonechoadminaggburstcycles.is_set || is_set(rttmonechoadminaggburstcycles.yfilter)) leaf_name_data.push_back(rttmonechoadminaggburstcycles.get_name_leafdata());
    if (rttmonechoadminlossrationumframes.is_set || is_set(rttmonechoadminlossrationumframes.yfilter)) leaf_name_data.push_back(rttmonechoadminlossrationumframes.get_name_leafdata());
    if (rttmonechoadminavailnumframes.is_set || is_set(rttmonechoadminavailnumframes.yfilter)) leaf_name_data.push_back(rttmonechoadminavailnumframes.get_name_leafdata());
    if (rttmonechoadmintstampoptimization.is_set || is_set(rttmonechoadmintstampoptimization.yfilter)) leaf_name_data.push_back(rttmonechoadmintstampoptimization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminProtocol")
    {
        rttmonechoadminprotocol = value;
        rttmonechoadminprotocol.value_namespace = name_space;
        rttmonechoadminprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetAddress")
    {
        rttmonechoadmintargetaddress = value;
        rttmonechoadmintargetaddress.value_namespace = name_space;
        rttmonechoadmintargetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminPktDataRequestSize")
    {
        rttmonechoadminpktdatarequestsize = value;
        rttmonechoadminpktdatarequestsize.value_namespace = name_space;
        rttmonechoadminpktdatarequestsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminPktDataResponseSize")
    {
        rttmonechoadminpktdataresponsesize = value;
        rttmonechoadminpktdataresponsesize.value_namespace = name_space;
        rttmonechoadminpktdataresponsesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetPort")
    {
        rttmonechoadmintargetport = value;
        rttmonechoadmintargetport.value_namespace = name_space;
        rttmonechoadmintargetport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSourceAddress")
    {
        rttmonechoadminsourceaddress = value;
        rttmonechoadminsourceaddress.value_namespace = name_space;
        rttmonechoadminsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSourcePort")
    {
        rttmonechoadminsourceport = value;
        rttmonechoadminsourceport.value_namespace = name_space;
        rttmonechoadminsourceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminControlEnable")
    {
        rttmonechoadmincontrolenable = value;
        rttmonechoadmincontrolenable.value_namespace = name_space;
        rttmonechoadmincontrolenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTOS")
    {
        rttmonechoadmintos = value;
        rttmonechoadmintos.value_namespace = name_space;
        rttmonechoadmintos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSREnable")
    {
        rttmonechoadminlsrenable = value;
        rttmonechoadminlsrenable.value_namespace = name_space;
        rttmonechoadminlsrenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetAddressString")
    {
        rttmonechoadmintargetaddressstring = value;
        rttmonechoadmintargetaddressstring.value_namespace = name_space;
        rttmonechoadmintargetaddressstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminNameServer")
    {
        rttmonechoadminnameserver = value;
        rttmonechoadminnameserver.value_namespace = name_space;
        rttmonechoadminnameserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminOperation")
    {
        rttmonechoadminoperation = value;
        rttmonechoadminoperation.value_namespace = name_space;
        rttmonechoadminoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminHTTPVersion")
    {
        rttmonechoadminhttpversion = value;
        rttmonechoadminhttpversion.value_namespace = name_space;
        rttmonechoadminhttpversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminURL")
    {
        rttmonechoadminurl = value;
        rttmonechoadminurl.value_namespace = name_space;
        rttmonechoadminurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCache")
    {
        rttmonechoadmincache = value;
        rttmonechoadmincache.value_namespace = name_space;
        rttmonechoadmincache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminInterval")
    {
        rttmonechoadmininterval = value;
        rttmonechoadmininterval.value_namespace = name_space;
        rttmonechoadmininterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminNumPackets")
    {
        rttmonechoadminnumpackets = value;
        rttmonechoadminnumpackets.value_namespace = name_space;
        rttmonechoadminnumpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminProxy")
    {
        rttmonechoadminproxy = value;
        rttmonechoadminproxy.value_namespace = name_space;
        rttmonechoadminproxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminString1")
    {
        rttmonechoadminstring1 = value;
        rttmonechoadminstring1.value_namespace = name_space;
        rttmonechoadminstring1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminString2")
    {
        rttmonechoadminstring2 = value;
        rttmonechoadminstring2.value_namespace = name_space;
        rttmonechoadminstring2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminString3")
    {
        rttmonechoadminstring3 = value;
        rttmonechoadminstring3.value_namespace = name_space;
        rttmonechoadminstring3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminString4")
    {
        rttmonechoadminstring4 = value;
        rttmonechoadminstring4.value_namespace = name_space;
        rttmonechoadminstring4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminString5")
    {
        rttmonechoadminstring5 = value;
        rttmonechoadminstring5.value_namespace = name_space;
        rttmonechoadminstring5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminMode")
    {
        rttmonechoadminmode = value;
        rttmonechoadminmode.value_namespace = name_space;
        rttmonechoadminmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminVrfName")
    {
        rttmonechoadminvrfname = value;
        rttmonechoadminvrfname.value_namespace = name_space;
        rttmonechoadminvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecType")
    {
        rttmonechoadmincodectype = value;
        rttmonechoadmincodectype.value_namespace = name_space;
        rttmonechoadmincodectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecInterval")
    {
        rttmonechoadmincodecinterval = value;
        rttmonechoadmincodecinterval.value_namespace = name_space;
        rttmonechoadmincodecinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecPayload")
    {
        rttmonechoadmincodecpayload = value;
        rttmonechoadmincodecpayload.value_namespace = name_space;
        rttmonechoadmincodecpayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecNumPackets")
    {
        rttmonechoadmincodecnumpackets = value;
        rttmonechoadmincodecnumpackets.value_namespace = name_space;
        rttmonechoadmincodecnumpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminICPIFAdvFactor")
    {
        rttmonechoadminicpifadvfactor = value;
        rttmonechoadminicpifadvfactor.value_namespace = name_space;
        rttmonechoadminicpifadvfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPFECType")
    {
        rttmonechoadminlspfectype = value;
        rttmonechoadminlspfectype.value_namespace = name_space;
        rttmonechoadminlspfectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPSelector")
    {
        rttmonechoadminlspselector = value;
        rttmonechoadminlspselector.value_namespace = name_space;
        rttmonechoadminlspselector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPReplyMode")
    {
        rttmonechoadminlspreplymode = value;
        rttmonechoadminlspreplymode.value_namespace = name_space;
        rttmonechoadminlspreplymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPTTL")
    {
        rttmonechoadminlspttl = value;
        rttmonechoadminlspttl.value_namespace = name_space;
        rttmonechoadminlspttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPExp")
    {
        rttmonechoadminlspexp = value;
        rttmonechoadminlspexp.value_namespace = name_space;
        rttmonechoadminlspexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminPrecision")
    {
        rttmonechoadminprecision = value;
        rttmonechoadminprecision.value_namespace = name_space;
        rttmonechoadminprecision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminProbePakPriority")
    {
        rttmonechoadminprobepakpriority = value;
        rttmonechoadminprobepakpriority.value_namespace = name_space;
        rttmonechoadminprobepakpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminOWNTPSyncTolAbs")
    {
        rttmonechoadminowntpsynctolabs = value;
        rttmonechoadminowntpsynctolabs.value_namespace = name_space;
        rttmonechoadminowntpsynctolabs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminOWNTPSyncTolPct")
    {
        rttmonechoadminowntpsynctolpct = value;
        rttmonechoadminowntpsynctolpct.value_namespace = name_space;
        rttmonechoadminowntpsynctolpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminOWNTPSyncTolType")
    {
        rttmonechoadminowntpsynctoltype = value;
        rttmonechoadminowntpsynctoltype.value_namespace = name_space;
        rttmonechoadminowntpsynctoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCalledNumber")
    {
        rttmonechoadmincallednumber = value;
        rttmonechoadmincallednumber.value_namespace = name_space;
        rttmonechoadmincallednumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminDetectPoint")
    {
        rttmonechoadmindetectpoint = value;
        rttmonechoadmindetectpoint.value_namespace = name_space;
        rttmonechoadmindetectpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminGKRegistration")
    {
        rttmonechoadmingkregistration = value;
        rttmonechoadmingkregistration.value_namespace = name_space;
        rttmonechoadmingkregistration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSourceVoicePort")
    {
        rttmonechoadminsourcevoiceport = value;
        rttmonechoadminsourcevoiceport.value_namespace = name_space;
        rttmonechoadminsourcevoiceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCallDuration")
    {
        rttmonechoadmincallduration = value;
        rttmonechoadmincallduration.value_namespace = name_space;
        rttmonechoadmincallduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPReplyDscp")
    {
        rttmonechoadminlspreplydscp = value;
        rttmonechoadminlspreplydscp.value_namespace = name_space;
        rttmonechoadminlspreplydscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPNullShim")
    {
        rttmonechoadminlspnullshim = value;
        rttmonechoadminlspnullshim.value_namespace = name_space;
        rttmonechoadminlspnullshim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetMPID")
    {
        rttmonechoadmintargetmpid = value;
        rttmonechoadmintargetmpid.value_namespace = name_space;
        rttmonechoadmintargetmpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetDomainName")
    {
        rttmonechoadmintargetdomainname = value;
        rttmonechoadmintargetdomainname.value_namespace = name_space;
        rttmonechoadmintargetdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetVLAN")
    {
        rttmonechoadmintargetvlan = value;
        rttmonechoadmintargetvlan.value_namespace = name_space;
        rttmonechoadmintargetvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEthernetCOS")
    {
        rttmonechoadminethernetcos = value;
        rttmonechoadminethernetcos.value_namespace = name_space;
        rttmonechoadminethernetcos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPVccvID")
    {
        rttmonechoadminlspvccvid = value;
        rttmonechoadminlspvccvid.value_namespace = name_space;
        rttmonechoadminlspvccvid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetEVC")
    {
        rttmonechoadmintargetevc = value;
        rttmonechoadmintargetevc.value_namespace = name_space;
        rttmonechoadmintargetevc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetMEPPort")
    {
        rttmonechoadmintargetmepport = value;
        rttmonechoadmintargetmepport.value_namespace = name_space;
        rttmonechoadmintargetmepport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminVideoTrafficProfile")
    {
        rttmonechoadminvideotrafficprofile = value;
        rttmonechoadminvideotrafficprofile.value_namespace = name_space;
        rttmonechoadminvideotrafficprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminDscp")
    {
        rttmonechoadmindscp = value;
        rttmonechoadmindscp.value_namespace = name_space;
        rttmonechoadmindscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminReserveDsp")
    {
        rttmonechoadminreservedsp = value;
        rttmonechoadminreservedsp.value_namespace = name_space;
        rttmonechoadminreservedsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminInputInterface")
    {
        rttmonechoadmininputinterface = value;
        rttmonechoadmininputinterface.value_namespace = name_space;
        rttmonechoadmininputinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEmulateSourceAddress")
    {
        rttmonechoadminemulatesourceaddress = value;
        rttmonechoadminemulatesourceaddress.value_namespace = name_space;
        rttmonechoadminemulatesourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEmulateSourcePort")
    {
        rttmonechoadminemulatesourceport = value;
        rttmonechoadminemulatesourceport.value_namespace = name_space;
        rttmonechoadminemulatesourceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEmulateTargetAddress")
    {
        rttmonechoadminemulatetargetaddress = value;
        rttmonechoadminemulatetargetaddress.value_namespace = name_space;
        rttmonechoadminemulatetargetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEmulateTargetPort")
    {
        rttmonechoadminemulatetargetport = value;
        rttmonechoadminemulatetargetport.value_namespace = name_space;
        rttmonechoadminemulatetargetport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetMacAddress")
    {
        rttmonechoadmintargetmacaddress = value;
        rttmonechoadmintargetmacaddress.value_namespace = name_space;
        rttmonechoadmintargetmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSourceMacAddress")
    {
        rttmonechoadminsourcemacaddress = value;
        rttmonechoadminsourcemacaddress.value_namespace = name_space;
        rttmonechoadminsourcemacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSourceMPID")
    {
        rttmonechoadminsourcempid = value;
        rttmonechoadminsourcempid.value_namespace = name_space;
        rttmonechoadminsourcempid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEndPointListName")
    {
        rttmonechoadminendpointlistname = value;
        rttmonechoadminendpointlistname.value_namespace = name_space;
        rttmonechoadminendpointlistname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSSM")
    {
        rttmonechoadminssm = value;
        rttmonechoadminssm.value_namespace = name_space;
        rttmonechoadminssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminControlRetry")
    {
        rttmonechoadmincontrolretry = value;
        rttmonechoadmincontrolretry.value_namespace = name_space;
        rttmonechoadmincontrolretry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminControlTimeout")
    {
        rttmonechoadmincontroltimeout = value;
        rttmonechoadmincontroltimeout.value_namespace = name_space;
        rttmonechoadmincontroltimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminIgmpTreeInit")
    {
        rttmonechoadminigmptreeinit = value;
        rttmonechoadminigmptreeinit.value_namespace = name_space;
        rttmonechoadminigmptreeinit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEnableBurst")
    {
        rttmonechoadminenableburst = value;
        rttmonechoadminenableburst.value_namespace = name_space;
        rttmonechoadminenableburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminAggBurstCycles")
    {
        rttmonechoadminaggburstcycles = value;
        rttmonechoadminaggburstcycles.value_namespace = name_space;
        rttmonechoadminaggburstcycles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLossRatioNumFrames")
    {
        rttmonechoadminlossrationumframes = value;
        rttmonechoadminlossrationumframes.value_namespace = name_space;
        rttmonechoadminlossrationumframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminAvailNumFrames")
    {
        rttmonechoadminavailnumframes = value;
        rttmonechoadminavailnumframes.value_namespace = name_space;
        rttmonechoadminavailnumframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTstampOptimization")
    {
        rttmonechoadmintstampoptimization = value;
        rttmonechoadmintstampoptimization.value_namespace = name_space;
        rttmonechoadmintstampoptimization.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminProtocol")
    {
        rttmonechoadminprotocol.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetAddress")
    {
        rttmonechoadmintargetaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminPktDataRequestSize")
    {
        rttmonechoadminpktdatarequestsize.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminPktDataResponseSize")
    {
        rttmonechoadminpktdataresponsesize.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetPort")
    {
        rttmonechoadmintargetport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceAddress")
    {
        rttmonechoadminsourceaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourcePort")
    {
        rttmonechoadminsourceport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminControlEnable")
    {
        rttmonechoadmincontrolenable.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTOS")
    {
        rttmonechoadmintos.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSREnable")
    {
        rttmonechoadminlsrenable.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetAddressString")
    {
        rttmonechoadmintargetaddressstring.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminNameServer")
    {
        rttmonechoadminnameserver.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminOperation")
    {
        rttmonechoadminoperation.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminHTTPVersion")
    {
        rttmonechoadminhttpversion.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminURL")
    {
        rttmonechoadminurl.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCache")
    {
        rttmonechoadmincache.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminInterval")
    {
        rttmonechoadmininterval.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminNumPackets")
    {
        rttmonechoadminnumpackets.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminProxy")
    {
        rttmonechoadminproxy.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminString1")
    {
        rttmonechoadminstring1.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminString2")
    {
        rttmonechoadminstring2.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminString3")
    {
        rttmonechoadminstring3.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminString4")
    {
        rttmonechoadminstring4.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminString5")
    {
        rttmonechoadminstring5.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminMode")
    {
        rttmonechoadminmode.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminVrfName")
    {
        rttmonechoadminvrfname.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecType")
    {
        rttmonechoadmincodectype.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecInterval")
    {
        rttmonechoadmincodecinterval.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecPayload")
    {
        rttmonechoadmincodecpayload.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecNumPackets")
    {
        rttmonechoadmincodecnumpackets.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminICPIFAdvFactor")
    {
        rttmonechoadminicpifadvfactor.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPFECType")
    {
        rttmonechoadminlspfectype.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPSelector")
    {
        rttmonechoadminlspselector.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPReplyMode")
    {
        rttmonechoadminlspreplymode.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPTTL")
    {
        rttmonechoadminlspttl.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPExp")
    {
        rttmonechoadminlspexp.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminPrecision")
    {
        rttmonechoadminprecision.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminProbePakPriority")
    {
        rttmonechoadminprobepakpriority.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminOWNTPSyncTolAbs")
    {
        rttmonechoadminowntpsynctolabs.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminOWNTPSyncTolPct")
    {
        rttmonechoadminowntpsynctolpct.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminOWNTPSyncTolType")
    {
        rttmonechoadminowntpsynctoltype.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCalledNumber")
    {
        rttmonechoadmincallednumber.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminDetectPoint")
    {
        rttmonechoadmindetectpoint.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminGKRegistration")
    {
        rttmonechoadmingkregistration.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceVoicePort")
    {
        rttmonechoadminsourcevoiceport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCallDuration")
    {
        rttmonechoadmincallduration.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPReplyDscp")
    {
        rttmonechoadminlspreplydscp.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPNullShim")
    {
        rttmonechoadminlspnullshim.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetMPID")
    {
        rttmonechoadmintargetmpid.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetDomainName")
    {
        rttmonechoadmintargetdomainname.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetVLAN")
    {
        rttmonechoadmintargetvlan.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEthernetCOS")
    {
        rttmonechoadminethernetcos.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPVccvID")
    {
        rttmonechoadminlspvccvid.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetEVC")
    {
        rttmonechoadmintargetevc.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetMEPPort")
    {
        rttmonechoadmintargetmepport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminVideoTrafficProfile")
    {
        rttmonechoadminvideotrafficprofile.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminDscp")
    {
        rttmonechoadmindscp.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminReserveDsp")
    {
        rttmonechoadminreservedsp.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminInputInterface")
    {
        rttmonechoadmininputinterface.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEmulateSourceAddress")
    {
        rttmonechoadminemulatesourceaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEmulateSourcePort")
    {
        rttmonechoadminemulatesourceport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEmulateTargetAddress")
    {
        rttmonechoadminemulatetargetaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEmulateTargetPort")
    {
        rttmonechoadminemulatetargetport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetMacAddress")
    {
        rttmonechoadmintargetmacaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceMacAddress")
    {
        rttmonechoadminsourcemacaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceMPID")
    {
        rttmonechoadminsourcempid.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEndPointListName")
    {
        rttmonechoadminendpointlistname.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSSM")
    {
        rttmonechoadminssm.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminControlRetry")
    {
        rttmonechoadmincontrolretry.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminControlTimeout")
    {
        rttmonechoadmincontroltimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminIgmpTreeInit")
    {
        rttmonechoadminigmptreeinit.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEnableBurst")
    {
        rttmonechoadminenableburst.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminAggBurstCycles")
    {
        rttmonechoadminaggburstcycles.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLossRatioNumFrames")
    {
        rttmonechoadminlossrationumframes.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminAvailNumFrames")
    {
        rttmonechoadminavailnumframes.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTstampOptimization")
    {
        rttmonechoadmintstampoptimization.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonEchoAdminProtocol" || name == "rttMonEchoAdminTargetAddress" || name == "rttMonEchoAdminPktDataRequestSize" || name == "rttMonEchoAdminPktDataResponseSize" || name == "rttMonEchoAdminTargetPort" || name == "rttMonEchoAdminSourceAddress" || name == "rttMonEchoAdminSourcePort" || name == "rttMonEchoAdminControlEnable" || name == "rttMonEchoAdminTOS" || name == "rttMonEchoAdminLSREnable" || name == "rttMonEchoAdminTargetAddressString" || name == "rttMonEchoAdminNameServer" || name == "rttMonEchoAdminOperation" || name == "rttMonEchoAdminHTTPVersion" || name == "rttMonEchoAdminURL" || name == "rttMonEchoAdminCache" || name == "rttMonEchoAdminInterval" || name == "rttMonEchoAdminNumPackets" || name == "rttMonEchoAdminProxy" || name == "rttMonEchoAdminString1" || name == "rttMonEchoAdminString2" || name == "rttMonEchoAdminString3" || name == "rttMonEchoAdminString4" || name == "rttMonEchoAdminString5" || name == "rttMonEchoAdminMode" || name == "rttMonEchoAdminVrfName" || name == "rttMonEchoAdminCodecType" || name == "rttMonEchoAdminCodecInterval" || name == "rttMonEchoAdminCodecPayload" || name == "rttMonEchoAdminCodecNumPackets" || name == "rttMonEchoAdminICPIFAdvFactor" || name == "rttMonEchoAdminLSPFECType" || name == "rttMonEchoAdminLSPSelector" || name == "rttMonEchoAdminLSPReplyMode" || name == "rttMonEchoAdminLSPTTL" || name == "rttMonEchoAdminLSPExp" || name == "rttMonEchoAdminPrecision" || name == "rttMonEchoAdminProbePakPriority" || name == "rttMonEchoAdminOWNTPSyncTolAbs" || name == "rttMonEchoAdminOWNTPSyncTolPct" || name == "rttMonEchoAdminOWNTPSyncTolType" || name == "rttMonEchoAdminCalledNumber" || name == "rttMonEchoAdminDetectPoint" || name == "rttMonEchoAdminGKRegistration" || name == "rttMonEchoAdminSourceVoicePort" || name == "rttMonEchoAdminCallDuration" || name == "rttMonEchoAdminLSPReplyDscp" || name == "rttMonEchoAdminLSPNullShim" || name == "rttMonEchoAdminTargetMPID" || name == "rttMonEchoAdminTargetDomainName" || name == "rttMonEchoAdminTargetVLAN" || name == "rttMonEchoAdminEthernetCOS" || name == "rttMonEchoAdminLSPVccvID" || name == "rttMonEchoAdminTargetEVC" || name == "rttMonEchoAdminTargetMEPPort" || name == "rttMonEchoAdminVideoTrafficProfile" || name == "rttMonEchoAdminDscp" || name == "rttMonEchoAdminReserveDsp" || name == "rttMonEchoAdminInputInterface" || name == "rttMonEchoAdminEmulateSourceAddress" || name == "rttMonEchoAdminEmulateSourcePort" || name == "rttMonEchoAdminEmulateTargetAddress" || name == "rttMonEchoAdminEmulateTargetPort" || name == "rttMonEchoAdminTargetMacAddress" || name == "rttMonEchoAdminSourceMacAddress" || name == "rttMonEchoAdminSourceMPID" || name == "rttMonEchoAdminEndPointListName" || name == "rttMonEchoAdminSSM" || name == "rttMonEchoAdminControlRetry" || name == "rttMonEchoAdminControlTimeout" || name == "rttMonEchoAdminIgmpTreeInit" || name == "rttMonEchoAdminEnableBurst" || name == "rttMonEchoAdminAggBurstCycles" || name == "rttMonEchoAdminLossRatioNumFrames" || name == "rttMonEchoAdminAvailNumFrames" || name == "rttMonEchoAdminTstampOptimization")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminTable()
    :
    rttmonfileioadminentry(this, {"rttmonctrladminindex"})
{

    yang_name = "rttMonFileIOAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonFileIOAdminTable::~RttMonFileIOAdminTable()
{
}

bool CISCORTTMONMIB::RttMonFileIOAdminTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonfileioadminentry.len(); index++)
    {
        if(rttmonfileioadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonFileIOAdminTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonfileioadminentry.len(); index++)
    {
        if(rttmonfileioadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonFileIOAdminTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonFileIOAdminTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonFileIOAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonFileIOAdminTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonFileIOAdminTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonFileIOAdminEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry>();
        c->parent = this;
        rttmonfileioadminentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonFileIOAdminTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonfileioadminentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonFileIOAdminTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonFileIOAdminTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonFileIOAdminTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonFileIOAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonfileioadminfilepath{YType::str, "rttMonFileIOAdminFilePath"},
    rttmonfileioadminsize{YType::enumeration, "rttMonFileIOAdminSize"},
    rttmonfileioadminaction{YType::enumeration, "rttMonFileIOAdminAction"}
{

    yang_name = "rttMonFileIOAdminEntry"; yang_parent_name = "rttMonFileIOAdminTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::~RttMonFileIOAdminEntry()
{
}

bool CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonfileioadminfilepath.is_set
	|| rttmonfileioadminsize.is_set
	|| rttmonfileioadminaction.is_set;
}

bool CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonfileioadminfilepath.yfilter)
	|| ydk::is_set(rttmonfileioadminsize.yfilter)
	|| ydk::is_set(rttmonfileioadminaction.yfilter);
}

std::string CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonFileIOAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonFileIOAdminEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonfileioadminfilepath.is_set || is_set(rttmonfileioadminfilepath.yfilter)) leaf_name_data.push_back(rttmonfileioadminfilepath.get_name_leafdata());
    if (rttmonfileioadminsize.is_set || is_set(rttmonfileioadminsize.yfilter)) leaf_name_data.push_back(rttmonfileioadminsize.get_name_leafdata());
    if (rttmonfileioadminaction.is_set || is_set(rttmonfileioadminaction.yfilter)) leaf_name_data.push_back(rttmonfileioadminaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonFileIOAdminFilePath")
    {
        rttmonfileioadminfilepath = value;
        rttmonfileioadminfilepath.value_namespace = name_space;
        rttmonfileioadminfilepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonFileIOAdminSize")
    {
        rttmonfileioadminsize = value;
        rttmonfileioadminsize.value_namespace = name_space;
        rttmonfileioadminsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonFileIOAdminAction")
    {
        rttmonfileioadminaction = value;
        rttmonfileioadminaction.value_namespace = name_space;
        rttmonfileioadminaction.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonFileIOAdminFilePath")
    {
        rttmonfileioadminfilepath.yfilter = yfilter;
    }
    if(value_path == "rttMonFileIOAdminSize")
    {
        rttmonfileioadminsize.yfilter = yfilter;
    }
    if(value_path == "rttMonFileIOAdminAction")
    {
        rttmonfileioadminaction.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonFileIOAdminFilePath" || name == "rttMonFileIOAdminSize" || name == "rttMonFileIOAdminAction")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminTable()
    :
    rttmonscriptadminentry(this, {"rttmonctrladminindex"})
{

    yang_name = "rttMonScriptAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonScriptAdminTable::~RttMonScriptAdminTable()
{
}

bool CISCORTTMONMIB::RttMonScriptAdminTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonscriptadminentry.len(); index++)
    {
        if(rttmonscriptadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonScriptAdminTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonscriptadminentry.len(); index++)
    {
        if(rttmonscriptadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonScriptAdminTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonScriptAdminTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonScriptAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonScriptAdminTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonScriptAdminTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonScriptAdminEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry>();
        c->parent = this;
        rttmonscriptadminentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonScriptAdminTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonscriptadminentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonScriptAdminTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonScriptAdminTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonScriptAdminTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonScriptAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::RttMonScriptAdminEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonscriptadminname{YType::str, "rttMonScriptAdminName"},
    rttmonscriptadmincmdlineparams{YType::str, "rttMonScriptAdminCmdLineParams"}
{

    yang_name = "rttMonScriptAdminEntry"; yang_parent_name = "rttMonScriptAdminTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::~RttMonScriptAdminEntry()
{
}

bool CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonscriptadminname.is_set
	|| rttmonscriptadmincmdlineparams.is_set;
}

bool CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonscriptadminname.yfilter)
	|| ydk::is_set(rttmonscriptadmincmdlineparams.yfilter);
}

std::string CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonScriptAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonScriptAdminEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonscriptadminname.is_set || is_set(rttmonscriptadminname.yfilter)) leaf_name_data.push_back(rttmonscriptadminname.get_name_leafdata());
    if (rttmonscriptadmincmdlineparams.is_set || is_set(rttmonscriptadmincmdlineparams.yfilter)) leaf_name_data.push_back(rttmonscriptadmincmdlineparams.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScriptAdminName")
    {
        rttmonscriptadminname = value;
        rttmonscriptadminname.value_namespace = name_space;
        rttmonscriptadminname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScriptAdminCmdLineParams")
    {
        rttmonscriptadmincmdlineparams = value;
        rttmonscriptadmincmdlineparams.value_namespace = name_space;
        rttmonscriptadmincmdlineparams.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonScriptAdminName")
    {
        rttmonscriptadminname.yfilter = yfilter;
    }
    if(value_path == "rttMonScriptAdminCmdLineParams")
    {
        rttmonscriptadmincmdlineparams.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonScriptAdminName" || name == "rttMonScriptAdminCmdLineParams")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminTable()
    :
    rttmonreacttriggeradminentry(this, {"rttmonctrladminindex", "rttmonreacttriggeradminrttmonctrladminindex"})
{

    yang_name = "rttMonReactTriggerAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonReactTriggerAdminTable::~RttMonReactTriggerAdminTable()
{
}

bool CISCORTTMONMIB::RttMonReactTriggerAdminTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonreacttriggeradminentry.len(); index++)
    {
        if(rttmonreacttriggeradminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonReactTriggerAdminTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonreacttriggeradminentry.len(); index++)
    {
        if(rttmonreacttriggeradminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonReactTriggerAdminTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonReactTriggerAdminTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactTriggerAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonReactTriggerAdminTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonReactTriggerAdminTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonReactTriggerAdminEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry>();
        c->parent = this;
        rttmonreacttriggeradminentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonReactTriggerAdminTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonreacttriggeradminentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonReactTriggerAdminTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonReactTriggerAdminTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonReactTriggerAdminTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonReactTriggerAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::RttMonReactTriggerAdminEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonreacttriggeradminrttmonctrladminindex{YType::int32, "rttMonReactTriggerAdminRttMonCtrlAdminIndex"},
    rttmonreacttriggeradminstatus{YType::enumeration, "rttMonReactTriggerAdminStatus"},
    rttmonreacttriggeroperstate{YType::enumeration, "rttMonReactTriggerOperState"}
{

    yang_name = "rttMonReactTriggerAdminEntry"; yang_parent_name = "rttMonReactTriggerAdminTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::~RttMonReactTriggerAdminEntry()
{
}

bool CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonreacttriggeradminrttmonctrladminindex.is_set
	|| rttmonreacttriggeradminstatus.is_set
	|| rttmonreacttriggeroperstate.is_set;
}

bool CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonreacttriggeradminrttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonreacttriggeradminstatus.yfilter)
	|| ydk::is_set(rttmonreacttriggeroperstate.yfilter);
}

std::string CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonReactTriggerAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactTriggerAdminEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonreacttriggeradminrttmonctrladminindex, "rttMonReactTriggerAdminRttMonCtrlAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonreacttriggeradminrttmonctrladminindex.is_set || is_set(rttmonreacttriggeradminrttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonreacttriggeradminrttmonctrladminindex.get_name_leafdata());
    if (rttmonreacttriggeradminstatus.is_set || is_set(rttmonreacttriggeradminstatus.yfilter)) leaf_name_data.push_back(rttmonreacttriggeradminstatus.get_name_leafdata());
    if (rttmonreacttriggeroperstate.is_set || is_set(rttmonreacttriggeroperstate.yfilter)) leaf_name_data.push_back(rttmonreacttriggeroperstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactTriggerAdminRttMonCtrlAdminIndex")
    {
        rttmonreacttriggeradminrttmonctrladminindex = value;
        rttmonreacttriggeradminrttmonctrladminindex.value_namespace = name_space;
        rttmonreacttriggeradminrttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactTriggerAdminStatus")
    {
        rttmonreacttriggeradminstatus = value;
        rttmonreacttriggeradminstatus.value_namespace = name_space;
        rttmonreacttriggeradminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactTriggerOperState")
    {
        rttmonreacttriggeroperstate = value;
        rttmonreacttriggeroperstate.value_namespace = name_space;
        rttmonreacttriggeroperstate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonReactTriggerAdminRttMonCtrlAdminIndex")
    {
        rttmonreacttriggeradminrttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonReactTriggerAdminStatus")
    {
        rttmonreacttriggeradminstatus.yfilter = yfilter;
    }
    if(value_path == "rttMonReactTriggerOperState")
    {
        rttmonreacttriggeroperstate.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonReactTriggerAdminRttMonCtrlAdminIndex" || name == "rttMonReactTriggerAdminStatus" || name == "rttMonReactTriggerOperState")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminTable()
    :
    rttmonechopathadminentry(this, {"rttmonctrladminindex", "rttmonechopathadminhopindex"})
{

    yang_name = "rttMonEchoPathAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonEchoPathAdminTable::~RttMonEchoPathAdminTable()
{
}

bool CISCORTTMONMIB::RttMonEchoPathAdminTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonechopathadminentry.len(); index++)
    {
        if(rttmonechopathadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonEchoPathAdminTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonechopathadminentry.len(); index++)
    {
        if(rttmonechopathadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonEchoPathAdminTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonEchoPathAdminTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoPathAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonEchoPathAdminTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonEchoPathAdminTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonEchoPathAdminEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry>();
        c->parent = this;
        rttmonechopathadminentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonEchoPathAdminTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonechopathadminentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonEchoPathAdminTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonEchoPathAdminTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonEchoPathAdminTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonEchoPathAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::RttMonEchoPathAdminEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonechopathadminhopindex{YType::int32, "rttMonEchoPathAdminHopIndex"},
    rttmonechopathadminhopaddress{YType::str, "rttMonEchoPathAdminHopAddress"}
{

    yang_name = "rttMonEchoPathAdminEntry"; yang_parent_name = "rttMonEchoPathAdminTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::~RttMonEchoPathAdminEntry()
{
}

bool CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonechopathadminhopindex.is_set
	|| rttmonechopathadminhopaddress.is_set;
}

bool CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonechopathadminhopindex.yfilter)
	|| ydk::is_set(rttmonechopathadminhopaddress.yfilter);
}

std::string CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonEchoPathAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoPathAdminEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonechopathadminhopindex, "rttMonEchoPathAdminHopIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonechopathadminhopindex.is_set || is_set(rttmonechopathadminhopindex.yfilter)) leaf_name_data.push_back(rttmonechopathadminhopindex.get_name_leafdata());
    if (rttmonechopathadminhopaddress.is_set || is_set(rttmonechopathadminhopaddress.yfilter)) leaf_name_data.push_back(rttmonechopathadminhopaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoPathAdminHopIndex")
    {
        rttmonechopathadminhopindex = value;
        rttmonechopathadminhopindex.value_namespace = name_space;
        rttmonechopathadminhopindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoPathAdminHopAddress")
    {
        rttmonechopathadminhopaddress = value;
        rttmonechopathadminhopaddress.value_namespace = name_space;
        rttmonechopathadminhopaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoPathAdminHopIndex")
    {
        rttmonechopathadminhopindex.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoPathAdminHopAddress")
    {
        rttmonechopathadminhopaddress.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonEchoPathAdminHopIndex" || name == "rttMonEchoPathAdminHopAddress")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminTable()
    :
    rttmongrpscheduleadminentry(this, {"rttmongrpscheduleadminindex"})
{

    yang_name = "rttMonGrpScheduleAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonGrpScheduleAdminTable::~RttMonGrpScheduleAdminTable()
{
}

bool CISCORTTMONMIB::RttMonGrpScheduleAdminTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmongrpscheduleadminentry.len(); index++)
    {
        if(rttmongrpscheduleadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonGrpScheduleAdminTable::has_operation() const
{
    for (std::size_t index=0; index<rttmongrpscheduleadminentry.len(); index++)
    {
        if(rttmongrpscheduleadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonGrpScheduleAdminTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonGrpScheduleAdminTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGrpScheduleAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonGrpScheduleAdminTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonGrpScheduleAdminTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonGrpScheduleAdminEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry>();
        c->parent = this;
        rttmongrpscheduleadminentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonGrpScheduleAdminTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmongrpscheduleadminentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonGrpScheduleAdminTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonGrpScheduleAdminTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonGrpScheduleAdminTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonGrpScheduleAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::RttMonGrpScheduleAdminEntry()
    :
    rttmongrpscheduleadminindex{YType::int32, "rttMonGrpScheduleAdminIndex"},
    rttmongrpscheduleadminprobes{YType::str, "rttMonGrpScheduleAdminProbes"},
    rttmongrpscheduleadminperiod{YType::int32, "rttMonGrpScheduleAdminPeriod"},
    rttmongrpscheduleadminfrequency{YType::int32, "rttMonGrpScheduleAdminFrequency"},
    rttmongrpscheduleadminlife{YType::int32, "rttMonGrpScheduleAdminLife"},
    rttmongrpscheduleadminageout{YType::int32, "rttMonGrpScheduleAdminAgeout"},
    rttmongrpscheduleadminstatus{YType::enumeration, "rttMonGrpScheduleAdminStatus"},
    rttmongrpscheduleadminfreqmax{YType::int32, "rttMonGrpScheduleAdminFreqMax"},
    rttmongrpscheduleadminfreqmin{YType::int32, "rttMonGrpScheduleAdminFreqMin"},
    rttmongrpscheduleadminstarttime{YType::int32, "rttMonGrpScheduleAdminStartTime"},
    rttmongrpscheduleadminadd{YType::boolean, "rttMonGrpScheduleAdminAdd"},
    rttmongrpscheduleadmindelete{YType::boolean, "rttMonGrpScheduleAdminDelete"},
    rttmongrpscheduleadminreset{YType::boolean, "rttMonGrpScheduleAdminReset"}
{

    yang_name = "rttMonGrpScheduleAdminEntry"; yang_parent_name = "rttMonGrpScheduleAdminTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::~RttMonGrpScheduleAdminEntry()
{
}

bool CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmongrpscheduleadminindex.is_set
	|| rttmongrpscheduleadminprobes.is_set
	|| rttmongrpscheduleadminperiod.is_set
	|| rttmongrpscheduleadminfrequency.is_set
	|| rttmongrpscheduleadminlife.is_set
	|| rttmongrpscheduleadminageout.is_set
	|| rttmongrpscheduleadminstatus.is_set
	|| rttmongrpscheduleadminfreqmax.is_set
	|| rttmongrpscheduleadminfreqmin.is_set
	|| rttmongrpscheduleadminstarttime.is_set
	|| rttmongrpscheduleadminadd.is_set
	|| rttmongrpscheduleadmindelete.is_set
	|| rttmongrpscheduleadminreset.is_set;
}

bool CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmongrpscheduleadminindex.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminprobes.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminperiod.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminfrequency.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminlife.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminageout.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminstatus.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminfreqmax.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminfreqmin.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminstarttime.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminadd.yfilter)
	|| ydk::is_set(rttmongrpscheduleadmindelete.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminreset.yfilter);
}

std::string CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonGrpScheduleAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGrpScheduleAdminEntry";
    ADD_KEY_TOKEN(rttmongrpscheduleadminindex, "rttMonGrpScheduleAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmongrpscheduleadminindex.is_set || is_set(rttmongrpscheduleadminindex.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminindex.get_name_leafdata());
    if (rttmongrpscheduleadminprobes.is_set || is_set(rttmongrpscheduleadminprobes.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminprobes.get_name_leafdata());
    if (rttmongrpscheduleadminperiod.is_set || is_set(rttmongrpscheduleadminperiod.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminperiod.get_name_leafdata());
    if (rttmongrpscheduleadminfrequency.is_set || is_set(rttmongrpscheduleadminfrequency.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminfrequency.get_name_leafdata());
    if (rttmongrpscheduleadminlife.is_set || is_set(rttmongrpscheduleadminlife.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminlife.get_name_leafdata());
    if (rttmongrpscheduleadminageout.is_set || is_set(rttmongrpscheduleadminageout.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminageout.get_name_leafdata());
    if (rttmongrpscheduleadminstatus.is_set || is_set(rttmongrpscheduleadminstatus.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminstatus.get_name_leafdata());
    if (rttmongrpscheduleadminfreqmax.is_set || is_set(rttmongrpscheduleadminfreqmax.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminfreqmax.get_name_leafdata());
    if (rttmongrpscheduleadminfreqmin.is_set || is_set(rttmongrpscheduleadminfreqmin.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminfreqmin.get_name_leafdata());
    if (rttmongrpscheduleadminstarttime.is_set || is_set(rttmongrpscheduleadminstarttime.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminstarttime.get_name_leafdata());
    if (rttmongrpscheduleadminadd.is_set || is_set(rttmongrpscheduleadminadd.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminadd.get_name_leafdata());
    if (rttmongrpscheduleadmindelete.is_set || is_set(rttmongrpscheduleadmindelete.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadmindelete.get_name_leafdata());
    if (rttmongrpscheduleadminreset.is_set || is_set(rttmongrpscheduleadminreset.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminreset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonGrpScheduleAdminIndex")
    {
        rttmongrpscheduleadminindex = value;
        rttmongrpscheduleadminindex.value_namespace = name_space;
        rttmongrpscheduleadminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminProbes")
    {
        rttmongrpscheduleadminprobes = value;
        rttmongrpscheduleadminprobes.value_namespace = name_space;
        rttmongrpscheduleadminprobes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminPeriod")
    {
        rttmongrpscheduleadminperiod = value;
        rttmongrpscheduleadminperiod.value_namespace = name_space;
        rttmongrpscheduleadminperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminFrequency")
    {
        rttmongrpscheduleadminfrequency = value;
        rttmongrpscheduleadminfrequency.value_namespace = name_space;
        rttmongrpscheduleadminfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminLife")
    {
        rttmongrpscheduleadminlife = value;
        rttmongrpscheduleadminlife.value_namespace = name_space;
        rttmongrpscheduleadminlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminAgeout")
    {
        rttmongrpscheduleadminageout = value;
        rttmongrpscheduleadminageout.value_namespace = name_space;
        rttmongrpscheduleadminageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminStatus")
    {
        rttmongrpscheduleadminstatus = value;
        rttmongrpscheduleadminstatus.value_namespace = name_space;
        rttmongrpscheduleadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminFreqMax")
    {
        rttmongrpscheduleadminfreqmax = value;
        rttmongrpscheduleadminfreqmax.value_namespace = name_space;
        rttmongrpscheduleadminfreqmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminFreqMin")
    {
        rttmongrpscheduleadminfreqmin = value;
        rttmongrpscheduleadminfreqmin.value_namespace = name_space;
        rttmongrpscheduleadminfreqmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminStartTime")
    {
        rttmongrpscheduleadminstarttime = value;
        rttmongrpscheduleadminstarttime.value_namespace = name_space;
        rttmongrpscheduleadminstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminAdd")
    {
        rttmongrpscheduleadminadd = value;
        rttmongrpscheduleadminadd.value_namespace = name_space;
        rttmongrpscheduleadminadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminDelete")
    {
        rttmongrpscheduleadmindelete = value;
        rttmongrpscheduleadmindelete.value_namespace = name_space;
        rttmongrpscheduleadmindelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminReset")
    {
        rttmongrpscheduleadminreset = value;
        rttmongrpscheduleadminreset.value_namespace = name_space;
        rttmongrpscheduleadminreset.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonGrpScheduleAdminIndex")
    {
        rttmongrpscheduleadminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminProbes")
    {
        rttmongrpscheduleadminprobes.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminPeriod")
    {
        rttmongrpscheduleadminperiod.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminFrequency")
    {
        rttmongrpscheduleadminfrequency.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminLife")
    {
        rttmongrpscheduleadminlife.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminAgeout")
    {
        rttmongrpscheduleadminageout.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminStatus")
    {
        rttmongrpscheduleadminstatus.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminFreqMax")
    {
        rttmongrpscheduleadminfreqmax.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminFreqMin")
    {
        rttmongrpscheduleadminfreqmin.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminStartTime")
    {
        rttmongrpscheduleadminstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminAdd")
    {
        rttmongrpscheduleadminadd.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminDelete")
    {
        rttmongrpscheduleadmindelete.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminReset")
    {
        rttmongrpscheduleadminreset.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonGrpScheduleAdminIndex" || name == "rttMonGrpScheduleAdminProbes" || name == "rttMonGrpScheduleAdminPeriod" || name == "rttMonGrpScheduleAdminFrequency" || name == "rttMonGrpScheduleAdminLife" || name == "rttMonGrpScheduleAdminAgeout" || name == "rttMonGrpScheduleAdminStatus" || name == "rttMonGrpScheduleAdminFreqMax" || name == "rttMonGrpScheduleAdminFreqMin" || name == "rttMonGrpScheduleAdminStartTime" || name == "rttMonGrpScheduleAdminAdd" || name == "rttMonGrpScheduleAdminDelete" || name == "rttMonGrpScheduleAdminReset")
        return true;
    return false;
}

CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlTable()
    :
    rttmplsvpnmonctrlentry(this, {"rttmplsvpnmonctrlindex"})
{

    yang_name = "rttMplsVpnMonCtrlTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMplsVpnMonCtrlTable::~RttMplsVpnMonCtrlTable()
{
}

bool CISCORTTMONMIB::RttMplsVpnMonCtrlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmplsvpnmonctrlentry.len(); index++)
    {
        if(rttmplsvpnmonctrlentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMplsVpnMonCtrlTable::has_operation() const
{
    for (std::size_t index=0; index<rttmplsvpnmonctrlentry.len(); index++)
    {
        if(rttmplsvpnmonctrlentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMplsVpnMonCtrlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMplsVpnMonCtrlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMplsVpnMonCtrlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMplsVpnMonCtrlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMplsVpnMonCtrlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMplsVpnMonCtrlEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry>();
        c->parent = this;
        rttmplsvpnmonctrlentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMplsVpnMonCtrlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmplsvpnmonctrlentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMplsVpnMonCtrlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMplsVpnMonCtrlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMplsVpnMonCtrlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMplsVpnMonCtrlEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonCtrlEntry()
    :
    rttmplsvpnmonctrlindex{YType::int32, "rttMplsVpnMonCtrlIndex"},
    rttmplsvpnmonctrlrtttype{YType::enumeration, "rttMplsVpnMonCtrlRttType"},
    rttmplsvpnmonctrlvrfname{YType::str, "rttMplsVpnMonCtrlVrfName"},
    rttmplsvpnmonctrltag{YType::str, "rttMplsVpnMonCtrlTag"},
    rttmplsvpnmonctrlthreshold{YType::int32, "rttMplsVpnMonCtrlThreshold"},
    rttmplsvpnmonctrltimeout{YType::int32, "rttMplsVpnMonCtrlTimeout"},
    rttmplsvpnmonctrlscaninterval{YType::int32, "rttMplsVpnMonCtrlScanInterval"},
    rttmplsvpnmonctrldelscanfactor{YType::int32, "rttMplsVpnMonCtrlDelScanFactor"},
    rttmplsvpnmonctrlexp{YType::int32, "rttMplsVpnMonCtrlEXP"},
    rttmplsvpnmonctrlrequestsize{YType::int32, "rttMplsVpnMonCtrlRequestSize"},
    rttmplsvpnmonctrlverifydata{YType::boolean, "rttMplsVpnMonCtrlVerifyData"},
    rttmplsvpnmonctrlstoragetype{YType::enumeration, "rttMplsVpnMonCtrlStorageType"},
    rttmplsvpnmonctrlprobelist{YType::str, "rttMplsVpnMonCtrlProbeList"},
    rttmplsvpnmonctrlstatus{YType::enumeration, "rttMplsVpnMonCtrlStatus"},
    rttmplsvpnmonctrllpd{YType::boolean, "rttMplsVpnMonCtrlLpd"},
    rttmplsvpnmonctrllpdgrplist{YType::str, "rttMplsVpnMonCtrlLpdGrpList"},
    rttmplsvpnmonctrllpdcomptime{YType::int32, "rttMplsVpnMonCtrlLpdCompTime"},
    rttmplsvpnmontypeinterval{YType::int32, "rttMplsVpnMonTypeInterval"},
    rttmplsvpnmontypenumpackets{YType::int32, "rttMplsVpnMonTypeNumPackets"},
    rttmplsvpnmontypedestport{YType::int32, "rttMplsVpnMonTypeDestPort"},
    rttmplsvpnmontypesecfreqtype{YType::enumeration, "rttMplsVpnMonTypeSecFreqType"},
    rttmplsvpnmontypesecfreqvalue{YType::int32, "rttMplsVpnMonTypeSecFreqValue"},
    rttmplsvpnmontypelspselector{YType::str, "rttMplsVpnMonTypeLspSelector"},
    rttmplsvpnmontypelspreplymode{YType::enumeration, "rttMplsVpnMonTypeLSPReplyMode"},
    rttmplsvpnmontypelspttl{YType::int32, "rttMplsVpnMonTypeLSPTTL"},
    rttmplsvpnmontypelspreplydscp{YType::int32, "rttMplsVpnMonTypeLSPReplyDscp"},
    rttmplsvpnmontypelpdmaxsessions{YType::int32, "rttMplsVpnMonTypeLpdMaxSessions"},
    rttmplsvpnmontypelpdsesstimeout{YType::int32, "rttMplsVpnMonTypeLpdSessTimeout"},
    rttmplsvpnmontypelpdechotimeout{YType::int32, "rttMplsVpnMonTypeLpdEchoTimeout"},
    rttmplsvpnmontypelpdechointerval{YType::int32, "rttMplsVpnMonTypeLpdEchoInterval"},
    rttmplsvpnmontypelpdechonullshim{YType::boolean, "rttMplsVpnMonTypeLpdEchoNullShim"},
    rttmplsvpnmontypelpdscanperiod{YType::int32, "rttMplsVpnMonTypeLpdScanPeriod"},
    rttmplsvpnmontypelpdstathours{YType::int32, "rttMplsVpnMonTypeLpdStatHours"},
    rttmplsvpnmonschedulerttstarttime{YType::uint32, "rttMplsVpnMonScheduleRttStartTime"},
    rttmplsvpnmonscheduleperiod{YType::int32, "rttMplsVpnMonSchedulePeriod"},
    rttmplsvpnmonschedulefrequency{YType::int32, "rttMplsVpnMonScheduleFrequency"},
    rttmplsvpnmonreactconnectionenable{YType::boolean, "rttMplsVpnMonReactConnectionEnable"},
    rttmplsvpnmonreacttimeoutenable{YType::boolean, "rttMplsVpnMonReactTimeoutEnable"},
    rttmplsvpnmonreactthresholdtype{YType::enumeration, "rttMplsVpnMonReactThresholdType"},
    rttmplsvpnmonreactthresholdcount{YType::int32, "rttMplsVpnMonReactThresholdCount"},
    rttmplsvpnmonreactactiontype{YType::enumeration, "rttMplsVpnMonReactActionType"},
    rttmplsvpnmonreactlpdnotifytype{YType::enumeration, "rttMplsVpnMonReactLpdNotifyType"},
    rttmplsvpnmonreactlpdretrycount{YType::int32, "rttMplsVpnMonReactLpdRetryCount"}
{

    yang_name = "rttMplsVpnMonCtrlEntry"; yang_parent_name = "rttMplsVpnMonCtrlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::~RttMplsVpnMonCtrlEntry()
{
}

bool CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmplsvpnmonctrlindex.is_set
	|| rttmplsvpnmonctrlrtttype.is_set
	|| rttmplsvpnmonctrlvrfname.is_set
	|| rttmplsvpnmonctrltag.is_set
	|| rttmplsvpnmonctrlthreshold.is_set
	|| rttmplsvpnmonctrltimeout.is_set
	|| rttmplsvpnmonctrlscaninterval.is_set
	|| rttmplsvpnmonctrldelscanfactor.is_set
	|| rttmplsvpnmonctrlexp.is_set
	|| rttmplsvpnmonctrlrequestsize.is_set
	|| rttmplsvpnmonctrlverifydata.is_set
	|| rttmplsvpnmonctrlstoragetype.is_set
	|| rttmplsvpnmonctrlprobelist.is_set
	|| rttmplsvpnmonctrlstatus.is_set
	|| rttmplsvpnmonctrllpd.is_set
	|| rttmplsvpnmonctrllpdgrplist.is_set
	|| rttmplsvpnmonctrllpdcomptime.is_set
	|| rttmplsvpnmontypeinterval.is_set
	|| rttmplsvpnmontypenumpackets.is_set
	|| rttmplsvpnmontypedestport.is_set
	|| rttmplsvpnmontypesecfreqtype.is_set
	|| rttmplsvpnmontypesecfreqvalue.is_set
	|| rttmplsvpnmontypelspselector.is_set
	|| rttmplsvpnmontypelspreplymode.is_set
	|| rttmplsvpnmontypelspttl.is_set
	|| rttmplsvpnmontypelspreplydscp.is_set
	|| rttmplsvpnmontypelpdmaxsessions.is_set
	|| rttmplsvpnmontypelpdsesstimeout.is_set
	|| rttmplsvpnmontypelpdechotimeout.is_set
	|| rttmplsvpnmontypelpdechointerval.is_set
	|| rttmplsvpnmontypelpdechonullshim.is_set
	|| rttmplsvpnmontypelpdscanperiod.is_set
	|| rttmplsvpnmontypelpdstathours.is_set
	|| rttmplsvpnmonschedulerttstarttime.is_set
	|| rttmplsvpnmonscheduleperiod.is_set
	|| rttmplsvpnmonschedulefrequency.is_set
	|| rttmplsvpnmonreactconnectionenable.is_set
	|| rttmplsvpnmonreacttimeoutenable.is_set
	|| rttmplsvpnmonreactthresholdtype.is_set
	|| rttmplsvpnmonreactthresholdcount.is_set
	|| rttmplsvpnmonreactactiontype.is_set
	|| rttmplsvpnmonreactlpdnotifytype.is_set
	|| rttmplsvpnmonreactlpdretrycount.is_set;
}

bool CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlindex.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlrtttype.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlvrfname.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrltag.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlthreshold.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrltimeout.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlscaninterval.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrldelscanfactor.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlexp.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlrequestsize.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlverifydata.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlstoragetype.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlprobelist.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlstatus.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrllpd.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrllpdgrplist.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrllpdcomptime.yfilter)
	|| ydk::is_set(rttmplsvpnmontypeinterval.yfilter)
	|| ydk::is_set(rttmplsvpnmontypenumpackets.yfilter)
	|| ydk::is_set(rttmplsvpnmontypedestport.yfilter)
	|| ydk::is_set(rttmplsvpnmontypesecfreqtype.yfilter)
	|| ydk::is_set(rttmplsvpnmontypesecfreqvalue.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspselector.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspreplymode.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspttl.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspreplydscp.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdmaxsessions.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdsesstimeout.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdechotimeout.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdechointerval.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdechonullshim.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdscanperiod.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdstathours.yfilter)
	|| ydk::is_set(rttmplsvpnmonschedulerttstarttime.yfilter)
	|| ydk::is_set(rttmplsvpnmonscheduleperiod.yfilter)
	|| ydk::is_set(rttmplsvpnmonschedulefrequency.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactconnectionenable.yfilter)
	|| ydk::is_set(rttmplsvpnmonreacttimeoutenable.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactthresholdtype.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactthresholdcount.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactactiontype.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactlpdnotifytype.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactlpdretrycount.yfilter);
}

std::string CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMplsVpnMonCtrlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMplsVpnMonCtrlEntry";
    ADD_KEY_TOKEN(rttmplsvpnmonctrlindex, "rttMplsVpnMonCtrlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmplsvpnmonctrlindex.is_set || is_set(rttmplsvpnmonctrlindex.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlindex.get_name_leafdata());
    if (rttmplsvpnmonctrlrtttype.is_set || is_set(rttmplsvpnmonctrlrtttype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlrtttype.get_name_leafdata());
    if (rttmplsvpnmonctrlvrfname.is_set || is_set(rttmplsvpnmonctrlvrfname.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlvrfname.get_name_leafdata());
    if (rttmplsvpnmonctrltag.is_set || is_set(rttmplsvpnmonctrltag.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrltag.get_name_leafdata());
    if (rttmplsvpnmonctrlthreshold.is_set || is_set(rttmplsvpnmonctrlthreshold.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlthreshold.get_name_leafdata());
    if (rttmplsvpnmonctrltimeout.is_set || is_set(rttmplsvpnmonctrltimeout.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrltimeout.get_name_leafdata());
    if (rttmplsvpnmonctrlscaninterval.is_set || is_set(rttmplsvpnmonctrlscaninterval.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlscaninterval.get_name_leafdata());
    if (rttmplsvpnmonctrldelscanfactor.is_set || is_set(rttmplsvpnmonctrldelscanfactor.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrldelscanfactor.get_name_leafdata());
    if (rttmplsvpnmonctrlexp.is_set || is_set(rttmplsvpnmonctrlexp.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlexp.get_name_leafdata());
    if (rttmplsvpnmonctrlrequestsize.is_set || is_set(rttmplsvpnmonctrlrequestsize.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlrequestsize.get_name_leafdata());
    if (rttmplsvpnmonctrlverifydata.is_set || is_set(rttmplsvpnmonctrlverifydata.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlverifydata.get_name_leafdata());
    if (rttmplsvpnmonctrlstoragetype.is_set || is_set(rttmplsvpnmonctrlstoragetype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlstoragetype.get_name_leafdata());
    if (rttmplsvpnmonctrlprobelist.is_set || is_set(rttmplsvpnmonctrlprobelist.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlprobelist.get_name_leafdata());
    if (rttmplsvpnmonctrlstatus.is_set || is_set(rttmplsvpnmonctrlstatus.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlstatus.get_name_leafdata());
    if (rttmplsvpnmonctrllpd.is_set || is_set(rttmplsvpnmonctrllpd.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrllpd.get_name_leafdata());
    if (rttmplsvpnmonctrllpdgrplist.is_set || is_set(rttmplsvpnmonctrllpdgrplist.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrllpdgrplist.get_name_leafdata());
    if (rttmplsvpnmonctrllpdcomptime.is_set || is_set(rttmplsvpnmonctrllpdcomptime.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrllpdcomptime.get_name_leafdata());
    if (rttmplsvpnmontypeinterval.is_set || is_set(rttmplsvpnmontypeinterval.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypeinterval.get_name_leafdata());
    if (rttmplsvpnmontypenumpackets.is_set || is_set(rttmplsvpnmontypenumpackets.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypenumpackets.get_name_leafdata());
    if (rttmplsvpnmontypedestport.is_set || is_set(rttmplsvpnmontypedestport.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypedestport.get_name_leafdata());
    if (rttmplsvpnmontypesecfreqtype.is_set || is_set(rttmplsvpnmontypesecfreqtype.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypesecfreqtype.get_name_leafdata());
    if (rttmplsvpnmontypesecfreqvalue.is_set || is_set(rttmplsvpnmontypesecfreqvalue.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypesecfreqvalue.get_name_leafdata());
    if (rttmplsvpnmontypelspselector.is_set || is_set(rttmplsvpnmontypelspselector.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspselector.get_name_leafdata());
    if (rttmplsvpnmontypelspreplymode.is_set || is_set(rttmplsvpnmontypelspreplymode.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspreplymode.get_name_leafdata());
    if (rttmplsvpnmontypelspttl.is_set || is_set(rttmplsvpnmontypelspttl.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspttl.get_name_leafdata());
    if (rttmplsvpnmontypelspreplydscp.is_set || is_set(rttmplsvpnmontypelspreplydscp.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspreplydscp.get_name_leafdata());
    if (rttmplsvpnmontypelpdmaxsessions.is_set || is_set(rttmplsvpnmontypelpdmaxsessions.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdmaxsessions.get_name_leafdata());
    if (rttmplsvpnmontypelpdsesstimeout.is_set || is_set(rttmplsvpnmontypelpdsesstimeout.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdsesstimeout.get_name_leafdata());
    if (rttmplsvpnmontypelpdechotimeout.is_set || is_set(rttmplsvpnmontypelpdechotimeout.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdechotimeout.get_name_leafdata());
    if (rttmplsvpnmontypelpdechointerval.is_set || is_set(rttmplsvpnmontypelpdechointerval.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdechointerval.get_name_leafdata());
    if (rttmplsvpnmontypelpdechonullshim.is_set || is_set(rttmplsvpnmontypelpdechonullshim.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdechonullshim.get_name_leafdata());
    if (rttmplsvpnmontypelpdscanperiod.is_set || is_set(rttmplsvpnmontypelpdscanperiod.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdscanperiod.get_name_leafdata());
    if (rttmplsvpnmontypelpdstathours.is_set || is_set(rttmplsvpnmontypelpdstathours.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdstathours.get_name_leafdata());
    if (rttmplsvpnmonschedulerttstarttime.is_set || is_set(rttmplsvpnmonschedulerttstarttime.yfilter)) leaf_name_data.push_back(rttmplsvpnmonschedulerttstarttime.get_name_leafdata());
    if (rttmplsvpnmonscheduleperiod.is_set || is_set(rttmplsvpnmonscheduleperiod.yfilter)) leaf_name_data.push_back(rttmplsvpnmonscheduleperiod.get_name_leafdata());
    if (rttmplsvpnmonschedulefrequency.is_set || is_set(rttmplsvpnmonschedulefrequency.yfilter)) leaf_name_data.push_back(rttmplsvpnmonschedulefrequency.get_name_leafdata());
    if (rttmplsvpnmonreactconnectionenable.is_set || is_set(rttmplsvpnmonreactconnectionenable.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactconnectionenable.get_name_leafdata());
    if (rttmplsvpnmonreacttimeoutenable.is_set || is_set(rttmplsvpnmonreacttimeoutenable.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreacttimeoutenable.get_name_leafdata());
    if (rttmplsvpnmonreactthresholdtype.is_set || is_set(rttmplsvpnmonreactthresholdtype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactthresholdtype.get_name_leafdata());
    if (rttmplsvpnmonreactthresholdcount.is_set || is_set(rttmplsvpnmonreactthresholdcount.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactthresholdcount.get_name_leafdata());
    if (rttmplsvpnmonreactactiontype.is_set || is_set(rttmplsvpnmonreactactiontype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactactiontype.get_name_leafdata());
    if (rttmplsvpnmonreactlpdnotifytype.is_set || is_set(rttmplsvpnmonreactlpdnotifytype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactlpdnotifytype.get_name_leafdata());
    if (rttmplsvpnmonreactlpdretrycount.is_set || is_set(rttmplsvpnmonreactlpdretrycount.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactlpdretrycount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMplsVpnMonCtrlIndex")
    {
        rttmplsvpnmonctrlindex = value;
        rttmplsvpnmonctrlindex.value_namespace = name_space;
        rttmplsvpnmonctrlindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlRttType")
    {
        rttmplsvpnmonctrlrtttype = value;
        rttmplsvpnmonctrlrtttype.value_namespace = name_space;
        rttmplsvpnmonctrlrtttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlVrfName")
    {
        rttmplsvpnmonctrlvrfname = value;
        rttmplsvpnmonctrlvrfname.value_namespace = name_space;
        rttmplsvpnmonctrlvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlTag")
    {
        rttmplsvpnmonctrltag = value;
        rttmplsvpnmonctrltag.value_namespace = name_space;
        rttmplsvpnmonctrltag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlThreshold")
    {
        rttmplsvpnmonctrlthreshold = value;
        rttmplsvpnmonctrlthreshold.value_namespace = name_space;
        rttmplsvpnmonctrlthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlTimeout")
    {
        rttmplsvpnmonctrltimeout = value;
        rttmplsvpnmonctrltimeout.value_namespace = name_space;
        rttmplsvpnmonctrltimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlScanInterval")
    {
        rttmplsvpnmonctrlscaninterval = value;
        rttmplsvpnmonctrlscaninterval.value_namespace = name_space;
        rttmplsvpnmonctrlscaninterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlDelScanFactor")
    {
        rttmplsvpnmonctrldelscanfactor = value;
        rttmplsvpnmonctrldelscanfactor.value_namespace = name_space;
        rttmplsvpnmonctrldelscanfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlEXP")
    {
        rttmplsvpnmonctrlexp = value;
        rttmplsvpnmonctrlexp.value_namespace = name_space;
        rttmplsvpnmonctrlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlRequestSize")
    {
        rttmplsvpnmonctrlrequestsize = value;
        rttmplsvpnmonctrlrequestsize.value_namespace = name_space;
        rttmplsvpnmonctrlrequestsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlVerifyData")
    {
        rttmplsvpnmonctrlverifydata = value;
        rttmplsvpnmonctrlverifydata.value_namespace = name_space;
        rttmplsvpnmonctrlverifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlStorageType")
    {
        rttmplsvpnmonctrlstoragetype = value;
        rttmplsvpnmonctrlstoragetype.value_namespace = name_space;
        rttmplsvpnmonctrlstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlProbeList")
    {
        rttmplsvpnmonctrlprobelist = value;
        rttmplsvpnmonctrlprobelist.value_namespace = name_space;
        rttmplsvpnmonctrlprobelist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlStatus")
    {
        rttmplsvpnmonctrlstatus = value;
        rttmplsvpnmonctrlstatus.value_namespace = name_space;
        rttmplsvpnmonctrlstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlLpd")
    {
        rttmplsvpnmonctrllpd = value;
        rttmplsvpnmonctrllpd.value_namespace = name_space;
        rttmplsvpnmonctrllpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdGrpList")
    {
        rttmplsvpnmonctrllpdgrplist = value;
        rttmplsvpnmonctrllpdgrplist.value_namespace = name_space;
        rttmplsvpnmonctrllpdgrplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdCompTime")
    {
        rttmplsvpnmonctrllpdcomptime = value;
        rttmplsvpnmonctrllpdcomptime.value_namespace = name_space;
        rttmplsvpnmonctrllpdcomptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeInterval")
    {
        rttmplsvpnmontypeinterval = value;
        rttmplsvpnmontypeinterval.value_namespace = name_space;
        rttmplsvpnmontypeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeNumPackets")
    {
        rttmplsvpnmontypenumpackets = value;
        rttmplsvpnmontypenumpackets.value_namespace = name_space;
        rttmplsvpnmontypenumpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeDestPort")
    {
        rttmplsvpnmontypedestport = value;
        rttmplsvpnmontypedestport.value_namespace = name_space;
        rttmplsvpnmontypedestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeSecFreqType")
    {
        rttmplsvpnmontypesecfreqtype = value;
        rttmplsvpnmontypesecfreqtype.value_namespace = name_space;
        rttmplsvpnmontypesecfreqtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeSecFreqValue")
    {
        rttmplsvpnmontypesecfreqvalue = value;
        rttmplsvpnmontypesecfreqvalue.value_namespace = name_space;
        rttmplsvpnmontypesecfreqvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLspSelector")
    {
        rttmplsvpnmontypelspselector = value;
        rttmplsvpnmontypelspselector.value_namespace = name_space;
        rttmplsvpnmontypelspselector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyMode")
    {
        rttmplsvpnmontypelspreplymode = value;
        rttmplsvpnmontypelspreplymode.value_namespace = name_space;
        rttmplsvpnmontypelspreplymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLSPTTL")
    {
        rttmplsvpnmontypelspttl = value;
        rttmplsvpnmontypelspttl.value_namespace = name_space;
        rttmplsvpnmontypelspttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyDscp")
    {
        rttmplsvpnmontypelspreplydscp = value;
        rttmplsvpnmontypelspreplydscp.value_namespace = name_space;
        rttmplsvpnmontypelspreplydscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdMaxSessions")
    {
        rttmplsvpnmontypelpdmaxsessions = value;
        rttmplsvpnmontypelpdmaxsessions.value_namespace = name_space;
        rttmplsvpnmontypelpdmaxsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdSessTimeout")
    {
        rttmplsvpnmontypelpdsesstimeout = value;
        rttmplsvpnmontypelpdsesstimeout.value_namespace = name_space;
        rttmplsvpnmontypelpdsesstimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoTimeout")
    {
        rttmplsvpnmontypelpdechotimeout = value;
        rttmplsvpnmontypelpdechotimeout.value_namespace = name_space;
        rttmplsvpnmontypelpdechotimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoInterval")
    {
        rttmplsvpnmontypelpdechointerval = value;
        rttmplsvpnmontypelpdechointerval.value_namespace = name_space;
        rttmplsvpnmontypelpdechointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoNullShim")
    {
        rttmplsvpnmontypelpdechonullshim = value;
        rttmplsvpnmontypelpdechonullshim.value_namespace = name_space;
        rttmplsvpnmontypelpdechonullshim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdScanPeriod")
    {
        rttmplsvpnmontypelpdscanperiod = value;
        rttmplsvpnmontypelpdscanperiod.value_namespace = name_space;
        rttmplsvpnmontypelpdscanperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdStatHours")
    {
        rttmplsvpnmontypelpdstathours = value;
        rttmplsvpnmontypelpdstathours.value_namespace = name_space;
        rttmplsvpnmontypelpdstathours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonScheduleRttStartTime")
    {
        rttmplsvpnmonschedulerttstarttime = value;
        rttmplsvpnmonschedulerttstarttime.value_namespace = name_space;
        rttmplsvpnmonschedulerttstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonSchedulePeriod")
    {
        rttmplsvpnmonscheduleperiod = value;
        rttmplsvpnmonscheduleperiod.value_namespace = name_space;
        rttmplsvpnmonscheduleperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonScheduleFrequency")
    {
        rttmplsvpnmonschedulefrequency = value;
        rttmplsvpnmonschedulefrequency.value_namespace = name_space;
        rttmplsvpnmonschedulefrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactConnectionEnable")
    {
        rttmplsvpnmonreactconnectionenable = value;
        rttmplsvpnmonreactconnectionenable.value_namespace = name_space;
        rttmplsvpnmonreactconnectionenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactTimeoutEnable")
    {
        rttmplsvpnmonreacttimeoutenable = value;
        rttmplsvpnmonreacttimeoutenable.value_namespace = name_space;
        rttmplsvpnmonreacttimeoutenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactThresholdType")
    {
        rttmplsvpnmonreactthresholdtype = value;
        rttmplsvpnmonreactthresholdtype.value_namespace = name_space;
        rttmplsvpnmonreactthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactThresholdCount")
    {
        rttmplsvpnmonreactthresholdcount = value;
        rttmplsvpnmonreactthresholdcount.value_namespace = name_space;
        rttmplsvpnmonreactthresholdcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactActionType")
    {
        rttmplsvpnmonreactactiontype = value;
        rttmplsvpnmonreactactiontype.value_namespace = name_space;
        rttmplsvpnmonreactactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactLpdNotifyType")
    {
        rttmplsvpnmonreactlpdnotifytype = value;
        rttmplsvpnmonreactlpdnotifytype.value_namespace = name_space;
        rttmplsvpnmonreactlpdnotifytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactLpdRetryCount")
    {
        rttmplsvpnmonreactlpdretrycount = value;
        rttmplsvpnmonreactlpdretrycount.value_namespace = name_space;
        rttmplsvpnmonreactlpdretrycount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMplsVpnMonCtrlIndex")
    {
        rttmplsvpnmonctrlindex.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlRttType")
    {
        rttmplsvpnmonctrlrtttype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlVrfName")
    {
        rttmplsvpnmonctrlvrfname.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlTag")
    {
        rttmplsvpnmonctrltag.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlThreshold")
    {
        rttmplsvpnmonctrlthreshold.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlTimeout")
    {
        rttmplsvpnmonctrltimeout.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlScanInterval")
    {
        rttmplsvpnmonctrlscaninterval.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlDelScanFactor")
    {
        rttmplsvpnmonctrldelscanfactor.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlEXP")
    {
        rttmplsvpnmonctrlexp.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlRequestSize")
    {
        rttmplsvpnmonctrlrequestsize.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlVerifyData")
    {
        rttmplsvpnmonctrlverifydata.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlStorageType")
    {
        rttmplsvpnmonctrlstoragetype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlProbeList")
    {
        rttmplsvpnmonctrlprobelist.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlStatus")
    {
        rttmplsvpnmonctrlstatus.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlLpd")
    {
        rttmplsvpnmonctrllpd.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdGrpList")
    {
        rttmplsvpnmonctrllpdgrplist.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdCompTime")
    {
        rttmplsvpnmonctrllpdcomptime.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeInterval")
    {
        rttmplsvpnmontypeinterval.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeNumPackets")
    {
        rttmplsvpnmontypenumpackets.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeDestPort")
    {
        rttmplsvpnmontypedestport.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeSecFreqType")
    {
        rttmplsvpnmontypesecfreqtype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeSecFreqValue")
    {
        rttmplsvpnmontypesecfreqvalue.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLspSelector")
    {
        rttmplsvpnmontypelspselector.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyMode")
    {
        rttmplsvpnmontypelspreplymode.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLSPTTL")
    {
        rttmplsvpnmontypelspttl.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyDscp")
    {
        rttmplsvpnmontypelspreplydscp.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdMaxSessions")
    {
        rttmplsvpnmontypelpdmaxsessions.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdSessTimeout")
    {
        rttmplsvpnmontypelpdsesstimeout.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoTimeout")
    {
        rttmplsvpnmontypelpdechotimeout.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoInterval")
    {
        rttmplsvpnmontypelpdechointerval.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoNullShim")
    {
        rttmplsvpnmontypelpdechonullshim.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdScanPeriod")
    {
        rttmplsvpnmontypelpdscanperiod.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdStatHours")
    {
        rttmplsvpnmontypelpdstathours.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonScheduleRttStartTime")
    {
        rttmplsvpnmonschedulerttstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonSchedulePeriod")
    {
        rttmplsvpnmonscheduleperiod.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonScheduleFrequency")
    {
        rttmplsvpnmonschedulefrequency.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactConnectionEnable")
    {
        rttmplsvpnmonreactconnectionenable.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactTimeoutEnable")
    {
        rttmplsvpnmonreacttimeoutenable.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactThresholdType")
    {
        rttmplsvpnmonreactthresholdtype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactThresholdCount")
    {
        rttmplsvpnmonreactthresholdcount.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactActionType")
    {
        rttmplsvpnmonreactactiontype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactLpdNotifyType")
    {
        rttmplsvpnmonreactlpdnotifytype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactLpdRetryCount")
    {
        rttmplsvpnmonreactlpdretrycount.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMplsVpnMonCtrlIndex" || name == "rttMplsVpnMonCtrlRttType" || name == "rttMplsVpnMonCtrlVrfName" || name == "rttMplsVpnMonCtrlTag" || name == "rttMplsVpnMonCtrlThreshold" || name == "rttMplsVpnMonCtrlTimeout" || name == "rttMplsVpnMonCtrlScanInterval" || name == "rttMplsVpnMonCtrlDelScanFactor" || name == "rttMplsVpnMonCtrlEXP" || name == "rttMplsVpnMonCtrlRequestSize" || name == "rttMplsVpnMonCtrlVerifyData" || name == "rttMplsVpnMonCtrlStorageType" || name == "rttMplsVpnMonCtrlProbeList" || name == "rttMplsVpnMonCtrlStatus" || name == "rttMplsVpnMonCtrlLpd" || name == "rttMplsVpnMonCtrlLpdGrpList" || name == "rttMplsVpnMonCtrlLpdCompTime" || name == "rttMplsVpnMonTypeInterval" || name == "rttMplsVpnMonTypeNumPackets" || name == "rttMplsVpnMonTypeDestPort" || name == "rttMplsVpnMonTypeSecFreqType" || name == "rttMplsVpnMonTypeSecFreqValue" || name == "rttMplsVpnMonTypeLspSelector" || name == "rttMplsVpnMonTypeLSPReplyMode" || name == "rttMplsVpnMonTypeLSPTTL" || name == "rttMplsVpnMonTypeLSPReplyDscp" || name == "rttMplsVpnMonTypeLpdMaxSessions" || name == "rttMplsVpnMonTypeLpdSessTimeout" || name == "rttMplsVpnMonTypeLpdEchoTimeout" || name == "rttMplsVpnMonTypeLpdEchoInterval" || name == "rttMplsVpnMonTypeLpdEchoNullShim" || name == "rttMplsVpnMonTypeLpdScanPeriod" || name == "rttMplsVpnMonTypeLpdStatHours" || name == "rttMplsVpnMonScheduleRttStartTime" || name == "rttMplsVpnMonSchedulePeriod" || name == "rttMplsVpnMonScheduleFrequency" || name == "rttMplsVpnMonReactConnectionEnable" || name == "rttMplsVpnMonReactTimeoutEnable" || name == "rttMplsVpnMonReactThresholdType" || name == "rttMplsVpnMonReactThresholdCount" || name == "rttMplsVpnMonReactActionType" || name == "rttMplsVpnMonReactLpdNotifyType" || name == "rttMplsVpnMonReactLpdRetryCount")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonReactTable::RttMonReactTable()
    :
    rttmonreactentry(this, {"rttmonctrladminindex", "rttmonreactconfigindex"})
{

    yang_name = "rttMonReactTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonReactTable::~RttMonReactTable()
{
}

bool CISCORTTMONMIB::RttMonReactTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonreactentry.len(); index++)
    {
        if(rttmonreactentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonReactTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonreactentry.len(); index++)
    {
        if(rttmonreactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonReactTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonReactTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonReactTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonReactTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonReactEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry>();
        c->parent = this;
        rttmonreactentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonReactTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonreactentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonReactTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonReactTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonReactTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonReactEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonreactconfigindex{YType::int32, "rttMonReactConfigIndex"},
    rttmonreactvar{YType::enumeration, "rttMonReactVar"},
    rttmonreactthresholdtype{YType::enumeration, "rttMonReactThresholdType"},
    rttmonreactactiontype{YType::enumeration, "rttMonReactActionType"},
    rttmonreactthresholdrising{YType::int32, "rttMonReactThresholdRising"},
    rttmonreactthresholdfalling{YType::int32, "rttMonReactThresholdFalling"},
    rttmonreactthresholdcountx{YType::int32, "rttMonReactThresholdCountX"},
    rttmonreactthresholdcounty{YType::int32, "rttMonReactThresholdCountY"},
    rttmonreactvalue{YType::int32, "rttMonReactValue"},
    rttmonreactoccurred{YType::boolean, "rttMonReactOccurred"},
    rttmonreactstatus{YType::enumeration, "rttMonReactStatus"}
{

    yang_name = "rttMonReactEntry"; yang_parent_name = "rttMonReactTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::~RttMonReactEntry()
{
}

bool CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonreactconfigindex.is_set
	|| rttmonreactvar.is_set
	|| rttmonreactthresholdtype.is_set
	|| rttmonreactactiontype.is_set
	|| rttmonreactthresholdrising.is_set
	|| rttmonreactthresholdfalling.is_set
	|| rttmonreactthresholdcountx.is_set
	|| rttmonreactthresholdcounty.is_set
	|| rttmonreactvalue.is_set
	|| rttmonreactoccurred.is_set
	|| rttmonreactstatus.is_set;
}

bool CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonreactconfigindex.yfilter)
	|| ydk::is_set(rttmonreactvar.yfilter)
	|| ydk::is_set(rttmonreactthresholdtype.yfilter)
	|| ydk::is_set(rttmonreactactiontype.yfilter)
	|| ydk::is_set(rttmonreactthresholdrising.yfilter)
	|| ydk::is_set(rttmonreactthresholdfalling.yfilter)
	|| ydk::is_set(rttmonreactthresholdcountx.yfilter)
	|| ydk::is_set(rttmonreactthresholdcounty.yfilter)
	|| ydk::is_set(rttmonreactvalue.yfilter)
	|| ydk::is_set(rttmonreactoccurred.yfilter)
	|| ydk::is_set(rttmonreactstatus.yfilter);
}

std::string CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonReactTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonreactconfigindex, "rttMonReactConfigIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonreactconfigindex.is_set || is_set(rttmonreactconfigindex.yfilter)) leaf_name_data.push_back(rttmonreactconfigindex.get_name_leafdata());
    if (rttmonreactvar.is_set || is_set(rttmonreactvar.yfilter)) leaf_name_data.push_back(rttmonreactvar.get_name_leafdata());
    if (rttmonreactthresholdtype.is_set || is_set(rttmonreactthresholdtype.yfilter)) leaf_name_data.push_back(rttmonreactthresholdtype.get_name_leafdata());
    if (rttmonreactactiontype.is_set || is_set(rttmonreactactiontype.yfilter)) leaf_name_data.push_back(rttmonreactactiontype.get_name_leafdata());
    if (rttmonreactthresholdrising.is_set || is_set(rttmonreactthresholdrising.yfilter)) leaf_name_data.push_back(rttmonreactthresholdrising.get_name_leafdata());
    if (rttmonreactthresholdfalling.is_set || is_set(rttmonreactthresholdfalling.yfilter)) leaf_name_data.push_back(rttmonreactthresholdfalling.get_name_leafdata());
    if (rttmonreactthresholdcountx.is_set || is_set(rttmonreactthresholdcountx.yfilter)) leaf_name_data.push_back(rttmonreactthresholdcountx.get_name_leafdata());
    if (rttmonreactthresholdcounty.is_set || is_set(rttmonreactthresholdcounty.yfilter)) leaf_name_data.push_back(rttmonreactthresholdcounty.get_name_leafdata());
    if (rttmonreactvalue.is_set || is_set(rttmonreactvalue.yfilter)) leaf_name_data.push_back(rttmonreactvalue.get_name_leafdata());
    if (rttmonreactoccurred.is_set || is_set(rttmonreactoccurred.yfilter)) leaf_name_data.push_back(rttmonreactoccurred.get_name_leafdata());
    if (rttmonreactstatus.is_set || is_set(rttmonreactstatus.yfilter)) leaf_name_data.push_back(rttmonreactstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactConfigIndex")
    {
        rttmonreactconfigindex = value;
        rttmonreactconfigindex.value_namespace = name_space;
        rttmonreactconfigindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactVar")
    {
        rttmonreactvar = value;
        rttmonreactvar.value_namespace = name_space;
        rttmonreactvar.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactThresholdType")
    {
        rttmonreactthresholdtype = value;
        rttmonreactthresholdtype.value_namespace = name_space;
        rttmonreactthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactActionType")
    {
        rttmonreactactiontype = value;
        rttmonreactactiontype.value_namespace = name_space;
        rttmonreactactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactThresholdRising")
    {
        rttmonreactthresholdrising = value;
        rttmonreactthresholdrising.value_namespace = name_space;
        rttmonreactthresholdrising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactThresholdFalling")
    {
        rttmonreactthresholdfalling = value;
        rttmonreactthresholdfalling.value_namespace = name_space;
        rttmonreactthresholdfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactThresholdCountX")
    {
        rttmonreactthresholdcountx = value;
        rttmonreactthresholdcountx.value_namespace = name_space;
        rttmonreactthresholdcountx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactThresholdCountY")
    {
        rttmonreactthresholdcounty = value;
        rttmonreactthresholdcounty.value_namespace = name_space;
        rttmonreactthresholdcounty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactValue")
    {
        rttmonreactvalue = value;
        rttmonreactvalue.value_namespace = name_space;
        rttmonreactvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactOccurred")
    {
        rttmonreactoccurred = value;
        rttmonreactoccurred.value_namespace = name_space;
        rttmonreactoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactStatus")
    {
        rttmonreactstatus = value;
        rttmonreactstatus.value_namespace = name_space;
        rttmonreactstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonReactConfigIndex")
    {
        rttmonreactconfigindex.yfilter = yfilter;
    }
    if(value_path == "rttMonReactVar")
    {
        rttmonreactvar.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdType")
    {
        rttmonreactthresholdtype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactActionType")
    {
        rttmonreactactiontype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdRising")
    {
        rttmonreactthresholdrising.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdFalling")
    {
        rttmonreactthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdCountX")
    {
        rttmonreactthresholdcountx.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdCountY")
    {
        rttmonreactthresholdcounty.yfilter = yfilter;
    }
    if(value_path == "rttMonReactValue")
    {
        rttmonreactvalue.yfilter = yfilter;
    }
    if(value_path == "rttMonReactOccurred")
    {
        rttmonreactoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonReactStatus")
    {
        rttmonreactstatus.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonReactConfigIndex" || name == "rttMonReactVar" || name == "rttMonReactThresholdType" || name == "rttMonReactActionType" || name == "rttMonReactThresholdRising" || name == "rttMonReactThresholdFalling" || name == "rttMonReactThresholdCountX" || name == "rttMonReactThresholdCountY" || name == "rttMonReactValue" || name == "rttMonReactOccurred" || name == "rttMonReactStatus")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperTable()
    :
    rttmongeneratedoperentry(this, {"rttmonctrladminindex", "rttmongeneratedoperrespipaddrtype", "rttmongeneratedoperrespipaddr"})
{

    yang_name = "rttMonGeneratedOperTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonGeneratedOperTable::~RttMonGeneratedOperTable()
{
}

bool CISCORTTMONMIB::RttMonGeneratedOperTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmongeneratedoperentry.len(); index++)
    {
        if(rttmongeneratedoperentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonGeneratedOperTable::has_operation() const
{
    for (std::size_t index=0; index<rttmongeneratedoperentry.len(); index++)
    {
        if(rttmongeneratedoperentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonGeneratedOperTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonGeneratedOperTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGeneratedOperTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonGeneratedOperTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonGeneratedOperTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonGeneratedOperEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry>();
        c->parent = this;
        rttmongeneratedoperentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonGeneratedOperTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmongeneratedoperentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonGeneratedOperTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonGeneratedOperTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonGeneratedOperTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonGeneratedOperEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::RttMonGeneratedOperEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmongeneratedoperrespipaddrtype{YType::enumeration, "rttMonGeneratedOperRespIpAddrType"},
    rttmongeneratedoperrespipaddr{YType::str, "rttMonGeneratedOperRespIpAddr"},
    rttmongeneratedoperctrladminindex{YType::uint32, "rttMonGeneratedOperCtrlAdminIndex"}
{

    yang_name = "rttMonGeneratedOperEntry"; yang_parent_name = "rttMonGeneratedOperTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::~RttMonGeneratedOperEntry()
{
}

bool CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmongeneratedoperrespipaddrtype.is_set
	|| rttmongeneratedoperrespipaddr.is_set
	|| rttmongeneratedoperctrladminindex.is_set;
}

bool CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmongeneratedoperrespipaddrtype.yfilter)
	|| ydk::is_set(rttmongeneratedoperrespipaddr.yfilter)
	|| ydk::is_set(rttmongeneratedoperctrladminindex.yfilter);
}

std::string CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonGeneratedOperTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGeneratedOperEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmongeneratedoperrespipaddrtype, "rttMonGeneratedOperRespIpAddrType");
    ADD_KEY_TOKEN(rttmongeneratedoperrespipaddr, "rttMonGeneratedOperRespIpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmongeneratedoperrespipaddrtype.is_set || is_set(rttmongeneratedoperrespipaddrtype.yfilter)) leaf_name_data.push_back(rttmongeneratedoperrespipaddrtype.get_name_leafdata());
    if (rttmongeneratedoperrespipaddr.is_set || is_set(rttmongeneratedoperrespipaddr.yfilter)) leaf_name_data.push_back(rttmongeneratedoperrespipaddr.get_name_leafdata());
    if (rttmongeneratedoperctrladminindex.is_set || is_set(rttmongeneratedoperctrladminindex.yfilter)) leaf_name_data.push_back(rttmongeneratedoperctrladminindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGeneratedOperRespIpAddrType")
    {
        rttmongeneratedoperrespipaddrtype = value;
        rttmongeneratedoperrespipaddrtype.value_namespace = name_space;
        rttmongeneratedoperrespipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGeneratedOperRespIpAddr")
    {
        rttmongeneratedoperrespipaddr = value;
        rttmongeneratedoperrespipaddr.value_namespace = name_space;
        rttmongeneratedoperrespipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGeneratedOperCtrlAdminIndex")
    {
        rttmongeneratedoperctrladminindex = value;
        rttmongeneratedoperctrladminindex.value_namespace = name_space;
        rttmongeneratedoperctrladminindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonGeneratedOperRespIpAddrType")
    {
        rttmongeneratedoperrespipaddrtype.yfilter = yfilter;
    }
    if(value_path == "rttMonGeneratedOperRespIpAddr")
    {
        rttmongeneratedoperrespipaddr.yfilter = yfilter;
    }
    if(value_path == "rttMonGeneratedOperCtrlAdminIndex")
    {
        rttmongeneratedoperctrladminindex.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonGeneratedOperRespIpAddrType" || name == "rttMonGeneratedOperRespIpAddr" || name == "rttMonGeneratedOperCtrlAdminIndex")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureTable()
    :
    rttmonstatscaptureentry(this, {"rttmonctrladminindex", "rttmonstatscapturestarttimeindex", "rttmonstatscapturepathindex", "rttmonstatscapturehopindex", "rttmonstatscapturedistindex"})
{

    yang_name = "rttMonStatsCaptureTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonStatsCaptureTable::~RttMonStatsCaptureTable()
{
}

bool CISCORTTMONMIB::RttMonStatsCaptureTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonstatscaptureentry.len(); index++)
    {
        if(rttmonstatscaptureentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonStatsCaptureTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonstatscaptureentry.len(); index++)
    {
        if(rttmonstatscaptureentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonStatsCaptureTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonStatsCaptureTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCaptureTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonStatsCaptureTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonStatsCaptureTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonStatsCaptureEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry>();
        c->parent = this;
        rttmonstatscaptureentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonStatsCaptureTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonstatscaptureentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonStatsCaptureTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonStatsCaptureTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonStatsCaptureTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonStatsCaptureEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::RttMonStatsCaptureEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonstatscapturestarttimeindex{YType::uint32, "rttMonStatsCaptureStartTimeIndex"},
    rttmonstatscapturepathindex{YType::int32, "rttMonStatsCapturePathIndex"},
    rttmonstatscapturehopindex{YType::int32, "rttMonStatsCaptureHopIndex"},
    rttmonstatscapturedistindex{YType::int32, "rttMonStatsCaptureDistIndex"},
    rttmonstatscapturecompletions{YType::int32, "rttMonStatsCaptureCompletions"},
    rttmonstatscaptureoverthresholds{YType::int32, "rttMonStatsCaptureOverThresholds"},
    rttmonstatscapturesumcompletiontime{YType::uint32, "rttMonStatsCaptureSumCompletionTime"},
    rttmonstatscapturesumcompletiontime2low{YType::uint32, "rttMonStatsCaptureSumCompletionTime2Low"},
    rttmonstatscapturesumcompletiontime2high{YType::uint32, "rttMonStatsCaptureSumCompletionTime2High"},
    rttmonstatscapturecompletiontimemax{YType::uint32, "rttMonStatsCaptureCompletionTimeMax"},
    rttmonstatscapturecompletiontimemin{YType::uint32, "rttMonStatsCaptureCompletionTimeMin"}
{

    yang_name = "rttMonStatsCaptureEntry"; yang_parent_name = "rttMonStatsCaptureTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::~RttMonStatsCaptureEntry()
{
}

bool CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonstatscapturestarttimeindex.is_set
	|| rttmonstatscapturepathindex.is_set
	|| rttmonstatscapturehopindex.is_set
	|| rttmonstatscapturedistindex.is_set
	|| rttmonstatscapturecompletions.is_set
	|| rttmonstatscaptureoverthresholds.is_set
	|| rttmonstatscapturesumcompletiontime.is_set
	|| rttmonstatscapturesumcompletiontime2low.is_set
	|| rttmonstatscapturesumcompletiontime2high.is_set
	|| rttmonstatscapturecompletiontimemax.is_set
	|| rttmonstatscapturecompletiontimemin.is_set;
}

bool CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonstatscapturestarttimeindex.yfilter)
	|| ydk::is_set(rttmonstatscapturepathindex.yfilter)
	|| ydk::is_set(rttmonstatscapturehopindex.yfilter)
	|| ydk::is_set(rttmonstatscapturedistindex.yfilter)
	|| ydk::is_set(rttmonstatscapturecompletions.yfilter)
	|| ydk::is_set(rttmonstatscaptureoverthresholds.yfilter)
	|| ydk::is_set(rttmonstatscapturesumcompletiontime.yfilter)
	|| ydk::is_set(rttmonstatscapturesumcompletiontime2low.yfilter)
	|| ydk::is_set(rttmonstatscapturesumcompletiontime2high.yfilter)
	|| ydk::is_set(rttmonstatscapturecompletiontimemax.yfilter)
	|| ydk::is_set(rttmonstatscapturecompletiontimemin.yfilter);
}

std::string CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonStatsCaptureTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCaptureEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonstatscapturestarttimeindex, "rttMonStatsCaptureStartTimeIndex");
    ADD_KEY_TOKEN(rttmonstatscapturepathindex, "rttMonStatsCapturePathIndex");
    ADD_KEY_TOKEN(rttmonstatscapturehopindex, "rttMonStatsCaptureHopIndex");
    ADD_KEY_TOKEN(rttmonstatscapturedistindex, "rttMonStatsCaptureDistIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonstatscapturestarttimeindex.is_set || is_set(rttmonstatscapturestarttimeindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturestarttimeindex.get_name_leafdata());
    if (rttmonstatscapturepathindex.is_set || is_set(rttmonstatscapturepathindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturepathindex.get_name_leafdata());
    if (rttmonstatscapturehopindex.is_set || is_set(rttmonstatscapturehopindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturehopindex.get_name_leafdata());
    if (rttmonstatscapturedistindex.is_set || is_set(rttmonstatscapturedistindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturedistindex.get_name_leafdata());
    if (rttmonstatscapturecompletions.is_set || is_set(rttmonstatscapturecompletions.yfilter)) leaf_name_data.push_back(rttmonstatscapturecompletions.get_name_leafdata());
    if (rttmonstatscaptureoverthresholds.is_set || is_set(rttmonstatscaptureoverthresholds.yfilter)) leaf_name_data.push_back(rttmonstatscaptureoverthresholds.get_name_leafdata());
    if (rttmonstatscapturesumcompletiontime.is_set || is_set(rttmonstatscapturesumcompletiontime.yfilter)) leaf_name_data.push_back(rttmonstatscapturesumcompletiontime.get_name_leafdata());
    if (rttmonstatscapturesumcompletiontime2low.is_set || is_set(rttmonstatscapturesumcompletiontime2low.yfilter)) leaf_name_data.push_back(rttmonstatscapturesumcompletiontime2low.get_name_leafdata());
    if (rttmonstatscapturesumcompletiontime2high.is_set || is_set(rttmonstatscapturesumcompletiontime2high.yfilter)) leaf_name_data.push_back(rttmonstatscapturesumcompletiontime2high.get_name_leafdata());
    if (rttmonstatscapturecompletiontimemax.is_set || is_set(rttmonstatscapturecompletiontimemax.yfilter)) leaf_name_data.push_back(rttmonstatscapturecompletiontimemax.get_name_leafdata());
    if (rttmonstatscapturecompletiontimemin.is_set || is_set(rttmonstatscapturecompletiontimemin.yfilter)) leaf_name_data.push_back(rttmonstatscapturecompletiontimemin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureStartTimeIndex")
    {
        rttmonstatscapturestarttimeindex = value;
        rttmonstatscapturestarttimeindex.value_namespace = name_space;
        rttmonstatscapturestarttimeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCapturePathIndex")
    {
        rttmonstatscapturepathindex = value;
        rttmonstatscapturepathindex.value_namespace = name_space;
        rttmonstatscapturepathindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureHopIndex")
    {
        rttmonstatscapturehopindex = value;
        rttmonstatscapturehopindex.value_namespace = name_space;
        rttmonstatscapturehopindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureDistIndex")
    {
        rttmonstatscapturedistindex = value;
        rttmonstatscapturedistindex.value_namespace = name_space;
        rttmonstatscapturedistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureCompletions")
    {
        rttmonstatscapturecompletions = value;
        rttmonstatscapturecompletions.value_namespace = name_space;
        rttmonstatscapturecompletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureOverThresholds")
    {
        rttmonstatscaptureoverthresholds = value;
        rttmonstatscaptureoverthresholds.value_namespace = name_space;
        rttmonstatscaptureoverthresholds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime")
    {
        rttmonstatscapturesumcompletiontime = value;
        rttmonstatscapturesumcompletiontime.value_namespace = name_space;
        rttmonstatscapturesumcompletiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime2Low")
    {
        rttmonstatscapturesumcompletiontime2low = value;
        rttmonstatscapturesumcompletiontime2low.value_namespace = name_space;
        rttmonstatscapturesumcompletiontime2low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime2High")
    {
        rttmonstatscapturesumcompletiontime2high = value;
        rttmonstatscapturesumcompletiontime2high.value_namespace = name_space;
        rttmonstatscapturesumcompletiontime2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureCompletionTimeMax")
    {
        rttmonstatscapturecompletiontimemax = value;
        rttmonstatscapturecompletiontimemax.value_namespace = name_space;
        rttmonstatscapturecompletiontimemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureCompletionTimeMin")
    {
        rttmonstatscapturecompletiontimemin = value;
        rttmonstatscapturecompletiontimemin.value_namespace = name_space;
        rttmonstatscapturecompletiontimemin.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureStartTimeIndex")
    {
        rttmonstatscapturestarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCapturePathIndex")
    {
        rttmonstatscapturepathindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureHopIndex")
    {
        rttmonstatscapturehopindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureDistIndex")
    {
        rttmonstatscapturedistindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureCompletions")
    {
        rttmonstatscapturecompletions.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureOverThresholds")
    {
        rttmonstatscaptureoverthresholds.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime")
    {
        rttmonstatscapturesumcompletiontime.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime2Low")
    {
        rttmonstatscapturesumcompletiontime2low.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime2High")
    {
        rttmonstatscapturesumcompletiontime2high.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureCompletionTimeMax")
    {
        rttmonstatscapturecompletiontimemax.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureCompletionTimeMin")
    {
        rttmonstatscapturecompletiontimemin.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonStatsCaptureStartTimeIndex" || name == "rttMonStatsCapturePathIndex" || name == "rttMonStatsCaptureHopIndex" || name == "rttMonStatsCaptureDistIndex" || name == "rttMonStatsCaptureCompletions" || name == "rttMonStatsCaptureOverThresholds" || name == "rttMonStatsCaptureSumCompletionTime" || name == "rttMonStatsCaptureSumCompletionTime2Low" || name == "rttMonStatsCaptureSumCompletionTime2High" || name == "rttMonStatsCaptureCompletionTimeMax" || name == "rttMonStatsCaptureCompletionTimeMin")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectTable()
    :
    rttmonstatscollectentry(this, {"rttmonctrladminindex", "rttmonstatscapturestarttimeindex", "rttmonstatscapturepathindex", "rttmonstatscapturehopindex"})
{

    yang_name = "rttMonStatsCollectTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonStatsCollectTable::~RttMonStatsCollectTable()
{
}

bool CISCORTTMONMIB::RttMonStatsCollectTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonstatscollectentry.len(); index++)
    {
        if(rttmonstatscollectentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonStatsCollectTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonstatscollectentry.len(); index++)
    {
        if(rttmonstatscollectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonStatsCollectTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonStatsCollectTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCollectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonStatsCollectTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonStatsCollectTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonStatsCollectEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry>();
        c->parent = this;
        rttmonstatscollectentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonStatsCollectTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonstatscollectentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonStatsCollectTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonStatsCollectTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonStatsCollectTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonStatsCollectEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::RttMonStatsCollectEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonstatscapturestarttimeindex{YType::str, "rttMonStatsCaptureStartTimeIndex"},
    rttmonstatscapturepathindex{YType::str, "rttMonStatsCapturePathIndex"},
    rttmonstatscapturehopindex{YType::str, "rttMonStatsCaptureHopIndex"},
    rttmonstatscollectnumdisconnects{YType::int32, "rttMonStatsCollectNumDisconnects"},
    rttmonstatscollecttimeouts{YType::int32, "rttMonStatsCollectTimeouts"},
    rttmonstatscollectbusies{YType::int32, "rttMonStatsCollectBusies"},
    rttmonstatscollectnoconnections{YType::int32, "rttMonStatsCollectNoConnections"},
    rttmonstatscollectdrops{YType::int32, "rttMonStatsCollectDrops"},
    rttmonstatscollectsequenceerrors{YType::int32, "rttMonStatsCollectSequenceErrors"},
    rttmonstatscollectverifyerrors{YType::int32, "rttMonStatsCollectVerifyErrors"},
    rttmonstatscollectaddress{YType::str, "rttMonStatsCollectAddress"},
    rttmoncontrolenableerrors{YType::int32, "rttMonControlEnableErrors"},
    rttmonstatsretrieveerrors{YType::int32, "rttMonStatsRetrieveErrors"},
    rttmonstatscollectctrlenerrors{YType::int32, "rttMonStatsCollectCtrlEnErrors"},
    rttmonstatscollectretrieveerrors{YType::int32, "rttMonStatsCollectRetrieveErrors"}
{

    yang_name = "rttMonStatsCollectEntry"; yang_parent_name = "rttMonStatsCollectTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::~RttMonStatsCollectEntry()
{
}

bool CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonstatscapturestarttimeindex.is_set
	|| rttmonstatscapturepathindex.is_set
	|| rttmonstatscapturehopindex.is_set
	|| rttmonstatscollectnumdisconnects.is_set
	|| rttmonstatscollecttimeouts.is_set
	|| rttmonstatscollectbusies.is_set
	|| rttmonstatscollectnoconnections.is_set
	|| rttmonstatscollectdrops.is_set
	|| rttmonstatscollectsequenceerrors.is_set
	|| rttmonstatscollectverifyerrors.is_set
	|| rttmonstatscollectaddress.is_set
	|| rttmoncontrolenableerrors.is_set
	|| rttmonstatsretrieveerrors.is_set
	|| rttmonstatscollectctrlenerrors.is_set
	|| rttmonstatscollectretrieveerrors.is_set;
}

bool CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonstatscapturestarttimeindex.yfilter)
	|| ydk::is_set(rttmonstatscapturepathindex.yfilter)
	|| ydk::is_set(rttmonstatscapturehopindex.yfilter)
	|| ydk::is_set(rttmonstatscollectnumdisconnects.yfilter)
	|| ydk::is_set(rttmonstatscollecttimeouts.yfilter)
	|| ydk::is_set(rttmonstatscollectbusies.yfilter)
	|| ydk::is_set(rttmonstatscollectnoconnections.yfilter)
	|| ydk::is_set(rttmonstatscollectdrops.yfilter)
	|| ydk::is_set(rttmonstatscollectsequenceerrors.yfilter)
	|| ydk::is_set(rttmonstatscollectverifyerrors.yfilter)
	|| ydk::is_set(rttmonstatscollectaddress.yfilter)
	|| ydk::is_set(rttmoncontrolenableerrors.yfilter)
	|| ydk::is_set(rttmonstatsretrieveerrors.yfilter)
	|| ydk::is_set(rttmonstatscollectctrlenerrors.yfilter)
	|| ydk::is_set(rttmonstatscollectretrieveerrors.yfilter);
}

std::string CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonStatsCollectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCollectEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonstatscapturestarttimeindex, "rttMonStatsCaptureStartTimeIndex");
    ADD_KEY_TOKEN(rttmonstatscapturepathindex, "rttMonStatsCapturePathIndex");
    ADD_KEY_TOKEN(rttmonstatscapturehopindex, "rttMonStatsCaptureHopIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonstatscapturestarttimeindex.is_set || is_set(rttmonstatscapturestarttimeindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturestarttimeindex.get_name_leafdata());
    if (rttmonstatscapturepathindex.is_set || is_set(rttmonstatscapturepathindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturepathindex.get_name_leafdata());
    if (rttmonstatscapturehopindex.is_set || is_set(rttmonstatscapturehopindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturehopindex.get_name_leafdata());
    if (rttmonstatscollectnumdisconnects.is_set || is_set(rttmonstatscollectnumdisconnects.yfilter)) leaf_name_data.push_back(rttmonstatscollectnumdisconnects.get_name_leafdata());
    if (rttmonstatscollecttimeouts.is_set || is_set(rttmonstatscollecttimeouts.yfilter)) leaf_name_data.push_back(rttmonstatscollecttimeouts.get_name_leafdata());
    if (rttmonstatscollectbusies.is_set || is_set(rttmonstatscollectbusies.yfilter)) leaf_name_data.push_back(rttmonstatscollectbusies.get_name_leafdata());
    if (rttmonstatscollectnoconnections.is_set || is_set(rttmonstatscollectnoconnections.yfilter)) leaf_name_data.push_back(rttmonstatscollectnoconnections.get_name_leafdata());
    if (rttmonstatscollectdrops.is_set || is_set(rttmonstatscollectdrops.yfilter)) leaf_name_data.push_back(rttmonstatscollectdrops.get_name_leafdata());
    if (rttmonstatscollectsequenceerrors.is_set || is_set(rttmonstatscollectsequenceerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectsequenceerrors.get_name_leafdata());
    if (rttmonstatscollectverifyerrors.is_set || is_set(rttmonstatscollectverifyerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectverifyerrors.get_name_leafdata());
    if (rttmonstatscollectaddress.is_set || is_set(rttmonstatscollectaddress.yfilter)) leaf_name_data.push_back(rttmonstatscollectaddress.get_name_leafdata());
    if (rttmoncontrolenableerrors.is_set || is_set(rttmoncontrolenableerrors.yfilter)) leaf_name_data.push_back(rttmoncontrolenableerrors.get_name_leafdata());
    if (rttmonstatsretrieveerrors.is_set || is_set(rttmonstatsretrieveerrors.yfilter)) leaf_name_data.push_back(rttmonstatsretrieveerrors.get_name_leafdata());
    if (rttmonstatscollectctrlenerrors.is_set || is_set(rttmonstatscollectctrlenerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectctrlenerrors.get_name_leafdata());
    if (rttmonstatscollectretrieveerrors.is_set || is_set(rttmonstatscollectretrieveerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectretrieveerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureStartTimeIndex")
    {
        rttmonstatscapturestarttimeindex = value;
        rttmonstatscapturestarttimeindex.value_namespace = name_space;
        rttmonstatscapturestarttimeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCapturePathIndex")
    {
        rttmonstatscapturepathindex = value;
        rttmonstatscapturepathindex.value_namespace = name_space;
        rttmonstatscapturepathindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureHopIndex")
    {
        rttmonstatscapturehopindex = value;
        rttmonstatscapturehopindex.value_namespace = name_space;
        rttmonstatscapturehopindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectNumDisconnects")
    {
        rttmonstatscollectnumdisconnects = value;
        rttmonstatscollectnumdisconnects.value_namespace = name_space;
        rttmonstatscollectnumdisconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectTimeouts")
    {
        rttmonstatscollecttimeouts = value;
        rttmonstatscollecttimeouts.value_namespace = name_space;
        rttmonstatscollecttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectBusies")
    {
        rttmonstatscollectbusies = value;
        rttmonstatscollectbusies.value_namespace = name_space;
        rttmonstatscollectbusies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectNoConnections")
    {
        rttmonstatscollectnoconnections = value;
        rttmonstatscollectnoconnections.value_namespace = name_space;
        rttmonstatscollectnoconnections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectDrops")
    {
        rttmonstatscollectdrops = value;
        rttmonstatscollectdrops.value_namespace = name_space;
        rttmonstatscollectdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectSequenceErrors")
    {
        rttmonstatscollectsequenceerrors = value;
        rttmonstatscollectsequenceerrors.value_namespace = name_space;
        rttmonstatscollectsequenceerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectVerifyErrors")
    {
        rttmonstatscollectverifyerrors = value;
        rttmonstatscollectverifyerrors.value_namespace = name_space;
        rttmonstatscollectverifyerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectAddress")
    {
        rttmonstatscollectaddress = value;
        rttmonstatscollectaddress.value_namespace = name_space;
        rttmonstatscollectaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonControlEnableErrors")
    {
        rttmoncontrolenableerrors = value;
        rttmoncontrolenableerrors.value_namespace = name_space;
        rttmoncontrolenableerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsRetrieveErrors")
    {
        rttmonstatsretrieveerrors = value;
        rttmonstatsretrieveerrors.value_namespace = name_space;
        rttmonstatsretrieveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectCtrlEnErrors")
    {
        rttmonstatscollectctrlenerrors = value;
        rttmonstatscollectctrlenerrors.value_namespace = name_space;
        rttmonstatscollectctrlenerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectRetrieveErrors")
    {
        rttmonstatscollectretrieveerrors = value;
        rttmonstatscollectretrieveerrors.value_namespace = name_space;
        rttmonstatscollectretrieveerrors.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureStartTimeIndex")
    {
        rttmonstatscapturestarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCapturePathIndex")
    {
        rttmonstatscapturepathindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureHopIndex")
    {
        rttmonstatscapturehopindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectNumDisconnects")
    {
        rttmonstatscollectnumdisconnects.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectTimeouts")
    {
        rttmonstatscollecttimeouts.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectBusies")
    {
        rttmonstatscollectbusies.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectNoConnections")
    {
        rttmonstatscollectnoconnections.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectDrops")
    {
        rttmonstatscollectdrops.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectSequenceErrors")
    {
        rttmonstatscollectsequenceerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectVerifyErrors")
    {
        rttmonstatscollectverifyerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectAddress")
    {
        rttmonstatscollectaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonControlEnableErrors")
    {
        rttmoncontrolenableerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsRetrieveErrors")
    {
        rttmonstatsretrieveerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectCtrlEnErrors")
    {
        rttmonstatscollectctrlenerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectRetrieveErrors")
    {
        rttmonstatscollectretrieveerrors.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonStatsCaptureStartTimeIndex" || name == "rttMonStatsCapturePathIndex" || name == "rttMonStatsCaptureHopIndex" || name == "rttMonStatsCollectNumDisconnects" || name == "rttMonStatsCollectTimeouts" || name == "rttMonStatsCollectBusies" || name == "rttMonStatsCollectNoConnections" || name == "rttMonStatsCollectDrops" || name == "rttMonStatsCollectSequenceErrors" || name == "rttMonStatsCollectVerifyErrors" || name == "rttMonStatsCollectAddress" || name == "rttMonControlEnableErrors" || name == "rttMonStatsRetrieveErrors" || name == "rttMonStatsCollectCtrlEnErrors" || name == "rttMonStatsCollectRetrieveErrors")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsTable()
    :
    rttmonstatstotalsentry(this, {"rttmonctrladminindex", "rttmonstatscapturestarttimeindex"})
{

    yang_name = "rttMonStatsTotalsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonStatsTotalsTable::~RttMonStatsTotalsTable()
{
}

bool CISCORTTMONMIB::RttMonStatsTotalsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonstatstotalsentry.len(); index++)
    {
        if(rttmonstatstotalsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonStatsTotalsTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonstatstotalsentry.len(); index++)
    {
        if(rttmonstatstotalsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonStatsTotalsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonStatsTotalsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsTotalsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonStatsTotalsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonStatsTotalsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonStatsTotalsEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry>();
        c->parent = this;
        rttmonstatstotalsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonStatsTotalsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonstatstotalsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonStatsTotalsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonStatsTotalsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonStatsTotalsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonStatsTotalsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::RttMonStatsTotalsEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonstatscapturestarttimeindex{YType::str, "rttMonStatsCaptureStartTimeIndex"},
    rttmonstatstotalselapsedtime{YType::int32, "rttMonStatsTotalsElapsedTime"},
    rttmonstatstotalsinitiations{YType::int32, "rttMonStatsTotalsInitiations"}
{

    yang_name = "rttMonStatsTotalsEntry"; yang_parent_name = "rttMonStatsTotalsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::~RttMonStatsTotalsEntry()
{
}

bool CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonstatscapturestarttimeindex.is_set
	|| rttmonstatstotalselapsedtime.is_set
	|| rttmonstatstotalsinitiations.is_set;
}

bool CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonstatscapturestarttimeindex.yfilter)
	|| ydk::is_set(rttmonstatstotalselapsedtime.yfilter)
	|| ydk::is_set(rttmonstatstotalsinitiations.yfilter);
}

std::string CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonStatsTotalsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsTotalsEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonstatscapturestarttimeindex, "rttMonStatsCaptureStartTimeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonstatscapturestarttimeindex.is_set || is_set(rttmonstatscapturestarttimeindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturestarttimeindex.get_name_leafdata());
    if (rttmonstatstotalselapsedtime.is_set || is_set(rttmonstatstotalselapsedtime.yfilter)) leaf_name_data.push_back(rttmonstatstotalselapsedtime.get_name_leafdata());
    if (rttmonstatstotalsinitiations.is_set || is_set(rttmonstatstotalsinitiations.yfilter)) leaf_name_data.push_back(rttmonstatstotalsinitiations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureStartTimeIndex")
    {
        rttmonstatscapturestarttimeindex = value;
        rttmonstatscapturestarttimeindex.value_namespace = name_space;
        rttmonstatscapturestarttimeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsTotalsElapsedTime")
    {
        rttmonstatstotalselapsedtime = value;
        rttmonstatstotalselapsedtime.value_namespace = name_space;
        rttmonstatstotalselapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsTotalsInitiations")
    {
        rttmonstatstotalsinitiations = value;
        rttmonstatstotalsinitiations.value_namespace = name_space;
        rttmonstatstotalsinitiations.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureStartTimeIndex")
    {
        rttmonstatscapturestarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsTotalsElapsedTime")
    {
        rttmonstatstotalselapsedtime.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsTotalsInitiations")
    {
        rttmonstatstotalsinitiations.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonStatsCaptureStartTimeIndex" || name == "rttMonStatsTotalsElapsedTime" || name == "rttMonStatsTotalsInitiations")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsTable()
    :
    rttmonhttpstatsentry(this, {"rttmonctrladminindex", "rttmonhttpstatsstarttimeindex"})
{

    yang_name = "rttMonHTTPStatsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonHTTPStatsTable::~RttMonHTTPStatsTable()
{
}

bool CISCORTTMONMIB::RttMonHTTPStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonhttpstatsentry.len(); index++)
    {
        if(rttmonhttpstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonHTTPStatsTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonhttpstatsentry.len(); index++)
    {
        if(rttmonhttpstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonHTTPStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonHTTPStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHTTPStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonHTTPStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonHTTPStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonHTTPStatsEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry>();
        c->parent = this;
        rttmonhttpstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonHTTPStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonhttpstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonHTTPStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonHTTPStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonHTTPStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonHTTPStatsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::RttMonHTTPStatsEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonhttpstatsstarttimeindex{YType::uint32, "rttMonHTTPStatsStartTimeIndex"},
    rttmonhttpstatscompletions{YType::uint32, "rttMonHTTPStatsCompletions"},
    rttmonhttpstatsoverthresholds{YType::uint32, "rttMonHTTPStatsOverThresholds"},
    rttmonhttpstatsrttsum{YType::uint32, "rttMonHTTPStatsRTTSum"},
    rttmonhttpstatsrttsum2low{YType::uint32, "rttMonHTTPStatsRTTSum2Low"},
    rttmonhttpstatsrttsum2high{YType::uint32, "rttMonHTTPStatsRTTSum2High"},
    rttmonhttpstatsrttmin{YType::uint32, "rttMonHTTPStatsRTTMin"},
    rttmonhttpstatsrttmax{YType::uint32, "rttMonHTTPStatsRTTMax"},
    rttmonhttpstatsdnsrttsum{YType::uint32, "rttMonHTTPStatsDNSRTTSum"},
    rttmonhttpstatstcpconnectrttsum{YType::uint32, "rttMonHTTPStatsTCPConnectRTTSum"},
    rttmonhttpstatstransactionrttsum{YType::uint32, "rttMonHTTPStatsTransactionRTTSum"},
    rttmonhttpstatsmessagebodyoctetssum{YType::uint32, "rttMonHTTPStatsMessageBodyOctetsSum"},
    rttmonhttpstatsdnsservertimeout{YType::uint32, "rttMonHTTPStatsDNSServerTimeout"},
    rttmonhttpstatstcpconnecttimeout{YType::uint32, "rttMonHTTPStatsTCPConnectTimeout"},
    rttmonhttpstatstransactiontimeout{YType::uint32, "rttMonHTTPStatsTransactionTimeout"},
    rttmonhttpstatsdnsqueryerror{YType::uint32, "rttMonHTTPStatsDNSQueryError"},
    rttmonhttpstatshttperror{YType::uint32, "rttMonHTTPStatsHTTPError"},
    rttmonhttpstatserror{YType::uint32, "rttMonHTTPStatsError"},
    rttmonhttpstatsbusies{YType::uint32, "rttMonHTTPStatsBusies"}
{

    yang_name = "rttMonHTTPStatsEntry"; yang_parent_name = "rttMonHTTPStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::~RttMonHTTPStatsEntry()
{
}

bool CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonhttpstatsstarttimeindex.is_set
	|| rttmonhttpstatscompletions.is_set
	|| rttmonhttpstatsoverthresholds.is_set
	|| rttmonhttpstatsrttsum.is_set
	|| rttmonhttpstatsrttsum2low.is_set
	|| rttmonhttpstatsrttsum2high.is_set
	|| rttmonhttpstatsrttmin.is_set
	|| rttmonhttpstatsrttmax.is_set
	|| rttmonhttpstatsdnsrttsum.is_set
	|| rttmonhttpstatstcpconnectrttsum.is_set
	|| rttmonhttpstatstransactionrttsum.is_set
	|| rttmonhttpstatsmessagebodyoctetssum.is_set
	|| rttmonhttpstatsdnsservertimeout.is_set
	|| rttmonhttpstatstcpconnecttimeout.is_set
	|| rttmonhttpstatstransactiontimeout.is_set
	|| rttmonhttpstatsdnsqueryerror.is_set
	|| rttmonhttpstatshttperror.is_set
	|| rttmonhttpstatserror.is_set
	|| rttmonhttpstatsbusies.is_set;
}

bool CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonhttpstatsstarttimeindex.yfilter)
	|| ydk::is_set(rttmonhttpstatscompletions.yfilter)
	|| ydk::is_set(rttmonhttpstatsoverthresholds.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttsum2low.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttsum2high.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttmin.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttmax.yfilter)
	|| ydk::is_set(rttmonhttpstatsdnsrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatstcpconnectrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatstransactionrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatsmessagebodyoctetssum.yfilter)
	|| ydk::is_set(rttmonhttpstatsdnsservertimeout.yfilter)
	|| ydk::is_set(rttmonhttpstatstcpconnecttimeout.yfilter)
	|| ydk::is_set(rttmonhttpstatstransactiontimeout.yfilter)
	|| ydk::is_set(rttmonhttpstatsdnsqueryerror.yfilter)
	|| ydk::is_set(rttmonhttpstatshttperror.yfilter)
	|| ydk::is_set(rttmonhttpstatserror.yfilter)
	|| ydk::is_set(rttmonhttpstatsbusies.yfilter);
}

std::string CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonHTTPStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHTTPStatsEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonhttpstatsstarttimeindex, "rttMonHTTPStatsStartTimeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonhttpstatsstarttimeindex.is_set || is_set(rttmonhttpstatsstarttimeindex.yfilter)) leaf_name_data.push_back(rttmonhttpstatsstarttimeindex.get_name_leafdata());
    if (rttmonhttpstatscompletions.is_set || is_set(rttmonhttpstatscompletions.yfilter)) leaf_name_data.push_back(rttmonhttpstatscompletions.get_name_leafdata());
    if (rttmonhttpstatsoverthresholds.is_set || is_set(rttmonhttpstatsoverthresholds.yfilter)) leaf_name_data.push_back(rttmonhttpstatsoverthresholds.get_name_leafdata());
    if (rttmonhttpstatsrttsum.is_set || is_set(rttmonhttpstatsrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttsum.get_name_leafdata());
    if (rttmonhttpstatsrttsum2low.is_set || is_set(rttmonhttpstatsrttsum2low.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttsum2low.get_name_leafdata());
    if (rttmonhttpstatsrttsum2high.is_set || is_set(rttmonhttpstatsrttsum2high.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttsum2high.get_name_leafdata());
    if (rttmonhttpstatsrttmin.is_set || is_set(rttmonhttpstatsrttmin.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttmin.get_name_leafdata());
    if (rttmonhttpstatsrttmax.is_set || is_set(rttmonhttpstatsrttmax.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttmax.get_name_leafdata());
    if (rttmonhttpstatsdnsrttsum.is_set || is_set(rttmonhttpstatsdnsrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatsdnsrttsum.get_name_leafdata());
    if (rttmonhttpstatstcpconnectrttsum.is_set || is_set(rttmonhttpstatstcpconnectrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatstcpconnectrttsum.get_name_leafdata());
    if (rttmonhttpstatstransactionrttsum.is_set || is_set(rttmonhttpstatstransactionrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatstransactionrttsum.get_name_leafdata());
    if (rttmonhttpstatsmessagebodyoctetssum.is_set || is_set(rttmonhttpstatsmessagebodyoctetssum.yfilter)) leaf_name_data.push_back(rttmonhttpstatsmessagebodyoctetssum.get_name_leafdata());
    if (rttmonhttpstatsdnsservertimeout.is_set || is_set(rttmonhttpstatsdnsservertimeout.yfilter)) leaf_name_data.push_back(rttmonhttpstatsdnsservertimeout.get_name_leafdata());
    if (rttmonhttpstatstcpconnecttimeout.is_set || is_set(rttmonhttpstatstcpconnecttimeout.yfilter)) leaf_name_data.push_back(rttmonhttpstatstcpconnecttimeout.get_name_leafdata());
    if (rttmonhttpstatstransactiontimeout.is_set || is_set(rttmonhttpstatstransactiontimeout.yfilter)) leaf_name_data.push_back(rttmonhttpstatstransactiontimeout.get_name_leafdata());
    if (rttmonhttpstatsdnsqueryerror.is_set || is_set(rttmonhttpstatsdnsqueryerror.yfilter)) leaf_name_data.push_back(rttmonhttpstatsdnsqueryerror.get_name_leafdata());
    if (rttmonhttpstatshttperror.is_set || is_set(rttmonhttpstatshttperror.yfilter)) leaf_name_data.push_back(rttmonhttpstatshttperror.get_name_leafdata());
    if (rttmonhttpstatserror.is_set || is_set(rttmonhttpstatserror.yfilter)) leaf_name_data.push_back(rttmonhttpstatserror.get_name_leafdata());
    if (rttmonhttpstatsbusies.is_set || is_set(rttmonhttpstatsbusies.yfilter)) leaf_name_data.push_back(rttmonhttpstatsbusies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsStartTimeIndex")
    {
        rttmonhttpstatsstarttimeindex = value;
        rttmonhttpstatsstarttimeindex.value_namespace = name_space;
        rttmonhttpstatsstarttimeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsCompletions")
    {
        rttmonhttpstatscompletions = value;
        rttmonhttpstatscompletions.value_namespace = name_space;
        rttmonhttpstatscompletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsOverThresholds")
    {
        rttmonhttpstatsoverthresholds = value;
        rttmonhttpstatsoverthresholds.value_namespace = name_space;
        rttmonhttpstatsoverthresholds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTSum")
    {
        rttmonhttpstatsrttsum = value;
        rttmonhttpstatsrttsum.value_namespace = name_space;
        rttmonhttpstatsrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2Low")
    {
        rttmonhttpstatsrttsum2low = value;
        rttmonhttpstatsrttsum2low.value_namespace = name_space;
        rttmonhttpstatsrttsum2low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2High")
    {
        rttmonhttpstatsrttsum2high = value;
        rttmonhttpstatsrttsum2high.value_namespace = name_space;
        rttmonhttpstatsrttsum2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTMin")
    {
        rttmonhttpstatsrttmin = value;
        rttmonhttpstatsrttmin.value_namespace = name_space;
        rttmonhttpstatsrttmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTMax")
    {
        rttmonhttpstatsrttmax = value;
        rttmonhttpstatsrttmax.value_namespace = name_space;
        rttmonhttpstatsrttmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsDNSRTTSum")
    {
        rttmonhttpstatsdnsrttsum = value;
        rttmonhttpstatsdnsrttsum.value_namespace = name_space;
        rttmonhttpstatsdnsrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectRTTSum")
    {
        rttmonhttpstatstcpconnectrttsum = value;
        rttmonhttpstatstcpconnectrttsum.value_namespace = name_space;
        rttmonhttpstatstcpconnectrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTransactionRTTSum")
    {
        rttmonhttpstatstransactionrttsum = value;
        rttmonhttpstatstransactionrttsum.value_namespace = name_space;
        rttmonhttpstatstransactionrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsMessageBodyOctetsSum")
    {
        rttmonhttpstatsmessagebodyoctetssum = value;
        rttmonhttpstatsmessagebodyoctetssum.value_namespace = name_space;
        rttmonhttpstatsmessagebodyoctetssum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsDNSServerTimeout")
    {
        rttmonhttpstatsdnsservertimeout = value;
        rttmonhttpstatsdnsservertimeout.value_namespace = name_space;
        rttmonhttpstatsdnsservertimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectTimeout")
    {
        rttmonhttpstatstcpconnecttimeout = value;
        rttmonhttpstatstcpconnecttimeout.value_namespace = name_space;
        rttmonhttpstatstcpconnecttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTransactionTimeout")
    {
        rttmonhttpstatstransactiontimeout = value;
        rttmonhttpstatstransactiontimeout.value_namespace = name_space;
        rttmonhttpstatstransactiontimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsDNSQueryError")
    {
        rttmonhttpstatsdnsqueryerror = value;
        rttmonhttpstatsdnsqueryerror.value_namespace = name_space;
        rttmonhttpstatsdnsqueryerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsHTTPError")
    {
        rttmonhttpstatshttperror = value;
        rttmonhttpstatshttperror.value_namespace = name_space;
        rttmonhttpstatshttperror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsError")
    {
        rttmonhttpstatserror = value;
        rttmonhttpstatserror.value_namespace = name_space;
        rttmonhttpstatserror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsBusies")
    {
        rttmonhttpstatsbusies = value;
        rttmonhttpstatsbusies.value_namespace = name_space;
        rttmonhttpstatsbusies.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsStartTimeIndex")
    {
        rttmonhttpstatsstarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsCompletions")
    {
        rttmonhttpstatscompletions.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsOverThresholds")
    {
        rttmonhttpstatsoverthresholds.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTSum")
    {
        rttmonhttpstatsrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2Low")
    {
        rttmonhttpstatsrttsum2low.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2High")
    {
        rttmonhttpstatsrttsum2high.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTMin")
    {
        rttmonhttpstatsrttmin.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTMax")
    {
        rttmonhttpstatsrttmax.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsDNSRTTSum")
    {
        rttmonhttpstatsdnsrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectRTTSum")
    {
        rttmonhttpstatstcpconnectrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTransactionRTTSum")
    {
        rttmonhttpstatstransactionrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsMessageBodyOctetsSum")
    {
        rttmonhttpstatsmessagebodyoctetssum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsDNSServerTimeout")
    {
        rttmonhttpstatsdnsservertimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectTimeout")
    {
        rttmonhttpstatstcpconnecttimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTransactionTimeout")
    {
        rttmonhttpstatstransactiontimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsDNSQueryError")
    {
        rttmonhttpstatsdnsqueryerror.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsHTTPError")
    {
        rttmonhttpstatshttperror.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsError")
    {
        rttmonhttpstatserror.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsBusies")
    {
        rttmonhttpstatsbusies.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonHTTPStatsStartTimeIndex" || name == "rttMonHTTPStatsCompletions" || name == "rttMonHTTPStatsOverThresholds" || name == "rttMonHTTPStatsRTTSum" || name == "rttMonHTTPStatsRTTSum2Low" || name == "rttMonHTTPStatsRTTSum2High" || name == "rttMonHTTPStatsRTTMin" || name == "rttMonHTTPStatsRTTMax" || name == "rttMonHTTPStatsDNSRTTSum" || name == "rttMonHTTPStatsTCPConnectRTTSum" || name == "rttMonHTTPStatsTransactionRTTSum" || name == "rttMonHTTPStatsMessageBodyOctetsSum" || name == "rttMonHTTPStatsDNSServerTimeout" || name == "rttMonHTTPStatsTCPConnectTimeout" || name == "rttMonHTTPStatsTransactionTimeout" || name == "rttMonHTTPStatsDNSQueryError" || name == "rttMonHTTPStatsHTTPError" || name == "rttMonHTTPStatsError" || name == "rttMonHTTPStatsBusies")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsTable()
    :
    rttmonjitterstatsentry(this, {"rttmonctrladminindex", "rttmonjitterstatsstarttimeindex"})
{

    yang_name = "rttMonJitterStatsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonJitterStatsTable::~RttMonJitterStatsTable()
{
}

bool CISCORTTMONMIB::RttMonJitterStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonjitterstatsentry.len(); index++)
    {
        if(rttmonjitterstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonJitterStatsTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonjitterstatsentry.len(); index++)
    {
        if(rttmonjitterstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonJitterStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonJitterStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonJitterStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonJitterStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonJitterStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonJitterStatsEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry>();
        c->parent = this;
        rttmonjitterstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonJitterStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonjitterstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonJitterStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonJitterStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonJitterStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonJitterStatsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::RttMonJitterStatsEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonjitterstatsstarttimeindex{YType::uint32, "rttMonJitterStatsStartTimeIndex"},
    rttmonjitterstatscompletions{YType::uint32, "rttMonJitterStatsCompletions"},
    rttmonjitterstatsoverthresholds{YType::uint32, "rttMonJitterStatsOverThresholds"},
    rttmonjitterstatsnumofrtt{YType::uint32, "rttMonJitterStatsNumOfRTT"},
    rttmonjitterstatsrttsum{YType::uint32, "rttMonJitterStatsRTTSum"},
    rttmonjitterstatsrttsum2low{YType::uint32, "rttMonJitterStatsRTTSum2Low"},
    rttmonjitterstatsrttsum2high{YType::uint32, "rttMonJitterStatsRTTSum2High"},
    rttmonjitterstatsrttmin{YType::uint32, "rttMonJitterStatsRTTMin"},
    rttmonjitterstatsrttmax{YType::uint32, "rttMonJitterStatsRTTMax"},
    rttmonjitterstatsminofpositivessd{YType::uint32, "rttMonJitterStatsMinOfPositivesSD"},
    rttmonjitterstatsmaxofpositivessd{YType::uint32, "rttMonJitterStatsMaxOfPositivesSD"},
    rttmonjitterstatsnumofpositivessd{YType::uint32, "rttMonJitterStatsNumOfPositivesSD"},
    rttmonjitterstatssumofpositivessd{YType::uint32, "rttMonJitterStatsSumOfPositivesSD"},
    rttmonjitterstatssum2positivessdlow{YType::uint32, "rttMonJitterStatsSum2PositivesSDLow"},
    rttmonjitterstatssum2positivessdhigh{YType::uint32, "rttMonJitterStatsSum2PositivesSDHigh"},
    rttmonjitterstatsminofnegativessd{YType::uint32, "rttMonJitterStatsMinOfNegativesSD"},
    rttmonjitterstatsmaxofnegativessd{YType::uint32, "rttMonJitterStatsMaxOfNegativesSD"},
    rttmonjitterstatsnumofnegativessd{YType::uint32, "rttMonJitterStatsNumOfNegativesSD"},
    rttmonjitterstatssumofnegativessd{YType::uint32, "rttMonJitterStatsSumOfNegativesSD"},
    rttmonjitterstatssum2negativessdlow{YType::uint32, "rttMonJitterStatsSum2NegativesSDLow"},
    rttmonjitterstatssum2negativessdhigh{YType::uint32, "rttMonJitterStatsSum2NegativesSDHigh"},
    rttmonjitterstatsminofpositivesds{YType::uint32, "rttMonJitterStatsMinOfPositivesDS"},
    rttmonjitterstatsmaxofpositivesds{YType::uint32, "rttMonJitterStatsMaxOfPositivesDS"},
    rttmonjitterstatsnumofpositivesds{YType::uint32, "rttMonJitterStatsNumOfPositivesDS"},
    rttmonjitterstatssumofpositivesds{YType::uint32, "rttMonJitterStatsSumOfPositivesDS"},
    rttmonjitterstatssum2positivesdslow{YType::uint32, "rttMonJitterStatsSum2PositivesDSLow"},
    rttmonjitterstatssum2positivesdshigh{YType::uint32, "rttMonJitterStatsSum2PositivesDSHigh"},
    rttmonjitterstatsminofnegativesds{YType::uint32, "rttMonJitterStatsMinOfNegativesDS"},
    rttmonjitterstatsmaxofnegativesds{YType::uint32, "rttMonJitterStatsMaxOfNegativesDS"},
    rttmonjitterstatsnumofnegativesds{YType::uint32, "rttMonJitterStatsNumOfNegativesDS"},
    rttmonjitterstatssumofnegativesds{YType::uint32, "rttMonJitterStatsSumOfNegativesDS"},
    rttmonjitterstatssum2negativesdslow{YType::uint32, "rttMonJitterStatsSum2NegativesDSLow"},
    rttmonjitterstatssum2negativesdshigh{YType::uint32, "rttMonJitterStatsSum2NegativesDSHigh"},
    rttmonjitterstatspacketlosssd{YType::uint32, "rttMonJitterStatsPacketLossSD"},
    rttmonjitterstatspacketlossds{YType::uint32, "rttMonJitterStatsPacketLossDS"},
    rttmonjitterstatspacketoutofsequence{YType::uint32, "rttMonJitterStatsPacketOutOfSequence"},
    rttmonjitterstatspacketmia{YType::uint32, "rttMonJitterStatsPacketMIA"},
    rttmonjitterstatspacketlatearrival{YType::uint32, "rttMonJitterStatsPacketLateArrival"},
    rttmonjitterstatserror{YType::uint32, "rttMonJitterStatsError"},
    rttmonjitterstatsbusies{YType::uint32, "rttMonJitterStatsBusies"},
    rttmonjitterstatsowsumsd{YType::uint32, "rttMonJitterStatsOWSumSD"},
    rttmonjitterstatsowsum2sdlow{YType::uint32, "rttMonJitterStatsOWSum2SDLow"},
    rttmonjitterstatsowsum2sdhigh{YType::uint32, "rttMonJitterStatsOWSum2SDHigh"},
    rttmonjitterstatsowminsd{YType::uint32, "rttMonJitterStatsOWMinSD"},
    rttmonjitterstatsowmaxsd{YType::uint32, "rttMonJitterStatsOWMaxSD"},
    rttmonjitterstatsowsumds{YType::uint32, "rttMonJitterStatsOWSumDS"},
    rttmonjitterstatsowsum2dslow{YType::uint32, "rttMonJitterStatsOWSum2DSLow"},
    rttmonjitterstatsowsum2dshigh{YType::uint32, "rttMonJitterStatsOWSum2DSHigh"},
    rttmonjitterstatsowminds{YType::uint32, "rttMonJitterStatsOWMinDS"},
    rttmonjitterstatsowmaxds{YType::uint32, "rttMonJitterStatsOWMaxDS"},
    rttmonjitterstatsnumofow{YType::uint32, "rttMonJitterStatsNumOfOW"},
    rttmonjitterstatsowminsdnew{YType::uint32, "rttMonJitterStatsOWMinSDNew"},
    rttmonjitterstatsowmaxsdnew{YType::uint32, "rttMonJitterStatsOWMaxSDNew"},
    rttmonjitterstatsowmindsnew{YType::uint32, "rttMonJitterStatsOWMinDSNew"},
    rttmonjitterstatsowmaxdsnew{YType::uint32, "rttMonJitterStatsOWMaxDSNew"},
    rttmonjitterstatsminofmos{YType::uint32, "rttMonJitterStatsMinOfMOS"},
    rttmonjitterstatsmaxofmos{YType::uint32, "rttMonJitterStatsMaxOfMOS"},
    rttmonjitterstatsminoficpif{YType::uint32, "rttMonJitterStatsMinOfICPIF"},
    rttmonjitterstatsmaxoficpif{YType::uint32, "rttMonJitterStatsMaxOfICPIF"},
    rttmonjitterstatsiajout{YType::uint32, "rttMonJitterStatsIAJOut"},
    rttmonjitterstatsiajin{YType::uint32, "rttMonJitterStatsIAJIn"},
    rttmonjitterstatsavgjitter{YType::uint32, "rttMonJitterStatsAvgJitter"},
    rttmonjitterstatsavgjittersd{YType::uint32, "rttMonJitterStatsAvgJitterSD"},
    rttmonjitterstatsavgjitterds{YType::uint32, "rttMonJitterStatsAvgJitterDS"},
    rttmonjitterstatsunsyncrts{YType::uint32, "rttMonJitterStatsUnSyncRTs"},
    rttmonjitterstatsrttsumhigh{YType::uint32, "rttMonJitterStatsRTTSumHigh"},
    rttmonjitterstatsowsumsdhigh{YType::uint32, "rttMonJitterStatsOWSumSDHigh"},
    rttmonjitterstatsowsumdshigh{YType::uint32, "rttMonJitterStatsOWSumDSHigh"}
{

    yang_name = "rttMonJitterStatsEntry"; yang_parent_name = "rttMonJitterStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::~RttMonJitterStatsEntry()
{
}

bool CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonjitterstatsstarttimeindex.is_set
	|| rttmonjitterstatscompletions.is_set
	|| rttmonjitterstatsoverthresholds.is_set
	|| rttmonjitterstatsnumofrtt.is_set
	|| rttmonjitterstatsrttsum.is_set
	|| rttmonjitterstatsrttsum2low.is_set
	|| rttmonjitterstatsrttsum2high.is_set
	|| rttmonjitterstatsrttmin.is_set
	|| rttmonjitterstatsrttmax.is_set
	|| rttmonjitterstatsminofpositivessd.is_set
	|| rttmonjitterstatsmaxofpositivessd.is_set
	|| rttmonjitterstatsnumofpositivessd.is_set
	|| rttmonjitterstatssumofpositivessd.is_set
	|| rttmonjitterstatssum2positivessdlow.is_set
	|| rttmonjitterstatssum2positivessdhigh.is_set
	|| rttmonjitterstatsminofnegativessd.is_set
	|| rttmonjitterstatsmaxofnegativessd.is_set
	|| rttmonjitterstatsnumofnegativessd.is_set
	|| rttmonjitterstatssumofnegativessd.is_set
	|| rttmonjitterstatssum2negativessdlow.is_set
	|| rttmonjitterstatssum2negativessdhigh.is_set
	|| rttmonjitterstatsminofpositivesds.is_set
	|| rttmonjitterstatsmaxofpositivesds.is_set
	|| rttmonjitterstatsnumofpositivesds.is_set
	|| rttmonjitterstatssumofpositivesds.is_set
	|| rttmonjitterstatssum2positivesdslow.is_set
	|| rttmonjitterstatssum2positivesdshigh.is_set
	|| rttmonjitterstatsminofnegativesds.is_set
	|| rttmonjitterstatsmaxofnegativesds.is_set
	|| rttmonjitterstatsnumofnegativesds.is_set
	|| rttmonjitterstatssumofnegativesds.is_set
	|| rttmonjitterstatssum2negativesdslow.is_set
	|| rttmonjitterstatssum2negativesdshigh.is_set
	|| rttmonjitterstatspacketlosssd.is_set
	|| rttmonjitterstatspacketlossds.is_set
	|| rttmonjitterstatspacketoutofsequence.is_set
	|| rttmonjitterstatspacketmia.is_set
	|| rttmonjitterstatspacketlatearrival.is_set
	|| rttmonjitterstatserror.is_set
	|| rttmonjitterstatsbusies.is_set
	|| rttmonjitterstatsowsumsd.is_set
	|| rttmonjitterstatsowsum2sdlow.is_set
	|| rttmonjitterstatsowsum2sdhigh.is_set
	|| rttmonjitterstatsowminsd.is_set
	|| rttmonjitterstatsowmaxsd.is_set
	|| rttmonjitterstatsowsumds.is_set
	|| rttmonjitterstatsowsum2dslow.is_set
	|| rttmonjitterstatsowsum2dshigh.is_set
	|| rttmonjitterstatsowminds.is_set
	|| rttmonjitterstatsowmaxds.is_set
	|| rttmonjitterstatsnumofow.is_set
	|| rttmonjitterstatsowminsdnew.is_set
	|| rttmonjitterstatsowmaxsdnew.is_set
	|| rttmonjitterstatsowmindsnew.is_set
	|| rttmonjitterstatsowmaxdsnew.is_set
	|| rttmonjitterstatsminofmos.is_set
	|| rttmonjitterstatsmaxofmos.is_set
	|| rttmonjitterstatsminoficpif.is_set
	|| rttmonjitterstatsmaxoficpif.is_set
	|| rttmonjitterstatsiajout.is_set
	|| rttmonjitterstatsiajin.is_set
	|| rttmonjitterstatsavgjitter.is_set
	|| rttmonjitterstatsavgjittersd.is_set
	|| rttmonjitterstatsavgjitterds.is_set
	|| rttmonjitterstatsunsyncrts.is_set
	|| rttmonjitterstatsrttsumhigh.is_set
	|| rttmonjitterstatsowsumsdhigh.is_set
	|| rttmonjitterstatsowsumdshigh.is_set;
}

bool CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonjitterstatsstarttimeindex.yfilter)
	|| ydk::is_set(rttmonjitterstatscompletions.yfilter)
	|| ydk::is_set(rttmonjitterstatsoverthresholds.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofrtt.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsum.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsum2low.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsum2high.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttmin.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttmax.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivessdlow.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivessdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativessdlow.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativessdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivesdslow.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivesdshigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativesdslow.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativesdshigh.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketlosssd.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketlossds.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketoutofsequence.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketmia.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketlatearrival.yfilter)
	|| ydk::is_set(rttmonjitterstatserror.yfilter)
	|| ydk::is_set(rttmonjitterstatsbusies.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumsd.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2sdlow.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2sdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsowminsd.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxsd.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumds.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2dslow.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2dshigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsowminds.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxds.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofow.yfilter)
	|| ydk::is_set(rttmonjitterstatsowminsdnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxsdnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmindsnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxdsnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofmos.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofmos.yfilter)
	|| ydk::is_set(rttmonjitterstatsminoficpif.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxoficpif.yfilter)
	|| ydk::is_set(rttmonjitterstatsiajout.yfilter)
	|| ydk::is_set(rttmonjitterstatsiajin.yfilter)
	|| ydk::is_set(rttmonjitterstatsavgjitter.yfilter)
	|| ydk::is_set(rttmonjitterstatsavgjittersd.yfilter)
	|| ydk::is_set(rttmonjitterstatsavgjitterds.yfilter)
	|| ydk::is_set(rttmonjitterstatsunsyncrts.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsumhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumsdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumdshigh.yfilter);
}

std::string CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonJitterStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonJitterStatsEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonjitterstatsstarttimeindex, "rttMonJitterStatsStartTimeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonjitterstatsstarttimeindex.is_set || is_set(rttmonjitterstatsstarttimeindex.yfilter)) leaf_name_data.push_back(rttmonjitterstatsstarttimeindex.get_name_leafdata());
    if (rttmonjitterstatscompletions.is_set || is_set(rttmonjitterstatscompletions.yfilter)) leaf_name_data.push_back(rttmonjitterstatscompletions.get_name_leafdata());
    if (rttmonjitterstatsoverthresholds.is_set || is_set(rttmonjitterstatsoverthresholds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsoverthresholds.get_name_leafdata());
    if (rttmonjitterstatsnumofrtt.is_set || is_set(rttmonjitterstatsnumofrtt.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofrtt.get_name_leafdata());
    if (rttmonjitterstatsrttsum.is_set || is_set(rttmonjitterstatsrttsum.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsum.get_name_leafdata());
    if (rttmonjitterstatsrttsum2low.is_set || is_set(rttmonjitterstatsrttsum2low.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsum2low.get_name_leafdata());
    if (rttmonjitterstatsrttsum2high.is_set || is_set(rttmonjitterstatsrttsum2high.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsum2high.get_name_leafdata());
    if (rttmonjitterstatsrttmin.is_set || is_set(rttmonjitterstatsrttmin.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttmin.get_name_leafdata());
    if (rttmonjitterstatsrttmax.is_set || is_set(rttmonjitterstatsrttmax.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttmax.get_name_leafdata());
    if (rttmonjitterstatsminofpositivessd.is_set || is_set(rttmonjitterstatsminofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofpositivessd.get_name_leafdata());
    if (rttmonjitterstatsmaxofpositivessd.is_set || is_set(rttmonjitterstatsmaxofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofpositivessd.get_name_leafdata());
    if (rttmonjitterstatsnumofpositivessd.is_set || is_set(rttmonjitterstatsnumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofpositivessd.get_name_leafdata());
    if (rttmonjitterstatssumofpositivessd.is_set || is_set(rttmonjitterstatssumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofpositivessd.get_name_leafdata());
    if (rttmonjitterstatssum2positivessdlow.is_set || is_set(rttmonjitterstatssum2positivessdlow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivessdlow.get_name_leafdata());
    if (rttmonjitterstatssum2positivessdhigh.is_set || is_set(rttmonjitterstatssum2positivessdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivessdhigh.get_name_leafdata());
    if (rttmonjitterstatsminofnegativessd.is_set || is_set(rttmonjitterstatsminofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofnegativessd.get_name_leafdata());
    if (rttmonjitterstatsmaxofnegativessd.is_set || is_set(rttmonjitterstatsmaxofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofnegativessd.get_name_leafdata());
    if (rttmonjitterstatsnumofnegativessd.is_set || is_set(rttmonjitterstatsnumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofnegativessd.get_name_leafdata());
    if (rttmonjitterstatssumofnegativessd.is_set || is_set(rttmonjitterstatssumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofnegativessd.get_name_leafdata());
    if (rttmonjitterstatssum2negativessdlow.is_set || is_set(rttmonjitterstatssum2negativessdlow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativessdlow.get_name_leafdata());
    if (rttmonjitterstatssum2negativessdhigh.is_set || is_set(rttmonjitterstatssum2negativessdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativessdhigh.get_name_leafdata());
    if (rttmonjitterstatsminofpositivesds.is_set || is_set(rttmonjitterstatsminofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofpositivesds.get_name_leafdata());
    if (rttmonjitterstatsmaxofpositivesds.is_set || is_set(rttmonjitterstatsmaxofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofpositivesds.get_name_leafdata());
    if (rttmonjitterstatsnumofpositivesds.is_set || is_set(rttmonjitterstatsnumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofpositivesds.get_name_leafdata());
    if (rttmonjitterstatssumofpositivesds.is_set || is_set(rttmonjitterstatssumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofpositivesds.get_name_leafdata());
    if (rttmonjitterstatssum2positivesdslow.is_set || is_set(rttmonjitterstatssum2positivesdslow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivesdslow.get_name_leafdata());
    if (rttmonjitterstatssum2positivesdshigh.is_set || is_set(rttmonjitterstatssum2positivesdshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivesdshigh.get_name_leafdata());
    if (rttmonjitterstatsminofnegativesds.is_set || is_set(rttmonjitterstatsminofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofnegativesds.get_name_leafdata());
    if (rttmonjitterstatsmaxofnegativesds.is_set || is_set(rttmonjitterstatsmaxofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofnegativesds.get_name_leafdata());
    if (rttmonjitterstatsnumofnegativesds.is_set || is_set(rttmonjitterstatsnumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofnegativesds.get_name_leafdata());
    if (rttmonjitterstatssumofnegativesds.is_set || is_set(rttmonjitterstatssumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofnegativesds.get_name_leafdata());
    if (rttmonjitterstatssum2negativesdslow.is_set || is_set(rttmonjitterstatssum2negativesdslow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativesdslow.get_name_leafdata());
    if (rttmonjitterstatssum2negativesdshigh.is_set || is_set(rttmonjitterstatssum2negativesdshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativesdshigh.get_name_leafdata());
    if (rttmonjitterstatspacketlosssd.is_set || is_set(rttmonjitterstatspacketlosssd.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketlosssd.get_name_leafdata());
    if (rttmonjitterstatspacketlossds.is_set || is_set(rttmonjitterstatspacketlossds.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketlossds.get_name_leafdata());
    if (rttmonjitterstatspacketoutofsequence.is_set || is_set(rttmonjitterstatspacketoutofsequence.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketoutofsequence.get_name_leafdata());
    if (rttmonjitterstatspacketmia.is_set || is_set(rttmonjitterstatspacketmia.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketmia.get_name_leafdata());
    if (rttmonjitterstatspacketlatearrival.is_set || is_set(rttmonjitterstatspacketlatearrival.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketlatearrival.get_name_leafdata());
    if (rttmonjitterstatserror.is_set || is_set(rttmonjitterstatserror.yfilter)) leaf_name_data.push_back(rttmonjitterstatserror.get_name_leafdata());
    if (rttmonjitterstatsbusies.is_set || is_set(rttmonjitterstatsbusies.yfilter)) leaf_name_data.push_back(rttmonjitterstatsbusies.get_name_leafdata());
    if (rttmonjitterstatsowsumsd.is_set || is_set(rttmonjitterstatsowsumsd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumsd.get_name_leafdata());
    if (rttmonjitterstatsowsum2sdlow.is_set || is_set(rttmonjitterstatsowsum2sdlow.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2sdlow.get_name_leafdata());
    if (rttmonjitterstatsowsum2sdhigh.is_set || is_set(rttmonjitterstatsowsum2sdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2sdhigh.get_name_leafdata());
    if (rttmonjitterstatsowminsd.is_set || is_set(rttmonjitterstatsowminsd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowminsd.get_name_leafdata());
    if (rttmonjitterstatsowmaxsd.is_set || is_set(rttmonjitterstatsowmaxsd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxsd.get_name_leafdata());
    if (rttmonjitterstatsowsumds.is_set || is_set(rttmonjitterstatsowsumds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumds.get_name_leafdata());
    if (rttmonjitterstatsowsum2dslow.is_set || is_set(rttmonjitterstatsowsum2dslow.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2dslow.get_name_leafdata());
    if (rttmonjitterstatsowsum2dshigh.is_set || is_set(rttmonjitterstatsowsum2dshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2dshigh.get_name_leafdata());
    if (rttmonjitterstatsowminds.is_set || is_set(rttmonjitterstatsowminds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowminds.get_name_leafdata());
    if (rttmonjitterstatsowmaxds.is_set || is_set(rttmonjitterstatsowmaxds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxds.get_name_leafdata());
    if (rttmonjitterstatsnumofow.is_set || is_set(rttmonjitterstatsnumofow.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofow.get_name_leafdata());
    if (rttmonjitterstatsowminsdnew.is_set || is_set(rttmonjitterstatsowminsdnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowminsdnew.get_name_leafdata());
    if (rttmonjitterstatsowmaxsdnew.is_set || is_set(rttmonjitterstatsowmaxsdnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxsdnew.get_name_leafdata());
    if (rttmonjitterstatsowmindsnew.is_set || is_set(rttmonjitterstatsowmindsnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmindsnew.get_name_leafdata());
    if (rttmonjitterstatsowmaxdsnew.is_set || is_set(rttmonjitterstatsowmaxdsnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxdsnew.get_name_leafdata());
    if (rttmonjitterstatsminofmos.is_set || is_set(rttmonjitterstatsminofmos.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofmos.get_name_leafdata());
    if (rttmonjitterstatsmaxofmos.is_set || is_set(rttmonjitterstatsmaxofmos.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofmos.get_name_leafdata());
    if (rttmonjitterstatsminoficpif.is_set || is_set(rttmonjitterstatsminoficpif.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminoficpif.get_name_leafdata());
    if (rttmonjitterstatsmaxoficpif.is_set || is_set(rttmonjitterstatsmaxoficpif.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxoficpif.get_name_leafdata());
    if (rttmonjitterstatsiajout.is_set || is_set(rttmonjitterstatsiajout.yfilter)) leaf_name_data.push_back(rttmonjitterstatsiajout.get_name_leafdata());
    if (rttmonjitterstatsiajin.is_set || is_set(rttmonjitterstatsiajin.yfilter)) leaf_name_data.push_back(rttmonjitterstatsiajin.get_name_leafdata());
    if (rttmonjitterstatsavgjitter.is_set || is_set(rttmonjitterstatsavgjitter.yfilter)) leaf_name_data.push_back(rttmonjitterstatsavgjitter.get_name_leafdata());
    if (rttmonjitterstatsavgjittersd.is_set || is_set(rttmonjitterstatsavgjittersd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsavgjittersd.get_name_leafdata());
    if (rttmonjitterstatsavgjitterds.is_set || is_set(rttmonjitterstatsavgjitterds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsavgjitterds.get_name_leafdata());
    if (rttmonjitterstatsunsyncrts.is_set || is_set(rttmonjitterstatsunsyncrts.yfilter)) leaf_name_data.push_back(rttmonjitterstatsunsyncrts.get_name_leafdata());
    if (rttmonjitterstatsrttsumhigh.is_set || is_set(rttmonjitterstatsrttsumhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsumhigh.get_name_leafdata());
    if (rttmonjitterstatsowsumsdhigh.is_set || is_set(rttmonjitterstatsowsumsdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumsdhigh.get_name_leafdata());
    if (rttmonjitterstatsowsumdshigh.is_set || is_set(rttmonjitterstatsowsumdshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumdshigh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsStartTimeIndex")
    {
        rttmonjitterstatsstarttimeindex = value;
        rttmonjitterstatsstarttimeindex.value_namespace = name_space;
        rttmonjitterstatsstarttimeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsCompletions")
    {
        rttmonjitterstatscompletions = value;
        rttmonjitterstatscompletions.value_namespace = name_space;
        rttmonjitterstatscompletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOverThresholds")
    {
        rttmonjitterstatsoverthresholds = value;
        rttmonjitterstatsoverthresholds.value_namespace = name_space;
        rttmonjitterstatsoverthresholds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfRTT")
    {
        rttmonjitterstatsnumofrtt = value;
        rttmonjitterstatsnumofrtt.value_namespace = name_space;
        rttmonjitterstatsnumofrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSum")
    {
        rttmonjitterstatsrttsum = value;
        rttmonjitterstatsrttsum.value_namespace = name_space;
        rttmonjitterstatsrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSum2Low")
    {
        rttmonjitterstatsrttsum2low = value;
        rttmonjitterstatsrttsum2low.value_namespace = name_space;
        rttmonjitterstatsrttsum2low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSum2High")
    {
        rttmonjitterstatsrttsum2high = value;
        rttmonjitterstatsrttsum2high.value_namespace = name_space;
        rttmonjitterstatsrttsum2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTMin")
    {
        rttmonjitterstatsrttmin = value;
        rttmonjitterstatsrttmin.value_namespace = name_space;
        rttmonjitterstatsrttmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTMax")
    {
        rttmonjitterstatsrttmax = value;
        rttmonjitterstatsrttmax.value_namespace = name_space;
        rttmonjitterstatsrttmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesSD")
    {
        rttmonjitterstatsminofpositivessd = value;
        rttmonjitterstatsminofpositivessd.value_namespace = name_space;
        rttmonjitterstatsminofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesSD")
    {
        rttmonjitterstatsmaxofpositivessd = value;
        rttmonjitterstatsmaxofpositivessd.value_namespace = name_space;
        rttmonjitterstatsmaxofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesSD")
    {
        rttmonjitterstatsnumofpositivessd = value;
        rttmonjitterstatsnumofpositivessd.value_namespace = name_space;
        rttmonjitterstatsnumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesSD")
    {
        rttmonjitterstatssumofpositivessd = value;
        rttmonjitterstatssumofpositivessd.value_namespace = name_space;
        rttmonjitterstatssumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDLow")
    {
        rttmonjitterstatssum2positivessdlow = value;
        rttmonjitterstatssum2positivessdlow.value_namespace = name_space;
        rttmonjitterstatssum2positivessdlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDHigh")
    {
        rttmonjitterstatssum2positivessdhigh = value;
        rttmonjitterstatssum2positivessdhigh.value_namespace = name_space;
        rttmonjitterstatssum2positivessdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesSD")
    {
        rttmonjitterstatsminofnegativessd = value;
        rttmonjitterstatsminofnegativessd.value_namespace = name_space;
        rttmonjitterstatsminofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesSD")
    {
        rttmonjitterstatsmaxofnegativessd = value;
        rttmonjitterstatsmaxofnegativessd.value_namespace = name_space;
        rttmonjitterstatsmaxofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesSD")
    {
        rttmonjitterstatsnumofnegativessd = value;
        rttmonjitterstatsnumofnegativessd.value_namespace = name_space;
        rttmonjitterstatsnumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesSD")
    {
        rttmonjitterstatssumofnegativessd = value;
        rttmonjitterstatssumofnegativessd.value_namespace = name_space;
        rttmonjitterstatssumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDLow")
    {
        rttmonjitterstatssum2negativessdlow = value;
        rttmonjitterstatssum2negativessdlow.value_namespace = name_space;
        rttmonjitterstatssum2negativessdlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDHigh")
    {
        rttmonjitterstatssum2negativessdhigh = value;
        rttmonjitterstatssum2negativessdhigh.value_namespace = name_space;
        rttmonjitterstatssum2negativessdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesDS")
    {
        rttmonjitterstatsminofpositivesds = value;
        rttmonjitterstatsminofpositivesds.value_namespace = name_space;
        rttmonjitterstatsminofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesDS")
    {
        rttmonjitterstatsmaxofpositivesds = value;
        rttmonjitterstatsmaxofpositivesds.value_namespace = name_space;
        rttmonjitterstatsmaxofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesDS")
    {
        rttmonjitterstatsnumofpositivesds = value;
        rttmonjitterstatsnumofpositivesds.value_namespace = name_space;
        rttmonjitterstatsnumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesDS")
    {
        rttmonjitterstatssumofpositivesds = value;
        rttmonjitterstatssumofpositivesds.value_namespace = name_space;
        rttmonjitterstatssumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSLow")
    {
        rttmonjitterstatssum2positivesdslow = value;
        rttmonjitterstatssum2positivesdslow.value_namespace = name_space;
        rttmonjitterstatssum2positivesdslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSHigh")
    {
        rttmonjitterstatssum2positivesdshigh = value;
        rttmonjitterstatssum2positivesdshigh.value_namespace = name_space;
        rttmonjitterstatssum2positivesdshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesDS")
    {
        rttmonjitterstatsminofnegativesds = value;
        rttmonjitterstatsminofnegativesds.value_namespace = name_space;
        rttmonjitterstatsminofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesDS")
    {
        rttmonjitterstatsmaxofnegativesds = value;
        rttmonjitterstatsmaxofnegativesds.value_namespace = name_space;
        rttmonjitterstatsmaxofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesDS")
    {
        rttmonjitterstatsnumofnegativesds = value;
        rttmonjitterstatsnumofnegativesds.value_namespace = name_space;
        rttmonjitterstatsnumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesDS")
    {
        rttmonjitterstatssumofnegativesds = value;
        rttmonjitterstatssumofnegativesds.value_namespace = name_space;
        rttmonjitterstatssumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSLow")
    {
        rttmonjitterstatssum2negativesdslow = value;
        rttmonjitterstatssum2negativesdslow.value_namespace = name_space;
        rttmonjitterstatssum2negativesdslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSHigh")
    {
        rttmonjitterstatssum2negativesdshigh = value;
        rttmonjitterstatssum2negativesdshigh.value_namespace = name_space;
        rttmonjitterstatssum2negativesdshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketLossSD")
    {
        rttmonjitterstatspacketlosssd = value;
        rttmonjitterstatspacketlosssd.value_namespace = name_space;
        rttmonjitterstatspacketlosssd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketLossDS")
    {
        rttmonjitterstatspacketlossds = value;
        rttmonjitterstatspacketlossds.value_namespace = name_space;
        rttmonjitterstatspacketlossds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketOutOfSequence")
    {
        rttmonjitterstatspacketoutofsequence = value;
        rttmonjitterstatspacketoutofsequence.value_namespace = name_space;
        rttmonjitterstatspacketoutofsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketMIA")
    {
        rttmonjitterstatspacketmia = value;
        rttmonjitterstatspacketmia.value_namespace = name_space;
        rttmonjitterstatspacketmia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketLateArrival")
    {
        rttmonjitterstatspacketlatearrival = value;
        rttmonjitterstatspacketlatearrival.value_namespace = name_space;
        rttmonjitterstatspacketlatearrival.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsError")
    {
        rttmonjitterstatserror = value;
        rttmonjitterstatserror.value_namespace = name_space;
        rttmonjitterstatserror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsBusies")
    {
        rttmonjitterstatsbusies = value;
        rttmonjitterstatsbusies.value_namespace = name_space;
        rttmonjitterstatsbusies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumSD")
    {
        rttmonjitterstatsowsumsd = value;
        rttmonjitterstatsowsumsd.value_namespace = name_space;
        rttmonjitterstatsowsumsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDLow")
    {
        rttmonjitterstatsowsum2sdlow = value;
        rttmonjitterstatsowsum2sdlow.value_namespace = name_space;
        rttmonjitterstatsowsum2sdlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDHigh")
    {
        rttmonjitterstatsowsum2sdhigh = value;
        rttmonjitterstatsowsum2sdhigh.value_namespace = name_space;
        rttmonjitterstatsowsum2sdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinSD")
    {
        rttmonjitterstatsowminsd = value;
        rttmonjitterstatsowminsd.value_namespace = name_space;
        rttmonjitterstatsowminsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxSD")
    {
        rttmonjitterstatsowmaxsd = value;
        rttmonjitterstatsowmaxsd.value_namespace = name_space;
        rttmonjitterstatsowmaxsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumDS")
    {
        rttmonjitterstatsowsumds = value;
        rttmonjitterstatsowsumds.value_namespace = name_space;
        rttmonjitterstatsowsumds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSLow")
    {
        rttmonjitterstatsowsum2dslow = value;
        rttmonjitterstatsowsum2dslow.value_namespace = name_space;
        rttmonjitterstatsowsum2dslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSHigh")
    {
        rttmonjitterstatsowsum2dshigh = value;
        rttmonjitterstatsowsum2dshigh.value_namespace = name_space;
        rttmonjitterstatsowsum2dshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinDS")
    {
        rttmonjitterstatsowminds = value;
        rttmonjitterstatsowminds.value_namespace = name_space;
        rttmonjitterstatsowminds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxDS")
    {
        rttmonjitterstatsowmaxds = value;
        rttmonjitterstatsowmaxds.value_namespace = name_space;
        rttmonjitterstatsowmaxds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfOW")
    {
        rttmonjitterstatsnumofow = value;
        rttmonjitterstatsnumofow.value_namespace = name_space;
        rttmonjitterstatsnumofow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinSDNew")
    {
        rttmonjitterstatsowminsdnew = value;
        rttmonjitterstatsowminsdnew.value_namespace = name_space;
        rttmonjitterstatsowminsdnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxSDNew")
    {
        rttmonjitterstatsowmaxsdnew = value;
        rttmonjitterstatsowmaxsdnew.value_namespace = name_space;
        rttmonjitterstatsowmaxsdnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinDSNew")
    {
        rttmonjitterstatsowmindsnew = value;
        rttmonjitterstatsowmindsnew.value_namespace = name_space;
        rttmonjitterstatsowmindsnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxDSNew")
    {
        rttmonjitterstatsowmaxdsnew = value;
        rttmonjitterstatsowmaxdsnew.value_namespace = name_space;
        rttmonjitterstatsowmaxdsnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfMOS")
    {
        rttmonjitterstatsminofmos = value;
        rttmonjitterstatsminofmos.value_namespace = name_space;
        rttmonjitterstatsminofmos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfMOS")
    {
        rttmonjitterstatsmaxofmos = value;
        rttmonjitterstatsmaxofmos.value_namespace = name_space;
        rttmonjitterstatsmaxofmos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfICPIF")
    {
        rttmonjitterstatsminoficpif = value;
        rttmonjitterstatsminoficpif.value_namespace = name_space;
        rttmonjitterstatsminoficpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfICPIF")
    {
        rttmonjitterstatsmaxoficpif = value;
        rttmonjitterstatsmaxoficpif.value_namespace = name_space;
        rttmonjitterstatsmaxoficpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsIAJOut")
    {
        rttmonjitterstatsiajout = value;
        rttmonjitterstatsiajout.value_namespace = name_space;
        rttmonjitterstatsiajout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsIAJIn")
    {
        rttmonjitterstatsiajin = value;
        rttmonjitterstatsiajin.value_namespace = name_space;
        rttmonjitterstatsiajin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsAvgJitter")
    {
        rttmonjitterstatsavgjitter = value;
        rttmonjitterstatsavgjitter.value_namespace = name_space;
        rttmonjitterstatsavgjitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsAvgJitterSD")
    {
        rttmonjitterstatsavgjittersd = value;
        rttmonjitterstatsavgjittersd.value_namespace = name_space;
        rttmonjitterstatsavgjittersd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsAvgJitterDS")
    {
        rttmonjitterstatsavgjitterds = value;
        rttmonjitterstatsavgjitterds.value_namespace = name_space;
        rttmonjitterstatsavgjitterds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsUnSyncRTs")
    {
        rttmonjitterstatsunsyncrts = value;
        rttmonjitterstatsunsyncrts.value_namespace = name_space;
        rttmonjitterstatsunsyncrts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSumHigh")
    {
        rttmonjitterstatsrttsumhigh = value;
        rttmonjitterstatsrttsumhigh.value_namespace = name_space;
        rttmonjitterstatsrttsumhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumSDHigh")
    {
        rttmonjitterstatsowsumsdhigh = value;
        rttmonjitterstatsowsumsdhigh.value_namespace = name_space;
        rttmonjitterstatsowsumsdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumDSHigh")
    {
        rttmonjitterstatsowsumdshigh = value;
        rttmonjitterstatsowsumdshigh.value_namespace = name_space;
        rttmonjitterstatsowsumdshigh.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsStartTimeIndex")
    {
        rttmonjitterstatsstarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsCompletions")
    {
        rttmonjitterstatscompletions.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOverThresholds")
    {
        rttmonjitterstatsoverthresholds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfRTT")
    {
        rttmonjitterstatsnumofrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSum")
    {
        rttmonjitterstatsrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSum2Low")
    {
        rttmonjitterstatsrttsum2low.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSum2High")
    {
        rttmonjitterstatsrttsum2high.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTMin")
    {
        rttmonjitterstatsrttmin.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTMax")
    {
        rttmonjitterstatsrttmax.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesSD")
    {
        rttmonjitterstatsminofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesSD")
    {
        rttmonjitterstatsmaxofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesSD")
    {
        rttmonjitterstatsnumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesSD")
    {
        rttmonjitterstatssumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDLow")
    {
        rttmonjitterstatssum2positivessdlow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDHigh")
    {
        rttmonjitterstatssum2positivessdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesSD")
    {
        rttmonjitterstatsminofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesSD")
    {
        rttmonjitterstatsmaxofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesSD")
    {
        rttmonjitterstatsnumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesSD")
    {
        rttmonjitterstatssumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDLow")
    {
        rttmonjitterstatssum2negativessdlow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDHigh")
    {
        rttmonjitterstatssum2negativessdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesDS")
    {
        rttmonjitterstatsminofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesDS")
    {
        rttmonjitterstatsmaxofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesDS")
    {
        rttmonjitterstatsnumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesDS")
    {
        rttmonjitterstatssumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSLow")
    {
        rttmonjitterstatssum2positivesdslow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSHigh")
    {
        rttmonjitterstatssum2positivesdshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesDS")
    {
        rttmonjitterstatsminofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesDS")
    {
        rttmonjitterstatsmaxofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesDS")
    {
        rttmonjitterstatsnumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesDS")
    {
        rttmonjitterstatssumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSLow")
    {
        rttmonjitterstatssum2negativesdslow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSHigh")
    {
        rttmonjitterstatssum2negativesdshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketLossSD")
    {
        rttmonjitterstatspacketlosssd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketLossDS")
    {
        rttmonjitterstatspacketlossds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketOutOfSequence")
    {
        rttmonjitterstatspacketoutofsequence.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketMIA")
    {
        rttmonjitterstatspacketmia.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketLateArrival")
    {
        rttmonjitterstatspacketlatearrival.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsError")
    {
        rttmonjitterstatserror.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsBusies")
    {
        rttmonjitterstatsbusies.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumSD")
    {
        rttmonjitterstatsowsumsd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDLow")
    {
        rttmonjitterstatsowsum2sdlow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDHigh")
    {
        rttmonjitterstatsowsum2sdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinSD")
    {
        rttmonjitterstatsowminsd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxSD")
    {
        rttmonjitterstatsowmaxsd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumDS")
    {
        rttmonjitterstatsowsumds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSLow")
    {
        rttmonjitterstatsowsum2dslow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSHigh")
    {
        rttmonjitterstatsowsum2dshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinDS")
    {
        rttmonjitterstatsowminds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxDS")
    {
        rttmonjitterstatsowmaxds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfOW")
    {
        rttmonjitterstatsnumofow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinSDNew")
    {
        rttmonjitterstatsowminsdnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxSDNew")
    {
        rttmonjitterstatsowmaxsdnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinDSNew")
    {
        rttmonjitterstatsowmindsnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxDSNew")
    {
        rttmonjitterstatsowmaxdsnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfMOS")
    {
        rttmonjitterstatsminofmos.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfMOS")
    {
        rttmonjitterstatsmaxofmos.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfICPIF")
    {
        rttmonjitterstatsminoficpif.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfICPIF")
    {
        rttmonjitterstatsmaxoficpif.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsIAJOut")
    {
        rttmonjitterstatsiajout.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsIAJIn")
    {
        rttmonjitterstatsiajin.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsAvgJitter")
    {
        rttmonjitterstatsavgjitter.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsAvgJitterSD")
    {
        rttmonjitterstatsavgjittersd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsAvgJitterDS")
    {
        rttmonjitterstatsavgjitterds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsUnSyncRTs")
    {
        rttmonjitterstatsunsyncrts.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSumHigh")
    {
        rttmonjitterstatsrttsumhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumSDHigh")
    {
        rttmonjitterstatsowsumsdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumDSHigh")
    {
        rttmonjitterstatsowsumdshigh.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonJitterStatsStartTimeIndex" || name == "rttMonJitterStatsCompletions" || name == "rttMonJitterStatsOverThresholds" || name == "rttMonJitterStatsNumOfRTT" || name == "rttMonJitterStatsRTTSum" || name == "rttMonJitterStatsRTTSum2Low" || name == "rttMonJitterStatsRTTSum2High" || name == "rttMonJitterStatsRTTMin" || name == "rttMonJitterStatsRTTMax" || name == "rttMonJitterStatsMinOfPositivesSD" || name == "rttMonJitterStatsMaxOfPositivesSD" || name == "rttMonJitterStatsNumOfPositivesSD" || name == "rttMonJitterStatsSumOfPositivesSD" || name == "rttMonJitterStatsSum2PositivesSDLow" || name == "rttMonJitterStatsSum2PositivesSDHigh" || name == "rttMonJitterStatsMinOfNegativesSD" || name == "rttMonJitterStatsMaxOfNegativesSD" || name == "rttMonJitterStatsNumOfNegativesSD" || name == "rttMonJitterStatsSumOfNegativesSD" || name == "rttMonJitterStatsSum2NegativesSDLow" || name == "rttMonJitterStatsSum2NegativesSDHigh" || name == "rttMonJitterStatsMinOfPositivesDS" || name == "rttMonJitterStatsMaxOfPositivesDS" || name == "rttMonJitterStatsNumOfPositivesDS" || name == "rttMonJitterStatsSumOfPositivesDS" || name == "rttMonJitterStatsSum2PositivesDSLow" || name == "rttMonJitterStatsSum2PositivesDSHigh" || name == "rttMonJitterStatsMinOfNegativesDS" || name == "rttMonJitterStatsMaxOfNegativesDS" || name == "rttMonJitterStatsNumOfNegativesDS" || name == "rttMonJitterStatsSumOfNegativesDS" || name == "rttMonJitterStatsSum2NegativesDSLow" || name == "rttMonJitterStatsSum2NegativesDSHigh" || name == "rttMonJitterStatsPacketLossSD" || name == "rttMonJitterStatsPacketLossDS" || name == "rttMonJitterStatsPacketOutOfSequence" || name == "rttMonJitterStatsPacketMIA" || name == "rttMonJitterStatsPacketLateArrival" || name == "rttMonJitterStatsError" || name == "rttMonJitterStatsBusies" || name == "rttMonJitterStatsOWSumSD" || name == "rttMonJitterStatsOWSum2SDLow" || name == "rttMonJitterStatsOWSum2SDHigh" || name == "rttMonJitterStatsOWMinSD" || name == "rttMonJitterStatsOWMaxSD" || name == "rttMonJitterStatsOWSumDS" || name == "rttMonJitterStatsOWSum2DSLow" || name == "rttMonJitterStatsOWSum2DSHigh" || name == "rttMonJitterStatsOWMinDS" || name == "rttMonJitterStatsOWMaxDS" || name == "rttMonJitterStatsNumOfOW" || name == "rttMonJitterStatsOWMinSDNew" || name == "rttMonJitterStatsOWMaxSDNew" || name == "rttMonJitterStatsOWMinDSNew" || name == "rttMonJitterStatsOWMaxDSNew" || name == "rttMonJitterStatsMinOfMOS" || name == "rttMonJitterStatsMaxOfMOS" || name == "rttMonJitterStatsMinOfICPIF" || name == "rttMonJitterStatsMaxOfICPIF" || name == "rttMonJitterStatsIAJOut" || name == "rttMonJitterStatsIAJIn" || name == "rttMonJitterStatsAvgJitter" || name == "rttMonJitterStatsAvgJitterSD" || name == "rttMonJitterStatsAvgJitterDS" || name == "rttMonJitterStatsUnSyncRTs" || name == "rttMonJitterStatsRTTSumHigh" || name == "rttMonJitterStatsOWSumSDHigh" || name == "rttMonJitterStatsOWSumDSHigh")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsTable()
    :
    rttmonlpdgrpstatsentry(this, {"rttmonlpdgrpstatsgroupindex", "rttmonlpdgrpstatsstarttimeindex"})
{

    yang_name = "rttMonLpdGrpStatsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonLpdGrpStatsTable::~RttMonLpdGrpStatsTable()
{
}

bool CISCORTTMONMIB::RttMonLpdGrpStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonlpdgrpstatsentry.len(); index++)
    {
        if(rttmonlpdgrpstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonLpdGrpStatsTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonlpdgrpstatsentry.len(); index++)
    {
        if(rttmonlpdgrpstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonLpdGrpStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonLpdGrpStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLpdGrpStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonLpdGrpStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonLpdGrpStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonLpdGrpStatsEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry>();
        c->parent = this;
        rttmonlpdgrpstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonLpdGrpStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonlpdgrpstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonLpdGrpStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonLpdGrpStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonLpdGrpStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLpdGrpStatsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::RttMonLpdGrpStatsEntry()
    :
    rttmonlpdgrpstatsgroupindex{YType::int32, "rttMonLpdGrpStatsGroupIndex"},
    rttmonlpdgrpstatsstarttimeindex{YType::uint32, "rttMonLpdGrpStatsStartTimeIndex"},
    rttmonlpdgrpstatstargetpe{YType::str, "rttMonLpdGrpStatsTargetPE"},
    rttmonlpdgrpstatsnumofpass{YType::int32, "rttMonLpdGrpStatsNumOfPass"},
    rttmonlpdgrpstatsnumoffail{YType::int32, "rttMonLpdGrpStatsNumOfFail"},
    rttmonlpdgrpstatsnumoftimeout{YType::int32, "rttMonLpdGrpStatsNumOfTimeout"},
    rttmonlpdgrpstatsavgrtt{YType::int32, "rttMonLpdGrpStatsAvgRTT"},
    rttmonlpdgrpstatsminrtt{YType::int32, "rttMonLpdGrpStatsMinRTT"},
    rttmonlpdgrpstatsmaxrtt{YType::int32, "rttMonLpdGrpStatsMaxRTT"},
    rttmonlpdgrpstatsminnumpaths{YType::int32, "rttMonLpdGrpStatsMinNumPaths"},
    rttmonlpdgrpstatsmaxnumpaths{YType::int32, "rttMonLpdGrpStatsMaxNumPaths"},
    rttmonlpdgrpstatslpdstarttime{YType::uint32, "rttMonLpdGrpStatsLPDStartTime"},
    rttmonlpdgrpstatslpdfailoccurred{YType::boolean, "rttMonLpdGrpStatsLPDFailOccurred"},
    rttmonlpdgrpstatslpdfailcause{YType::enumeration, "rttMonLpdGrpStatsLPDFailCause"},
    rttmonlpdgrpstatslpdcomptime{YType::int32, "rttMonLpdGrpStatsLPDCompTime"},
    rttmonlpdgrpstatsgroupstatus{YType::enumeration, "rttMonLpdGrpStatsGroupStatus"},
    rttmonlpdgrpstatsgroupprobeindex{YType::int32, "rttMonLpdGrpStatsGroupProbeIndex"},
    rttmonlpdgrpstatspathids{YType::str, "rttMonLpdGrpStatsPathIds"},
    rttmonlpdgrpstatsprobestatus{YType::str, "rttMonLpdGrpStatsProbeStatus"},
    rttmonlpdgrpstatsresettime{YType::uint32, "rttMonLpdGrpStatsResetTime"}
{

    yang_name = "rttMonLpdGrpStatsEntry"; yang_parent_name = "rttMonLpdGrpStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::~RttMonLpdGrpStatsEntry()
{
}

bool CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonlpdgrpstatsgroupindex.is_set
	|| rttmonlpdgrpstatsstarttimeindex.is_set
	|| rttmonlpdgrpstatstargetpe.is_set
	|| rttmonlpdgrpstatsnumofpass.is_set
	|| rttmonlpdgrpstatsnumoffail.is_set
	|| rttmonlpdgrpstatsnumoftimeout.is_set
	|| rttmonlpdgrpstatsavgrtt.is_set
	|| rttmonlpdgrpstatsminrtt.is_set
	|| rttmonlpdgrpstatsmaxrtt.is_set
	|| rttmonlpdgrpstatsminnumpaths.is_set
	|| rttmonlpdgrpstatsmaxnumpaths.is_set
	|| rttmonlpdgrpstatslpdstarttime.is_set
	|| rttmonlpdgrpstatslpdfailoccurred.is_set
	|| rttmonlpdgrpstatslpdfailcause.is_set
	|| rttmonlpdgrpstatslpdcomptime.is_set
	|| rttmonlpdgrpstatsgroupstatus.is_set
	|| rttmonlpdgrpstatsgroupprobeindex.is_set
	|| rttmonlpdgrpstatspathids.is_set
	|| rttmonlpdgrpstatsprobestatus.is_set
	|| rttmonlpdgrpstatsresettime.is_set;
}

bool CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsgroupindex.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsstarttimeindex.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatstargetpe.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsnumofpass.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsnumoffail.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsnumoftimeout.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsavgrtt.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsminrtt.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsmaxrtt.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsminnumpaths.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsmaxnumpaths.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdstarttime.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdfailoccurred.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdfailcause.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdcomptime.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsgroupstatus.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsgroupprobeindex.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatspathids.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsprobestatus.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsresettime.yfilter);
}

std::string CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonLpdGrpStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLpdGrpStatsEntry";
    ADD_KEY_TOKEN(rttmonlpdgrpstatsgroupindex, "rttMonLpdGrpStatsGroupIndex");
    ADD_KEY_TOKEN(rttmonlpdgrpstatsstarttimeindex, "rttMonLpdGrpStatsStartTimeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonlpdgrpstatsgroupindex.is_set || is_set(rttmonlpdgrpstatsgroupindex.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsgroupindex.get_name_leafdata());
    if (rttmonlpdgrpstatsstarttimeindex.is_set || is_set(rttmonlpdgrpstatsstarttimeindex.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsstarttimeindex.get_name_leafdata());
    if (rttmonlpdgrpstatstargetpe.is_set || is_set(rttmonlpdgrpstatstargetpe.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatstargetpe.get_name_leafdata());
    if (rttmonlpdgrpstatsnumofpass.is_set || is_set(rttmonlpdgrpstatsnumofpass.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsnumofpass.get_name_leafdata());
    if (rttmonlpdgrpstatsnumoffail.is_set || is_set(rttmonlpdgrpstatsnumoffail.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsnumoffail.get_name_leafdata());
    if (rttmonlpdgrpstatsnumoftimeout.is_set || is_set(rttmonlpdgrpstatsnumoftimeout.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsnumoftimeout.get_name_leafdata());
    if (rttmonlpdgrpstatsavgrtt.is_set || is_set(rttmonlpdgrpstatsavgrtt.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsavgrtt.get_name_leafdata());
    if (rttmonlpdgrpstatsminrtt.is_set || is_set(rttmonlpdgrpstatsminrtt.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsminrtt.get_name_leafdata());
    if (rttmonlpdgrpstatsmaxrtt.is_set || is_set(rttmonlpdgrpstatsmaxrtt.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsmaxrtt.get_name_leafdata());
    if (rttmonlpdgrpstatsminnumpaths.is_set || is_set(rttmonlpdgrpstatsminnumpaths.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsminnumpaths.get_name_leafdata());
    if (rttmonlpdgrpstatsmaxnumpaths.is_set || is_set(rttmonlpdgrpstatsmaxnumpaths.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsmaxnumpaths.get_name_leafdata());
    if (rttmonlpdgrpstatslpdstarttime.is_set || is_set(rttmonlpdgrpstatslpdstarttime.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdstarttime.get_name_leafdata());
    if (rttmonlpdgrpstatslpdfailoccurred.is_set || is_set(rttmonlpdgrpstatslpdfailoccurred.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdfailoccurred.get_name_leafdata());
    if (rttmonlpdgrpstatslpdfailcause.is_set || is_set(rttmonlpdgrpstatslpdfailcause.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdfailcause.get_name_leafdata());
    if (rttmonlpdgrpstatslpdcomptime.is_set || is_set(rttmonlpdgrpstatslpdcomptime.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdcomptime.get_name_leafdata());
    if (rttmonlpdgrpstatsgroupstatus.is_set || is_set(rttmonlpdgrpstatsgroupstatus.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsgroupstatus.get_name_leafdata());
    if (rttmonlpdgrpstatsgroupprobeindex.is_set || is_set(rttmonlpdgrpstatsgroupprobeindex.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsgroupprobeindex.get_name_leafdata());
    if (rttmonlpdgrpstatspathids.is_set || is_set(rttmonlpdgrpstatspathids.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatspathids.get_name_leafdata());
    if (rttmonlpdgrpstatsprobestatus.is_set || is_set(rttmonlpdgrpstatsprobestatus.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsprobestatus.get_name_leafdata());
    if (rttmonlpdgrpstatsresettime.is_set || is_set(rttmonlpdgrpstatsresettime.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsresettime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonLpdGrpStatsGroupIndex")
    {
        rttmonlpdgrpstatsgroupindex = value;
        rttmonlpdgrpstatsgroupindex.value_namespace = name_space;
        rttmonlpdgrpstatsgroupindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsStartTimeIndex")
    {
        rttmonlpdgrpstatsstarttimeindex = value;
        rttmonlpdgrpstatsstarttimeindex.value_namespace = name_space;
        rttmonlpdgrpstatsstarttimeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsTargetPE")
    {
        rttmonlpdgrpstatstargetpe = value;
        rttmonlpdgrpstatstargetpe.value_namespace = name_space;
        rttmonlpdgrpstatstargetpe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfPass")
    {
        rttmonlpdgrpstatsnumofpass = value;
        rttmonlpdgrpstatsnumofpass.value_namespace = name_space;
        rttmonlpdgrpstatsnumofpass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfFail")
    {
        rttmonlpdgrpstatsnumoffail = value;
        rttmonlpdgrpstatsnumoffail.value_namespace = name_space;
        rttmonlpdgrpstatsnumoffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfTimeout")
    {
        rttmonlpdgrpstatsnumoftimeout = value;
        rttmonlpdgrpstatsnumoftimeout.value_namespace = name_space;
        rttmonlpdgrpstatsnumoftimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsAvgRTT")
    {
        rttmonlpdgrpstatsavgrtt = value;
        rttmonlpdgrpstatsavgrtt.value_namespace = name_space;
        rttmonlpdgrpstatsavgrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsMinRTT")
    {
        rttmonlpdgrpstatsminrtt = value;
        rttmonlpdgrpstatsminrtt.value_namespace = name_space;
        rttmonlpdgrpstatsminrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsMaxRTT")
    {
        rttmonlpdgrpstatsmaxrtt = value;
        rttmonlpdgrpstatsmaxrtt.value_namespace = name_space;
        rttmonlpdgrpstatsmaxrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsMinNumPaths")
    {
        rttmonlpdgrpstatsminnumpaths = value;
        rttmonlpdgrpstatsminnumpaths.value_namespace = name_space;
        rttmonlpdgrpstatsminnumpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsMaxNumPaths")
    {
        rttmonlpdgrpstatsmaxnumpaths = value;
        rttmonlpdgrpstatsmaxnumpaths.value_namespace = name_space;
        rttmonlpdgrpstatsmaxnumpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDStartTime")
    {
        rttmonlpdgrpstatslpdstarttime = value;
        rttmonlpdgrpstatslpdstarttime.value_namespace = name_space;
        rttmonlpdgrpstatslpdstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailOccurred")
    {
        rttmonlpdgrpstatslpdfailoccurred = value;
        rttmonlpdgrpstatslpdfailoccurred.value_namespace = name_space;
        rttmonlpdgrpstatslpdfailoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailCause")
    {
        rttmonlpdgrpstatslpdfailcause = value;
        rttmonlpdgrpstatslpdfailcause.value_namespace = name_space;
        rttmonlpdgrpstatslpdfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDCompTime")
    {
        rttmonlpdgrpstatslpdcomptime = value;
        rttmonlpdgrpstatslpdcomptime.value_namespace = name_space;
        rttmonlpdgrpstatslpdcomptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsGroupStatus")
    {
        rttmonlpdgrpstatsgroupstatus = value;
        rttmonlpdgrpstatsgroupstatus.value_namespace = name_space;
        rttmonlpdgrpstatsgroupstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsGroupProbeIndex")
    {
        rttmonlpdgrpstatsgroupprobeindex = value;
        rttmonlpdgrpstatsgroupprobeindex.value_namespace = name_space;
        rttmonlpdgrpstatsgroupprobeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsPathIds")
    {
        rttmonlpdgrpstatspathids = value;
        rttmonlpdgrpstatspathids.value_namespace = name_space;
        rttmonlpdgrpstatspathids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsProbeStatus")
    {
        rttmonlpdgrpstatsprobestatus = value;
        rttmonlpdgrpstatsprobestatus.value_namespace = name_space;
        rttmonlpdgrpstatsprobestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsResetTime")
    {
        rttmonlpdgrpstatsresettime = value;
        rttmonlpdgrpstatsresettime.value_namespace = name_space;
        rttmonlpdgrpstatsresettime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonLpdGrpStatsGroupIndex")
    {
        rttmonlpdgrpstatsgroupindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsStartTimeIndex")
    {
        rttmonlpdgrpstatsstarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsTargetPE")
    {
        rttmonlpdgrpstatstargetpe.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfPass")
    {
        rttmonlpdgrpstatsnumofpass.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfFail")
    {
        rttmonlpdgrpstatsnumoffail.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfTimeout")
    {
        rttmonlpdgrpstatsnumoftimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsAvgRTT")
    {
        rttmonlpdgrpstatsavgrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMinRTT")
    {
        rttmonlpdgrpstatsminrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMaxRTT")
    {
        rttmonlpdgrpstatsmaxrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMinNumPaths")
    {
        rttmonlpdgrpstatsminnumpaths.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMaxNumPaths")
    {
        rttmonlpdgrpstatsmaxnumpaths.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDStartTime")
    {
        rttmonlpdgrpstatslpdstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailOccurred")
    {
        rttmonlpdgrpstatslpdfailoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailCause")
    {
        rttmonlpdgrpstatslpdfailcause.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDCompTime")
    {
        rttmonlpdgrpstatslpdcomptime.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsGroupStatus")
    {
        rttmonlpdgrpstatsgroupstatus.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsGroupProbeIndex")
    {
        rttmonlpdgrpstatsgroupprobeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsPathIds")
    {
        rttmonlpdgrpstatspathids.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsProbeStatus")
    {
        rttmonlpdgrpstatsprobestatus.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsResetTime")
    {
        rttmonlpdgrpstatsresettime.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLpdGrpStatsGroupIndex" || name == "rttMonLpdGrpStatsStartTimeIndex" || name == "rttMonLpdGrpStatsTargetPE" || name == "rttMonLpdGrpStatsNumOfPass" || name == "rttMonLpdGrpStatsNumOfFail" || name == "rttMonLpdGrpStatsNumOfTimeout" || name == "rttMonLpdGrpStatsAvgRTT" || name == "rttMonLpdGrpStatsMinRTT" || name == "rttMonLpdGrpStatsMaxRTT" || name == "rttMonLpdGrpStatsMinNumPaths" || name == "rttMonLpdGrpStatsMaxNumPaths" || name == "rttMonLpdGrpStatsLPDStartTime" || name == "rttMonLpdGrpStatsLPDFailOccurred" || name == "rttMonLpdGrpStatsLPDFailCause" || name == "rttMonLpdGrpStatsLPDCompTime" || name == "rttMonLpdGrpStatsGroupStatus" || name == "rttMonLpdGrpStatsGroupProbeIndex" || name == "rttMonLpdGrpStatsPathIds" || name == "rttMonLpdGrpStatsProbeStatus" || name == "rttMonLpdGrpStatsResetTime")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionTable()
    :
    rttmonhistorycollectionentry(this, {"rttmonctrladminindex", "rttmonhistorycollectionlifeindex", "rttmonhistorycollectionbucketindex", "rttmonhistorycollectionsampleindex"})
{

    yang_name = "rttMonHistoryCollectionTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonHistoryCollectionTable::~RttMonHistoryCollectionTable()
{
}

bool CISCORTTMONMIB::RttMonHistoryCollectionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonhistorycollectionentry.len(); index++)
    {
        if(rttmonhistorycollectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonHistoryCollectionTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonhistorycollectionentry.len(); index++)
    {
        if(rttmonhistorycollectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonHistoryCollectionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonHistoryCollectionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHistoryCollectionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonHistoryCollectionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonHistoryCollectionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonHistoryCollectionEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry>();
        c->parent = this;
        rttmonhistorycollectionentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonHistoryCollectionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonhistorycollectionentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonHistoryCollectionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonHistoryCollectionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonHistoryCollectionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonHistoryCollectionEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::RttMonHistoryCollectionEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonhistorycollectionlifeindex{YType::int32, "rttMonHistoryCollectionLifeIndex"},
    rttmonhistorycollectionbucketindex{YType::int32, "rttMonHistoryCollectionBucketIndex"},
    rttmonhistorycollectionsampleindex{YType::int32, "rttMonHistoryCollectionSampleIndex"},
    rttmonhistorycollectionsampletime{YType::uint32, "rttMonHistoryCollectionSampleTime"},
    rttmonhistorycollectionaddress{YType::str, "rttMonHistoryCollectionAddress"},
    rttmonhistorycollectioncompletiontime{YType::uint32, "rttMonHistoryCollectionCompletionTime"},
    rttmonhistorycollectionsense{YType::enumeration, "rttMonHistoryCollectionSense"},
    rttmonhistorycollectionapplspecificsense{YType::int32, "rttMonHistoryCollectionApplSpecificSense"},
    rttmonhistorycollectionsensedescription{YType::str, "rttMonHistoryCollectionSenseDescription"}
{

    yang_name = "rttMonHistoryCollectionEntry"; yang_parent_name = "rttMonHistoryCollectionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::~RttMonHistoryCollectionEntry()
{
}

bool CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonhistorycollectionlifeindex.is_set
	|| rttmonhistorycollectionbucketindex.is_set
	|| rttmonhistorycollectionsampleindex.is_set
	|| rttmonhistorycollectionsampletime.is_set
	|| rttmonhistorycollectionaddress.is_set
	|| rttmonhistorycollectioncompletiontime.is_set
	|| rttmonhistorycollectionsense.is_set
	|| rttmonhistorycollectionapplspecificsense.is_set
	|| rttmonhistorycollectionsensedescription.is_set;
}

bool CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionlifeindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionbucketindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsampleindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsampletime.yfilter)
	|| ydk::is_set(rttmonhistorycollectionaddress.yfilter)
	|| ydk::is_set(rttmonhistorycollectioncompletiontime.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsense.yfilter)
	|| ydk::is_set(rttmonhistorycollectionapplspecificsense.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsensedescription.yfilter);
}

std::string CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonHistoryCollectionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHistoryCollectionEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    ADD_KEY_TOKEN(rttmonhistorycollectionlifeindex, "rttMonHistoryCollectionLifeIndex");
    ADD_KEY_TOKEN(rttmonhistorycollectionbucketindex, "rttMonHistoryCollectionBucketIndex");
    ADD_KEY_TOKEN(rttmonhistorycollectionsampleindex, "rttMonHistoryCollectionSampleIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonhistorycollectionlifeindex.is_set || is_set(rttmonhistorycollectionlifeindex.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionlifeindex.get_name_leafdata());
    if (rttmonhistorycollectionbucketindex.is_set || is_set(rttmonhistorycollectionbucketindex.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionbucketindex.get_name_leafdata());
    if (rttmonhistorycollectionsampleindex.is_set || is_set(rttmonhistorycollectionsampleindex.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsampleindex.get_name_leafdata());
    if (rttmonhistorycollectionsampletime.is_set || is_set(rttmonhistorycollectionsampletime.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsampletime.get_name_leafdata());
    if (rttmonhistorycollectionaddress.is_set || is_set(rttmonhistorycollectionaddress.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionaddress.get_name_leafdata());
    if (rttmonhistorycollectioncompletiontime.is_set || is_set(rttmonhistorycollectioncompletiontime.yfilter)) leaf_name_data.push_back(rttmonhistorycollectioncompletiontime.get_name_leafdata());
    if (rttmonhistorycollectionsense.is_set || is_set(rttmonhistorycollectionsense.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsense.get_name_leafdata());
    if (rttmonhistorycollectionapplspecificsense.is_set || is_set(rttmonhistorycollectionapplspecificsense.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionapplspecificsense.get_name_leafdata());
    if (rttmonhistorycollectionsensedescription.is_set || is_set(rttmonhistorycollectionsensedescription.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsensedescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionLifeIndex")
    {
        rttmonhistorycollectionlifeindex = value;
        rttmonhistorycollectionlifeindex.value_namespace = name_space;
        rttmonhistorycollectionlifeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionBucketIndex")
    {
        rttmonhistorycollectionbucketindex = value;
        rttmonhistorycollectionbucketindex.value_namespace = name_space;
        rttmonhistorycollectionbucketindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionSampleIndex")
    {
        rttmonhistorycollectionsampleindex = value;
        rttmonhistorycollectionsampleindex.value_namespace = name_space;
        rttmonhistorycollectionsampleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionSampleTime")
    {
        rttmonhistorycollectionsampletime = value;
        rttmonhistorycollectionsampletime.value_namespace = name_space;
        rttmonhistorycollectionsampletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionAddress")
    {
        rttmonhistorycollectionaddress = value;
        rttmonhistorycollectionaddress.value_namespace = name_space;
        rttmonhistorycollectionaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionCompletionTime")
    {
        rttmonhistorycollectioncompletiontime = value;
        rttmonhistorycollectioncompletiontime.value_namespace = name_space;
        rttmonhistorycollectioncompletiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionSense")
    {
        rttmonhistorycollectionsense = value;
        rttmonhistorycollectionsense.value_namespace = name_space;
        rttmonhistorycollectionsense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionApplSpecificSense")
    {
        rttmonhistorycollectionapplspecificsense = value;
        rttmonhistorycollectionapplspecificsense.value_namespace = name_space;
        rttmonhistorycollectionapplspecificsense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionSenseDescription")
    {
        rttmonhistorycollectionsensedescription = value;
        rttmonhistorycollectionsensedescription.value_namespace = name_space;
        rttmonhistorycollectionsensedescription.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionLifeIndex")
    {
        rttmonhistorycollectionlifeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionBucketIndex")
    {
        rttmonhistorycollectionbucketindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionSampleIndex")
    {
        rttmonhistorycollectionsampleindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionSampleTime")
    {
        rttmonhistorycollectionsampletime.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionAddress")
    {
        rttmonhistorycollectionaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionCompletionTime")
    {
        rttmonhistorycollectioncompletiontime.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionSense")
    {
        rttmonhistorycollectionsense.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionApplSpecificSense")
    {
        rttmonhistorycollectionapplspecificsense.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionSenseDescription")
    {
        rttmonhistorycollectionsensedescription.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonHistoryCollectionLifeIndex" || name == "rttMonHistoryCollectionBucketIndex" || name == "rttMonHistoryCollectionSampleIndex" || name == "rttMonHistoryCollectionSampleTime" || name == "rttMonHistoryCollectionAddress" || name == "rttMonHistoryCollectionCompletionTime" || name == "rttMonHistoryCollectionSense" || name == "rttMonHistoryCollectionApplSpecificSense" || name == "rttMonHistoryCollectionSenseDescription")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperTable()
    :
    rttmonlatesthttpoperentry(this, {"rttmonctrladminindex"})
{

    yang_name = "rttMonLatestHTTPOperTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonLatestHTTPOperTable::~RttMonLatestHTTPOperTable()
{
}

bool CISCORTTMONMIB::RttMonLatestHTTPOperTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonlatesthttpoperentry.len(); index++)
    {
        if(rttmonlatesthttpoperentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonLatestHTTPOperTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonlatesthttpoperentry.len(); index++)
    {
        if(rttmonlatesthttpoperentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonLatestHTTPOperTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonLatestHTTPOperTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestHTTPOperTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonLatestHTTPOperTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonLatestHTTPOperTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonLatestHTTPOperEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry>();
        c->parent = this;
        rttmonlatesthttpoperentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonLatestHTTPOperTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonlatesthttpoperentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonLatestHTTPOperTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonLatestHTTPOperTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonLatestHTTPOperTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLatestHTTPOperEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::RttMonLatestHTTPOperEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonlatesthttpoperrtt{YType::uint32, "rttMonLatestHTTPOperRTT"},
    rttmonlatesthttpoperdnsrtt{YType::uint32, "rttMonLatestHTTPOperDNSRTT"},
    rttmonlatesthttpopertcpconnectrtt{YType::uint32, "rttMonLatestHTTPOperTCPConnectRTT"},
    rttmonlatesthttpopertransactionrtt{YType::uint32, "rttMonLatestHTTPOperTransactionRTT"},
    rttmonlatesthttpopermessagebodyoctets{YType::uint32, "rttMonLatestHTTPOperMessageBodyOctets"},
    rttmonlatesthttpopersense{YType::enumeration, "rttMonLatestHTTPOperSense"},
    rttmonlatesthttperrorsensedescription{YType::str, "rttMonLatestHTTPErrorSenseDescription"}
{

    yang_name = "rttMonLatestHTTPOperEntry"; yang_parent_name = "rttMonLatestHTTPOperTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::~RttMonLatestHTTPOperEntry()
{
}

bool CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonlatesthttpoperrtt.is_set
	|| rttmonlatesthttpoperdnsrtt.is_set
	|| rttmonlatesthttpopertcpconnectrtt.is_set
	|| rttmonlatesthttpopertransactionrtt.is_set
	|| rttmonlatesthttpopermessagebodyoctets.is_set
	|| rttmonlatesthttpopersense.is_set
	|| rttmonlatesthttperrorsensedescription.is_set;
}

bool CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonlatesthttpoperrtt.yfilter)
	|| ydk::is_set(rttmonlatesthttpoperdnsrtt.yfilter)
	|| ydk::is_set(rttmonlatesthttpopertcpconnectrtt.yfilter)
	|| ydk::is_set(rttmonlatesthttpopertransactionrtt.yfilter)
	|| ydk::is_set(rttmonlatesthttpopermessagebodyoctets.yfilter)
	|| ydk::is_set(rttmonlatesthttpopersense.yfilter)
	|| ydk::is_set(rttmonlatesthttperrorsensedescription.yfilter);
}

std::string CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonLatestHTTPOperTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestHTTPOperEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonlatesthttpoperrtt.is_set || is_set(rttmonlatesthttpoperrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpoperrtt.get_name_leafdata());
    if (rttmonlatesthttpoperdnsrtt.is_set || is_set(rttmonlatesthttpoperdnsrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpoperdnsrtt.get_name_leafdata());
    if (rttmonlatesthttpopertcpconnectrtt.is_set || is_set(rttmonlatesthttpopertcpconnectrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopertcpconnectrtt.get_name_leafdata());
    if (rttmonlatesthttpopertransactionrtt.is_set || is_set(rttmonlatesthttpopertransactionrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopertransactionrtt.get_name_leafdata());
    if (rttmonlatesthttpopermessagebodyoctets.is_set || is_set(rttmonlatesthttpopermessagebodyoctets.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopermessagebodyoctets.get_name_leafdata());
    if (rttmonlatesthttpopersense.is_set || is_set(rttmonlatesthttpopersense.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopersense.get_name_leafdata());
    if (rttmonlatesthttperrorsensedescription.is_set || is_set(rttmonlatesthttperrorsensedescription.yfilter)) leaf_name_data.push_back(rttmonlatesthttperrorsensedescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperRTT")
    {
        rttmonlatesthttpoperrtt = value;
        rttmonlatesthttpoperrtt.value_namespace = name_space;
        rttmonlatesthttpoperrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperDNSRTT")
    {
        rttmonlatesthttpoperdnsrtt = value;
        rttmonlatesthttpoperdnsrtt.value_namespace = name_space;
        rttmonlatesthttpoperdnsrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperTCPConnectRTT")
    {
        rttmonlatesthttpopertcpconnectrtt = value;
        rttmonlatesthttpopertcpconnectrtt.value_namespace = name_space;
        rttmonlatesthttpopertcpconnectrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperTransactionRTT")
    {
        rttmonlatesthttpopertransactionrtt = value;
        rttmonlatesthttpopertransactionrtt.value_namespace = name_space;
        rttmonlatesthttpopertransactionrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperMessageBodyOctets")
    {
        rttmonlatesthttpopermessagebodyoctets = value;
        rttmonlatesthttpopermessagebodyoctets.value_namespace = name_space;
        rttmonlatesthttpopermessagebodyoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperSense")
    {
        rttmonlatesthttpopersense = value;
        rttmonlatesthttpopersense.value_namespace = name_space;
        rttmonlatesthttpopersense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPErrorSenseDescription")
    {
        rttmonlatesthttperrorsensedescription = value;
        rttmonlatesthttperrorsensedescription.value_namespace = name_space;
        rttmonlatesthttperrorsensedescription.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperRTT")
    {
        rttmonlatesthttpoperrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperDNSRTT")
    {
        rttmonlatesthttpoperdnsrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperTCPConnectRTT")
    {
        rttmonlatesthttpopertcpconnectrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperTransactionRTT")
    {
        rttmonlatesthttpopertransactionrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperMessageBodyOctets")
    {
        rttmonlatesthttpopermessagebodyoctets.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperSense")
    {
        rttmonlatesthttpopersense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPErrorSenseDescription")
    {
        rttmonlatesthttperrorsensedescription.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonLatestHTTPOperRTT" || name == "rttMonLatestHTTPOperDNSRTT" || name == "rttMonLatestHTTPOperTCPConnectRTT" || name == "rttMonLatestHTTPOperTransactionRTT" || name == "rttMonLatestHTTPOperMessageBodyOctets" || name == "rttMonLatestHTTPOperSense" || name == "rttMonLatestHTTPErrorSenseDescription")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperTable()
    :
    rttmonlatestjitteroperentry(this, {"rttmonctrladminindex"})
{

    yang_name = "rttMonLatestJitterOperTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonLatestJitterOperTable::~RttMonLatestJitterOperTable()
{
}

bool CISCORTTMONMIB::RttMonLatestJitterOperTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttmonlatestjitteroperentry.len(); index++)
    {
        if(rttmonlatestjitteroperentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::RttMonLatestJitterOperTable::has_operation() const
{
    for (std::size_t index=0; index<rttmonlatestjitteroperentry.len(); index++)
    {
        if(rttmonlatestjitteroperentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::RttMonLatestJitterOperTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonLatestJitterOperTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestJitterOperTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonLatestJitterOperTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonLatestJitterOperTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonLatestJitterOperEntry")
    {
        auto c = std::make_shared<CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry>();
        c->parent = this;
        rttmonlatestjitteroperentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonLatestJitterOperTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttmonlatestjitteroperentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCORTTMONMIB::RttMonLatestJitterOperTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::RttMonLatestJitterOperTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::RttMonLatestJitterOperTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLatestJitterOperEntry")
        return true;
    return false;
}

CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::RttMonLatestJitterOperEntry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonlatestjitteropernumofrtt{YType::uint32, "rttMonLatestJitterOperNumOfRTT"},
    rttmonlatestjitteroperrttsum{YType::uint32, "rttMonLatestJitterOperRTTSum"},
    rttmonlatestjitteroperrttsum2{YType::uint32, "rttMonLatestJitterOperRTTSum2"},
    rttmonlatestjitteroperrttmin{YType::uint32, "rttMonLatestJitterOperRTTMin"},
    rttmonlatestjitteroperrttmax{YType::uint32, "rttMonLatestJitterOperRTTMax"},
    rttmonlatestjitteroperminofpositivessd{YType::uint32, "rttMonLatestJitterOperMinOfPositivesSD"},
    rttmonlatestjitteropermaxofpositivessd{YType::uint32, "rttMonLatestJitterOperMaxOfPositivesSD"},
    rttmonlatestjitteropernumofpositivessd{YType::uint32, "rttMonLatestJitterOperNumOfPositivesSD"},
    rttmonlatestjitteropersumofpositivessd{YType::uint32, "rttMonLatestJitterOperSumOfPositivesSD"},
    rttmonlatestjitteropersum2positivessd{YType::uint32, "rttMonLatestJitterOperSum2PositivesSD"},
    rttmonlatestjitteroperminofnegativessd{YType::uint32, "rttMonLatestJitterOperMinOfNegativesSD"},
    rttmonlatestjitteropermaxofnegativessd{YType::uint32, "rttMonLatestJitterOperMaxOfNegativesSD"},
    rttmonlatestjitteropernumofnegativessd{YType::uint32, "rttMonLatestJitterOperNumOfNegativesSD"},
    rttmonlatestjitteropersumofnegativessd{YType::uint32, "rttMonLatestJitterOperSumOfNegativesSD"},
    rttmonlatestjitteropersum2negativessd{YType::uint32, "rttMonLatestJitterOperSum2NegativesSD"},
    rttmonlatestjitteroperminofpositivesds{YType::uint32, "rttMonLatestJitterOperMinOfPositivesDS"},
    rttmonlatestjitteropermaxofpositivesds{YType::uint32, "rttMonLatestJitterOperMaxOfPositivesDS"},
    rttmonlatestjitteropernumofpositivesds{YType::uint32, "rttMonLatestJitterOperNumOfPositivesDS"},
    rttmonlatestjitteropersumofpositivesds{YType::uint32, "rttMonLatestJitterOperSumOfPositivesDS"},
    rttmonlatestjitteropersum2positivesds{YType::uint32, "rttMonLatestJitterOperSum2PositivesDS"},
    rttmonlatestjitteroperminofnegativesds{YType::uint32, "rttMonLatestJitterOperMinOfNegativesDS"},
    rttmonlatestjitteropermaxofnegativesds{YType::uint32, "rttMonLatestJitterOperMaxOfNegativesDS"},
    rttmonlatestjitteropernumofnegativesds{YType::uint32, "rttMonLatestJitterOperNumOfNegativesDS"},
    rttmonlatestjitteropersumofnegativesds{YType::uint32, "rttMonLatestJitterOperSumOfNegativesDS"},
    rttmonlatestjitteropersum2negativesds{YType::uint32, "rttMonLatestJitterOperSum2NegativesDS"},
    rttmonlatestjitteroperpacketlosssd{YType::uint32, "rttMonLatestJitterOperPacketLossSD"},
    rttmonlatestjitteroperpacketlossds{YType::uint32, "rttMonLatestJitterOperPacketLossDS"},
    rttmonlatestjitteroperpacketoutofsequence{YType::uint32, "rttMonLatestJitterOperPacketOutOfSequence"},
    rttmonlatestjitteroperpacketmia{YType::uint32, "rttMonLatestJitterOperPacketMIA"},
    rttmonlatestjitteroperpacketlatearrival{YType::uint32, "rttMonLatestJitterOperPacketLateArrival"},
    rttmonlatestjitteropersense{YType::enumeration, "rttMonLatestJitterOperSense"},
    rttmonlatestjittererrorsensedescription{YType::str, "rttMonLatestJitterErrorSenseDescription"},
    rttmonlatestjitteroperowsumsd{YType::uint32, "rttMonLatestJitterOperOWSumSD"},
    rttmonlatestjitteroperowsum2sd{YType::uint32, "rttMonLatestJitterOperOWSum2SD"},
    rttmonlatestjitteroperowminsd{YType::uint32, "rttMonLatestJitterOperOWMinSD"},
    rttmonlatestjitteroperowmaxsd{YType::uint32, "rttMonLatestJitterOperOWMaxSD"},
    rttmonlatestjitteroperowsumds{YType::uint32, "rttMonLatestJitterOperOWSumDS"},
    rttmonlatestjitteroperowsum2ds{YType::uint32, "rttMonLatestJitterOperOWSum2DS"},
    rttmonlatestjitteroperowminds{YType::uint32, "rttMonLatestJitterOperOWMinDS"},
    rttmonlatestjitteroperowmaxds{YType::uint32, "rttMonLatestJitterOperOWMaxDS"},
    rttmonlatestjitteropernumofow{YType::uint32, "rttMonLatestJitterOperNumOfOW"},
    rttmonlatestjitteropermos{YType::uint32, "rttMonLatestJitterOperMOS"},
    rttmonlatestjitteropericpif{YType::uint32, "rttMonLatestJitterOperICPIF"},
    rttmonlatestjitteroperiajout{YType::uint32, "rttMonLatestJitterOperIAJOut"},
    rttmonlatestjitteroperiajin{YType::uint32, "rttMonLatestJitterOperIAJIn"},
    rttmonlatestjitteroperavgjitter{YType::uint32, "rttMonLatestJitterOperAvgJitter"},
    rttmonlatestjitteroperavgsdj{YType::uint32, "rttMonLatestJitterOperAvgSDJ"},
    rttmonlatestjitteroperavgdsj{YType::uint32, "rttMonLatestJitterOperAvgDSJ"},
    rttmonlatestjitteroperowavgsd{YType::uint32, "rttMonLatestJitterOperOWAvgSD"},
    rttmonlatestjitteroperowavgds{YType::uint32, "rttMonLatestJitterOperOWAvgDS"},
    rttmonlatestjitteroperntpstate{YType::enumeration, "rttMonLatestJitterOperNTPState"},
    rttmonlatestjitteroperunsyncrts{YType::uint32, "rttMonLatestJitterOperUnSyncRTs"},
    rttmonlatestjitteroperrttsumhigh{YType::uint32, "rttMonLatestJitterOperRTTSumHigh"},
    rttmonlatestjitteroperrttsum2high{YType::uint32, "rttMonLatestJitterOperRTTSum2High"},
    rttmonlatestjitteroperowsumsdhigh{YType::uint32, "rttMonLatestJitterOperOWSumSDHigh"},
    rttmonlatestjitteroperowsum2sdhigh{YType::uint32, "rttMonLatestJitterOperOWSum2SDHigh"},
    rttmonlatestjitteroperowsumdshigh{YType::uint32, "rttMonLatestJitterOperOWSumDSHigh"},
    rttmonlatestjitteroperowsum2dshigh{YType::uint32, "rttMonLatestJitterOperOWSum2DSHigh"}
{

    yang_name = "rttMonLatestJitterOperEntry"; yang_parent_name = "rttMonLatestJitterOperTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::~RttMonLatestJitterOperEntry()
{
}

bool CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::has_data() const
{
    if (is_presence_container) return true;
    return rttmonctrladminindex.is_set
	|| rttmonlatestjitteropernumofrtt.is_set
	|| rttmonlatestjitteroperrttsum.is_set
	|| rttmonlatestjitteroperrttsum2.is_set
	|| rttmonlatestjitteroperrttmin.is_set
	|| rttmonlatestjitteroperrttmax.is_set
	|| rttmonlatestjitteroperminofpositivessd.is_set
	|| rttmonlatestjitteropermaxofpositivessd.is_set
	|| rttmonlatestjitteropernumofpositivessd.is_set
	|| rttmonlatestjitteropersumofpositivessd.is_set
	|| rttmonlatestjitteropersum2positivessd.is_set
	|| rttmonlatestjitteroperminofnegativessd.is_set
	|| rttmonlatestjitteropermaxofnegativessd.is_set
	|| rttmonlatestjitteropernumofnegativessd.is_set
	|| rttmonlatestjitteropersumofnegativessd.is_set
	|| rttmonlatestjitteropersum2negativessd.is_set
	|| rttmonlatestjitteroperminofpositivesds.is_set
	|| rttmonlatestjitteropermaxofpositivesds.is_set
	|| rttmonlatestjitteropernumofpositivesds.is_set
	|| rttmonlatestjitteropersumofpositivesds.is_set
	|| rttmonlatestjitteropersum2positivesds.is_set
	|| rttmonlatestjitteroperminofnegativesds.is_set
	|| rttmonlatestjitteropermaxofnegativesds.is_set
	|| rttmonlatestjitteropernumofnegativesds.is_set
	|| rttmonlatestjitteropersumofnegativesds.is_set
	|| rttmonlatestjitteropersum2negativesds.is_set
	|| rttmonlatestjitteroperpacketlosssd.is_set
	|| rttmonlatestjitteroperpacketlossds.is_set
	|| rttmonlatestjitteroperpacketoutofsequence.is_set
	|| rttmonlatestjitteroperpacketmia.is_set
	|| rttmonlatestjitteroperpacketlatearrival.is_set
	|| rttmonlatestjitteropersense.is_set
	|| rttmonlatestjittererrorsensedescription.is_set
	|| rttmonlatestjitteroperowsumsd.is_set
	|| rttmonlatestjitteroperowsum2sd.is_set
	|| rttmonlatestjitteroperowminsd.is_set
	|| rttmonlatestjitteroperowmaxsd.is_set
	|| rttmonlatestjitteroperowsumds.is_set
	|| rttmonlatestjitteroperowsum2ds.is_set
	|| rttmonlatestjitteroperowminds.is_set
	|| rttmonlatestjitteroperowmaxds.is_set
	|| rttmonlatestjitteropernumofow.is_set
	|| rttmonlatestjitteropermos.is_set
	|| rttmonlatestjitteropericpif.is_set
	|| rttmonlatestjitteroperiajout.is_set
	|| rttmonlatestjitteroperiajin.is_set
	|| rttmonlatestjitteroperavgjitter.is_set
	|| rttmonlatestjitteroperavgsdj.is_set
	|| rttmonlatestjitteroperavgdsj.is_set
	|| rttmonlatestjitteroperowavgsd.is_set
	|| rttmonlatestjitteroperowavgds.is_set
	|| rttmonlatestjitteroperntpstate.is_set
	|| rttmonlatestjitteroperunsyncrts.is_set
	|| rttmonlatestjitteroperrttsumhigh.is_set
	|| rttmonlatestjitteroperrttsum2high.is_set
	|| rttmonlatestjitteroperowsumsdhigh.is_set
	|| rttmonlatestjitteroperowsum2sdhigh.is_set
	|| rttmonlatestjitteroperowsumdshigh.is_set
	|| rttmonlatestjitteroperowsum2dshigh.is_set;
}

bool CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofrtt.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsum.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsum2.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttmin.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttmax.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2positivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2negativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2positivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2negativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketlosssd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketlossds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketoutofsequence.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketmia.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketlatearrival.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersense.yfilter)
	|| ydk::is_set(rttmonlatestjittererrorsensedescription.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2sd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowminsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowmaxsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2ds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowminds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowmaxds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofow.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermos.yfilter)
	|| ydk::is_set(rttmonlatestjitteropericpif.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperiajout.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperiajin.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperavgjitter.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperavgsdj.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperavgdsj.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowavgsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowavgds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperntpstate.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperunsyncrts.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsumhigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsum2high.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumsdhigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2sdhigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumdshigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2dshigh.yfilter);
}

std::string CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonLatestJitterOperTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestJitterOperEntry";
    ADD_KEY_TOKEN(rttmonctrladminindex, "rttMonCtrlAdminIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonlatestjitteropernumofrtt.is_set || is_set(rttmonlatestjitteropernumofrtt.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofrtt.get_name_leafdata());
    if (rttmonlatestjitteroperrttsum.is_set || is_set(rttmonlatestjitteroperrttsum.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsum.get_name_leafdata());
    if (rttmonlatestjitteroperrttsum2.is_set || is_set(rttmonlatestjitteroperrttsum2.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsum2.get_name_leafdata());
    if (rttmonlatestjitteroperrttmin.is_set || is_set(rttmonlatestjitteroperrttmin.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttmin.get_name_leafdata());
    if (rttmonlatestjitteroperrttmax.is_set || is_set(rttmonlatestjitteroperrttmax.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttmax.get_name_leafdata());
    if (rttmonlatestjitteroperminofpositivessd.is_set || is_set(rttmonlatestjitteroperminofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteropermaxofpositivessd.is_set || is_set(rttmonlatestjitteropermaxofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteropernumofpositivessd.is_set || is_set(rttmonlatestjitteropernumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteropersumofpositivessd.is_set || is_set(rttmonlatestjitteropersumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteropersum2positivessd.is_set || is_set(rttmonlatestjitteropersum2positivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2positivessd.get_name_leafdata());
    if (rttmonlatestjitteroperminofnegativessd.is_set || is_set(rttmonlatestjitteroperminofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteropermaxofnegativessd.is_set || is_set(rttmonlatestjitteropermaxofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteropernumofnegativessd.is_set || is_set(rttmonlatestjitteropernumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteropersumofnegativessd.is_set || is_set(rttmonlatestjitteropersumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteropersum2negativessd.is_set || is_set(rttmonlatestjitteropersum2negativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2negativessd.get_name_leafdata());
    if (rttmonlatestjitteroperminofpositivesds.is_set || is_set(rttmonlatestjitteroperminofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteropermaxofpositivesds.is_set || is_set(rttmonlatestjitteropermaxofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteropernumofpositivesds.is_set || is_set(rttmonlatestjitteropernumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteropersumofpositivesds.is_set || is_set(rttmonlatestjitteropersumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteropersum2positivesds.is_set || is_set(rttmonlatestjitteropersum2positivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2positivesds.get_name_leafdata());
    if (rttmonlatestjitteroperminofnegativesds.is_set || is_set(rttmonlatestjitteroperminofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteropermaxofnegativesds.is_set || is_set(rttmonlatestjitteropermaxofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteropernumofnegativesds.is_set || is_set(rttmonlatestjitteropernumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteropersumofnegativesds.is_set || is_set(rttmonlatestjitteropersumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteropersum2negativesds.is_set || is_set(rttmonlatestjitteropersum2negativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2negativesds.get_name_leafdata());
    if (rttmonlatestjitteroperpacketlosssd.is_set || is_set(rttmonlatestjitteroperpacketlosssd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketlosssd.get_name_leafdata());
    if (rttmonlatestjitteroperpacketlossds.is_set || is_set(rttmonlatestjitteroperpacketlossds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketlossds.get_name_leafdata());
    if (rttmonlatestjitteroperpacketoutofsequence.is_set || is_set(rttmonlatestjitteroperpacketoutofsequence.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketoutofsequence.get_name_leafdata());
    if (rttmonlatestjitteroperpacketmia.is_set || is_set(rttmonlatestjitteroperpacketmia.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketmia.get_name_leafdata());
    if (rttmonlatestjitteroperpacketlatearrival.is_set || is_set(rttmonlatestjitteroperpacketlatearrival.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketlatearrival.get_name_leafdata());
    if (rttmonlatestjitteropersense.is_set || is_set(rttmonlatestjitteropersense.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersense.get_name_leafdata());
    if (rttmonlatestjittererrorsensedescription.is_set || is_set(rttmonlatestjittererrorsensedescription.yfilter)) leaf_name_data.push_back(rttmonlatestjittererrorsensedescription.get_name_leafdata());
    if (rttmonlatestjitteroperowsumsd.is_set || is_set(rttmonlatestjitteroperowsumsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumsd.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2sd.is_set || is_set(rttmonlatestjitteroperowsum2sd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2sd.get_name_leafdata());
    if (rttmonlatestjitteroperowminsd.is_set || is_set(rttmonlatestjitteroperowminsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowminsd.get_name_leafdata());
    if (rttmonlatestjitteroperowmaxsd.is_set || is_set(rttmonlatestjitteroperowmaxsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowmaxsd.get_name_leafdata());
    if (rttmonlatestjitteroperowsumds.is_set || is_set(rttmonlatestjitteroperowsumds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumds.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2ds.is_set || is_set(rttmonlatestjitteroperowsum2ds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2ds.get_name_leafdata());
    if (rttmonlatestjitteroperowminds.is_set || is_set(rttmonlatestjitteroperowminds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowminds.get_name_leafdata());
    if (rttmonlatestjitteroperowmaxds.is_set || is_set(rttmonlatestjitteroperowmaxds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowmaxds.get_name_leafdata());
    if (rttmonlatestjitteropernumofow.is_set || is_set(rttmonlatestjitteropernumofow.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofow.get_name_leafdata());
    if (rttmonlatestjitteropermos.is_set || is_set(rttmonlatestjitteropermos.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermos.get_name_leafdata());
    if (rttmonlatestjitteropericpif.is_set || is_set(rttmonlatestjitteropericpif.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropericpif.get_name_leafdata());
    if (rttmonlatestjitteroperiajout.is_set || is_set(rttmonlatestjitteroperiajout.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperiajout.get_name_leafdata());
    if (rttmonlatestjitteroperiajin.is_set || is_set(rttmonlatestjitteroperiajin.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperiajin.get_name_leafdata());
    if (rttmonlatestjitteroperavgjitter.is_set || is_set(rttmonlatestjitteroperavgjitter.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperavgjitter.get_name_leafdata());
    if (rttmonlatestjitteroperavgsdj.is_set || is_set(rttmonlatestjitteroperavgsdj.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperavgsdj.get_name_leafdata());
    if (rttmonlatestjitteroperavgdsj.is_set || is_set(rttmonlatestjitteroperavgdsj.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperavgdsj.get_name_leafdata());
    if (rttmonlatestjitteroperowavgsd.is_set || is_set(rttmonlatestjitteroperowavgsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowavgsd.get_name_leafdata());
    if (rttmonlatestjitteroperowavgds.is_set || is_set(rttmonlatestjitteroperowavgds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowavgds.get_name_leafdata());
    if (rttmonlatestjitteroperntpstate.is_set || is_set(rttmonlatestjitteroperntpstate.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperntpstate.get_name_leafdata());
    if (rttmonlatestjitteroperunsyncrts.is_set || is_set(rttmonlatestjitteroperunsyncrts.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperunsyncrts.get_name_leafdata());
    if (rttmonlatestjitteroperrttsumhigh.is_set || is_set(rttmonlatestjitteroperrttsumhigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsumhigh.get_name_leafdata());
    if (rttmonlatestjitteroperrttsum2high.is_set || is_set(rttmonlatestjitteroperrttsum2high.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsum2high.get_name_leafdata());
    if (rttmonlatestjitteroperowsumsdhigh.is_set || is_set(rttmonlatestjitteroperowsumsdhigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumsdhigh.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2sdhigh.is_set || is_set(rttmonlatestjitteroperowsum2sdhigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2sdhigh.get_name_leafdata());
    if (rttmonlatestjitteroperowsumdshigh.is_set || is_set(rttmonlatestjitteroperowsumdshigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumdshigh.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2dshigh.is_set || is_set(rttmonlatestjitteroperowsum2dshigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2dshigh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfRTT")
    {
        rttmonlatestjitteropernumofrtt = value;
        rttmonlatestjitteropernumofrtt.value_namespace = name_space;
        rttmonlatestjitteropernumofrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum")
    {
        rttmonlatestjitteroperrttsum = value;
        rttmonlatestjitteroperrttsum.value_namespace = name_space;
        rttmonlatestjitteroperrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum2")
    {
        rttmonlatestjitteroperrttsum2 = value;
        rttmonlatestjitteroperrttsum2.value_namespace = name_space;
        rttmonlatestjitteroperrttsum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTMin")
    {
        rttmonlatestjitteroperrttmin = value;
        rttmonlatestjitteroperrttmin.value_namespace = name_space;
        rttmonlatestjitteroperrttmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTMax")
    {
        rttmonlatestjitteroperrttmax = value;
        rttmonlatestjitteroperrttmax.value_namespace = name_space;
        rttmonlatestjitteroperrttmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesSD")
    {
        rttmonlatestjitteroperminofpositivessd = value;
        rttmonlatestjitteroperminofpositivessd.value_namespace = name_space;
        rttmonlatestjitteroperminofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesSD")
    {
        rttmonlatestjitteropermaxofpositivessd = value;
        rttmonlatestjitteropermaxofpositivessd.value_namespace = name_space;
        rttmonlatestjitteropermaxofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesSD")
    {
        rttmonlatestjitteropernumofpositivessd = value;
        rttmonlatestjitteropernumofpositivessd.value_namespace = name_space;
        rttmonlatestjitteropernumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesSD")
    {
        rttmonlatestjitteropersumofpositivessd = value;
        rttmonlatestjitteropersumofpositivessd.value_namespace = name_space;
        rttmonlatestjitteropersumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesSD")
    {
        rttmonlatestjitteropersum2positivessd = value;
        rttmonlatestjitteropersum2positivessd.value_namespace = name_space;
        rttmonlatestjitteropersum2positivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesSD")
    {
        rttmonlatestjitteroperminofnegativessd = value;
        rttmonlatestjitteroperminofnegativessd.value_namespace = name_space;
        rttmonlatestjitteroperminofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesSD")
    {
        rttmonlatestjitteropermaxofnegativessd = value;
        rttmonlatestjitteropermaxofnegativessd.value_namespace = name_space;
        rttmonlatestjitteropermaxofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesSD")
    {
        rttmonlatestjitteropernumofnegativessd = value;
        rttmonlatestjitteropernumofnegativessd.value_namespace = name_space;
        rttmonlatestjitteropernumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesSD")
    {
        rttmonlatestjitteropersumofnegativessd = value;
        rttmonlatestjitteropersumofnegativessd.value_namespace = name_space;
        rttmonlatestjitteropersumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesSD")
    {
        rttmonlatestjitteropersum2negativessd = value;
        rttmonlatestjitteropersum2negativessd.value_namespace = name_space;
        rttmonlatestjitteropersum2negativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesDS")
    {
        rttmonlatestjitteroperminofpositivesds = value;
        rttmonlatestjitteroperminofpositivesds.value_namespace = name_space;
        rttmonlatestjitteroperminofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesDS")
    {
        rttmonlatestjitteropermaxofpositivesds = value;
        rttmonlatestjitteropermaxofpositivesds.value_namespace = name_space;
        rttmonlatestjitteropermaxofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesDS")
    {
        rttmonlatestjitteropernumofpositivesds = value;
        rttmonlatestjitteropernumofpositivesds.value_namespace = name_space;
        rttmonlatestjitteropernumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesDS")
    {
        rttmonlatestjitteropersumofpositivesds = value;
        rttmonlatestjitteropersumofpositivesds.value_namespace = name_space;
        rttmonlatestjitteropersumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesDS")
    {
        rttmonlatestjitteropersum2positivesds = value;
        rttmonlatestjitteropersum2positivesds.value_namespace = name_space;
        rttmonlatestjitteropersum2positivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesDS")
    {
        rttmonlatestjitteroperminofnegativesds = value;
        rttmonlatestjitteroperminofnegativesds.value_namespace = name_space;
        rttmonlatestjitteroperminofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesDS")
    {
        rttmonlatestjitteropermaxofnegativesds = value;
        rttmonlatestjitteropermaxofnegativesds.value_namespace = name_space;
        rttmonlatestjitteropermaxofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesDS")
    {
        rttmonlatestjitteropernumofnegativesds = value;
        rttmonlatestjitteropernumofnegativesds.value_namespace = name_space;
        rttmonlatestjitteropernumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesDS")
    {
        rttmonlatestjitteropersumofnegativesds = value;
        rttmonlatestjitteropersumofnegativesds.value_namespace = name_space;
        rttmonlatestjitteropersumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesDS")
    {
        rttmonlatestjitteropersum2negativesds = value;
        rttmonlatestjitteropersum2negativesds.value_namespace = name_space;
        rttmonlatestjitteropersum2negativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossSD")
    {
        rttmonlatestjitteroperpacketlosssd = value;
        rttmonlatestjitteroperpacketlosssd.value_namespace = name_space;
        rttmonlatestjitteroperpacketlosssd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossDS")
    {
        rttmonlatestjitteroperpacketlossds = value;
        rttmonlatestjitteroperpacketlossds.value_namespace = name_space;
        rttmonlatestjitteroperpacketlossds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketOutOfSequence")
    {
        rttmonlatestjitteroperpacketoutofsequence = value;
        rttmonlatestjitteroperpacketoutofsequence.value_namespace = name_space;
        rttmonlatestjitteroperpacketoutofsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketMIA")
    {
        rttmonlatestjitteroperpacketmia = value;
        rttmonlatestjitteroperpacketmia.value_namespace = name_space;
        rttmonlatestjitteroperpacketmia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketLateArrival")
    {
        rttmonlatestjitteroperpacketlatearrival = value;
        rttmonlatestjitteroperpacketlatearrival.value_namespace = name_space;
        rttmonlatestjitteroperpacketlatearrival.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSense")
    {
        rttmonlatestjitteropersense = value;
        rttmonlatestjitteropersense.value_namespace = name_space;
        rttmonlatestjitteropersense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterErrorSenseDescription")
    {
        rttmonlatestjittererrorsensedescription = value;
        rttmonlatestjittererrorsensedescription.value_namespace = name_space;
        rttmonlatestjittererrorsensedescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSD")
    {
        rttmonlatestjitteroperowsumsd = value;
        rttmonlatestjitteroperowsumsd.value_namespace = name_space;
        rttmonlatestjitteroperowsumsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SD")
    {
        rttmonlatestjitteroperowsum2sd = value;
        rttmonlatestjitteroperowsum2sd.value_namespace = name_space;
        rttmonlatestjitteroperowsum2sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMinSD")
    {
        rttmonlatestjitteroperowminsd = value;
        rttmonlatestjitteroperowminsd.value_namespace = name_space;
        rttmonlatestjitteroperowminsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxSD")
    {
        rttmonlatestjitteroperowmaxsd = value;
        rttmonlatestjitteroperowmaxsd.value_namespace = name_space;
        rttmonlatestjitteroperowmaxsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDS")
    {
        rttmonlatestjitteroperowsumds = value;
        rttmonlatestjitteroperowsumds.value_namespace = name_space;
        rttmonlatestjitteroperowsumds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DS")
    {
        rttmonlatestjitteroperowsum2ds = value;
        rttmonlatestjitteroperowsum2ds.value_namespace = name_space;
        rttmonlatestjitteroperowsum2ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMinDS")
    {
        rttmonlatestjitteroperowminds = value;
        rttmonlatestjitteroperowminds.value_namespace = name_space;
        rttmonlatestjitteroperowminds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxDS")
    {
        rttmonlatestjitteroperowmaxds = value;
        rttmonlatestjitteroperowmaxds.value_namespace = name_space;
        rttmonlatestjitteroperowmaxds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfOW")
    {
        rttmonlatestjitteropernumofow = value;
        rttmonlatestjitteropernumofow.value_namespace = name_space;
        rttmonlatestjitteropernumofow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMOS")
    {
        rttmonlatestjitteropermos = value;
        rttmonlatestjitteropermos.value_namespace = name_space;
        rttmonlatestjitteropermos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperICPIF")
    {
        rttmonlatestjitteropericpif = value;
        rttmonlatestjitteropericpif.value_namespace = name_space;
        rttmonlatestjitteropericpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperIAJOut")
    {
        rttmonlatestjitteroperiajout = value;
        rttmonlatestjitteroperiajout.value_namespace = name_space;
        rttmonlatestjitteroperiajout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperIAJIn")
    {
        rttmonlatestjitteroperiajin = value;
        rttmonlatestjitteroperiajin.value_namespace = name_space;
        rttmonlatestjitteroperiajin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperAvgJitter")
    {
        rttmonlatestjitteroperavgjitter = value;
        rttmonlatestjitteroperavgjitter.value_namespace = name_space;
        rttmonlatestjitteroperavgjitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperAvgSDJ")
    {
        rttmonlatestjitteroperavgsdj = value;
        rttmonlatestjitteroperavgsdj.value_namespace = name_space;
        rttmonlatestjitteroperavgsdj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperAvgDSJ")
    {
        rttmonlatestjitteroperavgdsj = value;
        rttmonlatestjitteroperavgdsj.value_namespace = name_space;
        rttmonlatestjitteroperavgdsj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgSD")
    {
        rttmonlatestjitteroperowavgsd = value;
        rttmonlatestjitteroperowavgsd.value_namespace = name_space;
        rttmonlatestjitteroperowavgsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgDS")
    {
        rttmonlatestjitteroperowavgds = value;
        rttmonlatestjitteroperowavgds.value_namespace = name_space;
        rttmonlatestjitteroperowavgds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNTPState")
    {
        rttmonlatestjitteroperntpstate = value;
        rttmonlatestjitteroperntpstate.value_namespace = name_space;
        rttmonlatestjitteroperntpstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperUnSyncRTs")
    {
        rttmonlatestjitteroperunsyncrts = value;
        rttmonlatestjitteroperunsyncrts.value_namespace = name_space;
        rttmonlatestjitteroperunsyncrts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTSumHigh")
    {
        rttmonlatestjitteroperrttsumhigh = value;
        rttmonlatestjitteroperrttsumhigh.value_namespace = name_space;
        rttmonlatestjitteroperrttsumhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum2High")
    {
        rttmonlatestjitteroperrttsum2high = value;
        rttmonlatestjitteroperrttsum2high.value_namespace = name_space;
        rttmonlatestjitteroperrttsum2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSDHigh")
    {
        rttmonlatestjitteroperowsumsdhigh = value;
        rttmonlatestjitteroperowsumsdhigh.value_namespace = name_space;
        rttmonlatestjitteroperowsumsdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SDHigh")
    {
        rttmonlatestjitteroperowsum2sdhigh = value;
        rttmonlatestjitteroperowsum2sdhigh.value_namespace = name_space;
        rttmonlatestjitteroperowsum2sdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDSHigh")
    {
        rttmonlatestjitteroperowsumdshigh = value;
        rttmonlatestjitteroperowsumdshigh.value_namespace = name_space;
        rttmonlatestjitteroperowsumdshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DSHigh")
    {
        rttmonlatestjitteroperowsum2dshigh = value;
        rttmonlatestjitteroperowsum2dshigh.value_namespace = name_space;
        rttmonlatestjitteroperowsum2dshigh.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfRTT")
    {
        rttmonlatestjitteropernumofrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum")
    {
        rttmonlatestjitteroperrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum2")
    {
        rttmonlatestjitteroperrttsum2.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTMin")
    {
        rttmonlatestjitteroperrttmin.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTMax")
    {
        rttmonlatestjitteroperrttmax.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesSD")
    {
        rttmonlatestjitteroperminofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesSD")
    {
        rttmonlatestjitteropermaxofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesSD")
    {
        rttmonlatestjitteropernumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesSD")
    {
        rttmonlatestjitteropersumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesSD")
    {
        rttmonlatestjitteropersum2positivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesSD")
    {
        rttmonlatestjitteroperminofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesSD")
    {
        rttmonlatestjitteropermaxofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesSD")
    {
        rttmonlatestjitteropernumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesSD")
    {
        rttmonlatestjitteropersumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesSD")
    {
        rttmonlatestjitteropersum2negativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesDS")
    {
        rttmonlatestjitteroperminofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesDS")
    {
        rttmonlatestjitteropermaxofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesDS")
    {
        rttmonlatestjitteropernumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesDS")
    {
        rttmonlatestjitteropersumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesDS")
    {
        rttmonlatestjitteropersum2positivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesDS")
    {
        rttmonlatestjitteroperminofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesDS")
    {
        rttmonlatestjitteropermaxofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesDS")
    {
        rttmonlatestjitteropernumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesDS")
    {
        rttmonlatestjitteropersumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesDS")
    {
        rttmonlatestjitteropersum2negativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossSD")
    {
        rttmonlatestjitteroperpacketlosssd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossDS")
    {
        rttmonlatestjitteroperpacketlossds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketOutOfSequence")
    {
        rttmonlatestjitteroperpacketoutofsequence.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketMIA")
    {
        rttmonlatestjitteroperpacketmia.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketLateArrival")
    {
        rttmonlatestjitteroperpacketlatearrival.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSense")
    {
        rttmonlatestjitteropersense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterErrorSenseDescription")
    {
        rttmonlatestjittererrorsensedescription.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSD")
    {
        rttmonlatestjitteroperowsumsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SD")
    {
        rttmonlatestjitteroperowsum2sd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMinSD")
    {
        rttmonlatestjitteroperowminsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxSD")
    {
        rttmonlatestjitteroperowmaxsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDS")
    {
        rttmonlatestjitteroperowsumds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DS")
    {
        rttmonlatestjitteroperowsum2ds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMinDS")
    {
        rttmonlatestjitteroperowminds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxDS")
    {
        rttmonlatestjitteroperowmaxds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfOW")
    {
        rttmonlatestjitteropernumofow.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMOS")
    {
        rttmonlatestjitteropermos.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperICPIF")
    {
        rttmonlatestjitteropericpif.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperIAJOut")
    {
        rttmonlatestjitteroperiajout.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperIAJIn")
    {
        rttmonlatestjitteroperiajin.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperAvgJitter")
    {
        rttmonlatestjitteroperavgjitter.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperAvgSDJ")
    {
        rttmonlatestjitteroperavgsdj.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperAvgDSJ")
    {
        rttmonlatestjitteroperavgdsj.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgSD")
    {
        rttmonlatestjitteroperowavgsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgDS")
    {
        rttmonlatestjitteroperowavgds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNTPState")
    {
        rttmonlatestjitteroperntpstate.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperUnSyncRTs")
    {
        rttmonlatestjitteroperunsyncrts.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSumHigh")
    {
        rttmonlatestjitteroperrttsumhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum2High")
    {
        rttmonlatestjitteroperrttsum2high.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSDHigh")
    {
        rttmonlatestjitteroperowsumsdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SDHigh")
    {
        rttmonlatestjitteroperowsum2sdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDSHigh")
    {
        rttmonlatestjitteroperowsumdshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DSHigh")
    {
        rttmonlatestjitteroperowsum2dshigh.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonLatestJitterOperNumOfRTT" || name == "rttMonLatestJitterOperRTTSum" || name == "rttMonLatestJitterOperRTTSum2" || name == "rttMonLatestJitterOperRTTMin" || name == "rttMonLatestJitterOperRTTMax" || name == "rttMonLatestJitterOperMinOfPositivesSD" || name == "rttMonLatestJitterOperMaxOfPositivesSD" || name == "rttMonLatestJitterOperNumOfPositivesSD" || name == "rttMonLatestJitterOperSumOfPositivesSD" || name == "rttMonLatestJitterOperSum2PositivesSD" || name == "rttMonLatestJitterOperMinOfNegativesSD" || name == "rttMonLatestJitterOperMaxOfNegativesSD" || name == "rttMonLatestJitterOperNumOfNegativesSD" || name == "rttMonLatestJitterOperSumOfNegativesSD" || name == "rttMonLatestJitterOperSum2NegativesSD" || name == "rttMonLatestJitterOperMinOfPositivesDS" || name == "rttMonLatestJitterOperMaxOfPositivesDS" || name == "rttMonLatestJitterOperNumOfPositivesDS" || name == "rttMonLatestJitterOperSumOfPositivesDS" || name == "rttMonLatestJitterOperSum2PositivesDS" || name == "rttMonLatestJitterOperMinOfNegativesDS" || name == "rttMonLatestJitterOperMaxOfNegativesDS" || name == "rttMonLatestJitterOperNumOfNegativesDS" || name == "rttMonLatestJitterOperSumOfNegativesDS" || name == "rttMonLatestJitterOperSum2NegativesDS" || name == "rttMonLatestJitterOperPacketLossSD" || name == "rttMonLatestJitterOperPacketLossDS" || name == "rttMonLatestJitterOperPacketOutOfSequence" || name == "rttMonLatestJitterOperPacketMIA" || name == "rttMonLatestJitterOperPacketLateArrival" || name == "rttMonLatestJitterOperSense" || name == "rttMonLatestJitterErrorSenseDescription" || name == "rttMonLatestJitterOperOWSumSD" || name == "rttMonLatestJitterOperOWSum2SD" || name == "rttMonLatestJitterOperOWMinSD" || name == "rttMonLatestJitterOperOWMaxSD" || name == "rttMonLatestJitterOperOWSumDS" || name == "rttMonLatestJitterOperOWSum2DS" || name == "rttMonLatestJitterOperOWMinDS" || name == "rttMonLatestJitterOperOWMaxDS" || name == "rttMonLatestJitterOperNumOfOW" || name == "rttMonLatestJitterOperMOS" || name == "rttMonLatestJitterOperICPIF" || name == "rttMonLatestJitterOperIAJOut" || name == "rttMonLatestJitterOperIAJIn" || name == "rttMonLatestJitterOperAvgJitter" || name == "rttMonLatestJitterOperAvgSDJ" || name == "rttMonLatestJitterOperAvgDSJ" || name == "rttMonLatestJitterOperOWAvgSD" || name == "rttMonLatestJitterOperOWAvgDS" || name == "rttMonLatestJitterOperNTPState" || name == "rttMonLatestJitterOperUnSyncRTs" || name == "rttMonLatestJitterOperRTTSumHigh" || name == "rttMonLatestJitterOperRTTSum2High" || name == "rttMonLatestJitterOperOWSumSDHigh" || name == "rttMonLatestJitterOperOWSum2SDHigh" || name == "rttMonLatestJitterOperOWSumDSHigh" || name == "rttMonLatestJitterOperOWSum2DSHigh")
        return true;
    return false;
}

const Enum::YLeaf CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::RttMonApplPreConfigedType::filePath {1, "filePath"};
const Enum::YLeaf CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::RttMonApplPreConfigedType::scriptName {2, "scriptName"};

const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminThresholdType::never {1, "never"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminThresholdType::immediate {2, "immediate"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminThresholdType::consecutive {3, "consecutive"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminThresholdType::xOfy {4, "xOfy"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminThresholdType::average {5, "average"};

const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::trapOnly {2, "trapOnly"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::nmvtOnly {3, "nmvtOnly"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::triggerOnly {4, "triggerOnly"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::trapAndNmvt {5, "trapAndNmvt"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::trapAndTrigger {6, "trapAndTrigger"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::nmvtAndTrigger {7, "nmvtAndTrigger"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType::trapNmvtAndTrigger {8, "trapNmvtAndTrigger"};

const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonHistoryAdminFilter::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonHistoryAdminFilter::all {2, "all"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonHistoryAdminFilter::overThreshold {3, "overThreshold"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonHistoryAdminFilter::failures {4, "failures"};

const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState::reset {1, "reset"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState::orderlyStop {2, "orderlyStop"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState::immediateStop {3, "immediateStop"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState::pending {4, "pending"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState::inactive {5, "inactive"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState::active {6, "active"};
const Enum::YLeaf CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState::restart {7, "restart"};

const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminLSPFECType::ldpIpv4Prefix {1, "ldpIpv4Prefix"};

const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminPrecision::milliseconds {1, "milliseconds"};
const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminPrecision::microseconds {2, "microseconds"};

const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminProbePakPriority::normal {1, "normal"};
const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminProbePakPriority::high {2, "high"};

const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminOWNTPSyncTolType::percent {1, "percent"};
const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminOWNTPSyncTolType::absolute {2, "absolute"};

const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminReserveDsp::be {1, "be"};
const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminReserveDsp::gs {2, "gs"};
const Enum::YLeaf CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminReserveDsp::na {3, "na"};

const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminSize::n256 {1, "n256"};
const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminSize::n1k {2, "n1k"};
const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminSize::n64k {3, "n64k"};
const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminSize::n128k {4, "n128k"};
const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminSize::n256k {5, "n256k"};

const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminAction::write {1, "write"};
const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminAction::read {2, "read"};
const Enum::YLeaf CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminAction::writeRead {3, "writeRead"};

const Enum::YLeaf CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::RttMonReactTriggerOperState::active {1, "active"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::RttMonReactTriggerOperState::pending {2, "pending"};

const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonTypeSecFreqType::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonTypeSecFreqType::timeout {2, "timeout"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonTypeSecFreqType::connectionLoss {3, "connectionLoss"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonTypeSecFreqType::both {4, "both"};

const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactThresholdType::never {1, "never"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactThresholdType::immediate {2, "immediate"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactThresholdType::consecutive {3, "consecutive"};

const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactActionType::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactActionType::trapOnly {2, "trapOnly"};

const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactLpdNotifyType::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactLpdNotifyType::lpdPathDiscovery {2, "lpdPathDiscovery"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactLpdNotifyType::lpdGroupStatus {3, "lpdGroupStatus"};
const Enum::YLeaf CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactLpdNotifyType::lpdAll {4, "lpdAll"};

const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactThresholdType::never {1, "never"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactThresholdType::immediate {2, "immediate"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactThresholdType::consecutive {3, "consecutive"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactThresholdType::xOfy {4, "xOfy"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactThresholdType::average {5, "average"};

const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactActionType::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactActionType::trapOnly {2, "trapOnly"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactActionType::triggerOnly {3, "triggerOnly"};
const Enum::YLeaf CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactActionType::trapAndTrigger {4, "trapAndTrigger"};

const Enum::YLeaf CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::RttMonLatestJitterOperNTPState::sync {1, "sync"};
const Enum::YLeaf CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::RttMonLatestJitterOperNTPState::outOfSync {2, "outOfSync"};


}
}

