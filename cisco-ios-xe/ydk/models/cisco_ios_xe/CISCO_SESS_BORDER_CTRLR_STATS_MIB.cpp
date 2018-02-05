
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SESS_BORDER_CTRLR_STATS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SESS_BORDER_CTRLR_STATS_MIB {

CISCOSESSBORDERCTRLRSTATSMIB::CISCOSESSBORDERCTRLRSTATSMIB()
    :
    csbradiusstatstable(std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable>())
	,csbrfbillrealmstatstable(std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable>())
	,csbsipmthdcurrentstatstable(std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable>())
	,csbsipmthdhistorystatstable(std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable>())
	,csbsipmthdrccurrentstatstable(std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable>())
	,csbsipmthdrchistorystatstable(std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable>())
{
    csbradiusstatstable->parent = this;
    csbrfbillrealmstatstable->parent = this;
    csbsipmthdcurrentstatstable->parent = this;
    csbsipmthdhistorystatstable->parent = this;
    csbsipmthdrccurrentstatstable->parent = this;
    csbsipmthdrchistorystatstable->parent = this;

    yang_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::~CISCOSESSBORDERCTRLRSTATSMIB()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::has_data() const
{
    return (csbradiusstatstable !=  nullptr && csbradiusstatstable->has_data())
	|| (csbrfbillrealmstatstable !=  nullptr && csbrfbillrealmstatstable->has_data())
	|| (csbsipmthdcurrentstatstable !=  nullptr && csbsipmthdcurrentstatstable->has_data())
	|| (csbsipmthdhistorystatstable !=  nullptr && csbsipmthdhistorystatstable->has_data())
	|| (csbsipmthdrccurrentstatstable !=  nullptr && csbsipmthdrccurrentstatstable->has_data())
	|| (csbsipmthdrchistorystatstable !=  nullptr && csbsipmthdrchistorystatstable->has_data());
}

bool CISCOSESSBORDERCTRLRSTATSMIB::has_operation() const
{
    return is_set(yfilter)
	|| (csbradiusstatstable !=  nullptr && csbradiusstatstable->has_operation())
	|| (csbrfbillrealmstatstable !=  nullptr && csbrfbillrealmstatstable->has_operation())
	|| (csbsipmthdcurrentstatstable !=  nullptr && csbsipmthdcurrentstatstable->has_operation())
	|| (csbsipmthdhistorystatstable !=  nullptr && csbsipmthdhistorystatstable->has_operation())
	|| (csbsipmthdrccurrentstatstable !=  nullptr && csbsipmthdrccurrentstatstable->has_operation())
	|| (csbsipmthdrchistorystatstable !=  nullptr && csbsipmthdrchistorystatstable->has_operation());
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbRadiusStatsTable")
    {
        if(csbradiusstatstable == nullptr)
        {
            csbradiusstatstable = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable>();
        }
        return csbradiusstatstable;
    }

    if(child_yang_name == "csbRfBillRealmStatsTable")
    {
        if(csbrfbillrealmstatstable == nullptr)
        {
            csbrfbillrealmstatstable = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable>();
        }
        return csbrfbillrealmstatstable;
    }

    if(child_yang_name == "csbSIPMthdCurrentStatsTable")
    {
        if(csbsipmthdcurrentstatstable == nullptr)
        {
            csbsipmthdcurrentstatstable = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable>();
        }
        return csbsipmthdcurrentstatstable;
    }

    if(child_yang_name == "csbSIPMthdHistoryStatsTable")
    {
        if(csbsipmthdhistorystatstable == nullptr)
        {
            csbsipmthdhistorystatstable = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable>();
        }
        return csbsipmthdhistorystatstable;
    }

    if(child_yang_name == "csbSIPMthdRCCurrentStatsTable")
    {
        if(csbsipmthdrccurrentstatstable == nullptr)
        {
            csbsipmthdrccurrentstatstable = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable>();
        }
        return csbsipmthdrccurrentstatstable;
    }

    if(child_yang_name == "csbSIPMthdRCHistoryStatsTable")
    {
        if(csbsipmthdrchistorystatstable == nullptr)
        {
            csbsipmthdrchistorystatstable = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable>();
        }
        return csbsipmthdrchistorystatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(csbradiusstatstable != nullptr)
    {
        children["csbRadiusStatsTable"] = csbradiusstatstable;
    }

    if(csbrfbillrealmstatstable != nullptr)
    {
        children["csbRfBillRealmStatsTable"] = csbrfbillrealmstatstable;
    }

    if(csbsipmthdcurrentstatstable != nullptr)
    {
        children["csbSIPMthdCurrentStatsTable"] = csbsipmthdcurrentstatstable;
    }

    if(csbsipmthdhistorystatstable != nullptr)
    {
        children["csbSIPMthdHistoryStatsTable"] = csbsipmthdhistorystatstable;
    }

    if(csbsipmthdrccurrentstatstable != nullptr)
    {
        children["csbSIPMthdRCCurrentStatsTable"] = csbsipmthdrccurrentstatstable;
    }

    if(csbsipmthdrchistorystatstable != nullptr)
    {
        children["csbSIPMthdRCHistoryStatsTable"] = csbsipmthdrchistorystatstable;
    }

    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRSTATSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::clone_ptr() const
{
    return std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB>();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOSESSBORDERCTRLRSTATSMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOSESSBORDERCTRLRSTATSMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbRadiusStatsTable" || name == "csbRfBillRealmStatsTable" || name == "csbSIPMthdCurrentStatsTable" || name == "csbSIPMthdHistoryStatsTable" || name == "csbSIPMthdRCCurrentStatsTable" || name == "csbSIPMthdRCHistoryStatsTable")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatstable()
{

    yang_name = "csbRadiusStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::~Csbradiusstatstable()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::has_data() const
{
    for (std::size_t index=0; index<csbradiusstatsentry.size(); index++)
    {
        if(csbradiusstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbradiusstatsentry.size(); index++)
    {
        if(csbradiusstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRadiusStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbRadiusStatsEntry")
    {
        auto c = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry>();
        c->parent = this;
        csbradiusstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csbradiusstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbRadiusStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::Csbradiusstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbradiusstatsentindex{YType::uint32, "csbRadiusStatsEntIndex"},
    csbradiusstatsclientname{YType::str, "csbRadiusStatsClientName"},
    csbradiusstatsclienttype{YType::enumeration, "csbRadiusStatsClientType"},
    csbradiusstatssrvrname{YType::str, "csbRadiusStatsSrvrName"},
    csbradiusstatsacsreqs{YType::uint64, "csbRadiusStatsAcsReqs"},
    csbradiusstatsacsrtrns{YType::uint64, "csbRadiusStatsAcsRtrns"},
    csbradiusstatsacsaccpts{YType::uint64, "csbRadiusStatsAcsAccpts"},
    csbradiusstatsacsrejects{YType::uint64, "csbRadiusStatsAcsRejects"},
    csbradiusstatsacschalls{YType::uint64, "csbRadiusStatsAcsChalls"},
    csbradiusstatsactreqs{YType::uint64, "csbRadiusStatsActReqs"},
    csbradiusstatsactretrans{YType::uint64, "csbRadiusStatsActRetrans"},
    csbradiusstatsactrsps{YType::uint64, "csbRadiusStatsActRsps"},
    csbradiusstatsmalformedrsps{YType::uint64, "csbRadiusStatsMalformedRsps"},
    csbradiusstatsbadauths{YType::uint64, "csbRadiusStatsBadAuths"},
    csbradiusstatspending{YType::uint32, "csbRadiusStatsPending"},
    csbradiusstatstimeouts{YType::uint64, "csbRadiusStatsTimeouts"},
    csbradiusstatsunknowntype{YType::uint64, "csbRadiusStatsUnknownType"},
    csbradiusstatsdropped{YType::uint64, "csbRadiusStatsDropped"}
{

    yang_name = "csbRadiusStatsEntry"; yang_parent_name = "csbRadiusStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::~Csbradiusstatsentry()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbradiusstatsentindex.is_set
	|| csbradiusstatsclientname.is_set
	|| csbradiusstatsclienttype.is_set
	|| csbradiusstatssrvrname.is_set
	|| csbradiusstatsacsreqs.is_set
	|| csbradiusstatsacsrtrns.is_set
	|| csbradiusstatsacsaccpts.is_set
	|| csbradiusstatsacsrejects.is_set
	|| csbradiusstatsacschalls.is_set
	|| csbradiusstatsactreqs.is_set
	|| csbradiusstatsactretrans.is_set
	|| csbradiusstatsactrsps.is_set
	|| csbradiusstatsmalformedrsps.is_set
	|| csbradiusstatsbadauths.is_set
	|| csbradiusstatspending.is_set
	|| csbradiusstatstimeouts.is_set
	|| csbradiusstatsunknowntype.is_set
	|| csbradiusstatsdropped.is_set;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbradiusstatsentindex.yfilter)
	|| ydk::is_set(csbradiusstatsclientname.yfilter)
	|| ydk::is_set(csbradiusstatsclienttype.yfilter)
	|| ydk::is_set(csbradiusstatssrvrname.yfilter)
	|| ydk::is_set(csbradiusstatsacsreqs.yfilter)
	|| ydk::is_set(csbradiusstatsacsrtrns.yfilter)
	|| ydk::is_set(csbradiusstatsacsaccpts.yfilter)
	|| ydk::is_set(csbradiusstatsacsrejects.yfilter)
	|| ydk::is_set(csbradiusstatsacschalls.yfilter)
	|| ydk::is_set(csbradiusstatsactreqs.yfilter)
	|| ydk::is_set(csbradiusstatsactretrans.yfilter)
	|| ydk::is_set(csbradiusstatsactrsps.yfilter)
	|| ydk::is_set(csbradiusstatsmalformedrsps.yfilter)
	|| ydk::is_set(csbradiusstatsbadauths.yfilter)
	|| ydk::is_set(csbradiusstatspending.yfilter)
	|| ydk::is_set(csbradiusstatstimeouts.yfilter)
	|| ydk::is_set(csbradiusstatsunknowntype.yfilter)
	|| ydk::is_set(csbradiusstatsdropped.yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbRadiusStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRadiusStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbRadiusStatsEntIndex='" <<csbradiusstatsentindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbradiusstatsentindex.is_set || is_set(csbradiusstatsentindex.yfilter)) leaf_name_data.push_back(csbradiusstatsentindex.get_name_leafdata());
    if (csbradiusstatsclientname.is_set || is_set(csbradiusstatsclientname.yfilter)) leaf_name_data.push_back(csbradiusstatsclientname.get_name_leafdata());
    if (csbradiusstatsclienttype.is_set || is_set(csbradiusstatsclienttype.yfilter)) leaf_name_data.push_back(csbradiusstatsclienttype.get_name_leafdata());
    if (csbradiusstatssrvrname.is_set || is_set(csbradiusstatssrvrname.yfilter)) leaf_name_data.push_back(csbradiusstatssrvrname.get_name_leafdata());
    if (csbradiusstatsacsreqs.is_set || is_set(csbradiusstatsacsreqs.yfilter)) leaf_name_data.push_back(csbradiusstatsacsreqs.get_name_leafdata());
    if (csbradiusstatsacsrtrns.is_set || is_set(csbradiusstatsacsrtrns.yfilter)) leaf_name_data.push_back(csbradiusstatsacsrtrns.get_name_leafdata());
    if (csbradiusstatsacsaccpts.is_set || is_set(csbradiusstatsacsaccpts.yfilter)) leaf_name_data.push_back(csbradiusstatsacsaccpts.get_name_leafdata());
    if (csbradiusstatsacsrejects.is_set || is_set(csbradiusstatsacsrejects.yfilter)) leaf_name_data.push_back(csbradiusstatsacsrejects.get_name_leafdata());
    if (csbradiusstatsacschalls.is_set || is_set(csbradiusstatsacschalls.yfilter)) leaf_name_data.push_back(csbradiusstatsacschalls.get_name_leafdata());
    if (csbradiusstatsactreqs.is_set || is_set(csbradiusstatsactreqs.yfilter)) leaf_name_data.push_back(csbradiusstatsactreqs.get_name_leafdata());
    if (csbradiusstatsactretrans.is_set || is_set(csbradiusstatsactretrans.yfilter)) leaf_name_data.push_back(csbradiusstatsactretrans.get_name_leafdata());
    if (csbradiusstatsactrsps.is_set || is_set(csbradiusstatsactrsps.yfilter)) leaf_name_data.push_back(csbradiusstatsactrsps.get_name_leafdata());
    if (csbradiusstatsmalformedrsps.is_set || is_set(csbradiusstatsmalformedrsps.yfilter)) leaf_name_data.push_back(csbradiusstatsmalformedrsps.get_name_leafdata());
    if (csbradiusstatsbadauths.is_set || is_set(csbradiusstatsbadauths.yfilter)) leaf_name_data.push_back(csbradiusstatsbadauths.get_name_leafdata());
    if (csbradiusstatspending.is_set || is_set(csbradiusstatspending.yfilter)) leaf_name_data.push_back(csbradiusstatspending.get_name_leafdata());
    if (csbradiusstatstimeouts.is_set || is_set(csbradiusstatstimeouts.yfilter)) leaf_name_data.push_back(csbradiusstatstimeouts.get_name_leafdata());
    if (csbradiusstatsunknowntype.is_set || is_set(csbradiusstatsunknowntype.yfilter)) leaf_name_data.push_back(csbradiusstatsunknowntype.get_name_leafdata());
    if (csbradiusstatsdropped.is_set || is_set(csbradiusstatsdropped.yfilter)) leaf_name_data.push_back(csbradiusstatsdropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
        csbcallstatsinstanceindex.value_namespace = name_space;
        csbcallstatsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
        csbcallstatsserviceindex.value_namespace = name_space;
        csbcallstatsserviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsEntIndex")
    {
        csbradiusstatsentindex = value;
        csbradiusstatsentindex.value_namespace = name_space;
        csbradiusstatsentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsClientName")
    {
        csbradiusstatsclientname = value;
        csbradiusstatsclientname.value_namespace = name_space;
        csbradiusstatsclientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsClientType")
    {
        csbradiusstatsclienttype = value;
        csbradiusstatsclienttype.value_namespace = name_space;
        csbradiusstatsclienttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsSrvrName")
    {
        csbradiusstatssrvrname = value;
        csbradiusstatssrvrname.value_namespace = name_space;
        csbradiusstatssrvrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsAcsReqs")
    {
        csbradiusstatsacsreqs = value;
        csbradiusstatsacsreqs.value_namespace = name_space;
        csbradiusstatsacsreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsAcsRtrns")
    {
        csbradiusstatsacsrtrns = value;
        csbradiusstatsacsrtrns.value_namespace = name_space;
        csbradiusstatsacsrtrns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsAcsAccpts")
    {
        csbradiusstatsacsaccpts = value;
        csbradiusstatsacsaccpts.value_namespace = name_space;
        csbradiusstatsacsaccpts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsAcsRejects")
    {
        csbradiusstatsacsrejects = value;
        csbradiusstatsacsrejects.value_namespace = name_space;
        csbradiusstatsacsrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsAcsChalls")
    {
        csbradiusstatsacschalls = value;
        csbradiusstatsacschalls.value_namespace = name_space;
        csbradiusstatsacschalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsActReqs")
    {
        csbradiusstatsactreqs = value;
        csbradiusstatsactreqs.value_namespace = name_space;
        csbradiusstatsactreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsActRetrans")
    {
        csbradiusstatsactretrans = value;
        csbradiusstatsactretrans.value_namespace = name_space;
        csbradiusstatsactretrans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsActRsps")
    {
        csbradiusstatsactrsps = value;
        csbradiusstatsactrsps.value_namespace = name_space;
        csbradiusstatsactrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsMalformedRsps")
    {
        csbradiusstatsmalformedrsps = value;
        csbradiusstatsmalformedrsps.value_namespace = name_space;
        csbradiusstatsmalformedrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsBadAuths")
    {
        csbradiusstatsbadauths = value;
        csbradiusstatsbadauths.value_namespace = name_space;
        csbradiusstatsbadauths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsPending")
    {
        csbradiusstatspending = value;
        csbradiusstatspending.value_namespace = name_space;
        csbradiusstatspending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsTimeouts")
    {
        csbradiusstatstimeouts = value;
        csbradiusstatstimeouts.value_namespace = name_space;
        csbradiusstatstimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsUnknownType")
    {
        csbradiusstatsunknowntype = value;
        csbradiusstatsunknowntype.value_namespace = name_space;
        csbradiusstatsunknowntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRadiusStatsDropped")
    {
        csbradiusstatsdropped = value;
        csbradiusstatsdropped.value_namespace = name_space;
        csbradiusstatsdropped.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsEntIndex")
    {
        csbradiusstatsentindex.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsClientName")
    {
        csbradiusstatsclientname.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsClientType")
    {
        csbradiusstatsclienttype.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsSrvrName")
    {
        csbradiusstatssrvrname.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsAcsReqs")
    {
        csbradiusstatsacsreqs.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsAcsRtrns")
    {
        csbradiusstatsacsrtrns.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsAcsAccpts")
    {
        csbradiusstatsacsaccpts.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsAcsRejects")
    {
        csbradiusstatsacsrejects.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsAcsChalls")
    {
        csbradiusstatsacschalls.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsActReqs")
    {
        csbradiusstatsactreqs.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsActRetrans")
    {
        csbradiusstatsactretrans.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsActRsps")
    {
        csbradiusstatsactrsps.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsMalformedRsps")
    {
        csbradiusstatsmalformedrsps.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsBadAuths")
    {
        csbradiusstatsbadauths.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsPending")
    {
        csbradiusstatspending.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsTimeouts")
    {
        csbradiusstatstimeouts.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsUnknownType")
    {
        csbradiusstatsunknowntype.yfilter = yfilter;
    }
    if(value_path == "csbRadiusStatsDropped")
    {
        csbradiusstatsdropped.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbRadiusStatsEntIndex" || name == "csbRadiusStatsClientName" || name == "csbRadiusStatsClientType" || name == "csbRadiusStatsSrvrName" || name == "csbRadiusStatsAcsReqs" || name == "csbRadiusStatsAcsRtrns" || name == "csbRadiusStatsAcsAccpts" || name == "csbRadiusStatsAcsRejects" || name == "csbRadiusStatsAcsChalls" || name == "csbRadiusStatsActReqs" || name == "csbRadiusStatsActRetrans" || name == "csbRadiusStatsActRsps" || name == "csbRadiusStatsMalformedRsps" || name == "csbRadiusStatsBadAuths" || name == "csbRadiusStatsPending" || name == "csbRadiusStatsTimeouts" || name == "csbRadiusStatsUnknownType" || name == "csbRadiusStatsDropped")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatstable()
{

    yang_name = "csbRfBillRealmStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::~Csbrfbillrealmstatstable()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::has_data() const
{
    for (std::size_t index=0; index<csbrfbillrealmstatsentry.size(); index++)
    {
        if(csbrfbillrealmstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbrfbillrealmstatsentry.size(); index++)
    {
        if(csbrfbillrealmstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRfBillRealmStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbRfBillRealmStatsEntry")
    {
        auto c = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry>();
        c->parent = this;
        csbrfbillrealmstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csbrfbillrealmstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbRfBillRealmStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::Csbrfbillrealmstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbrfbillrealmstatsindex{YType::uint32, "csbRfBillRealmStatsIndex"},
    csbrfbillrealmstatsrealmname{YType::str, "csbRfBillRealmStatsRealmName"},
    csbrfbillrealmstatstotalstartacrs{YType::uint32, "csbRfBillRealmStatsTotalStartAcrs"},
    csbrfbillrealmstatstotalinterimacrs{YType::uint32, "csbRfBillRealmStatsTotalInterimAcrs"},
    csbrfbillrealmstatstotalstopacrs{YType::uint32, "csbRfBillRealmStatsTotalStopAcrs"},
    csbrfbillrealmstatstotaleventacrs{YType::uint32, "csbRfBillRealmStatsTotalEventAcrs"},
    csbrfbillrealmstatssuccstartacrs{YType::uint32, "csbRfBillRealmStatsSuccStartAcrs"},
    csbrfbillrealmstatssuccinterimacrs{YType::uint32, "csbRfBillRealmStatsSuccInterimAcrs"},
    csbrfbillrealmstatssuccstopacrs{YType::uint32, "csbRfBillRealmStatsSuccStopAcrs"},
    csbrfbillrealmstatssucceventacrs{YType::uint32, "csbRfBillRealmStatsSuccEventAcrs"},
    csbrfbillrealmstatsfailstartacrs{YType::uint32, "csbRfBillRealmStatsFailStartAcrs"},
    csbrfbillrealmstatsfailinterimacrs{YType::uint32, "csbRfBillRealmStatsFailInterimAcrs"},
    csbrfbillrealmstatsfailstopacrs{YType::uint32, "csbRfBillRealmStatsFailStopAcrs"},
    csbrfbillrealmstatsfaileventacrs{YType::uint32, "csbRfBillRealmStatsFailEventAcrs"}
{

    yang_name = "csbRfBillRealmStatsEntry"; yang_parent_name = "csbRfBillRealmStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::~Csbrfbillrealmstatsentry()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbrfbillrealmstatsindex.is_set
	|| csbrfbillrealmstatsrealmname.is_set
	|| csbrfbillrealmstatstotalstartacrs.is_set
	|| csbrfbillrealmstatstotalinterimacrs.is_set
	|| csbrfbillrealmstatstotalstopacrs.is_set
	|| csbrfbillrealmstatstotaleventacrs.is_set
	|| csbrfbillrealmstatssuccstartacrs.is_set
	|| csbrfbillrealmstatssuccinterimacrs.is_set
	|| csbrfbillrealmstatssuccstopacrs.is_set
	|| csbrfbillrealmstatssucceventacrs.is_set
	|| csbrfbillrealmstatsfailstartacrs.is_set
	|| csbrfbillrealmstatsfailinterimacrs.is_set
	|| csbrfbillrealmstatsfailstopacrs.is_set
	|| csbrfbillrealmstatsfaileventacrs.is_set;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbrfbillrealmstatsindex.yfilter)
	|| ydk::is_set(csbrfbillrealmstatsrealmname.yfilter)
	|| ydk::is_set(csbrfbillrealmstatstotalstartacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatstotalinterimacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatstotalstopacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatstotaleventacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatssuccstartacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatssuccinterimacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatssuccstopacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatssucceventacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatsfailstartacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatsfailinterimacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatsfailstopacrs.yfilter)
	|| ydk::is_set(csbrfbillrealmstatsfaileventacrs.yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbRfBillRealmStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRfBillRealmStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbRfBillRealmStatsIndex='" <<csbrfbillrealmstatsindex <<"']" <<"[csbRfBillRealmStatsRealmName='" <<csbrfbillrealmstatsrealmname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbrfbillrealmstatsindex.is_set || is_set(csbrfbillrealmstatsindex.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatsindex.get_name_leafdata());
    if (csbrfbillrealmstatsrealmname.is_set || is_set(csbrfbillrealmstatsrealmname.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatsrealmname.get_name_leafdata());
    if (csbrfbillrealmstatstotalstartacrs.is_set || is_set(csbrfbillrealmstatstotalstartacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatstotalstartacrs.get_name_leafdata());
    if (csbrfbillrealmstatstotalinterimacrs.is_set || is_set(csbrfbillrealmstatstotalinterimacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatstotalinterimacrs.get_name_leafdata());
    if (csbrfbillrealmstatstotalstopacrs.is_set || is_set(csbrfbillrealmstatstotalstopacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatstotalstopacrs.get_name_leafdata());
    if (csbrfbillrealmstatstotaleventacrs.is_set || is_set(csbrfbillrealmstatstotaleventacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatstotaleventacrs.get_name_leafdata());
    if (csbrfbillrealmstatssuccstartacrs.is_set || is_set(csbrfbillrealmstatssuccstartacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatssuccstartacrs.get_name_leafdata());
    if (csbrfbillrealmstatssuccinterimacrs.is_set || is_set(csbrfbillrealmstatssuccinterimacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatssuccinterimacrs.get_name_leafdata());
    if (csbrfbillrealmstatssuccstopacrs.is_set || is_set(csbrfbillrealmstatssuccstopacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatssuccstopacrs.get_name_leafdata());
    if (csbrfbillrealmstatssucceventacrs.is_set || is_set(csbrfbillrealmstatssucceventacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatssucceventacrs.get_name_leafdata());
    if (csbrfbillrealmstatsfailstartacrs.is_set || is_set(csbrfbillrealmstatsfailstartacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatsfailstartacrs.get_name_leafdata());
    if (csbrfbillrealmstatsfailinterimacrs.is_set || is_set(csbrfbillrealmstatsfailinterimacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatsfailinterimacrs.get_name_leafdata());
    if (csbrfbillrealmstatsfailstopacrs.is_set || is_set(csbrfbillrealmstatsfailstopacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatsfailstopacrs.get_name_leafdata());
    if (csbrfbillrealmstatsfaileventacrs.is_set || is_set(csbrfbillrealmstatsfaileventacrs.yfilter)) leaf_name_data.push_back(csbrfbillrealmstatsfaileventacrs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
        csbcallstatsinstanceindex.value_namespace = name_space;
        csbcallstatsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
        csbcallstatsserviceindex.value_namespace = name_space;
        csbcallstatsserviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsIndex")
    {
        csbrfbillrealmstatsindex = value;
        csbrfbillrealmstatsindex.value_namespace = name_space;
        csbrfbillrealmstatsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsRealmName")
    {
        csbrfbillrealmstatsrealmname = value;
        csbrfbillrealmstatsrealmname.value_namespace = name_space;
        csbrfbillrealmstatsrealmname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsTotalStartAcrs")
    {
        csbrfbillrealmstatstotalstartacrs = value;
        csbrfbillrealmstatstotalstartacrs.value_namespace = name_space;
        csbrfbillrealmstatstotalstartacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsTotalInterimAcrs")
    {
        csbrfbillrealmstatstotalinterimacrs = value;
        csbrfbillrealmstatstotalinterimacrs.value_namespace = name_space;
        csbrfbillrealmstatstotalinterimacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsTotalStopAcrs")
    {
        csbrfbillrealmstatstotalstopacrs = value;
        csbrfbillrealmstatstotalstopacrs.value_namespace = name_space;
        csbrfbillrealmstatstotalstopacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsTotalEventAcrs")
    {
        csbrfbillrealmstatstotaleventacrs = value;
        csbrfbillrealmstatstotaleventacrs.value_namespace = name_space;
        csbrfbillrealmstatstotaleventacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsSuccStartAcrs")
    {
        csbrfbillrealmstatssuccstartacrs = value;
        csbrfbillrealmstatssuccstartacrs.value_namespace = name_space;
        csbrfbillrealmstatssuccstartacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsSuccInterimAcrs")
    {
        csbrfbillrealmstatssuccinterimacrs = value;
        csbrfbillrealmstatssuccinterimacrs.value_namespace = name_space;
        csbrfbillrealmstatssuccinterimacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsSuccStopAcrs")
    {
        csbrfbillrealmstatssuccstopacrs = value;
        csbrfbillrealmstatssuccstopacrs.value_namespace = name_space;
        csbrfbillrealmstatssuccstopacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsSuccEventAcrs")
    {
        csbrfbillrealmstatssucceventacrs = value;
        csbrfbillrealmstatssucceventacrs.value_namespace = name_space;
        csbrfbillrealmstatssucceventacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsFailStartAcrs")
    {
        csbrfbillrealmstatsfailstartacrs = value;
        csbrfbillrealmstatsfailstartacrs.value_namespace = name_space;
        csbrfbillrealmstatsfailstartacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsFailInterimAcrs")
    {
        csbrfbillrealmstatsfailinterimacrs = value;
        csbrfbillrealmstatsfailinterimacrs.value_namespace = name_space;
        csbrfbillrealmstatsfailinterimacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsFailStopAcrs")
    {
        csbrfbillrealmstatsfailstopacrs = value;
        csbrfbillrealmstatsfailstopacrs.value_namespace = name_space;
        csbrfbillrealmstatsfailstopacrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbRfBillRealmStatsFailEventAcrs")
    {
        csbrfbillrealmstatsfaileventacrs = value;
        csbrfbillrealmstatsfaileventacrs.value_namespace = name_space;
        csbrfbillrealmstatsfaileventacrs.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsIndex")
    {
        csbrfbillrealmstatsindex.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsRealmName")
    {
        csbrfbillrealmstatsrealmname.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsTotalStartAcrs")
    {
        csbrfbillrealmstatstotalstartacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsTotalInterimAcrs")
    {
        csbrfbillrealmstatstotalinterimacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsTotalStopAcrs")
    {
        csbrfbillrealmstatstotalstopacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsTotalEventAcrs")
    {
        csbrfbillrealmstatstotaleventacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsSuccStartAcrs")
    {
        csbrfbillrealmstatssuccstartacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsSuccInterimAcrs")
    {
        csbrfbillrealmstatssuccinterimacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsSuccStopAcrs")
    {
        csbrfbillrealmstatssuccstopacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsSuccEventAcrs")
    {
        csbrfbillrealmstatssucceventacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsFailStartAcrs")
    {
        csbrfbillrealmstatsfailstartacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsFailInterimAcrs")
    {
        csbrfbillrealmstatsfailinterimacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsFailStopAcrs")
    {
        csbrfbillrealmstatsfailstopacrs.yfilter = yfilter;
    }
    if(value_path == "csbRfBillRealmStatsFailEventAcrs")
    {
        csbrfbillrealmstatsfaileventacrs.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbRfBillRealmStatsIndex" || name == "csbRfBillRealmStatsRealmName" || name == "csbRfBillRealmStatsTotalStartAcrs" || name == "csbRfBillRealmStatsTotalInterimAcrs" || name == "csbRfBillRealmStatsTotalStopAcrs" || name == "csbRfBillRealmStatsTotalEventAcrs" || name == "csbRfBillRealmStatsSuccStartAcrs" || name == "csbRfBillRealmStatsSuccInterimAcrs" || name == "csbRfBillRealmStatsSuccStopAcrs" || name == "csbRfBillRealmStatsSuccEventAcrs" || name == "csbRfBillRealmStatsFailStartAcrs" || name == "csbRfBillRealmStatsFailInterimAcrs" || name == "csbRfBillRealmStatsFailStopAcrs" || name == "csbRfBillRealmStatsFailEventAcrs")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatstable()
{

    yang_name = "csbSIPMthdCurrentStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::~Csbsipmthdcurrentstatstable()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdcurrentstatsentry.size(); index++)
    {
        if(csbsipmthdcurrentstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdcurrentstatsentry.size(); index++)
    {
        if(csbsipmthdcurrentstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdCurrentStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdCurrentStatsEntry")
    {
        auto c = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry>();
        c->parent = this;
        csbsipmthdcurrentstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csbsipmthdcurrentstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbSIPMthdCurrentStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::Csbsipmthdcurrentstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbsipmthdcurrentstatsadjname{YType::str, "csbSIPMthdCurrentStatsAdjName"},
    csbsipmthdcurrentstatsmethod{YType::enumeration, "csbSIPMthdCurrentStatsMethod"},
    csbsipmthdcurrentstatsinterval{YType::enumeration, "csbSIPMthdCurrentStatsInterval"},
    csbsipmthdcurrentstatsmethodname{YType::str, "csbSIPMthdCurrentStatsMethodName"},
    csbsipmthdcurrentstatsreqin{YType::uint32, "csbSIPMthdCurrentStatsReqIn"},
    csbsipmthdcurrentstatsreqout{YType::uint32, "csbSIPMthdCurrentStatsReqOut"},
    csbsipmthdcurrentstatsresp1xxin{YType::uint32, "csbSIPMthdCurrentStatsResp1xxIn"},
    csbsipmthdcurrentstatsresp1xxout{YType::uint32, "csbSIPMthdCurrentStatsResp1xxOut"},
    csbsipmthdcurrentstatsresp2xxin{YType::uint32, "csbSIPMthdCurrentStatsResp2xxIn"},
    csbsipmthdcurrentstatsresp2xxout{YType::uint32, "csbSIPMthdCurrentStatsResp2xxOut"},
    csbsipmthdcurrentstatsresp3xxin{YType::uint32, "csbSIPMthdCurrentStatsResp3xxIn"},
    csbsipmthdcurrentstatsresp3xxout{YType::uint32, "csbSIPMthdCurrentStatsResp3xxOut"},
    csbsipmthdcurrentstatsresp4xxin{YType::uint32, "csbSIPMthdCurrentStatsResp4xxIn"},
    csbsipmthdcurrentstatsresp4xxout{YType::uint32, "csbSIPMthdCurrentStatsResp4xxOut"},
    csbsipmthdcurrentstatsresp5xxin{YType::uint32, "csbSIPMthdCurrentStatsResp5xxIn"},
    csbsipmthdcurrentstatsresp5xxout{YType::uint32, "csbSIPMthdCurrentStatsResp5xxOut"},
    csbsipmthdcurrentstatsresp6xxin{YType::uint32, "csbSIPMthdCurrentStatsResp6xxIn"},
    csbsipmthdcurrentstatsresp6xxout{YType::uint32, "csbSIPMthdCurrentStatsResp6xxOut"}
{

    yang_name = "csbSIPMthdCurrentStatsEntry"; yang_parent_name = "csbSIPMthdCurrentStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::~Csbsipmthdcurrentstatsentry()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbsipmthdcurrentstatsadjname.is_set
	|| csbsipmthdcurrentstatsmethod.is_set
	|| csbsipmthdcurrentstatsinterval.is_set
	|| csbsipmthdcurrentstatsmethodname.is_set
	|| csbsipmthdcurrentstatsreqin.is_set
	|| csbsipmthdcurrentstatsreqout.is_set
	|| csbsipmthdcurrentstatsresp1xxin.is_set
	|| csbsipmthdcurrentstatsresp1xxout.is_set
	|| csbsipmthdcurrentstatsresp2xxin.is_set
	|| csbsipmthdcurrentstatsresp2xxout.is_set
	|| csbsipmthdcurrentstatsresp3xxin.is_set
	|| csbsipmthdcurrentstatsresp3xxout.is_set
	|| csbsipmthdcurrentstatsresp4xxin.is_set
	|| csbsipmthdcurrentstatsresp4xxout.is_set
	|| csbsipmthdcurrentstatsresp5xxin.is_set
	|| csbsipmthdcurrentstatsresp5xxout.is_set
	|| csbsipmthdcurrentstatsresp6xxin.is_set
	|| csbsipmthdcurrentstatsresp6xxout.is_set;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsadjname.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsmethod.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsinterval.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsmethodname.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsreqin.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsreqout.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp1xxin.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp1xxout.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp2xxin.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp2xxout.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp3xxin.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp3xxout.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp4xxin.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp4xxout.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp5xxin.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp5xxout.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp6xxin.yfilter)
	|| ydk::is_set(csbsipmthdcurrentstatsresp6xxout.yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdCurrentStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdCurrentStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdCurrentStatsAdjName='" <<csbsipmthdcurrentstatsadjname <<"']" <<"[csbSIPMthdCurrentStatsMethod='" <<csbsipmthdcurrentstatsmethod <<"']" <<"[csbSIPMthdCurrentStatsInterval='" <<csbsipmthdcurrentstatsinterval <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdcurrentstatsadjname.is_set || is_set(csbsipmthdcurrentstatsadjname.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsadjname.get_name_leafdata());
    if (csbsipmthdcurrentstatsmethod.is_set || is_set(csbsipmthdcurrentstatsmethod.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsmethod.get_name_leafdata());
    if (csbsipmthdcurrentstatsinterval.is_set || is_set(csbsipmthdcurrentstatsinterval.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsinterval.get_name_leafdata());
    if (csbsipmthdcurrentstatsmethodname.is_set || is_set(csbsipmthdcurrentstatsmethodname.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsmethodname.get_name_leafdata());
    if (csbsipmthdcurrentstatsreqin.is_set || is_set(csbsipmthdcurrentstatsreqin.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsreqin.get_name_leafdata());
    if (csbsipmthdcurrentstatsreqout.is_set || is_set(csbsipmthdcurrentstatsreqout.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsreqout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp1xxin.is_set || is_set(csbsipmthdcurrentstatsresp1xxin.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp1xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp1xxout.is_set || is_set(csbsipmthdcurrentstatsresp1xxout.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp1xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp2xxin.is_set || is_set(csbsipmthdcurrentstatsresp2xxin.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp2xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp2xxout.is_set || is_set(csbsipmthdcurrentstatsresp2xxout.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp2xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp3xxin.is_set || is_set(csbsipmthdcurrentstatsresp3xxin.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp3xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp3xxout.is_set || is_set(csbsipmthdcurrentstatsresp3xxout.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp3xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp4xxin.is_set || is_set(csbsipmthdcurrentstatsresp4xxin.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp4xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp4xxout.is_set || is_set(csbsipmthdcurrentstatsresp4xxout.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp4xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp5xxin.is_set || is_set(csbsipmthdcurrentstatsresp5xxin.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp5xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp5xxout.is_set || is_set(csbsipmthdcurrentstatsresp5xxout.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp5xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp6xxin.is_set || is_set(csbsipmthdcurrentstatsresp6xxin.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp6xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp6xxout.is_set || is_set(csbsipmthdcurrentstatsresp6xxout.yfilter)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp6xxout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
        csbcallstatsinstanceindex.value_namespace = name_space;
        csbcallstatsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
        csbcallstatsserviceindex.value_namespace = name_space;
        csbcallstatsserviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsAdjName")
    {
        csbsipmthdcurrentstatsadjname = value;
        csbsipmthdcurrentstatsadjname.value_namespace = name_space;
        csbsipmthdcurrentstatsadjname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsMethod")
    {
        csbsipmthdcurrentstatsmethod = value;
        csbsipmthdcurrentstatsmethod.value_namespace = name_space;
        csbsipmthdcurrentstatsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsInterval")
    {
        csbsipmthdcurrentstatsinterval = value;
        csbsipmthdcurrentstatsinterval.value_namespace = name_space;
        csbsipmthdcurrentstatsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsMethodName")
    {
        csbsipmthdcurrentstatsmethodname = value;
        csbsipmthdcurrentstatsmethodname.value_namespace = name_space;
        csbsipmthdcurrentstatsmethodname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsReqIn")
    {
        csbsipmthdcurrentstatsreqin = value;
        csbsipmthdcurrentstatsreqin.value_namespace = name_space;
        csbsipmthdcurrentstatsreqin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsReqOut")
    {
        csbsipmthdcurrentstatsreqout = value;
        csbsipmthdcurrentstatsreqout.value_namespace = name_space;
        csbsipmthdcurrentstatsreqout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp1xxIn")
    {
        csbsipmthdcurrentstatsresp1xxin = value;
        csbsipmthdcurrentstatsresp1xxin.value_namespace = name_space;
        csbsipmthdcurrentstatsresp1xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp1xxOut")
    {
        csbsipmthdcurrentstatsresp1xxout = value;
        csbsipmthdcurrentstatsresp1xxout.value_namespace = name_space;
        csbsipmthdcurrentstatsresp1xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp2xxIn")
    {
        csbsipmthdcurrentstatsresp2xxin = value;
        csbsipmthdcurrentstatsresp2xxin.value_namespace = name_space;
        csbsipmthdcurrentstatsresp2xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp2xxOut")
    {
        csbsipmthdcurrentstatsresp2xxout = value;
        csbsipmthdcurrentstatsresp2xxout.value_namespace = name_space;
        csbsipmthdcurrentstatsresp2xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp3xxIn")
    {
        csbsipmthdcurrentstatsresp3xxin = value;
        csbsipmthdcurrentstatsresp3xxin.value_namespace = name_space;
        csbsipmthdcurrentstatsresp3xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp3xxOut")
    {
        csbsipmthdcurrentstatsresp3xxout = value;
        csbsipmthdcurrentstatsresp3xxout.value_namespace = name_space;
        csbsipmthdcurrentstatsresp3xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp4xxIn")
    {
        csbsipmthdcurrentstatsresp4xxin = value;
        csbsipmthdcurrentstatsresp4xxin.value_namespace = name_space;
        csbsipmthdcurrentstatsresp4xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp4xxOut")
    {
        csbsipmthdcurrentstatsresp4xxout = value;
        csbsipmthdcurrentstatsresp4xxout.value_namespace = name_space;
        csbsipmthdcurrentstatsresp4xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp5xxIn")
    {
        csbsipmthdcurrentstatsresp5xxin = value;
        csbsipmthdcurrentstatsresp5xxin.value_namespace = name_space;
        csbsipmthdcurrentstatsresp5xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp5xxOut")
    {
        csbsipmthdcurrentstatsresp5xxout = value;
        csbsipmthdcurrentstatsresp5xxout.value_namespace = name_space;
        csbsipmthdcurrentstatsresp5xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp6xxIn")
    {
        csbsipmthdcurrentstatsresp6xxin = value;
        csbsipmthdcurrentstatsresp6xxin.value_namespace = name_space;
        csbsipmthdcurrentstatsresp6xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp6xxOut")
    {
        csbsipmthdcurrentstatsresp6xxout = value;
        csbsipmthdcurrentstatsresp6xxout.value_namespace = name_space;
        csbsipmthdcurrentstatsresp6xxout.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsAdjName")
    {
        csbsipmthdcurrentstatsadjname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsMethod")
    {
        csbsipmthdcurrentstatsmethod.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsInterval")
    {
        csbsipmthdcurrentstatsinterval.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsMethodName")
    {
        csbsipmthdcurrentstatsmethodname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsReqIn")
    {
        csbsipmthdcurrentstatsreqin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsReqOut")
    {
        csbsipmthdcurrentstatsreqout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp1xxIn")
    {
        csbsipmthdcurrentstatsresp1xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp1xxOut")
    {
        csbsipmthdcurrentstatsresp1xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp2xxIn")
    {
        csbsipmthdcurrentstatsresp2xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp2xxOut")
    {
        csbsipmthdcurrentstatsresp2xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp3xxIn")
    {
        csbsipmthdcurrentstatsresp3xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp3xxOut")
    {
        csbsipmthdcurrentstatsresp3xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp4xxIn")
    {
        csbsipmthdcurrentstatsresp4xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp4xxOut")
    {
        csbsipmthdcurrentstatsresp4xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp5xxIn")
    {
        csbsipmthdcurrentstatsresp5xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp5xxOut")
    {
        csbsipmthdcurrentstatsresp5xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp6xxIn")
    {
        csbsipmthdcurrentstatsresp6xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp6xxOut")
    {
        csbsipmthdcurrentstatsresp6xxout.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbSIPMthdCurrentStatsAdjName" || name == "csbSIPMthdCurrentStatsMethod" || name == "csbSIPMthdCurrentStatsInterval" || name == "csbSIPMthdCurrentStatsMethodName" || name == "csbSIPMthdCurrentStatsReqIn" || name == "csbSIPMthdCurrentStatsReqOut" || name == "csbSIPMthdCurrentStatsResp1xxIn" || name == "csbSIPMthdCurrentStatsResp1xxOut" || name == "csbSIPMthdCurrentStatsResp2xxIn" || name == "csbSIPMthdCurrentStatsResp2xxOut" || name == "csbSIPMthdCurrentStatsResp3xxIn" || name == "csbSIPMthdCurrentStatsResp3xxOut" || name == "csbSIPMthdCurrentStatsResp4xxIn" || name == "csbSIPMthdCurrentStatsResp4xxOut" || name == "csbSIPMthdCurrentStatsResp5xxIn" || name == "csbSIPMthdCurrentStatsResp5xxOut" || name == "csbSIPMthdCurrentStatsResp6xxIn" || name == "csbSIPMthdCurrentStatsResp6xxOut")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatstable()
{

    yang_name = "csbSIPMthdHistoryStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::~Csbsipmthdhistorystatstable()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdhistorystatsentry.size(); index++)
    {
        if(csbsipmthdhistorystatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdhistorystatsentry.size(); index++)
    {
        if(csbsipmthdhistorystatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdHistoryStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdHistoryStatsEntry")
    {
        auto c = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry>();
        c->parent = this;
        csbsipmthdhistorystatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csbsipmthdhistorystatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbSIPMthdHistoryStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::Csbsipmthdhistorystatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbsipmthdhistorystatsadjname{YType::str, "csbSIPMthdHistoryStatsAdjName"},
    csbsipmthdhistorystatsmethod{YType::enumeration, "csbSIPMthdHistoryStatsMethod"},
    csbsipmthdhistorystatsinterval{YType::enumeration, "csbSIPMthdHistoryStatsInterval"},
    csbsipmthdhistorystatsmethodname{YType::str, "csbSIPMthdHistoryStatsMethodName"},
    csbsipmthdhistorystatsreqin{YType::uint32, "csbSIPMthdHistoryStatsReqIn"},
    csbsipmthdhistorystatsreqout{YType::uint32, "csbSIPMthdHistoryStatsReqOut"},
    csbsipmthdhistorystatsresp1xxin{YType::uint32, "csbSIPMthdHistoryStatsResp1xxIn"},
    csbsipmthdhistorystatsresp1xxout{YType::uint32, "csbSIPMthdHistoryStatsResp1xxOut"},
    csbsipmthdhistorystatsresp2xxin{YType::uint32, "csbSIPMthdHistoryStatsResp2xxIn"},
    csbsipmthdhistorystatsresp2xxout{YType::uint32, "csbSIPMthdHistoryStatsResp2xxOut"},
    csbsipmthdhistorystatsresp3xxin{YType::uint32, "csbSIPMthdHistoryStatsResp3xxIn"},
    csbsipmthdhistorystatsresp3xxout{YType::uint32, "csbSIPMthdHistoryStatsResp3xxOut"},
    csbsipmthdhistorystatsresp4xxin{YType::uint32, "csbSIPMthdHistoryStatsResp4xxIn"},
    csbsipmthdhistorystatsresp4xxout{YType::uint32, "csbSIPMthdHistoryStatsResp4xxOut"},
    csbsipmthdhistorystatsresp5xxin{YType::uint32, "csbSIPMthdHistoryStatsResp5xxIn"},
    csbsipmthdhistorystatsresp5xxout{YType::uint32, "csbSIPMthdHistoryStatsResp5xxOut"},
    csbsipmthdhistorystatsresp6xxin{YType::uint32, "csbSIPMthdHistoryStatsResp6xxIn"},
    csbsipmthdhistorystatsresp6xxout{YType::uint32, "csbSIPMthdHistoryStatsResp6xxOut"}
{

    yang_name = "csbSIPMthdHistoryStatsEntry"; yang_parent_name = "csbSIPMthdHistoryStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::~Csbsipmthdhistorystatsentry()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbsipmthdhistorystatsadjname.is_set
	|| csbsipmthdhistorystatsmethod.is_set
	|| csbsipmthdhistorystatsinterval.is_set
	|| csbsipmthdhistorystatsmethodname.is_set
	|| csbsipmthdhistorystatsreqin.is_set
	|| csbsipmthdhistorystatsreqout.is_set
	|| csbsipmthdhistorystatsresp1xxin.is_set
	|| csbsipmthdhistorystatsresp1xxout.is_set
	|| csbsipmthdhistorystatsresp2xxin.is_set
	|| csbsipmthdhistorystatsresp2xxout.is_set
	|| csbsipmthdhistorystatsresp3xxin.is_set
	|| csbsipmthdhistorystatsresp3xxout.is_set
	|| csbsipmthdhistorystatsresp4xxin.is_set
	|| csbsipmthdhistorystatsresp4xxout.is_set
	|| csbsipmthdhistorystatsresp5xxin.is_set
	|| csbsipmthdhistorystatsresp5xxout.is_set
	|| csbsipmthdhistorystatsresp6xxin.is_set
	|| csbsipmthdhistorystatsresp6xxout.is_set;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsadjname.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsmethod.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsinterval.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsmethodname.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsreqin.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsreqout.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp1xxin.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp1xxout.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp2xxin.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp2xxout.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp3xxin.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp3xxout.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp4xxin.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp4xxout.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp5xxin.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp5xxout.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp6xxin.yfilter)
	|| ydk::is_set(csbsipmthdhistorystatsresp6xxout.yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdHistoryStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdHistoryStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdHistoryStatsAdjName='" <<csbsipmthdhistorystatsadjname <<"']" <<"[csbSIPMthdHistoryStatsMethod='" <<csbsipmthdhistorystatsmethod <<"']" <<"[csbSIPMthdHistoryStatsInterval='" <<csbsipmthdhistorystatsinterval <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdhistorystatsadjname.is_set || is_set(csbsipmthdhistorystatsadjname.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsadjname.get_name_leafdata());
    if (csbsipmthdhistorystatsmethod.is_set || is_set(csbsipmthdhistorystatsmethod.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsmethod.get_name_leafdata());
    if (csbsipmthdhistorystatsinterval.is_set || is_set(csbsipmthdhistorystatsinterval.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsinterval.get_name_leafdata());
    if (csbsipmthdhistorystatsmethodname.is_set || is_set(csbsipmthdhistorystatsmethodname.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsmethodname.get_name_leafdata());
    if (csbsipmthdhistorystatsreqin.is_set || is_set(csbsipmthdhistorystatsreqin.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsreqin.get_name_leafdata());
    if (csbsipmthdhistorystatsreqout.is_set || is_set(csbsipmthdhistorystatsreqout.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsreqout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp1xxin.is_set || is_set(csbsipmthdhistorystatsresp1xxin.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp1xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp1xxout.is_set || is_set(csbsipmthdhistorystatsresp1xxout.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp1xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp2xxin.is_set || is_set(csbsipmthdhistorystatsresp2xxin.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp2xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp2xxout.is_set || is_set(csbsipmthdhistorystatsresp2xxout.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp2xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp3xxin.is_set || is_set(csbsipmthdhistorystatsresp3xxin.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp3xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp3xxout.is_set || is_set(csbsipmthdhistorystatsresp3xxout.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp3xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp4xxin.is_set || is_set(csbsipmthdhistorystatsresp4xxin.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp4xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp4xxout.is_set || is_set(csbsipmthdhistorystatsresp4xxout.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp4xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp5xxin.is_set || is_set(csbsipmthdhistorystatsresp5xxin.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp5xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp5xxout.is_set || is_set(csbsipmthdhistorystatsresp5xxout.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp5xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp6xxin.is_set || is_set(csbsipmthdhistorystatsresp6xxin.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp6xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp6xxout.is_set || is_set(csbsipmthdhistorystatsresp6xxout.yfilter)) leaf_name_data.push_back(csbsipmthdhistorystatsresp6xxout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
        csbcallstatsinstanceindex.value_namespace = name_space;
        csbcallstatsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
        csbcallstatsserviceindex.value_namespace = name_space;
        csbcallstatsserviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsAdjName")
    {
        csbsipmthdhistorystatsadjname = value;
        csbsipmthdhistorystatsadjname.value_namespace = name_space;
        csbsipmthdhistorystatsadjname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsMethod")
    {
        csbsipmthdhistorystatsmethod = value;
        csbsipmthdhistorystatsmethod.value_namespace = name_space;
        csbsipmthdhistorystatsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsInterval")
    {
        csbsipmthdhistorystatsinterval = value;
        csbsipmthdhistorystatsinterval.value_namespace = name_space;
        csbsipmthdhistorystatsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsMethodName")
    {
        csbsipmthdhistorystatsmethodname = value;
        csbsipmthdhistorystatsmethodname.value_namespace = name_space;
        csbsipmthdhistorystatsmethodname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsReqIn")
    {
        csbsipmthdhistorystatsreqin = value;
        csbsipmthdhistorystatsreqin.value_namespace = name_space;
        csbsipmthdhistorystatsreqin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsReqOut")
    {
        csbsipmthdhistorystatsreqout = value;
        csbsipmthdhistorystatsreqout.value_namespace = name_space;
        csbsipmthdhistorystatsreqout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp1xxIn")
    {
        csbsipmthdhistorystatsresp1xxin = value;
        csbsipmthdhistorystatsresp1xxin.value_namespace = name_space;
        csbsipmthdhistorystatsresp1xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp1xxOut")
    {
        csbsipmthdhistorystatsresp1xxout = value;
        csbsipmthdhistorystatsresp1xxout.value_namespace = name_space;
        csbsipmthdhistorystatsresp1xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp2xxIn")
    {
        csbsipmthdhistorystatsresp2xxin = value;
        csbsipmthdhistorystatsresp2xxin.value_namespace = name_space;
        csbsipmthdhistorystatsresp2xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp2xxOut")
    {
        csbsipmthdhistorystatsresp2xxout = value;
        csbsipmthdhistorystatsresp2xxout.value_namespace = name_space;
        csbsipmthdhistorystatsresp2xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp3xxIn")
    {
        csbsipmthdhistorystatsresp3xxin = value;
        csbsipmthdhistorystatsresp3xxin.value_namespace = name_space;
        csbsipmthdhistorystatsresp3xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp3xxOut")
    {
        csbsipmthdhistorystatsresp3xxout = value;
        csbsipmthdhistorystatsresp3xxout.value_namespace = name_space;
        csbsipmthdhistorystatsresp3xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp4xxIn")
    {
        csbsipmthdhistorystatsresp4xxin = value;
        csbsipmthdhistorystatsresp4xxin.value_namespace = name_space;
        csbsipmthdhistorystatsresp4xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp4xxOut")
    {
        csbsipmthdhistorystatsresp4xxout = value;
        csbsipmthdhistorystatsresp4xxout.value_namespace = name_space;
        csbsipmthdhistorystatsresp4xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp5xxIn")
    {
        csbsipmthdhistorystatsresp5xxin = value;
        csbsipmthdhistorystatsresp5xxin.value_namespace = name_space;
        csbsipmthdhistorystatsresp5xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp5xxOut")
    {
        csbsipmthdhistorystatsresp5xxout = value;
        csbsipmthdhistorystatsresp5xxout.value_namespace = name_space;
        csbsipmthdhistorystatsresp5xxout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp6xxIn")
    {
        csbsipmthdhistorystatsresp6xxin = value;
        csbsipmthdhistorystatsresp6xxin.value_namespace = name_space;
        csbsipmthdhistorystatsresp6xxin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp6xxOut")
    {
        csbsipmthdhistorystatsresp6xxout = value;
        csbsipmthdhistorystatsresp6xxout.value_namespace = name_space;
        csbsipmthdhistorystatsresp6xxout.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsAdjName")
    {
        csbsipmthdhistorystatsadjname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsMethod")
    {
        csbsipmthdhistorystatsmethod.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsInterval")
    {
        csbsipmthdhistorystatsinterval.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsMethodName")
    {
        csbsipmthdhistorystatsmethodname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsReqIn")
    {
        csbsipmthdhistorystatsreqin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsReqOut")
    {
        csbsipmthdhistorystatsreqout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp1xxIn")
    {
        csbsipmthdhistorystatsresp1xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp1xxOut")
    {
        csbsipmthdhistorystatsresp1xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp2xxIn")
    {
        csbsipmthdhistorystatsresp2xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp2xxOut")
    {
        csbsipmthdhistorystatsresp2xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp3xxIn")
    {
        csbsipmthdhistorystatsresp3xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp3xxOut")
    {
        csbsipmthdhistorystatsresp3xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp4xxIn")
    {
        csbsipmthdhistorystatsresp4xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp4xxOut")
    {
        csbsipmthdhistorystatsresp4xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp5xxIn")
    {
        csbsipmthdhistorystatsresp5xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp5xxOut")
    {
        csbsipmthdhistorystatsresp5xxout.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp6xxIn")
    {
        csbsipmthdhistorystatsresp6xxin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp6xxOut")
    {
        csbsipmthdhistorystatsresp6xxout.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbSIPMthdHistoryStatsAdjName" || name == "csbSIPMthdHistoryStatsMethod" || name == "csbSIPMthdHistoryStatsInterval" || name == "csbSIPMthdHistoryStatsMethodName" || name == "csbSIPMthdHistoryStatsReqIn" || name == "csbSIPMthdHistoryStatsReqOut" || name == "csbSIPMthdHistoryStatsResp1xxIn" || name == "csbSIPMthdHistoryStatsResp1xxOut" || name == "csbSIPMthdHistoryStatsResp2xxIn" || name == "csbSIPMthdHistoryStatsResp2xxOut" || name == "csbSIPMthdHistoryStatsResp3xxIn" || name == "csbSIPMthdHistoryStatsResp3xxOut" || name == "csbSIPMthdHistoryStatsResp4xxIn" || name == "csbSIPMthdHistoryStatsResp4xxOut" || name == "csbSIPMthdHistoryStatsResp5xxIn" || name == "csbSIPMthdHistoryStatsResp5xxOut" || name == "csbSIPMthdHistoryStatsResp6xxIn" || name == "csbSIPMthdHistoryStatsResp6xxOut")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatstable()
{

    yang_name = "csbSIPMthdRCCurrentStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::~Csbsipmthdrccurrentstatstable()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdrccurrentstatsentry.size(); index++)
    {
        if(csbsipmthdrccurrentstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdrccurrentstatsentry.size(); index++)
    {
        if(csbsipmthdrccurrentstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCCurrentStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdRCCurrentStatsEntry")
    {
        auto c = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry>();
        c->parent = this;
        csbsipmthdrccurrentstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csbsipmthdrccurrentstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbSIPMthdRCCurrentStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::Csbsipmthdrccurrentstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbsipmthdrccurrentstatsadjname{YType::str, "csbSIPMthdRCCurrentStatsAdjName"},
    csbsipmthdrccurrentstatsmethod{YType::enumeration, "csbSIPMthdRCCurrentStatsMethod"},
    csbsipmthdrccurrentstatsrespcode{YType::uint32, "csbSIPMthdRCCurrentStatsRespCode"},
    csbsipmthdrccurrentstatsinterval{YType::enumeration, "csbSIPMthdRCCurrentStatsInterval"},
    csbsipmthdrccurrentstatsmethodname{YType::str, "csbSIPMthdRCCurrentStatsMethodName"},
    csbsipmthdrccurrentstatsrespin{YType::uint32, "csbSIPMthdRCCurrentStatsRespIn"},
    csbsipmthdrccurrentstatsrespout{YType::uint32, "csbSIPMthdRCCurrentStatsRespOut"}
{

    yang_name = "csbSIPMthdRCCurrentStatsEntry"; yang_parent_name = "csbSIPMthdRCCurrentStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::~Csbsipmthdrccurrentstatsentry()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbsipmthdrccurrentstatsadjname.is_set
	|| csbsipmthdrccurrentstatsmethod.is_set
	|| csbsipmthdrccurrentstatsrespcode.is_set
	|| csbsipmthdrccurrentstatsinterval.is_set
	|| csbsipmthdrccurrentstatsmethodname.is_set
	|| csbsipmthdrccurrentstatsrespin.is_set
	|| csbsipmthdrccurrentstatsrespout.is_set;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbsipmthdrccurrentstatsadjname.yfilter)
	|| ydk::is_set(csbsipmthdrccurrentstatsmethod.yfilter)
	|| ydk::is_set(csbsipmthdrccurrentstatsrespcode.yfilter)
	|| ydk::is_set(csbsipmthdrccurrentstatsinterval.yfilter)
	|| ydk::is_set(csbsipmthdrccurrentstatsmethodname.yfilter)
	|| ydk::is_set(csbsipmthdrccurrentstatsrespin.yfilter)
	|| ydk::is_set(csbsipmthdrccurrentstatsrespout.yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdRCCurrentStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCCurrentStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdRCCurrentStatsAdjName='" <<csbsipmthdrccurrentstatsadjname <<"']" <<"[csbSIPMthdRCCurrentStatsMethod='" <<csbsipmthdrccurrentstatsmethod <<"']" <<"[csbSIPMthdRCCurrentStatsRespCode='" <<csbsipmthdrccurrentstatsrespcode <<"']" <<"[csbSIPMthdRCCurrentStatsInterval='" <<csbsipmthdrccurrentstatsinterval <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdrccurrentstatsadjname.is_set || is_set(csbsipmthdrccurrentstatsadjname.yfilter)) leaf_name_data.push_back(csbsipmthdrccurrentstatsadjname.get_name_leafdata());
    if (csbsipmthdrccurrentstatsmethod.is_set || is_set(csbsipmthdrccurrentstatsmethod.yfilter)) leaf_name_data.push_back(csbsipmthdrccurrentstatsmethod.get_name_leafdata());
    if (csbsipmthdrccurrentstatsrespcode.is_set || is_set(csbsipmthdrccurrentstatsrespcode.yfilter)) leaf_name_data.push_back(csbsipmthdrccurrentstatsrespcode.get_name_leafdata());
    if (csbsipmthdrccurrentstatsinterval.is_set || is_set(csbsipmthdrccurrentstatsinterval.yfilter)) leaf_name_data.push_back(csbsipmthdrccurrentstatsinterval.get_name_leafdata());
    if (csbsipmthdrccurrentstatsmethodname.is_set || is_set(csbsipmthdrccurrentstatsmethodname.yfilter)) leaf_name_data.push_back(csbsipmthdrccurrentstatsmethodname.get_name_leafdata());
    if (csbsipmthdrccurrentstatsrespin.is_set || is_set(csbsipmthdrccurrentstatsrespin.yfilter)) leaf_name_data.push_back(csbsipmthdrccurrentstatsrespin.get_name_leafdata());
    if (csbsipmthdrccurrentstatsrespout.is_set || is_set(csbsipmthdrccurrentstatsrespout.yfilter)) leaf_name_data.push_back(csbsipmthdrccurrentstatsrespout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
        csbcallstatsinstanceindex.value_namespace = name_space;
        csbcallstatsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
        csbcallstatsserviceindex.value_namespace = name_space;
        csbcallstatsserviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsAdjName")
    {
        csbsipmthdrccurrentstatsadjname = value;
        csbsipmthdrccurrentstatsadjname.value_namespace = name_space;
        csbsipmthdrccurrentstatsadjname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsMethod")
    {
        csbsipmthdrccurrentstatsmethod = value;
        csbsipmthdrccurrentstatsmethod.value_namespace = name_space;
        csbsipmthdrccurrentstatsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespCode")
    {
        csbsipmthdrccurrentstatsrespcode = value;
        csbsipmthdrccurrentstatsrespcode.value_namespace = name_space;
        csbsipmthdrccurrentstatsrespcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsInterval")
    {
        csbsipmthdrccurrentstatsinterval = value;
        csbsipmthdrccurrentstatsinterval.value_namespace = name_space;
        csbsipmthdrccurrentstatsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsMethodName")
    {
        csbsipmthdrccurrentstatsmethodname = value;
        csbsipmthdrccurrentstatsmethodname.value_namespace = name_space;
        csbsipmthdrccurrentstatsmethodname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespIn")
    {
        csbsipmthdrccurrentstatsrespin = value;
        csbsipmthdrccurrentstatsrespin.value_namespace = name_space;
        csbsipmthdrccurrentstatsrespin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespOut")
    {
        csbsipmthdrccurrentstatsrespout = value;
        csbsipmthdrccurrentstatsrespout.value_namespace = name_space;
        csbsipmthdrccurrentstatsrespout.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsAdjName")
    {
        csbsipmthdrccurrentstatsadjname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsMethod")
    {
        csbsipmthdrccurrentstatsmethod.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespCode")
    {
        csbsipmthdrccurrentstatsrespcode.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsInterval")
    {
        csbsipmthdrccurrentstatsinterval.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsMethodName")
    {
        csbsipmthdrccurrentstatsmethodname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespIn")
    {
        csbsipmthdrccurrentstatsrespin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespOut")
    {
        csbsipmthdrccurrentstatsrespout.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbSIPMthdRCCurrentStatsAdjName" || name == "csbSIPMthdRCCurrentStatsMethod" || name == "csbSIPMthdRCCurrentStatsRespCode" || name == "csbSIPMthdRCCurrentStatsInterval" || name == "csbSIPMthdRCCurrentStatsMethodName" || name == "csbSIPMthdRCCurrentStatsRespIn" || name == "csbSIPMthdRCCurrentStatsRespOut")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatstable()
{

    yang_name = "csbSIPMthdRCHistoryStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::~Csbsipmthdrchistorystatstable()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdrchistorystatsentry.size(); index++)
    {
        if(csbsipmthdrchistorystatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdrchistorystatsentry.size(); index++)
    {
        if(csbsipmthdrchistorystatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCHistoryStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdRCHistoryStatsEntry")
    {
        auto c = std::make_shared<CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry>();
        c->parent = this;
        csbsipmthdrchistorystatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csbsipmthdrchistorystatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbSIPMthdRCHistoryStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::Csbsipmthdrchistorystatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbsipmthdrchistorystatsadjname{YType::str, "csbSIPMthdRCHistoryStatsAdjName"},
    csbsipmthdrchistorystatsmethod{YType::enumeration, "csbSIPMthdRCHistoryStatsMethod"},
    csbsipmthdrchistorystatsrespcode{YType::uint32, "csbSIPMthdRCHistoryStatsRespCode"},
    csbsipmthdrchistorystatsinterval{YType::enumeration, "csbSIPMthdRCHistoryStatsInterval"},
    csbsipmthdrchistorystatsmethodname{YType::str, "csbSIPMthdRCHistoryStatsMethodName"},
    csbsipmthdrchistorystatsrespin{YType::uint32, "csbSIPMthdRCHistoryStatsRespIn"},
    csbsipmthdrchistorystatsrespout{YType::uint32, "csbSIPMthdRCHistoryStatsRespOut"}
{

    yang_name = "csbSIPMthdRCHistoryStatsEntry"; yang_parent_name = "csbSIPMthdRCHistoryStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::~Csbsipmthdrchistorystatsentry()
{
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbsipmthdrchistorystatsadjname.is_set
	|| csbsipmthdrchistorystatsmethod.is_set
	|| csbsipmthdrchistorystatsrespcode.is_set
	|| csbsipmthdrchistorystatsinterval.is_set
	|| csbsipmthdrchistorystatsmethodname.is_set
	|| csbsipmthdrchistorystatsrespin.is_set
	|| csbsipmthdrchistorystatsrespout.is_set;
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbsipmthdrchistorystatsadjname.yfilter)
	|| ydk::is_set(csbsipmthdrchistorystatsmethod.yfilter)
	|| ydk::is_set(csbsipmthdrchistorystatsrespcode.yfilter)
	|| ydk::is_set(csbsipmthdrchistorystatsinterval.yfilter)
	|| ydk::is_set(csbsipmthdrchistorystatsmethodname.yfilter)
	|| ydk::is_set(csbsipmthdrchistorystatsrespin.yfilter)
	|| ydk::is_set(csbsipmthdrchistorystatsrespout.yfilter);
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdRCHistoryStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCHistoryStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdRCHistoryStatsAdjName='" <<csbsipmthdrchistorystatsadjname <<"']" <<"[csbSIPMthdRCHistoryStatsMethod='" <<csbsipmthdrchistorystatsmethod <<"']" <<"[csbSIPMthdRCHistoryStatsRespCode='" <<csbsipmthdrchistorystatsrespcode <<"']" <<"[csbSIPMthdRCHistoryStatsInterval='" <<csbsipmthdrchistorystatsinterval <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdrchistorystatsadjname.is_set || is_set(csbsipmthdrchistorystatsadjname.yfilter)) leaf_name_data.push_back(csbsipmthdrchistorystatsadjname.get_name_leafdata());
    if (csbsipmthdrchistorystatsmethod.is_set || is_set(csbsipmthdrchistorystatsmethod.yfilter)) leaf_name_data.push_back(csbsipmthdrchistorystatsmethod.get_name_leafdata());
    if (csbsipmthdrchistorystatsrespcode.is_set || is_set(csbsipmthdrchistorystatsrespcode.yfilter)) leaf_name_data.push_back(csbsipmthdrchistorystatsrespcode.get_name_leafdata());
    if (csbsipmthdrchistorystatsinterval.is_set || is_set(csbsipmthdrchistorystatsinterval.yfilter)) leaf_name_data.push_back(csbsipmthdrchistorystatsinterval.get_name_leafdata());
    if (csbsipmthdrchistorystatsmethodname.is_set || is_set(csbsipmthdrchistorystatsmethodname.yfilter)) leaf_name_data.push_back(csbsipmthdrchistorystatsmethodname.get_name_leafdata());
    if (csbsipmthdrchistorystatsrespin.is_set || is_set(csbsipmthdrchistorystatsrespin.yfilter)) leaf_name_data.push_back(csbsipmthdrchistorystatsrespin.get_name_leafdata());
    if (csbsipmthdrchistorystatsrespout.is_set || is_set(csbsipmthdrchistorystatsrespout.yfilter)) leaf_name_data.push_back(csbsipmthdrchistorystatsrespout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
        csbcallstatsinstanceindex.value_namespace = name_space;
        csbcallstatsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
        csbcallstatsserviceindex.value_namespace = name_space;
        csbcallstatsserviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsAdjName")
    {
        csbsipmthdrchistorystatsadjname = value;
        csbsipmthdrchistorystatsadjname.value_namespace = name_space;
        csbsipmthdrchistorystatsadjname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsMethod")
    {
        csbsipmthdrchistorystatsmethod = value;
        csbsipmthdrchistorystatsmethod.value_namespace = name_space;
        csbsipmthdrchistorystatsmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespCode")
    {
        csbsipmthdrchistorystatsrespcode = value;
        csbsipmthdrchistorystatsrespcode.value_namespace = name_space;
        csbsipmthdrchistorystatsrespcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsInterval")
    {
        csbsipmthdrchistorystatsinterval = value;
        csbsipmthdrchistorystatsinterval.value_namespace = name_space;
        csbsipmthdrchistorystatsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsMethodName")
    {
        csbsipmthdrchistorystatsmethodname = value;
        csbsipmthdrchistorystatsmethodname.value_namespace = name_space;
        csbsipmthdrchistorystatsmethodname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespIn")
    {
        csbsipmthdrchistorystatsrespin = value;
        csbsipmthdrchistorystatsrespin.value_namespace = name_space;
        csbsipmthdrchistorystatsrespin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespOut")
    {
        csbsipmthdrchistorystatsrespout = value;
        csbsipmthdrchistorystatsrespout.value_namespace = name_space;
        csbsipmthdrchistorystatsrespout.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsAdjName")
    {
        csbsipmthdrchistorystatsadjname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsMethod")
    {
        csbsipmthdrchistorystatsmethod.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespCode")
    {
        csbsipmthdrchistorystatsrespcode.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsInterval")
    {
        csbsipmthdrchistorystatsinterval.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsMethodName")
    {
        csbsipmthdrchistorystatsmethodname.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespIn")
    {
        csbsipmthdrchistorystatsrespin.yfilter = yfilter;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespOut")
    {
        csbsipmthdrchistorystatsrespout.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbSIPMthdRCHistoryStatsAdjName" || name == "csbSIPMthdRCHistoryStatsMethod" || name == "csbSIPMthdRCHistoryStatsRespCode" || name == "csbSIPMthdRCHistoryStatsInterval" || name == "csbSIPMthdRCHistoryStatsMethodName" || name == "csbSIPMthdRCHistoryStatsRespIn" || name == "csbSIPMthdRCHistoryStatsRespOut")
        return true;
    return false;
}

const Enum::YLeaf CiscoSbcSIPMethod::unknown {1, "unknown"};
const Enum::YLeaf CiscoSbcSIPMethod::ack {2, "ack"};
const Enum::YLeaf CiscoSbcSIPMethod::bye {3, "bye"};
const Enum::YLeaf CiscoSbcSIPMethod::cancel {4, "cancel"};
const Enum::YLeaf CiscoSbcSIPMethod::info {5, "info"};
const Enum::YLeaf CiscoSbcSIPMethod::invite {6, "invite"};
const Enum::YLeaf CiscoSbcSIPMethod::message {7, "message"};
const Enum::YLeaf CiscoSbcSIPMethod::notify {8, "notify"};
const Enum::YLeaf CiscoSbcSIPMethod::options {9, "options"};
const Enum::YLeaf CiscoSbcSIPMethod::prack {10, "prack"};
const Enum::YLeaf CiscoSbcSIPMethod::refer {11, "refer"};
const Enum::YLeaf CiscoSbcSIPMethod::register_ {12, "register"};
const Enum::YLeaf CiscoSbcSIPMethod::subscribe {13, "subscribe"};
const Enum::YLeaf CiscoSbcSIPMethod::update {14, "update"};

const Enum::YLeaf CiscoSbcRadiusClientType::authentication {1, "authentication"};
const Enum::YLeaf CiscoSbcRadiusClientType::accounting {2, "accounting"};


}
}

