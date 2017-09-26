
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_TDM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_TDM_MIB {

CISCOIETFPWTDMMIB::CISCOIETFPWTDMMIB()
    :
    cpwctdmcfgtable(std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmcfgtable>())
	,cpwctdmobjects(std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmobjects>())
	,cpwctdmperf1dayintervaltable(std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable>())
	,cpwctdmperfcurrenttable(std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable>())
	,cpwctdmperfintervaltable(std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable>())
	,cpwctdmtable(std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmtable>())
{
    cpwctdmcfgtable->parent = this;
    cpwctdmobjects->parent = this;
    cpwctdmperf1dayintervaltable->parent = this;
    cpwctdmperfcurrenttable->parent = this;
    cpwctdmperfintervaltable->parent = this;
    cpwctdmtable->parent = this;

    yang_name = "CISCO-IETF-PW-TDM-MIB"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::~CISCOIETFPWTDMMIB()
{
}

bool CISCOIETFPWTDMMIB::has_data() const
{
    return (cpwctdmcfgtable !=  nullptr && cpwctdmcfgtable->has_data())
	|| (cpwctdmobjects !=  nullptr && cpwctdmobjects->has_data())
	|| (cpwctdmperf1dayintervaltable !=  nullptr && cpwctdmperf1dayintervaltable->has_data())
	|| (cpwctdmperfcurrenttable !=  nullptr && cpwctdmperfcurrenttable->has_data())
	|| (cpwctdmperfintervaltable !=  nullptr && cpwctdmperfintervaltable->has_data())
	|| (cpwctdmtable !=  nullptr && cpwctdmtable->has_data());
}

bool CISCOIETFPWTDMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpwctdmcfgtable !=  nullptr && cpwctdmcfgtable->has_operation())
	|| (cpwctdmobjects !=  nullptr && cpwctdmobjects->has_operation())
	|| (cpwctdmperf1dayintervaltable !=  nullptr && cpwctdmperf1dayintervaltable->has_operation())
	|| (cpwctdmperfcurrenttable !=  nullptr && cpwctdmperfcurrenttable->has_operation())
	|| (cpwctdmperfintervaltable !=  nullptr && cpwctdmperfintervaltable->has_operation())
	|| (cpwctdmtable !=  nullptr && cpwctdmtable->has_operation());
}

std::string CISCOIETFPWTDMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMCfgTable")
    {
        if(cpwctdmcfgtable == nullptr)
        {
            cpwctdmcfgtable = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmcfgtable>();
        }
        return cpwctdmcfgtable;
    }

    if(child_yang_name == "cpwCTDMObjects")
    {
        if(cpwctdmobjects == nullptr)
        {
            cpwctdmobjects = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmobjects>();
        }
        return cpwctdmobjects;
    }

    if(child_yang_name == "cpwCTDMPerf1DayIntervalTable")
    {
        if(cpwctdmperf1dayintervaltable == nullptr)
        {
            cpwctdmperf1dayintervaltable = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable>();
        }
        return cpwctdmperf1dayintervaltable;
    }

    if(child_yang_name == "cpwCTDMPerfCurrentTable")
    {
        if(cpwctdmperfcurrenttable == nullptr)
        {
            cpwctdmperfcurrenttable = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable>();
        }
        return cpwctdmperfcurrenttable;
    }

    if(child_yang_name == "cpwCTDMPerfIntervalTable")
    {
        if(cpwctdmperfintervaltable == nullptr)
        {
            cpwctdmperfintervaltable = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable>();
        }
        return cpwctdmperfintervaltable;
    }

    if(child_yang_name == "cpwCTDMTable")
    {
        if(cpwctdmtable == nullptr)
        {
            cpwctdmtable = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmtable>();
        }
        return cpwctdmtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwctdmcfgtable != nullptr)
    {
        children["cpwCTDMCfgTable"] = cpwctdmcfgtable;
    }

    if(cpwctdmobjects != nullptr)
    {
        children["cpwCTDMObjects"] = cpwctdmobjects;
    }

    if(cpwctdmperf1dayintervaltable != nullptr)
    {
        children["cpwCTDMPerf1DayIntervalTable"] = cpwctdmperf1dayintervaltable;
    }

    if(cpwctdmperfcurrenttable != nullptr)
    {
        children["cpwCTDMPerfCurrentTable"] = cpwctdmperfcurrenttable;
    }

    if(cpwctdmperfintervaltable != nullptr)
    {
        children["cpwCTDMPerfIntervalTable"] = cpwctdmperfintervaltable;
    }

    if(cpwctdmtable != nullptr)
    {
        children["cpwCTDMTable"] = cpwctdmtable;
    }

    return children;
}

void CISCOIETFPWTDMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWTDMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFPWTDMMIB>();
}

std::string CISCOIETFPWTDMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFPWTDMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFPWTDMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFPWTDMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFPWTDMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMCfgTable" || name == "cpwCTDMObjects" || name == "cpwCTDMPerf1DayIntervalTable" || name == "cpwCTDMPerfCurrentTable" || name == "cpwCTDMPerfIntervalTable" || name == "cpwCTDMTable")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgtable()
{

    yang_name = "cpwCTDMCfgTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmcfgtable::~Cpwctdmcfgtable()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmcfgtable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmcfgentry.size(); index++)
    {
        if(cpwctdmcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWTDMMIB::Cpwctdmcfgtable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmcfgentry.size(); index++)
    {
        if(cpwctdmcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmcfgtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmcfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmcfgtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmcfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMCfgEntry")
    {
        for(auto const & c : cpwctdmcfgentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry>();
        c->parent = this;
        cpwctdmcfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmcfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmcfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmcfgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWTDMMIB::Cpwctdmcfgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmcfgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMCfgEntry")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgentry()
    :
    cpwctdmcfgindex{YType::uint32, "cpwCTDMCfgIndex"},
    cpwctdmcfgalarmthreshold{YType::uint32, "cpwCTDMCfgAlarmThreshold"},
    cpwctdmcfgavepktlosstimewindow{YType::int32, "cpwCTDMCfgAvePktLossTimeWindow"},
    cpwctdmcfgclearalarmthreshold{YType::uint32, "cpwCTDMCfgClearAlarmThreshold"},
    cpwctdmcfgconferr{YType::bits, "cpwCTDMCfgConfErr"},
    cpwctdmcfgconsecmisspktsoutsynch{YType::uint32, "cpwCTDMCfgConsecMissPktsOutSynch"},
    cpwctdmcfgconsecpktsinsynch{YType::uint32, "cpwCTDMCfgConsecPktsInSynch"},
    cpwctdmcfgexcessivepktlossthreshold{YType::uint32, "cpwCTDMCfgExcessivePktLossThreshold"},
    cpwctdmcfgjtrbfrdepth{YType::uint32, "cpwCTDMCfgJtrBfrDepth"},
    cpwctdmcfgmissingpktstoses{YType::uint32, "cpwCTDMCfgMissingPktsToSes"},
    cpwctdmcfgpayloadsize{YType::uint32, "cpwCTDMCfgPayloadSize"},
    cpwctdmcfgpayloadsuppression{YType::enumeration, "cpwCTDMCfgPayloadSuppression"},
    cpwctdmcfgpktreorder{YType::boolean, "cpwCTDMCfgPktReorder"},
    cpwctdmcfgpktreplacepolicy{YType::enumeration, "cpwCTDMCfgPktReplacePolicy"},
    cpwctdmcfgrowstatus{YType::enumeration, "cpwCTDMCfgRowStatus"},
    cpwctdmcfgrtphdrused{YType::boolean, "cpwCTDMCfgRtpHdrUsed"},
    cpwctdmcfgsetup2synchtimeout{YType::uint32, "cpwCTDMCfgSetUp2SynchTimeOut"},
    cpwctdmcfgstoragetype{YType::enumeration, "cpwCTDMCfgStorageType"},
    cpwctdmcfgtimestampmode{YType::enumeration, "cpwCTDMCfgTimestampMode"}
{

    yang_name = "cpwCTDMCfgEntry"; yang_parent_name = "cpwCTDMCfgTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::~Cpwctdmcfgentry()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::has_data() const
{
    return cpwctdmcfgindex.is_set
	|| cpwctdmcfgalarmthreshold.is_set
	|| cpwctdmcfgavepktlosstimewindow.is_set
	|| cpwctdmcfgclearalarmthreshold.is_set
	|| cpwctdmcfgconferr.is_set
	|| cpwctdmcfgconsecmisspktsoutsynch.is_set
	|| cpwctdmcfgconsecpktsinsynch.is_set
	|| cpwctdmcfgexcessivepktlossthreshold.is_set
	|| cpwctdmcfgjtrbfrdepth.is_set
	|| cpwctdmcfgmissingpktstoses.is_set
	|| cpwctdmcfgpayloadsize.is_set
	|| cpwctdmcfgpayloadsuppression.is_set
	|| cpwctdmcfgpktreorder.is_set
	|| cpwctdmcfgpktreplacepolicy.is_set
	|| cpwctdmcfgrowstatus.is_set
	|| cpwctdmcfgrtphdrused.is_set
	|| cpwctdmcfgsetup2synchtimeout.is_set
	|| cpwctdmcfgstoragetype.is_set
	|| cpwctdmcfgtimestampmode.is_set;
}

bool CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwctdmcfgindex.yfilter)
	|| ydk::is_set(cpwctdmcfgalarmthreshold.yfilter)
	|| ydk::is_set(cpwctdmcfgavepktlosstimewindow.yfilter)
	|| ydk::is_set(cpwctdmcfgclearalarmthreshold.yfilter)
	|| ydk::is_set(cpwctdmcfgconferr.yfilter)
	|| ydk::is_set(cpwctdmcfgconsecmisspktsoutsynch.yfilter)
	|| ydk::is_set(cpwctdmcfgconsecpktsinsynch.yfilter)
	|| ydk::is_set(cpwctdmcfgexcessivepktlossthreshold.yfilter)
	|| ydk::is_set(cpwctdmcfgjtrbfrdepth.yfilter)
	|| ydk::is_set(cpwctdmcfgmissingpktstoses.yfilter)
	|| ydk::is_set(cpwctdmcfgpayloadsize.yfilter)
	|| ydk::is_set(cpwctdmcfgpayloadsuppression.yfilter)
	|| ydk::is_set(cpwctdmcfgpktreorder.yfilter)
	|| ydk::is_set(cpwctdmcfgpktreplacepolicy.yfilter)
	|| ydk::is_set(cpwctdmcfgrowstatus.yfilter)
	|| ydk::is_set(cpwctdmcfgrtphdrused.yfilter)
	|| ydk::is_set(cpwctdmcfgsetup2synchtimeout.yfilter)
	|| ydk::is_set(cpwctdmcfgstoragetype.yfilter)
	|| ydk::is_set(cpwctdmcfgtimestampmode.yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMCfgEntry" <<"[cpwCTDMCfgIndex='" <<cpwctdmcfgindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwctdmcfgindex.is_set || is_set(cpwctdmcfgindex.yfilter)) leaf_name_data.push_back(cpwctdmcfgindex.get_name_leafdata());
    if (cpwctdmcfgalarmthreshold.is_set || is_set(cpwctdmcfgalarmthreshold.yfilter)) leaf_name_data.push_back(cpwctdmcfgalarmthreshold.get_name_leafdata());
    if (cpwctdmcfgavepktlosstimewindow.is_set || is_set(cpwctdmcfgavepktlosstimewindow.yfilter)) leaf_name_data.push_back(cpwctdmcfgavepktlosstimewindow.get_name_leafdata());
    if (cpwctdmcfgclearalarmthreshold.is_set || is_set(cpwctdmcfgclearalarmthreshold.yfilter)) leaf_name_data.push_back(cpwctdmcfgclearalarmthreshold.get_name_leafdata());
    if (cpwctdmcfgconferr.is_set || is_set(cpwctdmcfgconferr.yfilter)) leaf_name_data.push_back(cpwctdmcfgconferr.get_name_leafdata());
    if (cpwctdmcfgconsecmisspktsoutsynch.is_set || is_set(cpwctdmcfgconsecmisspktsoutsynch.yfilter)) leaf_name_data.push_back(cpwctdmcfgconsecmisspktsoutsynch.get_name_leafdata());
    if (cpwctdmcfgconsecpktsinsynch.is_set || is_set(cpwctdmcfgconsecpktsinsynch.yfilter)) leaf_name_data.push_back(cpwctdmcfgconsecpktsinsynch.get_name_leafdata());
    if (cpwctdmcfgexcessivepktlossthreshold.is_set || is_set(cpwctdmcfgexcessivepktlossthreshold.yfilter)) leaf_name_data.push_back(cpwctdmcfgexcessivepktlossthreshold.get_name_leafdata());
    if (cpwctdmcfgjtrbfrdepth.is_set || is_set(cpwctdmcfgjtrbfrdepth.yfilter)) leaf_name_data.push_back(cpwctdmcfgjtrbfrdepth.get_name_leafdata());
    if (cpwctdmcfgmissingpktstoses.is_set || is_set(cpwctdmcfgmissingpktstoses.yfilter)) leaf_name_data.push_back(cpwctdmcfgmissingpktstoses.get_name_leafdata());
    if (cpwctdmcfgpayloadsize.is_set || is_set(cpwctdmcfgpayloadsize.yfilter)) leaf_name_data.push_back(cpwctdmcfgpayloadsize.get_name_leafdata());
    if (cpwctdmcfgpayloadsuppression.is_set || is_set(cpwctdmcfgpayloadsuppression.yfilter)) leaf_name_data.push_back(cpwctdmcfgpayloadsuppression.get_name_leafdata());
    if (cpwctdmcfgpktreorder.is_set || is_set(cpwctdmcfgpktreorder.yfilter)) leaf_name_data.push_back(cpwctdmcfgpktreorder.get_name_leafdata());
    if (cpwctdmcfgpktreplacepolicy.is_set || is_set(cpwctdmcfgpktreplacepolicy.yfilter)) leaf_name_data.push_back(cpwctdmcfgpktreplacepolicy.get_name_leafdata());
    if (cpwctdmcfgrowstatus.is_set || is_set(cpwctdmcfgrowstatus.yfilter)) leaf_name_data.push_back(cpwctdmcfgrowstatus.get_name_leafdata());
    if (cpwctdmcfgrtphdrused.is_set || is_set(cpwctdmcfgrtphdrused.yfilter)) leaf_name_data.push_back(cpwctdmcfgrtphdrused.get_name_leafdata());
    if (cpwctdmcfgsetup2synchtimeout.is_set || is_set(cpwctdmcfgsetup2synchtimeout.yfilter)) leaf_name_data.push_back(cpwctdmcfgsetup2synchtimeout.get_name_leafdata());
    if (cpwctdmcfgstoragetype.is_set || is_set(cpwctdmcfgstoragetype.yfilter)) leaf_name_data.push_back(cpwctdmcfgstoragetype.get_name_leafdata());
    if (cpwctdmcfgtimestampmode.is_set || is_set(cpwctdmcfgtimestampmode.yfilter)) leaf_name_data.push_back(cpwctdmcfgtimestampmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwCTDMCfgIndex")
    {
        cpwctdmcfgindex = value;
        cpwctdmcfgindex.value_namespace = name_space;
        cpwctdmcfgindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgAlarmThreshold")
    {
        cpwctdmcfgalarmthreshold = value;
        cpwctdmcfgalarmthreshold.value_namespace = name_space;
        cpwctdmcfgalarmthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgAvePktLossTimeWindow")
    {
        cpwctdmcfgavepktlosstimewindow = value;
        cpwctdmcfgavepktlosstimewindow.value_namespace = name_space;
        cpwctdmcfgavepktlosstimewindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgClearAlarmThreshold")
    {
        cpwctdmcfgclearalarmthreshold = value;
        cpwctdmcfgclearalarmthreshold.value_namespace = name_space;
        cpwctdmcfgclearalarmthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgConfErr")
    {
        cpwctdmcfgconferr[value] = true;
    }
    if(value_path == "cpwCTDMCfgConsecMissPktsOutSynch")
    {
        cpwctdmcfgconsecmisspktsoutsynch = value;
        cpwctdmcfgconsecmisspktsoutsynch.value_namespace = name_space;
        cpwctdmcfgconsecmisspktsoutsynch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgConsecPktsInSynch")
    {
        cpwctdmcfgconsecpktsinsynch = value;
        cpwctdmcfgconsecpktsinsynch.value_namespace = name_space;
        cpwctdmcfgconsecpktsinsynch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgExcessivePktLossThreshold")
    {
        cpwctdmcfgexcessivepktlossthreshold = value;
        cpwctdmcfgexcessivepktlossthreshold.value_namespace = name_space;
        cpwctdmcfgexcessivepktlossthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgJtrBfrDepth")
    {
        cpwctdmcfgjtrbfrdepth = value;
        cpwctdmcfgjtrbfrdepth.value_namespace = name_space;
        cpwctdmcfgjtrbfrdepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgMissingPktsToSes")
    {
        cpwctdmcfgmissingpktstoses = value;
        cpwctdmcfgmissingpktstoses.value_namespace = name_space;
        cpwctdmcfgmissingpktstoses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgPayloadSize")
    {
        cpwctdmcfgpayloadsize = value;
        cpwctdmcfgpayloadsize.value_namespace = name_space;
        cpwctdmcfgpayloadsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgPayloadSuppression")
    {
        cpwctdmcfgpayloadsuppression = value;
        cpwctdmcfgpayloadsuppression.value_namespace = name_space;
        cpwctdmcfgpayloadsuppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgPktReorder")
    {
        cpwctdmcfgpktreorder = value;
        cpwctdmcfgpktreorder.value_namespace = name_space;
        cpwctdmcfgpktreorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgPktReplacePolicy")
    {
        cpwctdmcfgpktreplacepolicy = value;
        cpwctdmcfgpktreplacepolicy.value_namespace = name_space;
        cpwctdmcfgpktreplacepolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgRowStatus")
    {
        cpwctdmcfgrowstatus = value;
        cpwctdmcfgrowstatus.value_namespace = name_space;
        cpwctdmcfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgRtpHdrUsed")
    {
        cpwctdmcfgrtphdrused = value;
        cpwctdmcfgrtphdrused.value_namespace = name_space;
        cpwctdmcfgrtphdrused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgSetUp2SynchTimeOut")
    {
        cpwctdmcfgsetup2synchtimeout = value;
        cpwctdmcfgsetup2synchtimeout.value_namespace = name_space;
        cpwctdmcfgsetup2synchtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgStorageType")
    {
        cpwctdmcfgstoragetype = value;
        cpwctdmcfgstoragetype.value_namespace = name_space;
        cpwctdmcfgstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMCfgTimestampMode")
    {
        cpwctdmcfgtimestampmode = value;
        cpwctdmcfgtimestampmode.value_namespace = name_space;
        cpwctdmcfgtimestampmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwCTDMCfgIndex")
    {
        cpwctdmcfgindex.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgAlarmThreshold")
    {
        cpwctdmcfgalarmthreshold.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgAvePktLossTimeWindow")
    {
        cpwctdmcfgavepktlosstimewindow.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgClearAlarmThreshold")
    {
        cpwctdmcfgclearalarmthreshold.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgConfErr")
    {
        cpwctdmcfgconferr.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgConsecMissPktsOutSynch")
    {
        cpwctdmcfgconsecmisspktsoutsynch.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgConsecPktsInSynch")
    {
        cpwctdmcfgconsecpktsinsynch.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgExcessivePktLossThreshold")
    {
        cpwctdmcfgexcessivepktlossthreshold.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgJtrBfrDepth")
    {
        cpwctdmcfgjtrbfrdepth.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgMissingPktsToSes")
    {
        cpwctdmcfgmissingpktstoses.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgPayloadSize")
    {
        cpwctdmcfgpayloadsize.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgPayloadSuppression")
    {
        cpwctdmcfgpayloadsuppression.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgPktReorder")
    {
        cpwctdmcfgpktreorder.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgPktReplacePolicy")
    {
        cpwctdmcfgpktreplacepolicy.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgRowStatus")
    {
        cpwctdmcfgrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgRtpHdrUsed")
    {
        cpwctdmcfgrtphdrused.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgSetUp2SynchTimeOut")
    {
        cpwctdmcfgsetup2synchtimeout.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgStorageType")
    {
        cpwctdmcfgstoragetype.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCfgTimestampMode")
    {
        cpwctdmcfgtimestampmode.yfilter = yfilter;
    }
}

bool CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMCfgIndex" || name == "cpwCTDMCfgAlarmThreshold" || name == "cpwCTDMCfgAvePktLossTimeWindow" || name == "cpwCTDMCfgClearAlarmThreshold" || name == "cpwCTDMCfgConfErr" || name == "cpwCTDMCfgConsecMissPktsOutSynch" || name == "cpwCTDMCfgConsecPktsInSynch" || name == "cpwCTDMCfgExcessivePktLossThreshold" || name == "cpwCTDMCfgJtrBfrDepth" || name == "cpwCTDMCfgMissingPktsToSes" || name == "cpwCTDMCfgPayloadSize" || name == "cpwCTDMCfgPayloadSuppression" || name == "cpwCTDMCfgPktReorder" || name == "cpwCTDMCfgPktReplacePolicy" || name == "cpwCTDMCfgRowStatus" || name == "cpwCTDMCfgRtpHdrUsed" || name == "cpwCTDMCfgSetUp2SynchTimeOut" || name == "cpwCTDMCfgStorageType" || name == "cpwCTDMCfgTimestampMode")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmobjects::Cpwctdmobjects()
    :
    cpwctdmcfgindexnext{YType::uint32, "cpwCTDMCfgIndexNext"}
{

    yang_name = "cpwCTDMObjects"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmobjects::~Cpwctdmobjects()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmobjects::has_data() const
{
    return cpwctdmcfgindexnext.is_set;
}

bool CISCOIETFPWTDMMIB::Cpwctdmobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwctdmcfgindexnext.yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwctdmcfgindexnext.is_set || is_set(cpwctdmcfgindexnext.yfilter)) leaf_name_data.push_back(cpwctdmcfgindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwCTDMCfgIndexNext")
    {
        cpwctdmcfgindexnext = value;
        cpwctdmcfgindexnext.value_namespace = name_space;
        cpwctdmcfgindexnext.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWTDMMIB::Cpwctdmobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwCTDMCfgIndexNext")
    {
        cpwctdmcfgindexnext.yfilter = yfilter;
    }
}

bool CISCOIETFPWTDMMIB::Cpwctdmobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMCfgIndexNext")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervaltable()
{

    yang_name = "cpwCTDMPerf1DayIntervalTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::~Cpwctdmperf1Dayintervaltable()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmperf1dayintervalentry.size(); index++)
    {
        if(cpwctdmperf1dayintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmperf1dayintervalentry.size(); index++)
    {
        if(cpwctdmperf1dayintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerf1DayIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMPerf1DayIntervalEntry")
    {
        for(auto const & c : cpwctdmperf1dayintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry>();
        c->parent = this;
        cpwctdmperf1dayintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmperf1dayintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMPerf1DayIntervalEntry")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::Cpwctdmperf1Dayintervalentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwctdmperf1dayintervalnumber{YType::uint32, "cpwCTDMPerf1DayIntervalNumber"},
    cpwctdmperf1dayintervalduration{YType::uint32, "cpwCTDMPerf1DayIntervalDuration"},
    cpwctdmperf1dayintervaless{YType::uint32, "cpwCTDMPerf1DayIntervalESs"},
    cpwctdmperf1dayintervalfc{YType::uint32, "cpwCTDMPerf1DayIntervalFC"},
    cpwctdmperf1dayintervaljtrbfrunderruns{YType::uint32, "cpwCTDMPerf1DayIntervalJtrBfrUnderruns"},
    cpwctdmperf1dayintervalmalformedpkt{YType::uint32, "cpwCTDMPerf1DayIntervalMalformedPkt"},
    cpwctdmperf1dayintervalmisorderdropped{YType::uint32, "cpwCTDMPerf1DayIntervalMisOrderDropped"},
    cpwctdmperf1dayintervalmissingpkts{YType::uint32, "cpwCTDMPerf1DayIntervalMissingPkts"},
    cpwctdmperf1dayintervalpktsreorder{YType::uint32, "cpwCTDMPerf1DayIntervalPktsReOrder"},
    cpwctdmperf1dayintervalsess{YType::uint32, "cpwCTDMPerf1DayIntervalSESs"},
    cpwctdmperf1dayintervaluass{YType::uint32, "cpwCTDMPerf1DayIntervalUASs"},
    cpwctdmperf1dayintervalvaliddata{YType::boolean, "cpwCTDMPerf1DayIntervalValidData"}
{

    yang_name = "cpwCTDMPerf1DayIntervalEntry"; yang_parent_name = "cpwCTDMPerf1DayIntervalTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::~Cpwctdmperf1Dayintervalentry()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwctdmperf1dayintervalnumber.is_set
	|| cpwctdmperf1dayintervalduration.is_set
	|| cpwctdmperf1dayintervaless.is_set
	|| cpwctdmperf1dayintervalfc.is_set
	|| cpwctdmperf1dayintervaljtrbfrunderruns.is_set
	|| cpwctdmperf1dayintervalmalformedpkt.is_set
	|| cpwctdmperf1dayintervalmisorderdropped.is_set
	|| cpwctdmperf1dayintervalmissingpkts.is_set
	|| cpwctdmperf1dayintervalpktsreorder.is_set
	|| cpwctdmperf1dayintervalsess.is_set
	|| cpwctdmperf1dayintervaluass.is_set
	|| cpwctdmperf1dayintervalvaliddata.is_set;
}

bool CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalnumber.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalduration.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervaless.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalfc.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervaljtrbfrunderruns.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalmalformedpkt.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalmisorderdropped.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalmissingpkts.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalpktsreorder.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalsess.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervaluass.yfilter)
	|| ydk::is_set(cpwctdmperf1dayintervalvaliddata.yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMPerf1DayIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerf1DayIntervalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwCTDMPerf1DayIntervalNumber='" <<cpwctdmperf1dayintervalnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwctdmperf1dayintervalnumber.is_set || is_set(cpwctdmperf1dayintervalnumber.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalnumber.get_name_leafdata());
    if (cpwctdmperf1dayintervalduration.is_set || is_set(cpwctdmperf1dayintervalduration.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalduration.get_name_leafdata());
    if (cpwctdmperf1dayintervaless.is_set || is_set(cpwctdmperf1dayintervaless.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervaless.get_name_leafdata());
    if (cpwctdmperf1dayintervalfc.is_set || is_set(cpwctdmperf1dayintervalfc.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalfc.get_name_leafdata());
    if (cpwctdmperf1dayintervaljtrbfrunderruns.is_set || is_set(cpwctdmperf1dayintervaljtrbfrunderruns.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervaljtrbfrunderruns.get_name_leafdata());
    if (cpwctdmperf1dayintervalmalformedpkt.is_set || is_set(cpwctdmperf1dayintervalmalformedpkt.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalmalformedpkt.get_name_leafdata());
    if (cpwctdmperf1dayintervalmisorderdropped.is_set || is_set(cpwctdmperf1dayintervalmisorderdropped.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalmisorderdropped.get_name_leafdata());
    if (cpwctdmperf1dayintervalmissingpkts.is_set || is_set(cpwctdmperf1dayintervalmissingpkts.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalmissingpkts.get_name_leafdata());
    if (cpwctdmperf1dayintervalpktsreorder.is_set || is_set(cpwctdmperf1dayintervalpktsreorder.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalpktsreorder.get_name_leafdata());
    if (cpwctdmperf1dayintervalsess.is_set || is_set(cpwctdmperf1dayintervalsess.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalsess.get_name_leafdata());
    if (cpwctdmperf1dayintervaluass.is_set || is_set(cpwctdmperf1dayintervaluass.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervaluass.get_name_leafdata());
    if (cpwctdmperf1dayintervalvaliddata.is_set || is_set(cpwctdmperf1dayintervalvaliddata.yfilter)) leaf_name_data.push_back(cpwctdmperf1dayintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalNumber")
    {
        cpwctdmperf1dayintervalnumber = value;
        cpwctdmperf1dayintervalnumber.value_namespace = name_space;
        cpwctdmperf1dayintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalDuration")
    {
        cpwctdmperf1dayintervalduration = value;
        cpwctdmperf1dayintervalduration.value_namespace = name_space;
        cpwctdmperf1dayintervalduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalESs")
    {
        cpwctdmperf1dayintervaless = value;
        cpwctdmperf1dayintervaless.value_namespace = name_space;
        cpwctdmperf1dayintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalFC")
    {
        cpwctdmperf1dayintervalfc = value;
        cpwctdmperf1dayintervalfc.value_namespace = name_space;
        cpwctdmperf1dayintervalfc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalJtrBfrUnderruns")
    {
        cpwctdmperf1dayintervaljtrbfrunderruns = value;
        cpwctdmperf1dayintervaljtrbfrunderruns.value_namespace = name_space;
        cpwctdmperf1dayintervaljtrbfrunderruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMalformedPkt")
    {
        cpwctdmperf1dayintervalmalformedpkt = value;
        cpwctdmperf1dayintervalmalformedpkt.value_namespace = name_space;
        cpwctdmperf1dayintervalmalformedpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMisOrderDropped")
    {
        cpwctdmperf1dayintervalmisorderdropped = value;
        cpwctdmperf1dayintervalmisorderdropped.value_namespace = name_space;
        cpwctdmperf1dayintervalmisorderdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMissingPkts")
    {
        cpwctdmperf1dayintervalmissingpkts = value;
        cpwctdmperf1dayintervalmissingpkts.value_namespace = name_space;
        cpwctdmperf1dayintervalmissingpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalPktsReOrder")
    {
        cpwctdmperf1dayintervalpktsreorder = value;
        cpwctdmperf1dayintervalpktsreorder.value_namespace = name_space;
        cpwctdmperf1dayintervalpktsreorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalSESs")
    {
        cpwctdmperf1dayintervalsess = value;
        cpwctdmperf1dayintervalsess.value_namespace = name_space;
        cpwctdmperf1dayintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalUASs")
    {
        cpwctdmperf1dayintervaluass = value;
        cpwctdmperf1dayintervaluass.value_namespace = name_space;
        cpwctdmperf1dayintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalValidData")
    {
        cpwctdmperf1dayintervalvaliddata = value;
        cpwctdmperf1dayintervalvaliddata.value_namespace = name_space;
        cpwctdmperf1dayintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalNumber")
    {
        cpwctdmperf1dayintervalnumber.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalDuration")
    {
        cpwctdmperf1dayintervalduration.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalESs")
    {
        cpwctdmperf1dayintervaless.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalFC")
    {
        cpwctdmperf1dayintervalfc.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalJtrBfrUnderruns")
    {
        cpwctdmperf1dayintervaljtrbfrunderruns.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMalformedPkt")
    {
        cpwctdmperf1dayintervalmalformedpkt.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMisOrderDropped")
    {
        cpwctdmperf1dayintervalmisorderdropped.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMissingPkts")
    {
        cpwctdmperf1dayintervalmissingpkts.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalPktsReOrder")
    {
        cpwctdmperf1dayintervalpktsreorder.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalSESs")
    {
        cpwctdmperf1dayintervalsess.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalUASs")
    {
        cpwctdmperf1dayintervaluass.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalValidData")
    {
        cpwctdmperf1dayintervalvaliddata.yfilter = yfilter;
    }
}

bool CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwCTDMPerf1DayIntervalNumber" || name == "cpwCTDMPerf1DayIntervalDuration" || name == "cpwCTDMPerf1DayIntervalESs" || name == "cpwCTDMPerf1DayIntervalFC" || name == "cpwCTDMPerf1DayIntervalJtrBfrUnderruns" || name == "cpwCTDMPerf1DayIntervalMalformedPkt" || name == "cpwCTDMPerf1DayIntervalMisOrderDropped" || name == "cpwCTDMPerf1DayIntervalMissingPkts" || name == "cpwCTDMPerf1DayIntervalPktsReOrder" || name == "cpwCTDMPerf1DayIntervalSESs" || name == "cpwCTDMPerf1DayIntervalUASs" || name == "cpwCTDMPerf1DayIntervalValidData")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrenttable()
{

    yang_name = "cpwCTDMPerfCurrentTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::~Cpwctdmperfcurrenttable()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmperfcurrententry.size(); index++)
    {
        if(cpwctdmperfcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmperfcurrententry.size(); index++)
    {
        if(cpwctdmperfcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMPerfCurrentEntry")
    {
        for(auto const & c : cpwctdmperfcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry>();
        c->parent = this;
        cpwctdmperfcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmperfcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMPerfCurrentEntry")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::Cpwctdmperfcurrententry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwctdmperfcurrentess{YType::uint32, "cpwCTDMPerfCurrentESs"},
    cpwctdmperfcurrentfc{YType::uint32, "cpwCTDMPerfCurrentFC"},
    cpwctdmperfcurrentjtrbfrunderruns{YType::uint32, "cpwCTDMPerfCurrentJtrBfrUnderruns"},
    cpwctdmperfcurrentmalformedpkt{YType::uint32, "cpwCTDMPerfCurrentMalformedPkt"},
    cpwctdmperfcurrentmisorderdropped{YType::uint32, "cpwCTDMPerfCurrentMisOrderDropped"},
    cpwctdmperfcurrentmissingpkts{YType::uint32, "cpwCTDMPerfCurrentMissingPkts"},
    cpwctdmperfcurrentpktsreorder{YType::uint32, "cpwCTDMPerfCurrentPktsReOrder"},
    cpwctdmperfcurrentsess{YType::uint32, "cpwCTDMPerfCurrentSESs"},
    cpwctdmperfcurrentuass{YType::uint32, "cpwCTDMPerfCurrentUASs"}
{

    yang_name = "cpwCTDMPerfCurrentEntry"; yang_parent_name = "cpwCTDMPerfCurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::~Cpwctdmperfcurrententry()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwctdmperfcurrentess.is_set
	|| cpwctdmperfcurrentfc.is_set
	|| cpwctdmperfcurrentjtrbfrunderruns.is_set
	|| cpwctdmperfcurrentmalformedpkt.is_set
	|| cpwctdmperfcurrentmisorderdropped.is_set
	|| cpwctdmperfcurrentmissingpkts.is_set
	|| cpwctdmperfcurrentpktsreorder.is_set
	|| cpwctdmperfcurrentsess.is_set
	|| cpwctdmperfcurrentuass.is_set;
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentess.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentfc.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentjtrbfrunderruns.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentmalformedpkt.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentmisorderdropped.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentmissingpkts.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentpktsreorder.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentsess.yfilter)
	|| ydk::is_set(cpwctdmperfcurrentuass.yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMPerfCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfCurrentEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwctdmperfcurrentess.is_set || is_set(cpwctdmperfcurrentess.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentess.get_name_leafdata());
    if (cpwctdmperfcurrentfc.is_set || is_set(cpwctdmperfcurrentfc.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentfc.get_name_leafdata());
    if (cpwctdmperfcurrentjtrbfrunderruns.is_set || is_set(cpwctdmperfcurrentjtrbfrunderruns.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentjtrbfrunderruns.get_name_leafdata());
    if (cpwctdmperfcurrentmalformedpkt.is_set || is_set(cpwctdmperfcurrentmalformedpkt.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentmalformedpkt.get_name_leafdata());
    if (cpwctdmperfcurrentmisorderdropped.is_set || is_set(cpwctdmperfcurrentmisorderdropped.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentmisorderdropped.get_name_leafdata());
    if (cpwctdmperfcurrentmissingpkts.is_set || is_set(cpwctdmperfcurrentmissingpkts.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentmissingpkts.get_name_leafdata());
    if (cpwctdmperfcurrentpktsreorder.is_set || is_set(cpwctdmperfcurrentpktsreorder.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentpktsreorder.get_name_leafdata());
    if (cpwctdmperfcurrentsess.is_set || is_set(cpwctdmperfcurrentsess.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentsess.get_name_leafdata());
    if (cpwctdmperfcurrentuass.is_set || is_set(cpwctdmperfcurrentuass.yfilter)) leaf_name_data.push_back(cpwctdmperfcurrentuass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentESs")
    {
        cpwctdmperfcurrentess = value;
        cpwctdmperfcurrentess.value_namespace = name_space;
        cpwctdmperfcurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentFC")
    {
        cpwctdmperfcurrentfc = value;
        cpwctdmperfcurrentfc.value_namespace = name_space;
        cpwctdmperfcurrentfc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentJtrBfrUnderruns")
    {
        cpwctdmperfcurrentjtrbfrunderruns = value;
        cpwctdmperfcurrentjtrbfrunderruns.value_namespace = name_space;
        cpwctdmperfcurrentjtrbfrunderruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentMalformedPkt")
    {
        cpwctdmperfcurrentmalformedpkt = value;
        cpwctdmperfcurrentmalformedpkt.value_namespace = name_space;
        cpwctdmperfcurrentmalformedpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentMisOrderDropped")
    {
        cpwctdmperfcurrentmisorderdropped = value;
        cpwctdmperfcurrentmisorderdropped.value_namespace = name_space;
        cpwctdmperfcurrentmisorderdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentMissingPkts")
    {
        cpwctdmperfcurrentmissingpkts = value;
        cpwctdmperfcurrentmissingpkts.value_namespace = name_space;
        cpwctdmperfcurrentmissingpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentPktsReOrder")
    {
        cpwctdmperfcurrentpktsreorder = value;
        cpwctdmperfcurrentpktsreorder.value_namespace = name_space;
        cpwctdmperfcurrentpktsreorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentSESs")
    {
        cpwctdmperfcurrentsess = value;
        cpwctdmperfcurrentsess.value_namespace = name_space;
        cpwctdmperfcurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfCurrentUASs")
    {
        cpwctdmperfcurrentuass = value;
        cpwctdmperfcurrentuass.value_namespace = name_space;
        cpwctdmperfcurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentESs")
    {
        cpwctdmperfcurrentess.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentFC")
    {
        cpwctdmperfcurrentfc.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentJtrBfrUnderruns")
    {
        cpwctdmperfcurrentjtrbfrunderruns.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentMalformedPkt")
    {
        cpwctdmperfcurrentmalformedpkt.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentMisOrderDropped")
    {
        cpwctdmperfcurrentmisorderdropped.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentMissingPkts")
    {
        cpwctdmperfcurrentmissingpkts.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentPktsReOrder")
    {
        cpwctdmperfcurrentpktsreorder.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentSESs")
    {
        cpwctdmperfcurrentsess.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfCurrentUASs")
    {
        cpwctdmperfcurrentuass.yfilter = yfilter;
    }
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwCTDMPerfCurrentESs" || name == "cpwCTDMPerfCurrentFC" || name == "cpwCTDMPerfCurrentJtrBfrUnderruns" || name == "cpwCTDMPerfCurrentMalformedPkt" || name == "cpwCTDMPerfCurrentMisOrderDropped" || name == "cpwCTDMPerfCurrentMissingPkts" || name == "cpwCTDMPerfCurrentPktsReOrder" || name == "cpwCTDMPerfCurrentSESs" || name == "cpwCTDMPerfCurrentUASs")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervaltable()
{

    yang_name = "cpwCTDMPerfIntervalTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::~Cpwctdmperfintervaltable()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmperfintervalentry.size(); index++)
    {
        if(cpwctdmperfintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmperfintervalentry.size(); index++)
    {
        if(cpwctdmperfintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMPerfIntervalEntry")
    {
        for(auto const & c : cpwctdmperfintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry>();
        c->parent = this;
        cpwctdmperfintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmperfintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMPerfIntervalEntry")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::Cpwctdmperfintervalentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwctdmperfintervalnumber{YType::uint32, "cpwCTDMPerfIntervalNumber"},
    cpwctdmperfintervalduration{YType::uint32, "cpwCTDMPerfIntervalDuration"},
    cpwctdmperfintervaless{YType::uint32, "cpwCTDMPerfIntervalESs"},
    cpwctdmperfintervalfc{YType::uint32, "cpwCTDMPerfIntervalFC"},
    cpwctdmperfintervaljtrbfrunderruns{YType::uint32, "cpwCTDMPerfIntervalJtrBfrUnderruns"},
    cpwctdmperfintervalmalformedpkt{YType::uint32, "cpwCTDMPerfIntervalMalformedPkt"},
    cpwctdmperfintervalmisorderdropped{YType::uint32, "cpwCTDMPerfIntervalMisOrderDropped"},
    cpwctdmperfintervalmissingpkts{YType::uint32, "cpwCTDMPerfIntervalMissingPkts"},
    cpwctdmperfintervalpktsreorder{YType::uint32, "cpwCTDMPerfIntervalPktsReOrder"},
    cpwctdmperfintervalsess{YType::uint32, "cpwCTDMPerfIntervalSESs"},
    cpwctdmperfintervaluass{YType::uint32, "cpwCTDMPerfIntervalUASs"},
    cpwctdmperfintervalvaliddata{YType::boolean, "cpwCTDMPerfIntervalValidData"}
{

    yang_name = "cpwCTDMPerfIntervalEntry"; yang_parent_name = "cpwCTDMPerfIntervalTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::~Cpwctdmperfintervalentry()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwctdmperfintervalnumber.is_set
	|| cpwctdmperfintervalduration.is_set
	|| cpwctdmperfintervaless.is_set
	|| cpwctdmperfintervalfc.is_set
	|| cpwctdmperfintervaljtrbfrunderruns.is_set
	|| cpwctdmperfintervalmalformedpkt.is_set
	|| cpwctdmperfintervalmisorderdropped.is_set
	|| cpwctdmperfintervalmissingpkts.is_set
	|| cpwctdmperfintervalpktsreorder.is_set
	|| cpwctdmperfintervalsess.is_set
	|| cpwctdmperfintervaluass.is_set
	|| cpwctdmperfintervalvaliddata.is_set;
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwctdmperfintervalnumber.yfilter)
	|| ydk::is_set(cpwctdmperfintervalduration.yfilter)
	|| ydk::is_set(cpwctdmperfintervaless.yfilter)
	|| ydk::is_set(cpwctdmperfintervalfc.yfilter)
	|| ydk::is_set(cpwctdmperfintervaljtrbfrunderruns.yfilter)
	|| ydk::is_set(cpwctdmperfintervalmalformedpkt.yfilter)
	|| ydk::is_set(cpwctdmperfintervalmisorderdropped.yfilter)
	|| ydk::is_set(cpwctdmperfintervalmissingpkts.yfilter)
	|| ydk::is_set(cpwctdmperfintervalpktsreorder.yfilter)
	|| ydk::is_set(cpwctdmperfintervalsess.yfilter)
	|| ydk::is_set(cpwctdmperfintervaluass.yfilter)
	|| ydk::is_set(cpwctdmperfintervalvaliddata.yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMPerfIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfIntervalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwCTDMPerfIntervalNumber='" <<cpwctdmperfintervalnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwctdmperfintervalnumber.is_set || is_set(cpwctdmperfintervalnumber.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalnumber.get_name_leafdata());
    if (cpwctdmperfintervalduration.is_set || is_set(cpwctdmperfintervalduration.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalduration.get_name_leafdata());
    if (cpwctdmperfintervaless.is_set || is_set(cpwctdmperfintervaless.yfilter)) leaf_name_data.push_back(cpwctdmperfintervaless.get_name_leafdata());
    if (cpwctdmperfintervalfc.is_set || is_set(cpwctdmperfintervalfc.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalfc.get_name_leafdata());
    if (cpwctdmperfintervaljtrbfrunderruns.is_set || is_set(cpwctdmperfintervaljtrbfrunderruns.yfilter)) leaf_name_data.push_back(cpwctdmperfintervaljtrbfrunderruns.get_name_leafdata());
    if (cpwctdmperfintervalmalformedpkt.is_set || is_set(cpwctdmperfintervalmalformedpkt.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalmalformedpkt.get_name_leafdata());
    if (cpwctdmperfintervalmisorderdropped.is_set || is_set(cpwctdmperfintervalmisorderdropped.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalmisorderdropped.get_name_leafdata());
    if (cpwctdmperfintervalmissingpkts.is_set || is_set(cpwctdmperfintervalmissingpkts.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalmissingpkts.get_name_leafdata());
    if (cpwctdmperfintervalpktsreorder.is_set || is_set(cpwctdmperfintervalpktsreorder.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalpktsreorder.get_name_leafdata());
    if (cpwctdmperfintervalsess.is_set || is_set(cpwctdmperfintervalsess.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalsess.get_name_leafdata());
    if (cpwctdmperfintervaluass.is_set || is_set(cpwctdmperfintervaluass.yfilter)) leaf_name_data.push_back(cpwctdmperfintervaluass.get_name_leafdata());
    if (cpwctdmperfintervalvaliddata.is_set || is_set(cpwctdmperfintervalvaliddata.yfilter)) leaf_name_data.push_back(cpwctdmperfintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalNumber")
    {
        cpwctdmperfintervalnumber = value;
        cpwctdmperfintervalnumber.value_namespace = name_space;
        cpwctdmperfintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalDuration")
    {
        cpwctdmperfintervalduration = value;
        cpwctdmperfintervalduration.value_namespace = name_space;
        cpwctdmperfintervalduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalESs")
    {
        cpwctdmperfintervaless = value;
        cpwctdmperfintervaless.value_namespace = name_space;
        cpwctdmperfintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalFC")
    {
        cpwctdmperfintervalfc = value;
        cpwctdmperfintervalfc.value_namespace = name_space;
        cpwctdmperfintervalfc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalJtrBfrUnderruns")
    {
        cpwctdmperfintervaljtrbfrunderruns = value;
        cpwctdmperfintervaljtrbfrunderruns.value_namespace = name_space;
        cpwctdmperfintervaljtrbfrunderruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalMalformedPkt")
    {
        cpwctdmperfintervalmalformedpkt = value;
        cpwctdmperfintervalmalformedpkt.value_namespace = name_space;
        cpwctdmperfintervalmalformedpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalMisOrderDropped")
    {
        cpwctdmperfintervalmisorderdropped = value;
        cpwctdmperfintervalmisorderdropped.value_namespace = name_space;
        cpwctdmperfintervalmisorderdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalMissingPkts")
    {
        cpwctdmperfintervalmissingpkts = value;
        cpwctdmperfintervalmissingpkts.value_namespace = name_space;
        cpwctdmperfintervalmissingpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalPktsReOrder")
    {
        cpwctdmperfintervalpktsreorder = value;
        cpwctdmperfintervalpktsreorder.value_namespace = name_space;
        cpwctdmperfintervalpktsreorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalSESs")
    {
        cpwctdmperfintervalsess = value;
        cpwctdmperfintervalsess.value_namespace = name_space;
        cpwctdmperfintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalUASs")
    {
        cpwctdmperfintervaluass = value;
        cpwctdmperfintervaluass.value_namespace = name_space;
        cpwctdmperfintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMPerfIntervalValidData")
    {
        cpwctdmperfintervalvaliddata = value;
        cpwctdmperfintervalvaliddata.value_namespace = name_space;
        cpwctdmperfintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalNumber")
    {
        cpwctdmperfintervalnumber.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalDuration")
    {
        cpwctdmperfintervalduration.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalESs")
    {
        cpwctdmperfintervaless.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalFC")
    {
        cpwctdmperfintervalfc.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalJtrBfrUnderruns")
    {
        cpwctdmperfintervaljtrbfrunderruns.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalMalformedPkt")
    {
        cpwctdmperfintervalmalformedpkt.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalMisOrderDropped")
    {
        cpwctdmperfintervalmisorderdropped.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalMissingPkts")
    {
        cpwctdmperfintervalmissingpkts.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalPktsReOrder")
    {
        cpwctdmperfintervalpktsreorder.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalSESs")
    {
        cpwctdmperfintervalsess.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalUASs")
    {
        cpwctdmperfintervaluass.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMPerfIntervalValidData")
    {
        cpwctdmperfintervalvaliddata.yfilter = yfilter;
    }
}

bool CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwCTDMPerfIntervalNumber" || name == "cpwCTDMPerfIntervalDuration" || name == "cpwCTDMPerfIntervalESs" || name == "cpwCTDMPerfIntervalFC" || name == "cpwCTDMPerfIntervalJtrBfrUnderruns" || name == "cpwCTDMPerfIntervalMalformedPkt" || name == "cpwCTDMPerfIntervalMisOrderDropped" || name == "cpwCTDMPerfIntervalMissingPkts" || name == "cpwCTDMPerfIntervalPktsReOrder" || name == "cpwCTDMPerfIntervalSESs" || name == "cpwCTDMPerfIntervalUASs" || name == "cpwCTDMPerfIntervalValidData")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmtable()
{

    yang_name = "cpwCTDMTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmtable::~Cpwctdmtable()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmtable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmentry.size(); index++)
    {
        if(cpwctdmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWTDMMIB::Cpwctdmtable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmentry.size(); index++)
    {
        if(cpwctdmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMEntry")
    {
        for(auto const & c : cpwctdmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry>();
        c->parent = this;
        cpwctdmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWTDMMIB::Cpwctdmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwCTDMEntry")
        return true;
    return false;
}

CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::Cpwctdmentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwcgentdmcfgindex{YType::uint32, "cpwCGenTDMCfgIndex"},
    cpwcreltdmcfgindex{YType::uint32, "cpwCRelTDMCfgIndex"},
    cpwctdmconfigerror{YType::bits, "cpwCTDMConfigError"},
    cpwctdmcurrentindications{YType::bits, "cpwCTDMCurrentIndications"},
    cpwctdmifindex{YType::int32, "cpwCTDMIfIndex"},
    cpwctdmlastestimestamp{YType::uint32, "cpwCTDMLastEsTimeStamp"},
    cpwctdmlatchedindications{YType::bits, "cpwCTDMLatchedIndications"},
    cpwctdmrate{YType::int32, "cpwCTDMRate"},
    cpwctdmtimeelapsed{YType::int32, "cpwCTDMTimeElapsed"},
    cpwctdmvaliddayintervals{YType::int32, "cpwCTDMValidDayIntervals"},
    cpwctdmvalidintervals{YType::int32, "cpwCTDMValidIntervals"}
{

    yang_name = "cpwCTDMEntry"; yang_parent_name = "cpwCTDMTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::~Cpwctdmentry()
{
}

bool CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwcgentdmcfgindex.is_set
	|| cpwcreltdmcfgindex.is_set
	|| cpwctdmconfigerror.is_set
	|| cpwctdmcurrentindications.is_set
	|| cpwctdmifindex.is_set
	|| cpwctdmlastestimestamp.is_set
	|| cpwctdmlatchedindications.is_set
	|| cpwctdmrate.is_set
	|| cpwctdmtimeelapsed.is_set
	|| cpwctdmvaliddayintervals.is_set
	|| cpwctdmvalidintervals.is_set;
}

bool CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwcgentdmcfgindex.yfilter)
	|| ydk::is_set(cpwcreltdmcfgindex.yfilter)
	|| ydk::is_set(cpwctdmconfigerror.yfilter)
	|| ydk::is_set(cpwctdmcurrentindications.yfilter)
	|| ydk::is_set(cpwctdmifindex.yfilter)
	|| ydk::is_set(cpwctdmlastestimestamp.yfilter)
	|| ydk::is_set(cpwctdmlatchedindications.yfilter)
	|| ydk::is_set(cpwctdmrate.yfilter)
	|| ydk::is_set(cpwctdmtimeelapsed.yfilter)
	|| ydk::is_set(cpwctdmvaliddayintervals.yfilter)
	|| ydk::is_set(cpwctdmvalidintervals.yfilter);
}

std::string CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwcgentdmcfgindex.is_set || is_set(cpwcgentdmcfgindex.yfilter)) leaf_name_data.push_back(cpwcgentdmcfgindex.get_name_leafdata());
    if (cpwcreltdmcfgindex.is_set || is_set(cpwcreltdmcfgindex.yfilter)) leaf_name_data.push_back(cpwcreltdmcfgindex.get_name_leafdata());
    if (cpwctdmconfigerror.is_set || is_set(cpwctdmconfigerror.yfilter)) leaf_name_data.push_back(cpwctdmconfigerror.get_name_leafdata());
    if (cpwctdmcurrentindications.is_set || is_set(cpwctdmcurrentindications.yfilter)) leaf_name_data.push_back(cpwctdmcurrentindications.get_name_leafdata());
    if (cpwctdmifindex.is_set || is_set(cpwctdmifindex.yfilter)) leaf_name_data.push_back(cpwctdmifindex.get_name_leafdata());
    if (cpwctdmlastestimestamp.is_set || is_set(cpwctdmlastestimestamp.yfilter)) leaf_name_data.push_back(cpwctdmlastestimestamp.get_name_leafdata());
    if (cpwctdmlatchedindications.is_set || is_set(cpwctdmlatchedindications.yfilter)) leaf_name_data.push_back(cpwctdmlatchedindications.get_name_leafdata());
    if (cpwctdmrate.is_set || is_set(cpwctdmrate.yfilter)) leaf_name_data.push_back(cpwctdmrate.get_name_leafdata());
    if (cpwctdmtimeelapsed.is_set || is_set(cpwctdmtimeelapsed.yfilter)) leaf_name_data.push_back(cpwctdmtimeelapsed.get_name_leafdata());
    if (cpwctdmvaliddayintervals.is_set || is_set(cpwctdmvaliddayintervals.yfilter)) leaf_name_data.push_back(cpwctdmvaliddayintervals.get_name_leafdata());
    if (cpwctdmvalidintervals.is_set || is_set(cpwctdmvalidintervals.yfilter)) leaf_name_data.push_back(cpwctdmvalidintervals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCGenTDMCfgIndex")
    {
        cpwcgentdmcfgindex = value;
        cpwcgentdmcfgindex.value_namespace = name_space;
        cpwcgentdmcfgindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCRelTDMCfgIndex")
    {
        cpwcreltdmcfgindex = value;
        cpwcreltdmcfgindex.value_namespace = name_space;
        cpwcreltdmcfgindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMConfigError")
    {
        cpwctdmconfigerror[value] = true;
    }
    if(value_path == "cpwCTDMCurrentIndications")
    {
        cpwctdmcurrentindications[value] = true;
    }
    if(value_path == "cpwCTDMIfIndex")
    {
        cpwctdmifindex = value;
        cpwctdmifindex.value_namespace = name_space;
        cpwctdmifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMLastEsTimeStamp")
    {
        cpwctdmlastestimestamp = value;
        cpwctdmlastestimestamp.value_namespace = name_space;
        cpwctdmlastestimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMLatchedIndications")
    {
        cpwctdmlatchedindications[value] = true;
    }
    if(value_path == "cpwCTDMRate")
    {
        cpwctdmrate = value;
        cpwctdmrate.value_namespace = name_space;
        cpwctdmrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMTimeElapsed")
    {
        cpwctdmtimeelapsed = value;
        cpwctdmtimeelapsed.value_namespace = name_space;
        cpwctdmtimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMValidDayIntervals")
    {
        cpwctdmvaliddayintervals = value;
        cpwctdmvaliddayintervals.value_namespace = name_space;
        cpwctdmvaliddayintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwCTDMValidIntervals")
    {
        cpwctdmvalidintervals = value;
        cpwctdmvalidintervals.value_namespace = name_space;
        cpwctdmvalidintervals.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwCGenTDMCfgIndex")
    {
        cpwcgentdmcfgindex.yfilter = yfilter;
    }
    if(value_path == "cpwCRelTDMCfgIndex")
    {
        cpwcreltdmcfgindex.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMConfigError")
    {
        cpwctdmconfigerror.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMCurrentIndications")
    {
        cpwctdmcurrentindications.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMIfIndex")
    {
        cpwctdmifindex.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMLastEsTimeStamp")
    {
        cpwctdmlastestimestamp.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMLatchedIndications")
    {
        cpwctdmlatchedindications.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMRate")
    {
        cpwctdmrate.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMTimeElapsed")
    {
        cpwctdmtimeelapsed.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMValidDayIntervals")
    {
        cpwctdmvaliddayintervals.yfilter = yfilter;
    }
    if(value_path == "cpwCTDMValidIntervals")
    {
        cpwctdmvalidintervals.yfilter = yfilter;
    }
}

bool CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwCGenTDMCfgIndex" || name == "cpwCRelTDMCfgIndex" || name == "cpwCTDMConfigError" || name == "cpwCTDMCurrentIndications" || name == "cpwCTDMIfIndex" || name == "cpwCTDMLastEsTimeStamp" || name == "cpwCTDMLatchedIndications" || name == "cpwCTDMRate" || name == "cpwCTDMTimeElapsed" || name == "cpwCTDMValidDayIntervals" || name == "cpwCTDMValidIntervals")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgpayloadsuppression::enable {1, "enable"};
const Enum::YLeaf CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgpayloadsuppression::disable {2, "disable"};

const Enum::YLeaf CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgpktreplacepolicy::ais {1, "ais"};
const Enum::YLeaf CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgpktreplacepolicy::implementationSpecific {2, "implementationSpecific"};

const Enum::YLeaf CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgtimestampmode::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgtimestampmode::absolute {2, "absolute"};
const Enum::YLeaf CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgtimestampmode::differential {3, "differential"};


}
}

