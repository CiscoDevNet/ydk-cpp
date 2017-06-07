
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SESS_BORDER_CTRLR_STATS_MIB.hpp"

namespace ydk {
namespace CISCO_SESS_BORDER_CTRLR_STATS_MIB {

CiscoSessBorderCtrlrStatsMib::CiscoSessBorderCtrlrStatsMib()
    :
    csbradiusstatstable(std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable>())
	,csbrfbillrealmstatstable(std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable>())
	,csbsipmthdcurrentstatstable(std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable>())
	,csbsipmthdhistorystatstable(std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable>())
	,csbsipmthdrccurrentstatstable(std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable>())
	,csbsipmthdrchistorystatstable(std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable>())
{
    csbradiusstatstable->parent = this;

    csbrfbillrealmstatstable->parent = this;

    csbsipmthdcurrentstatstable->parent = this;

    csbsipmthdhistorystatstable->parent = this;

    csbsipmthdrccurrentstatstable->parent = this;

    csbsipmthdrchistorystatstable->parent = this;

    yang_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB";
}

CiscoSessBorderCtrlrStatsMib::~CiscoSessBorderCtrlrStatsMib()
{
}

bool CiscoSessBorderCtrlrStatsMib::has_data() const
{
    return (csbradiusstatstable !=  nullptr && csbradiusstatstable->has_data())
	|| (csbrfbillrealmstatstable !=  nullptr && csbrfbillrealmstatstable->has_data())
	|| (csbsipmthdcurrentstatstable !=  nullptr && csbsipmthdcurrentstatstable->has_data())
	|| (csbsipmthdhistorystatstable !=  nullptr && csbsipmthdhistorystatstable->has_data())
	|| (csbsipmthdrccurrentstatstable !=  nullptr && csbsipmthdrccurrentstatstable->has_data())
	|| (csbsipmthdrchistorystatstable !=  nullptr && csbsipmthdrchistorystatstable->has_data());
}

bool CiscoSessBorderCtrlrStatsMib::has_operation() const
{
    return is_set(operation)
	|| (csbradiusstatstable !=  nullptr && csbradiusstatstable->has_operation())
	|| (csbrfbillrealmstatstable !=  nullptr && csbrfbillrealmstatstable->has_operation())
	|| (csbsipmthdcurrentstatstable !=  nullptr && csbsipmthdcurrentstatstable->has_operation())
	|| (csbsipmthdhistorystatstable !=  nullptr && csbsipmthdhistorystatstable->has_operation())
	|| (csbsipmthdrccurrentstatstable !=  nullptr && csbsipmthdrccurrentstatstable->has_operation())
	|| (csbsipmthdrchistorystatstable !=  nullptr && csbsipmthdrchistorystatstable->has_operation());
}

std::string CiscoSessBorderCtrlrStatsMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbRadiusStatsTable")
    {
        if(csbradiusstatstable == nullptr)
        {
            csbradiusstatstable = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable>();
        }
        return csbradiusstatstable;
    }

    if(child_yang_name == "csbRfBillRealmStatsTable")
    {
        if(csbrfbillrealmstatstable == nullptr)
        {
            csbrfbillrealmstatstable = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable>();
        }
        return csbrfbillrealmstatstable;
    }

    if(child_yang_name == "csbSIPMthdCurrentStatsTable")
    {
        if(csbsipmthdcurrentstatstable == nullptr)
        {
            csbsipmthdcurrentstatstable = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable>();
        }
        return csbsipmthdcurrentstatstable;
    }

    if(child_yang_name == "csbSIPMthdHistoryStatsTable")
    {
        if(csbsipmthdhistorystatstable == nullptr)
        {
            csbsipmthdhistorystatstable = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable>();
        }
        return csbsipmthdhistorystatstable;
    }

    if(child_yang_name == "csbSIPMthdRCCurrentStatsTable")
    {
        if(csbsipmthdrccurrentstatstable == nullptr)
        {
            csbsipmthdrccurrentstatstable = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable>();
        }
        return csbsipmthdrccurrentstatstable;
    }

    if(child_yang_name == "csbSIPMthdRCHistoryStatsTable")
    {
        if(csbsipmthdrchistorystatstable == nullptr)
        {
            csbsipmthdrchistorystatstable = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable>();
        }
        return csbsipmthdrchistorystatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void CiscoSessBorderCtrlrStatsMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::clone_ptr() const
{
    return std::make_shared<CiscoSessBorderCtrlrStatsMib>();
}

std::string CiscoSessBorderCtrlrStatsMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoSessBorderCtrlrStatsMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoSessBorderCtrlrStatsMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatstable()
{
    yang_name = "csbRadiusStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB";
}

CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::~Csbradiusstatstable()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::has_data() const
{
    for (std::size_t index=0; index<csbradiusstatsentry.size(); index++)
    {
        if(csbradiusstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbradiusstatsentry.size(); index++)
    {
        if(csbradiusstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRadiusStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbRadiusStatsEntry")
    {
        for(auto const & c : csbradiusstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry>();
        c->parent = this;
        csbradiusstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbradiusstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::Csbradiusstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbradiusstatsentindex{YType::uint32, "csbRadiusStatsEntIndex"},
    csbradiusstatsacsaccpts{YType::uint64, "csbRadiusStatsAcsAccpts"},
    csbradiusstatsacschalls{YType::uint64, "csbRadiusStatsAcsChalls"},
    csbradiusstatsacsrejects{YType::uint64, "csbRadiusStatsAcsRejects"},
    csbradiusstatsacsreqs{YType::uint64, "csbRadiusStatsAcsReqs"},
    csbradiusstatsacsrtrns{YType::uint64, "csbRadiusStatsAcsRtrns"},
    csbradiusstatsactreqs{YType::uint64, "csbRadiusStatsActReqs"},
    csbradiusstatsactretrans{YType::uint64, "csbRadiusStatsActRetrans"},
    csbradiusstatsactrsps{YType::uint64, "csbRadiusStatsActRsps"},
    csbradiusstatsbadauths{YType::uint64, "csbRadiusStatsBadAuths"},
    csbradiusstatsclientname{YType::str, "csbRadiusStatsClientName"},
    csbradiusstatsclienttype{YType::enumeration, "csbRadiusStatsClientType"},
    csbradiusstatsdropped{YType::uint64, "csbRadiusStatsDropped"},
    csbradiusstatsmalformedrsps{YType::uint64, "csbRadiusStatsMalformedRsps"},
    csbradiusstatspending{YType::uint32, "csbRadiusStatsPending"},
    csbradiusstatssrvrname{YType::str, "csbRadiusStatsSrvrName"},
    csbradiusstatstimeouts{YType::uint64, "csbRadiusStatsTimeouts"},
    csbradiusstatsunknowntype{YType::uint64, "csbRadiusStatsUnknownType"}
{
    yang_name = "csbRadiusStatsEntry"; yang_parent_name = "csbRadiusStatsTable";
}

CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::~Csbradiusstatsentry()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbradiusstatsentindex.is_set
	|| csbradiusstatsacsaccpts.is_set
	|| csbradiusstatsacschalls.is_set
	|| csbradiusstatsacsrejects.is_set
	|| csbradiusstatsacsreqs.is_set
	|| csbradiusstatsacsrtrns.is_set
	|| csbradiusstatsactreqs.is_set
	|| csbradiusstatsactretrans.is_set
	|| csbradiusstatsactrsps.is_set
	|| csbradiusstatsbadauths.is_set
	|| csbradiusstatsclientname.is_set
	|| csbradiusstatsclienttype.is_set
	|| csbradiusstatsdropped.is_set
	|| csbradiusstatsmalformedrsps.is_set
	|| csbradiusstatspending.is_set
	|| csbradiusstatssrvrname.is_set
	|| csbradiusstatstimeouts.is_set
	|| csbradiusstatsunknowntype.is_set;
}

bool CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbradiusstatsentindex.operation)
	|| is_set(csbradiusstatsacsaccpts.operation)
	|| is_set(csbradiusstatsacschalls.operation)
	|| is_set(csbradiusstatsacsrejects.operation)
	|| is_set(csbradiusstatsacsreqs.operation)
	|| is_set(csbradiusstatsacsrtrns.operation)
	|| is_set(csbradiusstatsactreqs.operation)
	|| is_set(csbradiusstatsactretrans.operation)
	|| is_set(csbradiusstatsactrsps.operation)
	|| is_set(csbradiusstatsbadauths.operation)
	|| is_set(csbradiusstatsclientname.operation)
	|| is_set(csbradiusstatsclienttype.operation)
	|| is_set(csbradiusstatsdropped.operation)
	|| is_set(csbradiusstatsmalformedrsps.operation)
	|| is_set(csbradiusstatspending.operation)
	|| is_set(csbradiusstatssrvrname.operation)
	|| is_set(csbradiusstatstimeouts.operation)
	|| is_set(csbradiusstatsunknowntype.operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRadiusStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbRadiusStatsEntIndex='" <<csbradiusstatsentindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbRadiusStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbradiusstatsentindex.is_set || is_set(csbradiusstatsentindex.operation)) leaf_name_data.push_back(csbradiusstatsentindex.get_name_leafdata());
    if (csbradiusstatsacsaccpts.is_set || is_set(csbradiusstatsacsaccpts.operation)) leaf_name_data.push_back(csbradiusstatsacsaccpts.get_name_leafdata());
    if (csbradiusstatsacschalls.is_set || is_set(csbradiusstatsacschalls.operation)) leaf_name_data.push_back(csbradiusstatsacschalls.get_name_leafdata());
    if (csbradiusstatsacsrejects.is_set || is_set(csbradiusstatsacsrejects.operation)) leaf_name_data.push_back(csbradiusstatsacsrejects.get_name_leafdata());
    if (csbradiusstatsacsreqs.is_set || is_set(csbradiusstatsacsreqs.operation)) leaf_name_data.push_back(csbradiusstatsacsreqs.get_name_leafdata());
    if (csbradiusstatsacsrtrns.is_set || is_set(csbradiusstatsacsrtrns.operation)) leaf_name_data.push_back(csbradiusstatsacsrtrns.get_name_leafdata());
    if (csbradiusstatsactreqs.is_set || is_set(csbradiusstatsactreqs.operation)) leaf_name_data.push_back(csbradiusstatsactreqs.get_name_leafdata());
    if (csbradiusstatsactretrans.is_set || is_set(csbradiusstatsactretrans.operation)) leaf_name_data.push_back(csbradiusstatsactretrans.get_name_leafdata());
    if (csbradiusstatsactrsps.is_set || is_set(csbradiusstatsactrsps.operation)) leaf_name_data.push_back(csbradiusstatsactrsps.get_name_leafdata());
    if (csbradiusstatsbadauths.is_set || is_set(csbradiusstatsbadauths.operation)) leaf_name_data.push_back(csbradiusstatsbadauths.get_name_leafdata());
    if (csbradiusstatsclientname.is_set || is_set(csbradiusstatsclientname.operation)) leaf_name_data.push_back(csbradiusstatsclientname.get_name_leafdata());
    if (csbradiusstatsclienttype.is_set || is_set(csbradiusstatsclienttype.operation)) leaf_name_data.push_back(csbradiusstatsclienttype.get_name_leafdata());
    if (csbradiusstatsdropped.is_set || is_set(csbradiusstatsdropped.operation)) leaf_name_data.push_back(csbradiusstatsdropped.get_name_leafdata());
    if (csbradiusstatsmalformedrsps.is_set || is_set(csbradiusstatsmalformedrsps.operation)) leaf_name_data.push_back(csbradiusstatsmalformedrsps.get_name_leafdata());
    if (csbradiusstatspending.is_set || is_set(csbradiusstatspending.operation)) leaf_name_data.push_back(csbradiusstatspending.get_name_leafdata());
    if (csbradiusstatssrvrname.is_set || is_set(csbradiusstatssrvrname.operation)) leaf_name_data.push_back(csbradiusstatssrvrname.get_name_leafdata());
    if (csbradiusstatstimeouts.is_set || is_set(csbradiusstatstimeouts.operation)) leaf_name_data.push_back(csbradiusstatstimeouts.get_name_leafdata());
    if (csbradiusstatsunknowntype.is_set || is_set(csbradiusstatsunknowntype.operation)) leaf_name_data.push_back(csbradiusstatsunknowntype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbRadiusStatsEntIndex")
    {
        csbradiusstatsentindex = value;
    }
    if(value_path == "csbRadiusStatsAcsAccpts")
    {
        csbradiusstatsacsaccpts = value;
    }
    if(value_path == "csbRadiusStatsAcsChalls")
    {
        csbradiusstatsacschalls = value;
    }
    if(value_path == "csbRadiusStatsAcsRejects")
    {
        csbradiusstatsacsrejects = value;
    }
    if(value_path == "csbRadiusStatsAcsReqs")
    {
        csbradiusstatsacsreqs = value;
    }
    if(value_path == "csbRadiusStatsAcsRtrns")
    {
        csbradiusstatsacsrtrns = value;
    }
    if(value_path == "csbRadiusStatsActReqs")
    {
        csbradiusstatsactreqs = value;
    }
    if(value_path == "csbRadiusStatsActRetrans")
    {
        csbradiusstatsactretrans = value;
    }
    if(value_path == "csbRadiusStatsActRsps")
    {
        csbradiusstatsactrsps = value;
    }
    if(value_path == "csbRadiusStatsBadAuths")
    {
        csbradiusstatsbadauths = value;
    }
    if(value_path == "csbRadiusStatsClientName")
    {
        csbradiusstatsclientname = value;
    }
    if(value_path == "csbRadiusStatsClientType")
    {
        csbradiusstatsclienttype = value;
    }
    if(value_path == "csbRadiusStatsDropped")
    {
        csbradiusstatsdropped = value;
    }
    if(value_path == "csbRadiusStatsMalformedRsps")
    {
        csbradiusstatsmalformedrsps = value;
    }
    if(value_path == "csbRadiusStatsPending")
    {
        csbradiusstatspending = value;
    }
    if(value_path == "csbRadiusStatsSrvrName")
    {
        csbradiusstatssrvrname = value;
    }
    if(value_path == "csbRadiusStatsTimeouts")
    {
        csbradiusstatstimeouts = value;
    }
    if(value_path == "csbRadiusStatsUnknownType")
    {
        csbradiusstatsunknowntype = value;
    }
}

CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatstable()
{
    yang_name = "csbRfBillRealmStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB";
}

CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::~Csbrfbillrealmstatstable()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::has_data() const
{
    for (std::size_t index=0; index<csbrfbillrealmstatsentry.size(); index++)
    {
        if(csbrfbillrealmstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbrfbillrealmstatsentry.size(); index++)
    {
        if(csbrfbillrealmstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRfBillRealmStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbRfBillRealmStatsEntry")
    {
        for(auto const & c : csbrfbillrealmstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry>();
        c->parent = this;
        csbrfbillrealmstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbrfbillrealmstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::Csbrfbillrealmstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbrfbillrealmstatsindex{YType::uint32, "csbRfBillRealmStatsIndex"},
    csbrfbillrealmstatsrealmname{YType::str, "csbRfBillRealmStatsRealmName"},
    csbrfbillrealmstatsfaileventacrs{YType::uint32, "csbRfBillRealmStatsFailEventAcrs"},
    csbrfbillrealmstatsfailinterimacrs{YType::uint32, "csbRfBillRealmStatsFailInterimAcrs"},
    csbrfbillrealmstatsfailstartacrs{YType::uint32, "csbRfBillRealmStatsFailStartAcrs"},
    csbrfbillrealmstatsfailstopacrs{YType::uint32, "csbRfBillRealmStatsFailStopAcrs"},
    csbrfbillrealmstatssucceventacrs{YType::uint32, "csbRfBillRealmStatsSuccEventAcrs"},
    csbrfbillrealmstatssuccinterimacrs{YType::uint32, "csbRfBillRealmStatsSuccInterimAcrs"},
    csbrfbillrealmstatssuccstartacrs{YType::uint32, "csbRfBillRealmStatsSuccStartAcrs"},
    csbrfbillrealmstatssuccstopacrs{YType::uint32, "csbRfBillRealmStatsSuccStopAcrs"},
    csbrfbillrealmstatstotaleventacrs{YType::uint32, "csbRfBillRealmStatsTotalEventAcrs"},
    csbrfbillrealmstatstotalinterimacrs{YType::uint32, "csbRfBillRealmStatsTotalInterimAcrs"},
    csbrfbillrealmstatstotalstartacrs{YType::uint32, "csbRfBillRealmStatsTotalStartAcrs"},
    csbrfbillrealmstatstotalstopacrs{YType::uint32, "csbRfBillRealmStatsTotalStopAcrs"}
{
    yang_name = "csbRfBillRealmStatsEntry"; yang_parent_name = "csbRfBillRealmStatsTable";
}

CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::~Csbrfbillrealmstatsentry()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbrfbillrealmstatsindex.is_set
	|| csbrfbillrealmstatsrealmname.is_set
	|| csbrfbillrealmstatsfaileventacrs.is_set
	|| csbrfbillrealmstatsfailinterimacrs.is_set
	|| csbrfbillrealmstatsfailstartacrs.is_set
	|| csbrfbillrealmstatsfailstopacrs.is_set
	|| csbrfbillrealmstatssucceventacrs.is_set
	|| csbrfbillrealmstatssuccinterimacrs.is_set
	|| csbrfbillrealmstatssuccstartacrs.is_set
	|| csbrfbillrealmstatssuccstopacrs.is_set
	|| csbrfbillrealmstatstotaleventacrs.is_set
	|| csbrfbillrealmstatstotalinterimacrs.is_set
	|| csbrfbillrealmstatstotalstartacrs.is_set
	|| csbrfbillrealmstatstotalstopacrs.is_set;
}

bool CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbrfbillrealmstatsindex.operation)
	|| is_set(csbrfbillrealmstatsrealmname.operation)
	|| is_set(csbrfbillrealmstatsfaileventacrs.operation)
	|| is_set(csbrfbillrealmstatsfailinterimacrs.operation)
	|| is_set(csbrfbillrealmstatsfailstartacrs.operation)
	|| is_set(csbrfbillrealmstatsfailstopacrs.operation)
	|| is_set(csbrfbillrealmstatssucceventacrs.operation)
	|| is_set(csbrfbillrealmstatssuccinterimacrs.operation)
	|| is_set(csbrfbillrealmstatssuccstartacrs.operation)
	|| is_set(csbrfbillrealmstatssuccstopacrs.operation)
	|| is_set(csbrfbillrealmstatstotaleventacrs.operation)
	|| is_set(csbrfbillrealmstatstotalinterimacrs.operation)
	|| is_set(csbrfbillrealmstatstotalstartacrs.operation)
	|| is_set(csbrfbillrealmstatstotalstopacrs.operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbRfBillRealmStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbRfBillRealmStatsIndex='" <<csbrfbillrealmstatsindex <<"']" <<"[csbRfBillRealmStatsRealmName='" <<csbrfbillrealmstatsrealmname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbRfBillRealmStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbrfbillrealmstatsindex.is_set || is_set(csbrfbillrealmstatsindex.operation)) leaf_name_data.push_back(csbrfbillrealmstatsindex.get_name_leafdata());
    if (csbrfbillrealmstatsrealmname.is_set || is_set(csbrfbillrealmstatsrealmname.operation)) leaf_name_data.push_back(csbrfbillrealmstatsrealmname.get_name_leafdata());
    if (csbrfbillrealmstatsfaileventacrs.is_set || is_set(csbrfbillrealmstatsfaileventacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatsfaileventacrs.get_name_leafdata());
    if (csbrfbillrealmstatsfailinterimacrs.is_set || is_set(csbrfbillrealmstatsfailinterimacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatsfailinterimacrs.get_name_leafdata());
    if (csbrfbillrealmstatsfailstartacrs.is_set || is_set(csbrfbillrealmstatsfailstartacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatsfailstartacrs.get_name_leafdata());
    if (csbrfbillrealmstatsfailstopacrs.is_set || is_set(csbrfbillrealmstatsfailstopacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatsfailstopacrs.get_name_leafdata());
    if (csbrfbillrealmstatssucceventacrs.is_set || is_set(csbrfbillrealmstatssucceventacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatssucceventacrs.get_name_leafdata());
    if (csbrfbillrealmstatssuccinterimacrs.is_set || is_set(csbrfbillrealmstatssuccinterimacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatssuccinterimacrs.get_name_leafdata());
    if (csbrfbillrealmstatssuccstartacrs.is_set || is_set(csbrfbillrealmstatssuccstartacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatssuccstartacrs.get_name_leafdata());
    if (csbrfbillrealmstatssuccstopacrs.is_set || is_set(csbrfbillrealmstatssuccstopacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatssuccstopacrs.get_name_leafdata());
    if (csbrfbillrealmstatstotaleventacrs.is_set || is_set(csbrfbillrealmstatstotaleventacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatstotaleventacrs.get_name_leafdata());
    if (csbrfbillrealmstatstotalinterimacrs.is_set || is_set(csbrfbillrealmstatstotalinterimacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatstotalinterimacrs.get_name_leafdata());
    if (csbrfbillrealmstatstotalstartacrs.is_set || is_set(csbrfbillrealmstatstotalstartacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatstotalstartacrs.get_name_leafdata());
    if (csbrfbillrealmstatstotalstopacrs.is_set || is_set(csbrfbillrealmstatstotalstopacrs.operation)) leaf_name_data.push_back(csbrfbillrealmstatstotalstopacrs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbRfBillRealmStatsIndex")
    {
        csbrfbillrealmstatsindex = value;
    }
    if(value_path == "csbRfBillRealmStatsRealmName")
    {
        csbrfbillrealmstatsrealmname = value;
    }
    if(value_path == "csbRfBillRealmStatsFailEventAcrs")
    {
        csbrfbillrealmstatsfaileventacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsFailInterimAcrs")
    {
        csbrfbillrealmstatsfailinterimacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsFailStartAcrs")
    {
        csbrfbillrealmstatsfailstartacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsFailStopAcrs")
    {
        csbrfbillrealmstatsfailstopacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsSuccEventAcrs")
    {
        csbrfbillrealmstatssucceventacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsSuccInterimAcrs")
    {
        csbrfbillrealmstatssuccinterimacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsSuccStartAcrs")
    {
        csbrfbillrealmstatssuccstartacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsSuccStopAcrs")
    {
        csbrfbillrealmstatssuccstopacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsTotalEventAcrs")
    {
        csbrfbillrealmstatstotaleventacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsTotalInterimAcrs")
    {
        csbrfbillrealmstatstotalinterimacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsTotalStartAcrs")
    {
        csbrfbillrealmstatstotalstartacrs = value;
    }
    if(value_path == "csbRfBillRealmStatsTotalStopAcrs")
    {
        csbrfbillrealmstatstotalstopacrs = value;
    }
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatstable()
{
    yang_name = "csbSIPMthdCurrentStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::~Csbsipmthdcurrentstatstable()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdcurrentstatsentry.size(); index++)
    {
        if(csbsipmthdcurrentstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdcurrentstatsentry.size(); index++)
    {
        if(csbsipmthdcurrentstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdCurrentStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdCurrentStatsEntry")
    {
        for(auto const & c : csbsipmthdcurrentstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry>();
        c->parent = this;
        csbsipmthdcurrentstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbsipmthdcurrentstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::Csbsipmthdcurrentstatsentry()
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
    yang_name = "csbSIPMthdCurrentStatsEntry"; yang_parent_name = "csbSIPMthdCurrentStatsTable";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::~Csbsipmthdcurrentstatsentry()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::has_data() const
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

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbsipmthdcurrentstatsadjname.operation)
	|| is_set(csbsipmthdcurrentstatsmethod.operation)
	|| is_set(csbsipmthdcurrentstatsinterval.operation)
	|| is_set(csbsipmthdcurrentstatsmethodname.operation)
	|| is_set(csbsipmthdcurrentstatsreqin.operation)
	|| is_set(csbsipmthdcurrentstatsreqout.operation)
	|| is_set(csbsipmthdcurrentstatsresp1xxin.operation)
	|| is_set(csbsipmthdcurrentstatsresp1xxout.operation)
	|| is_set(csbsipmthdcurrentstatsresp2xxin.operation)
	|| is_set(csbsipmthdcurrentstatsresp2xxout.operation)
	|| is_set(csbsipmthdcurrentstatsresp3xxin.operation)
	|| is_set(csbsipmthdcurrentstatsresp3xxout.operation)
	|| is_set(csbsipmthdcurrentstatsresp4xxin.operation)
	|| is_set(csbsipmthdcurrentstatsresp4xxout.operation)
	|| is_set(csbsipmthdcurrentstatsresp5xxin.operation)
	|| is_set(csbsipmthdcurrentstatsresp5xxout.operation)
	|| is_set(csbsipmthdcurrentstatsresp6xxin.operation)
	|| is_set(csbsipmthdcurrentstatsresp6xxout.operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdCurrentStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdCurrentStatsAdjName='" <<csbsipmthdcurrentstatsadjname <<"']" <<"[csbSIPMthdCurrentStatsMethod='" <<csbsipmthdcurrentstatsmethod <<"']" <<"[csbSIPMthdCurrentStatsInterval='" <<csbsipmthdcurrentstatsinterval <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdCurrentStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdcurrentstatsadjname.is_set || is_set(csbsipmthdcurrentstatsadjname.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsadjname.get_name_leafdata());
    if (csbsipmthdcurrentstatsmethod.is_set || is_set(csbsipmthdcurrentstatsmethod.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsmethod.get_name_leafdata());
    if (csbsipmthdcurrentstatsinterval.is_set || is_set(csbsipmthdcurrentstatsinterval.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsinterval.get_name_leafdata());
    if (csbsipmthdcurrentstatsmethodname.is_set || is_set(csbsipmthdcurrentstatsmethodname.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsmethodname.get_name_leafdata());
    if (csbsipmthdcurrentstatsreqin.is_set || is_set(csbsipmthdcurrentstatsreqin.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsreqin.get_name_leafdata());
    if (csbsipmthdcurrentstatsreqout.is_set || is_set(csbsipmthdcurrentstatsreqout.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsreqout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp1xxin.is_set || is_set(csbsipmthdcurrentstatsresp1xxin.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp1xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp1xxout.is_set || is_set(csbsipmthdcurrentstatsresp1xxout.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp1xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp2xxin.is_set || is_set(csbsipmthdcurrentstatsresp2xxin.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp2xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp2xxout.is_set || is_set(csbsipmthdcurrentstatsresp2xxout.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp2xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp3xxin.is_set || is_set(csbsipmthdcurrentstatsresp3xxin.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp3xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp3xxout.is_set || is_set(csbsipmthdcurrentstatsresp3xxout.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp3xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp4xxin.is_set || is_set(csbsipmthdcurrentstatsresp4xxin.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp4xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp4xxout.is_set || is_set(csbsipmthdcurrentstatsresp4xxout.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp4xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp5xxin.is_set || is_set(csbsipmthdcurrentstatsresp5xxin.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp5xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp5xxout.is_set || is_set(csbsipmthdcurrentstatsresp5xxout.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp5xxout.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp6xxin.is_set || is_set(csbsipmthdcurrentstatsresp6xxin.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp6xxin.get_name_leafdata());
    if (csbsipmthdcurrentstatsresp6xxout.is_set || is_set(csbsipmthdcurrentstatsresp6xxout.operation)) leaf_name_data.push_back(csbsipmthdcurrentstatsresp6xxout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsAdjName")
    {
        csbsipmthdcurrentstatsadjname = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsMethod")
    {
        csbsipmthdcurrentstatsmethod = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsInterval")
    {
        csbsipmthdcurrentstatsinterval = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsMethodName")
    {
        csbsipmthdcurrentstatsmethodname = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsReqIn")
    {
        csbsipmthdcurrentstatsreqin = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsReqOut")
    {
        csbsipmthdcurrentstatsreqout = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp1xxIn")
    {
        csbsipmthdcurrentstatsresp1xxin = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp1xxOut")
    {
        csbsipmthdcurrentstatsresp1xxout = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp2xxIn")
    {
        csbsipmthdcurrentstatsresp2xxin = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp2xxOut")
    {
        csbsipmthdcurrentstatsresp2xxout = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp3xxIn")
    {
        csbsipmthdcurrentstatsresp3xxin = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp3xxOut")
    {
        csbsipmthdcurrentstatsresp3xxout = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp4xxIn")
    {
        csbsipmthdcurrentstatsresp4xxin = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp4xxOut")
    {
        csbsipmthdcurrentstatsresp4xxout = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp5xxIn")
    {
        csbsipmthdcurrentstatsresp5xxin = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp5xxOut")
    {
        csbsipmthdcurrentstatsresp5xxout = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp6xxIn")
    {
        csbsipmthdcurrentstatsresp6xxin = value;
    }
    if(value_path == "csbSIPMthdCurrentStatsResp6xxOut")
    {
        csbsipmthdcurrentstatsresp6xxout = value;
    }
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatstable()
{
    yang_name = "csbSIPMthdHistoryStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::~Csbsipmthdhistorystatstable()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdhistorystatsentry.size(); index++)
    {
        if(csbsipmthdhistorystatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdhistorystatsentry.size(); index++)
    {
        if(csbsipmthdhistorystatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdHistoryStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdHistoryStatsEntry")
    {
        for(auto const & c : csbsipmthdhistorystatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry>();
        c->parent = this;
        csbsipmthdhistorystatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbsipmthdhistorystatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::Csbsipmthdhistorystatsentry()
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
    yang_name = "csbSIPMthdHistoryStatsEntry"; yang_parent_name = "csbSIPMthdHistoryStatsTable";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::~Csbsipmthdhistorystatsentry()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::has_data() const
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

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbsipmthdhistorystatsadjname.operation)
	|| is_set(csbsipmthdhistorystatsmethod.operation)
	|| is_set(csbsipmthdhistorystatsinterval.operation)
	|| is_set(csbsipmthdhistorystatsmethodname.operation)
	|| is_set(csbsipmthdhistorystatsreqin.operation)
	|| is_set(csbsipmthdhistorystatsreqout.operation)
	|| is_set(csbsipmthdhistorystatsresp1xxin.operation)
	|| is_set(csbsipmthdhistorystatsresp1xxout.operation)
	|| is_set(csbsipmthdhistorystatsresp2xxin.operation)
	|| is_set(csbsipmthdhistorystatsresp2xxout.operation)
	|| is_set(csbsipmthdhistorystatsresp3xxin.operation)
	|| is_set(csbsipmthdhistorystatsresp3xxout.operation)
	|| is_set(csbsipmthdhistorystatsresp4xxin.operation)
	|| is_set(csbsipmthdhistorystatsresp4xxout.operation)
	|| is_set(csbsipmthdhistorystatsresp5xxin.operation)
	|| is_set(csbsipmthdhistorystatsresp5xxout.operation)
	|| is_set(csbsipmthdhistorystatsresp6xxin.operation)
	|| is_set(csbsipmthdhistorystatsresp6xxout.operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdHistoryStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdHistoryStatsAdjName='" <<csbsipmthdhistorystatsadjname <<"']" <<"[csbSIPMthdHistoryStatsMethod='" <<csbsipmthdhistorystatsmethod <<"']" <<"[csbSIPMthdHistoryStatsInterval='" <<csbsipmthdhistorystatsinterval <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdHistoryStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdhistorystatsadjname.is_set || is_set(csbsipmthdhistorystatsadjname.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsadjname.get_name_leafdata());
    if (csbsipmthdhistorystatsmethod.is_set || is_set(csbsipmthdhistorystatsmethod.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsmethod.get_name_leafdata());
    if (csbsipmthdhistorystatsinterval.is_set || is_set(csbsipmthdhistorystatsinterval.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsinterval.get_name_leafdata());
    if (csbsipmthdhistorystatsmethodname.is_set || is_set(csbsipmthdhistorystatsmethodname.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsmethodname.get_name_leafdata());
    if (csbsipmthdhistorystatsreqin.is_set || is_set(csbsipmthdhistorystatsreqin.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsreqin.get_name_leafdata());
    if (csbsipmthdhistorystatsreqout.is_set || is_set(csbsipmthdhistorystatsreqout.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsreqout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp1xxin.is_set || is_set(csbsipmthdhistorystatsresp1xxin.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp1xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp1xxout.is_set || is_set(csbsipmthdhistorystatsresp1xxout.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp1xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp2xxin.is_set || is_set(csbsipmthdhistorystatsresp2xxin.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp2xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp2xxout.is_set || is_set(csbsipmthdhistorystatsresp2xxout.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp2xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp3xxin.is_set || is_set(csbsipmthdhistorystatsresp3xxin.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp3xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp3xxout.is_set || is_set(csbsipmthdhistorystatsresp3xxout.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp3xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp4xxin.is_set || is_set(csbsipmthdhistorystatsresp4xxin.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp4xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp4xxout.is_set || is_set(csbsipmthdhistorystatsresp4xxout.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp4xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp5xxin.is_set || is_set(csbsipmthdhistorystatsresp5xxin.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp5xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp5xxout.is_set || is_set(csbsipmthdhistorystatsresp5xxout.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp5xxout.get_name_leafdata());
    if (csbsipmthdhistorystatsresp6xxin.is_set || is_set(csbsipmthdhistorystatsresp6xxin.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp6xxin.get_name_leafdata());
    if (csbsipmthdhistorystatsresp6xxout.is_set || is_set(csbsipmthdhistorystatsresp6xxout.operation)) leaf_name_data.push_back(csbsipmthdhistorystatsresp6xxout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsAdjName")
    {
        csbsipmthdhistorystatsadjname = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsMethod")
    {
        csbsipmthdhistorystatsmethod = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsInterval")
    {
        csbsipmthdhistorystatsinterval = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsMethodName")
    {
        csbsipmthdhistorystatsmethodname = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsReqIn")
    {
        csbsipmthdhistorystatsreqin = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsReqOut")
    {
        csbsipmthdhistorystatsreqout = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp1xxIn")
    {
        csbsipmthdhistorystatsresp1xxin = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp1xxOut")
    {
        csbsipmthdhistorystatsresp1xxout = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp2xxIn")
    {
        csbsipmthdhistorystatsresp2xxin = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp2xxOut")
    {
        csbsipmthdhistorystatsresp2xxout = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp3xxIn")
    {
        csbsipmthdhistorystatsresp3xxin = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp3xxOut")
    {
        csbsipmthdhistorystatsresp3xxout = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp4xxIn")
    {
        csbsipmthdhistorystatsresp4xxin = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp4xxOut")
    {
        csbsipmthdhistorystatsresp4xxout = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp5xxIn")
    {
        csbsipmthdhistorystatsresp5xxin = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp5xxOut")
    {
        csbsipmthdhistorystatsresp5xxout = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp6xxIn")
    {
        csbsipmthdhistorystatsresp6xxin = value;
    }
    if(value_path == "csbSIPMthdHistoryStatsResp6xxOut")
    {
        csbsipmthdhistorystatsresp6xxout = value;
    }
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatstable()
{
    yang_name = "csbSIPMthdRCCurrentStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::~Csbsipmthdrccurrentstatstable()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdrccurrentstatsentry.size(); index++)
    {
        if(csbsipmthdrccurrentstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdrccurrentstatsentry.size(); index++)
    {
        if(csbsipmthdrccurrentstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCCurrentStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdRCCurrentStatsEntry")
    {
        for(auto const & c : csbsipmthdrccurrentstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry>();
        c->parent = this;
        csbsipmthdrccurrentstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbsipmthdrccurrentstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::Csbsipmthdrccurrentstatsentry()
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
    yang_name = "csbSIPMthdRCCurrentStatsEntry"; yang_parent_name = "csbSIPMthdRCCurrentStatsTable";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::~Csbsipmthdrccurrentstatsentry()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::has_data() const
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

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbsipmthdrccurrentstatsadjname.operation)
	|| is_set(csbsipmthdrccurrentstatsmethod.operation)
	|| is_set(csbsipmthdrccurrentstatsrespcode.operation)
	|| is_set(csbsipmthdrccurrentstatsinterval.operation)
	|| is_set(csbsipmthdrccurrentstatsmethodname.operation)
	|| is_set(csbsipmthdrccurrentstatsrespin.operation)
	|| is_set(csbsipmthdrccurrentstatsrespout.operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCCurrentStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdRCCurrentStatsAdjName='" <<csbsipmthdrccurrentstatsadjname <<"']" <<"[csbSIPMthdRCCurrentStatsMethod='" <<csbsipmthdrccurrentstatsmethod <<"']" <<"[csbSIPMthdRCCurrentStatsRespCode='" <<csbsipmthdrccurrentstatsrespcode <<"']" <<"[csbSIPMthdRCCurrentStatsInterval='" <<csbsipmthdrccurrentstatsinterval <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdRCCurrentStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdrccurrentstatsadjname.is_set || is_set(csbsipmthdrccurrentstatsadjname.operation)) leaf_name_data.push_back(csbsipmthdrccurrentstatsadjname.get_name_leafdata());
    if (csbsipmthdrccurrentstatsmethod.is_set || is_set(csbsipmthdrccurrentstatsmethod.operation)) leaf_name_data.push_back(csbsipmthdrccurrentstatsmethod.get_name_leafdata());
    if (csbsipmthdrccurrentstatsrespcode.is_set || is_set(csbsipmthdrccurrentstatsrespcode.operation)) leaf_name_data.push_back(csbsipmthdrccurrentstatsrespcode.get_name_leafdata());
    if (csbsipmthdrccurrentstatsinterval.is_set || is_set(csbsipmthdrccurrentstatsinterval.operation)) leaf_name_data.push_back(csbsipmthdrccurrentstatsinterval.get_name_leafdata());
    if (csbsipmthdrccurrentstatsmethodname.is_set || is_set(csbsipmthdrccurrentstatsmethodname.operation)) leaf_name_data.push_back(csbsipmthdrccurrentstatsmethodname.get_name_leafdata());
    if (csbsipmthdrccurrentstatsrespin.is_set || is_set(csbsipmthdrccurrentstatsrespin.operation)) leaf_name_data.push_back(csbsipmthdrccurrentstatsrespin.get_name_leafdata());
    if (csbsipmthdrccurrentstatsrespout.is_set || is_set(csbsipmthdrccurrentstatsrespout.operation)) leaf_name_data.push_back(csbsipmthdrccurrentstatsrespout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsAdjName")
    {
        csbsipmthdrccurrentstatsadjname = value;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsMethod")
    {
        csbsipmthdrccurrentstatsmethod = value;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespCode")
    {
        csbsipmthdrccurrentstatsrespcode = value;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsInterval")
    {
        csbsipmthdrccurrentstatsinterval = value;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsMethodName")
    {
        csbsipmthdrccurrentstatsmethodname = value;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespIn")
    {
        csbsipmthdrccurrentstatsrespin = value;
    }
    if(value_path == "csbSIPMthdRCCurrentStatsRespOut")
    {
        csbsipmthdrccurrentstatsrespout = value;
    }
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatstable()
{
    yang_name = "csbSIPMthdRCHistoryStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-STATS-MIB";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::~Csbsipmthdrchistorystatstable()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::has_data() const
{
    for (std::size_t index=0; index<csbsipmthdrchistorystatsentry.size(); index++)
    {
        if(csbsipmthdrchistorystatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::has_operation() const
{
    for (std::size_t index=0; index<csbsipmthdrchistorystatsentry.size(); index++)
    {
        if(csbsipmthdrchistorystatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCHistoryStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbSIPMthdRCHistoryStatsEntry")
    {
        for(auto const & c : csbsipmthdrchistorystatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry>();
        c->parent = this;
        csbsipmthdrchistorystatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbsipmthdrchistorystatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::Csbsipmthdrchistorystatsentry()
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
    yang_name = "csbSIPMthdRCHistoryStatsEntry"; yang_parent_name = "csbSIPMthdRCHistoryStatsTable";
}

CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::~Csbsipmthdrchistorystatsentry()
{
}

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::has_data() const
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

bool CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbsipmthdrchistorystatsadjname.operation)
	|| is_set(csbsipmthdrchistorystatsmethod.operation)
	|| is_set(csbsipmthdrchistorystatsrespcode.operation)
	|| is_set(csbsipmthdrchistorystatsinterval.operation)
	|| is_set(csbsipmthdrchistorystatsmethodname.operation)
	|| is_set(csbsipmthdrchistorystatsrespin.operation)
	|| is_set(csbsipmthdrchistorystatsrespout.operation);
}

std::string CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbSIPMthdRCHistoryStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbSIPMthdRCHistoryStatsAdjName='" <<csbsipmthdrchistorystatsadjname <<"']" <<"[csbSIPMthdRCHistoryStatsMethod='" <<csbsipmthdrchistorystatsmethod <<"']" <<"[csbSIPMthdRCHistoryStatsRespCode='" <<csbsipmthdrchistorystatsrespcode <<"']" <<"[csbSIPMthdRCHistoryStatsInterval='" <<csbsipmthdrchistorystatsinterval <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-STATS-MIB:CISCO-SESS-BORDER-CTRLR-STATS-MIB/csbSIPMthdRCHistoryStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbsipmthdrchistorystatsadjname.is_set || is_set(csbsipmthdrchistorystatsadjname.operation)) leaf_name_data.push_back(csbsipmthdrchistorystatsadjname.get_name_leafdata());
    if (csbsipmthdrchistorystatsmethod.is_set || is_set(csbsipmthdrchistorystatsmethod.operation)) leaf_name_data.push_back(csbsipmthdrchistorystatsmethod.get_name_leafdata());
    if (csbsipmthdrchistorystatsrespcode.is_set || is_set(csbsipmthdrchistorystatsrespcode.operation)) leaf_name_data.push_back(csbsipmthdrchistorystatsrespcode.get_name_leafdata());
    if (csbsipmthdrchistorystatsinterval.is_set || is_set(csbsipmthdrchistorystatsinterval.operation)) leaf_name_data.push_back(csbsipmthdrchistorystatsinterval.get_name_leafdata());
    if (csbsipmthdrchistorystatsmethodname.is_set || is_set(csbsipmthdrchistorystatsmethodname.operation)) leaf_name_data.push_back(csbsipmthdrchistorystatsmethodname.get_name_leafdata());
    if (csbsipmthdrchistorystatsrespin.is_set || is_set(csbsipmthdrchistorystatsrespin.operation)) leaf_name_data.push_back(csbsipmthdrchistorystatsrespin.get_name_leafdata());
    if (csbsipmthdrchistorystatsrespout.is_set || is_set(csbsipmthdrchistorystatsrespout.operation)) leaf_name_data.push_back(csbsipmthdrchistorystatsrespout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsAdjName")
    {
        csbsipmthdrchistorystatsadjname = value;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsMethod")
    {
        csbsipmthdrchistorystatsmethod = value;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespCode")
    {
        csbsipmthdrchistorystatsrespcode = value;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsInterval")
    {
        csbsipmthdrchistorystatsinterval = value;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsMethodName")
    {
        csbsipmthdrchistorystatsmethodname = value;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespIn")
    {
        csbsipmthdrchistorystatsrespin = value;
    }
    if(value_path == "csbSIPMthdRCHistoryStatsRespOut")
    {
        csbsipmthdrchistorystatsrespout = value;
    }
}

const Enum::YLeaf CiscosbcsipmethodEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscosbcsipmethodEnum::ack {2, "ack"};
const Enum::YLeaf CiscosbcsipmethodEnum::bye {3, "bye"};
const Enum::YLeaf CiscosbcsipmethodEnum::cancel {4, "cancel"};
const Enum::YLeaf CiscosbcsipmethodEnum::info {5, "info"};
const Enum::YLeaf CiscosbcsipmethodEnum::invite {6, "invite"};
const Enum::YLeaf CiscosbcsipmethodEnum::message {7, "message"};
const Enum::YLeaf CiscosbcsipmethodEnum::notify {8, "notify"};
const Enum::YLeaf CiscosbcsipmethodEnum::options {9, "options"};
const Enum::YLeaf CiscosbcsipmethodEnum::prack {10, "prack"};
const Enum::YLeaf CiscosbcsipmethodEnum::refer {11, "refer"};
const Enum::YLeaf CiscosbcsipmethodEnum::register {12, "register"};
const Enum::YLeaf CiscosbcsipmethodEnum::subscribe {13, "subscribe"};
const Enum::YLeaf CiscosbcsipmethodEnum::update {14, "update"};

const Enum::YLeaf CiscosbcradiusclienttypeEnum::authentication {1, "authentication"};
const Enum::YLeaf CiscosbcradiusclienttypeEnum::accounting {2, "accounting"};


}
}

