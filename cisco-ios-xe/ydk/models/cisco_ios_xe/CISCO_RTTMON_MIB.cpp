
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
    rttmonappl(std::make_shared<CISCORTTMONMIB::Rttmonappl>())
	,rttmonapplauthtable(std::make_shared<CISCORTTMONMIB::Rttmonapplauthtable>())
	,rttmonapplpreconfigedtable(std::make_shared<CISCORTTMONMIB::Rttmonapplpreconfigedtable>())
	,rttmonapplsupportedprotocolstable(std::make_shared<CISCORTTMONMIB::Rttmonapplsupportedprotocolstable>())
	,rttmonapplsupportedrtttypestable(std::make_shared<CISCORTTMONMIB::Rttmonapplsupportedrtttypestable>())
	,rttmonctrladmintable(std::make_shared<CISCORTTMONMIB::Rttmonctrladmintable>())
	,rttmonechoadmintable(std::make_shared<CISCORTTMONMIB::Rttmonechoadmintable>())
	,rttmonechopathadmintable(std::make_shared<CISCORTTMONMIB::Rttmonechopathadmintable>())
	,rttmonfileioadmintable(std::make_shared<CISCORTTMONMIB::Rttmonfileioadmintable>())
	,rttmongeneratedopertable(std::make_shared<CISCORTTMONMIB::Rttmongeneratedopertable>())
	,rttmongrpscheduleadmintable(std::make_shared<CISCORTTMONMIB::Rttmongrpscheduleadmintable>())
	,rttmonhistorycollectiontable(std::make_shared<CISCORTTMONMIB::Rttmonhistorycollectiontable>())
	,rttmonhttpstatstable(std::make_shared<CISCORTTMONMIB::Rttmonhttpstatstable>())
	,rttmonjitterstatstable(std::make_shared<CISCORTTMONMIB::Rttmonjitterstatstable>())
	,rttmonlatesthttpopertable(std::make_shared<CISCORTTMONMIB::Rttmonlatesthttpopertable>())
	,rttmonlatestjitteropertable(std::make_shared<CISCORTTMONMIB::Rttmonlatestjitteropertable>())
	,rttmonlpdgrpstatstable(std::make_shared<CISCORTTMONMIB::Rttmonlpdgrpstatstable>())
	,rttmonreacttable(std::make_shared<CISCORTTMONMIB::Rttmonreacttable>())
	,rttmonreacttriggeradmintable(std::make_shared<CISCORTTMONMIB::Rttmonreacttriggeradmintable>())
	,rttmonscriptadmintable(std::make_shared<CISCORTTMONMIB::Rttmonscriptadmintable>())
	,rttmonstatscapturetable(std::make_shared<CISCORTTMONMIB::Rttmonstatscapturetable>())
	,rttmonstatscollecttable(std::make_shared<CISCORTTMONMIB::Rttmonstatscollecttable>())
	,rttmonstatstotalstable(std::make_shared<CISCORTTMONMIB::Rttmonstatstotalstable>())
	,rttmplsvpnmonctrltable(std::make_shared<CISCORTTMONMIB::Rttmplsvpnmonctrltable>())
{
    rttmonappl->parent = this;
    rttmonapplauthtable->parent = this;
    rttmonapplpreconfigedtable->parent = this;
    rttmonapplsupportedprotocolstable->parent = this;
    rttmonapplsupportedrtttypestable->parent = this;
    rttmonctrladmintable->parent = this;
    rttmonechoadmintable->parent = this;
    rttmonechopathadmintable->parent = this;
    rttmonfileioadmintable->parent = this;
    rttmongeneratedopertable->parent = this;
    rttmongrpscheduleadmintable->parent = this;
    rttmonhistorycollectiontable->parent = this;
    rttmonhttpstatstable->parent = this;
    rttmonjitterstatstable->parent = this;
    rttmonlatesthttpopertable->parent = this;
    rttmonlatestjitteropertable->parent = this;
    rttmonlpdgrpstatstable->parent = this;
    rttmonreacttable->parent = this;
    rttmonreacttriggeradmintable->parent = this;
    rttmonscriptadmintable->parent = this;
    rttmonstatscapturetable->parent = this;
    rttmonstatscollecttable->parent = this;
    rttmonstatstotalstable->parent = this;
    rttmplsvpnmonctrltable->parent = this;

    yang_name = "CISCO-RTTMON-MIB"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCORTTMONMIB::~CISCORTTMONMIB()
{
}

bool CISCORTTMONMIB::has_data() const
{
    return (rttmonappl !=  nullptr && rttmonappl->has_data())
	|| (rttmonapplauthtable !=  nullptr && rttmonapplauthtable->has_data())
	|| (rttmonapplpreconfigedtable !=  nullptr && rttmonapplpreconfigedtable->has_data())
	|| (rttmonapplsupportedprotocolstable !=  nullptr && rttmonapplsupportedprotocolstable->has_data())
	|| (rttmonapplsupportedrtttypestable !=  nullptr && rttmonapplsupportedrtttypestable->has_data())
	|| (rttmonctrladmintable !=  nullptr && rttmonctrladmintable->has_data())
	|| (rttmonechoadmintable !=  nullptr && rttmonechoadmintable->has_data())
	|| (rttmonechopathadmintable !=  nullptr && rttmonechopathadmintable->has_data())
	|| (rttmonfileioadmintable !=  nullptr && rttmonfileioadmintable->has_data())
	|| (rttmongeneratedopertable !=  nullptr && rttmongeneratedopertable->has_data())
	|| (rttmongrpscheduleadmintable !=  nullptr && rttmongrpscheduleadmintable->has_data())
	|| (rttmonhistorycollectiontable !=  nullptr && rttmonhistorycollectiontable->has_data())
	|| (rttmonhttpstatstable !=  nullptr && rttmonhttpstatstable->has_data())
	|| (rttmonjitterstatstable !=  nullptr && rttmonjitterstatstable->has_data())
	|| (rttmonlatesthttpopertable !=  nullptr && rttmonlatesthttpopertable->has_data())
	|| (rttmonlatestjitteropertable !=  nullptr && rttmonlatestjitteropertable->has_data())
	|| (rttmonlpdgrpstatstable !=  nullptr && rttmonlpdgrpstatstable->has_data())
	|| (rttmonreacttable !=  nullptr && rttmonreacttable->has_data())
	|| (rttmonreacttriggeradmintable !=  nullptr && rttmonreacttriggeradmintable->has_data())
	|| (rttmonscriptadmintable !=  nullptr && rttmonscriptadmintable->has_data())
	|| (rttmonstatscapturetable !=  nullptr && rttmonstatscapturetable->has_data())
	|| (rttmonstatscollecttable !=  nullptr && rttmonstatscollecttable->has_data())
	|| (rttmonstatstotalstable !=  nullptr && rttmonstatstotalstable->has_data())
	|| (rttmplsvpnmonctrltable !=  nullptr && rttmplsvpnmonctrltable->has_data());
}

bool CISCORTTMONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (rttmonappl !=  nullptr && rttmonappl->has_operation())
	|| (rttmonapplauthtable !=  nullptr && rttmonapplauthtable->has_operation())
	|| (rttmonapplpreconfigedtable !=  nullptr && rttmonapplpreconfigedtable->has_operation())
	|| (rttmonapplsupportedprotocolstable !=  nullptr && rttmonapplsupportedprotocolstable->has_operation())
	|| (rttmonapplsupportedrtttypestable !=  nullptr && rttmonapplsupportedrtttypestable->has_operation())
	|| (rttmonctrladmintable !=  nullptr && rttmonctrladmintable->has_operation())
	|| (rttmonechoadmintable !=  nullptr && rttmonechoadmintable->has_operation())
	|| (rttmonechopathadmintable !=  nullptr && rttmonechopathadmintable->has_operation())
	|| (rttmonfileioadmintable !=  nullptr && rttmonfileioadmintable->has_operation())
	|| (rttmongeneratedopertable !=  nullptr && rttmongeneratedopertable->has_operation())
	|| (rttmongrpscheduleadmintable !=  nullptr && rttmongrpscheduleadmintable->has_operation())
	|| (rttmonhistorycollectiontable !=  nullptr && rttmonhistorycollectiontable->has_operation())
	|| (rttmonhttpstatstable !=  nullptr && rttmonhttpstatstable->has_operation())
	|| (rttmonjitterstatstable !=  nullptr && rttmonjitterstatstable->has_operation())
	|| (rttmonlatesthttpopertable !=  nullptr && rttmonlatesthttpopertable->has_operation())
	|| (rttmonlatestjitteropertable !=  nullptr && rttmonlatestjitteropertable->has_operation())
	|| (rttmonlpdgrpstatstable !=  nullptr && rttmonlpdgrpstatstable->has_operation())
	|| (rttmonreacttable !=  nullptr && rttmonreacttable->has_operation())
	|| (rttmonreacttriggeradmintable !=  nullptr && rttmonreacttriggeradmintable->has_operation())
	|| (rttmonscriptadmintable !=  nullptr && rttmonscriptadmintable->has_operation())
	|| (rttmonstatscapturetable !=  nullptr && rttmonstatscapturetable->has_operation())
	|| (rttmonstatscollecttable !=  nullptr && rttmonstatscollecttable->has_operation())
	|| (rttmonstatstotalstable !=  nullptr && rttmonstatstotalstable->has_operation())
	|| (rttmplsvpnmonctrltable !=  nullptr && rttmplsvpnmonctrltable->has_operation());
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
            rttmonappl = std::make_shared<CISCORTTMONMIB::Rttmonappl>();
        }
        return rttmonappl;
    }

    if(child_yang_name == "rttMonApplAuthTable")
    {
        if(rttmonapplauthtable == nullptr)
        {
            rttmonapplauthtable = std::make_shared<CISCORTTMONMIB::Rttmonapplauthtable>();
        }
        return rttmonapplauthtable;
    }

    if(child_yang_name == "rttMonApplPreConfigedTable")
    {
        if(rttmonapplpreconfigedtable == nullptr)
        {
            rttmonapplpreconfigedtable = std::make_shared<CISCORTTMONMIB::Rttmonapplpreconfigedtable>();
        }
        return rttmonapplpreconfigedtable;
    }

    if(child_yang_name == "rttMonApplSupportedProtocolsTable")
    {
        if(rttmonapplsupportedprotocolstable == nullptr)
        {
            rttmonapplsupportedprotocolstable = std::make_shared<CISCORTTMONMIB::Rttmonapplsupportedprotocolstable>();
        }
        return rttmonapplsupportedprotocolstable;
    }

    if(child_yang_name == "rttMonApplSupportedRttTypesTable")
    {
        if(rttmonapplsupportedrtttypestable == nullptr)
        {
            rttmonapplsupportedrtttypestable = std::make_shared<CISCORTTMONMIB::Rttmonapplsupportedrtttypestable>();
        }
        return rttmonapplsupportedrtttypestable;
    }

    if(child_yang_name == "rttMonCtrlAdminTable")
    {
        if(rttmonctrladmintable == nullptr)
        {
            rttmonctrladmintable = std::make_shared<CISCORTTMONMIB::Rttmonctrladmintable>();
        }
        return rttmonctrladmintable;
    }

    if(child_yang_name == "rttMonEchoAdminTable")
    {
        if(rttmonechoadmintable == nullptr)
        {
            rttmonechoadmintable = std::make_shared<CISCORTTMONMIB::Rttmonechoadmintable>();
        }
        return rttmonechoadmintable;
    }

    if(child_yang_name == "rttMonEchoPathAdminTable")
    {
        if(rttmonechopathadmintable == nullptr)
        {
            rttmonechopathadmintable = std::make_shared<CISCORTTMONMIB::Rttmonechopathadmintable>();
        }
        return rttmonechopathadmintable;
    }

    if(child_yang_name == "rttMonFileIOAdminTable")
    {
        if(rttmonfileioadmintable == nullptr)
        {
            rttmonfileioadmintable = std::make_shared<CISCORTTMONMIB::Rttmonfileioadmintable>();
        }
        return rttmonfileioadmintable;
    }

    if(child_yang_name == "rttMonGeneratedOperTable")
    {
        if(rttmongeneratedopertable == nullptr)
        {
            rttmongeneratedopertable = std::make_shared<CISCORTTMONMIB::Rttmongeneratedopertable>();
        }
        return rttmongeneratedopertable;
    }

    if(child_yang_name == "rttMonGrpScheduleAdminTable")
    {
        if(rttmongrpscheduleadmintable == nullptr)
        {
            rttmongrpscheduleadmintable = std::make_shared<CISCORTTMONMIB::Rttmongrpscheduleadmintable>();
        }
        return rttmongrpscheduleadmintable;
    }

    if(child_yang_name == "rttMonHistoryCollectionTable")
    {
        if(rttmonhistorycollectiontable == nullptr)
        {
            rttmonhistorycollectiontable = std::make_shared<CISCORTTMONMIB::Rttmonhistorycollectiontable>();
        }
        return rttmonhistorycollectiontable;
    }

    if(child_yang_name == "rttMonHTTPStatsTable")
    {
        if(rttmonhttpstatstable == nullptr)
        {
            rttmonhttpstatstable = std::make_shared<CISCORTTMONMIB::Rttmonhttpstatstable>();
        }
        return rttmonhttpstatstable;
    }

    if(child_yang_name == "rttMonJitterStatsTable")
    {
        if(rttmonjitterstatstable == nullptr)
        {
            rttmonjitterstatstable = std::make_shared<CISCORTTMONMIB::Rttmonjitterstatstable>();
        }
        return rttmonjitterstatstable;
    }

    if(child_yang_name == "rttMonLatestHTTPOperTable")
    {
        if(rttmonlatesthttpopertable == nullptr)
        {
            rttmonlatesthttpopertable = std::make_shared<CISCORTTMONMIB::Rttmonlatesthttpopertable>();
        }
        return rttmonlatesthttpopertable;
    }

    if(child_yang_name == "rttMonLatestJitterOperTable")
    {
        if(rttmonlatestjitteropertable == nullptr)
        {
            rttmonlatestjitteropertable = std::make_shared<CISCORTTMONMIB::Rttmonlatestjitteropertable>();
        }
        return rttmonlatestjitteropertable;
    }

    if(child_yang_name == "rttMonLpdGrpStatsTable")
    {
        if(rttmonlpdgrpstatstable == nullptr)
        {
            rttmonlpdgrpstatstable = std::make_shared<CISCORTTMONMIB::Rttmonlpdgrpstatstable>();
        }
        return rttmonlpdgrpstatstable;
    }

    if(child_yang_name == "rttMonReactTable")
    {
        if(rttmonreacttable == nullptr)
        {
            rttmonreacttable = std::make_shared<CISCORTTMONMIB::Rttmonreacttable>();
        }
        return rttmonreacttable;
    }

    if(child_yang_name == "rttMonReactTriggerAdminTable")
    {
        if(rttmonreacttriggeradmintable == nullptr)
        {
            rttmonreacttriggeradmintable = std::make_shared<CISCORTTMONMIB::Rttmonreacttriggeradmintable>();
        }
        return rttmonreacttriggeradmintable;
    }

    if(child_yang_name == "rttMonScriptAdminTable")
    {
        if(rttmonscriptadmintable == nullptr)
        {
            rttmonscriptadmintable = std::make_shared<CISCORTTMONMIB::Rttmonscriptadmintable>();
        }
        return rttmonscriptadmintable;
    }

    if(child_yang_name == "rttMonStatsCaptureTable")
    {
        if(rttmonstatscapturetable == nullptr)
        {
            rttmonstatscapturetable = std::make_shared<CISCORTTMONMIB::Rttmonstatscapturetable>();
        }
        return rttmonstatscapturetable;
    }

    if(child_yang_name == "rttMonStatsCollectTable")
    {
        if(rttmonstatscollecttable == nullptr)
        {
            rttmonstatscollecttable = std::make_shared<CISCORTTMONMIB::Rttmonstatscollecttable>();
        }
        return rttmonstatscollecttable;
    }

    if(child_yang_name == "rttMonStatsTotalsTable")
    {
        if(rttmonstatstotalstable == nullptr)
        {
            rttmonstatstotalstable = std::make_shared<CISCORTTMONMIB::Rttmonstatstotalstable>();
        }
        return rttmonstatstotalstable;
    }

    if(child_yang_name == "rttMplsVpnMonCtrlTable")
    {
        if(rttmplsvpnmonctrltable == nullptr)
        {
            rttmplsvpnmonctrltable = std::make_shared<CISCORTTMONMIB::Rttmplsvpnmonctrltable>();
        }
        return rttmplsvpnmonctrltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rttmonappl != nullptr)
    {
        children["rttMonAppl"] = rttmonappl;
    }

    if(rttmonapplauthtable != nullptr)
    {
        children["rttMonApplAuthTable"] = rttmonapplauthtable;
    }

    if(rttmonapplpreconfigedtable != nullptr)
    {
        children["rttMonApplPreConfigedTable"] = rttmonapplpreconfigedtable;
    }

    if(rttmonapplsupportedprotocolstable != nullptr)
    {
        children["rttMonApplSupportedProtocolsTable"] = rttmonapplsupportedprotocolstable;
    }

    if(rttmonapplsupportedrtttypestable != nullptr)
    {
        children["rttMonApplSupportedRttTypesTable"] = rttmonapplsupportedrtttypestable;
    }

    if(rttmonctrladmintable != nullptr)
    {
        children["rttMonCtrlAdminTable"] = rttmonctrladmintable;
    }

    if(rttmonechoadmintable != nullptr)
    {
        children["rttMonEchoAdminTable"] = rttmonechoadmintable;
    }

    if(rttmonechopathadmintable != nullptr)
    {
        children["rttMonEchoPathAdminTable"] = rttmonechopathadmintable;
    }

    if(rttmonfileioadmintable != nullptr)
    {
        children["rttMonFileIOAdminTable"] = rttmonfileioadmintable;
    }

    if(rttmongeneratedopertable != nullptr)
    {
        children["rttMonGeneratedOperTable"] = rttmongeneratedopertable;
    }

    if(rttmongrpscheduleadmintable != nullptr)
    {
        children["rttMonGrpScheduleAdminTable"] = rttmongrpscheduleadmintable;
    }

    if(rttmonhistorycollectiontable != nullptr)
    {
        children["rttMonHistoryCollectionTable"] = rttmonhistorycollectiontable;
    }

    if(rttmonhttpstatstable != nullptr)
    {
        children["rttMonHTTPStatsTable"] = rttmonhttpstatstable;
    }

    if(rttmonjitterstatstable != nullptr)
    {
        children["rttMonJitterStatsTable"] = rttmonjitterstatstable;
    }

    if(rttmonlatesthttpopertable != nullptr)
    {
        children["rttMonLatestHTTPOperTable"] = rttmonlatesthttpopertable;
    }

    if(rttmonlatestjitteropertable != nullptr)
    {
        children["rttMonLatestJitterOperTable"] = rttmonlatestjitteropertable;
    }

    if(rttmonlpdgrpstatstable != nullptr)
    {
        children["rttMonLpdGrpStatsTable"] = rttmonlpdgrpstatstable;
    }

    if(rttmonreacttable != nullptr)
    {
        children["rttMonReactTable"] = rttmonreacttable;
    }

    if(rttmonreacttriggeradmintable != nullptr)
    {
        children["rttMonReactTriggerAdminTable"] = rttmonreacttriggeradmintable;
    }

    if(rttmonscriptadmintable != nullptr)
    {
        children["rttMonScriptAdminTable"] = rttmonscriptadmintable;
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

    if(rttmplsvpnmonctrltable != nullptr)
    {
        children["rttMplsVpnMonCtrlTable"] = rttmplsvpnmonctrltable;
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
    if(name == "rttMonAppl" || name == "rttMonApplAuthTable" || name == "rttMonApplPreConfigedTable" || name == "rttMonApplSupportedProtocolsTable" || name == "rttMonApplSupportedRttTypesTable" || name == "rttMonCtrlAdminTable" || name == "rttMonEchoAdminTable" || name == "rttMonEchoPathAdminTable" || name == "rttMonFileIOAdminTable" || name == "rttMonGeneratedOperTable" || name == "rttMonGrpScheduleAdminTable" || name == "rttMonHistoryCollectionTable" || name == "rttMonHTTPStatsTable" || name == "rttMonJitterStatsTable" || name == "rttMonLatestHTTPOperTable" || name == "rttMonLatestJitterOperTable" || name == "rttMonLpdGrpStatsTable" || name == "rttMonReactTable" || name == "rttMonReactTriggerAdminTable" || name == "rttMonScriptAdminTable" || name == "rttMonStatsCaptureTable" || name == "rttMonStatsCollectTable" || name == "rttMonStatsTotalsTable" || name == "rttMplsVpnMonCtrlTable")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonappl::Rttmonappl()
    :
    rttmonapplfreememlowwatermark{YType::int32, "rttMonApplFreeMemLowWaterMark"},
    rttmonappllatestseterror{YType::str, "rttMonApplLatestSetError"},
    rttmonappllpdgrpstatsreset{YType::int32, "rttMonApplLpdGrpStatsReset"},
    rttmonapplmaxpacketdatasize{YType::int32, "rttMonApplMaxPacketDataSize"},
    rttmonapplnumctrladminentry{YType::int32, "rttMonApplNumCtrlAdminEntry"},
    rttmonapplpreconfigedreset{YType::enumeration, "rttMonApplPreConfigedReset"},
    rttmonapplprobecapacity{YType::int32, "rttMonApplProbeCapacity"},
    rttmonapplreset{YType::enumeration, "rttMonApplReset"},
    rttmonapplresponder{YType::boolean, "rttMonApplResponder"},
    rttmonappltimeoflastset{YType::uint32, "rttMonApplTimeOfLastSet"},
    rttmonapplversion{YType::str, "rttMonApplVersion"}
{

    yang_name = "rttMonAppl"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonappl::~Rttmonappl()
{
}

bool CISCORTTMONMIB::Rttmonappl::has_data() const
{
    return rttmonapplfreememlowwatermark.is_set
	|| rttmonappllatestseterror.is_set
	|| rttmonappllpdgrpstatsreset.is_set
	|| rttmonapplmaxpacketdatasize.is_set
	|| rttmonapplnumctrladminentry.is_set
	|| rttmonapplpreconfigedreset.is_set
	|| rttmonapplprobecapacity.is_set
	|| rttmonapplreset.is_set
	|| rttmonapplresponder.is_set
	|| rttmonappltimeoflastset.is_set
	|| rttmonapplversion.is_set;
}

bool CISCORTTMONMIB::Rttmonappl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplfreememlowwatermark.yfilter)
	|| ydk::is_set(rttmonappllatestseterror.yfilter)
	|| ydk::is_set(rttmonappllpdgrpstatsreset.yfilter)
	|| ydk::is_set(rttmonapplmaxpacketdatasize.yfilter)
	|| ydk::is_set(rttmonapplnumctrladminentry.yfilter)
	|| ydk::is_set(rttmonapplpreconfigedreset.yfilter)
	|| ydk::is_set(rttmonapplprobecapacity.yfilter)
	|| ydk::is_set(rttmonapplreset.yfilter)
	|| ydk::is_set(rttmonapplresponder.yfilter)
	|| ydk::is_set(rttmonappltimeoflastset.yfilter)
	|| ydk::is_set(rttmonapplversion.yfilter);
}

std::string CISCORTTMONMIB::Rttmonappl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonappl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonAppl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonappl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplfreememlowwatermark.is_set || is_set(rttmonapplfreememlowwatermark.yfilter)) leaf_name_data.push_back(rttmonapplfreememlowwatermark.get_name_leafdata());
    if (rttmonappllatestseterror.is_set || is_set(rttmonappllatestseterror.yfilter)) leaf_name_data.push_back(rttmonappllatestseterror.get_name_leafdata());
    if (rttmonappllpdgrpstatsreset.is_set || is_set(rttmonappllpdgrpstatsreset.yfilter)) leaf_name_data.push_back(rttmonappllpdgrpstatsreset.get_name_leafdata());
    if (rttmonapplmaxpacketdatasize.is_set || is_set(rttmonapplmaxpacketdatasize.yfilter)) leaf_name_data.push_back(rttmonapplmaxpacketdatasize.get_name_leafdata());
    if (rttmonapplnumctrladminentry.is_set || is_set(rttmonapplnumctrladminentry.yfilter)) leaf_name_data.push_back(rttmonapplnumctrladminentry.get_name_leafdata());
    if (rttmonapplpreconfigedreset.is_set || is_set(rttmonapplpreconfigedreset.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedreset.get_name_leafdata());
    if (rttmonapplprobecapacity.is_set || is_set(rttmonapplprobecapacity.yfilter)) leaf_name_data.push_back(rttmonapplprobecapacity.get_name_leafdata());
    if (rttmonapplreset.is_set || is_set(rttmonapplreset.yfilter)) leaf_name_data.push_back(rttmonapplreset.get_name_leafdata());
    if (rttmonapplresponder.is_set || is_set(rttmonapplresponder.yfilter)) leaf_name_data.push_back(rttmonapplresponder.get_name_leafdata());
    if (rttmonappltimeoflastset.is_set || is_set(rttmonappltimeoflastset.yfilter)) leaf_name_data.push_back(rttmonappltimeoflastset.get_name_leafdata());
    if (rttmonapplversion.is_set || is_set(rttmonapplversion.yfilter)) leaf_name_data.push_back(rttmonapplversion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonappl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonappl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonappl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rttMonApplLpdGrpStatsReset")
    {
        rttmonappllpdgrpstatsreset = value;
        rttmonappllpdgrpstatsreset.value_namespace = name_space;
        rttmonappllpdgrpstatsreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplMaxPacketDataSize")
    {
        rttmonapplmaxpacketdatasize = value;
        rttmonapplmaxpacketdatasize.value_namespace = name_space;
        rttmonapplmaxpacketdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplNumCtrlAdminEntry")
    {
        rttmonapplnumctrladminentry = value;
        rttmonapplnumctrladminentry.value_namespace = name_space;
        rttmonapplnumctrladminentry.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonApplReset")
    {
        rttmonapplreset = value;
        rttmonapplreset.value_namespace = name_space;
        rttmonapplreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplResponder")
    {
        rttmonapplresponder = value;
        rttmonapplresponder.value_namespace = name_space;
        rttmonapplresponder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplTimeOfLastSet")
    {
        rttmonappltimeoflastset = value;
        rttmonappltimeoflastset.value_namespace = name_space;
        rttmonappltimeoflastset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonApplVersion")
    {
        rttmonapplversion = value;
        rttmonapplversion.value_namespace = name_space;
        rttmonapplversion.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonappl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonApplFreeMemLowWaterMark")
    {
        rttmonapplfreememlowwatermark.yfilter = yfilter;
    }
    if(value_path == "rttMonApplLatestSetError")
    {
        rttmonappllatestseterror.yfilter = yfilter;
    }
    if(value_path == "rttMonApplLpdGrpStatsReset")
    {
        rttmonappllpdgrpstatsreset.yfilter = yfilter;
    }
    if(value_path == "rttMonApplMaxPacketDataSize")
    {
        rttmonapplmaxpacketdatasize.yfilter = yfilter;
    }
    if(value_path == "rttMonApplNumCtrlAdminEntry")
    {
        rttmonapplnumctrladminentry.yfilter = yfilter;
    }
    if(value_path == "rttMonApplPreConfigedReset")
    {
        rttmonapplpreconfigedreset.yfilter = yfilter;
    }
    if(value_path == "rttMonApplProbeCapacity")
    {
        rttmonapplprobecapacity.yfilter = yfilter;
    }
    if(value_path == "rttMonApplReset")
    {
        rttmonapplreset.yfilter = yfilter;
    }
    if(value_path == "rttMonApplResponder")
    {
        rttmonapplresponder.yfilter = yfilter;
    }
    if(value_path == "rttMonApplTimeOfLastSet")
    {
        rttmonappltimeoflastset.yfilter = yfilter;
    }
    if(value_path == "rttMonApplVersion")
    {
        rttmonapplversion.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonappl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplFreeMemLowWaterMark" || name == "rttMonApplLatestSetError" || name == "rttMonApplLpdGrpStatsReset" || name == "rttMonApplMaxPacketDataSize" || name == "rttMonApplNumCtrlAdminEntry" || name == "rttMonApplPreConfigedReset" || name == "rttMonApplProbeCapacity" || name == "rttMonApplReset" || name == "rttMonApplResponder" || name == "rttMonApplTimeOfLastSet" || name == "rttMonApplVersion")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthtable()
{

    yang_name = "rttMonApplAuthTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonapplauthtable::~Rttmonapplauthtable()
{
}

bool CISCORTTMONMIB::Rttmonapplauthtable::has_data() const
{
    for (std::size_t index=0; index<rttmonapplauthentry.size(); index++)
    {
        if(rttmonapplauthentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonapplauthtable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplauthentry.size(); index++)
    {
        if(rttmonapplauthentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonapplauthtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplauthtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplAuthTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplauthtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplauthtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplAuthEntry")
    {
        for(auto const & c : rttmonapplauthentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry>();
        c->parent = this;
        rttmonapplauthentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplauthtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonapplauthentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonapplauthtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonapplauthtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonapplauthtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplAuthEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::Rttmonapplauthentry()
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

CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::~Rttmonapplauthentry()
{
}

bool CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::has_data() const
{
    return rttmonapplauthindex.is_set
	|| rttmonapplauthkeychain.is_set
	|| rttmonapplauthkeystring1.is_set
	|| rttmonapplauthkeystring2.is_set
	|| rttmonapplauthkeystring3.is_set
	|| rttmonapplauthkeystring4.is_set
	|| rttmonapplauthkeystring5.is_set
	|| rttmonapplauthstatus.is_set;
}

bool CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::has_operation() const
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

std::string CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplAuthTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplAuthEntry" <<"[rttMonApplAuthIndex='" <<rttmonapplauthindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmonapplauthtable::Rttmonapplauthentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplAuthIndex" || name == "rttMonApplAuthKeyChain" || name == "rttMonApplAuthKeyString1" || name == "rttMonApplAuthKeyString2" || name == "rttMonApplAuthKeyString3" || name == "rttMonApplAuthKeyString4" || name == "rttMonApplAuthKeyString5" || name == "rttMonApplAuthStatus")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedtable()
{

    yang_name = "rttMonApplPreConfigedTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonapplpreconfigedtable::~Rttmonapplpreconfigedtable()
{
}

bool CISCORTTMONMIB::Rttmonapplpreconfigedtable::has_data() const
{
    for (std::size_t index=0; index<rttmonapplpreconfigedentry.size(); index++)
    {
        if(rttmonapplpreconfigedentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonapplpreconfigedtable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplpreconfigedentry.size(); index++)
    {
        if(rttmonapplpreconfigedentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonapplpreconfigedtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplpreconfigedtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplPreConfigedTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplpreconfigedtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplpreconfigedtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplPreConfigedEntry")
    {
        for(auto const & c : rttmonapplpreconfigedentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry>();
        c->parent = this;
        rttmonapplpreconfigedentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplpreconfigedtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonapplpreconfigedentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonapplpreconfigedtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonapplpreconfigedtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonapplpreconfigedtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplPreConfigedEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::Rttmonapplpreconfigedentry()
    :
    rttmonapplpreconfigedtype{YType::enumeration, "rttMonApplPreConfigedType"},
    rttmonapplpreconfigedname{YType::str, "rttMonApplPreConfigedName"},
    rttmonapplpreconfigedvalid{YType::boolean, "rttMonApplPreConfigedValid"}
{

    yang_name = "rttMonApplPreConfigedEntry"; yang_parent_name = "rttMonApplPreConfigedTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::~Rttmonapplpreconfigedentry()
{
}

bool CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::has_data() const
{
    return rttmonapplpreconfigedtype.is_set
	|| rttmonapplpreconfigedname.is_set
	|| rttmonapplpreconfigedvalid.is_set;
}

bool CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplpreconfigedtype.yfilter)
	|| ydk::is_set(rttmonapplpreconfigedname.yfilter)
	|| ydk::is_set(rttmonapplpreconfigedvalid.yfilter);
}

std::string CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplPreConfigedTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplPreConfigedEntry" <<"[rttMonApplPreConfigedType='" <<rttmonapplpreconfigedtype <<"']" <<"[rttMonApplPreConfigedName='" <<rttmonapplpreconfigedname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplpreconfigedtype.is_set || is_set(rttmonapplpreconfigedtype.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedtype.get_name_leafdata());
    if (rttmonapplpreconfigedname.is_set || is_set(rttmonapplpreconfigedname.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedname.get_name_leafdata());
    if (rttmonapplpreconfigedvalid.is_set || is_set(rttmonapplpreconfigedvalid.yfilter)) leaf_name_data.push_back(rttmonapplpreconfigedvalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplPreConfigedType" || name == "rttMonApplPreConfigedName" || name == "rttMonApplPreConfigedValid")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolstable()
{

    yang_name = "rttMonApplSupportedProtocolsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::~Rttmonapplsupportedprotocolstable()
{
}

bool CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::has_data() const
{
    for (std::size_t index=0; index<rttmonapplsupportedprotocolsentry.size(); index++)
    {
        if(rttmonapplsupportedprotocolsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplsupportedprotocolsentry.size(); index++)
    {
        if(rttmonapplsupportedprotocolsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedProtocolsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplSupportedProtocolsEntry")
    {
        for(auto const & c : rttmonapplsupportedprotocolsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry>();
        c->parent = this;
        rttmonapplsupportedprotocolsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonapplsupportedprotocolsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedProtocolsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::Rttmonapplsupportedprotocolsentry()
    :
    rttmonapplsupportedprotocols{YType::enumeration, "rttMonApplSupportedProtocols"},
    rttmonapplsupportedprotocolsvalid{YType::boolean, "rttMonApplSupportedProtocolsValid"}
{

    yang_name = "rttMonApplSupportedProtocolsEntry"; yang_parent_name = "rttMonApplSupportedProtocolsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::~Rttmonapplsupportedprotocolsentry()
{
}

bool CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::has_data() const
{
    return rttmonapplsupportedprotocols.is_set
	|| rttmonapplsupportedprotocolsvalid.is_set;
}

bool CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplsupportedprotocols.yfilter)
	|| ydk::is_set(rttmonapplsupportedprotocolsvalid.yfilter);
}

std::string CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplSupportedProtocolsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedProtocolsEntry" <<"[rttMonApplSupportedProtocols='" <<rttmonapplsupportedprotocols <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplsupportedprotocols.is_set || is_set(rttmonapplsupportedprotocols.yfilter)) leaf_name_data.push_back(rttmonapplsupportedprotocols.get_name_leafdata());
    if (rttmonapplsupportedprotocolsvalid.is_set || is_set(rttmonapplsupportedprotocolsvalid.yfilter)) leaf_name_data.push_back(rttmonapplsupportedprotocolsvalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedProtocols" || name == "rttMonApplSupportedProtocolsValid")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypestable()
{

    yang_name = "rttMonApplSupportedRttTypesTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::~Rttmonapplsupportedrtttypestable()
{
}

bool CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::has_data() const
{
    for (std::size_t index=0; index<rttmonapplsupportedrtttypesentry.size(); index++)
    {
        if(rttmonapplsupportedrtttypesentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::has_operation() const
{
    for (std::size_t index=0; index<rttmonapplsupportedrtttypesentry.size(); index++)
    {
        if(rttmonapplsupportedrtttypesentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedRttTypesTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonApplSupportedRttTypesEntry")
    {
        for(auto const & c : rttmonapplsupportedrtttypesentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry>();
        c->parent = this;
        rttmonapplsupportedrtttypesentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonapplsupportedrtttypesentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedRttTypesEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::Rttmonapplsupportedrtttypesentry()
    :
    rttmonapplsupportedrtttypes{YType::enumeration, "rttMonApplSupportedRttTypes"},
    rttmonapplsupportedrtttypesvalid{YType::boolean, "rttMonApplSupportedRttTypesValid"}
{

    yang_name = "rttMonApplSupportedRttTypesEntry"; yang_parent_name = "rttMonApplSupportedRttTypesTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::~Rttmonapplsupportedrtttypesentry()
{
}

bool CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::has_data() const
{
    return rttmonapplsupportedrtttypes.is_set
	|| rttmonapplsupportedrtttypesvalid.is_set;
}

bool CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonapplsupportedrtttypes.yfilter)
	|| ydk::is_set(rttmonapplsupportedrtttypesvalid.yfilter);
}

std::string CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonApplSupportedRttTypesTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonApplSupportedRttTypesEntry" <<"[rttMonApplSupportedRttTypes='" <<rttmonapplsupportedrtttypes <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonapplsupportedrtttypes.is_set || is_set(rttmonapplsupportedrtttypes.yfilter)) leaf_name_data.push_back(rttmonapplsupportedrtttypes.get_name_leafdata());
    if (rttmonapplsupportedrtttypesvalid.is_set || is_set(rttmonapplsupportedrtttypesvalid.yfilter)) leaf_name_data.push_back(rttmonapplsupportedrtttypesvalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonApplSupportedRttTypes" || name == "rttMonApplSupportedRttTypesValid")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladmintable()
{

    yang_name = "rttMonCtrlAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonctrladmintable::~Rttmonctrladmintable()
{
}

bool CISCORTTMONMIB::Rttmonctrladmintable::has_data() const
{
    for (std::size_t index=0; index<rttmonctrladminentry.size(); index++)
    {
        if(rttmonctrladminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonctrladmintable::has_operation() const
{
    for (std::size_t index=0; index<rttmonctrladminentry.size(); index++)
    {
        if(rttmonctrladminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonctrladmintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonctrladmintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonCtrlAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonctrladmintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonctrladmintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonCtrlAdminEntry")
    {
        for(auto const & c : rttmonctrladminentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry>();
        c->parent = this;
        rttmonctrladminentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonctrladmintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonctrladminentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonctrladmintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonctrladmintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonctrladmintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrladminentry()
    :
    rttmonctrladminindex{YType::int32, "rttMonCtrlAdminIndex"},
    rttmonctrladminfrequency{YType::int32, "rttMonCtrlAdminFrequency"},
    rttmonctrladmingroupname{YType::str, "rttMonCtrlAdminGroupName"},
    rttmonctrladminnvgen{YType::boolean, "rttMonCtrlAdminNvgen"},
    rttmonctrladminowner{YType::str, "rttMonCtrlAdminOwner"},
    rttmonctrladminrtttype{YType::enumeration, "rttMonCtrlAdminRttType"},
    rttmonctrladminstatus{YType::enumeration, "rttMonCtrlAdminStatus"},
    rttmonctrladmintag{YType::str, "rttMonCtrlAdminTag"},
    rttmonctrladminthreshold{YType::int32, "rttMonCtrlAdminThreshold"},
    rttmonctrladmintimeout{YType::int32, "rttMonCtrlAdminTimeout"},
    rttmonctrladminverifydata{YType::boolean, "rttMonCtrlAdminVerifyData"},
    rttmonctrloperconnectionlostoccurred{YType::boolean, "rttMonCtrlOperConnectionLostOccurred"},
    rttmonctrloperdiagtext{YType::str, "rttMonCtrlOperDiagText"},
    rttmonctrlopermodificationtime{YType::uint32, "rttMonCtrlOperModificationTime"},
    rttmonctrlopernumrtts{YType::int32, "rttMonCtrlOperNumRtts"},
    rttmonctrloperoctetsinuse{YType::uint32, "rttMonCtrlOperOctetsInUse"},
    rttmonctrloperoverthresholdoccurred{YType::boolean, "rttMonCtrlOperOverThresholdOccurred"},
    rttmonctrloperresettime{YType::uint32, "rttMonCtrlOperResetTime"},
    rttmonctrloperrttlife{YType::int32, "rttMonCtrlOperRttLife"},
    rttmonctrloperstate{YType::enumeration, "rttMonCtrlOperState"},
    rttmonctrlopertimeoutoccurred{YType::boolean, "rttMonCtrlOperTimeoutOccurred"},
    rttmonctrloperverifyerroroccurred{YType::boolean, "rttMonCtrlOperVerifyErrorOccurred"},
    rttmonhistoryadminfilter{YType::enumeration, "rttMonHistoryAdminFilter"},
    rttmonhistoryadminnumbuckets{YType::int32, "rttMonHistoryAdminNumBuckets"},
    rttmonhistoryadminnumlives{YType::int32, "rttMonHistoryAdminNumLives"},
    rttmonhistoryadminnumsamples{YType::int32, "rttMonHistoryAdminNumSamples"},
    rttmonlatestrttoperaddress{YType::str, "rttMonLatestRttOperAddress"},
    rttmonlatestrttoperapplspecificsense{YType::int32, "rttMonLatestRttOperApplSpecificSense"},
    rttmonlatestrttopercompletiontime{YType::uint32, "rttMonLatestRttOperCompletionTime"},
    rttmonlatestrttopersense{YType::enumeration, "rttMonLatestRttOperSense"},
    rttmonlatestrttopersensedescription{YType::str, "rttMonLatestRttOperSenseDescription"},
    rttmonlatestrttopertime{YType::uint32, "rttMonLatestRttOperTime"},
    rttmonreactadminactiontype{YType::enumeration, "rttMonReactAdminActionType"},
    rttmonreactadminconnectionenable{YType::boolean, "rttMonReactAdminConnectionEnable"},
    rttmonreactadminthresholdcount{YType::int32, "rttMonReactAdminThresholdCount"},
    rttmonreactadminthresholdcount2{YType::int32, "rttMonReactAdminThresholdCount2"},
    rttmonreactadminthresholdfalling{YType::int32, "rttMonReactAdminThresholdFalling"},
    rttmonreactadminthresholdtype{YType::enumeration, "rttMonReactAdminThresholdType"},
    rttmonreactadmintimeoutenable{YType::boolean, "rttMonReactAdminTimeoutEnable"},
    rttmonreactadminverifyerrorenable{YType::boolean, "rttMonReactAdminVerifyErrorEnable"},
    rttmonscheduleadminconceptrowageout{YType::int32, "rttMonScheduleAdminConceptRowAgeout"},
    rttmonscheduleadminconceptrowageoutv2{YType::int32, "rttMonScheduleAdminConceptRowAgeoutV2"},
    rttmonscheduleadminrttlife{YType::int32, "rttMonScheduleAdminRttLife"},
    rttmonscheduleadminrttrecurring{YType::boolean, "rttMonScheduleAdminRttRecurring"},
    rttmonscheduleadminrttstarttime{YType::uint32, "rttMonScheduleAdminRttStartTime"},
    rttmonstatisticsadmindistinterval{YType::int32, "rttMonStatisticsAdminDistInterval"},
    rttmonstatisticsadminnumdistbuckets{YType::int32, "rttMonStatisticsAdminNumDistBuckets"},
    rttmonstatisticsadminnumhops{YType::int32, "rttMonStatisticsAdminNumHops"},
    rttmonstatisticsadminnumhourgroups{YType::int32, "rttMonStatisticsAdminNumHourGroups"},
    rttmonstatisticsadminnumpaths{YType::int32, "rttMonStatisticsAdminNumPaths"}
{

    yang_name = "rttMonCtrlAdminEntry"; yang_parent_name = "rttMonCtrlAdminTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::~Rttmonctrladminentry()
{
}

bool CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonctrladminfrequency.is_set
	|| rttmonctrladmingroupname.is_set
	|| rttmonctrladminnvgen.is_set
	|| rttmonctrladminowner.is_set
	|| rttmonctrladminrtttype.is_set
	|| rttmonctrladminstatus.is_set
	|| rttmonctrladmintag.is_set
	|| rttmonctrladminthreshold.is_set
	|| rttmonctrladmintimeout.is_set
	|| rttmonctrladminverifydata.is_set
	|| rttmonctrloperconnectionlostoccurred.is_set
	|| rttmonctrloperdiagtext.is_set
	|| rttmonctrlopermodificationtime.is_set
	|| rttmonctrlopernumrtts.is_set
	|| rttmonctrloperoctetsinuse.is_set
	|| rttmonctrloperoverthresholdoccurred.is_set
	|| rttmonctrloperresettime.is_set
	|| rttmonctrloperrttlife.is_set
	|| rttmonctrloperstate.is_set
	|| rttmonctrlopertimeoutoccurred.is_set
	|| rttmonctrloperverifyerroroccurred.is_set
	|| rttmonhistoryadminfilter.is_set
	|| rttmonhistoryadminnumbuckets.is_set
	|| rttmonhistoryadminnumlives.is_set
	|| rttmonhistoryadminnumsamples.is_set
	|| rttmonlatestrttoperaddress.is_set
	|| rttmonlatestrttoperapplspecificsense.is_set
	|| rttmonlatestrttopercompletiontime.is_set
	|| rttmonlatestrttopersense.is_set
	|| rttmonlatestrttopersensedescription.is_set
	|| rttmonlatestrttopertime.is_set
	|| rttmonreactadminactiontype.is_set
	|| rttmonreactadminconnectionenable.is_set
	|| rttmonreactadminthresholdcount.is_set
	|| rttmonreactadminthresholdcount2.is_set
	|| rttmonreactadminthresholdfalling.is_set
	|| rttmonreactadminthresholdtype.is_set
	|| rttmonreactadmintimeoutenable.is_set
	|| rttmonreactadminverifyerrorenable.is_set
	|| rttmonscheduleadminconceptrowageout.is_set
	|| rttmonscheduleadminconceptrowageoutv2.is_set
	|| rttmonscheduleadminrttlife.is_set
	|| rttmonscheduleadminrttrecurring.is_set
	|| rttmonscheduleadminrttstarttime.is_set
	|| rttmonstatisticsadmindistinterval.is_set
	|| rttmonstatisticsadminnumdistbuckets.is_set
	|| rttmonstatisticsadminnumhops.is_set
	|| rttmonstatisticsadminnumhourgroups.is_set
	|| rttmonstatisticsadminnumpaths.is_set;
}

bool CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonctrladminfrequency.yfilter)
	|| ydk::is_set(rttmonctrladmingroupname.yfilter)
	|| ydk::is_set(rttmonctrladminnvgen.yfilter)
	|| ydk::is_set(rttmonctrladminowner.yfilter)
	|| ydk::is_set(rttmonctrladminrtttype.yfilter)
	|| ydk::is_set(rttmonctrladminstatus.yfilter)
	|| ydk::is_set(rttmonctrladmintag.yfilter)
	|| ydk::is_set(rttmonctrladminthreshold.yfilter)
	|| ydk::is_set(rttmonctrladmintimeout.yfilter)
	|| ydk::is_set(rttmonctrladminverifydata.yfilter)
	|| ydk::is_set(rttmonctrloperconnectionlostoccurred.yfilter)
	|| ydk::is_set(rttmonctrloperdiagtext.yfilter)
	|| ydk::is_set(rttmonctrlopermodificationtime.yfilter)
	|| ydk::is_set(rttmonctrlopernumrtts.yfilter)
	|| ydk::is_set(rttmonctrloperoctetsinuse.yfilter)
	|| ydk::is_set(rttmonctrloperoverthresholdoccurred.yfilter)
	|| ydk::is_set(rttmonctrloperresettime.yfilter)
	|| ydk::is_set(rttmonctrloperrttlife.yfilter)
	|| ydk::is_set(rttmonctrloperstate.yfilter)
	|| ydk::is_set(rttmonctrlopertimeoutoccurred.yfilter)
	|| ydk::is_set(rttmonctrloperverifyerroroccurred.yfilter)
	|| ydk::is_set(rttmonhistoryadminfilter.yfilter)
	|| ydk::is_set(rttmonhistoryadminnumbuckets.yfilter)
	|| ydk::is_set(rttmonhistoryadminnumlives.yfilter)
	|| ydk::is_set(rttmonhistoryadminnumsamples.yfilter)
	|| ydk::is_set(rttmonlatestrttoperaddress.yfilter)
	|| ydk::is_set(rttmonlatestrttoperapplspecificsense.yfilter)
	|| ydk::is_set(rttmonlatestrttopercompletiontime.yfilter)
	|| ydk::is_set(rttmonlatestrttopersense.yfilter)
	|| ydk::is_set(rttmonlatestrttopersensedescription.yfilter)
	|| ydk::is_set(rttmonlatestrttopertime.yfilter)
	|| ydk::is_set(rttmonreactadminactiontype.yfilter)
	|| ydk::is_set(rttmonreactadminconnectionenable.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdcount.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdcount2.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdfalling.yfilter)
	|| ydk::is_set(rttmonreactadminthresholdtype.yfilter)
	|| ydk::is_set(rttmonreactadmintimeoutenable.yfilter)
	|| ydk::is_set(rttmonreactadminverifyerrorenable.yfilter)
	|| ydk::is_set(rttmonscheduleadminconceptrowageout.yfilter)
	|| ydk::is_set(rttmonscheduleadminconceptrowageoutv2.yfilter)
	|| ydk::is_set(rttmonscheduleadminrttlife.yfilter)
	|| ydk::is_set(rttmonscheduleadminrttrecurring.yfilter)
	|| ydk::is_set(rttmonscheduleadminrttstarttime.yfilter)
	|| ydk::is_set(rttmonstatisticsadmindistinterval.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumdistbuckets.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumhops.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumhourgroups.yfilter)
	|| ydk::is_set(rttmonstatisticsadminnumpaths.yfilter);
}

std::string CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonCtrlAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonCtrlAdminEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonctrladminfrequency.is_set || is_set(rttmonctrladminfrequency.yfilter)) leaf_name_data.push_back(rttmonctrladminfrequency.get_name_leafdata());
    if (rttmonctrladmingroupname.is_set || is_set(rttmonctrladmingroupname.yfilter)) leaf_name_data.push_back(rttmonctrladmingroupname.get_name_leafdata());
    if (rttmonctrladminnvgen.is_set || is_set(rttmonctrladminnvgen.yfilter)) leaf_name_data.push_back(rttmonctrladminnvgen.get_name_leafdata());
    if (rttmonctrladminowner.is_set || is_set(rttmonctrladminowner.yfilter)) leaf_name_data.push_back(rttmonctrladminowner.get_name_leafdata());
    if (rttmonctrladminrtttype.is_set || is_set(rttmonctrladminrtttype.yfilter)) leaf_name_data.push_back(rttmonctrladminrtttype.get_name_leafdata());
    if (rttmonctrladminstatus.is_set || is_set(rttmonctrladminstatus.yfilter)) leaf_name_data.push_back(rttmonctrladminstatus.get_name_leafdata());
    if (rttmonctrladmintag.is_set || is_set(rttmonctrladmintag.yfilter)) leaf_name_data.push_back(rttmonctrladmintag.get_name_leafdata());
    if (rttmonctrladminthreshold.is_set || is_set(rttmonctrladminthreshold.yfilter)) leaf_name_data.push_back(rttmonctrladminthreshold.get_name_leafdata());
    if (rttmonctrladmintimeout.is_set || is_set(rttmonctrladmintimeout.yfilter)) leaf_name_data.push_back(rttmonctrladmintimeout.get_name_leafdata());
    if (rttmonctrladminverifydata.is_set || is_set(rttmonctrladminverifydata.yfilter)) leaf_name_data.push_back(rttmonctrladminverifydata.get_name_leafdata());
    if (rttmonctrloperconnectionlostoccurred.is_set || is_set(rttmonctrloperconnectionlostoccurred.yfilter)) leaf_name_data.push_back(rttmonctrloperconnectionlostoccurred.get_name_leafdata());
    if (rttmonctrloperdiagtext.is_set || is_set(rttmonctrloperdiagtext.yfilter)) leaf_name_data.push_back(rttmonctrloperdiagtext.get_name_leafdata());
    if (rttmonctrlopermodificationtime.is_set || is_set(rttmonctrlopermodificationtime.yfilter)) leaf_name_data.push_back(rttmonctrlopermodificationtime.get_name_leafdata());
    if (rttmonctrlopernumrtts.is_set || is_set(rttmonctrlopernumrtts.yfilter)) leaf_name_data.push_back(rttmonctrlopernumrtts.get_name_leafdata());
    if (rttmonctrloperoctetsinuse.is_set || is_set(rttmonctrloperoctetsinuse.yfilter)) leaf_name_data.push_back(rttmonctrloperoctetsinuse.get_name_leafdata());
    if (rttmonctrloperoverthresholdoccurred.is_set || is_set(rttmonctrloperoverthresholdoccurred.yfilter)) leaf_name_data.push_back(rttmonctrloperoverthresholdoccurred.get_name_leafdata());
    if (rttmonctrloperresettime.is_set || is_set(rttmonctrloperresettime.yfilter)) leaf_name_data.push_back(rttmonctrloperresettime.get_name_leafdata());
    if (rttmonctrloperrttlife.is_set || is_set(rttmonctrloperrttlife.yfilter)) leaf_name_data.push_back(rttmonctrloperrttlife.get_name_leafdata());
    if (rttmonctrloperstate.is_set || is_set(rttmonctrloperstate.yfilter)) leaf_name_data.push_back(rttmonctrloperstate.get_name_leafdata());
    if (rttmonctrlopertimeoutoccurred.is_set || is_set(rttmonctrlopertimeoutoccurred.yfilter)) leaf_name_data.push_back(rttmonctrlopertimeoutoccurred.get_name_leafdata());
    if (rttmonctrloperverifyerroroccurred.is_set || is_set(rttmonctrloperverifyerroroccurred.yfilter)) leaf_name_data.push_back(rttmonctrloperverifyerroroccurred.get_name_leafdata());
    if (rttmonhistoryadminfilter.is_set || is_set(rttmonhistoryadminfilter.yfilter)) leaf_name_data.push_back(rttmonhistoryadminfilter.get_name_leafdata());
    if (rttmonhistoryadminnumbuckets.is_set || is_set(rttmonhistoryadminnumbuckets.yfilter)) leaf_name_data.push_back(rttmonhistoryadminnumbuckets.get_name_leafdata());
    if (rttmonhistoryadminnumlives.is_set || is_set(rttmonhistoryadminnumlives.yfilter)) leaf_name_data.push_back(rttmonhistoryadminnumlives.get_name_leafdata());
    if (rttmonhistoryadminnumsamples.is_set || is_set(rttmonhistoryadminnumsamples.yfilter)) leaf_name_data.push_back(rttmonhistoryadminnumsamples.get_name_leafdata());
    if (rttmonlatestrttoperaddress.is_set || is_set(rttmonlatestrttoperaddress.yfilter)) leaf_name_data.push_back(rttmonlatestrttoperaddress.get_name_leafdata());
    if (rttmonlatestrttoperapplspecificsense.is_set || is_set(rttmonlatestrttoperapplspecificsense.yfilter)) leaf_name_data.push_back(rttmonlatestrttoperapplspecificsense.get_name_leafdata());
    if (rttmonlatestrttopercompletiontime.is_set || is_set(rttmonlatestrttopercompletiontime.yfilter)) leaf_name_data.push_back(rttmonlatestrttopercompletiontime.get_name_leafdata());
    if (rttmonlatestrttopersense.is_set || is_set(rttmonlatestrttopersense.yfilter)) leaf_name_data.push_back(rttmonlatestrttopersense.get_name_leafdata());
    if (rttmonlatestrttopersensedescription.is_set || is_set(rttmonlatestrttopersensedescription.yfilter)) leaf_name_data.push_back(rttmonlatestrttopersensedescription.get_name_leafdata());
    if (rttmonlatestrttopertime.is_set || is_set(rttmonlatestrttopertime.yfilter)) leaf_name_data.push_back(rttmonlatestrttopertime.get_name_leafdata());
    if (rttmonreactadminactiontype.is_set || is_set(rttmonreactadminactiontype.yfilter)) leaf_name_data.push_back(rttmonreactadminactiontype.get_name_leafdata());
    if (rttmonreactadminconnectionenable.is_set || is_set(rttmonreactadminconnectionenable.yfilter)) leaf_name_data.push_back(rttmonreactadminconnectionenable.get_name_leafdata());
    if (rttmonreactadminthresholdcount.is_set || is_set(rttmonreactadminthresholdcount.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdcount.get_name_leafdata());
    if (rttmonreactadminthresholdcount2.is_set || is_set(rttmonreactadminthresholdcount2.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdcount2.get_name_leafdata());
    if (rttmonreactadminthresholdfalling.is_set || is_set(rttmonreactadminthresholdfalling.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdfalling.get_name_leafdata());
    if (rttmonreactadminthresholdtype.is_set || is_set(rttmonreactadminthresholdtype.yfilter)) leaf_name_data.push_back(rttmonreactadminthresholdtype.get_name_leafdata());
    if (rttmonreactadmintimeoutenable.is_set || is_set(rttmonreactadmintimeoutenable.yfilter)) leaf_name_data.push_back(rttmonreactadmintimeoutenable.get_name_leafdata());
    if (rttmonreactadminverifyerrorenable.is_set || is_set(rttmonreactadminverifyerrorenable.yfilter)) leaf_name_data.push_back(rttmonreactadminverifyerrorenable.get_name_leafdata());
    if (rttmonscheduleadminconceptrowageout.is_set || is_set(rttmonscheduleadminconceptrowageout.yfilter)) leaf_name_data.push_back(rttmonscheduleadminconceptrowageout.get_name_leafdata());
    if (rttmonscheduleadminconceptrowageoutv2.is_set || is_set(rttmonscheduleadminconceptrowageoutv2.yfilter)) leaf_name_data.push_back(rttmonscheduleadminconceptrowageoutv2.get_name_leafdata());
    if (rttmonscheduleadminrttlife.is_set || is_set(rttmonscheduleadminrttlife.yfilter)) leaf_name_data.push_back(rttmonscheduleadminrttlife.get_name_leafdata());
    if (rttmonscheduleadminrttrecurring.is_set || is_set(rttmonscheduleadminrttrecurring.yfilter)) leaf_name_data.push_back(rttmonscheduleadminrttrecurring.get_name_leafdata());
    if (rttmonscheduleadminrttstarttime.is_set || is_set(rttmonscheduleadminrttstarttime.yfilter)) leaf_name_data.push_back(rttmonscheduleadminrttstarttime.get_name_leafdata());
    if (rttmonstatisticsadmindistinterval.is_set || is_set(rttmonstatisticsadmindistinterval.yfilter)) leaf_name_data.push_back(rttmonstatisticsadmindistinterval.get_name_leafdata());
    if (rttmonstatisticsadminnumdistbuckets.is_set || is_set(rttmonstatisticsadminnumdistbuckets.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumdistbuckets.get_name_leafdata());
    if (rttmonstatisticsadminnumhops.is_set || is_set(rttmonstatisticsadminnumhops.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumhops.get_name_leafdata());
    if (rttmonstatisticsadminnumhourgroups.is_set || is_set(rttmonstatisticsadminnumhourgroups.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumhourgroups.get_name_leafdata());
    if (rttmonstatisticsadminnumpaths.is_set || is_set(rttmonstatisticsadminnumpaths.yfilter)) leaf_name_data.push_back(rttmonstatisticsadminnumpaths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminFrequency")
    {
        rttmonctrladminfrequency = value;
        rttmonctrladminfrequency.value_namespace = name_space;
        rttmonctrladminfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminGroupName")
    {
        rttmonctrladmingroupname = value;
        rttmonctrladmingroupname.value_namespace = name_space;
        rttmonctrladmingroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminNvgen")
    {
        rttmonctrladminnvgen = value;
        rttmonctrladminnvgen.value_namespace = name_space;
        rttmonctrladminnvgen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminOwner")
    {
        rttmonctrladminowner = value;
        rttmonctrladminowner.value_namespace = name_space;
        rttmonctrladminowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminRttType")
    {
        rttmonctrladminrtttype = value;
        rttmonctrladminrtttype.value_namespace = name_space;
        rttmonctrladminrtttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminStatus")
    {
        rttmonctrladminstatus = value;
        rttmonctrladminstatus.value_namespace = name_space;
        rttmonctrladminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminTag")
    {
        rttmonctrladmintag = value;
        rttmonctrladmintag.value_namespace = name_space;
        rttmonctrladmintag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlAdminThreshold")
    {
        rttmonctrladminthreshold = value;
        rttmonctrladminthreshold.value_namespace = name_space;
        rttmonctrladminthreshold.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonCtrlOperConnectionLostOccurred")
    {
        rttmonctrloperconnectionlostoccurred = value;
        rttmonctrloperconnectionlostoccurred.value_namespace = name_space;
        rttmonctrloperconnectionlostoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperDiagText")
    {
        rttmonctrloperdiagtext = value;
        rttmonctrloperdiagtext.value_namespace = name_space;
        rttmonctrloperdiagtext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperModificationTime")
    {
        rttmonctrlopermodificationtime = value;
        rttmonctrlopermodificationtime.value_namespace = name_space;
        rttmonctrlopermodificationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperNumRtts")
    {
        rttmonctrlopernumrtts = value;
        rttmonctrlopernumrtts.value_namespace = name_space;
        rttmonctrlopernumrtts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperOctetsInUse")
    {
        rttmonctrloperoctetsinuse = value;
        rttmonctrloperoctetsinuse.value_namespace = name_space;
        rttmonctrloperoctetsinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperOverThresholdOccurred")
    {
        rttmonctrloperoverthresholdoccurred = value;
        rttmonctrloperoverthresholdoccurred.value_namespace = name_space;
        rttmonctrloperoverthresholdoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperResetTime")
    {
        rttmonctrloperresettime = value;
        rttmonctrloperresettime.value_namespace = name_space;
        rttmonctrloperresettime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonCtrlOperTimeoutOccurred")
    {
        rttmonctrlopertimeoutoccurred = value;
        rttmonctrlopertimeoutoccurred.value_namespace = name_space;
        rttmonctrlopertimeoutoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonCtrlOperVerifyErrorOccurred")
    {
        rttmonctrloperverifyerroroccurred = value;
        rttmonctrloperverifyerroroccurred.value_namespace = name_space;
        rttmonctrloperverifyerroroccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminFilter")
    {
        rttmonhistoryadminfilter = value;
        rttmonhistoryadminfilter.value_namespace = name_space;
        rttmonhistoryadminfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminNumBuckets")
    {
        rttmonhistoryadminnumbuckets = value;
        rttmonhistoryadminnumbuckets.value_namespace = name_space;
        rttmonhistoryadminnumbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminNumLives")
    {
        rttmonhistoryadminnumlives = value;
        rttmonhistoryadminnumlives.value_namespace = name_space;
        rttmonhistoryadminnumlives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryAdminNumSamples")
    {
        rttmonhistoryadminnumsamples = value;
        rttmonhistoryadminnumsamples.value_namespace = name_space;
        rttmonhistoryadminnumsamples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperAddress")
    {
        rttmonlatestrttoperaddress = value;
        rttmonlatestrttoperaddress.value_namespace = name_space;
        rttmonlatestrttoperaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestRttOperApplSpecificSense")
    {
        rttmonlatestrttoperapplspecificsense = value;
        rttmonlatestrttoperapplspecificsense.value_namespace = name_space;
        rttmonlatestrttoperapplspecificsense.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonReactAdminActionType")
    {
        rttmonreactadminactiontype = value;
        rttmonreactadminactiontype.value_namespace = name_space;
        rttmonreactadminactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminConnectionEnable")
    {
        rttmonreactadminconnectionenable = value;
        rttmonreactadminconnectionenable.value_namespace = name_space;
        rttmonreactadminconnectionenable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonReactAdminThresholdFalling")
    {
        rttmonreactadminthresholdfalling = value;
        rttmonreactadminthresholdfalling.value_namespace = name_space;
        rttmonreactadminthresholdfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminThresholdType")
    {
        rttmonreactadminthresholdtype = value;
        rttmonreactadminthresholdtype.value_namespace = name_space;
        rttmonreactadminthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminTimeoutEnable")
    {
        rttmonreactadmintimeoutenable = value;
        rttmonreactadmintimeoutenable.value_namespace = name_space;
        rttmonreactadmintimeoutenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactAdminVerifyErrorEnable")
    {
        rttmonreactadminverifyerrorenable = value;
        rttmonreactadminverifyerrorenable.value_namespace = name_space;
        rttmonreactadminverifyerrorenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeout")
    {
        rttmonscheduleadminconceptrowageout = value;
        rttmonscheduleadminconceptrowageout.value_namespace = name_space;
        rttmonscheduleadminconceptrowageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeoutV2")
    {
        rttmonscheduleadminconceptrowageoutv2 = value;
        rttmonscheduleadminconceptrowageoutv2.value_namespace = name_space;
        rttmonscheduleadminconceptrowageoutv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminRttLife")
    {
        rttmonscheduleadminrttlife = value;
        rttmonscheduleadminrttlife.value_namespace = name_space;
        rttmonscheduleadminrttlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminRttRecurring")
    {
        rttmonscheduleadminrttrecurring = value;
        rttmonscheduleadminrttrecurring.value_namespace = name_space;
        rttmonscheduleadminrttrecurring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScheduleAdminRttStartTime")
    {
        rttmonscheduleadminrttstarttime = value;
        rttmonscheduleadminrttstarttime.value_namespace = name_space;
        rttmonscheduleadminrttstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminDistInterval")
    {
        rttmonstatisticsadmindistinterval = value;
        rttmonstatisticsadmindistinterval.value_namespace = name_space;
        rttmonstatisticsadmindistinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminNumDistBuckets")
    {
        rttmonstatisticsadminnumdistbuckets = value;
        rttmonstatisticsadminnumdistbuckets.value_namespace = name_space;
        rttmonstatisticsadminnumdistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatisticsAdminNumHops")
    {
        rttmonstatisticsadminnumhops = value;
        rttmonstatisticsadminnumhops.value_namespace = name_space;
        rttmonstatisticsadminnumhops.value_namespace_prefix = name_space_prefix;
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
}

void CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminFrequency")
    {
        rttmonctrladminfrequency.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminGroupName")
    {
        rttmonctrladmingroupname.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminNvgen")
    {
        rttmonctrladminnvgen.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminOwner")
    {
        rttmonctrladminowner.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminRttType")
    {
        rttmonctrladminrtttype.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminStatus")
    {
        rttmonctrladminstatus.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminTag")
    {
        rttmonctrladmintag.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminThreshold")
    {
        rttmonctrladminthreshold.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminTimeout")
    {
        rttmonctrladmintimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlAdminVerifyData")
    {
        rttmonctrladminverifydata.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperConnectionLostOccurred")
    {
        rttmonctrloperconnectionlostoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperDiagText")
    {
        rttmonctrloperdiagtext.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperModificationTime")
    {
        rttmonctrlopermodificationtime.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperNumRtts")
    {
        rttmonctrlopernumrtts.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperOctetsInUse")
    {
        rttmonctrloperoctetsinuse.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperOverThresholdOccurred")
    {
        rttmonctrloperoverthresholdoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperResetTime")
    {
        rttmonctrloperresettime.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperRttLife")
    {
        rttmonctrloperrttlife.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperState")
    {
        rttmonctrloperstate.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperTimeoutOccurred")
    {
        rttmonctrlopertimeoutoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonCtrlOperVerifyErrorOccurred")
    {
        rttmonctrloperverifyerroroccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminFilter")
    {
        rttmonhistoryadminfilter.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminNumBuckets")
    {
        rttmonhistoryadminnumbuckets.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminNumLives")
    {
        rttmonhistoryadminnumlives.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryAdminNumSamples")
    {
        rttmonhistoryadminnumsamples.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperAddress")
    {
        rttmonlatestrttoperaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperApplSpecificSense")
    {
        rttmonlatestrttoperapplspecificsense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperCompletionTime")
    {
        rttmonlatestrttopercompletiontime.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperSense")
    {
        rttmonlatestrttopersense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperSenseDescription")
    {
        rttmonlatestrttopersensedescription.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestRttOperTime")
    {
        rttmonlatestrttopertime.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminActionType")
    {
        rttmonreactadminactiontype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminConnectionEnable")
    {
        rttmonreactadminconnectionenable.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdCount")
    {
        rttmonreactadminthresholdcount.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdCount2")
    {
        rttmonreactadminthresholdcount2.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdFalling")
    {
        rttmonreactadminthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminThresholdType")
    {
        rttmonreactadminthresholdtype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminTimeoutEnable")
    {
        rttmonreactadmintimeoutenable.yfilter = yfilter;
    }
    if(value_path == "rttMonReactAdminVerifyErrorEnable")
    {
        rttmonreactadminverifyerrorenable.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeout")
    {
        rttmonscheduleadminconceptrowageout.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminConceptRowAgeoutV2")
    {
        rttmonscheduleadminconceptrowageoutv2.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminRttLife")
    {
        rttmonscheduleadminrttlife.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminRttRecurring")
    {
        rttmonscheduleadminrttrecurring.yfilter = yfilter;
    }
    if(value_path == "rttMonScheduleAdminRttStartTime")
    {
        rttmonscheduleadminrttstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminDistInterval")
    {
        rttmonstatisticsadmindistinterval.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumDistBuckets")
    {
        rttmonstatisticsadminnumdistbuckets.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumHops")
    {
        rttmonstatisticsadminnumhops.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumHourGroups")
    {
        rttmonstatisticsadminnumhourgroups.yfilter = yfilter;
    }
    if(value_path == "rttMonStatisticsAdminNumPaths")
    {
        rttmonstatisticsadminnumpaths.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonCtrlAdminFrequency" || name == "rttMonCtrlAdminGroupName" || name == "rttMonCtrlAdminNvgen" || name == "rttMonCtrlAdminOwner" || name == "rttMonCtrlAdminRttType" || name == "rttMonCtrlAdminStatus" || name == "rttMonCtrlAdminTag" || name == "rttMonCtrlAdminThreshold" || name == "rttMonCtrlAdminTimeout" || name == "rttMonCtrlAdminVerifyData" || name == "rttMonCtrlOperConnectionLostOccurred" || name == "rttMonCtrlOperDiagText" || name == "rttMonCtrlOperModificationTime" || name == "rttMonCtrlOperNumRtts" || name == "rttMonCtrlOperOctetsInUse" || name == "rttMonCtrlOperOverThresholdOccurred" || name == "rttMonCtrlOperResetTime" || name == "rttMonCtrlOperRttLife" || name == "rttMonCtrlOperState" || name == "rttMonCtrlOperTimeoutOccurred" || name == "rttMonCtrlOperVerifyErrorOccurred" || name == "rttMonHistoryAdminFilter" || name == "rttMonHistoryAdminNumBuckets" || name == "rttMonHistoryAdminNumLives" || name == "rttMonHistoryAdminNumSamples" || name == "rttMonLatestRttOperAddress" || name == "rttMonLatestRttOperApplSpecificSense" || name == "rttMonLatestRttOperCompletionTime" || name == "rttMonLatestRttOperSense" || name == "rttMonLatestRttOperSenseDescription" || name == "rttMonLatestRttOperTime" || name == "rttMonReactAdminActionType" || name == "rttMonReactAdminConnectionEnable" || name == "rttMonReactAdminThresholdCount" || name == "rttMonReactAdminThresholdCount2" || name == "rttMonReactAdminThresholdFalling" || name == "rttMonReactAdminThresholdType" || name == "rttMonReactAdminTimeoutEnable" || name == "rttMonReactAdminVerifyErrorEnable" || name == "rttMonScheduleAdminConceptRowAgeout" || name == "rttMonScheduleAdminConceptRowAgeoutV2" || name == "rttMonScheduleAdminRttLife" || name == "rttMonScheduleAdminRttRecurring" || name == "rttMonScheduleAdminRttStartTime" || name == "rttMonStatisticsAdminDistInterval" || name == "rttMonStatisticsAdminNumDistBuckets" || name == "rttMonStatisticsAdminNumHops" || name == "rttMonStatisticsAdminNumHourGroups" || name == "rttMonStatisticsAdminNumPaths")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadmintable()
{

    yang_name = "rttMonEchoAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonechoadmintable::~Rttmonechoadmintable()
{
}

bool CISCORTTMONMIB::Rttmonechoadmintable::has_data() const
{
    for (std::size_t index=0; index<rttmonechoadminentry.size(); index++)
    {
        if(rttmonechoadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonechoadmintable::has_operation() const
{
    for (std::size_t index=0; index<rttmonechoadminentry.size(); index++)
    {
        if(rttmonechoadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonechoadmintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonechoadmintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonechoadmintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonechoadmintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonEchoAdminEntry")
    {
        for(auto const & c : rttmonechoadminentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry>();
        c->parent = this;
        rttmonechoadminentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonechoadmintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonechoadminentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonechoadmintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonechoadmintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonechoadmintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonEchoAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonechoadminaggburstcycles{YType::int32, "rttMonEchoAdminAggBurstCycles"},
    rttmonechoadminavailnumframes{YType::int32, "rttMonEchoAdminAvailNumFrames"},
    rttmonechoadmincache{YType::boolean, "rttMonEchoAdminCache"},
    rttmonechoadmincallduration{YType::int32, "rttMonEchoAdminCallDuration"},
    rttmonechoadmincallednumber{YType::str, "rttMonEchoAdminCalledNumber"},
    rttmonechoadmincodecinterval{YType::int32, "rttMonEchoAdminCodecInterval"},
    rttmonechoadmincodecnumpackets{YType::int32, "rttMonEchoAdminCodecNumPackets"},
    rttmonechoadmincodecpayload{YType::int32, "rttMonEchoAdminCodecPayload"},
    rttmonechoadmincodectype{YType::enumeration, "rttMonEchoAdminCodecType"},
    rttmonechoadmincontrolenable{YType::boolean, "rttMonEchoAdminControlEnable"},
    rttmonechoadmincontrolretry{YType::uint32, "rttMonEchoAdminControlRetry"},
    rttmonechoadmincontroltimeout{YType::uint32, "rttMonEchoAdminControlTimeout"},
    rttmonechoadmindetectpoint{YType::enumeration, "rttMonEchoAdminDetectPoint"},
    rttmonechoadmindscp{YType::uint8, "rttMonEchoAdminDscp"},
    rttmonechoadminemulatesourceaddress{YType::str, "rttMonEchoAdminEmulateSourceAddress"},
    rttmonechoadminemulatesourceport{YType::int32, "rttMonEchoAdminEmulateSourcePort"},
    rttmonechoadminemulatetargetaddress{YType::str, "rttMonEchoAdminEmulateTargetAddress"},
    rttmonechoadminemulatetargetport{YType::int32, "rttMonEchoAdminEmulateTargetPort"},
    rttmonechoadminenableburst{YType::boolean, "rttMonEchoAdminEnableBurst"},
    rttmonechoadminendpointlistname{YType::str, "rttMonEchoAdminEndPointListName"},
    rttmonechoadminethernetcos{YType::int32, "rttMonEchoAdminEthernetCOS"},
    rttmonechoadmingkregistration{YType::boolean, "rttMonEchoAdminGKRegistration"},
    rttmonechoadminhttpversion{YType::str, "rttMonEchoAdminHTTPVersion"},
    rttmonechoadminicpifadvfactor{YType::int32, "rttMonEchoAdminICPIFAdvFactor"},
    rttmonechoadminigmptreeinit{YType::uint32, "rttMonEchoAdminIgmpTreeInit"},
    rttmonechoadmininputinterface{YType::int32, "rttMonEchoAdminInputInterface"},
    rttmonechoadmininterval{YType::int32, "rttMonEchoAdminInterval"},
    rttmonechoadminlossrationumframes{YType::int32, "rttMonEchoAdminLossRatioNumFrames"},
    rttmonechoadminlspexp{YType::int32, "rttMonEchoAdminLSPExp"},
    rttmonechoadminlspfectype{YType::enumeration, "rttMonEchoAdminLSPFECType"},
    rttmonechoadminlspnullshim{YType::boolean, "rttMonEchoAdminLSPNullShim"},
    rttmonechoadminlspreplydscp{YType::int32, "rttMonEchoAdminLSPReplyDscp"},
    rttmonechoadminlspreplymode{YType::enumeration, "rttMonEchoAdminLSPReplyMode"},
    rttmonechoadminlspselector{YType::str, "rttMonEchoAdminLSPSelector"},
    rttmonechoadminlspttl{YType::int32, "rttMonEchoAdminLSPTTL"},
    rttmonechoadminlspvccvid{YType::int32, "rttMonEchoAdminLSPVccvID"},
    rttmonechoadminlsrenable{YType::boolean, "rttMonEchoAdminLSREnable"},
    rttmonechoadminmode{YType::enumeration, "rttMonEchoAdminMode"},
    rttmonechoadminnameserver{YType::str, "rttMonEchoAdminNameServer"},
    rttmonechoadminnumpackets{YType::int32, "rttMonEchoAdminNumPackets"},
    rttmonechoadminoperation{YType::enumeration, "rttMonEchoAdminOperation"},
    rttmonechoadminowntpsynctolabs{YType::int32, "rttMonEchoAdminOWNTPSyncTolAbs"},
    rttmonechoadminowntpsynctolpct{YType::int32, "rttMonEchoAdminOWNTPSyncTolPct"},
    rttmonechoadminowntpsynctoltype{YType::enumeration, "rttMonEchoAdminOWNTPSyncTolType"},
    rttmonechoadminpktdatarequestsize{YType::int32, "rttMonEchoAdminPktDataRequestSize"},
    rttmonechoadminpktdataresponsesize{YType::int32, "rttMonEchoAdminPktDataResponseSize"},
    rttmonechoadminprecision{YType::enumeration, "rttMonEchoAdminPrecision"},
    rttmonechoadminprobepakpriority{YType::enumeration, "rttMonEchoAdminProbePakPriority"},
    rttmonechoadminprotocol{YType::enumeration, "rttMonEchoAdminProtocol"},
    rttmonechoadminproxy{YType::str, "rttMonEchoAdminProxy"},
    rttmonechoadminreservedsp{YType::enumeration, "rttMonEchoAdminReserveDsp"},
    rttmonechoadminsourceaddress{YType::str, "rttMonEchoAdminSourceAddress"},
    rttmonechoadminsourcemacaddress{YType::str, "rttMonEchoAdminSourceMacAddress"},
    rttmonechoadminsourcempid{YType::uint32, "rttMonEchoAdminSourceMPID"},
    rttmonechoadminsourceport{YType::int32, "rttMonEchoAdminSourcePort"},
    rttmonechoadminsourcevoiceport{YType::str, "rttMonEchoAdminSourceVoicePort"},
    rttmonechoadminssm{YType::boolean, "rttMonEchoAdminSSM"},
    rttmonechoadminstring1{YType::str, "rttMonEchoAdminString1"},
    rttmonechoadminstring2{YType::str, "rttMonEchoAdminString2"},
    rttmonechoadminstring3{YType::str, "rttMonEchoAdminString3"},
    rttmonechoadminstring4{YType::str, "rttMonEchoAdminString4"},
    rttmonechoadminstring5{YType::str, "rttMonEchoAdminString5"},
    rttmonechoadmintargetaddress{YType::str, "rttMonEchoAdminTargetAddress"},
    rttmonechoadmintargetaddressstring{YType::str, "rttMonEchoAdminTargetAddressString"},
    rttmonechoadmintargetdomainname{YType::str, "rttMonEchoAdminTargetDomainName"},
    rttmonechoadmintargetevc{YType::str, "rttMonEchoAdminTargetEVC"},
    rttmonechoadmintargetmacaddress{YType::str, "rttMonEchoAdminTargetMacAddress"},
    rttmonechoadmintargetmepport{YType::boolean, "rttMonEchoAdminTargetMEPPort"},
    rttmonechoadmintargetmpid{YType::uint32, "rttMonEchoAdminTargetMPID"},
    rttmonechoadmintargetport{YType::int32, "rttMonEchoAdminTargetPort"},
    rttmonechoadmintargetvlan{YType::int32, "rttMonEchoAdminTargetVLAN"},
    rttmonechoadmintos{YType::int32, "rttMonEchoAdminTOS"},
    rttmonechoadmintstampoptimization{YType::boolean, "rttMonEchoAdminTstampOptimization"},
    rttmonechoadminurl{YType::str, "rttMonEchoAdminURL"},
    rttmonechoadminvideotrafficprofile{YType::str, "rttMonEchoAdminVideoTrafficProfile"},
    rttmonechoadminvrfname{YType::str, "rttMonEchoAdminVrfName"}
{

    yang_name = "rttMonEchoAdminEntry"; yang_parent_name = "rttMonEchoAdminTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::~Rttmonechoadminentry()
{
}

bool CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonechoadminaggburstcycles.is_set
	|| rttmonechoadminavailnumframes.is_set
	|| rttmonechoadmincache.is_set
	|| rttmonechoadmincallduration.is_set
	|| rttmonechoadmincallednumber.is_set
	|| rttmonechoadmincodecinterval.is_set
	|| rttmonechoadmincodecnumpackets.is_set
	|| rttmonechoadmincodecpayload.is_set
	|| rttmonechoadmincodectype.is_set
	|| rttmonechoadmincontrolenable.is_set
	|| rttmonechoadmincontrolretry.is_set
	|| rttmonechoadmincontroltimeout.is_set
	|| rttmonechoadmindetectpoint.is_set
	|| rttmonechoadmindscp.is_set
	|| rttmonechoadminemulatesourceaddress.is_set
	|| rttmonechoadminemulatesourceport.is_set
	|| rttmonechoadminemulatetargetaddress.is_set
	|| rttmonechoadminemulatetargetport.is_set
	|| rttmonechoadminenableburst.is_set
	|| rttmonechoadminendpointlistname.is_set
	|| rttmonechoadminethernetcos.is_set
	|| rttmonechoadmingkregistration.is_set
	|| rttmonechoadminhttpversion.is_set
	|| rttmonechoadminicpifadvfactor.is_set
	|| rttmonechoadminigmptreeinit.is_set
	|| rttmonechoadmininputinterface.is_set
	|| rttmonechoadmininterval.is_set
	|| rttmonechoadminlossrationumframes.is_set
	|| rttmonechoadminlspexp.is_set
	|| rttmonechoadminlspfectype.is_set
	|| rttmonechoadminlspnullshim.is_set
	|| rttmonechoadminlspreplydscp.is_set
	|| rttmonechoadminlspreplymode.is_set
	|| rttmonechoadminlspselector.is_set
	|| rttmonechoadminlspttl.is_set
	|| rttmonechoadminlspvccvid.is_set
	|| rttmonechoadminlsrenable.is_set
	|| rttmonechoadminmode.is_set
	|| rttmonechoadminnameserver.is_set
	|| rttmonechoadminnumpackets.is_set
	|| rttmonechoadminoperation.is_set
	|| rttmonechoadminowntpsynctolabs.is_set
	|| rttmonechoadminowntpsynctolpct.is_set
	|| rttmonechoadminowntpsynctoltype.is_set
	|| rttmonechoadminpktdatarequestsize.is_set
	|| rttmonechoadminpktdataresponsesize.is_set
	|| rttmonechoadminprecision.is_set
	|| rttmonechoadminprobepakpriority.is_set
	|| rttmonechoadminprotocol.is_set
	|| rttmonechoadminproxy.is_set
	|| rttmonechoadminreservedsp.is_set
	|| rttmonechoadminsourceaddress.is_set
	|| rttmonechoadminsourcemacaddress.is_set
	|| rttmonechoadminsourcempid.is_set
	|| rttmonechoadminsourceport.is_set
	|| rttmonechoadminsourcevoiceport.is_set
	|| rttmonechoadminssm.is_set
	|| rttmonechoadminstring1.is_set
	|| rttmonechoadminstring2.is_set
	|| rttmonechoadminstring3.is_set
	|| rttmonechoadminstring4.is_set
	|| rttmonechoadminstring5.is_set
	|| rttmonechoadmintargetaddress.is_set
	|| rttmonechoadmintargetaddressstring.is_set
	|| rttmonechoadmintargetdomainname.is_set
	|| rttmonechoadmintargetevc.is_set
	|| rttmonechoadmintargetmacaddress.is_set
	|| rttmonechoadmintargetmepport.is_set
	|| rttmonechoadmintargetmpid.is_set
	|| rttmonechoadmintargetport.is_set
	|| rttmonechoadmintargetvlan.is_set
	|| rttmonechoadmintos.is_set
	|| rttmonechoadmintstampoptimization.is_set
	|| rttmonechoadminurl.is_set
	|| rttmonechoadminvideotrafficprofile.is_set
	|| rttmonechoadminvrfname.is_set;
}

bool CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonechoadminaggburstcycles.yfilter)
	|| ydk::is_set(rttmonechoadminavailnumframes.yfilter)
	|| ydk::is_set(rttmonechoadmincache.yfilter)
	|| ydk::is_set(rttmonechoadmincallduration.yfilter)
	|| ydk::is_set(rttmonechoadmincallednumber.yfilter)
	|| ydk::is_set(rttmonechoadmincodecinterval.yfilter)
	|| ydk::is_set(rttmonechoadmincodecnumpackets.yfilter)
	|| ydk::is_set(rttmonechoadmincodecpayload.yfilter)
	|| ydk::is_set(rttmonechoadmincodectype.yfilter)
	|| ydk::is_set(rttmonechoadmincontrolenable.yfilter)
	|| ydk::is_set(rttmonechoadmincontrolretry.yfilter)
	|| ydk::is_set(rttmonechoadmincontroltimeout.yfilter)
	|| ydk::is_set(rttmonechoadmindetectpoint.yfilter)
	|| ydk::is_set(rttmonechoadmindscp.yfilter)
	|| ydk::is_set(rttmonechoadminemulatesourceaddress.yfilter)
	|| ydk::is_set(rttmonechoadminemulatesourceport.yfilter)
	|| ydk::is_set(rttmonechoadminemulatetargetaddress.yfilter)
	|| ydk::is_set(rttmonechoadminemulatetargetport.yfilter)
	|| ydk::is_set(rttmonechoadminenableburst.yfilter)
	|| ydk::is_set(rttmonechoadminendpointlistname.yfilter)
	|| ydk::is_set(rttmonechoadminethernetcos.yfilter)
	|| ydk::is_set(rttmonechoadmingkregistration.yfilter)
	|| ydk::is_set(rttmonechoadminhttpversion.yfilter)
	|| ydk::is_set(rttmonechoadminicpifadvfactor.yfilter)
	|| ydk::is_set(rttmonechoadminigmptreeinit.yfilter)
	|| ydk::is_set(rttmonechoadmininputinterface.yfilter)
	|| ydk::is_set(rttmonechoadmininterval.yfilter)
	|| ydk::is_set(rttmonechoadminlossrationumframes.yfilter)
	|| ydk::is_set(rttmonechoadminlspexp.yfilter)
	|| ydk::is_set(rttmonechoadminlspfectype.yfilter)
	|| ydk::is_set(rttmonechoadminlspnullshim.yfilter)
	|| ydk::is_set(rttmonechoadminlspreplydscp.yfilter)
	|| ydk::is_set(rttmonechoadminlspreplymode.yfilter)
	|| ydk::is_set(rttmonechoadminlspselector.yfilter)
	|| ydk::is_set(rttmonechoadminlspttl.yfilter)
	|| ydk::is_set(rttmonechoadminlspvccvid.yfilter)
	|| ydk::is_set(rttmonechoadminlsrenable.yfilter)
	|| ydk::is_set(rttmonechoadminmode.yfilter)
	|| ydk::is_set(rttmonechoadminnameserver.yfilter)
	|| ydk::is_set(rttmonechoadminnumpackets.yfilter)
	|| ydk::is_set(rttmonechoadminoperation.yfilter)
	|| ydk::is_set(rttmonechoadminowntpsynctolabs.yfilter)
	|| ydk::is_set(rttmonechoadminowntpsynctolpct.yfilter)
	|| ydk::is_set(rttmonechoadminowntpsynctoltype.yfilter)
	|| ydk::is_set(rttmonechoadminpktdatarequestsize.yfilter)
	|| ydk::is_set(rttmonechoadminpktdataresponsesize.yfilter)
	|| ydk::is_set(rttmonechoadminprecision.yfilter)
	|| ydk::is_set(rttmonechoadminprobepakpriority.yfilter)
	|| ydk::is_set(rttmonechoadminprotocol.yfilter)
	|| ydk::is_set(rttmonechoadminproxy.yfilter)
	|| ydk::is_set(rttmonechoadminreservedsp.yfilter)
	|| ydk::is_set(rttmonechoadminsourceaddress.yfilter)
	|| ydk::is_set(rttmonechoadminsourcemacaddress.yfilter)
	|| ydk::is_set(rttmonechoadminsourcempid.yfilter)
	|| ydk::is_set(rttmonechoadminsourceport.yfilter)
	|| ydk::is_set(rttmonechoadminsourcevoiceport.yfilter)
	|| ydk::is_set(rttmonechoadminssm.yfilter)
	|| ydk::is_set(rttmonechoadminstring1.yfilter)
	|| ydk::is_set(rttmonechoadminstring2.yfilter)
	|| ydk::is_set(rttmonechoadminstring3.yfilter)
	|| ydk::is_set(rttmonechoadminstring4.yfilter)
	|| ydk::is_set(rttmonechoadminstring5.yfilter)
	|| ydk::is_set(rttmonechoadmintargetaddress.yfilter)
	|| ydk::is_set(rttmonechoadmintargetaddressstring.yfilter)
	|| ydk::is_set(rttmonechoadmintargetdomainname.yfilter)
	|| ydk::is_set(rttmonechoadmintargetevc.yfilter)
	|| ydk::is_set(rttmonechoadmintargetmacaddress.yfilter)
	|| ydk::is_set(rttmonechoadmintargetmepport.yfilter)
	|| ydk::is_set(rttmonechoadmintargetmpid.yfilter)
	|| ydk::is_set(rttmonechoadmintargetport.yfilter)
	|| ydk::is_set(rttmonechoadmintargetvlan.yfilter)
	|| ydk::is_set(rttmonechoadmintos.yfilter)
	|| ydk::is_set(rttmonechoadmintstampoptimization.yfilter)
	|| ydk::is_set(rttmonechoadminurl.yfilter)
	|| ydk::is_set(rttmonechoadminvideotrafficprofile.yfilter)
	|| ydk::is_set(rttmonechoadminvrfname.yfilter);
}

std::string CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonEchoAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoAdminEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonechoadminaggburstcycles.is_set || is_set(rttmonechoadminaggburstcycles.yfilter)) leaf_name_data.push_back(rttmonechoadminaggburstcycles.get_name_leafdata());
    if (rttmonechoadminavailnumframes.is_set || is_set(rttmonechoadminavailnumframes.yfilter)) leaf_name_data.push_back(rttmonechoadminavailnumframes.get_name_leafdata());
    if (rttmonechoadmincache.is_set || is_set(rttmonechoadmincache.yfilter)) leaf_name_data.push_back(rttmonechoadmincache.get_name_leafdata());
    if (rttmonechoadmincallduration.is_set || is_set(rttmonechoadmincallduration.yfilter)) leaf_name_data.push_back(rttmonechoadmincallduration.get_name_leafdata());
    if (rttmonechoadmincallednumber.is_set || is_set(rttmonechoadmincallednumber.yfilter)) leaf_name_data.push_back(rttmonechoadmincallednumber.get_name_leafdata());
    if (rttmonechoadmincodecinterval.is_set || is_set(rttmonechoadmincodecinterval.yfilter)) leaf_name_data.push_back(rttmonechoadmincodecinterval.get_name_leafdata());
    if (rttmonechoadmincodecnumpackets.is_set || is_set(rttmonechoadmincodecnumpackets.yfilter)) leaf_name_data.push_back(rttmonechoadmincodecnumpackets.get_name_leafdata());
    if (rttmonechoadmincodecpayload.is_set || is_set(rttmonechoadmincodecpayload.yfilter)) leaf_name_data.push_back(rttmonechoadmincodecpayload.get_name_leafdata());
    if (rttmonechoadmincodectype.is_set || is_set(rttmonechoadmincodectype.yfilter)) leaf_name_data.push_back(rttmonechoadmincodectype.get_name_leafdata());
    if (rttmonechoadmincontrolenable.is_set || is_set(rttmonechoadmincontrolenable.yfilter)) leaf_name_data.push_back(rttmonechoadmincontrolenable.get_name_leafdata());
    if (rttmonechoadmincontrolretry.is_set || is_set(rttmonechoadmincontrolretry.yfilter)) leaf_name_data.push_back(rttmonechoadmincontrolretry.get_name_leafdata());
    if (rttmonechoadmincontroltimeout.is_set || is_set(rttmonechoadmincontroltimeout.yfilter)) leaf_name_data.push_back(rttmonechoadmincontroltimeout.get_name_leafdata());
    if (rttmonechoadmindetectpoint.is_set || is_set(rttmonechoadmindetectpoint.yfilter)) leaf_name_data.push_back(rttmonechoadmindetectpoint.get_name_leafdata());
    if (rttmonechoadmindscp.is_set || is_set(rttmonechoadmindscp.yfilter)) leaf_name_data.push_back(rttmonechoadmindscp.get_name_leafdata());
    if (rttmonechoadminemulatesourceaddress.is_set || is_set(rttmonechoadminemulatesourceaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatesourceaddress.get_name_leafdata());
    if (rttmonechoadminemulatesourceport.is_set || is_set(rttmonechoadminemulatesourceport.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatesourceport.get_name_leafdata());
    if (rttmonechoadminemulatetargetaddress.is_set || is_set(rttmonechoadminemulatetargetaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatetargetaddress.get_name_leafdata());
    if (rttmonechoadminemulatetargetport.is_set || is_set(rttmonechoadminemulatetargetport.yfilter)) leaf_name_data.push_back(rttmonechoadminemulatetargetport.get_name_leafdata());
    if (rttmonechoadminenableburst.is_set || is_set(rttmonechoadminenableburst.yfilter)) leaf_name_data.push_back(rttmonechoadminenableburst.get_name_leafdata());
    if (rttmonechoadminendpointlistname.is_set || is_set(rttmonechoadminendpointlistname.yfilter)) leaf_name_data.push_back(rttmonechoadminendpointlistname.get_name_leafdata());
    if (rttmonechoadminethernetcos.is_set || is_set(rttmonechoadminethernetcos.yfilter)) leaf_name_data.push_back(rttmonechoadminethernetcos.get_name_leafdata());
    if (rttmonechoadmingkregistration.is_set || is_set(rttmonechoadmingkregistration.yfilter)) leaf_name_data.push_back(rttmonechoadmingkregistration.get_name_leafdata());
    if (rttmonechoadminhttpversion.is_set || is_set(rttmonechoadminhttpversion.yfilter)) leaf_name_data.push_back(rttmonechoadminhttpversion.get_name_leafdata());
    if (rttmonechoadminicpifadvfactor.is_set || is_set(rttmonechoadminicpifadvfactor.yfilter)) leaf_name_data.push_back(rttmonechoadminicpifadvfactor.get_name_leafdata());
    if (rttmonechoadminigmptreeinit.is_set || is_set(rttmonechoadminigmptreeinit.yfilter)) leaf_name_data.push_back(rttmonechoadminigmptreeinit.get_name_leafdata());
    if (rttmonechoadmininputinterface.is_set || is_set(rttmonechoadmininputinterface.yfilter)) leaf_name_data.push_back(rttmonechoadmininputinterface.get_name_leafdata());
    if (rttmonechoadmininterval.is_set || is_set(rttmonechoadmininterval.yfilter)) leaf_name_data.push_back(rttmonechoadmininterval.get_name_leafdata());
    if (rttmonechoadminlossrationumframes.is_set || is_set(rttmonechoadminlossrationumframes.yfilter)) leaf_name_data.push_back(rttmonechoadminlossrationumframes.get_name_leafdata());
    if (rttmonechoadminlspexp.is_set || is_set(rttmonechoadminlspexp.yfilter)) leaf_name_data.push_back(rttmonechoadminlspexp.get_name_leafdata());
    if (rttmonechoadminlspfectype.is_set || is_set(rttmonechoadminlspfectype.yfilter)) leaf_name_data.push_back(rttmonechoadminlspfectype.get_name_leafdata());
    if (rttmonechoadminlspnullshim.is_set || is_set(rttmonechoadminlspnullshim.yfilter)) leaf_name_data.push_back(rttmonechoadminlspnullshim.get_name_leafdata());
    if (rttmonechoadminlspreplydscp.is_set || is_set(rttmonechoadminlspreplydscp.yfilter)) leaf_name_data.push_back(rttmonechoadminlspreplydscp.get_name_leafdata());
    if (rttmonechoadminlspreplymode.is_set || is_set(rttmonechoadminlspreplymode.yfilter)) leaf_name_data.push_back(rttmonechoadminlspreplymode.get_name_leafdata());
    if (rttmonechoadminlspselector.is_set || is_set(rttmonechoadminlspselector.yfilter)) leaf_name_data.push_back(rttmonechoadminlspselector.get_name_leafdata());
    if (rttmonechoadminlspttl.is_set || is_set(rttmonechoadminlspttl.yfilter)) leaf_name_data.push_back(rttmonechoadminlspttl.get_name_leafdata());
    if (rttmonechoadminlspvccvid.is_set || is_set(rttmonechoadminlspvccvid.yfilter)) leaf_name_data.push_back(rttmonechoadminlspvccvid.get_name_leafdata());
    if (rttmonechoadminlsrenable.is_set || is_set(rttmonechoadminlsrenable.yfilter)) leaf_name_data.push_back(rttmonechoadminlsrenable.get_name_leafdata());
    if (rttmonechoadminmode.is_set || is_set(rttmonechoadminmode.yfilter)) leaf_name_data.push_back(rttmonechoadminmode.get_name_leafdata());
    if (rttmonechoadminnameserver.is_set || is_set(rttmonechoadminnameserver.yfilter)) leaf_name_data.push_back(rttmonechoadminnameserver.get_name_leafdata());
    if (rttmonechoadminnumpackets.is_set || is_set(rttmonechoadminnumpackets.yfilter)) leaf_name_data.push_back(rttmonechoadminnumpackets.get_name_leafdata());
    if (rttmonechoadminoperation.is_set || is_set(rttmonechoadminoperation.yfilter)) leaf_name_data.push_back(rttmonechoadminoperation.get_name_leafdata());
    if (rttmonechoadminowntpsynctolabs.is_set || is_set(rttmonechoadminowntpsynctolabs.yfilter)) leaf_name_data.push_back(rttmonechoadminowntpsynctolabs.get_name_leafdata());
    if (rttmonechoadminowntpsynctolpct.is_set || is_set(rttmonechoadminowntpsynctolpct.yfilter)) leaf_name_data.push_back(rttmonechoadminowntpsynctolpct.get_name_leafdata());
    if (rttmonechoadminowntpsynctoltype.is_set || is_set(rttmonechoadminowntpsynctoltype.yfilter)) leaf_name_data.push_back(rttmonechoadminowntpsynctoltype.get_name_leafdata());
    if (rttmonechoadminpktdatarequestsize.is_set || is_set(rttmonechoadminpktdatarequestsize.yfilter)) leaf_name_data.push_back(rttmonechoadminpktdatarequestsize.get_name_leafdata());
    if (rttmonechoadminpktdataresponsesize.is_set || is_set(rttmonechoadminpktdataresponsesize.yfilter)) leaf_name_data.push_back(rttmonechoadminpktdataresponsesize.get_name_leafdata());
    if (rttmonechoadminprecision.is_set || is_set(rttmonechoadminprecision.yfilter)) leaf_name_data.push_back(rttmonechoadminprecision.get_name_leafdata());
    if (rttmonechoadminprobepakpriority.is_set || is_set(rttmonechoadminprobepakpriority.yfilter)) leaf_name_data.push_back(rttmonechoadminprobepakpriority.get_name_leafdata());
    if (rttmonechoadminprotocol.is_set || is_set(rttmonechoadminprotocol.yfilter)) leaf_name_data.push_back(rttmonechoadminprotocol.get_name_leafdata());
    if (rttmonechoadminproxy.is_set || is_set(rttmonechoadminproxy.yfilter)) leaf_name_data.push_back(rttmonechoadminproxy.get_name_leafdata());
    if (rttmonechoadminreservedsp.is_set || is_set(rttmonechoadminreservedsp.yfilter)) leaf_name_data.push_back(rttmonechoadminreservedsp.get_name_leafdata());
    if (rttmonechoadminsourceaddress.is_set || is_set(rttmonechoadminsourceaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminsourceaddress.get_name_leafdata());
    if (rttmonechoadminsourcemacaddress.is_set || is_set(rttmonechoadminsourcemacaddress.yfilter)) leaf_name_data.push_back(rttmonechoadminsourcemacaddress.get_name_leafdata());
    if (rttmonechoadminsourcempid.is_set || is_set(rttmonechoadminsourcempid.yfilter)) leaf_name_data.push_back(rttmonechoadminsourcempid.get_name_leafdata());
    if (rttmonechoadminsourceport.is_set || is_set(rttmonechoadminsourceport.yfilter)) leaf_name_data.push_back(rttmonechoadminsourceport.get_name_leafdata());
    if (rttmonechoadminsourcevoiceport.is_set || is_set(rttmonechoadminsourcevoiceport.yfilter)) leaf_name_data.push_back(rttmonechoadminsourcevoiceport.get_name_leafdata());
    if (rttmonechoadminssm.is_set || is_set(rttmonechoadminssm.yfilter)) leaf_name_data.push_back(rttmonechoadminssm.get_name_leafdata());
    if (rttmonechoadminstring1.is_set || is_set(rttmonechoadminstring1.yfilter)) leaf_name_data.push_back(rttmonechoadminstring1.get_name_leafdata());
    if (rttmonechoadminstring2.is_set || is_set(rttmonechoadminstring2.yfilter)) leaf_name_data.push_back(rttmonechoadminstring2.get_name_leafdata());
    if (rttmonechoadminstring3.is_set || is_set(rttmonechoadminstring3.yfilter)) leaf_name_data.push_back(rttmonechoadminstring3.get_name_leafdata());
    if (rttmonechoadminstring4.is_set || is_set(rttmonechoadminstring4.yfilter)) leaf_name_data.push_back(rttmonechoadminstring4.get_name_leafdata());
    if (rttmonechoadminstring5.is_set || is_set(rttmonechoadminstring5.yfilter)) leaf_name_data.push_back(rttmonechoadminstring5.get_name_leafdata());
    if (rttmonechoadmintargetaddress.is_set || is_set(rttmonechoadmintargetaddress.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetaddress.get_name_leafdata());
    if (rttmonechoadmintargetaddressstring.is_set || is_set(rttmonechoadmintargetaddressstring.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetaddressstring.get_name_leafdata());
    if (rttmonechoadmintargetdomainname.is_set || is_set(rttmonechoadmintargetdomainname.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetdomainname.get_name_leafdata());
    if (rttmonechoadmintargetevc.is_set || is_set(rttmonechoadmintargetevc.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetevc.get_name_leafdata());
    if (rttmonechoadmintargetmacaddress.is_set || is_set(rttmonechoadmintargetmacaddress.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetmacaddress.get_name_leafdata());
    if (rttmonechoadmintargetmepport.is_set || is_set(rttmonechoadmintargetmepport.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetmepport.get_name_leafdata());
    if (rttmonechoadmintargetmpid.is_set || is_set(rttmonechoadmintargetmpid.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetmpid.get_name_leafdata());
    if (rttmonechoadmintargetport.is_set || is_set(rttmonechoadmintargetport.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetport.get_name_leafdata());
    if (rttmonechoadmintargetvlan.is_set || is_set(rttmonechoadmintargetvlan.yfilter)) leaf_name_data.push_back(rttmonechoadmintargetvlan.get_name_leafdata());
    if (rttmonechoadmintos.is_set || is_set(rttmonechoadmintos.yfilter)) leaf_name_data.push_back(rttmonechoadmintos.get_name_leafdata());
    if (rttmonechoadmintstampoptimization.is_set || is_set(rttmonechoadmintstampoptimization.yfilter)) leaf_name_data.push_back(rttmonechoadmintstampoptimization.get_name_leafdata());
    if (rttmonechoadminurl.is_set || is_set(rttmonechoadminurl.yfilter)) leaf_name_data.push_back(rttmonechoadminurl.get_name_leafdata());
    if (rttmonechoadminvideotrafficprofile.is_set || is_set(rttmonechoadminvideotrafficprofile.yfilter)) leaf_name_data.push_back(rttmonechoadminvideotrafficprofile.get_name_leafdata());
    if (rttmonechoadminvrfname.is_set || is_set(rttmonechoadminvrfname.yfilter)) leaf_name_data.push_back(rttmonechoadminvrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminAggBurstCycles")
    {
        rttmonechoadminaggburstcycles = value;
        rttmonechoadminaggburstcycles.value_namespace = name_space;
        rttmonechoadminaggburstcycles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminAvailNumFrames")
    {
        rttmonechoadminavailnumframes = value;
        rttmonechoadminavailnumframes.value_namespace = name_space;
        rttmonechoadminavailnumframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCache")
    {
        rttmonechoadmincache = value;
        rttmonechoadmincache.value_namespace = name_space;
        rttmonechoadmincache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCallDuration")
    {
        rttmonechoadmincallduration = value;
        rttmonechoadmincallduration.value_namespace = name_space;
        rttmonechoadmincallduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCalledNumber")
    {
        rttmonechoadmincallednumber = value;
        rttmonechoadmincallednumber.value_namespace = name_space;
        rttmonechoadmincallednumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecInterval")
    {
        rttmonechoadmincodecinterval = value;
        rttmonechoadmincodecinterval.value_namespace = name_space;
        rttmonechoadmincodecinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecNumPackets")
    {
        rttmonechoadmincodecnumpackets = value;
        rttmonechoadmincodecnumpackets.value_namespace = name_space;
        rttmonechoadmincodecnumpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecPayload")
    {
        rttmonechoadmincodecpayload = value;
        rttmonechoadmincodecpayload.value_namespace = name_space;
        rttmonechoadmincodecpayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminCodecType")
    {
        rttmonechoadmincodectype = value;
        rttmonechoadmincodectype.value_namespace = name_space;
        rttmonechoadmincodectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminControlEnable")
    {
        rttmonechoadmincontrolenable = value;
        rttmonechoadmincontrolenable.value_namespace = name_space;
        rttmonechoadmincontrolenable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonEchoAdminDetectPoint")
    {
        rttmonechoadmindetectpoint = value;
        rttmonechoadmindetectpoint.value_namespace = name_space;
        rttmonechoadmindetectpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminDscp")
    {
        rttmonechoadmindscp = value;
        rttmonechoadmindscp.value_namespace = name_space;
        rttmonechoadmindscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonEchoAdminEnableBurst")
    {
        rttmonechoadminenableburst = value;
        rttmonechoadminenableburst.value_namespace = name_space;
        rttmonechoadminenableburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEndPointListName")
    {
        rttmonechoadminendpointlistname = value;
        rttmonechoadminendpointlistname.value_namespace = name_space;
        rttmonechoadminendpointlistname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminEthernetCOS")
    {
        rttmonechoadminethernetcos = value;
        rttmonechoadminethernetcos.value_namespace = name_space;
        rttmonechoadminethernetcos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminGKRegistration")
    {
        rttmonechoadmingkregistration = value;
        rttmonechoadmingkregistration.value_namespace = name_space;
        rttmonechoadmingkregistration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminHTTPVersion")
    {
        rttmonechoadminhttpversion = value;
        rttmonechoadminhttpversion.value_namespace = name_space;
        rttmonechoadminhttpversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminICPIFAdvFactor")
    {
        rttmonechoadminicpifadvfactor = value;
        rttmonechoadminicpifadvfactor.value_namespace = name_space;
        rttmonechoadminicpifadvfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminIgmpTreeInit")
    {
        rttmonechoadminigmptreeinit = value;
        rttmonechoadminigmptreeinit.value_namespace = name_space;
        rttmonechoadminigmptreeinit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminInputInterface")
    {
        rttmonechoadmininputinterface = value;
        rttmonechoadmininputinterface.value_namespace = name_space;
        rttmonechoadmininputinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminInterval")
    {
        rttmonechoadmininterval = value;
        rttmonechoadmininterval.value_namespace = name_space;
        rttmonechoadmininterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLossRatioNumFrames")
    {
        rttmonechoadminlossrationumframes = value;
        rttmonechoadminlossrationumframes.value_namespace = name_space;
        rttmonechoadminlossrationumframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPExp")
    {
        rttmonechoadminlspexp = value;
        rttmonechoadminlspexp.value_namespace = name_space;
        rttmonechoadminlspexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPFECType")
    {
        rttmonechoadminlspfectype = value;
        rttmonechoadminlspfectype.value_namespace = name_space;
        rttmonechoadminlspfectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPNullShim")
    {
        rttmonechoadminlspnullshim = value;
        rttmonechoadminlspnullshim.value_namespace = name_space;
        rttmonechoadminlspnullshim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPReplyDscp")
    {
        rttmonechoadminlspreplydscp = value;
        rttmonechoadminlspreplydscp.value_namespace = name_space;
        rttmonechoadminlspreplydscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPReplyMode")
    {
        rttmonechoadminlspreplymode = value;
        rttmonechoadminlspreplymode.value_namespace = name_space;
        rttmonechoadminlspreplymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPSelector")
    {
        rttmonechoadminlspselector = value;
        rttmonechoadminlspselector.value_namespace = name_space;
        rttmonechoadminlspselector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPTTL")
    {
        rttmonechoadminlspttl = value;
        rttmonechoadminlspttl.value_namespace = name_space;
        rttmonechoadminlspttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSPVccvID")
    {
        rttmonechoadminlspvccvid = value;
        rttmonechoadminlspvccvid.value_namespace = name_space;
        rttmonechoadminlspvccvid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminLSREnable")
    {
        rttmonechoadminlsrenable = value;
        rttmonechoadminlsrenable.value_namespace = name_space;
        rttmonechoadminlsrenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminMode")
    {
        rttmonechoadminmode = value;
        rttmonechoadminmode.value_namespace = name_space;
        rttmonechoadminmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminNameServer")
    {
        rttmonechoadminnameserver = value;
        rttmonechoadminnameserver.value_namespace = name_space;
        rttmonechoadminnameserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminNumPackets")
    {
        rttmonechoadminnumpackets = value;
        rttmonechoadminnumpackets.value_namespace = name_space;
        rttmonechoadminnumpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminOperation")
    {
        rttmonechoadminoperation = value;
        rttmonechoadminoperation.value_namespace = name_space;
        rttmonechoadminoperation.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonEchoAdminProtocol")
    {
        rttmonechoadminprotocol = value;
        rttmonechoadminprotocol.value_namespace = name_space;
        rttmonechoadminprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminProxy")
    {
        rttmonechoadminproxy = value;
        rttmonechoadminproxy.value_namespace = name_space;
        rttmonechoadminproxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminReserveDsp")
    {
        rttmonechoadminreservedsp = value;
        rttmonechoadminreservedsp.value_namespace = name_space;
        rttmonechoadminreservedsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSourceAddress")
    {
        rttmonechoadminsourceaddress = value;
        rttmonechoadminsourceaddress.value_namespace = name_space;
        rttmonechoadminsourceaddress.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonEchoAdminSourcePort")
    {
        rttmonechoadminsourceport = value;
        rttmonechoadminsourceport.value_namespace = name_space;
        rttmonechoadminsourceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSourceVoicePort")
    {
        rttmonechoadminsourcevoiceport = value;
        rttmonechoadminsourcevoiceport.value_namespace = name_space;
        rttmonechoadminsourcevoiceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminSSM")
    {
        rttmonechoadminssm = value;
        rttmonechoadminssm.value_namespace = name_space;
        rttmonechoadminssm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonEchoAdminTargetAddress")
    {
        rttmonechoadmintargetaddress = value;
        rttmonechoadmintargetaddress.value_namespace = name_space;
        rttmonechoadmintargetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetAddressString")
    {
        rttmonechoadmintargetaddressstring = value;
        rttmonechoadmintargetaddressstring.value_namespace = name_space;
        rttmonechoadmintargetaddressstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetDomainName")
    {
        rttmonechoadmintargetdomainname = value;
        rttmonechoadmintargetdomainname.value_namespace = name_space;
        rttmonechoadmintargetdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetEVC")
    {
        rttmonechoadmintargetevc = value;
        rttmonechoadmintargetevc.value_namespace = name_space;
        rttmonechoadmintargetevc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetMacAddress")
    {
        rttmonechoadmintargetmacaddress = value;
        rttmonechoadmintargetmacaddress.value_namespace = name_space;
        rttmonechoadmintargetmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetMEPPort")
    {
        rttmonechoadmintargetmepport = value;
        rttmonechoadmintargetmepport.value_namespace = name_space;
        rttmonechoadmintargetmepport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetMPID")
    {
        rttmonechoadmintargetmpid = value;
        rttmonechoadmintargetmpid.value_namespace = name_space;
        rttmonechoadmintargetmpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetPort")
    {
        rttmonechoadmintargetport = value;
        rttmonechoadmintargetport.value_namespace = name_space;
        rttmonechoadmintargetport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTargetVLAN")
    {
        rttmonechoadmintargetvlan = value;
        rttmonechoadmintargetvlan.value_namespace = name_space;
        rttmonechoadmintargetvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTOS")
    {
        rttmonechoadmintos = value;
        rttmonechoadmintos.value_namespace = name_space;
        rttmonechoadmintos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminTstampOptimization")
    {
        rttmonechoadmintstampoptimization = value;
        rttmonechoadmintstampoptimization.value_namespace = name_space;
        rttmonechoadmintstampoptimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminURL")
    {
        rttmonechoadminurl = value;
        rttmonechoadminurl.value_namespace = name_space;
        rttmonechoadminurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminVideoTrafficProfile")
    {
        rttmonechoadminvideotrafficprofile = value;
        rttmonechoadminvideotrafficprofile.value_namespace = name_space;
        rttmonechoadminvideotrafficprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonEchoAdminVrfName")
    {
        rttmonechoadminvrfname = value;
        rttmonechoadminvrfname.value_namespace = name_space;
        rttmonechoadminvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminAggBurstCycles")
    {
        rttmonechoadminaggburstcycles.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminAvailNumFrames")
    {
        rttmonechoadminavailnumframes.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCache")
    {
        rttmonechoadmincache.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCallDuration")
    {
        rttmonechoadmincallduration.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCalledNumber")
    {
        rttmonechoadmincallednumber.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecInterval")
    {
        rttmonechoadmincodecinterval.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecNumPackets")
    {
        rttmonechoadmincodecnumpackets.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecPayload")
    {
        rttmonechoadmincodecpayload.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminCodecType")
    {
        rttmonechoadmincodectype.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminControlEnable")
    {
        rttmonechoadmincontrolenable.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminControlRetry")
    {
        rttmonechoadmincontrolretry.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminControlTimeout")
    {
        rttmonechoadmincontroltimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminDetectPoint")
    {
        rttmonechoadmindetectpoint.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminDscp")
    {
        rttmonechoadmindscp.yfilter = yfilter;
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
    if(value_path == "rttMonEchoAdminEnableBurst")
    {
        rttmonechoadminenableburst.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEndPointListName")
    {
        rttmonechoadminendpointlistname.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminEthernetCOS")
    {
        rttmonechoadminethernetcos.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminGKRegistration")
    {
        rttmonechoadmingkregistration.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminHTTPVersion")
    {
        rttmonechoadminhttpversion.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminICPIFAdvFactor")
    {
        rttmonechoadminicpifadvfactor.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminIgmpTreeInit")
    {
        rttmonechoadminigmptreeinit.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminInputInterface")
    {
        rttmonechoadmininputinterface.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminInterval")
    {
        rttmonechoadmininterval.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLossRatioNumFrames")
    {
        rttmonechoadminlossrationumframes.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPExp")
    {
        rttmonechoadminlspexp.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPFECType")
    {
        rttmonechoadminlspfectype.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPNullShim")
    {
        rttmonechoadminlspnullshim.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPReplyDscp")
    {
        rttmonechoadminlspreplydscp.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPReplyMode")
    {
        rttmonechoadminlspreplymode.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPSelector")
    {
        rttmonechoadminlspselector.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPTTL")
    {
        rttmonechoadminlspttl.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSPVccvID")
    {
        rttmonechoadminlspvccvid.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminLSREnable")
    {
        rttmonechoadminlsrenable.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminMode")
    {
        rttmonechoadminmode.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminNameServer")
    {
        rttmonechoadminnameserver.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminNumPackets")
    {
        rttmonechoadminnumpackets.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminOperation")
    {
        rttmonechoadminoperation.yfilter = yfilter;
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
    if(value_path == "rttMonEchoAdminPktDataRequestSize")
    {
        rttmonechoadminpktdatarequestsize.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminPktDataResponseSize")
    {
        rttmonechoadminpktdataresponsesize.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminPrecision")
    {
        rttmonechoadminprecision.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminProbePakPriority")
    {
        rttmonechoadminprobepakpriority.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminProtocol")
    {
        rttmonechoadminprotocol.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminProxy")
    {
        rttmonechoadminproxy.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminReserveDsp")
    {
        rttmonechoadminreservedsp.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceAddress")
    {
        rttmonechoadminsourceaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceMacAddress")
    {
        rttmonechoadminsourcemacaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceMPID")
    {
        rttmonechoadminsourcempid.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourcePort")
    {
        rttmonechoadminsourceport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSourceVoicePort")
    {
        rttmonechoadminsourcevoiceport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminSSM")
    {
        rttmonechoadminssm.yfilter = yfilter;
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
    if(value_path == "rttMonEchoAdminTargetAddress")
    {
        rttmonechoadmintargetaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetAddressString")
    {
        rttmonechoadmintargetaddressstring.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetDomainName")
    {
        rttmonechoadmintargetdomainname.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetEVC")
    {
        rttmonechoadmintargetevc.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetMacAddress")
    {
        rttmonechoadmintargetmacaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetMEPPort")
    {
        rttmonechoadmintargetmepport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetMPID")
    {
        rttmonechoadmintargetmpid.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetPort")
    {
        rttmonechoadmintargetport.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTargetVLAN")
    {
        rttmonechoadmintargetvlan.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTOS")
    {
        rttmonechoadmintos.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminTstampOptimization")
    {
        rttmonechoadmintstampoptimization.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminURL")
    {
        rttmonechoadminurl.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminVideoTrafficProfile")
    {
        rttmonechoadminvideotrafficprofile.yfilter = yfilter;
    }
    if(value_path == "rttMonEchoAdminVrfName")
    {
        rttmonechoadminvrfname.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonEchoAdminAggBurstCycles" || name == "rttMonEchoAdminAvailNumFrames" || name == "rttMonEchoAdminCache" || name == "rttMonEchoAdminCallDuration" || name == "rttMonEchoAdminCalledNumber" || name == "rttMonEchoAdminCodecInterval" || name == "rttMonEchoAdminCodecNumPackets" || name == "rttMonEchoAdminCodecPayload" || name == "rttMonEchoAdminCodecType" || name == "rttMonEchoAdminControlEnable" || name == "rttMonEchoAdminControlRetry" || name == "rttMonEchoAdminControlTimeout" || name == "rttMonEchoAdminDetectPoint" || name == "rttMonEchoAdminDscp" || name == "rttMonEchoAdminEmulateSourceAddress" || name == "rttMonEchoAdminEmulateSourcePort" || name == "rttMonEchoAdminEmulateTargetAddress" || name == "rttMonEchoAdminEmulateTargetPort" || name == "rttMonEchoAdminEnableBurst" || name == "rttMonEchoAdminEndPointListName" || name == "rttMonEchoAdminEthernetCOS" || name == "rttMonEchoAdminGKRegistration" || name == "rttMonEchoAdminHTTPVersion" || name == "rttMonEchoAdminICPIFAdvFactor" || name == "rttMonEchoAdminIgmpTreeInit" || name == "rttMonEchoAdminInputInterface" || name == "rttMonEchoAdminInterval" || name == "rttMonEchoAdminLossRatioNumFrames" || name == "rttMonEchoAdminLSPExp" || name == "rttMonEchoAdminLSPFECType" || name == "rttMonEchoAdminLSPNullShim" || name == "rttMonEchoAdminLSPReplyDscp" || name == "rttMonEchoAdminLSPReplyMode" || name == "rttMonEchoAdminLSPSelector" || name == "rttMonEchoAdminLSPTTL" || name == "rttMonEchoAdminLSPVccvID" || name == "rttMonEchoAdminLSREnable" || name == "rttMonEchoAdminMode" || name == "rttMonEchoAdminNameServer" || name == "rttMonEchoAdminNumPackets" || name == "rttMonEchoAdminOperation" || name == "rttMonEchoAdminOWNTPSyncTolAbs" || name == "rttMonEchoAdminOWNTPSyncTolPct" || name == "rttMonEchoAdminOWNTPSyncTolType" || name == "rttMonEchoAdminPktDataRequestSize" || name == "rttMonEchoAdminPktDataResponseSize" || name == "rttMonEchoAdminPrecision" || name == "rttMonEchoAdminProbePakPriority" || name == "rttMonEchoAdminProtocol" || name == "rttMonEchoAdminProxy" || name == "rttMonEchoAdminReserveDsp" || name == "rttMonEchoAdminSourceAddress" || name == "rttMonEchoAdminSourceMacAddress" || name == "rttMonEchoAdminSourceMPID" || name == "rttMonEchoAdminSourcePort" || name == "rttMonEchoAdminSourceVoicePort" || name == "rttMonEchoAdminSSM" || name == "rttMonEchoAdminString1" || name == "rttMonEchoAdminString2" || name == "rttMonEchoAdminString3" || name == "rttMonEchoAdminString4" || name == "rttMonEchoAdminString5" || name == "rttMonEchoAdminTargetAddress" || name == "rttMonEchoAdminTargetAddressString" || name == "rttMonEchoAdminTargetDomainName" || name == "rttMonEchoAdminTargetEVC" || name == "rttMonEchoAdminTargetMacAddress" || name == "rttMonEchoAdminTargetMEPPort" || name == "rttMonEchoAdminTargetMPID" || name == "rttMonEchoAdminTargetPort" || name == "rttMonEchoAdminTargetVLAN" || name == "rttMonEchoAdminTOS" || name == "rttMonEchoAdminTstampOptimization" || name == "rttMonEchoAdminURL" || name == "rttMonEchoAdminVideoTrafficProfile" || name == "rttMonEchoAdminVrfName")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadmintable()
{

    yang_name = "rttMonEchoPathAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonechopathadmintable::~Rttmonechopathadmintable()
{
}

bool CISCORTTMONMIB::Rttmonechopathadmintable::has_data() const
{
    for (std::size_t index=0; index<rttmonechopathadminentry.size(); index++)
    {
        if(rttmonechopathadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonechopathadmintable::has_operation() const
{
    for (std::size_t index=0; index<rttmonechopathadminentry.size(); index++)
    {
        if(rttmonechopathadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonechopathadmintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonechopathadmintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoPathAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonechopathadmintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonechopathadmintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonEchoPathAdminEntry")
    {
        for(auto const & c : rttmonechopathadminentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry>();
        c->parent = this;
        rttmonechopathadminentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonechopathadmintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonechopathadminentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonechopathadmintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonechopathadmintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonechopathadmintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonEchoPathAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::Rttmonechopathadminentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonechopathadminhopindex{YType::int32, "rttMonEchoPathAdminHopIndex"},
    rttmonechopathadminhopaddress{YType::str, "rttMonEchoPathAdminHopAddress"}
{

    yang_name = "rttMonEchoPathAdminEntry"; yang_parent_name = "rttMonEchoPathAdminTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::~Rttmonechopathadminentry()
{
}

bool CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonechopathadminhopindex.is_set
	|| rttmonechopathadminhopaddress.is_set;
}

bool CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonechopathadminhopindex.yfilter)
	|| ydk::is_set(rttmonechopathadminhopaddress.yfilter);
}

std::string CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonEchoPathAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonEchoPathAdminEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonEchoPathAdminHopIndex='" <<rttmonechopathadminhopindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonechopathadminhopindex.is_set || is_set(rttmonechopathadminhopindex.yfilter)) leaf_name_data.push_back(rttmonechopathadminhopindex.get_name_leafdata());
    if (rttmonechopathadminhopaddress.is_set || is_set(rttmonechopathadminhopaddress.yfilter)) leaf_name_data.push_back(rttmonechopathadminhopaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmonechopathadmintable::Rttmonechopathadminentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonEchoPathAdminHopIndex" || name == "rttMonEchoPathAdminHopAddress")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadmintable()
{

    yang_name = "rttMonFileIOAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonfileioadmintable::~Rttmonfileioadmintable()
{
}

bool CISCORTTMONMIB::Rttmonfileioadmintable::has_data() const
{
    for (std::size_t index=0; index<rttmonfileioadminentry.size(); index++)
    {
        if(rttmonfileioadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonfileioadmintable::has_operation() const
{
    for (std::size_t index=0; index<rttmonfileioadminentry.size(); index++)
    {
        if(rttmonfileioadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonfileioadmintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonfileioadmintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonFileIOAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonfileioadmintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonfileioadmintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonFileIOAdminEntry")
    {
        for(auto const & c : rttmonfileioadminentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry>();
        c->parent = this;
        rttmonfileioadminentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonfileioadmintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonfileioadminentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonfileioadmintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonfileioadmintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonfileioadmintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonFileIOAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonfileioadminaction{YType::enumeration, "rttMonFileIOAdminAction"},
    rttmonfileioadminfilepath{YType::str, "rttMonFileIOAdminFilePath"},
    rttmonfileioadminsize{YType::enumeration, "rttMonFileIOAdminSize"}
{

    yang_name = "rttMonFileIOAdminEntry"; yang_parent_name = "rttMonFileIOAdminTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::~Rttmonfileioadminentry()
{
}

bool CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonfileioadminaction.is_set
	|| rttmonfileioadminfilepath.is_set
	|| rttmonfileioadminsize.is_set;
}

bool CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonfileioadminaction.yfilter)
	|| ydk::is_set(rttmonfileioadminfilepath.yfilter)
	|| ydk::is_set(rttmonfileioadminsize.yfilter);
}

std::string CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonFileIOAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonFileIOAdminEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonfileioadminaction.is_set || is_set(rttmonfileioadminaction.yfilter)) leaf_name_data.push_back(rttmonfileioadminaction.get_name_leafdata());
    if (rttmonfileioadminfilepath.is_set || is_set(rttmonfileioadminfilepath.yfilter)) leaf_name_data.push_back(rttmonfileioadminfilepath.get_name_leafdata());
    if (rttmonfileioadminsize.is_set || is_set(rttmonfileioadminsize.yfilter)) leaf_name_data.push_back(rttmonfileioadminsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonFileIOAdminAction")
    {
        rttmonfileioadminaction = value;
        rttmonfileioadminaction.value_namespace = name_space;
        rttmonfileioadminaction.value_namespace_prefix = name_space_prefix;
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
}

void CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonFileIOAdminAction")
    {
        rttmonfileioadminaction.yfilter = yfilter;
    }
    if(value_path == "rttMonFileIOAdminFilePath")
    {
        rttmonfileioadminfilepath.yfilter = yfilter;
    }
    if(value_path == "rttMonFileIOAdminSize")
    {
        rttmonfileioadminsize.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonFileIOAdminAction" || name == "rttMonFileIOAdminFilePath" || name == "rttMonFileIOAdminSize")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedopertable()
{

    yang_name = "rttMonGeneratedOperTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmongeneratedopertable::~Rttmongeneratedopertable()
{
}

bool CISCORTTMONMIB::Rttmongeneratedopertable::has_data() const
{
    for (std::size_t index=0; index<rttmongeneratedoperentry.size(); index++)
    {
        if(rttmongeneratedoperentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmongeneratedopertable::has_operation() const
{
    for (std::size_t index=0; index<rttmongeneratedoperentry.size(); index++)
    {
        if(rttmongeneratedoperentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmongeneratedopertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmongeneratedopertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGeneratedOperTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmongeneratedopertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmongeneratedopertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonGeneratedOperEntry")
    {
        for(auto const & c : rttmongeneratedoperentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry>();
        c->parent = this;
        rttmongeneratedoperentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmongeneratedopertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmongeneratedoperentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmongeneratedopertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmongeneratedopertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmongeneratedopertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonGeneratedOperEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::Rttmongeneratedoperentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmongeneratedoperrespipaddrtype{YType::enumeration, "rttMonGeneratedOperRespIpAddrType"},
    rttmongeneratedoperrespipaddr{YType::str, "rttMonGeneratedOperRespIpAddr"},
    rttmongeneratedoperctrladminindex{YType::uint32, "rttMonGeneratedOperCtrlAdminIndex"}
{

    yang_name = "rttMonGeneratedOperEntry"; yang_parent_name = "rttMonGeneratedOperTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::~Rttmongeneratedoperentry()
{
}

bool CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmongeneratedoperrespipaddrtype.is_set
	|| rttmongeneratedoperrespipaddr.is_set
	|| rttmongeneratedoperctrladminindex.is_set;
}

bool CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmongeneratedoperrespipaddrtype.yfilter)
	|| ydk::is_set(rttmongeneratedoperrespipaddr.yfilter)
	|| ydk::is_set(rttmongeneratedoperctrladminindex.yfilter);
}

std::string CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonGeneratedOperTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGeneratedOperEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonGeneratedOperRespIpAddrType='" <<rttmongeneratedoperrespipaddrtype <<"']" <<"[rttMonGeneratedOperRespIpAddr='" <<rttmongeneratedoperrespipaddr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmongeneratedoperrespipaddrtype.is_set || is_set(rttmongeneratedoperrespipaddrtype.yfilter)) leaf_name_data.push_back(rttmongeneratedoperrespipaddrtype.get_name_leafdata());
    if (rttmongeneratedoperrespipaddr.is_set || is_set(rttmongeneratedoperrespipaddr.yfilter)) leaf_name_data.push_back(rttmongeneratedoperrespipaddr.get_name_leafdata());
    if (rttmongeneratedoperctrladminindex.is_set || is_set(rttmongeneratedoperctrladminindex.yfilter)) leaf_name_data.push_back(rttmongeneratedoperctrladminindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmongeneratedopertable::Rttmongeneratedoperentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonGeneratedOperRespIpAddrType" || name == "rttMonGeneratedOperRespIpAddr" || name == "rttMonGeneratedOperCtrlAdminIndex")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadmintable()
{

    yang_name = "rttMonGrpScheduleAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmongrpscheduleadmintable::~Rttmongrpscheduleadmintable()
{
}

bool CISCORTTMONMIB::Rttmongrpscheduleadmintable::has_data() const
{
    for (std::size_t index=0; index<rttmongrpscheduleadminentry.size(); index++)
    {
        if(rttmongrpscheduleadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmongrpscheduleadmintable::has_operation() const
{
    for (std::size_t index=0; index<rttmongrpscheduleadminentry.size(); index++)
    {
        if(rttmongrpscheduleadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmongrpscheduleadmintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmongrpscheduleadmintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGrpScheduleAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmongrpscheduleadmintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmongrpscheduleadmintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonGrpScheduleAdminEntry")
    {
        for(auto const & c : rttmongrpscheduleadminentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry>();
        c->parent = this;
        rttmongrpscheduleadminentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmongrpscheduleadmintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmongrpscheduleadminentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmongrpscheduleadmintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmongrpscheduleadmintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmongrpscheduleadmintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonGrpScheduleAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::Rttmongrpscheduleadminentry()
    :
    rttmongrpscheduleadminindex{YType::int32, "rttMonGrpScheduleAdminIndex"},
    rttmongrpscheduleadminadd{YType::boolean, "rttMonGrpScheduleAdminAdd"},
    rttmongrpscheduleadminageout{YType::int32, "rttMonGrpScheduleAdminAgeout"},
    rttmongrpscheduleadmindelete{YType::boolean, "rttMonGrpScheduleAdminDelete"},
    rttmongrpscheduleadminfreqmax{YType::int32, "rttMonGrpScheduleAdminFreqMax"},
    rttmongrpscheduleadminfreqmin{YType::int32, "rttMonGrpScheduleAdminFreqMin"},
    rttmongrpscheduleadminfrequency{YType::int32, "rttMonGrpScheduleAdminFrequency"},
    rttmongrpscheduleadminlife{YType::int32, "rttMonGrpScheduleAdminLife"},
    rttmongrpscheduleadminperiod{YType::int32, "rttMonGrpScheduleAdminPeriod"},
    rttmongrpscheduleadminprobes{YType::str, "rttMonGrpScheduleAdminProbes"},
    rttmongrpscheduleadminreset{YType::boolean, "rttMonGrpScheduleAdminReset"},
    rttmongrpscheduleadminstarttime{YType::int32, "rttMonGrpScheduleAdminStartTime"},
    rttmongrpscheduleadminstatus{YType::enumeration, "rttMonGrpScheduleAdminStatus"}
{

    yang_name = "rttMonGrpScheduleAdminEntry"; yang_parent_name = "rttMonGrpScheduleAdminTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::~Rttmongrpscheduleadminentry()
{
}

bool CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::has_data() const
{
    return rttmongrpscheduleadminindex.is_set
	|| rttmongrpscheduleadminadd.is_set
	|| rttmongrpscheduleadminageout.is_set
	|| rttmongrpscheduleadmindelete.is_set
	|| rttmongrpscheduleadminfreqmax.is_set
	|| rttmongrpscheduleadminfreqmin.is_set
	|| rttmongrpscheduleadminfrequency.is_set
	|| rttmongrpscheduleadminlife.is_set
	|| rttmongrpscheduleadminperiod.is_set
	|| rttmongrpscheduleadminprobes.is_set
	|| rttmongrpscheduleadminreset.is_set
	|| rttmongrpscheduleadminstarttime.is_set
	|| rttmongrpscheduleadminstatus.is_set;
}

bool CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmongrpscheduleadminindex.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminadd.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminageout.yfilter)
	|| ydk::is_set(rttmongrpscheduleadmindelete.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminfreqmax.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminfreqmin.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminfrequency.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminlife.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminperiod.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminprobes.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminreset.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminstarttime.yfilter)
	|| ydk::is_set(rttmongrpscheduleadminstatus.yfilter);
}

std::string CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonGrpScheduleAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonGrpScheduleAdminEntry" <<"[rttMonGrpScheduleAdminIndex='" <<rttmongrpscheduleadminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmongrpscheduleadminindex.is_set || is_set(rttmongrpscheduleadminindex.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminindex.get_name_leafdata());
    if (rttmongrpscheduleadminadd.is_set || is_set(rttmongrpscheduleadminadd.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminadd.get_name_leafdata());
    if (rttmongrpscheduleadminageout.is_set || is_set(rttmongrpscheduleadminageout.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminageout.get_name_leafdata());
    if (rttmongrpscheduleadmindelete.is_set || is_set(rttmongrpscheduleadmindelete.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadmindelete.get_name_leafdata());
    if (rttmongrpscheduleadminfreqmax.is_set || is_set(rttmongrpscheduleadminfreqmax.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminfreqmax.get_name_leafdata());
    if (rttmongrpscheduleadminfreqmin.is_set || is_set(rttmongrpscheduleadminfreqmin.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminfreqmin.get_name_leafdata());
    if (rttmongrpscheduleadminfrequency.is_set || is_set(rttmongrpscheduleadminfrequency.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminfrequency.get_name_leafdata());
    if (rttmongrpscheduleadminlife.is_set || is_set(rttmongrpscheduleadminlife.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminlife.get_name_leafdata());
    if (rttmongrpscheduleadminperiod.is_set || is_set(rttmongrpscheduleadminperiod.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminperiod.get_name_leafdata());
    if (rttmongrpscheduleadminprobes.is_set || is_set(rttmongrpscheduleadminprobes.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminprobes.get_name_leafdata());
    if (rttmongrpscheduleadminreset.is_set || is_set(rttmongrpscheduleadminreset.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminreset.get_name_leafdata());
    if (rttmongrpscheduleadminstarttime.is_set || is_set(rttmongrpscheduleadminstarttime.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminstarttime.get_name_leafdata());
    if (rttmongrpscheduleadminstatus.is_set || is_set(rttmongrpscheduleadminstatus.yfilter)) leaf_name_data.push_back(rttmongrpscheduleadminstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonGrpScheduleAdminIndex")
    {
        rttmongrpscheduleadminindex = value;
        rttmongrpscheduleadminindex.value_namespace = name_space;
        rttmongrpscheduleadminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminAdd")
    {
        rttmongrpscheduleadminadd = value;
        rttmongrpscheduleadminadd.value_namespace = name_space;
        rttmongrpscheduleadminadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminAgeout")
    {
        rttmongrpscheduleadminageout = value;
        rttmongrpscheduleadminageout.value_namespace = name_space;
        rttmongrpscheduleadminageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminDelete")
    {
        rttmongrpscheduleadmindelete = value;
        rttmongrpscheduleadmindelete.value_namespace = name_space;
        rttmongrpscheduleadmindelete.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonGrpScheduleAdminPeriod")
    {
        rttmongrpscheduleadminperiod = value;
        rttmongrpscheduleadminperiod.value_namespace = name_space;
        rttmongrpscheduleadminperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminProbes")
    {
        rttmongrpscheduleadminprobes = value;
        rttmongrpscheduleadminprobes.value_namespace = name_space;
        rttmongrpscheduleadminprobes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminReset")
    {
        rttmongrpscheduleadminreset = value;
        rttmongrpscheduleadminreset.value_namespace = name_space;
        rttmongrpscheduleadminreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminStartTime")
    {
        rttmongrpscheduleadminstarttime = value;
        rttmongrpscheduleadminstarttime.value_namespace = name_space;
        rttmongrpscheduleadminstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonGrpScheduleAdminStatus")
    {
        rttmongrpscheduleadminstatus = value;
        rttmongrpscheduleadminstatus.value_namespace = name_space;
        rttmongrpscheduleadminstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonGrpScheduleAdminIndex")
    {
        rttmongrpscheduleadminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminAdd")
    {
        rttmongrpscheduleadminadd.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminAgeout")
    {
        rttmongrpscheduleadminageout.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminDelete")
    {
        rttmongrpscheduleadmindelete.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminFreqMax")
    {
        rttmongrpscheduleadminfreqmax.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminFreqMin")
    {
        rttmongrpscheduleadminfreqmin.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminFrequency")
    {
        rttmongrpscheduleadminfrequency.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminLife")
    {
        rttmongrpscheduleadminlife.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminPeriod")
    {
        rttmongrpscheduleadminperiod.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminProbes")
    {
        rttmongrpscheduleadminprobes.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminReset")
    {
        rttmongrpscheduleadminreset.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminStartTime")
    {
        rttmongrpscheduleadminstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMonGrpScheduleAdminStatus")
    {
        rttmongrpscheduleadminstatus.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonGrpScheduleAdminIndex" || name == "rttMonGrpScheduleAdminAdd" || name == "rttMonGrpScheduleAdminAgeout" || name == "rttMonGrpScheduleAdminDelete" || name == "rttMonGrpScheduleAdminFreqMax" || name == "rttMonGrpScheduleAdminFreqMin" || name == "rttMonGrpScheduleAdminFrequency" || name == "rttMonGrpScheduleAdminLife" || name == "rttMonGrpScheduleAdminPeriod" || name == "rttMonGrpScheduleAdminProbes" || name == "rttMonGrpScheduleAdminReset" || name == "rttMonGrpScheduleAdminStartTime" || name == "rttMonGrpScheduleAdminStatus")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectiontable()
{

    yang_name = "rttMonHistoryCollectionTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonhistorycollectiontable::~Rttmonhistorycollectiontable()
{
}

bool CISCORTTMONMIB::Rttmonhistorycollectiontable::has_data() const
{
    for (std::size_t index=0; index<rttmonhistorycollectionentry.size(); index++)
    {
        if(rttmonhistorycollectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonhistorycollectiontable::has_operation() const
{
    for (std::size_t index=0; index<rttmonhistorycollectionentry.size(); index++)
    {
        if(rttmonhistorycollectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonhistorycollectiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonhistorycollectiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHistoryCollectionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonhistorycollectiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonhistorycollectiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonHistoryCollectionEntry")
    {
        for(auto const & c : rttmonhistorycollectionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry>();
        c->parent = this;
        rttmonhistorycollectionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonhistorycollectiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonhistorycollectionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonhistorycollectiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonhistorycollectiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonhistorycollectiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonHistoryCollectionEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::Rttmonhistorycollectionentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonhistorycollectionlifeindex{YType::int32, "rttMonHistoryCollectionLifeIndex"},
    rttmonhistorycollectionbucketindex{YType::int32, "rttMonHistoryCollectionBucketIndex"},
    rttmonhistorycollectionsampleindex{YType::int32, "rttMonHistoryCollectionSampleIndex"},
    rttmonhistorycollectionaddress{YType::str, "rttMonHistoryCollectionAddress"},
    rttmonhistorycollectionapplspecificsense{YType::int32, "rttMonHistoryCollectionApplSpecificSense"},
    rttmonhistorycollectioncompletiontime{YType::uint32, "rttMonHistoryCollectionCompletionTime"},
    rttmonhistorycollectionsampletime{YType::uint32, "rttMonHistoryCollectionSampleTime"},
    rttmonhistorycollectionsense{YType::enumeration, "rttMonHistoryCollectionSense"},
    rttmonhistorycollectionsensedescription{YType::str, "rttMonHistoryCollectionSenseDescription"}
{

    yang_name = "rttMonHistoryCollectionEntry"; yang_parent_name = "rttMonHistoryCollectionTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::~Rttmonhistorycollectionentry()
{
}

bool CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonhistorycollectionlifeindex.is_set
	|| rttmonhistorycollectionbucketindex.is_set
	|| rttmonhistorycollectionsampleindex.is_set
	|| rttmonhistorycollectionaddress.is_set
	|| rttmonhistorycollectionapplspecificsense.is_set
	|| rttmonhistorycollectioncompletiontime.is_set
	|| rttmonhistorycollectionsampletime.is_set
	|| rttmonhistorycollectionsense.is_set
	|| rttmonhistorycollectionsensedescription.is_set;
}

bool CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionlifeindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionbucketindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsampleindex.yfilter)
	|| ydk::is_set(rttmonhistorycollectionaddress.yfilter)
	|| ydk::is_set(rttmonhistorycollectionapplspecificsense.yfilter)
	|| ydk::is_set(rttmonhistorycollectioncompletiontime.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsampletime.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsense.yfilter)
	|| ydk::is_set(rttmonhistorycollectionsensedescription.yfilter);
}

std::string CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonHistoryCollectionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHistoryCollectionEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonHistoryCollectionLifeIndex='" <<rttmonhistorycollectionlifeindex <<"']" <<"[rttMonHistoryCollectionBucketIndex='" <<rttmonhistorycollectionbucketindex <<"']" <<"[rttMonHistoryCollectionSampleIndex='" <<rttmonhistorycollectionsampleindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonhistorycollectionlifeindex.is_set || is_set(rttmonhistorycollectionlifeindex.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionlifeindex.get_name_leafdata());
    if (rttmonhistorycollectionbucketindex.is_set || is_set(rttmonhistorycollectionbucketindex.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionbucketindex.get_name_leafdata());
    if (rttmonhistorycollectionsampleindex.is_set || is_set(rttmonhistorycollectionsampleindex.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsampleindex.get_name_leafdata());
    if (rttmonhistorycollectionaddress.is_set || is_set(rttmonhistorycollectionaddress.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionaddress.get_name_leafdata());
    if (rttmonhistorycollectionapplspecificsense.is_set || is_set(rttmonhistorycollectionapplspecificsense.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionapplspecificsense.get_name_leafdata());
    if (rttmonhistorycollectioncompletiontime.is_set || is_set(rttmonhistorycollectioncompletiontime.yfilter)) leaf_name_data.push_back(rttmonhistorycollectioncompletiontime.get_name_leafdata());
    if (rttmonhistorycollectionsampletime.is_set || is_set(rttmonhistorycollectionsampletime.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsampletime.get_name_leafdata());
    if (rttmonhistorycollectionsense.is_set || is_set(rttmonhistorycollectionsense.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsense.get_name_leafdata());
    if (rttmonhistorycollectionsensedescription.is_set || is_set(rttmonhistorycollectionsensedescription.yfilter)) leaf_name_data.push_back(rttmonhistorycollectionsensedescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rttMonHistoryCollectionAddress")
    {
        rttmonhistorycollectionaddress = value;
        rttmonhistorycollectionaddress.value_namespace = name_space;
        rttmonhistorycollectionaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionApplSpecificSense")
    {
        rttmonhistorycollectionapplspecificsense = value;
        rttmonhistorycollectionapplspecificsense.value_namespace = name_space;
        rttmonhistorycollectionapplspecificsense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionCompletionTime")
    {
        rttmonhistorycollectioncompletiontime = value;
        rttmonhistorycollectioncompletiontime.value_namespace = name_space;
        rttmonhistorycollectioncompletiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionSampleTime")
    {
        rttmonhistorycollectionsampletime = value;
        rttmonhistorycollectionsampletime.value_namespace = name_space;
        rttmonhistorycollectionsampletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionSense")
    {
        rttmonhistorycollectionsense = value;
        rttmonhistorycollectionsense.value_namespace = name_space;
        rttmonhistorycollectionsense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHistoryCollectionSenseDescription")
    {
        rttmonhistorycollectionsensedescription = value;
        rttmonhistorycollectionsensedescription.value_namespace = name_space;
        rttmonhistorycollectionsensedescription.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "rttMonHistoryCollectionAddress")
    {
        rttmonhistorycollectionaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionApplSpecificSense")
    {
        rttmonhistorycollectionapplspecificsense.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionCompletionTime")
    {
        rttmonhistorycollectioncompletiontime.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionSampleTime")
    {
        rttmonhistorycollectionsampletime.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionSense")
    {
        rttmonhistorycollectionsense.yfilter = yfilter;
    }
    if(value_path == "rttMonHistoryCollectionSenseDescription")
    {
        rttmonhistorycollectionsensedescription.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonHistoryCollectionLifeIndex" || name == "rttMonHistoryCollectionBucketIndex" || name == "rttMonHistoryCollectionSampleIndex" || name == "rttMonHistoryCollectionAddress" || name == "rttMonHistoryCollectionApplSpecificSense" || name == "rttMonHistoryCollectionCompletionTime" || name == "rttMonHistoryCollectionSampleTime" || name == "rttMonHistoryCollectionSense" || name == "rttMonHistoryCollectionSenseDescription")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatstable()
{

    yang_name = "rttMonHTTPStatsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonhttpstatstable::~Rttmonhttpstatstable()
{
}

bool CISCORTTMONMIB::Rttmonhttpstatstable::has_data() const
{
    for (std::size_t index=0; index<rttmonhttpstatsentry.size(); index++)
    {
        if(rttmonhttpstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonhttpstatstable::has_operation() const
{
    for (std::size_t index=0; index<rttmonhttpstatsentry.size(); index++)
    {
        if(rttmonhttpstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonhttpstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonhttpstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHTTPStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonhttpstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonhttpstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonHTTPStatsEntry")
    {
        for(auto const & c : rttmonhttpstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry>();
        c->parent = this;
        rttmonhttpstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonhttpstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonhttpstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonhttpstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonhttpstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonhttpstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonHTTPStatsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::Rttmonhttpstatsentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonhttpstatsstarttimeindex{YType::uint32, "rttMonHTTPStatsStartTimeIndex"},
    rttmonhttpstatsbusies{YType::uint32, "rttMonHTTPStatsBusies"},
    rttmonhttpstatscompletions{YType::uint32, "rttMonHTTPStatsCompletions"},
    rttmonhttpstatsdnsqueryerror{YType::uint32, "rttMonHTTPStatsDNSQueryError"},
    rttmonhttpstatsdnsrttsum{YType::uint32, "rttMonHTTPStatsDNSRTTSum"},
    rttmonhttpstatsdnsservertimeout{YType::uint32, "rttMonHTTPStatsDNSServerTimeout"},
    rttmonhttpstatserror{YType::uint32, "rttMonHTTPStatsError"},
    rttmonhttpstatshttperror{YType::uint32, "rttMonHTTPStatsHTTPError"},
    rttmonhttpstatsmessagebodyoctetssum{YType::uint32, "rttMonHTTPStatsMessageBodyOctetsSum"},
    rttmonhttpstatsoverthresholds{YType::uint32, "rttMonHTTPStatsOverThresholds"},
    rttmonhttpstatsrttmax{YType::uint32, "rttMonHTTPStatsRTTMax"},
    rttmonhttpstatsrttmin{YType::uint32, "rttMonHTTPStatsRTTMin"},
    rttmonhttpstatsrttsum{YType::uint32, "rttMonHTTPStatsRTTSum"},
    rttmonhttpstatsrttsum2high{YType::uint32, "rttMonHTTPStatsRTTSum2High"},
    rttmonhttpstatsrttsum2low{YType::uint32, "rttMonHTTPStatsRTTSum2Low"},
    rttmonhttpstatstcpconnectrttsum{YType::uint32, "rttMonHTTPStatsTCPConnectRTTSum"},
    rttmonhttpstatstcpconnecttimeout{YType::uint32, "rttMonHTTPStatsTCPConnectTimeout"},
    rttmonhttpstatstransactionrttsum{YType::uint32, "rttMonHTTPStatsTransactionRTTSum"},
    rttmonhttpstatstransactiontimeout{YType::uint32, "rttMonHTTPStatsTransactionTimeout"}
{

    yang_name = "rttMonHTTPStatsEntry"; yang_parent_name = "rttMonHTTPStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::~Rttmonhttpstatsentry()
{
}

bool CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonhttpstatsstarttimeindex.is_set
	|| rttmonhttpstatsbusies.is_set
	|| rttmonhttpstatscompletions.is_set
	|| rttmonhttpstatsdnsqueryerror.is_set
	|| rttmonhttpstatsdnsrttsum.is_set
	|| rttmonhttpstatsdnsservertimeout.is_set
	|| rttmonhttpstatserror.is_set
	|| rttmonhttpstatshttperror.is_set
	|| rttmonhttpstatsmessagebodyoctetssum.is_set
	|| rttmonhttpstatsoverthresholds.is_set
	|| rttmonhttpstatsrttmax.is_set
	|| rttmonhttpstatsrttmin.is_set
	|| rttmonhttpstatsrttsum.is_set
	|| rttmonhttpstatsrttsum2high.is_set
	|| rttmonhttpstatsrttsum2low.is_set
	|| rttmonhttpstatstcpconnectrttsum.is_set
	|| rttmonhttpstatstcpconnecttimeout.is_set
	|| rttmonhttpstatstransactionrttsum.is_set
	|| rttmonhttpstatstransactiontimeout.is_set;
}

bool CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonhttpstatsstarttimeindex.yfilter)
	|| ydk::is_set(rttmonhttpstatsbusies.yfilter)
	|| ydk::is_set(rttmonhttpstatscompletions.yfilter)
	|| ydk::is_set(rttmonhttpstatsdnsqueryerror.yfilter)
	|| ydk::is_set(rttmonhttpstatsdnsrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatsdnsservertimeout.yfilter)
	|| ydk::is_set(rttmonhttpstatserror.yfilter)
	|| ydk::is_set(rttmonhttpstatshttperror.yfilter)
	|| ydk::is_set(rttmonhttpstatsmessagebodyoctetssum.yfilter)
	|| ydk::is_set(rttmonhttpstatsoverthresholds.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttmax.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttmin.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttsum2high.yfilter)
	|| ydk::is_set(rttmonhttpstatsrttsum2low.yfilter)
	|| ydk::is_set(rttmonhttpstatstcpconnectrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatstcpconnecttimeout.yfilter)
	|| ydk::is_set(rttmonhttpstatstransactionrttsum.yfilter)
	|| ydk::is_set(rttmonhttpstatstransactiontimeout.yfilter);
}

std::string CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonHTTPStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonHTTPStatsEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonHTTPStatsStartTimeIndex='" <<rttmonhttpstatsstarttimeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonhttpstatsstarttimeindex.is_set || is_set(rttmonhttpstatsstarttimeindex.yfilter)) leaf_name_data.push_back(rttmonhttpstatsstarttimeindex.get_name_leafdata());
    if (rttmonhttpstatsbusies.is_set || is_set(rttmonhttpstatsbusies.yfilter)) leaf_name_data.push_back(rttmonhttpstatsbusies.get_name_leafdata());
    if (rttmonhttpstatscompletions.is_set || is_set(rttmonhttpstatscompletions.yfilter)) leaf_name_data.push_back(rttmonhttpstatscompletions.get_name_leafdata());
    if (rttmonhttpstatsdnsqueryerror.is_set || is_set(rttmonhttpstatsdnsqueryerror.yfilter)) leaf_name_data.push_back(rttmonhttpstatsdnsqueryerror.get_name_leafdata());
    if (rttmonhttpstatsdnsrttsum.is_set || is_set(rttmonhttpstatsdnsrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatsdnsrttsum.get_name_leafdata());
    if (rttmonhttpstatsdnsservertimeout.is_set || is_set(rttmonhttpstatsdnsservertimeout.yfilter)) leaf_name_data.push_back(rttmonhttpstatsdnsservertimeout.get_name_leafdata());
    if (rttmonhttpstatserror.is_set || is_set(rttmonhttpstatserror.yfilter)) leaf_name_data.push_back(rttmonhttpstatserror.get_name_leafdata());
    if (rttmonhttpstatshttperror.is_set || is_set(rttmonhttpstatshttperror.yfilter)) leaf_name_data.push_back(rttmonhttpstatshttperror.get_name_leafdata());
    if (rttmonhttpstatsmessagebodyoctetssum.is_set || is_set(rttmonhttpstatsmessagebodyoctetssum.yfilter)) leaf_name_data.push_back(rttmonhttpstatsmessagebodyoctetssum.get_name_leafdata());
    if (rttmonhttpstatsoverthresholds.is_set || is_set(rttmonhttpstatsoverthresholds.yfilter)) leaf_name_data.push_back(rttmonhttpstatsoverthresholds.get_name_leafdata());
    if (rttmonhttpstatsrttmax.is_set || is_set(rttmonhttpstatsrttmax.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttmax.get_name_leafdata());
    if (rttmonhttpstatsrttmin.is_set || is_set(rttmonhttpstatsrttmin.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttmin.get_name_leafdata());
    if (rttmonhttpstatsrttsum.is_set || is_set(rttmonhttpstatsrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttsum.get_name_leafdata());
    if (rttmonhttpstatsrttsum2high.is_set || is_set(rttmonhttpstatsrttsum2high.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttsum2high.get_name_leafdata());
    if (rttmonhttpstatsrttsum2low.is_set || is_set(rttmonhttpstatsrttsum2low.yfilter)) leaf_name_data.push_back(rttmonhttpstatsrttsum2low.get_name_leafdata());
    if (rttmonhttpstatstcpconnectrttsum.is_set || is_set(rttmonhttpstatstcpconnectrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatstcpconnectrttsum.get_name_leafdata());
    if (rttmonhttpstatstcpconnecttimeout.is_set || is_set(rttmonhttpstatstcpconnecttimeout.yfilter)) leaf_name_data.push_back(rttmonhttpstatstcpconnecttimeout.get_name_leafdata());
    if (rttmonhttpstatstransactionrttsum.is_set || is_set(rttmonhttpstatstransactionrttsum.yfilter)) leaf_name_data.push_back(rttmonhttpstatstransactionrttsum.get_name_leafdata());
    if (rttmonhttpstatstransactiontimeout.is_set || is_set(rttmonhttpstatstransactiontimeout.yfilter)) leaf_name_data.push_back(rttmonhttpstatstransactiontimeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rttMonHTTPStatsBusies")
    {
        rttmonhttpstatsbusies = value;
        rttmonhttpstatsbusies.value_namespace = name_space;
        rttmonhttpstatsbusies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsCompletions")
    {
        rttmonhttpstatscompletions = value;
        rttmonhttpstatscompletions.value_namespace = name_space;
        rttmonhttpstatscompletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsDNSQueryError")
    {
        rttmonhttpstatsdnsqueryerror = value;
        rttmonhttpstatsdnsqueryerror.value_namespace = name_space;
        rttmonhttpstatsdnsqueryerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsDNSRTTSum")
    {
        rttmonhttpstatsdnsrttsum = value;
        rttmonhttpstatsdnsrttsum.value_namespace = name_space;
        rttmonhttpstatsdnsrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsDNSServerTimeout")
    {
        rttmonhttpstatsdnsservertimeout = value;
        rttmonhttpstatsdnsservertimeout.value_namespace = name_space;
        rttmonhttpstatsdnsservertimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsError")
    {
        rttmonhttpstatserror = value;
        rttmonhttpstatserror.value_namespace = name_space;
        rttmonhttpstatserror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsHTTPError")
    {
        rttmonhttpstatshttperror = value;
        rttmonhttpstatshttperror.value_namespace = name_space;
        rttmonhttpstatshttperror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsMessageBodyOctetsSum")
    {
        rttmonhttpstatsmessagebodyoctetssum = value;
        rttmonhttpstatsmessagebodyoctetssum.value_namespace = name_space;
        rttmonhttpstatsmessagebodyoctetssum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsOverThresholds")
    {
        rttmonhttpstatsoverthresholds = value;
        rttmonhttpstatsoverthresholds.value_namespace = name_space;
        rttmonhttpstatsoverthresholds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTMax")
    {
        rttmonhttpstatsrttmax = value;
        rttmonhttpstatsrttmax.value_namespace = name_space;
        rttmonhttpstatsrttmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTMin")
    {
        rttmonhttpstatsrttmin = value;
        rttmonhttpstatsrttmin.value_namespace = name_space;
        rttmonhttpstatsrttmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTSum")
    {
        rttmonhttpstatsrttsum = value;
        rttmonhttpstatsrttsum.value_namespace = name_space;
        rttmonhttpstatsrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2High")
    {
        rttmonhttpstatsrttsum2high = value;
        rttmonhttpstatsrttsum2high.value_namespace = name_space;
        rttmonhttpstatsrttsum2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2Low")
    {
        rttmonhttpstatsrttsum2low = value;
        rttmonhttpstatsrttsum2low.value_namespace = name_space;
        rttmonhttpstatsrttsum2low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectRTTSum")
    {
        rttmonhttpstatstcpconnectrttsum = value;
        rttmonhttpstatstcpconnectrttsum.value_namespace = name_space;
        rttmonhttpstatstcpconnectrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectTimeout")
    {
        rttmonhttpstatstcpconnecttimeout = value;
        rttmonhttpstatstcpconnecttimeout.value_namespace = name_space;
        rttmonhttpstatstcpconnecttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTransactionRTTSum")
    {
        rttmonhttpstatstransactionrttsum = value;
        rttmonhttpstatstransactionrttsum.value_namespace = name_space;
        rttmonhttpstatstransactionrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonHTTPStatsTransactionTimeout")
    {
        rttmonhttpstatstransactiontimeout = value;
        rttmonhttpstatstransactiontimeout.value_namespace = name_space;
        rttmonhttpstatstransactiontimeout.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsStartTimeIndex")
    {
        rttmonhttpstatsstarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsBusies")
    {
        rttmonhttpstatsbusies.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsCompletions")
    {
        rttmonhttpstatscompletions.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsDNSQueryError")
    {
        rttmonhttpstatsdnsqueryerror.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsDNSRTTSum")
    {
        rttmonhttpstatsdnsrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsDNSServerTimeout")
    {
        rttmonhttpstatsdnsservertimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsError")
    {
        rttmonhttpstatserror.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsHTTPError")
    {
        rttmonhttpstatshttperror.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsMessageBodyOctetsSum")
    {
        rttmonhttpstatsmessagebodyoctetssum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsOverThresholds")
    {
        rttmonhttpstatsoverthresholds.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTMax")
    {
        rttmonhttpstatsrttmax.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTMin")
    {
        rttmonhttpstatsrttmin.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTSum")
    {
        rttmonhttpstatsrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2High")
    {
        rttmonhttpstatsrttsum2high.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsRTTSum2Low")
    {
        rttmonhttpstatsrttsum2low.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectRTTSum")
    {
        rttmonhttpstatstcpconnectrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTCPConnectTimeout")
    {
        rttmonhttpstatstcpconnecttimeout.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTransactionRTTSum")
    {
        rttmonhttpstatstransactionrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonHTTPStatsTransactionTimeout")
    {
        rttmonhttpstatstransactiontimeout.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonhttpstatstable::Rttmonhttpstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonHTTPStatsStartTimeIndex" || name == "rttMonHTTPStatsBusies" || name == "rttMonHTTPStatsCompletions" || name == "rttMonHTTPStatsDNSQueryError" || name == "rttMonHTTPStatsDNSRTTSum" || name == "rttMonHTTPStatsDNSServerTimeout" || name == "rttMonHTTPStatsError" || name == "rttMonHTTPStatsHTTPError" || name == "rttMonHTTPStatsMessageBodyOctetsSum" || name == "rttMonHTTPStatsOverThresholds" || name == "rttMonHTTPStatsRTTMax" || name == "rttMonHTTPStatsRTTMin" || name == "rttMonHTTPStatsRTTSum" || name == "rttMonHTTPStatsRTTSum2High" || name == "rttMonHTTPStatsRTTSum2Low" || name == "rttMonHTTPStatsTCPConnectRTTSum" || name == "rttMonHTTPStatsTCPConnectTimeout" || name == "rttMonHTTPStatsTransactionRTTSum" || name == "rttMonHTTPStatsTransactionTimeout")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatstable()
{

    yang_name = "rttMonJitterStatsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonjitterstatstable::~Rttmonjitterstatstable()
{
}

bool CISCORTTMONMIB::Rttmonjitterstatstable::has_data() const
{
    for (std::size_t index=0; index<rttmonjitterstatsentry.size(); index++)
    {
        if(rttmonjitterstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonjitterstatstable::has_operation() const
{
    for (std::size_t index=0; index<rttmonjitterstatsentry.size(); index++)
    {
        if(rttmonjitterstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonjitterstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonjitterstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonJitterStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonjitterstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonjitterstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonJitterStatsEntry")
    {
        for(auto const & c : rttmonjitterstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry>();
        c->parent = this;
        rttmonjitterstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonjitterstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonjitterstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonjitterstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonjitterstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonjitterstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonJitterStatsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::Rttmonjitterstatsentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonjitterstatsstarttimeindex{YType::uint32, "rttMonJitterStatsStartTimeIndex"},
    rttmonjitterstatsavgjitter{YType::uint32, "rttMonJitterStatsAvgJitter"},
    rttmonjitterstatsavgjitterds{YType::uint32, "rttMonJitterStatsAvgJitterDS"},
    rttmonjitterstatsavgjittersd{YType::uint32, "rttMonJitterStatsAvgJitterSD"},
    rttmonjitterstatsbusies{YType::uint32, "rttMonJitterStatsBusies"},
    rttmonjitterstatscompletions{YType::uint32, "rttMonJitterStatsCompletions"},
    rttmonjitterstatserror{YType::uint32, "rttMonJitterStatsError"},
    rttmonjitterstatsiajin{YType::uint32, "rttMonJitterStatsIAJIn"},
    rttmonjitterstatsiajout{YType::uint32, "rttMonJitterStatsIAJOut"},
    rttmonjitterstatsmaxoficpif{YType::uint32, "rttMonJitterStatsMaxOfICPIF"},
    rttmonjitterstatsmaxofmos{YType::uint32, "rttMonJitterStatsMaxOfMOS"},
    rttmonjitterstatsmaxofnegativesds{YType::uint32, "rttMonJitterStatsMaxOfNegativesDS"},
    rttmonjitterstatsmaxofnegativessd{YType::uint32, "rttMonJitterStatsMaxOfNegativesSD"},
    rttmonjitterstatsmaxofpositivesds{YType::uint32, "rttMonJitterStatsMaxOfPositivesDS"},
    rttmonjitterstatsmaxofpositivessd{YType::uint32, "rttMonJitterStatsMaxOfPositivesSD"},
    rttmonjitterstatsminoficpif{YType::uint32, "rttMonJitterStatsMinOfICPIF"},
    rttmonjitterstatsminofmos{YType::uint32, "rttMonJitterStatsMinOfMOS"},
    rttmonjitterstatsminofnegativesds{YType::uint32, "rttMonJitterStatsMinOfNegativesDS"},
    rttmonjitterstatsminofnegativessd{YType::uint32, "rttMonJitterStatsMinOfNegativesSD"},
    rttmonjitterstatsminofpositivesds{YType::uint32, "rttMonJitterStatsMinOfPositivesDS"},
    rttmonjitterstatsminofpositivessd{YType::uint32, "rttMonJitterStatsMinOfPositivesSD"},
    rttmonjitterstatsnumofnegativesds{YType::uint32, "rttMonJitterStatsNumOfNegativesDS"},
    rttmonjitterstatsnumofnegativessd{YType::uint32, "rttMonJitterStatsNumOfNegativesSD"},
    rttmonjitterstatsnumofow{YType::uint32, "rttMonJitterStatsNumOfOW"},
    rttmonjitterstatsnumofpositivesds{YType::uint32, "rttMonJitterStatsNumOfPositivesDS"},
    rttmonjitterstatsnumofpositivessd{YType::uint32, "rttMonJitterStatsNumOfPositivesSD"},
    rttmonjitterstatsnumofrtt{YType::uint32, "rttMonJitterStatsNumOfRTT"},
    rttmonjitterstatsoverthresholds{YType::uint32, "rttMonJitterStatsOverThresholds"},
    rttmonjitterstatsowmaxds{YType::uint32, "rttMonJitterStatsOWMaxDS"},
    rttmonjitterstatsowmaxdsnew{YType::uint32, "rttMonJitterStatsOWMaxDSNew"},
    rttmonjitterstatsowmaxsd{YType::uint32, "rttMonJitterStatsOWMaxSD"},
    rttmonjitterstatsowmaxsdnew{YType::uint32, "rttMonJitterStatsOWMaxSDNew"},
    rttmonjitterstatsowminds{YType::uint32, "rttMonJitterStatsOWMinDS"},
    rttmonjitterstatsowmindsnew{YType::uint32, "rttMonJitterStatsOWMinDSNew"},
    rttmonjitterstatsowminsd{YType::uint32, "rttMonJitterStatsOWMinSD"},
    rttmonjitterstatsowminsdnew{YType::uint32, "rttMonJitterStatsOWMinSDNew"},
    rttmonjitterstatsowsum2dshigh{YType::uint32, "rttMonJitterStatsOWSum2DSHigh"},
    rttmonjitterstatsowsum2dslow{YType::uint32, "rttMonJitterStatsOWSum2DSLow"},
    rttmonjitterstatsowsum2sdhigh{YType::uint32, "rttMonJitterStatsOWSum2SDHigh"},
    rttmonjitterstatsowsum2sdlow{YType::uint32, "rttMonJitterStatsOWSum2SDLow"},
    rttmonjitterstatsowsumds{YType::uint32, "rttMonJitterStatsOWSumDS"},
    rttmonjitterstatsowsumdshigh{YType::uint32, "rttMonJitterStatsOWSumDSHigh"},
    rttmonjitterstatsowsumsd{YType::uint32, "rttMonJitterStatsOWSumSD"},
    rttmonjitterstatsowsumsdhigh{YType::uint32, "rttMonJitterStatsOWSumSDHigh"},
    rttmonjitterstatspacketlatearrival{YType::uint32, "rttMonJitterStatsPacketLateArrival"},
    rttmonjitterstatspacketlossds{YType::uint32, "rttMonJitterStatsPacketLossDS"},
    rttmonjitterstatspacketlosssd{YType::uint32, "rttMonJitterStatsPacketLossSD"},
    rttmonjitterstatspacketmia{YType::uint32, "rttMonJitterStatsPacketMIA"},
    rttmonjitterstatspacketoutofsequence{YType::uint32, "rttMonJitterStatsPacketOutOfSequence"},
    rttmonjitterstatsrttmax{YType::uint32, "rttMonJitterStatsRTTMax"},
    rttmonjitterstatsrttmin{YType::uint32, "rttMonJitterStatsRTTMin"},
    rttmonjitterstatsrttsum{YType::uint32, "rttMonJitterStatsRTTSum"},
    rttmonjitterstatsrttsum2high{YType::uint32, "rttMonJitterStatsRTTSum2High"},
    rttmonjitterstatsrttsum2low{YType::uint32, "rttMonJitterStatsRTTSum2Low"},
    rttmonjitterstatsrttsumhigh{YType::uint32, "rttMonJitterStatsRTTSumHigh"},
    rttmonjitterstatssum2negativesdshigh{YType::uint32, "rttMonJitterStatsSum2NegativesDSHigh"},
    rttmonjitterstatssum2negativesdslow{YType::uint32, "rttMonJitterStatsSum2NegativesDSLow"},
    rttmonjitterstatssum2negativessdhigh{YType::uint32, "rttMonJitterStatsSum2NegativesSDHigh"},
    rttmonjitterstatssum2negativessdlow{YType::uint32, "rttMonJitterStatsSum2NegativesSDLow"},
    rttmonjitterstatssum2positivesdshigh{YType::uint32, "rttMonJitterStatsSum2PositivesDSHigh"},
    rttmonjitterstatssum2positivesdslow{YType::uint32, "rttMonJitterStatsSum2PositivesDSLow"},
    rttmonjitterstatssum2positivessdhigh{YType::uint32, "rttMonJitterStatsSum2PositivesSDHigh"},
    rttmonjitterstatssum2positivessdlow{YType::uint32, "rttMonJitterStatsSum2PositivesSDLow"},
    rttmonjitterstatssumofnegativesds{YType::uint32, "rttMonJitterStatsSumOfNegativesDS"},
    rttmonjitterstatssumofnegativessd{YType::uint32, "rttMonJitterStatsSumOfNegativesSD"},
    rttmonjitterstatssumofpositivesds{YType::uint32, "rttMonJitterStatsSumOfPositivesDS"},
    rttmonjitterstatssumofpositivessd{YType::uint32, "rttMonJitterStatsSumOfPositivesSD"},
    rttmonjitterstatsunsyncrts{YType::uint32, "rttMonJitterStatsUnSyncRTs"}
{

    yang_name = "rttMonJitterStatsEntry"; yang_parent_name = "rttMonJitterStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::~Rttmonjitterstatsentry()
{
}

bool CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonjitterstatsstarttimeindex.is_set
	|| rttmonjitterstatsavgjitter.is_set
	|| rttmonjitterstatsavgjitterds.is_set
	|| rttmonjitterstatsavgjittersd.is_set
	|| rttmonjitterstatsbusies.is_set
	|| rttmonjitterstatscompletions.is_set
	|| rttmonjitterstatserror.is_set
	|| rttmonjitterstatsiajin.is_set
	|| rttmonjitterstatsiajout.is_set
	|| rttmonjitterstatsmaxoficpif.is_set
	|| rttmonjitterstatsmaxofmos.is_set
	|| rttmonjitterstatsmaxofnegativesds.is_set
	|| rttmonjitterstatsmaxofnegativessd.is_set
	|| rttmonjitterstatsmaxofpositivesds.is_set
	|| rttmonjitterstatsmaxofpositivessd.is_set
	|| rttmonjitterstatsminoficpif.is_set
	|| rttmonjitterstatsminofmos.is_set
	|| rttmonjitterstatsminofnegativesds.is_set
	|| rttmonjitterstatsminofnegativessd.is_set
	|| rttmonjitterstatsminofpositivesds.is_set
	|| rttmonjitterstatsminofpositivessd.is_set
	|| rttmonjitterstatsnumofnegativesds.is_set
	|| rttmonjitterstatsnumofnegativessd.is_set
	|| rttmonjitterstatsnumofow.is_set
	|| rttmonjitterstatsnumofpositivesds.is_set
	|| rttmonjitterstatsnumofpositivessd.is_set
	|| rttmonjitterstatsnumofrtt.is_set
	|| rttmonjitterstatsoverthresholds.is_set
	|| rttmonjitterstatsowmaxds.is_set
	|| rttmonjitterstatsowmaxdsnew.is_set
	|| rttmonjitterstatsowmaxsd.is_set
	|| rttmonjitterstatsowmaxsdnew.is_set
	|| rttmonjitterstatsowminds.is_set
	|| rttmonjitterstatsowmindsnew.is_set
	|| rttmonjitterstatsowminsd.is_set
	|| rttmonjitterstatsowminsdnew.is_set
	|| rttmonjitterstatsowsum2dshigh.is_set
	|| rttmonjitterstatsowsum2dslow.is_set
	|| rttmonjitterstatsowsum2sdhigh.is_set
	|| rttmonjitterstatsowsum2sdlow.is_set
	|| rttmonjitterstatsowsumds.is_set
	|| rttmonjitterstatsowsumdshigh.is_set
	|| rttmonjitterstatsowsumsd.is_set
	|| rttmonjitterstatsowsumsdhigh.is_set
	|| rttmonjitterstatspacketlatearrival.is_set
	|| rttmonjitterstatspacketlossds.is_set
	|| rttmonjitterstatspacketlosssd.is_set
	|| rttmonjitterstatspacketmia.is_set
	|| rttmonjitterstatspacketoutofsequence.is_set
	|| rttmonjitterstatsrttmax.is_set
	|| rttmonjitterstatsrttmin.is_set
	|| rttmonjitterstatsrttsum.is_set
	|| rttmonjitterstatsrttsum2high.is_set
	|| rttmonjitterstatsrttsum2low.is_set
	|| rttmonjitterstatsrttsumhigh.is_set
	|| rttmonjitterstatssum2negativesdshigh.is_set
	|| rttmonjitterstatssum2negativesdslow.is_set
	|| rttmonjitterstatssum2negativessdhigh.is_set
	|| rttmonjitterstatssum2negativessdlow.is_set
	|| rttmonjitterstatssum2positivesdshigh.is_set
	|| rttmonjitterstatssum2positivesdslow.is_set
	|| rttmonjitterstatssum2positivessdhigh.is_set
	|| rttmonjitterstatssum2positivessdlow.is_set
	|| rttmonjitterstatssumofnegativesds.is_set
	|| rttmonjitterstatssumofnegativessd.is_set
	|| rttmonjitterstatssumofpositivesds.is_set
	|| rttmonjitterstatssumofpositivessd.is_set
	|| rttmonjitterstatsunsyncrts.is_set;
}

bool CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonjitterstatsstarttimeindex.yfilter)
	|| ydk::is_set(rttmonjitterstatsavgjitter.yfilter)
	|| ydk::is_set(rttmonjitterstatsavgjitterds.yfilter)
	|| ydk::is_set(rttmonjitterstatsavgjittersd.yfilter)
	|| ydk::is_set(rttmonjitterstatsbusies.yfilter)
	|| ydk::is_set(rttmonjitterstatscompletions.yfilter)
	|| ydk::is_set(rttmonjitterstatserror.yfilter)
	|| ydk::is_set(rttmonjitterstatsiajin.yfilter)
	|| ydk::is_set(rttmonjitterstatsiajout.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxoficpif.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofmos.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsmaxofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsminoficpif.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofmos.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsminofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofow.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsnumofrtt.yfilter)
	|| ydk::is_set(rttmonjitterstatsoverthresholds.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxds.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxdsnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxsd.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmaxsdnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsowminds.yfilter)
	|| ydk::is_set(rttmonjitterstatsowmindsnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsowminsd.yfilter)
	|| ydk::is_set(rttmonjitterstatsowminsdnew.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2dshigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2dslow.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2sdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsum2sdlow.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumds.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumdshigh.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumsd.yfilter)
	|| ydk::is_set(rttmonjitterstatsowsumsdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketlatearrival.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketlossds.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketlosssd.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketmia.yfilter)
	|| ydk::is_set(rttmonjitterstatspacketoutofsequence.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttmax.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttmin.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsum.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsum2high.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsum2low.yfilter)
	|| ydk::is_set(rttmonjitterstatsrttsumhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativesdshigh.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativesdslow.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativessdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2negativessdlow.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivesdshigh.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivesdslow.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivessdhigh.yfilter)
	|| ydk::is_set(rttmonjitterstatssum2positivessdlow.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofnegativesds.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofnegativessd.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofpositivesds.yfilter)
	|| ydk::is_set(rttmonjitterstatssumofpositivessd.yfilter)
	|| ydk::is_set(rttmonjitterstatsunsyncrts.yfilter);
}

std::string CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonJitterStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonJitterStatsEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonJitterStatsStartTimeIndex='" <<rttmonjitterstatsstarttimeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonjitterstatsstarttimeindex.is_set || is_set(rttmonjitterstatsstarttimeindex.yfilter)) leaf_name_data.push_back(rttmonjitterstatsstarttimeindex.get_name_leafdata());
    if (rttmonjitterstatsavgjitter.is_set || is_set(rttmonjitterstatsavgjitter.yfilter)) leaf_name_data.push_back(rttmonjitterstatsavgjitter.get_name_leafdata());
    if (rttmonjitterstatsavgjitterds.is_set || is_set(rttmonjitterstatsavgjitterds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsavgjitterds.get_name_leafdata());
    if (rttmonjitterstatsavgjittersd.is_set || is_set(rttmonjitterstatsavgjittersd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsavgjittersd.get_name_leafdata());
    if (rttmonjitterstatsbusies.is_set || is_set(rttmonjitterstatsbusies.yfilter)) leaf_name_data.push_back(rttmonjitterstatsbusies.get_name_leafdata());
    if (rttmonjitterstatscompletions.is_set || is_set(rttmonjitterstatscompletions.yfilter)) leaf_name_data.push_back(rttmonjitterstatscompletions.get_name_leafdata());
    if (rttmonjitterstatserror.is_set || is_set(rttmonjitterstatserror.yfilter)) leaf_name_data.push_back(rttmonjitterstatserror.get_name_leafdata());
    if (rttmonjitterstatsiajin.is_set || is_set(rttmonjitterstatsiajin.yfilter)) leaf_name_data.push_back(rttmonjitterstatsiajin.get_name_leafdata());
    if (rttmonjitterstatsiajout.is_set || is_set(rttmonjitterstatsiajout.yfilter)) leaf_name_data.push_back(rttmonjitterstatsiajout.get_name_leafdata());
    if (rttmonjitterstatsmaxoficpif.is_set || is_set(rttmonjitterstatsmaxoficpif.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxoficpif.get_name_leafdata());
    if (rttmonjitterstatsmaxofmos.is_set || is_set(rttmonjitterstatsmaxofmos.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofmos.get_name_leafdata());
    if (rttmonjitterstatsmaxofnegativesds.is_set || is_set(rttmonjitterstatsmaxofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofnegativesds.get_name_leafdata());
    if (rttmonjitterstatsmaxofnegativessd.is_set || is_set(rttmonjitterstatsmaxofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofnegativessd.get_name_leafdata());
    if (rttmonjitterstatsmaxofpositivesds.is_set || is_set(rttmonjitterstatsmaxofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofpositivesds.get_name_leafdata());
    if (rttmonjitterstatsmaxofpositivessd.is_set || is_set(rttmonjitterstatsmaxofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsmaxofpositivessd.get_name_leafdata());
    if (rttmonjitterstatsminoficpif.is_set || is_set(rttmonjitterstatsminoficpif.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminoficpif.get_name_leafdata());
    if (rttmonjitterstatsminofmos.is_set || is_set(rttmonjitterstatsminofmos.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofmos.get_name_leafdata());
    if (rttmonjitterstatsminofnegativesds.is_set || is_set(rttmonjitterstatsminofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofnegativesds.get_name_leafdata());
    if (rttmonjitterstatsminofnegativessd.is_set || is_set(rttmonjitterstatsminofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofnegativessd.get_name_leafdata());
    if (rttmonjitterstatsminofpositivesds.is_set || is_set(rttmonjitterstatsminofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofpositivesds.get_name_leafdata());
    if (rttmonjitterstatsminofpositivessd.is_set || is_set(rttmonjitterstatsminofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsminofpositivessd.get_name_leafdata());
    if (rttmonjitterstatsnumofnegativesds.is_set || is_set(rttmonjitterstatsnumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofnegativesds.get_name_leafdata());
    if (rttmonjitterstatsnumofnegativessd.is_set || is_set(rttmonjitterstatsnumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofnegativessd.get_name_leafdata());
    if (rttmonjitterstatsnumofow.is_set || is_set(rttmonjitterstatsnumofow.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofow.get_name_leafdata());
    if (rttmonjitterstatsnumofpositivesds.is_set || is_set(rttmonjitterstatsnumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofpositivesds.get_name_leafdata());
    if (rttmonjitterstatsnumofpositivessd.is_set || is_set(rttmonjitterstatsnumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofpositivessd.get_name_leafdata());
    if (rttmonjitterstatsnumofrtt.is_set || is_set(rttmonjitterstatsnumofrtt.yfilter)) leaf_name_data.push_back(rttmonjitterstatsnumofrtt.get_name_leafdata());
    if (rttmonjitterstatsoverthresholds.is_set || is_set(rttmonjitterstatsoverthresholds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsoverthresholds.get_name_leafdata());
    if (rttmonjitterstatsowmaxds.is_set || is_set(rttmonjitterstatsowmaxds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxds.get_name_leafdata());
    if (rttmonjitterstatsowmaxdsnew.is_set || is_set(rttmonjitterstatsowmaxdsnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxdsnew.get_name_leafdata());
    if (rttmonjitterstatsowmaxsd.is_set || is_set(rttmonjitterstatsowmaxsd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxsd.get_name_leafdata());
    if (rttmonjitterstatsowmaxsdnew.is_set || is_set(rttmonjitterstatsowmaxsdnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmaxsdnew.get_name_leafdata());
    if (rttmonjitterstatsowminds.is_set || is_set(rttmonjitterstatsowminds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowminds.get_name_leafdata());
    if (rttmonjitterstatsowmindsnew.is_set || is_set(rttmonjitterstatsowmindsnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowmindsnew.get_name_leafdata());
    if (rttmonjitterstatsowminsd.is_set || is_set(rttmonjitterstatsowminsd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowminsd.get_name_leafdata());
    if (rttmonjitterstatsowminsdnew.is_set || is_set(rttmonjitterstatsowminsdnew.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowminsdnew.get_name_leafdata());
    if (rttmonjitterstatsowsum2dshigh.is_set || is_set(rttmonjitterstatsowsum2dshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2dshigh.get_name_leafdata());
    if (rttmonjitterstatsowsum2dslow.is_set || is_set(rttmonjitterstatsowsum2dslow.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2dslow.get_name_leafdata());
    if (rttmonjitterstatsowsum2sdhigh.is_set || is_set(rttmonjitterstatsowsum2sdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2sdhigh.get_name_leafdata());
    if (rttmonjitterstatsowsum2sdlow.is_set || is_set(rttmonjitterstatsowsum2sdlow.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsum2sdlow.get_name_leafdata());
    if (rttmonjitterstatsowsumds.is_set || is_set(rttmonjitterstatsowsumds.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumds.get_name_leafdata());
    if (rttmonjitterstatsowsumdshigh.is_set || is_set(rttmonjitterstatsowsumdshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumdshigh.get_name_leafdata());
    if (rttmonjitterstatsowsumsd.is_set || is_set(rttmonjitterstatsowsumsd.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumsd.get_name_leafdata());
    if (rttmonjitterstatsowsumsdhigh.is_set || is_set(rttmonjitterstatsowsumsdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsowsumsdhigh.get_name_leafdata());
    if (rttmonjitterstatspacketlatearrival.is_set || is_set(rttmonjitterstatspacketlatearrival.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketlatearrival.get_name_leafdata());
    if (rttmonjitterstatspacketlossds.is_set || is_set(rttmonjitterstatspacketlossds.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketlossds.get_name_leafdata());
    if (rttmonjitterstatspacketlosssd.is_set || is_set(rttmonjitterstatspacketlosssd.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketlosssd.get_name_leafdata());
    if (rttmonjitterstatspacketmia.is_set || is_set(rttmonjitterstatspacketmia.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketmia.get_name_leafdata());
    if (rttmonjitterstatspacketoutofsequence.is_set || is_set(rttmonjitterstatspacketoutofsequence.yfilter)) leaf_name_data.push_back(rttmonjitterstatspacketoutofsequence.get_name_leafdata());
    if (rttmonjitterstatsrttmax.is_set || is_set(rttmonjitterstatsrttmax.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttmax.get_name_leafdata());
    if (rttmonjitterstatsrttmin.is_set || is_set(rttmonjitterstatsrttmin.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttmin.get_name_leafdata());
    if (rttmonjitterstatsrttsum.is_set || is_set(rttmonjitterstatsrttsum.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsum.get_name_leafdata());
    if (rttmonjitterstatsrttsum2high.is_set || is_set(rttmonjitterstatsrttsum2high.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsum2high.get_name_leafdata());
    if (rttmonjitterstatsrttsum2low.is_set || is_set(rttmonjitterstatsrttsum2low.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsum2low.get_name_leafdata());
    if (rttmonjitterstatsrttsumhigh.is_set || is_set(rttmonjitterstatsrttsumhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatsrttsumhigh.get_name_leafdata());
    if (rttmonjitterstatssum2negativesdshigh.is_set || is_set(rttmonjitterstatssum2negativesdshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativesdshigh.get_name_leafdata());
    if (rttmonjitterstatssum2negativesdslow.is_set || is_set(rttmonjitterstatssum2negativesdslow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativesdslow.get_name_leafdata());
    if (rttmonjitterstatssum2negativessdhigh.is_set || is_set(rttmonjitterstatssum2negativessdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativessdhigh.get_name_leafdata());
    if (rttmonjitterstatssum2negativessdlow.is_set || is_set(rttmonjitterstatssum2negativessdlow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2negativessdlow.get_name_leafdata());
    if (rttmonjitterstatssum2positivesdshigh.is_set || is_set(rttmonjitterstatssum2positivesdshigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivesdshigh.get_name_leafdata());
    if (rttmonjitterstatssum2positivesdslow.is_set || is_set(rttmonjitterstatssum2positivesdslow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivesdslow.get_name_leafdata());
    if (rttmonjitterstatssum2positivessdhigh.is_set || is_set(rttmonjitterstatssum2positivessdhigh.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivessdhigh.get_name_leafdata());
    if (rttmonjitterstatssum2positivessdlow.is_set || is_set(rttmonjitterstatssum2positivessdlow.yfilter)) leaf_name_data.push_back(rttmonjitterstatssum2positivessdlow.get_name_leafdata());
    if (rttmonjitterstatssumofnegativesds.is_set || is_set(rttmonjitterstatssumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofnegativesds.get_name_leafdata());
    if (rttmonjitterstatssumofnegativessd.is_set || is_set(rttmonjitterstatssumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofnegativessd.get_name_leafdata());
    if (rttmonjitterstatssumofpositivesds.is_set || is_set(rttmonjitterstatssumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofpositivesds.get_name_leafdata());
    if (rttmonjitterstatssumofpositivessd.is_set || is_set(rttmonjitterstatssumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonjitterstatssumofpositivessd.get_name_leafdata());
    if (rttmonjitterstatsunsyncrts.is_set || is_set(rttmonjitterstatsunsyncrts.yfilter)) leaf_name_data.push_back(rttmonjitterstatsunsyncrts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rttMonJitterStatsAvgJitter")
    {
        rttmonjitterstatsavgjitter = value;
        rttmonjitterstatsavgjitter.value_namespace = name_space;
        rttmonjitterstatsavgjitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsAvgJitterDS")
    {
        rttmonjitterstatsavgjitterds = value;
        rttmonjitterstatsavgjitterds.value_namespace = name_space;
        rttmonjitterstatsavgjitterds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsAvgJitterSD")
    {
        rttmonjitterstatsavgjittersd = value;
        rttmonjitterstatsavgjittersd.value_namespace = name_space;
        rttmonjitterstatsavgjittersd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsBusies")
    {
        rttmonjitterstatsbusies = value;
        rttmonjitterstatsbusies.value_namespace = name_space;
        rttmonjitterstatsbusies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsCompletions")
    {
        rttmonjitterstatscompletions = value;
        rttmonjitterstatscompletions.value_namespace = name_space;
        rttmonjitterstatscompletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsError")
    {
        rttmonjitterstatserror = value;
        rttmonjitterstatserror.value_namespace = name_space;
        rttmonjitterstatserror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsIAJIn")
    {
        rttmonjitterstatsiajin = value;
        rttmonjitterstatsiajin.value_namespace = name_space;
        rttmonjitterstatsiajin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsIAJOut")
    {
        rttmonjitterstatsiajout = value;
        rttmonjitterstatsiajout.value_namespace = name_space;
        rttmonjitterstatsiajout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfICPIF")
    {
        rttmonjitterstatsmaxoficpif = value;
        rttmonjitterstatsmaxoficpif.value_namespace = name_space;
        rttmonjitterstatsmaxoficpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfMOS")
    {
        rttmonjitterstatsmaxofmos = value;
        rttmonjitterstatsmaxofmos.value_namespace = name_space;
        rttmonjitterstatsmaxofmos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesDS")
    {
        rttmonjitterstatsmaxofnegativesds = value;
        rttmonjitterstatsmaxofnegativesds.value_namespace = name_space;
        rttmonjitterstatsmaxofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesSD")
    {
        rttmonjitterstatsmaxofnegativessd = value;
        rttmonjitterstatsmaxofnegativessd.value_namespace = name_space;
        rttmonjitterstatsmaxofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesDS")
    {
        rttmonjitterstatsmaxofpositivesds = value;
        rttmonjitterstatsmaxofpositivesds.value_namespace = name_space;
        rttmonjitterstatsmaxofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesSD")
    {
        rttmonjitterstatsmaxofpositivessd = value;
        rttmonjitterstatsmaxofpositivessd.value_namespace = name_space;
        rttmonjitterstatsmaxofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfICPIF")
    {
        rttmonjitterstatsminoficpif = value;
        rttmonjitterstatsminoficpif.value_namespace = name_space;
        rttmonjitterstatsminoficpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfMOS")
    {
        rttmonjitterstatsminofmos = value;
        rttmonjitterstatsminofmos.value_namespace = name_space;
        rttmonjitterstatsminofmos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesDS")
    {
        rttmonjitterstatsminofnegativesds = value;
        rttmonjitterstatsminofnegativesds.value_namespace = name_space;
        rttmonjitterstatsminofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesSD")
    {
        rttmonjitterstatsminofnegativessd = value;
        rttmonjitterstatsminofnegativessd.value_namespace = name_space;
        rttmonjitterstatsminofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesDS")
    {
        rttmonjitterstatsminofpositivesds = value;
        rttmonjitterstatsminofpositivesds.value_namespace = name_space;
        rttmonjitterstatsminofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesSD")
    {
        rttmonjitterstatsminofpositivessd = value;
        rttmonjitterstatsminofpositivessd.value_namespace = name_space;
        rttmonjitterstatsminofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesDS")
    {
        rttmonjitterstatsnumofnegativesds = value;
        rttmonjitterstatsnumofnegativesds.value_namespace = name_space;
        rttmonjitterstatsnumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesSD")
    {
        rttmonjitterstatsnumofnegativessd = value;
        rttmonjitterstatsnumofnegativessd.value_namespace = name_space;
        rttmonjitterstatsnumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfOW")
    {
        rttmonjitterstatsnumofow = value;
        rttmonjitterstatsnumofow.value_namespace = name_space;
        rttmonjitterstatsnumofow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesDS")
    {
        rttmonjitterstatsnumofpositivesds = value;
        rttmonjitterstatsnumofpositivesds.value_namespace = name_space;
        rttmonjitterstatsnumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesSD")
    {
        rttmonjitterstatsnumofpositivessd = value;
        rttmonjitterstatsnumofpositivessd.value_namespace = name_space;
        rttmonjitterstatsnumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsNumOfRTT")
    {
        rttmonjitterstatsnumofrtt = value;
        rttmonjitterstatsnumofrtt.value_namespace = name_space;
        rttmonjitterstatsnumofrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOverThresholds")
    {
        rttmonjitterstatsoverthresholds = value;
        rttmonjitterstatsoverthresholds.value_namespace = name_space;
        rttmonjitterstatsoverthresholds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxDS")
    {
        rttmonjitterstatsowmaxds = value;
        rttmonjitterstatsowmaxds.value_namespace = name_space;
        rttmonjitterstatsowmaxds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxDSNew")
    {
        rttmonjitterstatsowmaxdsnew = value;
        rttmonjitterstatsowmaxdsnew.value_namespace = name_space;
        rttmonjitterstatsowmaxdsnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxSD")
    {
        rttmonjitterstatsowmaxsd = value;
        rttmonjitterstatsowmaxsd.value_namespace = name_space;
        rttmonjitterstatsowmaxsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMaxSDNew")
    {
        rttmonjitterstatsowmaxsdnew = value;
        rttmonjitterstatsowmaxsdnew.value_namespace = name_space;
        rttmonjitterstatsowmaxsdnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinDS")
    {
        rttmonjitterstatsowminds = value;
        rttmonjitterstatsowminds.value_namespace = name_space;
        rttmonjitterstatsowminds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinDSNew")
    {
        rttmonjitterstatsowmindsnew = value;
        rttmonjitterstatsowmindsnew.value_namespace = name_space;
        rttmonjitterstatsowmindsnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinSD")
    {
        rttmonjitterstatsowminsd = value;
        rttmonjitterstatsowminsd.value_namespace = name_space;
        rttmonjitterstatsowminsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWMinSDNew")
    {
        rttmonjitterstatsowminsdnew = value;
        rttmonjitterstatsowminsdnew.value_namespace = name_space;
        rttmonjitterstatsowminsdnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSHigh")
    {
        rttmonjitterstatsowsum2dshigh = value;
        rttmonjitterstatsowsum2dshigh.value_namespace = name_space;
        rttmonjitterstatsowsum2dshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSLow")
    {
        rttmonjitterstatsowsum2dslow = value;
        rttmonjitterstatsowsum2dslow.value_namespace = name_space;
        rttmonjitterstatsowsum2dslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDHigh")
    {
        rttmonjitterstatsowsum2sdhigh = value;
        rttmonjitterstatsowsum2sdhigh.value_namespace = name_space;
        rttmonjitterstatsowsum2sdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDLow")
    {
        rttmonjitterstatsowsum2sdlow = value;
        rttmonjitterstatsowsum2sdlow.value_namespace = name_space;
        rttmonjitterstatsowsum2sdlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumDS")
    {
        rttmonjitterstatsowsumds = value;
        rttmonjitterstatsowsumds.value_namespace = name_space;
        rttmonjitterstatsowsumds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumDSHigh")
    {
        rttmonjitterstatsowsumdshigh = value;
        rttmonjitterstatsowsumdshigh.value_namespace = name_space;
        rttmonjitterstatsowsumdshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumSD")
    {
        rttmonjitterstatsowsumsd = value;
        rttmonjitterstatsowsumsd.value_namespace = name_space;
        rttmonjitterstatsowsumsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsOWSumSDHigh")
    {
        rttmonjitterstatsowsumsdhigh = value;
        rttmonjitterstatsowsumsdhigh.value_namespace = name_space;
        rttmonjitterstatsowsumsdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketLateArrival")
    {
        rttmonjitterstatspacketlatearrival = value;
        rttmonjitterstatspacketlatearrival.value_namespace = name_space;
        rttmonjitterstatspacketlatearrival.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketLossDS")
    {
        rttmonjitterstatspacketlossds = value;
        rttmonjitterstatspacketlossds.value_namespace = name_space;
        rttmonjitterstatspacketlossds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketLossSD")
    {
        rttmonjitterstatspacketlosssd = value;
        rttmonjitterstatspacketlosssd.value_namespace = name_space;
        rttmonjitterstatspacketlosssd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketMIA")
    {
        rttmonjitterstatspacketmia = value;
        rttmonjitterstatspacketmia.value_namespace = name_space;
        rttmonjitterstatspacketmia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsPacketOutOfSequence")
    {
        rttmonjitterstatspacketoutofsequence = value;
        rttmonjitterstatspacketoutofsequence.value_namespace = name_space;
        rttmonjitterstatspacketoutofsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTMax")
    {
        rttmonjitterstatsrttmax = value;
        rttmonjitterstatsrttmax.value_namespace = name_space;
        rttmonjitterstatsrttmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTMin")
    {
        rttmonjitterstatsrttmin = value;
        rttmonjitterstatsrttmin.value_namespace = name_space;
        rttmonjitterstatsrttmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSum")
    {
        rttmonjitterstatsrttsum = value;
        rttmonjitterstatsrttsum.value_namespace = name_space;
        rttmonjitterstatsrttsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSum2High")
    {
        rttmonjitterstatsrttsum2high = value;
        rttmonjitterstatsrttsum2high.value_namespace = name_space;
        rttmonjitterstatsrttsum2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSum2Low")
    {
        rttmonjitterstatsrttsum2low = value;
        rttmonjitterstatsrttsum2low.value_namespace = name_space;
        rttmonjitterstatsrttsum2low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsRTTSumHigh")
    {
        rttmonjitterstatsrttsumhigh = value;
        rttmonjitterstatsrttsumhigh.value_namespace = name_space;
        rttmonjitterstatsrttsumhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSHigh")
    {
        rttmonjitterstatssum2negativesdshigh = value;
        rttmonjitterstatssum2negativesdshigh.value_namespace = name_space;
        rttmonjitterstatssum2negativesdshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSLow")
    {
        rttmonjitterstatssum2negativesdslow = value;
        rttmonjitterstatssum2negativesdslow.value_namespace = name_space;
        rttmonjitterstatssum2negativesdslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDHigh")
    {
        rttmonjitterstatssum2negativessdhigh = value;
        rttmonjitterstatssum2negativessdhigh.value_namespace = name_space;
        rttmonjitterstatssum2negativessdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDLow")
    {
        rttmonjitterstatssum2negativessdlow = value;
        rttmonjitterstatssum2negativessdlow.value_namespace = name_space;
        rttmonjitterstatssum2negativessdlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSHigh")
    {
        rttmonjitterstatssum2positivesdshigh = value;
        rttmonjitterstatssum2positivesdshigh.value_namespace = name_space;
        rttmonjitterstatssum2positivesdshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSLow")
    {
        rttmonjitterstatssum2positivesdslow = value;
        rttmonjitterstatssum2positivesdslow.value_namespace = name_space;
        rttmonjitterstatssum2positivesdslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDHigh")
    {
        rttmonjitterstatssum2positivessdhigh = value;
        rttmonjitterstatssum2positivessdhigh.value_namespace = name_space;
        rttmonjitterstatssum2positivessdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDLow")
    {
        rttmonjitterstatssum2positivessdlow = value;
        rttmonjitterstatssum2positivessdlow.value_namespace = name_space;
        rttmonjitterstatssum2positivessdlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesDS")
    {
        rttmonjitterstatssumofnegativesds = value;
        rttmonjitterstatssumofnegativesds.value_namespace = name_space;
        rttmonjitterstatssumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesSD")
    {
        rttmonjitterstatssumofnegativessd = value;
        rttmonjitterstatssumofnegativessd.value_namespace = name_space;
        rttmonjitterstatssumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesDS")
    {
        rttmonjitterstatssumofpositivesds = value;
        rttmonjitterstatssumofpositivesds.value_namespace = name_space;
        rttmonjitterstatssumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesSD")
    {
        rttmonjitterstatssumofpositivessd = value;
        rttmonjitterstatssumofpositivessd.value_namespace = name_space;
        rttmonjitterstatssumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonJitterStatsUnSyncRTs")
    {
        rttmonjitterstatsunsyncrts = value;
        rttmonjitterstatsunsyncrts.value_namespace = name_space;
        rttmonjitterstatsunsyncrts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsStartTimeIndex")
    {
        rttmonjitterstatsstarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsAvgJitter")
    {
        rttmonjitterstatsavgjitter.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsAvgJitterDS")
    {
        rttmonjitterstatsavgjitterds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsAvgJitterSD")
    {
        rttmonjitterstatsavgjittersd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsBusies")
    {
        rttmonjitterstatsbusies.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsCompletions")
    {
        rttmonjitterstatscompletions.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsError")
    {
        rttmonjitterstatserror.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsIAJIn")
    {
        rttmonjitterstatsiajin.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsIAJOut")
    {
        rttmonjitterstatsiajout.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfICPIF")
    {
        rttmonjitterstatsmaxoficpif.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfMOS")
    {
        rttmonjitterstatsmaxofmos.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesDS")
    {
        rttmonjitterstatsmaxofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfNegativesSD")
    {
        rttmonjitterstatsmaxofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesDS")
    {
        rttmonjitterstatsmaxofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMaxOfPositivesSD")
    {
        rttmonjitterstatsmaxofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfICPIF")
    {
        rttmonjitterstatsminoficpif.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfMOS")
    {
        rttmonjitterstatsminofmos.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesDS")
    {
        rttmonjitterstatsminofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfNegativesSD")
    {
        rttmonjitterstatsminofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesDS")
    {
        rttmonjitterstatsminofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsMinOfPositivesSD")
    {
        rttmonjitterstatsminofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesDS")
    {
        rttmonjitterstatsnumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfNegativesSD")
    {
        rttmonjitterstatsnumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfOW")
    {
        rttmonjitterstatsnumofow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesDS")
    {
        rttmonjitterstatsnumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfPositivesSD")
    {
        rttmonjitterstatsnumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsNumOfRTT")
    {
        rttmonjitterstatsnumofrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOverThresholds")
    {
        rttmonjitterstatsoverthresholds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxDS")
    {
        rttmonjitterstatsowmaxds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxDSNew")
    {
        rttmonjitterstatsowmaxdsnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxSD")
    {
        rttmonjitterstatsowmaxsd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMaxSDNew")
    {
        rttmonjitterstatsowmaxsdnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinDS")
    {
        rttmonjitterstatsowminds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinDSNew")
    {
        rttmonjitterstatsowmindsnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinSD")
    {
        rttmonjitterstatsowminsd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWMinSDNew")
    {
        rttmonjitterstatsowminsdnew.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSHigh")
    {
        rttmonjitterstatsowsum2dshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2DSLow")
    {
        rttmonjitterstatsowsum2dslow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDHigh")
    {
        rttmonjitterstatsowsum2sdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSum2SDLow")
    {
        rttmonjitterstatsowsum2sdlow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumDS")
    {
        rttmonjitterstatsowsumds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumDSHigh")
    {
        rttmonjitterstatsowsumdshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumSD")
    {
        rttmonjitterstatsowsumsd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsOWSumSDHigh")
    {
        rttmonjitterstatsowsumsdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketLateArrival")
    {
        rttmonjitterstatspacketlatearrival.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketLossDS")
    {
        rttmonjitterstatspacketlossds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketLossSD")
    {
        rttmonjitterstatspacketlosssd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketMIA")
    {
        rttmonjitterstatspacketmia.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsPacketOutOfSequence")
    {
        rttmonjitterstatspacketoutofsequence.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTMax")
    {
        rttmonjitterstatsrttmax.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTMin")
    {
        rttmonjitterstatsrttmin.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSum")
    {
        rttmonjitterstatsrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSum2High")
    {
        rttmonjitterstatsrttsum2high.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSum2Low")
    {
        rttmonjitterstatsrttsum2low.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsRTTSumHigh")
    {
        rttmonjitterstatsrttsumhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSHigh")
    {
        rttmonjitterstatssum2negativesdshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesDSLow")
    {
        rttmonjitterstatssum2negativesdslow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDHigh")
    {
        rttmonjitterstatssum2negativessdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2NegativesSDLow")
    {
        rttmonjitterstatssum2negativessdlow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSHigh")
    {
        rttmonjitterstatssum2positivesdshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesDSLow")
    {
        rttmonjitterstatssum2positivesdslow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDHigh")
    {
        rttmonjitterstatssum2positivessdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSum2PositivesSDLow")
    {
        rttmonjitterstatssum2positivessdlow.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesDS")
    {
        rttmonjitterstatssumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfNegativesSD")
    {
        rttmonjitterstatssumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesDS")
    {
        rttmonjitterstatssumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsSumOfPositivesSD")
    {
        rttmonjitterstatssumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonJitterStatsUnSyncRTs")
    {
        rttmonjitterstatsunsyncrts.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonjitterstatstable::Rttmonjitterstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonJitterStatsStartTimeIndex" || name == "rttMonJitterStatsAvgJitter" || name == "rttMonJitterStatsAvgJitterDS" || name == "rttMonJitterStatsAvgJitterSD" || name == "rttMonJitterStatsBusies" || name == "rttMonJitterStatsCompletions" || name == "rttMonJitterStatsError" || name == "rttMonJitterStatsIAJIn" || name == "rttMonJitterStatsIAJOut" || name == "rttMonJitterStatsMaxOfICPIF" || name == "rttMonJitterStatsMaxOfMOS" || name == "rttMonJitterStatsMaxOfNegativesDS" || name == "rttMonJitterStatsMaxOfNegativesSD" || name == "rttMonJitterStatsMaxOfPositivesDS" || name == "rttMonJitterStatsMaxOfPositivesSD" || name == "rttMonJitterStatsMinOfICPIF" || name == "rttMonJitterStatsMinOfMOS" || name == "rttMonJitterStatsMinOfNegativesDS" || name == "rttMonJitterStatsMinOfNegativesSD" || name == "rttMonJitterStatsMinOfPositivesDS" || name == "rttMonJitterStatsMinOfPositivesSD" || name == "rttMonJitterStatsNumOfNegativesDS" || name == "rttMonJitterStatsNumOfNegativesSD" || name == "rttMonJitterStatsNumOfOW" || name == "rttMonJitterStatsNumOfPositivesDS" || name == "rttMonJitterStatsNumOfPositivesSD" || name == "rttMonJitterStatsNumOfRTT" || name == "rttMonJitterStatsOverThresholds" || name == "rttMonJitterStatsOWMaxDS" || name == "rttMonJitterStatsOWMaxDSNew" || name == "rttMonJitterStatsOWMaxSD" || name == "rttMonJitterStatsOWMaxSDNew" || name == "rttMonJitterStatsOWMinDS" || name == "rttMonJitterStatsOWMinDSNew" || name == "rttMonJitterStatsOWMinSD" || name == "rttMonJitterStatsOWMinSDNew" || name == "rttMonJitterStatsOWSum2DSHigh" || name == "rttMonJitterStatsOWSum2DSLow" || name == "rttMonJitterStatsOWSum2SDHigh" || name == "rttMonJitterStatsOWSum2SDLow" || name == "rttMonJitterStatsOWSumDS" || name == "rttMonJitterStatsOWSumDSHigh" || name == "rttMonJitterStatsOWSumSD" || name == "rttMonJitterStatsOWSumSDHigh" || name == "rttMonJitterStatsPacketLateArrival" || name == "rttMonJitterStatsPacketLossDS" || name == "rttMonJitterStatsPacketLossSD" || name == "rttMonJitterStatsPacketMIA" || name == "rttMonJitterStatsPacketOutOfSequence" || name == "rttMonJitterStatsRTTMax" || name == "rttMonJitterStatsRTTMin" || name == "rttMonJitterStatsRTTSum" || name == "rttMonJitterStatsRTTSum2High" || name == "rttMonJitterStatsRTTSum2Low" || name == "rttMonJitterStatsRTTSumHigh" || name == "rttMonJitterStatsSum2NegativesDSHigh" || name == "rttMonJitterStatsSum2NegativesDSLow" || name == "rttMonJitterStatsSum2NegativesSDHigh" || name == "rttMonJitterStatsSum2NegativesSDLow" || name == "rttMonJitterStatsSum2PositivesDSHigh" || name == "rttMonJitterStatsSum2PositivesDSLow" || name == "rttMonJitterStatsSum2PositivesSDHigh" || name == "rttMonJitterStatsSum2PositivesSDLow" || name == "rttMonJitterStatsSumOfNegativesDS" || name == "rttMonJitterStatsSumOfNegativesSD" || name == "rttMonJitterStatsSumOfPositivesDS" || name == "rttMonJitterStatsSumOfPositivesSD" || name == "rttMonJitterStatsUnSyncRTs")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpopertable()
{

    yang_name = "rttMonLatestHTTPOperTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonlatesthttpopertable::~Rttmonlatesthttpopertable()
{
}

bool CISCORTTMONMIB::Rttmonlatesthttpopertable::has_data() const
{
    for (std::size_t index=0; index<rttmonlatesthttpoperentry.size(); index++)
    {
        if(rttmonlatesthttpoperentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonlatesthttpopertable::has_operation() const
{
    for (std::size_t index=0; index<rttmonlatesthttpoperentry.size(); index++)
    {
        if(rttmonlatesthttpoperentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonlatesthttpopertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonlatesthttpopertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestHTTPOperTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonlatesthttpopertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonlatesthttpopertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonLatestHTTPOperEntry")
    {
        for(auto const & c : rttmonlatesthttpoperentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry>();
        c->parent = this;
        rttmonlatesthttpoperentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonlatesthttpopertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonlatesthttpoperentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonlatesthttpopertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonlatesthttpopertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonlatesthttpopertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLatestHTTPOperEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::Rttmonlatesthttpoperentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonlatesthttperrorsensedescription{YType::str, "rttMonLatestHTTPErrorSenseDescription"},
    rttmonlatesthttpoperdnsrtt{YType::uint32, "rttMonLatestHTTPOperDNSRTT"},
    rttmonlatesthttpopermessagebodyoctets{YType::uint32, "rttMonLatestHTTPOperMessageBodyOctets"},
    rttmonlatesthttpoperrtt{YType::uint32, "rttMonLatestHTTPOperRTT"},
    rttmonlatesthttpopersense{YType::enumeration, "rttMonLatestHTTPOperSense"},
    rttmonlatesthttpopertcpconnectrtt{YType::uint32, "rttMonLatestHTTPOperTCPConnectRTT"},
    rttmonlatesthttpopertransactionrtt{YType::uint32, "rttMonLatestHTTPOperTransactionRTT"}
{

    yang_name = "rttMonLatestHTTPOperEntry"; yang_parent_name = "rttMonLatestHTTPOperTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::~Rttmonlatesthttpoperentry()
{
}

bool CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonlatesthttperrorsensedescription.is_set
	|| rttmonlatesthttpoperdnsrtt.is_set
	|| rttmonlatesthttpopermessagebodyoctets.is_set
	|| rttmonlatesthttpoperrtt.is_set
	|| rttmonlatesthttpopersense.is_set
	|| rttmonlatesthttpopertcpconnectrtt.is_set
	|| rttmonlatesthttpopertransactionrtt.is_set;
}

bool CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonlatesthttperrorsensedescription.yfilter)
	|| ydk::is_set(rttmonlatesthttpoperdnsrtt.yfilter)
	|| ydk::is_set(rttmonlatesthttpopermessagebodyoctets.yfilter)
	|| ydk::is_set(rttmonlatesthttpoperrtt.yfilter)
	|| ydk::is_set(rttmonlatesthttpopersense.yfilter)
	|| ydk::is_set(rttmonlatesthttpopertcpconnectrtt.yfilter)
	|| ydk::is_set(rttmonlatesthttpopertransactionrtt.yfilter);
}

std::string CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonLatestHTTPOperTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestHTTPOperEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonlatesthttperrorsensedescription.is_set || is_set(rttmonlatesthttperrorsensedescription.yfilter)) leaf_name_data.push_back(rttmonlatesthttperrorsensedescription.get_name_leafdata());
    if (rttmonlatesthttpoperdnsrtt.is_set || is_set(rttmonlatesthttpoperdnsrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpoperdnsrtt.get_name_leafdata());
    if (rttmonlatesthttpopermessagebodyoctets.is_set || is_set(rttmonlatesthttpopermessagebodyoctets.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopermessagebodyoctets.get_name_leafdata());
    if (rttmonlatesthttpoperrtt.is_set || is_set(rttmonlatesthttpoperrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpoperrtt.get_name_leafdata());
    if (rttmonlatesthttpopersense.is_set || is_set(rttmonlatesthttpopersense.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopersense.get_name_leafdata());
    if (rttmonlatesthttpopertcpconnectrtt.is_set || is_set(rttmonlatesthttpopertcpconnectrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopertcpconnectrtt.get_name_leafdata());
    if (rttmonlatesthttpopertransactionrtt.is_set || is_set(rttmonlatesthttpopertransactionrtt.yfilter)) leaf_name_data.push_back(rttmonlatesthttpopertransactionrtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPErrorSenseDescription")
    {
        rttmonlatesthttperrorsensedescription = value;
        rttmonlatesthttperrorsensedescription.value_namespace = name_space;
        rttmonlatesthttperrorsensedescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperDNSRTT")
    {
        rttmonlatesthttpoperdnsrtt = value;
        rttmonlatesthttpoperdnsrtt.value_namespace = name_space;
        rttmonlatesthttpoperdnsrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperMessageBodyOctets")
    {
        rttmonlatesthttpopermessagebodyoctets = value;
        rttmonlatesthttpopermessagebodyoctets.value_namespace = name_space;
        rttmonlatesthttpopermessagebodyoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperRTT")
    {
        rttmonlatesthttpoperrtt = value;
        rttmonlatesthttpoperrtt.value_namespace = name_space;
        rttmonlatesthttpoperrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestHTTPOperSense")
    {
        rttmonlatesthttpopersense = value;
        rttmonlatesthttpopersense.value_namespace = name_space;
        rttmonlatesthttpopersense.value_namespace_prefix = name_space_prefix;
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
}

void CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPErrorSenseDescription")
    {
        rttmonlatesthttperrorsensedescription.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperDNSRTT")
    {
        rttmonlatesthttpoperdnsrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperMessageBodyOctets")
    {
        rttmonlatesthttpopermessagebodyoctets.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperRTT")
    {
        rttmonlatesthttpoperrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperSense")
    {
        rttmonlatesthttpopersense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperTCPConnectRTT")
    {
        rttmonlatesthttpopertcpconnectrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestHTTPOperTransactionRTT")
    {
        rttmonlatesthttpopertransactionrtt.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonLatestHTTPErrorSenseDescription" || name == "rttMonLatestHTTPOperDNSRTT" || name == "rttMonLatestHTTPOperMessageBodyOctets" || name == "rttMonLatestHTTPOperRTT" || name == "rttMonLatestHTTPOperSense" || name == "rttMonLatestHTTPOperTCPConnectRTT" || name == "rttMonLatestHTTPOperTransactionRTT")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteropertable()
{

    yang_name = "rttMonLatestJitterOperTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonlatestjitteropertable::~Rttmonlatestjitteropertable()
{
}

bool CISCORTTMONMIB::Rttmonlatestjitteropertable::has_data() const
{
    for (std::size_t index=0; index<rttmonlatestjitteroperentry.size(); index++)
    {
        if(rttmonlatestjitteroperentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonlatestjitteropertable::has_operation() const
{
    for (std::size_t index=0; index<rttmonlatestjitteroperentry.size(); index++)
    {
        if(rttmonlatestjitteroperentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonlatestjitteropertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonlatestjitteropertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestJitterOperTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonlatestjitteropertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonlatestjitteropertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonLatestJitterOperEntry")
    {
        for(auto const & c : rttmonlatestjitteroperentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry>();
        c->parent = this;
        rttmonlatestjitteroperentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonlatestjitteropertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonlatestjitteroperentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonlatestjitteropertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonlatestjitteropertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonlatestjitteropertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLatestJitterOperEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::Rttmonlatestjitteroperentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonlatestjittererrorsensedescription{YType::str, "rttMonLatestJitterErrorSenseDescription"},
    rttmonlatestjitteroperavgdsj{YType::uint32, "rttMonLatestJitterOperAvgDSJ"},
    rttmonlatestjitteroperavgjitter{YType::uint32, "rttMonLatestJitterOperAvgJitter"},
    rttmonlatestjitteroperavgsdj{YType::uint32, "rttMonLatestJitterOperAvgSDJ"},
    rttmonlatestjitteroperiajin{YType::uint32, "rttMonLatestJitterOperIAJIn"},
    rttmonlatestjitteroperiajout{YType::uint32, "rttMonLatestJitterOperIAJOut"},
    rttmonlatestjitteropericpif{YType::uint32, "rttMonLatestJitterOperICPIF"},
    rttmonlatestjitteropermaxofnegativesds{YType::uint32, "rttMonLatestJitterOperMaxOfNegativesDS"},
    rttmonlatestjitteropermaxofnegativessd{YType::uint32, "rttMonLatestJitterOperMaxOfNegativesSD"},
    rttmonlatestjitteropermaxofpositivesds{YType::uint32, "rttMonLatestJitterOperMaxOfPositivesDS"},
    rttmonlatestjitteropermaxofpositivessd{YType::uint32, "rttMonLatestJitterOperMaxOfPositivesSD"},
    rttmonlatestjitteroperminofnegativesds{YType::uint32, "rttMonLatestJitterOperMinOfNegativesDS"},
    rttmonlatestjitteroperminofnegativessd{YType::uint32, "rttMonLatestJitterOperMinOfNegativesSD"},
    rttmonlatestjitteroperminofpositivesds{YType::uint32, "rttMonLatestJitterOperMinOfPositivesDS"},
    rttmonlatestjitteroperminofpositivessd{YType::uint32, "rttMonLatestJitterOperMinOfPositivesSD"},
    rttmonlatestjitteropermos{YType::uint32, "rttMonLatestJitterOperMOS"},
    rttmonlatestjitteroperntpstate{YType::enumeration, "rttMonLatestJitterOperNTPState"},
    rttmonlatestjitteropernumofnegativesds{YType::uint32, "rttMonLatestJitterOperNumOfNegativesDS"},
    rttmonlatestjitteropernumofnegativessd{YType::uint32, "rttMonLatestJitterOperNumOfNegativesSD"},
    rttmonlatestjitteropernumofow{YType::uint32, "rttMonLatestJitterOperNumOfOW"},
    rttmonlatestjitteropernumofpositivesds{YType::uint32, "rttMonLatestJitterOperNumOfPositivesDS"},
    rttmonlatestjitteropernumofpositivessd{YType::uint32, "rttMonLatestJitterOperNumOfPositivesSD"},
    rttmonlatestjitteropernumofrtt{YType::uint32, "rttMonLatestJitterOperNumOfRTT"},
    rttmonlatestjitteroperowavgds{YType::uint32, "rttMonLatestJitterOperOWAvgDS"},
    rttmonlatestjitteroperowavgsd{YType::uint32, "rttMonLatestJitterOperOWAvgSD"},
    rttmonlatestjitteroperowmaxds{YType::uint32, "rttMonLatestJitterOperOWMaxDS"},
    rttmonlatestjitteroperowmaxsd{YType::uint32, "rttMonLatestJitterOperOWMaxSD"},
    rttmonlatestjitteroperowminds{YType::uint32, "rttMonLatestJitterOperOWMinDS"},
    rttmonlatestjitteroperowminsd{YType::uint32, "rttMonLatestJitterOperOWMinSD"},
    rttmonlatestjitteroperowsum2ds{YType::uint32, "rttMonLatestJitterOperOWSum2DS"},
    rttmonlatestjitteroperowsum2dshigh{YType::uint32, "rttMonLatestJitterOperOWSum2DSHigh"},
    rttmonlatestjitteroperowsum2sd{YType::uint32, "rttMonLatestJitterOperOWSum2SD"},
    rttmonlatestjitteroperowsum2sdhigh{YType::uint32, "rttMonLatestJitterOperOWSum2SDHigh"},
    rttmonlatestjitteroperowsumds{YType::uint32, "rttMonLatestJitterOperOWSumDS"},
    rttmonlatestjitteroperowsumdshigh{YType::uint32, "rttMonLatestJitterOperOWSumDSHigh"},
    rttmonlatestjitteroperowsumsd{YType::uint32, "rttMonLatestJitterOperOWSumSD"},
    rttmonlatestjitteroperowsumsdhigh{YType::uint32, "rttMonLatestJitterOperOWSumSDHigh"},
    rttmonlatestjitteroperpacketlatearrival{YType::uint32, "rttMonLatestJitterOperPacketLateArrival"},
    rttmonlatestjitteroperpacketlossds{YType::uint32, "rttMonLatestJitterOperPacketLossDS"},
    rttmonlatestjitteroperpacketlosssd{YType::uint32, "rttMonLatestJitterOperPacketLossSD"},
    rttmonlatestjitteroperpacketmia{YType::uint32, "rttMonLatestJitterOperPacketMIA"},
    rttmonlatestjitteroperpacketoutofsequence{YType::uint32, "rttMonLatestJitterOperPacketOutOfSequence"},
    rttmonlatestjitteroperrttmax{YType::uint32, "rttMonLatestJitterOperRTTMax"},
    rttmonlatestjitteroperrttmin{YType::uint32, "rttMonLatestJitterOperRTTMin"},
    rttmonlatestjitteroperrttsum{YType::uint32, "rttMonLatestJitterOperRTTSum"},
    rttmonlatestjitteroperrttsum2{YType::uint32, "rttMonLatestJitterOperRTTSum2"},
    rttmonlatestjitteroperrttsum2high{YType::uint32, "rttMonLatestJitterOperRTTSum2High"},
    rttmonlatestjitteroperrttsumhigh{YType::uint32, "rttMonLatestJitterOperRTTSumHigh"},
    rttmonlatestjitteropersense{YType::enumeration, "rttMonLatestJitterOperSense"},
    rttmonlatestjitteropersum2negativesds{YType::uint32, "rttMonLatestJitterOperSum2NegativesDS"},
    rttmonlatestjitteropersum2negativessd{YType::uint32, "rttMonLatestJitterOperSum2NegativesSD"},
    rttmonlatestjitteropersum2positivesds{YType::uint32, "rttMonLatestJitterOperSum2PositivesDS"},
    rttmonlatestjitteropersum2positivessd{YType::uint32, "rttMonLatestJitterOperSum2PositivesSD"},
    rttmonlatestjitteropersumofnegativesds{YType::uint32, "rttMonLatestJitterOperSumOfNegativesDS"},
    rttmonlatestjitteropersumofnegativessd{YType::uint32, "rttMonLatestJitterOperSumOfNegativesSD"},
    rttmonlatestjitteropersumofpositivesds{YType::uint32, "rttMonLatestJitterOperSumOfPositivesDS"},
    rttmonlatestjitteropersumofpositivessd{YType::uint32, "rttMonLatestJitterOperSumOfPositivesSD"},
    rttmonlatestjitteroperunsyncrts{YType::uint32, "rttMonLatestJitterOperUnSyncRTs"}
{

    yang_name = "rttMonLatestJitterOperEntry"; yang_parent_name = "rttMonLatestJitterOperTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::~Rttmonlatestjitteroperentry()
{
}

bool CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonlatestjittererrorsensedescription.is_set
	|| rttmonlatestjitteroperavgdsj.is_set
	|| rttmonlatestjitteroperavgjitter.is_set
	|| rttmonlatestjitteroperavgsdj.is_set
	|| rttmonlatestjitteroperiajin.is_set
	|| rttmonlatestjitteroperiajout.is_set
	|| rttmonlatestjitteropericpif.is_set
	|| rttmonlatestjitteropermaxofnegativesds.is_set
	|| rttmonlatestjitteropermaxofnegativessd.is_set
	|| rttmonlatestjitteropermaxofpositivesds.is_set
	|| rttmonlatestjitteropermaxofpositivessd.is_set
	|| rttmonlatestjitteroperminofnegativesds.is_set
	|| rttmonlatestjitteroperminofnegativessd.is_set
	|| rttmonlatestjitteroperminofpositivesds.is_set
	|| rttmonlatestjitteroperminofpositivessd.is_set
	|| rttmonlatestjitteropermos.is_set
	|| rttmonlatestjitteroperntpstate.is_set
	|| rttmonlatestjitteropernumofnegativesds.is_set
	|| rttmonlatestjitteropernumofnegativessd.is_set
	|| rttmonlatestjitteropernumofow.is_set
	|| rttmonlatestjitteropernumofpositivesds.is_set
	|| rttmonlatestjitteropernumofpositivessd.is_set
	|| rttmonlatestjitteropernumofrtt.is_set
	|| rttmonlatestjitteroperowavgds.is_set
	|| rttmonlatestjitteroperowavgsd.is_set
	|| rttmonlatestjitteroperowmaxds.is_set
	|| rttmonlatestjitteroperowmaxsd.is_set
	|| rttmonlatestjitteroperowminds.is_set
	|| rttmonlatestjitteroperowminsd.is_set
	|| rttmonlatestjitteroperowsum2ds.is_set
	|| rttmonlatestjitteroperowsum2dshigh.is_set
	|| rttmonlatestjitteroperowsum2sd.is_set
	|| rttmonlatestjitteroperowsum2sdhigh.is_set
	|| rttmonlatestjitteroperowsumds.is_set
	|| rttmonlatestjitteroperowsumdshigh.is_set
	|| rttmonlatestjitteroperowsumsd.is_set
	|| rttmonlatestjitteroperowsumsdhigh.is_set
	|| rttmonlatestjitteroperpacketlatearrival.is_set
	|| rttmonlatestjitteroperpacketlossds.is_set
	|| rttmonlatestjitteroperpacketlosssd.is_set
	|| rttmonlatestjitteroperpacketmia.is_set
	|| rttmonlatestjitteroperpacketoutofsequence.is_set
	|| rttmonlatestjitteroperrttmax.is_set
	|| rttmonlatestjitteroperrttmin.is_set
	|| rttmonlatestjitteroperrttsum.is_set
	|| rttmonlatestjitteroperrttsum2.is_set
	|| rttmonlatestjitteroperrttsum2high.is_set
	|| rttmonlatestjitteroperrttsumhigh.is_set
	|| rttmonlatestjitteropersense.is_set
	|| rttmonlatestjitteropersum2negativesds.is_set
	|| rttmonlatestjitteropersum2negativessd.is_set
	|| rttmonlatestjitteropersum2positivesds.is_set
	|| rttmonlatestjitteropersum2positivessd.is_set
	|| rttmonlatestjitteropersumofnegativesds.is_set
	|| rttmonlatestjitteropersumofnegativessd.is_set
	|| rttmonlatestjitteropersumofpositivesds.is_set
	|| rttmonlatestjitteropersumofpositivessd.is_set
	|| rttmonlatestjitteroperunsyncrts.is_set;
}

bool CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonlatestjittererrorsensedescription.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperavgdsj.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperavgjitter.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperavgsdj.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperiajin.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperiajout.yfilter)
	|| ydk::is_set(rttmonlatestjitteropericpif.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermaxofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperminofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropermos.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperntpstate.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofow.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropernumofrtt.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowavgds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowavgsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowmaxds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowmaxsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowminds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowminsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2ds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2dshigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2sd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsum2sdhigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumdshigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumsd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperowsumsdhigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketlatearrival.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketlossds.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketlosssd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketmia.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperpacketoutofsequence.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttmax.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttmin.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsum.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsum2.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsum2high.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperrttsumhigh.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersense.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2negativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2negativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2positivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersum2positivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofnegativesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofnegativessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofpositivesds.yfilter)
	|| ydk::is_set(rttmonlatestjitteropersumofpositivessd.yfilter)
	|| ydk::is_set(rttmonlatestjitteroperunsyncrts.yfilter);
}

std::string CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonLatestJitterOperTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLatestJitterOperEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonlatestjittererrorsensedescription.is_set || is_set(rttmonlatestjittererrorsensedescription.yfilter)) leaf_name_data.push_back(rttmonlatestjittererrorsensedescription.get_name_leafdata());
    if (rttmonlatestjitteroperavgdsj.is_set || is_set(rttmonlatestjitteroperavgdsj.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperavgdsj.get_name_leafdata());
    if (rttmonlatestjitteroperavgjitter.is_set || is_set(rttmonlatestjitteroperavgjitter.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperavgjitter.get_name_leafdata());
    if (rttmonlatestjitteroperavgsdj.is_set || is_set(rttmonlatestjitteroperavgsdj.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperavgsdj.get_name_leafdata());
    if (rttmonlatestjitteroperiajin.is_set || is_set(rttmonlatestjitteroperiajin.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperiajin.get_name_leafdata());
    if (rttmonlatestjitteroperiajout.is_set || is_set(rttmonlatestjitteroperiajout.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperiajout.get_name_leafdata());
    if (rttmonlatestjitteropericpif.is_set || is_set(rttmonlatestjitteropericpif.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropericpif.get_name_leafdata());
    if (rttmonlatestjitteropermaxofnegativesds.is_set || is_set(rttmonlatestjitteropermaxofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteropermaxofnegativessd.is_set || is_set(rttmonlatestjitteropermaxofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteropermaxofpositivesds.is_set || is_set(rttmonlatestjitteropermaxofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteropermaxofpositivessd.is_set || is_set(rttmonlatestjitteropermaxofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermaxofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteroperminofnegativesds.is_set || is_set(rttmonlatestjitteroperminofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteroperminofnegativessd.is_set || is_set(rttmonlatestjitteroperminofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteroperminofpositivesds.is_set || is_set(rttmonlatestjitteroperminofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteroperminofpositivessd.is_set || is_set(rttmonlatestjitteroperminofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperminofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteropermos.is_set || is_set(rttmonlatestjitteropermos.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropermos.get_name_leafdata());
    if (rttmonlatestjitteroperntpstate.is_set || is_set(rttmonlatestjitteroperntpstate.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperntpstate.get_name_leafdata());
    if (rttmonlatestjitteropernumofnegativesds.is_set || is_set(rttmonlatestjitteropernumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteropernumofnegativessd.is_set || is_set(rttmonlatestjitteropernumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteropernumofow.is_set || is_set(rttmonlatestjitteropernumofow.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofow.get_name_leafdata());
    if (rttmonlatestjitteropernumofpositivesds.is_set || is_set(rttmonlatestjitteropernumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteropernumofpositivessd.is_set || is_set(rttmonlatestjitteropernumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteropernumofrtt.is_set || is_set(rttmonlatestjitteropernumofrtt.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropernumofrtt.get_name_leafdata());
    if (rttmonlatestjitteroperowavgds.is_set || is_set(rttmonlatestjitteroperowavgds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowavgds.get_name_leafdata());
    if (rttmonlatestjitteroperowavgsd.is_set || is_set(rttmonlatestjitteroperowavgsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowavgsd.get_name_leafdata());
    if (rttmonlatestjitteroperowmaxds.is_set || is_set(rttmonlatestjitteroperowmaxds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowmaxds.get_name_leafdata());
    if (rttmonlatestjitteroperowmaxsd.is_set || is_set(rttmonlatestjitteroperowmaxsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowmaxsd.get_name_leafdata());
    if (rttmonlatestjitteroperowminds.is_set || is_set(rttmonlatestjitteroperowminds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowminds.get_name_leafdata());
    if (rttmonlatestjitteroperowminsd.is_set || is_set(rttmonlatestjitteroperowminsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowminsd.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2ds.is_set || is_set(rttmonlatestjitteroperowsum2ds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2ds.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2dshigh.is_set || is_set(rttmonlatestjitteroperowsum2dshigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2dshigh.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2sd.is_set || is_set(rttmonlatestjitteroperowsum2sd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2sd.get_name_leafdata());
    if (rttmonlatestjitteroperowsum2sdhigh.is_set || is_set(rttmonlatestjitteroperowsum2sdhigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsum2sdhigh.get_name_leafdata());
    if (rttmonlatestjitteroperowsumds.is_set || is_set(rttmonlatestjitteroperowsumds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumds.get_name_leafdata());
    if (rttmonlatestjitteroperowsumdshigh.is_set || is_set(rttmonlatestjitteroperowsumdshigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumdshigh.get_name_leafdata());
    if (rttmonlatestjitteroperowsumsd.is_set || is_set(rttmonlatestjitteroperowsumsd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumsd.get_name_leafdata());
    if (rttmonlatestjitteroperowsumsdhigh.is_set || is_set(rttmonlatestjitteroperowsumsdhigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperowsumsdhigh.get_name_leafdata());
    if (rttmonlatestjitteroperpacketlatearrival.is_set || is_set(rttmonlatestjitteroperpacketlatearrival.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketlatearrival.get_name_leafdata());
    if (rttmonlatestjitteroperpacketlossds.is_set || is_set(rttmonlatestjitteroperpacketlossds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketlossds.get_name_leafdata());
    if (rttmonlatestjitteroperpacketlosssd.is_set || is_set(rttmonlatestjitteroperpacketlosssd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketlosssd.get_name_leafdata());
    if (rttmonlatestjitteroperpacketmia.is_set || is_set(rttmonlatestjitteroperpacketmia.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketmia.get_name_leafdata());
    if (rttmonlatestjitteroperpacketoutofsequence.is_set || is_set(rttmonlatestjitteroperpacketoutofsequence.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperpacketoutofsequence.get_name_leafdata());
    if (rttmonlatestjitteroperrttmax.is_set || is_set(rttmonlatestjitteroperrttmax.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttmax.get_name_leafdata());
    if (rttmonlatestjitteroperrttmin.is_set || is_set(rttmonlatestjitteroperrttmin.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttmin.get_name_leafdata());
    if (rttmonlatestjitteroperrttsum.is_set || is_set(rttmonlatestjitteroperrttsum.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsum.get_name_leafdata());
    if (rttmonlatestjitteroperrttsum2.is_set || is_set(rttmonlatestjitteroperrttsum2.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsum2.get_name_leafdata());
    if (rttmonlatestjitteroperrttsum2high.is_set || is_set(rttmonlatestjitteroperrttsum2high.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsum2high.get_name_leafdata());
    if (rttmonlatestjitteroperrttsumhigh.is_set || is_set(rttmonlatestjitteroperrttsumhigh.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperrttsumhigh.get_name_leafdata());
    if (rttmonlatestjitteropersense.is_set || is_set(rttmonlatestjitteropersense.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersense.get_name_leafdata());
    if (rttmonlatestjitteropersum2negativesds.is_set || is_set(rttmonlatestjitteropersum2negativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2negativesds.get_name_leafdata());
    if (rttmonlatestjitteropersum2negativessd.is_set || is_set(rttmonlatestjitteropersum2negativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2negativessd.get_name_leafdata());
    if (rttmonlatestjitteropersum2positivesds.is_set || is_set(rttmonlatestjitteropersum2positivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2positivesds.get_name_leafdata());
    if (rttmonlatestjitteropersum2positivessd.is_set || is_set(rttmonlatestjitteropersum2positivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersum2positivessd.get_name_leafdata());
    if (rttmonlatestjitteropersumofnegativesds.is_set || is_set(rttmonlatestjitteropersumofnegativesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofnegativesds.get_name_leafdata());
    if (rttmonlatestjitteropersumofnegativessd.is_set || is_set(rttmonlatestjitteropersumofnegativessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofnegativessd.get_name_leafdata());
    if (rttmonlatestjitteropersumofpositivesds.is_set || is_set(rttmonlatestjitteropersumofpositivesds.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofpositivesds.get_name_leafdata());
    if (rttmonlatestjitteropersumofpositivessd.is_set || is_set(rttmonlatestjitteropersumofpositivessd.yfilter)) leaf_name_data.push_back(rttmonlatestjitteropersumofpositivessd.get_name_leafdata());
    if (rttmonlatestjitteroperunsyncrts.is_set || is_set(rttmonlatestjitteroperunsyncrts.yfilter)) leaf_name_data.push_back(rttmonlatestjitteroperunsyncrts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterErrorSenseDescription")
    {
        rttmonlatestjittererrorsensedescription = value;
        rttmonlatestjittererrorsensedescription.value_namespace = name_space;
        rttmonlatestjittererrorsensedescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperAvgDSJ")
    {
        rttmonlatestjitteroperavgdsj = value;
        rttmonlatestjitteroperavgdsj.value_namespace = name_space;
        rttmonlatestjitteroperavgdsj.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonLatestJitterOperIAJIn")
    {
        rttmonlatestjitteroperiajin = value;
        rttmonlatestjitteroperiajin.value_namespace = name_space;
        rttmonlatestjitteroperiajin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperIAJOut")
    {
        rttmonlatestjitteroperiajout = value;
        rttmonlatestjitteroperiajout.value_namespace = name_space;
        rttmonlatestjitteroperiajout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperICPIF")
    {
        rttmonlatestjitteropericpif = value;
        rttmonlatestjitteropericpif.value_namespace = name_space;
        rttmonlatestjitteropericpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesDS")
    {
        rttmonlatestjitteropermaxofnegativesds = value;
        rttmonlatestjitteropermaxofnegativesds.value_namespace = name_space;
        rttmonlatestjitteropermaxofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesSD")
    {
        rttmonlatestjitteropermaxofnegativessd = value;
        rttmonlatestjitteropermaxofnegativessd.value_namespace = name_space;
        rttmonlatestjitteropermaxofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesDS")
    {
        rttmonlatestjitteropermaxofpositivesds = value;
        rttmonlatestjitteropermaxofpositivesds.value_namespace = name_space;
        rttmonlatestjitteropermaxofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesSD")
    {
        rttmonlatestjitteropermaxofpositivessd = value;
        rttmonlatestjitteropermaxofpositivessd.value_namespace = name_space;
        rttmonlatestjitteropermaxofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesDS")
    {
        rttmonlatestjitteroperminofnegativesds = value;
        rttmonlatestjitteroperminofnegativesds.value_namespace = name_space;
        rttmonlatestjitteroperminofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesSD")
    {
        rttmonlatestjitteroperminofnegativessd = value;
        rttmonlatestjitteroperminofnegativessd.value_namespace = name_space;
        rttmonlatestjitteroperminofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesDS")
    {
        rttmonlatestjitteroperminofpositivesds = value;
        rttmonlatestjitteroperminofpositivesds.value_namespace = name_space;
        rttmonlatestjitteroperminofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesSD")
    {
        rttmonlatestjitteroperminofpositivessd = value;
        rttmonlatestjitteroperminofpositivessd.value_namespace = name_space;
        rttmonlatestjitteroperminofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperMOS")
    {
        rttmonlatestjitteropermos = value;
        rttmonlatestjitteropermos.value_namespace = name_space;
        rttmonlatestjitteropermos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNTPState")
    {
        rttmonlatestjitteroperntpstate = value;
        rttmonlatestjitteroperntpstate.value_namespace = name_space;
        rttmonlatestjitteroperntpstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesDS")
    {
        rttmonlatestjitteropernumofnegativesds = value;
        rttmonlatestjitteropernumofnegativesds.value_namespace = name_space;
        rttmonlatestjitteropernumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesSD")
    {
        rttmonlatestjitteropernumofnegativessd = value;
        rttmonlatestjitteropernumofnegativessd.value_namespace = name_space;
        rttmonlatestjitteropernumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfOW")
    {
        rttmonlatestjitteropernumofow = value;
        rttmonlatestjitteropernumofow.value_namespace = name_space;
        rttmonlatestjitteropernumofow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesDS")
    {
        rttmonlatestjitteropernumofpositivesds = value;
        rttmonlatestjitteropernumofpositivesds.value_namespace = name_space;
        rttmonlatestjitteropernumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesSD")
    {
        rttmonlatestjitteropernumofpositivessd = value;
        rttmonlatestjitteropernumofpositivessd.value_namespace = name_space;
        rttmonlatestjitteropernumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperNumOfRTT")
    {
        rttmonlatestjitteropernumofrtt = value;
        rttmonlatestjitteropernumofrtt.value_namespace = name_space;
        rttmonlatestjitteropernumofrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgDS")
    {
        rttmonlatestjitteroperowavgds = value;
        rttmonlatestjitteroperowavgds.value_namespace = name_space;
        rttmonlatestjitteroperowavgds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgSD")
    {
        rttmonlatestjitteroperowavgsd = value;
        rttmonlatestjitteroperowavgsd.value_namespace = name_space;
        rttmonlatestjitteroperowavgsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxDS")
    {
        rttmonlatestjitteroperowmaxds = value;
        rttmonlatestjitteroperowmaxds.value_namespace = name_space;
        rttmonlatestjitteroperowmaxds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxSD")
    {
        rttmonlatestjitteroperowmaxsd = value;
        rttmonlatestjitteroperowmaxsd.value_namespace = name_space;
        rttmonlatestjitteroperowmaxsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMinDS")
    {
        rttmonlatestjitteroperowminds = value;
        rttmonlatestjitteroperowminds.value_namespace = name_space;
        rttmonlatestjitteroperowminds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWMinSD")
    {
        rttmonlatestjitteroperowminsd = value;
        rttmonlatestjitteroperowminsd.value_namespace = name_space;
        rttmonlatestjitteroperowminsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DS")
    {
        rttmonlatestjitteroperowsum2ds = value;
        rttmonlatestjitteroperowsum2ds.value_namespace = name_space;
        rttmonlatestjitteroperowsum2ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DSHigh")
    {
        rttmonlatestjitteroperowsum2dshigh = value;
        rttmonlatestjitteroperowsum2dshigh.value_namespace = name_space;
        rttmonlatestjitteroperowsum2dshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SD")
    {
        rttmonlatestjitteroperowsum2sd = value;
        rttmonlatestjitteroperowsum2sd.value_namespace = name_space;
        rttmonlatestjitteroperowsum2sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SDHigh")
    {
        rttmonlatestjitteroperowsum2sdhigh = value;
        rttmonlatestjitteroperowsum2sdhigh.value_namespace = name_space;
        rttmonlatestjitteroperowsum2sdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDS")
    {
        rttmonlatestjitteroperowsumds = value;
        rttmonlatestjitteroperowsumds.value_namespace = name_space;
        rttmonlatestjitteroperowsumds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDSHigh")
    {
        rttmonlatestjitteroperowsumdshigh = value;
        rttmonlatestjitteroperowsumdshigh.value_namespace = name_space;
        rttmonlatestjitteroperowsumdshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSD")
    {
        rttmonlatestjitteroperowsumsd = value;
        rttmonlatestjitteroperowsumsd.value_namespace = name_space;
        rttmonlatestjitteroperowsumsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSDHigh")
    {
        rttmonlatestjitteroperowsumsdhigh = value;
        rttmonlatestjitteroperowsumsdhigh.value_namespace = name_space;
        rttmonlatestjitteroperowsumsdhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketLateArrival")
    {
        rttmonlatestjitteroperpacketlatearrival = value;
        rttmonlatestjitteroperpacketlatearrival.value_namespace = name_space;
        rttmonlatestjitteroperpacketlatearrival.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossDS")
    {
        rttmonlatestjitteroperpacketlossds = value;
        rttmonlatestjitteroperpacketlossds.value_namespace = name_space;
        rttmonlatestjitteroperpacketlossds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossSD")
    {
        rttmonlatestjitteroperpacketlosssd = value;
        rttmonlatestjitteroperpacketlosssd.value_namespace = name_space;
        rttmonlatestjitteroperpacketlosssd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketMIA")
    {
        rttmonlatestjitteroperpacketmia = value;
        rttmonlatestjitteroperpacketmia.value_namespace = name_space;
        rttmonlatestjitteroperpacketmia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperPacketOutOfSequence")
    {
        rttmonlatestjitteroperpacketoutofsequence = value;
        rttmonlatestjitteroperpacketoutofsequence.value_namespace = name_space;
        rttmonlatestjitteroperpacketoutofsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTMax")
    {
        rttmonlatestjitteroperrttmax = value;
        rttmonlatestjitteroperrttmax.value_namespace = name_space;
        rttmonlatestjitteroperrttmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTMin")
    {
        rttmonlatestjitteroperrttmin = value;
        rttmonlatestjitteroperrttmin.value_namespace = name_space;
        rttmonlatestjitteroperrttmin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonLatestJitterOperRTTSum2High")
    {
        rttmonlatestjitteroperrttsum2high = value;
        rttmonlatestjitteroperrttsum2high.value_namespace = name_space;
        rttmonlatestjitteroperrttsum2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperRTTSumHigh")
    {
        rttmonlatestjitteroperrttsumhigh = value;
        rttmonlatestjitteroperrttsumhigh.value_namespace = name_space;
        rttmonlatestjitteroperrttsumhigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSense")
    {
        rttmonlatestjitteropersense = value;
        rttmonlatestjitteropersense.value_namespace = name_space;
        rttmonlatestjitteropersense.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesDS")
    {
        rttmonlatestjitteropersum2negativesds = value;
        rttmonlatestjitteropersum2negativesds.value_namespace = name_space;
        rttmonlatestjitteropersum2negativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesSD")
    {
        rttmonlatestjitteropersum2negativessd = value;
        rttmonlatestjitteropersum2negativessd.value_namespace = name_space;
        rttmonlatestjitteropersum2negativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesDS")
    {
        rttmonlatestjitteropersum2positivesds = value;
        rttmonlatestjitteropersum2positivesds.value_namespace = name_space;
        rttmonlatestjitteropersum2positivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesSD")
    {
        rttmonlatestjitteropersum2positivessd = value;
        rttmonlatestjitteropersum2positivessd.value_namespace = name_space;
        rttmonlatestjitteropersum2positivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesDS")
    {
        rttmonlatestjitteropersumofnegativesds = value;
        rttmonlatestjitteropersumofnegativesds.value_namespace = name_space;
        rttmonlatestjitteropersumofnegativesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesSD")
    {
        rttmonlatestjitteropersumofnegativessd = value;
        rttmonlatestjitteropersumofnegativessd.value_namespace = name_space;
        rttmonlatestjitteropersumofnegativessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesDS")
    {
        rttmonlatestjitteropersumofpositivesds = value;
        rttmonlatestjitteropersumofpositivesds.value_namespace = name_space;
        rttmonlatestjitteropersumofpositivesds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesSD")
    {
        rttmonlatestjitteropersumofpositivessd = value;
        rttmonlatestjitteropersumofpositivessd.value_namespace = name_space;
        rttmonlatestjitteropersumofpositivessd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLatestJitterOperUnSyncRTs")
    {
        rttmonlatestjitteroperunsyncrts = value;
        rttmonlatestjitteroperunsyncrts.value_namespace = name_space;
        rttmonlatestjitteroperunsyncrts.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterErrorSenseDescription")
    {
        rttmonlatestjittererrorsensedescription.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperAvgDSJ")
    {
        rttmonlatestjitteroperavgdsj.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperAvgJitter")
    {
        rttmonlatestjitteroperavgjitter.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperAvgSDJ")
    {
        rttmonlatestjitteroperavgsdj.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperIAJIn")
    {
        rttmonlatestjitteroperiajin.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperIAJOut")
    {
        rttmonlatestjitteroperiajout.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperICPIF")
    {
        rttmonlatestjitteropericpif.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesDS")
    {
        rttmonlatestjitteropermaxofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfNegativesSD")
    {
        rttmonlatestjitteropermaxofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesDS")
    {
        rttmonlatestjitteropermaxofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMaxOfPositivesSD")
    {
        rttmonlatestjitteropermaxofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesDS")
    {
        rttmonlatestjitteroperminofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfNegativesSD")
    {
        rttmonlatestjitteroperminofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesDS")
    {
        rttmonlatestjitteroperminofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMinOfPositivesSD")
    {
        rttmonlatestjitteroperminofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperMOS")
    {
        rttmonlatestjitteropermos.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNTPState")
    {
        rttmonlatestjitteroperntpstate.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesDS")
    {
        rttmonlatestjitteropernumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfNegativesSD")
    {
        rttmonlatestjitteropernumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfOW")
    {
        rttmonlatestjitteropernumofow.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesDS")
    {
        rttmonlatestjitteropernumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfPositivesSD")
    {
        rttmonlatestjitteropernumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperNumOfRTT")
    {
        rttmonlatestjitteropernumofrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgDS")
    {
        rttmonlatestjitteroperowavgds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWAvgSD")
    {
        rttmonlatestjitteroperowavgsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxDS")
    {
        rttmonlatestjitteroperowmaxds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMaxSD")
    {
        rttmonlatestjitteroperowmaxsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMinDS")
    {
        rttmonlatestjitteroperowminds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWMinSD")
    {
        rttmonlatestjitteroperowminsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DS")
    {
        rttmonlatestjitteroperowsum2ds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2DSHigh")
    {
        rttmonlatestjitteroperowsum2dshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SD")
    {
        rttmonlatestjitteroperowsum2sd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSum2SDHigh")
    {
        rttmonlatestjitteroperowsum2sdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDS")
    {
        rttmonlatestjitteroperowsumds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumDSHigh")
    {
        rttmonlatestjitteroperowsumdshigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSD")
    {
        rttmonlatestjitteroperowsumsd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperOWSumSDHigh")
    {
        rttmonlatestjitteroperowsumsdhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketLateArrival")
    {
        rttmonlatestjitteroperpacketlatearrival.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossDS")
    {
        rttmonlatestjitteroperpacketlossds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketLossSD")
    {
        rttmonlatestjitteroperpacketlosssd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketMIA")
    {
        rttmonlatestjitteroperpacketmia.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperPacketOutOfSequence")
    {
        rttmonlatestjitteroperpacketoutofsequence.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTMax")
    {
        rttmonlatestjitteroperrttmax.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTMin")
    {
        rttmonlatestjitteroperrttmin.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum")
    {
        rttmonlatestjitteroperrttsum.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum2")
    {
        rttmonlatestjitteroperrttsum2.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSum2High")
    {
        rttmonlatestjitteroperrttsum2high.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperRTTSumHigh")
    {
        rttmonlatestjitteroperrttsumhigh.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSense")
    {
        rttmonlatestjitteropersense.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesDS")
    {
        rttmonlatestjitteropersum2negativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2NegativesSD")
    {
        rttmonlatestjitteropersum2negativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesDS")
    {
        rttmonlatestjitteropersum2positivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSum2PositivesSD")
    {
        rttmonlatestjitteropersum2positivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesDS")
    {
        rttmonlatestjitteropersumofnegativesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfNegativesSD")
    {
        rttmonlatestjitteropersumofnegativessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesDS")
    {
        rttmonlatestjitteropersumofpositivesds.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperSumOfPositivesSD")
    {
        rttmonlatestjitteropersumofpositivessd.yfilter = yfilter;
    }
    if(value_path == "rttMonLatestJitterOperUnSyncRTs")
    {
        rttmonlatestjitteroperunsyncrts.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonLatestJitterErrorSenseDescription" || name == "rttMonLatestJitterOperAvgDSJ" || name == "rttMonLatestJitterOperAvgJitter" || name == "rttMonLatestJitterOperAvgSDJ" || name == "rttMonLatestJitterOperIAJIn" || name == "rttMonLatestJitterOperIAJOut" || name == "rttMonLatestJitterOperICPIF" || name == "rttMonLatestJitterOperMaxOfNegativesDS" || name == "rttMonLatestJitterOperMaxOfNegativesSD" || name == "rttMonLatestJitterOperMaxOfPositivesDS" || name == "rttMonLatestJitterOperMaxOfPositivesSD" || name == "rttMonLatestJitterOperMinOfNegativesDS" || name == "rttMonLatestJitterOperMinOfNegativesSD" || name == "rttMonLatestJitterOperMinOfPositivesDS" || name == "rttMonLatestJitterOperMinOfPositivesSD" || name == "rttMonLatestJitterOperMOS" || name == "rttMonLatestJitterOperNTPState" || name == "rttMonLatestJitterOperNumOfNegativesDS" || name == "rttMonLatestJitterOperNumOfNegativesSD" || name == "rttMonLatestJitterOperNumOfOW" || name == "rttMonLatestJitterOperNumOfPositivesDS" || name == "rttMonLatestJitterOperNumOfPositivesSD" || name == "rttMonLatestJitterOperNumOfRTT" || name == "rttMonLatestJitterOperOWAvgDS" || name == "rttMonLatestJitterOperOWAvgSD" || name == "rttMonLatestJitterOperOWMaxDS" || name == "rttMonLatestJitterOperOWMaxSD" || name == "rttMonLatestJitterOperOWMinDS" || name == "rttMonLatestJitterOperOWMinSD" || name == "rttMonLatestJitterOperOWSum2DS" || name == "rttMonLatestJitterOperOWSum2DSHigh" || name == "rttMonLatestJitterOperOWSum2SD" || name == "rttMonLatestJitterOperOWSum2SDHigh" || name == "rttMonLatestJitterOperOWSumDS" || name == "rttMonLatestJitterOperOWSumDSHigh" || name == "rttMonLatestJitterOperOWSumSD" || name == "rttMonLatestJitterOperOWSumSDHigh" || name == "rttMonLatestJitterOperPacketLateArrival" || name == "rttMonLatestJitterOperPacketLossDS" || name == "rttMonLatestJitterOperPacketLossSD" || name == "rttMonLatestJitterOperPacketMIA" || name == "rttMonLatestJitterOperPacketOutOfSequence" || name == "rttMonLatestJitterOperRTTMax" || name == "rttMonLatestJitterOperRTTMin" || name == "rttMonLatestJitterOperRTTSum" || name == "rttMonLatestJitterOperRTTSum2" || name == "rttMonLatestJitterOperRTTSum2High" || name == "rttMonLatestJitterOperRTTSumHigh" || name == "rttMonLatestJitterOperSense" || name == "rttMonLatestJitterOperSum2NegativesDS" || name == "rttMonLatestJitterOperSum2NegativesSD" || name == "rttMonLatestJitterOperSum2PositivesDS" || name == "rttMonLatestJitterOperSum2PositivesSD" || name == "rttMonLatestJitterOperSumOfNegativesDS" || name == "rttMonLatestJitterOperSumOfNegativesSD" || name == "rttMonLatestJitterOperSumOfPositivesDS" || name == "rttMonLatestJitterOperSumOfPositivesSD" || name == "rttMonLatestJitterOperUnSyncRTs")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatstable()
{

    yang_name = "rttMonLpdGrpStatsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonlpdgrpstatstable::~Rttmonlpdgrpstatstable()
{
}

bool CISCORTTMONMIB::Rttmonlpdgrpstatstable::has_data() const
{
    for (std::size_t index=0; index<rttmonlpdgrpstatsentry.size(); index++)
    {
        if(rttmonlpdgrpstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonlpdgrpstatstable::has_operation() const
{
    for (std::size_t index=0; index<rttmonlpdgrpstatsentry.size(); index++)
    {
        if(rttmonlpdgrpstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonlpdgrpstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonlpdgrpstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLpdGrpStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonlpdgrpstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonlpdgrpstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonLpdGrpStatsEntry")
    {
        for(auto const & c : rttmonlpdgrpstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry>();
        c->parent = this;
        rttmonlpdgrpstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonlpdgrpstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonlpdgrpstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonlpdgrpstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonlpdgrpstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonlpdgrpstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLpdGrpStatsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::Rttmonlpdgrpstatsentry()
    :
    rttmonlpdgrpstatsgroupindex{YType::int32, "rttMonLpdGrpStatsGroupIndex"},
    rttmonlpdgrpstatsstarttimeindex{YType::uint32, "rttMonLpdGrpStatsStartTimeIndex"},
    rttmonlpdgrpstatsavgrtt{YType::int32, "rttMonLpdGrpStatsAvgRTT"},
    rttmonlpdgrpstatsgroupprobeindex{YType::int32, "rttMonLpdGrpStatsGroupProbeIndex"},
    rttmonlpdgrpstatsgroupstatus{YType::enumeration, "rttMonLpdGrpStatsGroupStatus"},
    rttmonlpdgrpstatslpdcomptime{YType::int32, "rttMonLpdGrpStatsLPDCompTime"},
    rttmonlpdgrpstatslpdfailcause{YType::enumeration, "rttMonLpdGrpStatsLPDFailCause"},
    rttmonlpdgrpstatslpdfailoccurred{YType::boolean, "rttMonLpdGrpStatsLPDFailOccurred"},
    rttmonlpdgrpstatslpdstarttime{YType::uint32, "rttMonLpdGrpStatsLPDStartTime"},
    rttmonlpdgrpstatsmaxnumpaths{YType::int32, "rttMonLpdGrpStatsMaxNumPaths"},
    rttmonlpdgrpstatsmaxrtt{YType::int32, "rttMonLpdGrpStatsMaxRTT"},
    rttmonlpdgrpstatsminnumpaths{YType::int32, "rttMonLpdGrpStatsMinNumPaths"},
    rttmonlpdgrpstatsminrtt{YType::int32, "rttMonLpdGrpStatsMinRTT"},
    rttmonlpdgrpstatsnumoffail{YType::int32, "rttMonLpdGrpStatsNumOfFail"},
    rttmonlpdgrpstatsnumofpass{YType::int32, "rttMonLpdGrpStatsNumOfPass"},
    rttmonlpdgrpstatsnumoftimeout{YType::int32, "rttMonLpdGrpStatsNumOfTimeout"},
    rttmonlpdgrpstatspathids{YType::str, "rttMonLpdGrpStatsPathIds"},
    rttmonlpdgrpstatsprobestatus{YType::str, "rttMonLpdGrpStatsProbeStatus"},
    rttmonlpdgrpstatsresettime{YType::uint32, "rttMonLpdGrpStatsResetTime"},
    rttmonlpdgrpstatstargetpe{YType::str, "rttMonLpdGrpStatsTargetPE"}
{

    yang_name = "rttMonLpdGrpStatsEntry"; yang_parent_name = "rttMonLpdGrpStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::~Rttmonlpdgrpstatsentry()
{
}

bool CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::has_data() const
{
    return rttmonlpdgrpstatsgroupindex.is_set
	|| rttmonlpdgrpstatsstarttimeindex.is_set
	|| rttmonlpdgrpstatsavgrtt.is_set
	|| rttmonlpdgrpstatsgroupprobeindex.is_set
	|| rttmonlpdgrpstatsgroupstatus.is_set
	|| rttmonlpdgrpstatslpdcomptime.is_set
	|| rttmonlpdgrpstatslpdfailcause.is_set
	|| rttmonlpdgrpstatslpdfailoccurred.is_set
	|| rttmonlpdgrpstatslpdstarttime.is_set
	|| rttmonlpdgrpstatsmaxnumpaths.is_set
	|| rttmonlpdgrpstatsmaxrtt.is_set
	|| rttmonlpdgrpstatsminnumpaths.is_set
	|| rttmonlpdgrpstatsminrtt.is_set
	|| rttmonlpdgrpstatsnumoffail.is_set
	|| rttmonlpdgrpstatsnumofpass.is_set
	|| rttmonlpdgrpstatsnumoftimeout.is_set
	|| rttmonlpdgrpstatspathids.is_set
	|| rttmonlpdgrpstatsprobestatus.is_set
	|| rttmonlpdgrpstatsresettime.is_set
	|| rttmonlpdgrpstatstargetpe.is_set;
}

bool CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsgroupindex.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsstarttimeindex.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsavgrtt.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsgroupprobeindex.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsgroupstatus.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdcomptime.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdfailcause.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdfailoccurred.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatslpdstarttime.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsmaxnumpaths.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsmaxrtt.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsminnumpaths.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsminrtt.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsnumoffail.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsnumofpass.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsnumoftimeout.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatspathids.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsprobestatus.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatsresettime.yfilter)
	|| ydk::is_set(rttmonlpdgrpstatstargetpe.yfilter);
}

std::string CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonLpdGrpStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonLpdGrpStatsEntry" <<"[rttMonLpdGrpStatsGroupIndex='" <<rttmonlpdgrpstatsgroupindex <<"']" <<"[rttMonLpdGrpStatsStartTimeIndex='" <<rttmonlpdgrpstatsstarttimeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonlpdgrpstatsgroupindex.is_set || is_set(rttmonlpdgrpstatsgroupindex.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsgroupindex.get_name_leafdata());
    if (rttmonlpdgrpstatsstarttimeindex.is_set || is_set(rttmonlpdgrpstatsstarttimeindex.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsstarttimeindex.get_name_leafdata());
    if (rttmonlpdgrpstatsavgrtt.is_set || is_set(rttmonlpdgrpstatsavgrtt.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsavgrtt.get_name_leafdata());
    if (rttmonlpdgrpstatsgroupprobeindex.is_set || is_set(rttmonlpdgrpstatsgroupprobeindex.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsgroupprobeindex.get_name_leafdata());
    if (rttmonlpdgrpstatsgroupstatus.is_set || is_set(rttmonlpdgrpstatsgroupstatus.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsgroupstatus.get_name_leafdata());
    if (rttmonlpdgrpstatslpdcomptime.is_set || is_set(rttmonlpdgrpstatslpdcomptime.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdcomptime.get_name_leafdata());
    if (rttmonlpdgrpstatslpdfailcause.is_set || is_set(rttmonlpdgrpstatslpdfailcause.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdfailcause.get_name_leafdata());
    if (rttmonlpdgrpstatslpdfailoccurred.is_set || is_set(rttmonlpdgrpstatslpdfailoccurred.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdfailoccurred.get_name_leafdata());
    if (rttmonlpdgrpstatslpdstarttime.is_set || is_set(rttmonlpdgrpstatslpdstarttime.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatslpdstarttime.get_name_leafdata());
    if (rttmonlpdgrpstatsmaxnumpaths.is_set || is_set(rttmonlpdgrpstatsmaxnumpaths.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsmaxnumpaths.get_name_leafdata());
    if (rttmonlpdgrpstatsmaxrtt.is_set || is_set(rttmonlpdgrpstatsmaxrtt.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsmaxrtt.get_name_leafdata());
    if (rttmonlpdgrpstatsminnumpaths.is_set || is_set(rttmonlpdgrpstatsminnumpaths.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsminnumpaths.get_name_leafdata());
    if (rttmonlpdgrpstatsminrtt.is_set || is_set(rttmonlpdgrpstatsminrtt.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsminrtt.get_name_leafdata());
    if (rttmonlpdgrpstatsnumoffail.is_set || is_set(rttmonlpdgrpstatsnumoffail.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsnumoffail.get_name_leafdata());
    if (rttmonlpdgrpstatsnumofpass.is_set || is_set(rttmonlpdgrpstatsnumofpass.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsnumofpass.get_name_leafdata());
    if (rttmonlpdgrpstatsnumoftimeout.is_set || is_set(rttmonlpdgrpstatsnumoftimeout.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsnumoftimeout.get_name_leafdata());
    if (rttmonlpdgrpstatspathids.is_set || is_set(rttmonlpdgrpstatspathids.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatspathids.get_name_leafdata());
    if (rttmonlpdgrpstatsprobestatus.is_set || is_set(rttmonlpdgrpstatsprobestatus.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsprobestatus.get_name_leafdata());
    if (rttmonlpdgrpstatsresettime.is_set || is_set(rttmonlpdgrpstatsresettime.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatsresettime.get_name_leafdata());
    if (rttmonlpdgrpstatstargetpe.is_set || is_set(rttmonlpdgrpstatstargetpe.yfilter)) leaf_name_data.push_back(rttmonlpdgrpstatstargetpe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rttMonLpdGrpStatsAvgRTT")
    {
        rttmonlpdgrpstatsavgrtt = value;
        rttmonlpdgrpstatsavgrtt.value_namespace = name_space;
        rttmonlpdgrpstatsavgrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsGroupProbeIndex")
    {
        rttmonlpdgrpstatsgroupprobeindex = value;
        rttmonlpdgrpstatsgroupprobeindex.value_namespace = name_space;
        rttmonlpdgrpstatsgroupprobeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsGroupStatus")
    {
        rttmonlpdgrpstatsgroupstatus = value;
        rttmonlpdgrpstatsgroupstatus.value_namespace = name_space;
        rttmonlpdgrpstatsgroupstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDCompTime")
    {
        rttmonlpdgrpstatslpdcomptime = value;
        rttmonlpdgrpstatslpdcomptime.value_namespace = name_space;
        rttmonlpdgrpstatslpdcomptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailCause")
    {
        rttmonlpdgrpstatslpdfailcause = value;
        rttmonlpdgrpstatslpdfailcause.value_namespace = name_space;
        rttmonlpdgrpstatslpdfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailOccurred")
    {
        rttmonlpdgrpstatslpdfailoccurred = value;
        rttmonlpdgrpstatslpdfailoccurred.value_namespace = name_space;
        rttmonlpdgrpstatslpdfailoccurred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsLPDStartTime")
    {
        rttmonlpdgrpstatslpdstarttime = value;
        rttmonlpdgrpstatslpdstarttime.value_namespace = name_space;
        rttmonlpdgrpstatslpdstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsMaxNumPaths")
    {
        rttmonlpdgrpstatsmaxnumpaths = value;
        rttmonlpdgrpstatsmaxnumpaths.value_namespace = name_space;
        rttmonlpdgrpstatsmaxnumpaths.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonLpdGrpStatsMinRTT")
    {
        rttmonlpdgrpstatsminrtt = value;
        rttmonlpdgrpstatsminrtt.value_namespace = name_space;
        rttmonlpdgrpstatsminrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfFail")
    {
        rttmonlpdgrpstatsnumoffail = value;
        rttmonlpdgrpstatsnumoffail.value_namespace = name_space;
        rttmonlpdgrpstatsnumoffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfPass")
    {
        rttmonlpdgrpstatsnumofpass = value;
        rttmonlpdgrpstatsnumofpass.value_namespace = name_space;
        rttmonlpdgrpstatsnumofpass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfTimeout")
    {
        rttmonlpdgrpstatsnumoftimeout = value;
        rttmonlpdgrpstatsnumoftimeout.value_namespace = name_space;
        rttmonlpdgrpstatsnumoftimeout.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonLpdGrpStatsTargetPE")
    {
        rttmonlpdgrpstatstargetpe = value;
        rttmonlpdgrpstatstargetpe.value_namespace = name_space;
        rttmonlpdgrpstatstargetpe.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonLpdGrpStatsGroupIndex")
    {
        rttmonlpdgrpstatsgroupindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsStartTimeIndex")
    {
        rttmonlpdgrpstatsstarttimeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsAvgRTT")
    {
        rttmonlpdgrpstatsavgrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsGroupProbeIndex")
    {
        rttmonlpdgrpstatsgroupprobeindex.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsGroupStatus")
    {
        rttmonlpdgrpstatsgroupstatus.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDCompTime")
    {
        rttmonlpdgrpstatslpdcomptime.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailCause")
    {
        rttmonlpdgrpstatslpdfailcause.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDFailOccurred")
    {
        rttmonlpdgrpstatslpdfailoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsLPDStartTime")
    {
        rttmonlpdgrpstatslpdstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMaxNumPaths")
    {
        rttmonlpdgrpstatsmaxnumpaths.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMaxRTT")
    {
        rttmonlpdgrpstatsmaxrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMinNumPaths")
    {
        rttmonlpdgrpstatsminnumpaths.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsMinRTT")
    {
        rttmonlpdgrpstatsminrtt.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfFail")
    {
        rttmonlpdgrpstatsnumoffail.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfPass")
    {
        rttmonlpdgrpstatsnumofpass.yfilter = yfilter;
    }
    if(value_path == "rttMonLpdGrpStatsNumOfTimeout")
    {
        rttmonlpdgrpstatsnumoftimeout.yfilter = yfilter;
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
    if(value_path == "rttMonLpdGrpStatsTargetPE")
    {
        rttmonlpdgrpstatstargetpe.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonLpdGrpStatsGroupIndex" || name == "rttMonLpdGrpStatsStartTimeIndex" || name == "rttMonLpdGrpStatsAvgRTT" || name == "rttMonLpdGrpStatsGroupProbeIndex" || name == "rttMonLpdGrpStatsGroupStatus" || name == "rttMonLpdGrpStatsLPDCompTime" || name == "rttMonLpdGrpStatsLPDFailCause" || name == "rttMonLpdGrpStatsLPDFailOccurred" || name == "rttMonLpdGrpStatsLPDStartTime" || name == "rttMonLpdGrpStatsMaxNumPaths" || name == "rttMonLpdGrpStatsMaxRTT" || name == "rttMonLpdGrpStatsMinNumPaths" || name == "rttMonLpdGrpStatsMinRTT" || name == "rttMonLpdGrpStatsNumOfFail" || name == "rttMonLpdGrpStatsNumOfPass" || name == "rttMonLpdGrpStatsNumOfTimeout" || name == "rttMonLpdGrpStatsPathIds" || name == "rttMonLpdGrpStatsProbeStatus" || name == "rttMonLpdGrpStatsResetTime" || name == "rttMonLpdGrpStatsTargetPE")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonreacttable::Rttmonreacttable()
{

    yang_name = "rttMonReactTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonreacttable::~Rttmonreacttable()
{
}

bool CISCORTTMONMIB::Rttmonreacttable::has_data() const
{
    for (std::size_t index=0; index<rttmonreactentry.size(); index++)
    {
        if(rttmonreactentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonreacttable::has_operation() const
{
    for (std::size_t index=0; index<rttmonreactentry.size(); index++)
    {
        if(rttmonreactentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonreacttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonreacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonreacttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonreacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonReactEntry")
    {
        for(auto const & c : rttmonreactentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry>();
        c->parent = this;
        rttmonreactentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonreacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonreactentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonreacttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonreacttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonreacttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonReactEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonreactconfigindex{YType::int32, "rttMonReactConfigIndex"},
    rttmonreactactiontype{YType::enumeration, "rttMonReactActionType"},
    rttmonreactoccurred{YType::boolean, "rttMonReactOccurred"},
    rttmonreactstatus{YType::enumeration, "rttMonReactStatus"},
    rttmonreactthresholdcountx{YType::int32, "rttMonReactThresholdCountX"},
    rttmonreactthresholdcounty{YType::int32, "rttMonReactThresholdCountY"},
    rttmonreactthresholdfalling{YType::int32, "rttMonReactThresholdFalling"},
    rttmonreactthresholdrising{YType::int32, "rttMonReactThresholdRising"},
    rttmonreactthresholdtype{YType::enumeration, "rttMonReactThresholdType"},
    rttmonreactvalue{YType::int32, "rttMonReactValue"},
    rttmonreactvar{YType::enumeration, "rttMonReactVar"}
{

    yang_name = "rttMonReactEntry"; yang_parent_name = "rttMonReactTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::~Rttmonreactentry()
{
}

bool CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonreactconfigindex.is_set
	|| rttmonreactactiontype.is_set
	|| rttmonreactoccurred.is_set
	|| rttmonreactstatus.is_set
	|| rttmonreactthresholdcountx.is_set
	|| rttmonreactthresholdcounty.is_set
	|| rttmonreactthresholdfalling.is_set
	|| rttmonreactthresholdrising.is_set
	|| rttmonreactthresholdtype.is_set
	|| rttmonreactvalue.is_set
	|| rttmonreactvar.is_set;
}

bool CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonreactconfigindex.yfilter)
	|| ydk::is_set(rttmonreactactiontype.yfilter)
	|| ydk::is_set(rttmonreactoccurred.yfilter)
	|| ydk::is_set(rttmonreactstatus.yfilter)
	|| ydk::is_set(rttmonreactthresholdcountx.yfilter)
	|| ydk::is_set(rttmonreactthresholdcounty.yfilter)
	|| ydk::is_set(rttmonreactthresholdfalling.yfilter)
	|| ydk::is_set(rttmonreactthresholdrising.yfilter)
	|| ydk::is_set(rttmonreactthresholdtype.yfilter)
	|| ydk::is_set(rttmonreactvalue.yfilter)
	|| ydk::is_set(rttmonreactvar.yfilter);
}

std::string CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonReactTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonReactConfigIndex='" <<rttmonreactconfigindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonreactconfigindex.is_set || is_set(rttmonreactconfigindex.yfilter)) leaf_name_data.push_back(rttmonreactconfigindex.get_name_leafdata());
    if (rttmonreactactiontype.is_set || is_set(rttmonreactactiontype.yfilter)) leaf_name_data.push_back(rttmonreactactiontype.get_name_leafdata());
    if (rttmonreactoccurred.is_set || is_set(rttmonreactoccurred.yfilter)) leaf_name_data.push_back(rttmonreactoccurred.get_name_leafdata());
    if (rttmonreactstatus.is_set || is_set(rttmonreactstatus.yfilter)) leaf_name_data.push_back(rttmonreactstatus.get_name_leafdata());
    if (rttmonreactthresholdcountx.is_set || is_set(rttmonreactthresholdcountx.yfilter)) leaf_name_data.push_back(rttmonreactthresholdcountx.get_name_leafdata());
    if (rttmonreactthresholdcounty.is_set || is_set(rttmonreactthresholdcounty.yfilter)) leaf_name_data.push_back(rttmonreactthresholdcounty.get_name_leafdata());
    if (rttmonreactthresholdfalling.is_set || is_set(rttmonreactthresholdfalling.yfilter)) leaf_name_data.push_back(rttmonreactthresholdfalling.get_name_leafdata());
    if (rttmonreactthresholdrising.is_set || is_set(rttmonreactthresholdrising.yfilter)) leaf_name_data.push_back(rttmonreactthresholdrising.get_name_leafdata());
    if (rttmonreactthresholdtype.is_set || is_set(rttmonreactthresholdtype.yfilter)) leaf_name_data.push_back(rttmonreactthresholdtype.get_name_leafdata());
    if (rttmonreactvalue.is_set || is_set(rttmonreactvalue.yfilter)) leaf_name_data.push_back(rttmonreactvalue.get_name_leafdata());
    if (rttmonreactvar.is_set || is_set(rttmonreactvar.yfilter)) leaf_name_data.push_back(rttmonreactvar.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rttMonReactActionType")
    {
        rttmonreactactiontype = value;
        rttmonreactactiontype.value_namespace = name_space;
        rttmonreactactiontype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMonReactThresholdFalling")
    {
        rttmonreactthresholdfalling = value;
        rttmonreactthresholdfalling.value_namespace = name_space;
        rttmonreactthresholdfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactThresholdRising")
    {
        rttmonreactthresholdrising = value;
        rttmonreactthresholdrising.value_namespace = name_space;
        rttmonreactthresholdrising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactThresholdType")
    {
        rttmonreactthresholdtype = value;
        rttmonreactthresholdtype.value_namespace = name_space;
        rttmonreactthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactValue")
    {
        rttmonreactvalue = value;
        rttmonreactvalue.value_namespace = name_space;
        rttmonreactvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonReactVar")
    {
        rttmonreactvar = value;
        rttmonreactvar.value_namespace = name_space;
        rttmonreactvar.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonReactConfigIndex")
    {
        rttmonreactconfigindex.yfilter = yfilter;
    }
    if(value_path == "rttMonReactActionType")
    {
        rttmonreactactiontype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactOccurred")
    {
        rttmonreactoccurred.yfilter = yfilter;
    }
    if(value_path == "rttMonReactStatus")
    {
        rttmonreactstatus.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdCountX")
    {
        rttmonreactthresholdcountx.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdCountY")
    {
        rttmonreactthresholdcounty.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdFalling")
    {
        rttmonreactthresholdfalling.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdRising")
    {
        rttmonreactthresholdrising.yfilter = yfilter;
    }
    if(value_path == "rttMonReactThresholdType")
    {
        rttmonreactthresholdtype.yfilter = yfilter;
    }
    if(value_path == "rttMonReactValue")
    {
        rttmonreactvalue.yfilter = yfilter;
    }
    if(value_path == "rttMonReactVar")
    {
        rttmonreactvar.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonReactConfigIndex" || name == "rttMonReactActionType" || name == "rttMonReactOccurred" || name == "rttMonReactStatus" || name == "rttMonReactThresholdCountX" || name == "rttMonReactThresholdCountY" || name == "rttMonReactThresholdFalling" || name == "rttMonReactThresholdRising" || name == "rttMonReactThresholdType" || name == "rttMonReactValue" || name == "rttMonReactVar")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradmintable()
{

    yang_name = "rttMonReactTriggerAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonreacttriggeradmintable::~Rttmonreacttriggeradmintable()
{
}

bool CISCORTTMONMIB::Rttmonreacttriggeradmintable::has_data() const
{
    for (std::size_t index=0; index<rttmonreacttriggeradminentry.size(); index++)
    {
        if(rttmonreacttriggeradminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonreacttriggeradmintable::has_operation() const
{
    for (std::size_t index=0; index<rttmonreacttriggeradminentry.size(); index++)
    {
        if(rttmonreacttriggeradminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonreacttriggeradmintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonreacttriggeradmintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactTriggerAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonreacttriggeradmintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonreacttriggeradmintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonReactTriggerAdminEntry")
    {
        for(auto const & c : rttmonreacttriggeradminentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry>();
        c->parent = this;
        rttmonreacttriggeradminentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonreacttriggeradmintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonreacttriggeradminentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonreacttriggeradmintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonreacttriggeradmintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonreacttriggeradmintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonReactTriggerAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::Rttmonreacttriggeradminentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonreacttriggeradminrttmonctrladminindex{YType::int32, "rttMonReactTriggerAdminRttMonCtrlAdminIndex"},
    rttmonreacttriggeradminstatus{YType::enumeration, "rttMonReactTriggerAdminStatus"},
    rttmonreacttriggeroperstate{YType::enumeration, "rttMonReactTriggerOperState"}
{

    yang_name = "rttMonReactTriggerAdminEntry"; yang_parent_name = "rttMonReactTriggerAdminTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::~Rttmonreacttriggeradminentry()
{
}

bool CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonreacttriggeradminrttmonctrladminindex.is_set
	|| rttmonreacttriggeradminstatus.is_set
	|| rttmonreacttriggeroperstate.is_set;
}

bool CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonreacttriggeradminrttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonreacttriggeradminstatus.yfilter)
	|| ydk::is_set(rttmonreacttriggeroperstate.yfilter);
}

std::string CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonReactTriggerAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonReactTriggerAdminEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonReactTriggerAdminRttMonCtrlAdminIndex='" <<rttmonreacttriggeradminrttmonctrladminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonreacttriggeradminrttmonctrladminindex.is_set || is_set(rttmonreacttriggeradminrttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonreacttriggeradminrttmonctrladminindex.get_name_leafdata());
    if (rttmonreacttriggeradminstatus.is_set || is_set(rttmonreacttriggeradminstatus.yfilter)) leaf_name_data.push_back(rttmonreacttriggeradminstatus.get_name_leafdata());
    if (rttmonreacttriggeroperstate.is_set || is_set(rttmonreacttriggeroperstate.yfilter)) leaf_name_data.push_back(rttmonreacttriggeroperstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonReactTriggerAdminRttMonCtrlAdminIndex" || name == "rttMonReactTriggerAdminStatus" || name == "rttMonReactTriggerOperState")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadmintable()
{

    yang_name = "rttMonScriptAdminTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonscriptadmintable::~Rttmonscriptadmintable()
{
}

bool CISCORTTMONMIB::Rttmonscriptadmintable::has_data() const
{
    for (std::size_t index=0; index<rttmonscriptadminentry.size(); index++)
    {
        if(rttmonscriptadminentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonscriptadmintable::has_operation() const
{
    for (std::size_t index=0; index<rttmonscriptadminentry.size(); index++)
    {
        if(rttmonscriptadminentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonscriptadmintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonscriptadmintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonScriptAdminTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonscriptadmintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonscriptadmintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonScriptAdminEntry")
    {
        for(auto const & c : rttmonscriptadminentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry>();
        c->parent = this;
        rttmonscriptadminentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonscriptadmintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonscriptadminentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonscriptadmintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonscriptadmintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonscriptadmintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonScriptAdminEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::Rttmonscriptadminentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonscriptadmincmdlineparams{YType::str, "rttMonScriptAdminCmdLineParams"},
    rttmonscriptadminname{YType::str, "rttMonScriptAdminName"}
{

    yang_name = "rttMonScriptAdminEntry"; yang_parent_name = "rttMonScriptAdminTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::~Rttmonscriptadminentry()
{
}

bool CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonscriptadmincmdlineparams.is_set
	|| rttmonscriptadminname.is_set;
}

bool CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonscriptadmincmdlineparams.yfilter)
	|| ydk::is_set(rttmonscriptadminname.yfilter);
}

std::string CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonScriptAdminTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonScriptAdminEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonscriptadmincmdlineparams.is_set || is_set(rttmonscriptadmincmdlineparams.yfilter)) leaf_name_data.push_back(rttmonscriptadmincmdlineparams.get_name_leafdata());
    if (rttmonscriptadminname.is_set || is_set(rttmonscriptadminname.yfilter)) leaf_name_data.push_back(rttmonscriptadminname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex = value;
        rttmonctrladminindex.value_namespace = name_space;
        rttmonctrladminindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScriptAdminCmdLineParams")
    {
        rttmonscriptadmincmdlineparams = value;
        rttmonscriptadmincmdlineparams.value_namespace = name_space;
        rttmonscriptadmincmdlineparams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonScriptAdminName")
    {
        rttmonscriptadminname = value;
        rttmonscriptadminname.value_namespace = name_space;
        rttmonscriptadminname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMonCtrlAdminIndex")
    {
        rttmonctrladminindex.yfilter = yfilter;
    }
    if(value_path == "rttMonScriptAdminCmdLineParams")
    {
        rttmonscriptadmincmdlineparams.yfilter = yfilter;
    }
    if(value_path == "rttMonScriptAdminName")
    {
        rttmonscriptadminname.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonscriptadmintable::Rttmonscriptadminentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonScriptAdminCmdLineParams" || name == "rttMonScriptAdminName")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscapturetable()
{

    yang_name = "rttMonStatsCaptureTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonstatscapturetable::~Rttmonstatscapturetable()
{
}

bool CISCORTTMONMIB::Rttmonstatscapturetable::has_data() const
{
    for (std::size_t index=0; index<rttmonstatscaptureentry.size(); index++)
    {
        if(rttmonstatscaptureentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonstatscapturetable::has_operation() const
{
    for (std::size_t index=0; index<rttmonstatscaptureentry.size(); index++)
    {
        if(rttmonstatscaptureentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonstatscapturetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonstatscapturetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCaptureTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonstatscapturetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonstatscapturetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonStatsCaptureEntry")
    {
        for(auto const & c : rttmonstatscaptureentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry>();
        c->parent = this;
        rttmonstatscaptureentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonstatscapturetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonstatscaptureentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonstatscapturetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonstatscapturetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonstatscapturetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonStatsCaptureEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::Rttmonstatscaptureentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonstatscapturestarttimeindex{YType::uint32, "rttMonStatsCaptureStartTimeIndex"},
    rttmonstatscapturepathindex{YType::int32, "rttMonStatsCapturePathIndex"},
    rttmonstatscapturehopindex{YType::int32, "rttMonStatsCaptureHopIndex"},
    rttmonstatscapturedistindex{YType::int32, "rttMonStatsCaptureDistIndex"},
    rttmonstatscapturecompletions{YType::int32, "rttMonStatsCaptureCompletions"},
    rttmonstatscapturecompletiontimemax{YType::uint32, "rttMonStatsCaptureCompletionTimeMax"},
    rttmonstatscapturecompletiontimemin{YType::uint32, "rttMonStatsCaptureCompletionTimeMin"},
    rttmonstatscaptureoverthresholds{YType::int32, "rttMonStatsCaptureOverThresholds"},
    rttmonstatscapturesumcompletiontime{YType::uint32, "rttMonStatsCaptureSumCompletionTime"},
    rttmonstatscapturesumcompletiontime2high{YType::uint32, "rttMonStatsCaptureSumCompletionTime2High"},
    rttmonstatscapturesumcompletiontime2low{YType::uint32, "rttMonStatsCaptureSumCompletionTime2Low"}
{

    yang_name = "rttMonStatsCaptureEntry"; yang_parent_name = "rttMonStatsCaptureTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::~Rttmonstatscaptureentry()
{
}

bool CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonstatscapturestarttimeindex.is_set
	|| rttmonstatscapturepathindex.is_set
	|| rttmonstatscapturehopindex.is_set
	|| rttmonstatscapturedistindex.is_set
	|| rttmonstatscapturecompletions.is_set
	|| rttmonstatscapturecompletiontimemax.is_set
	|| rttmonstatscapturecompletiontimemin.is_set
	|| rttmonstatscaptureoverthresholds.is_set
	|| rttmonstatscapturesumcompletiontime.is_set
	|| rttmonstatscapturesumcompletiontime2high.is_set
	|| rttmonstatscapturesumcompletiontime2low.is_set;
}

bool CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonstatscapturestarttimeindex.yfilter)
	|| ydk::is_set(rttmonstatscapturepathindex.yfilter)
	|| ydk::is_set(rttmonstatscapturehopindex.yfilter)
	|| ydk::is_set(rttmonstatscapturedistindex.yfilter)
	|| ydk::is_set(rttmonstatscapturecompletions.yfilter)
	|| ydk::is_set(rttmonstatscapturecompletiontimemax.yfilter)
	|| ydk::is_set(rttmonstatscapturecompletiontimemin.yfilter)
	|| ydk::is_set(rttmonstatscaptureoverthresholds.yfilter)
	|| ydk::is_set(rttmonstatscapturesumcompletiontime.yfilter)
	|| ydk::is_set(rttmonstatscapturesumcompletiontime2high.yfilter)
	|| ydk::is_set(rttmonstatscapturesumcompletiontime2low.yfilter);
}

std::string CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonStatsCaptureTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCaptureEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonStatsCaptureStartTimeIndex='" <<rttmonstatscapturestarttimeindex <<"']" <<"[rttMonStatsCapturePathIndex='" <<rttmonstatscapturepathindex <<"']" <<"[rttMonStatsCaptureHopIndex='" <<rttmonstatscapturehopindex <<"']" <<"[rttMonStatsCaptureDistIndex='" <<rttmonstatscapturedistindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonstatscapturestarttimeindex.is_set || is_set(rttmonstatscapturestarttimeindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturestarttimeindex.get_name_leafdata());
    if (rttmonstatscapturepathindex.is_set || is_set(rttmonstatscapturepathindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturepathindex.get_name_leafdata());
    if (rttmonstatscapturehopindex.is_set || is_set(rttmonstatscapturehopindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturehopindex.get_name_leafdata());
    if (rttmonstatscapturedistindex.is_set || is_set(rttmonstatscapturedistindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturedistindex.get_name_leafdata());
    if (rttmonstatscapturecompletions.is_set || is_set(rttmonstatscapturecompletions.yfilter)) leaf_name_data.push_back(rttmonstatscapturecompletions.get_name_leafdata());
    if (rttmonstatscapturecompletiontimemax.is_set || is_set(rttmonstatscapturecompletiontimemax.yfilter)) leaf_name_data.push_back(rttmonstatscapturecompletiontimemax.get_name_leafdata());
    if (rttmonstatscapturecompletiontimemin.is_set || is_set(rttmonstatscapturecompletiontimemin.yfilter)) leaf_name_data.push_back(rttmonstatscapturecompletiontimemin.get_name_leafdata());
    if (rttmonstatscaptureoverthresholds.is_set || is_set(rttmonstatscaptureoverthresholds.yfilter)) leaf_name_data.push_back(rttmonstatscaptureoverthresholds.get_name_leafdata());
    if (rttmonstatscapturesumcompletiontime.is_set || is_set(rttmonstatscapturesumcompletiontime.yfilter)) leaf_name_data.push_back(rttmonstatscapturesumcompletiontime.get_name_leafdata());
    if (rttmonstatscapturesumcompletiontime2high.is_set || is_set(rttmonstatscapturesumcompletiontime2high.yfilter)) leaf_name_data.push_back(rttmonstatscapturesumcompletiontime2high.get_name_leafdata());
    if (rttmonstatscapturesumcompletiontime2low.is_set || is_set(rttmonstatscapturesumcompletiontime2low.yfilter)) leaf_name_data.push_back(rttmonstatscapturesumcompletiontime2low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rttMonStatsCaptureSumCompletionTime2High")
    {
        rttmonstatscapturesumcompletiontime2high = value;
        rttmonstatscapturesumcompletiontime2high.value_namespace = name_space;
        rttmonstatscapturesumcompletiontime2high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime2Low")
    {
        rttmonstatscapturesumcompletiontime2low = value;
        rttmonstatscapturesumcompletiontime2low.value_namespace = name_space;
        rttmonstatscapturesumcompletiontime2low.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "rttMonStatsCaptureCompletionTimeMax")
    {
        rttmonstatscapturecompletiontimemax.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureCompletionTimeMin")
    {
        rttmonstatscapturecompletiontimemin.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureOverThresholds")
    {
        rttmonstatscaptureoverthresholds.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime")
    {
        rttmonstatscapturesumcompletiontime.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime2High")
    {
        rttmonstatscapturesumcompletiontime2high.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCaptureSumCompletionTime2Low")
    {
        rttmonstatscapturesumcompletiontime2low.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonstatscapturetable::Rttmonstatscaptureentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonStatsCaptureStartTimeIndex" || name == "rttMonStatsCapturePathIndex" || name == "rttMonStatsCaptureHopIndex" || name == "rttMonStatsCaptureDistIndex" || name == "rttMonStatsCaptureCompletions" || name == "rttMonStatsCaptureCompletionTimeMax" || name == "rttMonStatsCaptureCompletionTimeMin" || name == "rttMonStatsCaptureOverThresholds" || name == "rttMonStatsCaptureSumCompletionTime" || name == "rttMonStatsCaptureSumCompletionTime2High" || name == "rttMonStatsCaptureSumCompletionTime2Low")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollecttable()
{

    yang_name = "rttMonStatsCollectTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonstatscollecttable::~Rttmonstatscollecttable()
{
}

bool CISCORTTMONMIB::Rttmonstatscollecttable::has_data() const
{
    for (std::size_t index=0; index<rttmonstatscollectentry.size(); index++)
    {
        if(rttmonstatscollectentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonstatscollecttable::has_operation() const
{
    for (std::size_t index=0; index<rttmonstatscollectentry.size(); index++)
    {
        if(rttmonstatscollectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonstatscollecttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonstatscollecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCollectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonstatscollecttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonstatscollecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonStatsCollectEntry")
    {
        for(auto const & c : rttmonstatscollectentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry>();
        c->parent = this;
        rttmonstatscollectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonstatscollecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonstatscollectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonstatscollecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonstatscollecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonstatscollecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonStatsCollectEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::Rttmonstatscollectentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonstatscapturestarttimeindex{YType::str, "rttMonStatsCaptureStartTimeIndex"},
    rttmonstatscapturepathindex{YType::str, "rttMonStatsCapturePathIndex"},
    rttmonstatscapturehopindex{YType::str, "rttMonStatsCaptureHopIndex"},
    rttmoncontrolenableerrors{YType::int32, "rttMonControlEnableErrors"},
    rttmonstatscollectaddress{YType::str, "rttMonStatsCollectAddress"},
    rttmonstatscollectbusies{YType::int32, "rttMonStatsCollectBusies"},
    rttmonstatscollectctrlenerrors{YType::int32, "rttMonStatsCollectCtrlEnErrors"},
    rttmonstatscollectdrops{YType::int32, "rttMonStatsCollectDrops"},
    rttmonstatscollectnoconnections{YType::int32, "rttMonStatsCollectNoConnections"},
    rttmonstatscollectnumdisconnects{YType::int32, "rttMonStatsCollectNumDisconnects"},
    rttmonstatscollectretrieveerrors{YType::int32, "rttMonStatsCollectRetrieveErrors"},
    rttmonstatscollectsequenceerrors{YType::int32, "rttMonStatsCollectSequenceErrors"},
    rttmonstatscollecttimeouts{YType::int32, "rttMonStatsCollectTimeouts"},
    rttmonstatscollectverifyerrors{YType::int32, "rttMonStatsCollectVerifyErrors"},
    rttmonstatsretrieveerrors{YType::int32, "rttMonStatsRetrieveErrors"}
{

    yang_name = "rttMonStatsCollectEntry"; yang_parent_name = "rttMonStatsCollectTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::~Rttmonstatscollectentry()
{
}

bool CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonstatscapturestarttimeindex.is_set
	|| rttmonstatscapturepathindex.is_set
	|| rttmonstatscapturehopindex.is_set
	|| rttmoncontrolenableerrors.is_set
	|| rttmonstatscollectaddress.is_set
	|| rttmonstatscollectbusies.is_set
	|| rttmonstatscollectctrlenerrors.is_set
	|| rttmonstatscollectdrops.is_set
	|| rttmonstatscollectnoconnections.is_set
	|| rttmonstatscollectnumdisconnects.is_set
	|| rttmonstatscollectretrieveerrors.is_set
	|| rttmonstatscollectsequenceerrors.is_set
	|| rttmonstatscollecttimeouts.is_set
	|| rttmonstatscollectverifyerrors.is_set
	|| rttmonstatsretrieveerrors.is_set;
}

bool CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonstatscapturestarttimeindex.yfilter)
	|| ydk::is_set(rttmonstatscapturepathindex.yfilter)
	|| ydk::is_set(rttmonstatscapturehopindex.yfilter)
	|| ydk::is_set(rttmoncontrolenableerrors.yfilter)
	|| ydk::is_set(rttmonstatscollectaddress.yfilter)
	|| ydk::is_set(rttmonstatscollectbusies.yfilter)
	|| ydk::is_set(rttmonstatscollectctrlenerrors.yfilter)
	|| ydk::is_set(rttmonstatscollectdrops.yfilter)
	|| ydk::is_set(rttmonstatscollectnoconnections.yfilter)
	|| ydk::is_set(rttmonstatscollectnumdisconnects.yfilter)
	|| ydk::is_set(rttmonstatscollectretrieveerrors.yfilter)
	|| ydk::is_set(rttmonstatscollectsequenceerrors.yfilter)
	|| ydk::is_set(rttmonstatscollecttimeouts.yfilter)
	|| ydk::is_set(rttmonstatscollectverifyerrors.yfilter)
	|| ydk::is_set(rttmonstatsretrieveerrors.yfilter);
}

std::string CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonStatsCollectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsCollectEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonStatsCaptureStartTimeIndex='" <<rttmonstatscapturestarttimeindex <<"']" <<"[rttMonStatsCapturePathIndex='" <<rttmonstatscapturepathindex <<"']" <<"[rttMonStatsCaptureHopIndex='" <<rttmonstatscapturehopindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonstatscapturestarttimeindex.is_set || is_set(rttmonstatscapturestarttimeindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturestarttimeindex.get_name_leafdata());
    if (rttmonstatscapturepathindex.is_set || is_set(rttmonstatscapturepathindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturepathindex.get_name_leafdata());
    if (rttmonstatscapturehopindex.is_set || is_set(rttmonstatscapturehopindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturehopindex.get_name_leafdata());
    if (rttmoncontrolenableerrors.is_set || is_set(rttmoncontrolenableerrors.yfilter)) leaf_name_data.push_back(rttmoncontrolenableerrors.get_name_leafdata());
    if (rttmonstatscollectaddress.is_set || is_set(rttmonstatscollectaddress.yfilter)) leaf_name_data.push_back(rttmonstatscollectaddress.get_name_leafdata());
    if (rttmonstatscollectbusies.is_set || is_set(rttmonstatscollectbusies.yfilter)) leaf_name_data.push_back(rttmonstatscollectbusies.get_name_leafdata());
    if (rttmonstatscollectctrlenerrors.is_set || is_set(rttmonstatscollectctrlenerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectctrlenerrors.get_name_leafdata());
    if (rttmonstatscollectdrops.is_set || is_set(rttmonstatscollectdrops.yfilter)) leaf_name_data.push_back(rttmonstatscollectdrops.get_name_leafdata());
    if (rttmonstatscollectnoconnections.is_set || is_set(rttmonstatscollectnoconnections.yfilter)) leaf_name_data.push_back(rttmonstatscollectnoconnections.get_name_leafdata());
    if (rttmonstatscollectnumdisconnects.is_set || is_set(rttmonstatscollectnumdisconnects.yfilter)) leaf_name_data.push_back(rttmonstatscollectnumdisconnects.get_name_leafdata());
    if (rttmonstatscollectretrieveerrors.is_set || is_set(rttmonstatscollectretrieveerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectretrieveerrors.get_name_leafdata());
    if (rttmonstatscollectsequenceerrors.is_set || is_set(rttmonstatscollectsequenceerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectsequenceerrors.get_name_leafdata());
    if (rttmonstatscollecttimeouts.is_set || is_set(rttmonstatscollecttimeouts.yfilter)) leaf_name_data.push_back(rttmonstatscollecttimeouts.get_name_leafdata());
    if (rttmonstatscollectverifyerrors.is_set || is_set(rttmonstatscollectverifyerrors.yfilter)) leaf_name_data.push_back(rttmonstatscollectverifyerrors.get_name_leafdata());
    if (rttmonstatsretrieveerrors.is_set || is_set(rttmonstatsretrieveerrors.yfilter)) leaf_name_data.push_back(rttmonstatsretrieveerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rttMonControlEnableErrors")
    {
        rttmoncontrolenableerrors = value;
        rttmoncontrolenableerrors.value_namespace = name_space;
        rttmoncontrolenableerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectAddress")
    {
        rttmonstatscollectaddress = value;
        rttmonstatscollectaddress.value_namespace = name_space;
        rttmonstatscollectaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectBusies")
    {
        rttmonstatscollectbusies = value;
        rttmonstatscollectbusies.value_namespace = name_space;
        rttmonstatscollectbusies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectCtrlEnErrors")
    {
        rttmonstatscollectctrlenerrors = value;
        rttmonstatscollectctrlenerrors.value_namespace = name_space;
        rttmonstatscollectctrlenerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectDrops")
    {
        rttmonstatscollectdrops = value;
        rttmonstatscollectdrops.value_namespace = name_space;
        rttmonstatscollectdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectNoConnections")
    {
        rttmonstatscollectnoconnections = value;
        rttmonstatscollectnoconnections.value_namespace = name_space;
        rttmonstatscollectnoconnections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectNumDisconnects")
    {
        rttmonstatscollectnumdisconnects = value;
        rttmonstatscollectnumdisconnects.value_namespace = name_space;
        rttmonstatscollectnumdisconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectRetrieveErrors")
    {
        rttmonstatscollectretrieveerrors = value;
        rttmonstatscollectretrieveerrors.value_namespace = name_space;
        rttmonstatscollectretrieveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectSequenceErrors")
    {
        rttmonstatscollectsequenceerrors = value;
        rttmonstatscollectsequenceerrors.value_namespace = name_space;
        rttmonstatscollectsequenceerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectTimeouts")
    {
        rttmonstatscollecttimeouts = value;
        rttmonstatscollecttimeouts.value_namespace = name_space;
        rttmonstatscollecttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsCollectVerifyErrors")
    {
        rttmonstatscollectverifyerrors = value;
        rttmonstatscollectverifyerrors.value_namespace = name_space;
        rttmonstatscollectverifyerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMonStatsRetrieveErrors")
    {
        rttmonstatsretrieveerrors = value;
        rttmonstatsretrieveerrors.value_namespace = name_space;
        rttmonstatsretrieveerrors.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "rttMonControlEnableErrors")
    {
        rttmoncontrolenableerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectAddress")
    {
        rttmonstatscollectaddress.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectBusies")
    {
        rttmonstatscollectbusies.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectCtrlEnErrors")
    {
        rttmonstatscollectctrlenerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectDrops")
    {
        rttmonstatscollectdrops.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectNoConnections")
    {
        rttmonstatscollectnoconnections.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectNumDisconnects")
    {
        rttmonstatscollectnumdisconnects.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectRetrieveErrors")
    {
        rttmonstatscollectretrieveerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectSequenceErrors")
    {
        rttmonstatscollectsequenceerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectTimeouts")
    {
        rttmonstatscollecttimeouts.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsCollectVerifyErrors")
    {
        rttmonstatscollectverifyerrors.yfilter = yfilter;
    }
    if(value_path == "rttMonStatsRetrieveErrors")
    {
        rttmonstatsretrieveerrors.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmonstatscollecttable::Rttmonstatscollectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonStatsCaptureStartTimeIndex" || name == "rttMonStatsCapturePathIndex" || name == "rttMonStatsCaptureHopIndex" || name == "rttMonControlEnableErrors" || name == "rttMonStatsCollectAddress" || name == "rttMonStatsCollectBusies" || name == "rttMonStatsCollectCtrlEnErrors" || name == "rttMonStatsCollectDrops" || name == "rttMonStatsCollectNoConnections" || name == "rttMonStatsCollectNumDisconnects" || name == "rttMonStatsCollectRetrieveErrors" || name == "rttMonStatsCollectSequenceErrors" || name == "rttMonStatsCollectTimeouts" || name == "rttMonStatsCollectVerifyErrors" || name == "rttMonStatsRetrieveErrors")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalstable()
{

    yang_name = "rttMonStatsTotalsTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonstatstotalstable::~Rttmonstatstotalstable()
{
}

bool CISCORTTMONMIB::Rttmonstatstotalstable::has_data() const
{
    for (std::size_t index=0; index<rttmonstatstotalsentry.size(); index++)
    {
        if(rttmonstatstotalsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmonstatstotalstable::has_operation() const
{
    for (std::size_t index=0; index<rttmonstatstotalsentry.size(); index++)
    {
        if(rttmonstatstotalsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmonstatstotalstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonstatstotalstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsTotalsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonstatstotalstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonstatstotalstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMonStatsTotalsEntry")
    {
        for(auto const & c : rttmonstatstotalsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry>();
        c->parent = this;
        rttmonstatstotalsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonstatstotalstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmonstatstotalsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmonstatstotalstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmonstatstotalstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmonstatstotalstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonStatsTotalsEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::Rttmonstatstotalsentry()
    :
    rttmonctrladminindex{YType::str, "rttMonCtrlAdminIndex"},
    rttmonstatscapturestarttimeindex{YType::str, "rttMonStatsCaptureStartTimeIndex"},
    rttmonstatstotalselapsedtime{YType::int32, "rttMonStatsTotalsElapsedTime"},
    rttmonstatstotalsinitiations{YType::int32, "rttMonStatsTotalsInitiations"}
{

    yang_name = "rttMonStatsTotalsEntry"; yang_parent_name = "rttMonStatsTotalsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::~Rttmonstatstotalsentry()
{
}

bool CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::has_data() const
{
    return rttmonctrladminindex.is_set
	|| rttmonstatscapturestarttimeindex.is_set
	|| rttmonstatstotalselapsedtime.is_set
	|| rttmonstatstotalsinitiations.is_set;
}

bool CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmonctrladminindex.yfilter)
	|| ydk::is_set(rttmonstatscapturestarttimeindex.yfilter)
	|| ydk::is_set(rttmonstatstotalselapsedtime.yfilter)
	|| ydk::is_set(rttmonstatstotalsinitiations.yfilter);
}

std::string CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMonStatsTotalsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMonStatsTotalsEntry" <<"[rttMonCtrlAdminIndex='" <<rttmonctrladminindex <<"']" <<"[rttMonStatsCaptureStartTimeIndex='" <<rttmonstatscapturestarttimeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmonctrladminindex.is_set || is_set(rttmonctrladminindex.yfilter)) leaf_name_data.push_back(rttmonctrladminindex.get_name_leafdata());
    if (rttmonstatscapturestarttimeindex.is_set || is_set(rttmonstatscapturestarttimeindex.yfilter)) leaf_name_data.push_back(rttmonstatscapturestarttimeindex.get_name_leafdata());
    if (rttmonstatstotalselapsedtime.is_set || is_set(rttmonstatstotalselapsedtime.yfilter)) leaf_name_data.push_back(rttmonstatstotalselapsedtime.get_name_leafdata());
    if (rttmonstatstotalsinitiations.is_set || is_set(rttmonstatstotalsinitiations.yfilter)) leaf_name_data.push_back(rttmonstatstotalsinitiations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCORTTMONMIB::Rttmonstatstotalstable::Rttmonstatstotalsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMonCtrlAdminIndex" || name == "rttMonStatsCaptureStartTimeIndex" || name == "rttMonStatsTotalsElapsedTime" || name == "rttMonStatsTotalsInitiations")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrltable()
{

    yang_name = "rttMplsVpnMonCtrlTable"; yang_parent_name = "CISCO-RTTMON-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmplsvpnmonctrltable::~Rttmplsvpnmonctrltable()
{
}

bool CISCORTTMONMIB::Rttmplsvpnmonctrltable::has_data() const
{
    for (std::size_t index=0; index<rttmplsvpnmonctrlentry.size(); index++)
    {
        if(rttmplsvpnmonctrlentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCORTTMONMIB::Rttmplsvpnmonctrltable::has_operation() const
{
    for (std::size_t index=0; index<rttmplsvpnmonctrlentry.size(); index++)
    {
        if(rttmplsvpnmonctrlentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCORTTMONMIB::Rttmplsvpnmonctrltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmplsvpnmonctrltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMplsVpnMonCtrlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmplsvpnmonctrltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmplsvpnmonctrltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttMplsVpnMonCtrlEntry")
    {
        for(auto const & c : rttmplsvpnmonctrlentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry>();
        c->parent = this;
        rttmplsvpnmonctrlentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmplsvpnmonctrltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rttmplsvpnmonctrlentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCORTTMONMIB::Rttmplsvpnmonctrltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORTTMONMIB::Rttmplsvpnmonctrltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCORTTMONMIB::Rttmplsvpnmonctrltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMplsVpnMonCtrlEntry")
        return true;
    return false;
}

CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonctrlentry()
    :
    rttmplsvpnmonctrlindex{YType::int32, "rttMplsVpnMonCtrlIndex"},
    rttmplsvpnmonctrldelscanfactor{YType::int32, "rttMplsVpnMonCtrlDelScanFactor"},
    rttmplsvpnmonctrlexp{YType::int32, "rttMplsVpnMonCtrlEXP"},
    rttmplsvpnmonctrllpd{YType::boolean, "rttMplsVpnMonCtrlLpd"},
    rttmplsvpnmonctrllpdcomptime{YType::int32, "rttMplsVpnMonCtrlLpdCompTime"},
    rttmplsvpnmonctrllpdgrplist{YType::str, "rttMplsVpnMonCtrlLpdGrpList"},
    rttmplsvpnmonctrlprobelist{YType::str, "rttMplsVpnMonCtrlProbeList"},
    rttmplsvpnmonctrlrequestsize{YType::int32, "rttMplsVpnMonCtrlRequestSize"},
    rttmplsvpnmonctrlrtttype{YType::enumeration, "rttMplsVpnMonCtrlRttType"},
    rttmplsvpnmonctrlscaninterval{YType::int32, "rttMplsVpnMonCtrlScanInterval"},
    rttmplsvpnmonctrlstatus{YType::enumeration, "rttMplsVpnMonCtrlStatus"},
    rttmplsvpnmonctrlstoragetype{YType::enumeration, "rttMplsVpnMonCtrlStorageType"},
    rttmplsvpnmonctrltag{YType::str, "rttMplsVpnMonCtrlTag"},
    rttmplsvpnmonctrlthreshold{YType::int32, "rttMplsVpnMonCtrlThreshold"},
    rttmplsvpnmonctrltimeout{YType::int32, "rttMplsVpnMonCtrlTimeout"},
    rttmplsvpnmonctrlverifydata{YType::boolean, "rttMplsVpnMonCtrlVerifyData"},
    rttmplsvpnmonctrlvrfname{YType::str, "rttMplsVpnMonCtrlVrfName"},
    rttmplsvpnmonreactactiontype{YType::enumeration, "rttMplsVpnMonReactActionType"},
    rttmplsvpnmonreactconnectionenable{YType::boolean, "rttMplsVpnMonReactConnectionEnable"},
    rttmplsvpnmonreactlpdnotifytype{YType::enumeration, "rttMplsVpnMonReactLpdNotifyType"},
    rttmplsvpnmonreactlpdretrycount{YType::int32, "rttMplsVpnMonReactLpdRetryCount"},
    rttmplsvpnmonreactthresholdcount{YType::int32, "rttMplsVpnMonReactThresholdCount"},
    rttmplsvpnmonreactthresholdtype{YType::enumeration, "rttMplsVpnMonReactThresholdType"},
    rttmplsvpnmonreacttimeoutenable{YType::boolean, "rttMplsVpnMonReactTimeoutEnable"},
    rttmplsvpnmonschedulefrequency{YType::int32, "rttMplsVpnMonScheduleFrequency"},
    rttmplsvpnmonscheduleperiod{YType::int32, "rttMplsVpnMonSchedulePeriod"},
    rttmplsvpnmonschedulerttstarttime{YType::uint32, "rttMplsVpnMonScheduleRttStartTime"},
    rttmplsvpnmontypedestport{YType::int32, "rttMplsVpnMonTypeDestPort"},
    rttmplsvpnmontypeinterval{YType::int32, "rttMplsVpnMonTypeInterval"},
    rttmplsvpnmontypelpdechointerval{YType::int32, "rttMplsVpnMonTypeLpdEchoInterval"},
    rttmplsvpnmontypelpdechonullshim{YType::boolean, "rttMplsVpnMonTypeLpdEchoNullShim"},
    rttmplsvpnmontypelpdechotimeout{YType::int32, "rttMplsVpnMonTypeLpdEchoTimeout"},
    rttmplsvpnmontypelpdmaxsessions{YType::int32, "rttMplsVpnMonTypeLpdMaxSessions"},
    rttmplsvpnmontypelpdscanperiod{YType::int32, "rttMplsVpnMonTypeLpdScanPeriod"},
    rttmplsvpnmontypelpdsesstimeout{YType::int32, "rttMplsVpnMonTypeLpdSessTimeout"},
    rttmplsvpnmontypelpdstathours{YType::int32, "rttMplsVpnMonTypeLpdStatHours"},
    rttmplsvpnmontypelspreplydscp{YType::int32, "rttMplsVpnMonTypeLSPReplyDscp"},
    rttmplsvpnmontypelspreplymode{YType::enumeration, "rttMplsVpnMonTypeLSPReplyMode"},
    rttmplsvpnmontypelspselector{YType::str, "rttMplsVpnMonTypeLspSelector"},
    rttmplsvpnmontypelspttl{YType::int32, "rttMplsVpnMonTypeLSPTTL"},
    rttmplsvpnmontypenumpackets{YType::int32, "rttMplsVpnMonTypeNumPackets"},
    rttmplsvpnmontypesecfreqtype{YType::enumeration, "rttMplsVpnMonTypeSecFreqType"},
    rttmplsvpnmontypesecfreqvalue{YType::int32, "rttMplsVpnMonTypeSecFreqValue"}
{

    yang_name = "rttMplsVpnMonCtrlEntry"; yang_parent_name = "rttMplsVpnMonCtrlTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::~Rttmplsvpnmonctrlentry()
{
}

bool CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::has_data() const
{
    return rttmplsvpnmonctrlindex.is_set
	|| rttmplsvpnmonctrldelscanfactor.is_set
	|| rttmplsvpnmonctrlexp.is_set
	|| rttmplsvpnmonctrllpd.is_set
	|| rttmplsvpnmonctrllpdcomptime.is_set
	|| rttmplsvpnmonctrllpdgrplist.is_set
	|| rttmplsvpnmonctrlprobelist.is_set
	|| rttmplsvpnmonctrlrequestsize.is_set
	|| rttmplsvpnmonctrlrtttype.is_set
	|| rttmplsvpnmonctrlscaninterval.is_set
	|| rttmplsvpnmonctrlstatus.is_set
	|| rttmplsvpnmonctrlstoragetype.is_set
	|| rttmplsvpnmonctrltag.is_set
	|| rttmplsvpnmonctrlthreshold.is_set
	|| rttmplsvpnmonctrltimeout.is_set
	|| rttmplsvpnmonctrlverifydata.is_set
	|| rttmplsvpnmonctrlvrfname.is_set
	|| rttmplsvpnmonreactactiontype.is_set
	|| rttmplsvpnmonreactconnectionenable.is_set
	|| rttmplsvpnmonreactlpdnotifytype.is_set
	|| rttmplsvpnmonreactlpdretrycount.is_set
	|| rttmplsvpnmonreactthresholdcount.is_set
	|| rttmplsvpnmonreactthresholdtype.is_set
	|| rttmplsvpnmonreacttimeoutenable.is_set
	|| rttmplsvpnmonschedulefrequency.is_set
	|| rttmplsvpnmonscheduleperiod.is_set
	|| rttmplsvpnmonschedulerttstarttime.is_set
	|| rttmplsvpnmontypedestport.is_set
	|| rttmplsvpnmontypeinterval.is_set
	|| rttmplsvpnmontypelpdechointerval.is_set
	|| rttmplsvpnmontypelpdechonullshim.is_set
	|| rttmplsvpnmontypelpdechotimeout.is_set
	|| rttmplsvpnmontypelpdmaxsessions.is_set
	|| rttmplsvpnmontypelpdscanperiod.is_set
	|| rttmplsvpnmontypelpdsesstimeout.is_set
	|| rttmplsvpnmontypelpdstathours.is_set
	|| rttmplsvpnmontypelspreplydscp.is_set
	|| rttmplsvpnmontypelspreplymode.is_set
	|| rttmplsvpnmontypelspselector.is_set
	|| rttmplsvpnmontypelspttl.is_set
	|| rttmplsvpnmontypenumpackets.is_set
	|| rttmplsvpnmontypesecfreqtype.is_set
	|| rttmplsvpnmontypesecfreqvalue.is_set;
}

bool CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlindex.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrldelscanfactor.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlexp.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrllpd.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrllpdcomptime.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrllpdgrplist.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlprobelist.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlrequestsize.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlrtttype.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlscaninterval.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlstatus.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlstoragetype.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrltag.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlthreshold.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrltimeout.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlverifydata.yfilter)
	|| ydk::is_set(rttmplsvpnmonctrlvrfname.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactactiontype.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactconnectionenable.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactlpdnotifytype.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactlpdretrycount.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactthresholdcount.yfilter)
	|| ydk::is_set(rttmplsvpnmonreactthresholdtype.yfilter)
	|| ydk::is_set(rttmplsvpnmonreacttimeoutenable.yfilter)
	|| ydk::is_set(rttmplsvpnmonschedulefrequency.yfilter)
	|| ydk::is_set(rttmplsvpnmonscheduleperiod.yfilter)
	|| ydk::is_set(rttmplsvpnmonschedulerttstarttime.yfilter)
	|| ydk::is_set(rttmplsvpnmontypedestport.yfilter)
	|| ydk::is_set(rttmplsvpnmontypeinterval.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdechointerval.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdechonullshim.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdechotimeout.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdmaxsessions.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdscanperiod.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdsesstimeout.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelpdstathours.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspreplydscp.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspreplymode.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspselector.yfilter)
	|| ydk::is_set(rttmplsvpnmontypelspttl.yfilter)
	|| ydk::is_set(rttmplsvpnmontypenumpackets.yfilter)
	|| ydk::is_set(rttmplsvpnmontypesecfreqtype.yfilter)
	|| ydk::is_set(rttmplsvpnmontypesecfreqvalue.yfilter);
}

std::string CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RTTMON-MIB:CISCO-RTTMON-MIB/rttMplsVpnMonCtrlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttMplsVpnMonCtrlEntry" <<"[rttMplsVpnMonCtrlIndex='" <<rttmplsvpnmonctrlindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rttmplsvpnmonctrlindex.is_set || is_set(rttmplsvpnmonctrlindex.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlindex.get_name_leafdata());
    if (rttmplsvpnmonctrldelscanfactor.is_set || is_set(rttmplsvpnmonctrldelscanfactor.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrldelscanfactor.get_name_leafdata());
    if (rttmplsvpnmonctrlexp.is_set || is_set(rttmplsvpnmonctrlexp.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlexp.get_name_leafdata());
    if (rttmplsvpnmonctrllpd.is_set || is_set(rttmplsvpnmonctrllpd.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrllpd.get_name_leafdata());
    if (rttmplsvpnmonctrllpdcomptime.is_set || is_set(rttmplsvpnmonctrllpdcomptime.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrllpdcomptime.get_name_leafdata());
    if (rttmplsvpnmonctrllpdgrplist.is_set || is_set(rttmplsvpnmonctrllpdgrplist.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrllpdgrplist.get_name_leafdata());
    if (rttmplsvpnmonctrlprobelist.is_set || is_set(rttmplsvpnmonctrlprobelist.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlprobelist.get_name_leafdata());
    if (rttmplsvpnmonctrlrequestsize.is_set || is_set(rttmplsvpnmonctrlrequestsize.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlrequestsize.get_name_leafdata());
    if (rttmplsvpnmonctrlrtttype.is_set || is_set(rttmplsvpnmonctrlrtttype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlrtttype.get_name_leafdata());
    if (rttmplsvpnmonctrlscaninterval.is_set || is_set(rttmplsvpnmonctrlscaninterval.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlscaninterval.get_name_leafdata());
    if (rttmplsvpnmonctrlstatus.is_set || is_set(rttmplsvpnmonctrlstatus.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlstatus.get_name_leafdata());
    if (rttmplsvpnmonctrlstoragetype.is_set || is_set(rttmplsvpnmonctrlstoragetype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlstoragetype.get_name_leafdata());
    if (rttmplsvpnmonctrltag.is_set || is_set(rttmplsvpnmonctrltag.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrltag.get_name_leafdata());
    if (rttmplsvpnmonctrlthreshold.is_set || is_set(rttmplsvpnmonctrlthreshold.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlthreshold.get_name_leafdata());
    if (rttmplsvpnmonctrltimeout.is_set || is_set(rttmplsvpnmonctrltimeout.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrltimeout.get_name_leafdata());
    if (rttmplsvpnmonctrlverifydata.is_set || is_set(rttmplsvpnmonctrlverifydata.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlverifydata.get_name_leafdata());
    if (rttmplsvpnmonctrlvrfname.is_set || is_set(rttmplsvpnmonctrlvrfname.yfilter)) leaf_name_data.push_back(rttmplsvpnmonctrlvrfname.get_name_leafdata());
    if (rttmplsvpnmonreactactiontype.is_set || is_set(rttmplsvpnmonreactactiontype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactactiontype.get_name_leafdata());
    if (rttmplsvpnmonreactconnectionenable.is_set || is_set(rttmplsvpnmonreactconnectionenable.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactconnectionenable.get_name_leafdata());
    if (rttmplsvpnmonreactlpdnotifytype.is_set || is_set(rttmplsvpnmonreactlpdnotifytype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactlpdnotifytype.get_name_leafdata());
    if (rttmplsvpnmonreactlpdretrycount.is_set || is_set(rttmplsvpnmonreactlpdretrycount.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactlpdretrycount.get_name_leafdata());
    if (rttmplsvpnmonreactthresholdcount.is_set || is_set(rttmplsvpnmonreactthresholdcount.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactthresholdcount.get_name_leafdata());
    if (rttmplsvpnmonreactthresholdtype.is_set || is_set(rttmplsvpnmonreactthresholdtype.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreactthresholdtype.get_name_leafdata());
    if (rttmplsvpnmonreacttimeoutenable.is_set || is_set(rttmplsvpnmonreacttimeoutenable.yfilter)) leaf_name_data.push_back(rttmplsvpnmonreacttimeoutenable.get_name_leafdata());
    if (rttmplsvpnmonschedulefrequency.is_set || is_set(rttmplsvpnmonschedulefrequency.yfilter)) leaf_name_data.push_back(rttmplsvpnmonschedulefrequency.get_name_leafdata());
    if (rttmplsvpnmonscheduleperiod.is_set || is_set(rttmplsvpnmonscheduleperiod.yfilter)) leaf_name_data.push_back(rttmplsvpnmonscheduleperiod.get_name_leafdata());
    if (rttmplsvpnmonschedulerttstarttime.is_set || is_set(rttmplsvpnmonschedulerttstarttime.yfilter)) leaf_name_data.push_back(rttmplsvpnmonschedulerttstarttime.get_name_leafdata());
    if (rttmplsvpnmontypedestport.is_set || is_set(rttmplsvpnmontypedestport.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypedestport.get_name_leafdata());
    if (rttmplsvpnmontypeinterval.is_set || is_set(rttmplsvpnmontypeinterval.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypeinterval.get_name_leafdata());
    if (rttmplsvpnmontypelpdechointerval.is_set || is_set(rttmplsvpnmontypelpdechointerval.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdechointerval.get_name_leafdata());
    if (rttmplsvpnmontypelpdechonullshim.is_set || is_set(rttmplsvpnmontypelpdechonullshim.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdechonullshim.get_name_leafdata());
    if (rttmplsvpnmontypelpdechotimeout.is_set || is_set(rttmplsvpnmontypelpdechotimeout.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdechotimeout.get_name_leafdata());
    if (rttmplsvpnmontypelpdmaxsessions.is_set || is_set(rttmplsvpnmontypelpdmaxsessions.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdmaxsessions.get_name_leafdata());
    if (rttmplsvpnmontypelpdscanperiod.is_set || is_set(rttmplsvpnmontypelpdscanperiod.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdscanperiod.get_name_leafdata());
    if (rttmplsvpnmontypelpdsesstimeout.is_set || is_set(rttmplsvpnmontypelpdsesstimeout.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdsesstimeout.get_name_leafdata());
    if (rttmplsvpnmontypelpdstathours.is_set || is_set(rttmplsvpnmontypelpdstathours.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelpdstathours.get_name_leafdata());
    if (rttmplsvpnmontypelspreplydscp.is_set || is_set(rttmplsvpnmontypelspreplydscp.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspreplydscp.get_name_leafdata());
    if (rttmplsvpnmontypelspreplymode.is_set || is_set(rttmplsvpnmontypelspreplymode.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspreplymode.get_name_leafdata());
    if (rttmplsvpnmontypelspselector.is_set || is_set(rttmplsvpnmontypelspselector.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspselector.get_name_leafdata());
    if (rttmplsvpnmontypelspttl.is_set || is_set(rttmplsvpnmontypelspttl.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypelspttl.get_name_leafdata());
    if (rttmplsvpnmontypenumpackets.is_set || is_set(rttmplsvpnmontypenumpackets.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypenumpackets.get_name_leafdata());
    if (rttmplsvpnmontypesecfreqtype.is_set || is_set(rttmplsvpnmontypesecfreqtype.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypesecfreqtype.get_name_leafdata());
    if (rttmplsvpnmontypesecfreqvalue.is_set || is_set(rttmplsvpnmontypesecfreqvalue.yfilter)) leaf_name_data.push_back(rttmplsvpnmontypesecfreqvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rttMplsVpnMonCtrlIndex")
    {
        rttmplsvpnmonctrlindex = value;
        rttmplsvpnmonctrlindex.value_namespace = name_space;
        rttmplsvpnmonctrlindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMplsVpnMonCtrlLpd")
    {
        rttmplsvpnmonctrllpd = value;
        rttmplsvpnmonctrllpd.value_namespace = name_space;
        rttmplsvpnmonctrllpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdCompTime")
    {
        rttmplsvpnmonctrllpdcomptime = value;
        rttmplsvpnmonctrllpdcomptime.value_namespace = name_space;
        rttmplsvpnmonctrllpdcomptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdGrpList")
    {
        rttmplsvpnmonctrllpdgrplist = value;
        rttmplsvpnmonctrllpdgrplist.value_namespace = name_space;
        rttmplsvpnmonctrllpdgrplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlProbeList")
    {
        rttmplsvpnmonctrlprobelist = value;
        rttmplsvpnmonctrlprobelist.value_namespace = name_space;
        rttmplsvpnmonctrlprobelist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlRequestSize")
    {
        rttmplsvpnmonctrlrequestsize = value;
        rttmplsvpnmonctrlrequestsize.value_namespace = name_space;
        rttmplsvpnmonctrlrequestsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlRttType")
    {
        rttmplsvpnmonctrlrtttype = value;
        rttmplsvpnmonctrlrtttype.value_namespace = name_space;
        rttmplsvpnmonctrlrtttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlScanInterval")
    {
        rttmplsvpnmonctrlscaninterval = value;
        rttmplsvpnmonctrlscaninterval.value_namespace = name_space;
        rttmplsvpnmonctrlscaninterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlStatus")
    {
        rttmplsvpnmonctrlstatus = value;
        rttmplsvpnmonctrlstatus.value_namespace = name_space;
        rttmplsvpnmonctrlstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlStorageType")
    {
        rttmplsvpnmonctrlstoragetype = value;
        rttmplsvpnmonctrlstoragetype.value_namespace = name_space;
        rttmplsvpnmonctrlstoragetype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMplsVpnMonCtrlVerifyData")
    {
        rttmplsvpnmonctrlverifydata = value;
        rttmplsvpnmonctrlverifydata.value_namespace = name_space;
        rttmplsvpnmonctrlverifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonCtrlVrfName")
    {
        rttmplsvpnmonctrlvrfname = value;
        rttmplsvpnmonctrlvrfname.value_namespace = name_space;
        rttmplsvpnmonctrlvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactActionType")
    {
        rttmplsvpnmonreactactiontype = value;
        rttmplsvpnmonreactactiontype.value_namespace = name_space;
        rttmplsvpnmonreactactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactConnectionEnable")
    {
        rttmplsvpnmonreactconnectionenable = value;
        rttmplsvpnmonreactconnectionenable.value_namespace = name_space;
        rttmplsvpnmonreactconnectionenable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMplsVpnMonReactThresholdCount")
    {
        rttmplsvpnmonreactthresholdcount = value;
        rttmplsvpnmonreactthresholdcount.value_namespace = name_space;
        rttmplsvpnmonreactthresholdcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactThresholdType")
    {
        rttmplsvpnmonreactthresholdtype = value;
        rttmplsvpnmonreactthresholdtype.value_namespace = name_space;
        rttmplsvpnmonreactthresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonReactTimeoutEnable")
    {
        rttmplsvpnmonreacttimeoutenable = value;
        rttmplsvpnmonreacttimeoutenable.value_namespace = name_space;
        rttmplsvpnmonreacttimeoutenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonScheduleFrequency")
    {
        rttmplsvpnmonschedulefrequency = value;
        rttmplsvpnmonschedulefrequency.value_namespace = name_space;
        rttmplsvpnmonschedulefrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonSchedulePeriod")
    {
        rttmplsvpnmonscheduleperiod = value;
        rttmplsvpnmonscheduleperiod.value_namespace = name_space;
        rttmplsvpnmonscheduleperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonScheduleRttStartTime")
    {
        rttmplsvpnmonschedulerttstarttime = value;
        rttmplsvpnmonschedulerttstarttime.value_namespace = name_space;
        rttmplsvpnmonschedulerttstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeDestPort")
    {
        rttmplsvpnmontypedestport = value;
        rttmplsvpnmontypedestport.value_namespace = name_space;
        rttmplsvpnmontypedestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeInterval")
    {
        rttmplsvpnmontypeinterval = value;
        rttmplsvpnmontypeinterval.value_namespace = name_space;
        rttmplsvpnmontypeinterval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rttMplsVpnMonTypeLpdEchoTimeout")
    {
        rttmplsvpnmontypelpdechotimeout = value;
        rttmplsvpnmontypelpdechotimeout.value_namespace = name_space;
        rttmplsvpnmontypelpdechotimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdMaxSessions")
    {
        rttmplsvpnmontypelpdmaxsessions = value;
        rttmplsvpnmontypelpdmaxsessions.value_namespace = name_space;
        rttmplsvpnmontypelpdmaxsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdScanPeriod")
    {
        rttmplsvpnmontypelpdscanperiod = value;
        rttmplsvpnmontypelpdscanperiod.value_namespace = name_space;
        rttmplsvpnmontypelpdscanperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdSessTimeout")
    {
        rttmplsvpnmontypelpdsesstimeout = value;
        rttmplsvpnmontypelpdsesstimeout.value_namespace = name_space;
        rttmplsvpnmontypelpdsesstimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLpdStatHours")
    {
        rttmplsvpnmontypelpdstathours = value;
        rttmplsvpnmontypelpdstathours.value_namespace = name_space;
        rttmplsvpnmontypelpdstathours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyDscp")
    {
        rttmplsvpnmontypelspreplydscp = value;
        rttmplsvpnmontypelspreplydscp.value_namespace = name_space;
        rttmplsvpnmontypelspreplydscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyMode")
    {
        rttmplsvpnmontypelspreplymode = value;
        rttmplsvpnmontypelspreplymode.value_namespace = name_space;
        rttmplsvpnmontypelspreplymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLspSelector")
    {
        rttmplsvpnmontypelspselector = value;
        rttmplsvpnmontypelspselector.value_namespace = name_space;
        rttmplsvpnmontypelspselector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeLSPTTL")
    {
        rttmplsvpnmontypelspttl = value;
        rttmplsvpnmontypelspttl.value_namespace = name_space;
        rttmplsvpnmontypelspttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rttMplsVpnMonTypeNumPackets")
    {
        rttmplsvpnmontypenumpackets = value;
        rttmplsvpnmontypenumpackets.value_namespace = name_space;
        rttmplsvpnmontypenumpackets.value_namespace_prefix = name_space_prefix;
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
}

void CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rttMplsVpnMonCtrlIndex")
    {
        rttmplsvpnmonctrlindex.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlDelScanFactor")
    {
        rttmplsvpnmonctrldelscanfactor.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlEXP")
    {
        rttmplsvpnmonctrlexp.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlLpd")
    {
        rttmplsvpnmonctrllpd.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdCompTime")
    {
        rttmplsvpnmonctrllpdcomptime.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlLpdGrpList")
    {
        rttmplsvpnmonctrllpdgrplist.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlProbeList")
    {
        rttmplsvpnmonctrlprobelist.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlRequestSize")
    {
        rttmplsvpnmonctrlrequestsize.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlRttType")
    {
        rttmplsvpnmonctrlrtttype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlScanInterval")
    {
        rttmplsvpnmonctrlscaninterval.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlStatus")
    {
        rttmplsvpnmonctrlstatus.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlStorageType")
    {
        rttmplsvpnmonctrlstoragetype.yfilter = yfilter;
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
    if(value_path == "rttMplsVpnMonCtrlVerifyData")
    {
        rttmplsvpnmonctrlverifydata.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonCtrlVrfName")
    {
        rttmplsvpnmonctrlvrfname.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactActionType")
    {
        rttmplsvpnmonreactactiontype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactConnectionEnable")
    {
        rttmplsvpnmonreactconnectionenable.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactLpdNotifyType")
    {
        rttmplsvpnmonreactlpdnotifytype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactLpdRetryCount")
    {
        rttmplsvpnmonreactlpdretrycount.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactThresholdCount")
    {
        rttmplsvpnmonreactthresholdcount.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactThresholdType")
    {
        rttmplsvpnmonreactthresholdtype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonReactTimeoutEnable")
    {
        rttmplsvpnmonreacttimeoutenable.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonScheduleFrequency")
    {
        rttmplsvpnmonschedulefrequency.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonSchedulePeriod")
    {
        rttmplsvpnmonscheduleperiod.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonScheduleRttStartTime")
    {
        rttmplsvpnmonschedulerttstarttime.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeDestPort")
    {
        rttmplsvpnmontypedestport.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeInterval")
    {
        rttmplsvpnmontypeinterval.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoInterval")
    {
        rttmplsvpnmontypelpdechointerval.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoNullShim")
    {
        rttmplsvpnmontypelpdechonullshim.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdEchoTimeout")
    {
        rttmplsvpnmontypelpdechotimeout.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdMaxSessions")
    {
        rttmplsvpnmontypelpdmaxsessions.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdScanPeriod")
    {
        rttmplsvpnmontypelpdscanperiod.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdSessTimeout")
    {
        rttmplsvpnmontypelpdsesstimeout.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLpdStatHours")
    {
        rttmplsvpnmontypelpdstathours.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyDscp")
    {
        rttmplsvpnmontypelspreplydscp.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLSPReplyMode")
    {
        rttmplsvpnmontypelspreplymode.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLspSelector")
    {
        rttmplsvpnmontypelspselector.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeLSPTTL")
    {
        rttmplsvpnmontypelspttl.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeNumPackets")
    {
        rttmplsvpnmontypenumpackets.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeSecFreqType")
    {
        rttmplsvpnmontypesecfreqtype.yfilter = yfilter;
    }
    if(value_path == "rttMplsVpnMonTypeSecFreqValue")
    {
        rttmplsvpnmontypesecfreqvalue.yfilter = yfilter;
    }
}

bool CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttMplsVpnMonCtrlIndex" || name == "rttMplsVpnMonCtrlDelScanFactor" || name == "rttMplsVpnMonCtrlEXP" || name == "rttMplsVpnMonCtrlLpd" || name == "rttMplsVpnMonCtrlLpdCompTime" || name == "rttMplsVpnMonCtrlLpdGrpList" || name == "rttMplsVpnMonCtrlProbeList" || name == "rttMplsVpnMonCtrlRequestSize" || name == "rttMplsVpnMonCtrlRttType" || name == "rttMplsVpnMonCtrlScanInterval" || name == "rttMplsVpnMonCtrlStatus" || name == "rttMplsVpnMonCtrlStorageType" || name == "rttMplsVpnMonCtrlTag" || name == "rttMplsVpnMonCtrlThreshold" || name == "rttMplsVpnMonCtrlTimeout" || name == "rttMplsVpnMonCtrlVerifyData" || name == "rttMplsVpnMonCtrlVrfName" || name == "rttMplsVpnMonReactActionType" || name == "rttMplsVpnMonReactConnectionEnable" || name == "rttMplsVpnMonReactLpdNotifyType" || name == "rttMplsVpnMonReactLpdRetryCount" || name == "rttMplsVpnMonReactThresholdCount" || name == "rttMplsVpnMonReactThresholdType" || name == "rttMplsVpnMonReactTimeoutEnable" || name == "rttMplsVpnMonScheduleFrequency" || name == "rttMplsVpnMonSchedulePeriod" || name == "rttMplsVpnMonScheduleRttStartTime" || name == "rttMplsVpnMonTypeDestPort" || name == "rttMplsVpnMonTypeInterval" || name == "rttMplsVpnMonTypeLpdEchoInterval" || name == "rttMplsVpnMonTypeLpdEchoNullShim" || name == "rttMplsVpnMonTypeLpdEchoTimeout" || name == "rttMplsVpnMonTypeLpdMaxSessions" || name == "rttMplsVpnMonTypeLpdScanPeriod" || name == "rttMplsVpnMonTypeLpdSessTimeout" || name == "rttMplsVpnMonTypeLpdStatHours" || name == "rttMplsVpnMonTypeLSPReplyDscp" || name == "rttMplsVpnMonTypeLSPReplyMode" || name == "rttMplsVpnMonTypeLspSelector" || name == "rttMplsVpnMonTypeLSPTTL" || name == "rttMplsVpnMonTypeNumPackets" || name == "rttMplsVpnMonTypeSecFreqType" || name == "rttMplsVpnMonTypeSecFreqValue")
        return true;
    return false;
}

const Enum::YLeaf CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::Rttmonapplpreconfigedtype::filePath {1, "filePath"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::Rttmonapplpreconfigedtype::scriptName {2, "scriptName"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminthresholdtype::never {1, "never"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminthresholdtype::immediate {2, "immediate"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminthresholdtype::consecutive {3, "consecutive"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminthresholdtype::xOfy {4, "xOfy"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminthresholdtype::average {5, "average"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::trapOnly {2, "trapOnly"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::nmvtOnly {3, "nmvtOnly"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::triggerOnly {4, "triggerOnly"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::trapAndNmvt {5, "trapAndNmvt"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::trapAndTrigger {6, "trapAndTrigger"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::nmvtAndTrigger {7, "nmvtAndTrigger"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype::trapNmvtAndTrigger {8, "trapNmvtAndTrigger"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonhistoryadminfilter::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonhistoryadminfilter::all {2, "all"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonhistoryadminfilter::overThreshold {3, "overThreshold"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonhistoryadminfilter::failures {4, "failures"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate::reset {1, "reset"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate::orderlyStop {2, "orderlyStop"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate::immediateStop {3, "immediateStop"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate::pending {4, "pending"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate::inactive {5, "inactive"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate::active {6, "active"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate::restart {7, "restart"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminlspfectype::ldpIpv4Prefix {1, "ldpIpv4Prefix"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminprecision::milliseconds {1, "milliseconds"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminprecision::microseconds {2, "microseconds"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminprobepakpriority::normal {1, "normal"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminprobepakpriority::high {2, "high"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminowntpsynctoltype::percent {1, "percent"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminowntpsynctoltype::absolute {2, "absolute"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminreservedsp::be {1, "be"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminreservedsp::gs {2, "gs"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminreservedsp::na {3, "na"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminsize::n256 {1, "n256"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminsize::n1k {2, "n1k"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminsize::n64k {3, "n64k"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminsize::n128k {4, "n128k"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminsize::n256k {5, "n256k"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminaction::write {1, "write"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminaction::read {2, "read"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminaction::writeRead {3, "writeRead"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::Rttmonlatestjitteroperntpstate::sync {1, "sync"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::Rttmonlatestjitteroperntpstate::outOfSync {2, "outOfSync"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactthresholdtype::never {1, "never"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactthresholdtype::immediate {2, "immediate"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactthresholdtype::consecutive {3, "consecutive"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactthresholdtype::xOfy {4, "xOfy"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactthresholdtype::average {5, "average"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactactiontype::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactactiontype::trapOnly {2, "trapOnly"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactactiontype::triggerOnly {3, "triggerOnly"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttable::Rttmonreactentry::Rttmonreactactiontype::trapAndTrigger {4, "trapAndTrigger"};

const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::Rttmonreacttriggeroperstate::active {1, "active"};
const Enum::YLeaf CISCORTTMONMIB::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::Rttmonreacttriggeroperstate::pending {2, "pending"};

const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmontypesecfreqtype::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmontypesecfreqtype::timeout {2, "timeout"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmontypesecfreqtype::connectionLoss {3, "connectionLoss"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmontypesecfreqtype::both {4, "both"};

const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactthresholdtype::never {1, "never"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactthresholdtype::immediate {2, "immediate"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactthresholdtype::consecutive {3, "consecutive"};

const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactactiontype::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactactiontype::trapOnly {2, "trapOnly"};

const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactlpdnotifytype::none {1, "none"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactlpdnotifytype::lpdPathDiscovery {2, "lpdPathDiscovery"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactlpdnotifytype::lpdGroupStatus {3, "lpdGroupStatus"};
const Enum::YLeaf CISCORTTMONMIB::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactlpdnotifytype::lpdAll {4, "lpdAll"};


}
}

