
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB {

CISCOSESSBORDERCTRLRCALLSTATSMIB::CISCOSESSBORDERCTRLRCALLSTATSMIB()
    :
    csbcallstatsinstancetable(std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable>())
    , csbcallstatstable(std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable>())
    , csbcurrperiodicstatstable(std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable>())
    , csbhistorystatstable(std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable>())
    , csbperflowstatstable(std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable>())
    , csbh248statstable(std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable>())
    , csbh248statsrev1table(std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table>())
{
    csbcallstatsinstancetable->parent = this;
    csbcallstatstable->parent = this;
    csbcurrperiodicstatstable->parent = this;
    csbhistorystatstable->parent = this;
    csbperflowstatstable->parent = this;
    csbh248statstable->parent = this;
    csbh248statsrev1table->parent = this;

    yang_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::~CISCOSESSBORDERCTRLRCALLSTATSMIB()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::has_data() const
{
    if (is_presence_container) return true;
    return (csbcallstatsinstancetable !=  nullptr && csbcallstatsinstancetable->has_data())
	|| (csbcallstatstable !=  nullptr && csbcallstatstable->has_data())
	|| (csbcurrperiodicstatstable !=  nullptr && csbcurrperiodicstatstable->has_data())
	|| (csbhistorystatstable !=  nullptr && csbhistorystatstable->has_data())
	|| (csbperflowstatstable !=  nullptr && csbperflowstatstable->has_data())
	|| (csbh248statstable !=  nullptr && csbh248statstable->has_data())
	|| (csbh248statsrev1table !=  nullptr && csbh248statsrev1table->has_data());
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::has_operation() const
{
    return is_set(yfilter)
	|| (csbcallstatsinstancetable !=  nullptr && csbcallstatsinstancetable->has_operation())
	|| (csbcallstatstable !=  nullptr && csbcallstatstable->has_operation())
	|| (csbcurrperiodicstatstable !=  nullptr && csbcurrperiodicstatstable->has_operation())
	|| (csbhistorystatstable !=  nullptr && csbhistorystatstable->has_operation())
	|| (csbperflowstatstable !=  nullptr && csbperflowstatstable->has_operation())
	|| (csbh248statstable !=  nullptr && csbh248statstable->has_operation())
	|| (csbh248statsrev1table !=  nullptr && csbh248statsrev1table->has_operation());
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCallStatsInstanceTable")
    {
        if(csbcallstatsinstancetable == nullptr)
        {
            csbcallstatsinstancetable = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable>();
        }
        return csbcallstatsinstancetable;
    }

    if(child_yang_name == "csbCallStatsTable")
    {
        if(csbcallstatstable == nullptr)
        {
            csbcallstatstable = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable>();
        }
        return csbcallstatstable;
    }

    if(child_yang_name == "csbCurrPeriodicStatsTable")
    {
        if(csbcurrperiodicstatstable == nullptr)
        {
            csbcurrperiodicstatstable = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable>();
        }
        return csbcurrperiodicstatstable;
    }

    if(child_yang_name == "csbHistoryStatsTable")
    {
        if(csbhistorystatstable == nullptr)
        {
            csbhistorystatstable = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable>();
        }
        return csbhistorystatstable;
    }

    if(child_yang_name == "csbPerFlowStatsTable")
    {
        if(csbperflowstatstable == nullptr)
        {
            csbperflowstatstable = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable>();
        }
        return csbperflowstatstable;
    }

    if(child_yang_name == "csbH248StatsTable")
    {
        if(csbh248statstable == nullptr)
        {
            csbh248statstable = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable>();
        }
        return csbh248statstable;
    }

    if(child_yang_name == "csbH248StatsRev1Table")
    {
        if(csbh248statsrev1table == nullptr)
        {
            csbh248statsrev1table = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table>();
        }
        return csbh248statsrev1table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csbcallstatsinstancetable != nullptr)
    {
        _children["csbCallStatsInstanceTable"] = csbcallstatsinstancetable;
    }

    if(csbcallstatstable != nullptr)
    {
        _children["csbCallStatsTable"] = csbcallstatstable;
    }

    if(csbcurrperiodicstatstable != nullptr)
    {
        _children["csbCurrPeriodicStatsTable"] = csbcurrperiodicstatstable;
    }

    if(csbhistorystatstable != nullptr)
    {
        _children["csbHistoryStatsTable"] = csbhistorystatstable;
    }

    if(csbperflowstatstable != nullptr)
    {
        _children["csbPerFlowStatsTable"] = csbperflowstatstable;
    }

    if(csbh248statstable != nullptr)
    {
        _children["csbH248StatsTable"] = csbh248statstable;
    }

    if(csbh248statsrev1table != nullptr)
    {
        _children["csbH248StatsRev1Table"] = csbh248statsrev1table;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::clone_ptr() const
{
    return std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB>();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOSESSBORDERCTRLRCALLSTATSMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOSESSBORDERCTRLRCALLSTATSMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceTable" || name == "csbCallStatsTable" || name == "csbCurrPeriodicStatsTable" || name == "csbHistoryStatsTable" || name == "csbPerFlowStatsTable" || name == "csbH248StatsTable" || name == "csbH248StatsRev1Table")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceTable()
    :
    csbcallstatsinstanceentry(this, {"csbcallstatsinstanceindex"})
{

    yang_name = "csbCallStatsInstanceTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::~CsbCallStatsInstanceTable()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csbcallstatsinstanceentry.len(); index++)
    {
        if(csbcallstatsinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::has_operation() const
{
    for (std::size_t index=0; index<csbcallstatsinstanceentry.len(); index++)
    {
        if(csbcallstatsinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCallStatsInstanceEntry")
    {
        auto ent_ = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry>();
        ent_->parent = this;
        csbcallstatsinstanceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csbcallstatsinstanceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::CsbCallStatsInstanceEntry()
    :
    csbcallstatsinstanceindex{YType::uint32, "csbCallStatsInstanceIndex"},
    csbcallstatsinstancephysicalindex{YType::int32, "csbCallStatsInstancePhysicalIndex"}
{

    yang_name = "csbCallStatsInstanceEntry"; yang_parent_name = "csbCallStatsInstanceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::~CsbCallStatsInstanceEntry()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::has_data() const
{
    if (is_presence_container) return true;
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsinstancephysicalindex.is_set;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsinstancephysicalindex.yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbCallStatsInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsInstanceEntry";
    ADD_KEY_TOKEN(csbcallstatsinstanceindex, "csbCallStatsInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsinstancephysicalindex.is_set || is_set(csbcallstatsinstancephysicalindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstancephysicalindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
        csbcallstatsinstanceindex.value_namespace = name_space;
        csbcallstatsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsInstancePhysicalIndex")
    {
        csbcallstatsinstancephysicalindex = value;
        csbcallstatsinstancephysicalindex.value_namespace = name_space;
        csbcallstatsinstancephysicalindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsInstancePhysicalIndex")
    {
        csbcallstatsinstancephysicalindex.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsInstancePhysicalIndex")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsTable()
    :
    csbcallstatsentry(this, {"csbcallstatsinstanceindex", "csbcallstatsserviceindex"})
{

    yang_name = "csbCallStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::~CsbCallStatsTable()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csbcallstatsentry.len(); index++)
    {
        if(csbcallstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::has_operation() const
{
    for (std::size_t index=0; index<csbcallstatsentry.len(); index++)
    {
        if(csbcallstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCallStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry>();
        ent_->parent = this;
        csbcallstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csbcallstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::CsbCallStatsEntry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::uint32, "csbCallStatsServiceIndex"},
    csbcallstatssbcname{YType::str, "csbCallStatsSbcName"},
    csbcallstatscallshigh{YType::uint32, "csbCallStatsCallsHigh"},
    csbcallstatsrate1sec{YType::uint32, "csbCallStatsRate1Sec"},
    csbcallstatscallslow{YType::uint32, "csbCallStatsCallsLow"},
    csbcallstatsavailableflows{YType::uint32, "csbCallStatsAvailableFlows"},
    csbcallstatsusedflows{YType::uint32, "csbCallStatsUsedFlows"},
    csbcallstatspeakflows{YType::uint32, "csbCallStatsPeakFlows"},
    csbcallstatstotalflows{YType::uint32, "csbCallStatsTotalFlows"},
    csbcallstatsusedsigflows{YType::uint32, "csbCallStatsUsedSigFlows"},
    csbcallstatspeaksigflows{YType::uint32, "csbCallStatsPeakSigFlows"},
    csbcallstatstotalsigflows{YType::uint32, "csbCallStatsTotalSigFlows"},
    csbcallstatsavailablepktrate{YType::uint32, "csbCallStatsAvailablePktRate"},
    csbcallstatsunclassifiedpkts{YType::uint64, "csbCallStatsUnclassifiedPkts"},
    csbcallstatsrtppktssent{YType::uint64, "csbCallStatsRTPPktsSent"},
    csbcallstatsrtppktsrcvd{YType::uint64, "csbCallStatsRTPPktsRcvd"},
    csbcallstatsrtppktsdiscard{YType::uint64, "csbCallStatsRTPPktsDiscard"},
    csbcallstatsrtpoctetssent{YType::uint64, "csbCallStatsRTPOctetsSent"},
    csbcallstatsrtpoctetsrcvd{YType::uint64, "csbCallStatsRTPOctetsRcvd"},
    csbcallstatsrtpoctetsdiscard{YType::uint64, "csbCallStatsRTPOctetsDiscard"},
    csbcallstatsnomediacount{YType::uint32, "csbCallStatsNoMediaCount"},
    csbcallstatsrouteerrors{YType::uint32, "csbCallStatsRouteErrors"},
    csbcallstatsavailabletranscodeflows{YType::uint32, "csbCallStatsAvailableTranscodeFlows"},
    csbcallstatsactivetranscodeflows{YType::uint32, "csbCallStatsActiveTranscodeFlows"},
    csbcallstatspeaktranscodeflows{YType::uint32, "csbCallStatsPeakTranscodeFlows"},
    csbcallstatstotaltranscodeflows{YType::uint32, "csbCallStatsTotalTranscodeFlows"}
{

    yang_name = "csbCallStatsEntry"; yang_parent_name = "csbCallStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::~CsbCallStatsEntry()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbcallstatssbcname.is_set
	|| csbcallstatscallshigh.is_set
	|| csbcallstatsrate1sec.is_set
	|| csbcallstatscallslow.is_set
	|| csbcallstatsavailableflows.is_set
	|| csbcallstatsusedflows.is_set
	|| csbcallstatspeakflows.is_set
	|| csbcallstatstotalflows.is_set
	|| csbcallstatsusedsigflows.is_set
	|| csbcallstatspeaksigflows.is_set
	|| csbcallstatstotalsigflows.is_set
	|| csbcallstatsavailablepktrate.is_set
	|| csbcallstatsunclassifiedpkts.is_set
	|| csbcallstatsrtppktssent.is_set
	|| csbcallstatsrtppktsrcvd.is_set
	|| csbcallstatsrtppktsdiscard.is_set
	|| csbcallstatsrtpoctetssent.is_set
	|| csbcallstatsrtpoctetsrcvd.is_set
	|| csbcallstatsrtpoctetsdiscard.is_set
	|| csbcallstatsnomediacount.is_set
	|| csbcallstatsrouteerrors.is_set
	|| csbcallstatsavailabletranscodeflows.is_set
	|| csbcallstatsactivetranscodeflows.is_set
	|| csbcallstatspeaktranscodeflows.is_set
	|| csbcallstatstotaltranscodeflows.is_set;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbcallstatssbcname.yfilter)
	|| ydk::is_set(csbcallstatscallshigh.yfilter)
	|| ydk::is_set(csbcallstatsrate1sec.yfilter)
	|| ydk::is_set(csbcallstatscallslow.yfilter)
	|| ydk::is_set(csbcallstatsavailableflows.yfilter)
	|| ydk::is_set(csbcallstatsusedflows.yfilter)
	|| ydk::is_set(csbcallstatspeakflows.yfilter)
	|| ydk::is_set(csbcallstatstotalflows.yfilter)
	|| ydk::is_set(csbcallstatsusedsigflows.yfilter)
	|| ydk::is_set(csbcallstatspeaksigflows.yfilter)
	|| ydk::is_set(csbcallstatstotalsigflows.yfilter)
	|| ydk::is_set(csbcallstatsavailablepktrate.yfilter)
	|| ydk::is_set(csbcallstatsunclassifiedpkts.yfilter)
	|| ydk::is_set(csbcallstatsrtppktssent.yfilter)
	|| ydk::is_set(csbcallstatsrtppktsrcvd.yfilter)
	|| ydk::is_set(csbcallstatsrtppktsdiscard.yfilter)
	|| ydk::is_set(csbcallstatsrtpoctetssent.yfilter)
	|| ydk::is_set(csbcallstatsrtpoctetsrcvd.yfilter)
	|| ydk::is_set(csbcallstatsrtpoctetsdiscard.yfilter)
	|| ydk::is_set(csbcallstatsnomediacount.yfilter)
	|| ydk::is_set(csbcallstatsrouteerrors.yfilter)
	|| ydk::is_set(csbcallstatsavailabletranscodeflows.yfilter)
	|| ydk::is_set(csbcallstatsactivetranscodeflows.yfilter)
	|| ydk::is_set(csbcallstatspeaktranscodeflows.yfilter)
	|| ydk::is_set(csbcallstatstotaltranscodeflows.yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbCallStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsEntry";
    ADD_KEY_TOKEN(csbcallstatsinstanceindex, "csbCallStatsInstanceIndex");
    ADD_KEY_TOKEN(csbcallstatsserviceindex, "csbCallStatsServiceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbcallstatssbcname.is_set || is_set(csbcallstatssbcname.yfilter)) leaf_name_data.push_back(csbcallstatssbcname.get_name_leafdata());
    if (csbcallstatscallshigh.is_set || is_set(csbcallstatscallshigh.yfilter)) leaf_name_data.push_back(csbcallstatscallshigh.get_name_leafdata());
    if (csbcallstatsrate1sec.is_set || is_set(csbcallstatsrate1sec.yfilter)) leaf_name_data.push_back(csbcallstatsrate1sec.get_name_leafdata());
    if (csbcallstatscallslow.is_set || is_set(csbcallstatscallslow.yfilter)) leaf_name_data.push_back(csbcallstatscallslow.get_name_leafdata());
    if (csbcallstatsavailableflows.is_set || is_set(csbcallstatsavailableflows.yfilter)) leaf_name_data.push_back(csbcallstatsavailableflows.get_name_leafdata());
    if (csbcallstatsusedflows.is_set || is_set(csbcallstatsusedflows.yfilter)) leaf_name_data.push_back(csbcallstatsusedflows.get_name_leafdata());
    if (csbcallstatspeakflows.is_set || is_set(csbcallstatspeakflows.yfilter)) leaf_name_data.push_back(csbcallstatspeakflows.get_name_leafdata());
    if (csbcallstatstotalflows.is_set || is_set(csbcallstatstotalflows.yfilter)) leaf_name_data.push_back(csbcallstatstotalflows.get_name_leafdata());
    if (csbcallstatsusedsigflows.is_set || is_set(csbcallstatsusedsigflows.yfilter)) leaf_name_data.push_back(csbcallstatsusedsigflows.get_name_leafdata());
    if (csbcallstatspeaksigflows.is_set || is_set(csbcallstatspeaksigflows.yfilter)) leaf_name_data.push_back(csbcallstatspeaksigflows.get_name_leafdata());
    if (csbcallstatstotalsigflows.is_set || is_set(csbcallstatstotalsigflows.yfilter)) leaf_name_data.push_back(csbcallstatstotalsigflows.get_name_leafdata());
    if (csbcallstatsavailablepktrate.is_set || is_set(csbcallstatsavailablepktrate.yfilter)) leaf_name_data.push_back(csbcallstatsavailablepktrate.get_name_leafdata());
    if (csbcallstatsunclassifiedpkts.is_set || is_set(csbcallstatsunclassifiedpkts.yfilter)) leaf_name_data.push_back(csbcallstatsunclassifiedpkts.get_name_leafdata());
    if (csbcallstatsrtppktssent.is_set || is_set(csbcallstatsrtppktssent.yfilter)) leaf_name_data.push_back(csbcallstatsrtppktssent.get_name_leafdata());
    if (csbcallstatsrtppktsrcvd.is_set || is_set(csbcallstatsrtppktsrcvd.yfilter)) leaf_name_data.push_back(csbcallstatsrtppktsrcvd.get_name_leafdata());
    if (csbcallstatsrtppktsdiscard.is_set || is_set(csbcallstatsrtppktsdiscard.yfilter)) leaf_name_data.push_back(csbcallstatsrtppktsdiscard.get_name_leafdata());
    if (csbcallstatsrtpoctetssent.is_set || is_set(csbcallstatsrtpoctetssent.yfilter)) leaf_name_data.push_back(csbcallstatsrtpoctetssent.get_name_leafdata());
    if (csbcallstatsrtpoctetsrcvd.is_set || is_set(csbcallstatsrtpoctetsrcvd.yfilter)) leaf_name_data.push_back(csbcallstatsrtpoctetsrcvd.get_name_leafdata());
    if (csbcallstatsrtpoctetsdiscard.is_set || is_set(csbcallstatsrtpoctetsdiscard.yfilter)) leaf_name_data.push_back(csbcallstatsrtpoctetsdiscard.get_name_leafdata());
    if (csbcallstatsnomediacount.is_set || is_set(csbcallstatsnomediacount.yfilter)) leaf_name_data.push_back(csbcallstatsnomediacount.get_name_leafdata());
    if (csbcallstatsrouteerrors.is_set || is_set(csbcallstatsrouteerrors.yfilter)) leaf_name_data.push_back(csbcallstatsrouteerrors.get_name_leafdata());
    if (csbcallstatsavailabletranscodeflows.is_set || is_set(csbcallstatsavailabletranscodeflows.yfilter)) leaf_name_data.push_back(csbcallstatsavailabletranscodeflows.get_name_leafdata());
    if (csbcallstatsactivetranscodeflows.is_set || is_set(csbcallstatsactivetranscodeflows.yfilter)) leaf_name_data.push_back(csbcallstatsactivetranscodeflows.get_name_leafdata());
    if (csbcallstatspeaktranscodeflows.is_set || is_set(csbcallstatspeaktranscodeflows.yfilter)) leaf_name_data.push_back(csbcallstatspeaktranscodeflows.get_name_leafdata());
    if (csbcallstatstotaltranscodeflows.is_set || is_set(csbcallstatstotaltranscodeflows.yfilter)) leaf_name_data.push_back(csbcallstatstotaltranscodeflows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csbCallStatsSbcName")
    {
        csbcallstatssbcname = value;
        csbcallstatssbcname.value_namespace = name_space;
        csbcallstatssbcname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsCallsHigh")
    {
        csbcallstatscallshigh = value;
        csbcallstatscallshigh.value_namespace = name_space;
        csbcallstatscallshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRate1Sec")
    {
        csbcallstatsrate1sec = value;
        csbcallstatsrate1sec.value_namespace = name_space;
        csbcallstatsrate1sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsCallsLow")
    {
        csbcallstatscallslow = value;
        csbcallstatscallslow.value_namespace = name_space;
        csbcallstatscallslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsAvailableFlows")
    {
        csbcallstatsavailableflows = value;
        csbcallstatsavailableflows.value_namespace = name_space;
        csbcallstatsavailableflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsUsedFlows")
    {
        csbcallstatsusedflows = value;
        csbcallstatsusedflows.value_namespace = name_space;
        csbcallstatsusedflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsPeakFlows")
    {
        csbcallstatspeakflows = value;
        csbcallstatspeakflows.value_namespace = name_space;
        csbcallstatspeakflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsTotalFlows")
    {
        csbcallstatstotalflows = value;
        csbcallstatstotalflows.value_namespace = name_space;
        csbcallstatstotalflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsUsedSigFlows")
    {
        csbcallstatsusedsigflows = value;
        csbcallstatsusedsigflows.value_namespace = name_space;
        csbcallstatsusedsigflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsPeakSigFlows")
    {
        csbcallstatspeaksigflows = value;
        csbcallstatspeaksigflows.value_namespace = name_space;
        csbcallstatspeaksigflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsTotalSigFlows")
    {
        csbcallstatstotalsigflows = value;
        csbcallstatstotalsigflows.value_namespace = name_space;
        csbcallstatstotalsigflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsAvailablePktRate")
    {
        csbcallstatsavailablepktrate = value;
        csbcallstatsavailablepktrate.value_namespace = name_space;
        csbcallstatsavailablepktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsUnclassifiedPkts")
    {
        csbcallstatsunclassifiedpkts = value;
        csbcallstatsunclassifiedpkts.value_namespace = name_space;
        csbcallstatsunclassifiedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRTPPktsSent")
    {
        csbcallstatsrtppktssent = value;
        csbcallstatsrtppktssent.value_namespace = name_space;
        csbcallstatsrtppktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRTPPktsRcvd")
    {
        csbcallstatsrtppktsrcvd = value;
        csbcallstatsrtppktsrcvd.value_namespace = name_space;
        csbcallstatsrtppktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRTPPktsDiscard")
    {
        csbcallstatsrtppktsdiscard = value;
        csbcallstatsrtppktsdiscard.value_namespace = name_space;
        csbcallstatsrtppktsdiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRTPOctetsSent")
    {
        csbcallstatsrtpoctetssent = value;
        csbcallstatsrtpoctetssent.value_namespace = name_space;
        csbcallstatsrtpoctetssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRTPOctetsRcvd")
    {
        csbcallstatsrtpoctetsrcvd = value;
        csbcallstatsrtpoctetsrcvd.value_namespace = name_space;
        csbcallstatsrtpoctetsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRTPOctetsDiscard")
    {
        csbcallstatsrtpoctetsdiscard = value;
        csbcallstatsrtpoctetsdiscard.value_namespace = name_space;
        csbcallstatsrtpoctetsdiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsNoMediaCount")
    {
        csbcallstatsnomediacount = value;
        csbcallstatsnomediacount.value_namespace = name_space;
        csbcallstatsnomediacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsRouteErrors")
    {
        csbcallstatsrouteerrors = value;
        csbcallstatsrouteerrors.value_namespace = name_space;
        csbcallstatsrouteerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsAvailableTranscodeFlows")
    {
        csbcallstatsavailabletranscodeflows = value;
        csbcallstatsavailabletranscodeflows.value_namespace = name_space;
        csbcallstatsavailabletranscodeflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsActiveTranscodeFlows")
    {
        csbcallstatsactivetranscodeflows = value;
        csbcallstatsactivetranscodeflows.value_namespace = name_space;
        csbcallstatsactivetranscodeflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsPeakTranscodeFlows")
    {
        csbcallstatspeaktranscodeflows = value;
        csbcallstatspeaktranscodeflows.value_namespace = name_space;
        csbcallstatspeaktranscodeflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCallStatsTotalTranscodeFlows")
    {
        csbcallstatstotaltranscodeflows = value;
        csbcallstatstotaltranscodeflows.value_namespace = name_space;
        csbcallstatstotaltranscodeflows.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsSbcName")
    {
        csbcallstatssbcname.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsCallsHigh")
    {
        csbcallstatscallshigh.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRate1Sec")
    {
        csbcallstatsrate1sec.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsCallsLow")
    {
        csbcallstatscallslow.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsAvailableFlows")
    {
        csbcallstatsavailableflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsUsedFlows")
    {
        csbcallstatsusedflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsPeakFlows")
    {
        csbcallstatspeakflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsTotalFlows")
    {
        csbcallstatstotalflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsUsedSigFlows")
    {
        csbcallstatsusedsigflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsPeakSigFlows")
    {
        csbcallstatspeaksigflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsTotalSigFlows")
    {
        csbcallstatstotalsigflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsAvailablePktRate")
    {
        csbcallstatsavailablepktrate.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsUnclassifiedPkts")
    {
        csbcallstatsunclassifiedpkts.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRTPPktsSent")
    {
        csbcallstatsrtppktssent.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRTPPktsRcvd")
    {
        csbcallstatsrtppktsrcvd.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRTPPktsDiscard")
    {
        csbcallstatsrtppktsdiscard.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRTPOctetsSent")
    {
        csbcallstatsrtpoctetssent.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRTPOctetsRcvd")
    {
        csbcallstatsrtpoctetsrcvd.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRTPOctetsDiscard")
    {
        csbcallstatsrtpoctetsdiscard.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsNoMediaCount")
    {
        csbcallstatsnomediacount.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsRouteErrors")
    {
        csbcallstatsrouteerrors.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsAvailableTranscodeFlows")
    {
        csbcallstatsavailabletranscodeflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsActiveTranscodeFlows")
    {
        csbcallstatsactivetranscodeflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsPeakTranscodeFlows")
    {
        csbcallstatspeaktranscodeflows.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsTotalTranscodeFlows")
    {
        csbcallstatstotaltranscodeflows.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbCallStatsSbcName" || name == "csbCallStatsCallsHigh" || name == "csbCallStatsRate1Sec" || name == "csbCallStatsCallsLow" || name == "csbCallStatsAvailableFlows" || name == "csbCallStatsUsedFlows" || name == "csbCallStatsPeakFlows" || name == "csbCallStatsTotalFlows" || name == "csbCallStatsUsedSigFlows" || name == "csbCallStatsPeakSigFlows" || name == "csbCallStatsTotalSigFlows" || name == "csbCallStatsAvailablePktRate" || name == "csbCallStatsUnclassifiedPkts" || name == "csbCallStatsRTPPktsSent" || name == "csbCallStatsRTPPktsRcvd" || name == "csbCallStatsRTPPktsDiscard" || name == "csbCallStatsRTPOctetsSent" || name == "csbCallStatsRTPOctetsRcvd" || name == "csbCallStatsRTPOctetsDiscard" || name == "csbCallStatsNoMediaCount" || name == "csbCallStatsRouteErrors" || name == "csbCallStatsAvailableTranscodeFlows" || name == "csbCallStatsActiveTranscodeFlows" || name == "csbCallStatsPeakTranscodeFlows" || name == "csbCallStatsTotalTranscodeFlows")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsTable()
    :
    csbcurrperiodicstatsentry(this, {"csbcallstatsinstanceindex", "csbcallstatsserviceindex", "csbcurrperiodicstatsinterval"})
{

    yang_name = "csbCurrPeriodicStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::~CsbCurrPeriodicStatsTable()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csbcurrperiodicstatsentry.len(); index++)
    {
        if(csbcurrperiodicstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::has_operation() const
{
    for (std::size_t index=0; index<csbcurrperiodicstatsentry.len(); index++)
    {
        if(csbcurrperiodicstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCurrPeriodicStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCurrPeriodicStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry>();
        ent_->parent = this;
        csbcurrperiodicstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csbcurrperiodicstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCurrPeriodicStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::CsbCurrPeriodicStatsEntry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbcurrperiodicstatsinterval{YType::enumeration, "csbCurrPeriodicStatsInterval"},
    csbcurrperiodicstatsactivecalls{YType::uint32, "csbCurrPeriodicStatsActiveCalls"},
    csbcurrperiodicstatsactivatingcalls{YType::uint32, "csbCurrPeriodicStatsActivatingCalls"},
    csbcurrperiodicstatsdeactivatingcalls{YType::uint32, "csbCurrPeriodicStatsDeactivatingCalls"},
    csbcurrperiodicstatstotalcallattempts{YType::uint32, "csbCurrPeriodicStatsTotalCallAttempts"},
    csbcurrperiodicstatsfailedcallattempts{YType::uint32, "csbCurrPeriodicStatsFailedCallAttempts"},
    csbcurrperiodicstatscallroutingfailure{YType::uint32, "csbCurrPeriodicStatsCallRoutingFailure"},
    csbcurrperiodicstatscallresourcefailure{YType::uint32, "csbCurrPeriodicStatsCallResourceFailure"},
    csbcurrperiodicstatscallmediafailure{YType::uint32, "csbCurrPeriodicStatsCallMediaFailure"},
    csbcurrperiodicstatscallsigfailure{YType::uint32, "csbCurrPeriodicStatsCallSigFailure"},
    csbcurrperiodicstatsactivecallfailure{YType::uint32, "csbCurrPeriodicStatsActiveCallFailure"},
    csbcurrperiodicstatscongestionfailure{YType::uint32, "csbCurrPeriodicStatsCongestionFailure"},
    csbcurrperiodicstatscallsetuppolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupPolicyFailure"},
    csbcurrperiodicstatscallsetupnapolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupNAPolicyFailure"},
    csbcurrperiodicstatscallsetuproutingpolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupRoutingPolicyFailure"},
    csbcurrperiodicstatscallsetupcacpolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACPolicyFailure"},
    csbcurrperiodicstatscallsetupcaccalllimitfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACCallLimitFailure"},
    csbcurrperiodicstatscallsetupcacratelimitfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACRateLimitFailure"},
    csbcurrperiodicstatscallsetupcacbandwidthfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACBandwidthFailure"},
    csbcurrperiodicstatscallsetupcacmedialimitfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACMediaLimitFailure"},
    csbcurrperiodicstatscallsetupcacmediaupdatefailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACMediaUpdateFailure"},
    csbcurrperiodicstatstimestamp{YType::str, "csbCurrPeriodicStatsTimestamp"},
    csbcurrperiodicstatstranscodedcalls{YType::uint32, "csbCurrPeriodicStatsTranscodedCalls"},
    csbcurrperiodicstatstransratedcalls{YType::uint32, "csbCurrPeriodicStatsTransratedCalls"},
    csbcurrperiodicstatstotalcallupdatefailure{YType::uint32, "csbCurrPeriodicStatsTotalCallUpdateFailure"},
    csbcurrperiodicstatsactiveipv6calls{YType::uint32, "csbCurrPeriodicStatsActiveIpv6Calls"},
    csbcurrperiodicstatsactiveemergencycalls{YType::uint32, "csbCurrPeriodicStatsActiveEmergencyCalls"},
    csbcurrperiodicstatsactivee2emergencycalls{YType::uint32, "csbCurrPeriodicStatsActiveE2EmergencyCalls"},
    csbcurrperiodicstatsimsrxactivecalls{YType::uint32, "csbCurrPeriodicStatsImsRxActiveCalls"},
    csbcurrperiodicstatsimsrxcallsetupfaiures{YType::uint32, "csbCurrPeriodicStatsImsRxCallSetupFaiures"},
    csbcurrperiodicstatsimsrxcallrenegotiationattempts{YType::uint32, "csbCurrPeriodicStatsImsRxCallRenegotiationAttempts"},
    csbcurrperiodicstatsimsrxcallrenegotiationfailures{YType::uint32, "csbCurrPeriodicStatsImsRxCallRenegotiationFailures"},
    csbcurrperiodicstatsaudiotranscodedcalls{YType::uint32, "csbCurrPeriodicStatsAudioTranscodedCalls"},
    csbcurrperiodicstatsfaxtranscodedcalls{YType::uint32, "csbCurrPeriodicStatsFaxTranscodedCalls"},
    csbcurrperiodicstatsrtpdisallowedfailures{YType::uint32, "csbCurrPeriodicStatsRtpDisallowedFailures"},
    csbcurrperiodicstatssrtpdisallowedfailures{YType::uint32, "csbCurrPeriodicStatsSrtpDisallowedFailures"},
    csbcurrperiodicstatsnonsrtpcalls{YType::uint32, "csbCurrPeriodicStatsNonSrtpCalls"},
    csbcurrperiodicstatssrtpnoniwcalls{YType::uint32, "csbCurrPeriodicStatsSrtpNonIwCalls"},
    csbcurrperiodicstatssrtpiwcalls{YType::uint32, "csbCurrPeriodicStatsSrtpIwCalls"},
    csbcurrperiodicstatsdtmfiw2833calls{YType::uint32, "csbCurrPeriodicStatsDtmfIw2833Calls"},
    csbcurrperiodicstatsdtmfiwinbandcalls{YType::uint32, "csbCurrPeriodicStatsDtmfIwInbandCalls"},
    csbcurrperiodicstatsdtmfiw2833inbandcalls{YType::uint32, "csbCurrPeriodicStatsDtmfIw2833InbandCalls"},
    csbcurrperiodicstatstotaltapsrequested{YType::uint32, "csbCurrPeriodicStatsTotalTapsRequested"},
    csbcurrperiodicstatstotaltapssucceeded{YType::uint32, "csbCurrPeriodicStatsTotalTapsSucceeded"},
    csbcurrperiodicstatscurrenttaps{YType::uint32, "csbCurrPeriodicStatsCurrentTaps"},
    csbcurrperiodicipseccalls{YType::uint32, "csbCurrPeriodicIpsecCalls"}
{

    yang_name = "csbCurrPeriodicStatsEntry"; yang_parent_name = "csbCurrPeriodicStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::~CsbCurrPeriodicStatsEntry()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbcurrperiodicstatsinterval.is_set
	|| csbcurrperiodicstatsactivecalls.is_set
	|| csbcurrperiodicstatsactivatingcalls.is_set
	|| csbcurrperiodicstatsdeactivatingcalls.is_set
	|| csbcurrperiodicstatstotalcallattempts.is_set
	|| csbcurrperiodicstatsfailedcallattempts.is_set
	|| csbcurrperiodicstatscallroutingfailure.is_set
	|| csbcurrperiodicstatscallresourcefailure.is_set
	|| csbcurrperiodicstatscallmediafailure.is_set
	|| csbcurrperiodicstatscallsigfailure.is_set
	|| csbcurrperiodicstatsactivecallfailure.is_set
	|| csbcurrperiodicstatscongestionfailure.is_set
	|| csbcurrperiodicstatscallsetuppolicyfailure.is_set
	|| csbcurrperiodicstatscallsetupnapolicyfailure.is_set
	|| csbcurrperiodicstatscallsetuproutingpolicyfailure.is_set
	|| csbcurrperiodicstatscallsetupcacpolicyfailure.is_set
	|| csbcurrperiodicstatscallsetupcaccalllimitfailure.is_set
	|| csbcurrperiodicstatscallsetupcacratelimitfailure.is_set
	|| csbcurrperiodicstatscallsetupcacbandwidthfailure.is_set
	|| csbcurrperiodicstatscallsetupcacmedialimitfailure.is_set
	|| csbcurrperiodicstatscallsetupcacmediaupdatefailure.is_set
	|| csbcurrperiodicstatstimestamp.is_set
	|| csbcurrperiodicstatstranscodedcalls.is_set
	|| csbcurrperiodicstatstransratedcalls.is_set
	|| csbcurrperiodicstatstotalcallupdatefailure.is_set
	|| csbcurrperiodicstatsactiveipv6calls.is_set
	|| csbcurrperiodicstatsactiveemergencycalls.is_set
	|| csbcurrperiodicstatsactivee2emergencycalls.is_set
	|| csbcurrperiodicstatsimsrxactivecalls.is_set
	|| csbcurrperiodicstatsimsrxcallsetupfaiures.is_set
	|| csbcurrperiodicstatsimsrxcallrenegotiationattempts.is_set
	|| csbcurrperiodicstatsimsrxcallrenegotiationfailures.is_set
	|| csbcurrperiodicstatsaudiotranscodedcalls.is_set
	|| csbcurrperiodicstatsfaxtranscodedcalls.is_set
	|| csbcurrperiodicstatsrtpdisallowedfailures.is_set
	|| csbcurrperiodicstatssrtpdisallowedfailures.is_set
	|| csbcurrperiodicstatsnonsrtpcalls.is_set
	|| csbcurrperiodicstatssrtpnoniwcalls.is_set
	|| csbcurrperiodicstatssrtpiwcalls.is_set
	|| csbcurrperiodicstatsdtmfiw2833calls.is_set
	|| csbcurrperiodicstatsdtmfiwinbandcalls.is_set
	|| csbcurrperiodicstatsdtmfiw2833inbandcalls.is_set
	|| csbcurrperiodicstatstotaltapsrequested.is_set
	|| csbcurrperiodicstatstotaltapssucceeded.is_set
	|| csbcurrperiodicstatscurrenttaps.is_set
	|| csbcurrperiodicipseccalls.is_set;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsinterval.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsactivecalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsactivatingcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsdeactivatingcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatstotalcallattempts.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsfailedcallattempts.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallroutingfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallresourcefailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallmediafailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsigfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsactivecallfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscongestionfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetuppolicyfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetupnapolicyfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetuproutingpolicyfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetupcacpolicyfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetupcaccalllimitfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetupcacratelimitfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetupcacbandwidthfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetupcacmedialimitfailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscallsetupcacmediaupdatefailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatstimestamp.yfilter)
	|| ydk::is_set(csbcurrperiodicstatstranscodedcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatstransratedcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatstotalcallupdatefailure.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsactiveipv6calls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsactiveemergencycalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsactivee2emergencycalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsimsrxactivecalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsimsrxcallsetupfaiures.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsimsrxcallrenegotiationattempts.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsimsrxcallrenegotiationfailures.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsaudiotranscodedcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsfaxtranscodedcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsrtpdisallowedfailures.yfilter)
	|| ydk::is_set(csbcurrperiodicstatssrtpdisallowedfailures.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsnonsrtpcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatssrtpnoniwcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatssrtpiwcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsdtmfiw2833calls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsdtmfiwinbandcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatsdtmfiw2833inbandcalls.yfilter)
	|| ydk::is_set(csbcurrperiodicstatstotaltapsrequested.yfilter)
	|| ydk::is_set(csbcurrperiodicstatstotaltapssucceeded.yfilter)
	|| ydk::is_set(csbcurrperiodicstatscurrenttaps.yfilter)
	|| ydk::is_set(csbcurrperiodicipseccalls.yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbCurrPeriodicStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCurrPeriodicStatsEntry";
    ADD_KEY_TOKEN(csbcallstatsinstanceindex, "csbCallStatsInstanceIndex");
    ADD_KEY_TOKEN(csbcallstatsserviceindex, "csbCallStatsServiceIndex");
    ADD_KEY_TOKEN(csbcurrperiodicstatsinterval, "csbCurrPeriodicStatsInterval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbcurrperiodicstatsinterval.is_set || is_set(csbcurrperiodicstatsinterval.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsinterval.get_name_leafdata());
    if (csbcurrperiodicstatsactivecalls.is_set || is_set(csbcurrperiodicstatsactivecalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsactivecalls.get_name_leafdata());
    if (csbcurrperiodicstatsactivatingcalls.is_set || is_set(csbcurrperiodicstatsactivatingcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsactivatingcalls.get_name_leafdata());
    if (csbcurrperiodicstatsdeactivatingcalls.is_set || is_set(csbcurrperiodicstatsdeactivatingcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsdeactivatingcalls.get_name_leafdata());
    if (csbcurrperiodicstatstotalcallattempts.is_set || is_set(csbcurrperiodicstatstotalcallattempts.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatstotalcallattempts.get_name_leafdata());
    if (csbcurrperiodicstatsfailedcallattempts.is_set || is_set(csbcurrperiodicstatsfailedcallattempts.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsfailedcallattempts.get_name_leafdata());
    if (csbcurrperiodicstatscallroutingfailure.is_set || is_set(csbcurrperiodicstatscallroutingfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallroutingfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallresourcefailure.is_set || is_set(csbcurrperiodicstatscallresourcefailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallresourcefailure.get_name_leafdata());
    if (csbcurrperiodicstatscallmediafailure.is_set || is_set(csbcurrperiodicstatscallmediafailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallmediafailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsigfailure.is_set || is_set(csbcurrperiodicstatscallsigfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsigfailure.get_name_leafdata());
    if (csbcurrperiodicstatsactivecallfailure.is_set || is_set(csbcurrperiodicstatsactivecallfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsactivecallfailure.get_name_leafdata());
    if (csbcurrperiodicstatscongestionfailure.is_set || is_set(csbcurrperiodicstatscongestionfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscongestionfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetuppolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetuppolicyfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetuppolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupnapolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetupnapolicyfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupnapolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetuproutingpolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetuproutingpolicyfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetuproutingpolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacpolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacpolicyfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacpolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcaccalllimitfailure.is_set || is_set(csbcurrperiodicstatscallsetupcaccalllimitfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcaccalllimitfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacratelimitfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacratelimitfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacratelimitfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacbandwidthfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacbandwidthfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacbandwidthfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacmedialimitfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacmedialimitfailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacmedialimitfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacmediaupdatefailure.is_set || is_set(csbcurrperiodicstatscallsetupcacmediaupdatefailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacmediaupdatefailure.get_name_leafdata());
    if (csbcurrperiodicstatstimestamp.is_set || is_set(csbcurrperiodicstatstimestamp.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatstimestamp.get_name_leafdata());
    if (csbcurrperiodicstatstranscodedcalls.is_set || is_set(csbcurrperiodicstatstranscodedcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatstranscodedcalls.get_name_leafdata());
    if (csbcurrperiodicstatstransratedcalls.is_set || is_set(csbcurrperiodicstatstransratedcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatstransratedcalls.get_name_leafdata());
    if (csbcurrperiodicstatstotalcallupdatefailure.is_set || is_set(csbcurrperiodicstatstotalcallupdatefailure.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatstotalcallupdatefailure.get_name_leafdata());
    if (csbcurrperiodicstatsactiveipv6calls.is_set || is_set(csbcurrperiodicstatsactiveipv6calls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsactiveipv6calls.get_name_leafdata());
    if (csbcurrperiodicstatsactiveemergencycalls.is_set || is_set(csbcurrperiodicstatsactiveemergencycalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsactiveemergencycalls.get_name_leafdata());
    if (csbcurrperiodicstatsactivee2emergencycalls.is_set || is_set(csbcurrperiodicstatsactivee2emergencycalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsactivee2emergencycalls.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxactivecalls.is_set || is_set(csbcurrperiodicstatsimsrxactivecalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxactivecalls.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxcallsetupfaiures.is_set || is_set(csbcurrperiodicstatsimsrxcallsetupfaiures.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxcallsetupfaiures.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxcallrenegotiationattempts.is_set || is_set(csbcurrperiodicstatsimsrxcallrenegotiationattempts.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxcallrenegotiationattempts.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxcallrenegotiationfailures.is_set || is_set(csbcurrperiodicstatsimsrxcallrenegotiationfailures.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxcallrenegotiationfailures.get_name_leafdata());
    if (csbcurrperiodicstatsaudiotranscodedcalls.is_set || is_set(csbcurrperiodicstatsaudiotranscodedcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsaudiotranscodedcalls.get_name_leafdata());
    if (csbcurrperiodicstatsfaxtranscodedcalls.is_set || is_set(csbcurrperiodicstatsfaxtranscodedcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsfaxtranscodedcalls.get_name_leafdata());
    if (csbcurrperiodicstatsrtpdisallowedfailures.is_set || is_set(csbcurrperiodicstatsrtpdisallowedfailures.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsrtpdisallowedfailures.get_name_leafdata());
    if (csbcurrperiodicstatssrtpdisallowedfailures.is_set || is_set(csbcurrperiodicstatssrtpdisallowedfailures.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatssrtpdisallowedfailures.get_name_leafdata());
    if (csbcurrperiodicstatsnonsrtpcalls.is_set || is_set(csbcurrperiodicstatsnonsrtpcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsnonsrtpcalls.get_name_leafdata());
    if (csbcurrperiodicstatssrtpnoniwcalls.is_set || is_set(csbcurrperiodicstatssrtpnoniwcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatssrtpnoniwcalls.get_name_leafdata());
    if (csbcurrperiodicstatssrtpiwcalls.is_set || is_set(csbcurrperiodicstatssrtpiwcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatssrtpiwcalls.get_name_leafdata());
    if (csbcurrperiodicstatsdtmfiw2833calls.is_set || is_set(csbcurrperiodicstatsdtmfiw2833calls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsdtmfiw2833calls.get_name_leafdata());
    if (csbcurrperiodicstatsdtmfiwinbandcalls.is_set || is_set(csbcurrperiodicstatsdtmfiwinbandcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsdtmfiwinbandcalls.get_name_leafdata());
    if (csbcurrperiodicstatsdtmfiw2833inbandcalls.is_set || is_set(csbcurrperiodicstatsdtmfiw2833inbandcalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatsdtmfiw2833inbandcalls.get_name_leafdata());
    if (csbcurrperiodicstatstotaltapsrequested.is_set || is_set(csbcurrperiodicstatstotaltapsrequested.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatstotaltapsrequested.get_name_leafdata());
    if (csbcurrperiodicstatstotaltapssucceeded.is_set || is_set(csbcurrperiodicstatstotaltapssucceeded.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatstotaltapssucceeded.get_name_leafdata());
    if (csbcurrperiodicstatscurrenttaps.is_set || is_set(csbcurrperiodicstatscurrenttaps.yfilter)) leaf_name_data.push_back(csbcurrperiodicstatscurrenttaps.get_name_leafdata());
    if (csbcurrperiodicipseccalls.is_set || is_set(csbcurrperiodicipseccalls.yfilter)) leaf_name_data.push_back(csbcurrperiodicipseccalls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csbCurrPeriodicStatsInterval")
    {
        csbcurrperiodicstatsinterval = value;
        csbcurrperiodicstatsinterval.value_namespace = name_space;
        csbcurrperiodicstatsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsActiveCalls")
    {
        csbcurrperiodicstatsactivecalls = value;
        csbcurrperiodicstatsactivecalls.value_namespace = name_space;
        csbcurrperiodicstatsactivecalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsActivatingCalls")
    {
        csbcurrperiodicstatsactivatingcalls = value;
        csbcurrperiodicstatsactivatingcalls.value_namespace = name_space;
        csbcurrperiodicstatsactivatingcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsDeactivatingCalls")
    {
        csbcurrperiodicstatsdeactivatingcalls = value;
        csbcurrperiodicstatsdeactivatingcalls.value_namespace = name_space;
        csbcurrperiodicstatsdeactivatingcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsTotalCallAttempts")
    {
        csbcurrperiodicstatstotalcallattempts = value;
        csbcurrperiodicstatstotalcallattempts.value_namespace = name_space;
        csbcurrperiodicstatstotalcallattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsFailedCallAttempts")
    {
        csbcurrperiodicstatsfailedcallattempts = value;
        csbcurrperiodicstatsfailedcallattempts.value_namespace = name_space;
        csbcurrperiodicstatsfailedcallattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallRoutingFailure")
    {
        csbcurrperiodicstatscallroutingfailure = value;
        csbcurrperiodicstatscallroutingfailure.value_namespace = name_space;
        csbcurrperiodicstatscallroutingfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallResourceFailure")
    {
        csbcurrperiodicstatscallresourcefailure = value;
        csbcurrperiodicstatscallresourcefailure.value_namespace = name_space;
        csbcurrperiodicstatscallresourcefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallMediaFailure")
    {
        csbcurrperiodicstatscallmediafailure = value;
        csbcurrperiodicstatscallmediafailure.value_namespace = name_space;
        csbcurrperiodicstatscallmediafailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSigFailure")
    {
        csbcurrperiodicstatscallsigfailure = value;
        csbcurrperiodicstatscallsigfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsigfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsActiveCallFailure")
    {
        csbcurrperiodicstatsactivecallfailure = value;
        csbcurrperiodicstatsactivecallfailure.value_namespace = name_space;
        csbcurrperiodicstatsactivecallfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCongestionFailure")
    {
        csbcurrperiodicstatscongestionfailure = value;
        csbcurrperiodicstatscongestionfailure.value_namespace = name_space;
        csbcurrperiodicstatscongestionfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupPolicyFailure")
    {
        csbcurrperiodicstatscallsetuppolicyfailure = value;
        csbcurrperiodicstatscallsetuppolicyfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetuppolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupNAPolicyFailure")
    {
        csbcurrperiodicstatscallsetupnapolicyfailure = value;
        csbcurrperiodicstatscallsetupnapolicyfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetupnapolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupRoutingPolicyFailure")
    {
        csbcurrperiodicstatscallsetuproutingpolicyfailure = value;
        csbcurrperiodicstatscallsetuproutingpolicyfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetuproutingpolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACPolicyFailure")
    {
        csbcurrperiodicstatscallsetupcacpolicyfailure = value;
        csbcurrperiodicstatscallsetupcacpolicyfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetupcacpolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACCallLimitFailure")
    {
        csbcurrperiodicstatscallsetupcaccalllimitfailure = value;
        csbcurrperiodicstatscallsetupcaccalllimitfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetupcaccalllimitfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACRateLimitFailure")
    {
        csbcurrperiodicstatscallsetupcacratelimitfailure = value;
        csbcurrperiodicstatscallsetupcacratelimitfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetupcacratelimitfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACBandwidthFailure")
    {
        csbcurrperiodicstatscallsetupcacbandwidthfailure = value;
        csbcurrperiodicstatscallsetupcacbandwidthfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetupcacbandwidthfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACMediaLimitFailure")
    {
        csbcurrperiodicstatscallsetupcacmedialimitfailure = value;
        csbcurrperiodicstatscallsetupcacmedialimitfailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetupcacmedialimitfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACMediaUpdateFailure")
    {
        csbcurrperiodicstatscallsetupcacmediaupdatefailure = value;
        csbcurrperiodicstatscallsetupcacmediaupdatefailure.value_namespace = name_space;
        csbcurrperiodicstatscallsetupcacmediaupdatefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsTimestamp")
    {
        csbcurrperiodicstatstimestamp = value;
        csbcurrperiodicstatstimestamp.value_namespace = name_space;
        csbcurrperiodicstatstimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsTranscodedCalls")
    {
        csbcurrperiodicstatstranscodedcalls = value;
        csbcurrperiodicstatstranscodedcalls.value_namespace = name_space;
        csbcurrperiodicstatstranscodedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsTransratedCalls")
    {
        csbcurrperiodicstatstransratedcalls = value;
        csbcurrperiodicstatstransratedcalls.value_namespace = name_space;
        csbcurrperiodicstatstransratedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsTotalCallUpdateFailure")
    {
        csbcurrperiodicstatstotalcallupdatefailure = value;
        csbcurrperiodicstatstotalcallupdatefailure.value_namespace = name_space;
        csbcurrperiodicstatstotalcallupdatefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsActiveIpv6Calls")
    {
        csbcurrperiodicstatsactiveipv6calls = value;
        csbcurrperiodicstatsactiveipv6calls.value_namespace = name_space;
        csbcurrperiodicstatsactiveipv6calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsActiveEmergencyCalls")
    {
        csbcurrperiodicstatsactiveemergencycalls = value;
        csbcurrperiodicstatsactiveemergencycalls.value_namespace = name_space;
        csbcurrperiodicstatsactiveemergencycalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsActiveE2EmergencyCalls")
    {
        csbcurrperiodicstatsactivee2emergencycalls = value;
        csbcurrperiodicstatsactivee2emergencycalls.value_namespace = name_space;
        csbcurrperiodicstatsactivee2emergencycalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxActiveCalls")
    {
        csbcurrperiodicstatsimsrxactivecalls = value;
        csbcurrperiodicstatsimsrxactivecalls.value_namespace = name_space;
        csbcurrperiodicstatsimsrxactivecalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallSetupFaiures")
    {
        csbcurrperiodicstatsimsrxcallsetupfaiures = value;
        csbcurrperiodicstatsimsrxcallsetupfaiures.value_namespace = name_space;
        csbcurrperiodicstatsimsrxcallsetupfaiures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallRenegotiationAttempts")
    {
        csbcurrperiodicstatsimsrxcallrenegotiationattempts = value;
        csbcurrperiodicstatsimsrxcallrenegotiationattempts.value_namespace = name_space;
        csbcurrperiodicstatsimsrxcallrenegotiationattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallRenegotiationFailures")
    {
        csbcurrperiodicstatsimsrxcallrenegotiationfailures = value;
        csbcurrperiodicstatsimsrxcallrenegotiationfailures.value_namespace = name_space;
        csbcurrperiodicstatsimsrxcallrenegotiationfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsAudioTranscodedCalls")
    {
        csbcurrperiodicstatsaudiotranscodedcalls = value;
        csbcurrperiodicstatsaudiotranscodedcalls.value_namespace = name_space;
        csbcurrperiodicstatsaudiotranscodedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsFaxTranscodedCalls")
    {
        csbcurrperiodicstatsfaxtranscodedcalls = value;
        csbcurrperiodicstatsfaxtranscodedcalls.value_namespace = name_space;
        csbcurrperiodicstatsfaxtranscodedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsRtpDisallowedFailures")
    {
        csbcurrperiodicstatsrtpdisallowedfailures = value;
        csbcurrperiodicstatsrtpdisallowedfailures.value_namespace = name_space;
        csbcurrperiodicstatsrtpdisallowedfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpDisallowedFailures")
    {
        csbcurrperiodicstatssrtpdisallowedfailures = value;
        csbcurrperiodicstatssrtpdisallowedfailures.value_namespace = name_space;
        csbcurrperiodicstatssrtpdisallowedfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsNonSrtpCalls")
    {
        csbcurrperiodicstatsnonsrtpcalls = value;
        csbcurrperiodicstatsnonsrtpcalls.value_namespace = name_space;
        csbcurrperiodicstatsnonsrtpcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpNonIwCalls")
    {
        csbcurrperiodicstatssrtpnoniwcalls = value;
        csbcurrperiodicstatssrtpnoniwcalls.value_namespace = name_space;
        csbcurrperiodicstatssrtpnoniwcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpIwCalls")
    {
        csbcurrperiodicstatssrtpiwcalls = value;
        csbcurrperiodicstatssrtpiwcalls.value_namespace = name_space;
        csbcurrperiodicstatssrtpiwcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIw2833Calls")
    {
        csbcurrperiodicstatsdtmfiw2833calls = value;
        csbcurrperiodicstatsdtmfiw2833calls.value_namespace = name_space;
        csbcurrperiodicstatsdtmfiw2833calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIwInbandCalls")
    {
        csbcurrperiodicstatsdtmfiwinbandcalls = value;
        csbcurrperiodicstatsdtmfiwinbandcalls.value_namespace = name_space;
        csbcurrperiodicstatsdtmfiwinbandcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIw2833InbandCalls")
    {
        csbcurrperiodicstatsdtmfiw2833inbandcalls = value;
        csbcurrperiodicstatsdtmfiw2833inbandcalls.value_namespace = name_space;
        csbcurrperiodicstatsdtmfiw2833inbandcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsTotalTapsRequested")
    {
        csbcurrperiodicstatstotaltapsrequested = value;
        csbcurrperiodicstatstotaltapsrequested.value_namespace = name_space;
        csbcurrperiodicstatstotaltapsrequested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsTotalTapsSucceeded")
    {
        csbcurrperiodicstatstotaltapssucceeded = value;
        csbcurrperiodicstatstotaltapssucceeded.value_namespace = name_space;
        csbcurrperiodicstatstotaltapssucceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicStatsCurrentTaps")
    {
        csbcurrperiodicstatscurrenttaps = value;
        csbcurrperiodicstatscurrenttaps.value_namespace = name_space;
        csbcurrperiodicstatscurrenttaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbCurrPeriodicIpsecCalls")
    {
        csbcurrperiodicipseccalls = value;
        csbcurrperiodicipseccalls.value_namespace = name_space;
        csbcurrperiodicipseccalls.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsInterval")
    {
        csbcurrperiodicstatsinterval.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsActiveCalls")
    {
        csbcurrperiodicstatsactivecalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsActivatingCalls")
    {
        csbcurrperiodicstatsactivatingcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsDeactivatingCalls")
    {
        csbcurrperiodicstatsdeactivatingcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsTotalCallAttempts")
    {
        csbcurrperiodicstatstotalcallattempts.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsFailedCallAttempts")
    {
        csbcurrperiodicstatsfailedcallattempts.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallRoutingFailure")
    {
        csbcurrperiodicstatscallroutingfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallResourceFailure")
    {
        csbcurrperiodicstatscallresourcefailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallMediaFailure")
    {
        csbcurrperiodicstatscallmediafailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSigFailure")
    {
        csbcurrperiodicstatscallsigfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsActiveCallFailure")
    {
        csbcurrperiodicstatsactivecallfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCongestionFailure")
    {
        csbcurrperiodicstatscongestionfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupPolicyFailure")
    {
        csbcurrperiodicstatscallsetuppolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupNAPolicyFailure")
    {
        csbcurrperiodicstatscallsetupnapolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupRoutingPolicyFailure")
    {
        csbcurrperiodicstatscallsetuproutingpolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACPolicyFailure")
    {
        csbcurrperiodicstatscallsetupcacpolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACCallLimitFailure")
    {
        csbcurrperiodicstatscallsetupcaccalllimitfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACRateLimitFailure")
    {
        csbcurrperiodicstatscallsetupcacratelimitfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACBandwidthFailure")
    {
        csbcurrperiodicstatscallsetupcacbandwidthfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACMediaLimitFailure")
    {
        csbcurrperiodicstatscallsetupcacmedialimitfailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACMediaUpdateFailure")
    {
        csbcurrperiodicstatscallsetupcacmediaupdatefailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsTimestamp")
    {
        csbcurrperiodicstatstimestamp.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsTranscodedCalls")
    {
        csbcurrperiodicstatstranscodedcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsTransratedCalls")
    {
        csbcurrperiodicstatstransratedcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsTotalCallUpdateFailure")
    {
        csbcurrperiodicstatstotalcallupdatefailure.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsActiveIpv6Calls")
    {
        csbcurrperiodicstatsactiveipv6calls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsActiveEmergencyCalls")
    {
        csbcurrperiodicstatsactiveemergencycalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsActiveE2EmergencyCalls")
    {
        csbcurrperiodicstatsactivee2emergencycalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxActiveCalls")
    {
        csbcurrperiodicstatsimsrxactivecalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallSetupFaiures")
    {
        csbcurrperiodicstatsimsrxcallsetupfaiures.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallRenegotiationAttempts")
    {
        csbcurrperiodicstatsimsrxcallrenegotiationattempts.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallRenegotiationFailures")
    {
        csbcurrperiodicstatsimsrxcallrenegotiationfailures.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsAudioTranscodedCalls")
    {
        csbcurrperiodicstatsaudiotranscodedcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsFaxTranscodedCalls")
    {
        csbcurrperiodicstatsfaxtranscodedcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsRtpDisallowedFailures")
    {
        csbcurrperiodicstatsrtpdisallowedfailures.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpDisallowedFailures")
    {
        csbcurrperiodicstatssrtpdisallowedfailures.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsNonSrtpCalls")
    {
        csbcurrperiodicstatsnonsrtpcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpNonIwCalls")
    {
        csbcurrperiodicstatssrtpnoniwcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpIwCalls")
    {
        csbcurrperiodicstatssrtpiwcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIw2833Calls")
    {
        csbcurrperiodicstatsdtmfiw2833calls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIwInbandCalls")
    {
        csbcurrperiodicstatsdtmfiwinbandcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIw2833InbandCalls")
    {
        csbcurrperiodicstatsdtmfiw2833inbandcalls.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsTotalTapsRequested")
    {
        csbcurrperiodicstatstotaltapsrequested.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsTotalTapsSucceeded")
    {
        csbcurrperiodicstatstotaltapssucceeded.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicStatsCurrentTaps")
    {
        csbcurrperiodicstatscurrenttaps.yfilter = yfilter;
    }
    if(value_path == "csbCurrPeriodicIpsecCalls")
    {
        csbcurrperiodicipseccalls.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbCurrPeriodicStatsInterval" || name == "csbCurrPeriodicStatsActiveCalls" || name == "csbCurrPeriodicStatsActivatingCalls" || name == "csbCurrPeriodicStatsDeactivatingCalls" || name == "csbCurrPeriodicStatsTotalCallAttempts" || name == "csbCurrPeriodicStatsFailedCallAttempts" || name == "csbCurrPeriodicStatsCallRoutingFailure" || name == "csbCurrPeriodicStatsCallResourceFailure" || name == "csbCurrPeriodicStatsCallMediaFailure" || name == "csbCurrPeriodicStatsCallSigFailure" || name == "csbCurrPeriodicStatsActiveCallFailure" || name == "csbCurrPeriodicStatsCongestionFailure" || name == "csbCurrPeriodicStatsCallSetupPolicyFailure" || name == "csbCurrPeriodicStatsCallSetupNAPolicyFailure" || name == "csbCurrPeriodicStatsCallSetupRoutingPolicyFailure" || name == "csbCurrPeriodicStatsCallSetupCACPolicyFailure" || name == "csbCurrPeriodicStatsCallSetupCACCallLimitFailure" || name == "csbCurrPeriodicStatsCallSetupCACRateLimitFailure" || name == "csbCurrPeriodicStatsCallSetupCACBandwidthFailure" || name == "csbCurrPeriodicStatsCallSetupCACMediaLimitFailure" || name == "csbCurrPeriodicStatsCallSetupCACMediaUpdateFailure" || name == "csbCurrPeriodicStatsTimestamp" || name == "csbCurrPeriodicStatsTranscodedCalls" || name == "csbCurrPeriodicStatsTransratedCalls" || name == "csbCurrPeriodicStatsTotalCallUpdateFailure" || name == "csbCurrPeriodicStatsActiveIpv6Calls" || name == "csbCurrPeriodicStatsActiveEmergencyCalls" || name == "csbCurrPeriodicStatsActiveE2EmergencyCalls" || name == "csbCurrPeriodicStatsImsRxActiveCalls" || name == "csbCurrPeriodicStatsImsRxCallSetupFaiures" || name == "csbCurrPeriodicStatsImsRxCallRenegotiationAttempts" || name == "csbCurrPeriodicStatsImsRxCallRenegotiationFailures" || name == "csbCurrPeriodicStatsAudioTranscodedCalls" || name == "csbCurrPeriodicStatsFaxTranscodedCalls" || name == "csbCurrPeriodicStatsRtpDisallowedFailures" || name == "csbCurrPeriodicStatsSrtpDisallowedFailures" || name == "csbCurrPeriodicStatsNonSrtpCalls" || name == "csbCurrPeriodicStatsSrtpNonIwCalls" || name == "csbCurrPeriodicStatsSrtpIwCalls" || name == "csbCurrPeriodicStatsDtmfIw2833Calls" || name == "csbCurrPeriodicStatsDtmfIwInbandCalls" || name == "csbCurrPeriodicStatsDtmfIw2833InbandCalls" || name == "csbCurrPeriodicStatsTotalTapsRequested" || name == "csbCurrPeriodicStatsTotalTapsSucceeded" || name == "csbCurrPeriodicStatsCurrentTaps" || name == "csbCurrPeriodicIpsecCalls")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsTable()
    :
    csbhistorystatsentry(this, {"csbcallstatsinstanceindex", "csbcallstatsserviceindex", "csbhistorystatsinterval", "csbhistorystatselements"})
{

    yang_name = "csbHistoryStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::~CsbHistoryStatsTable()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csbhistorystatsentry.len(); index++)
    {
        if(csbhistorystatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::has_operation() const
{
    for (std::size_t index=0; index<csbhistorystatsentry.len(); index++)
    {
        if(csbhistorystatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbHistoryStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbHistoryStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry>();
        ent_->parent = this;
        csbhistorystatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csbhistorystatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbHistoryStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::CsbHistoryStatsEntry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbhistorystatsinterval{YType::enumeration, "csbHistoryStatsInterval"},
    csbhistorystatselements{YType::uint32, "csbHistoryStatsElements"},
    csbhistorystatsactivecalls{YType::uint32, "csbHistoryStatsActiveCalls"},
    csbhistorystatstotalcallattempts{YType::uint32, "csbHistoryStatsTotalCallAttempts"},
    csbhistorystatsfailedcallattempts{YType::uint32, "csbHistoryStatsFailedCallAttempts"},
    csbhistorystatscallroutingfailure{YType::uint32, "csbHistoryStatsCallRoutingFailure"},
    csbhistorystatscallresourcefailure{YType::uint32, "csbHistoryStatsCallResourceFailure"},
    csbhistorystatscallmediafailure{YType::uint32, "csbHistoryStatsCallMediaFailure"},
    csbhistorystatsfailsigfailure{YType::uint32, "csbHistoryStatsFailSigFailure"},
    csbhistorystatsactivecallfailure{YType::uint32, "csbHistoryStatsActiveCallFailure"},
    csbhistorystatscongestionfailure{YType::uint32, "csbHistoryStatsCongestionFailure"},
    csbhistorystatscallsetuppolicyfailure{YType::uint32, "csbHistoryStatsCallSetupPolicyFailure"},
    csbhistorystatscallsetupnapolicyfailure{YType::uint32, "csbHistoryStatsCallSetupNAPolicyFailure"},
    csbhistorystatscallsetuproutingpolicyfailure{YType::uint32, "csbHistoryStatsCallSetupRoutingPolicyFailure"},
    csbhistorystatscallsetupcacpolicyfailure{YType::uint32, "csbHistoryStatsCallSetupCACPolicyFailure"},
    csbhistorystatscallsetupcaccalllimitfailure{YType::uint32, "csbHistoryStatsCallSetupCACCallLimitFailure"},
    csbhistorystatscallsetupcacratelimitfailure{YType::uint32, "csbHistoryStatsCallSetupCACRateLimitFailure"},
    csbhistorystatscallsetupcacbandwidthfailure{YType::uint32, "csbHistoryStatsCallSetupCACBandwidthFailure"},
    csbhistorystatscallsetupcacmedialimitfailure{YType::uint32, "csbHistoryStatsCallSetupCACMediaLimitFailure"},
    csbhistorystatscallsetupcacmediaupdatefailure{YType::uint32, "csbHistoryStatsCallSetupCACMediaUpdateFailure"},
    csbhistorystatstimestamp{YType::str, "csbHistoryStatsTimestamp"},
    csbhistroystatstranscodedcalls{YType::uint32, "csbHistroyStatsTranscodedCalls"},
    csbhistroystatstransratedcalls{YType::uint32, "csbHistroyStatsTransratedCalls"},
    csbhistorystatstotalcallupdatefailure{YType::uint32, "csbHistoryStatsTotalCallUpdateFailure"},
    csbhistorystatsactiveipv6calls{YType::uint32, "csbHistoryStatsActiveIpv6Calls"},
    csbhistorystatsactiveemergencycalls{YType::uint32, "csbHistoryStatsActiveEmergencyCalls"},
    csbhistorystatsactivee2emergencycalls{YType::uint32, "csbHistoryStatsActiveE2EmergencyCalls"},
    csbhistorystatsimsrxactivecalls{YType::uint32, "csbHistoryStatsImsRxActiveCalls"},
    csbhistorystatsimsrxcallsetupfailures{YType::uint32, "csbHistoryStatsImsRxCallSetupFailures"},
    csbhistorystatsimsrxcallrenegotiationattempts{YType::uint32, "csbHistoryStatsImsRxCallRenegotiationAttempts"},
    csbhistorystatsimsrxcallrenegotiationfailures{YType::uint32, "csbHistoryStatsImsRxCallRenegotiationFailures"},
    csbhistorystatsaudiotranscodedcalls{YType::uint32, "csbHistoryStatsAudioTranscodedCalls"},
    csbhistorystatsfaxtranscodedcalls{YType::uint32, "csbHistoryStatsFaxTranscodedCalls"},
    csbhistorystatsrtpdisallowedfailures{YType::uint32, "csbHistoryStatsRtpDisallowedFailures"},
    csbhistorystatssrtpdisallowedfailures{YType::uint32, "csbHistoryStatsSrtpDisallowedFailures"},
    csbhistorystatsnonsrtpcalls{YType::uint32, "csbHistoryStatsNonSrtpCalls"},
    csbhistorystatssrtpnoniwcalls{YType::uint32, "csbHistoryStatsSrtpNonIwCalls"},
    csbhistorystatssrtpiwcalls{YType::uint32, "csbHistoryStatsSrtpIwCalls"},
    csbhistorystatsdtmfiw2833calls{YType::uint32, "csbHistoryStatsDtmfIw2833Calls"},
    csbhistorystatsdtmfiwinbandcalls{YType::uint32, "csbHistoryStatsDtmfIwInbandCalls"},
    csbhistorystatsdtmfiw2833inbandcalls{YType::uint32, "csbHistoryStatsDtmfIw2833InbandCalls"},
    csbhistorystatstotaltapsrequested{YType::uint32, "csbHistoryStatsTotalTapsRequested"},
    csbhistorystatstotaltapssucceeded{YType::uint32, "csbHistoryStatsTotalTapsSucceeded"},
    csbhistorystatscurrenttaps{YType::uint32, "csbHistoryStatsCurrentTaps"},
    csbhistorystatsipseccalls{YType::uint32, "csbHistoryStatsIpsecCalls"}
{

    yang_name = "csbHistoryStatsEntry"; yang_parent_name = "csbHistoryStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::~CsbHistoryStatsEntry()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbhistorystatsinterval.is_set
	|| csbhistorystatselements.is_set
	|| csbhistorystatsactivecalls.is_set
	|| csbhistorystatstotalcallattempts.is_set
	|| csbhistorystatsfailedcallattempts.is_set
	|| csbhistorystatscallroutingfailure.is_set
	|| csbhistorystatscallresourcefailure.is_set
	|| csbhistorystatscallmediafailure.is_set
	|| csbhistorystatsfailsigfailure.is_set
	|| csbhistorystatsactivecallfailure.is_set
	|| csbhistorystatscongestionfailure.is_set
	|| csbhistorystatscallsetuppolicyfailure.is_set
	|| csbhistorystatscallsetupnapolicyfailure.is_set
	|| csbhistorystatscallsetuproutingpolicyfailure.is_set
	|| csbhistorystatscallsetupcacpolicyfailure.is_set
	|| csbhistorystatscallsetupcaccalllimitfailure.is_set
	|| csbhistorystatscallsetupcacratelimitfailure.is_set
	|| csbhistorystatscallsetupcacbandwidthfailure.is_set
	|| csbhistorystatscallsetupcacmedialimitfailure.is_set
	|| csbhistorystatscallsetupcacmediaupdatefailure.is_set
	|| csbhistorystatstimestamp.is_set
	|| csbhistroystatstranscodedcalls.is_set
	|| csbhistroystatstransratedcalls.is_set
	|| csbhistorystatstotalcallupdatefailure.is_set
	|| csbhistorystatsactiveipv6calls.is_set
	|| csbhistorystatsactiveemergencycalls.is_set
	|| csbhistorystatsactivee2emergencycalls.is_set
	|| csbhistorystatsimsrxactivecalls.is_set
	|| csbhistorystatsimsrxcallsetupfailures.is_set
	|| csbhistorystatsimsrxcallrenegotiationattempts.is_set
	|| csbhistorystatsimsrxcallrenegotiationfailures.is_set
	|| csbhistorystatsaudiotranscodedcalls.is_set
	|| csbhistorystatsfaxtranscodedcalls.is_set
	|| csbhistorystatsrtpdisallowedfailures.is_set
	|| csbhistorystatssrtpdisallowedfailures.is_set
	|| csbhistorystatsnonsrtpcalls.is_set
	|| csbhistorystatssrtpnoniwcalls.is_set
	|| csbhistorystatssrtpiwcalls.is_set
	|| csbhistorystatsdtmfiw2833calls.is_set
	|| csbhistorystatsdtmfiwinbandcalls.is_set
	|| csbhistorystatsdtmfiw2833inbandcalls.is_set
	|| csbhistorystatstotaltapsrequested.is_set
	|| csbhistorystatstotaltapssucceeded.is_set
	|| csbhistorystatscurrenttaps.is_set
	|| csbhistorystatsipseccalls.is_set;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbhistorystatsinterval.yfilter)
	|| ydk::is_set(csbhistorystatselements.yfilter)
	|| ydk::is_set(csbhistorystatsactivecalls.yfilter)
	|| ydk::is_set(csbhistorystatstotalcallattempts.yfilter)
	|| ydk::is_set(csbhistorystatsfailedcallattempts.yfilter)
	|| ydk::is_set(csbhistorystatscallroutingfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallresourcefailure.yfilter)
	|| ydk::is_set(csbhistorystatscallmediafailure.yfilter)
	|| ydk::is_set(csbhistorystatsfailsigfailure.yfilter)
	|| ydk::is_set(csbhistorystatsactivecallfailure.yfilter)
	|| ydk::is_set(csbhistorystatscongestionfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetuppolicyfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetupnapolicyfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetuproutingpolicyfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetupcacpolicyfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetupcaccalllimitfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetupcacratelimitfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetupcacbandwidthfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetupcacmedialimitfailure.yfilter)
	|| ydk::is_set(csbhistorystatscallsetupcacmediaupdatefailure.yfilter)
	|| ydk::is_set(csbhistorystatstimestamp.yfilter)
	|| ydk::is_set(csbhistroystatstranscodedcalls.yfilter)
	|| ydk::is_set(csbhistroystatstransratedcalls.yfilter)
	|| ydk::is_set(csbhistorystatstotalcallupdatefailure.yfilter)
	|| ydk::is_set(csbhistorystatsactiveipv6calls.yfilter)
	|| ydk::is_set(csbhistorystatsactiveemergencycalls.yfilter)
	|| ydk::is_set(csbhistorystatsactivee2emergencycalls.yfilter)
	|| ydk::is_set(csbhistorystatsimsrxactivecalls.yfilter)
	|| ydk::is_set(csbhistorystatsimsrxcallsetupfailures.yfilter)
	|| ydk::is_set(csbhistorystatsimsrxcallrenegotiationattempts.yfilter)
	|| ydk::is_set(csbhistorystatsimsrxcallrenegotiationfailures.yfilter)
	|| ydk::is_set(csbhistorystatsaudiotranscodedcalls.yfilter)
	|| ydk::is_set(csbhistorystatsfaxtranscodedcalls.yfilter)
	|| ydk::is_set(csbhistorystatsrtpdisallowedfailures.yfilter)
	|| ydk::is_set(csbhistorystatssrtpdisallowedfailures.yfilter)
	|| ydk::is_set(csbhistorystatsnonsrtpcalls.yfilter)
	|| ydk::is_set(csbhistorystatssrtpnoniwcalls.yfilter)
	|| ydk::is_set(csbhistorystatssrtpiwcalls.yfilter)
	|| ydk::is_set(csbhistorystatsdtmfiw2833calls.yfilter)
	|| ydk::is_set(csbhistorystatsdtmfiwinbandcalls.yfilter)
	|| ydk::is_set(csbhistorystatsdtmfiw2833inbandcalls.yfilter)
	|| ydk::is_set(csbhistorystatstotaltapsrequested.yfilter)
	|| ydk::is_set(csbhistorystatstotaltapssucceeded.yfilter)
	|| ydk::is_set(csbhistorystatscurrenttaps.yfilter)
	|| ydk::is_set(csbhistorystatsipseccalls.yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbHistoryStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbHistoryStatsEntry";
    ADD_KEY_TOKEN(csbcallstatsinstanceindex, "csbCallStatsInstanceIndex");
    ADD_KEY_TOKEN(csbcallstatsserviceindex, "csbCallStatsServiceIndex");
    ADD_KEY_TOKEN(csbhistorystatsinterval, "csbHistoryStatsInterval");
    ADD_KEY_TOKEN(csbhistorystatselements, "csbHistoryStatsElements");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbhistorystatsinterval.is_set || is_set(csbhistorystatsinterval.yfilter)) leaf_name_data.push_back(csbhistorystatsinterval.get_name_leafdata());
    if (csbhistorystatselements.is_set || is_set(csbhistorystatselements.yfilter)) leaf_name_data.push_back(csbhistorystatselements.get_name_leafdata());
    if (csbhistorystatsactivecalls.is_set || is_set(csbhistorystatsactivecalls.yfilter)) leaf_name_data.push_back(csbhistorystatsactivecalls.get_name_leafdata());
    if (csbhistorystatstotalcallattempts.is_set || is_set(csbhistorystatstotalcallattempts.yfilter)) leaf_name_data.push_back(csbhistorystatstotalcallattempts.get_name_leafdata());
    if (csbhistorystatsfailedcallattempts.is_set || is_set(csbhistorystatsfailedcallattempts.yfilter)) leaf_name_data.push_back(csbhistorystatsfailedcallattempts.get_name_leafdata());
    if (csbhistorystatscallroutingfailure.is_set || is_set(csbhistorystatscallroutingfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallroutingfailure.get_name_leafdata());
    if (csbhistorystatscallresourcefailure.is_set || is_set(csbhistorystatscallresourcefailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallresourcefailure.get_name_leafdata());
    if (csbhistorystatscallmediafailure.is_set || is_set(csbhistorystatscallmediafailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallmediafailure.get_name_leafdata());
    if (csbhistorystatsfailsigfailure.is_set || is_set(csbhistorystatsfailsigfailure.yfilter)) leaf_name_data.push_back(csbhistorystatsfailsigfailure.get_name_leafdata());
    if (csbhistorystatsactivecallfailure.is_set || is_set(csbhistorystatsactivecallfailure.yfilter)) leaf_name_data.push_back(csbhistorystatsactivecallfailure.get_name_leafdata());
    if (csbhistorystatscongestionfailure.is_set || is_set(csbhistorystatscongestionfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscongestionfailure.get_name_leafdata());
    if (csbhistorystatscallsetuppolicyfailure.is_set || is_set(csbhistorystatscallsetuppolicyfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetuppolicyfailure.get_name_leafdata());
    if (csbhistorystatscallsetupnapolicyfailure.is_set || is_set(csbhistorystatscallsetupnapolicyfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetupnapolicyfailure.get_name_leafdata());
    if (csbhistorystatscallsetuproutingpolicyfailure.is_set || is_set(csbhistorystatscallsetuproutingpolicyfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetuproutingpolicyfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacpolicyfailure.is_set || is_set(csbhistorystatscallsetupcacpolicyfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetupcacpolicyfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcaccalllimitfailure.is_set || is_set(csbhistorystatscallsetupcaccalllimitfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetupcaccalllimitfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacratelimitfailure.is_set || is_set(csbhistorystatscallsetupcacratelimitfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetupcacratelimitfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacbandwidthfailure.is_set || is_set(csbhistorystatscallsetupcacbandwidthfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetupcacbandwidthfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacmedialimitfailure.is_set || is_set(csbhistorystatscallsetupcacmedialimitfailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetupcacmedialimitfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacmediaupdatefailure.is_set || is_set(csbhistorystatscallsetupcacmediaupdatefailure.yfilter)) leaf_name_data.push_back(csbhistorystatscallsetupcacmediaupdatefailure.get_name_leafdata());
    if (csbhistorystatstimestamp.is_set || is_set(csbhistorystatstimestamp.yfilter)) leaf_name_data.push_back(csbhistorystatstimestamp.get_name_leafdata());
    if (csbhistroystatstranscodedcalls.is_set || is_set(csbhistroystatstranscodedcalls.yfilter)) leaf_name_data.push_back(csbhistroystatstranscodedcalls.get_name_leafdata());
    if (csbhistroystatstransratedcalls.is_set || is_set(csbhistroystatstransratedcalls.yfilter)) leaf_name_data.push_back(csbhistroystatstransratedcalls.get_name_leafdata());
    if (csbhistorystatstotalcallupdatefailure.is_set || is_set(csbhistorystatstotalcallupdatefailure.yfilter)) leaf_name_data.push_back(csbhistorystatstotalcallupdatefailure.get_name_leafdata());
    if (csbhistorystatsactiveipv6calls.is_set || is_set(csbhistorystatsactiveipv6calls.yfilter)) leaf_name_data.push_back(csbhistorystatsactiveipv6calls.get_name_leafdata());
    if (csbhistorystatsactiveemergencycalls.is_set || is_set(csbhistorystatsactiveemergencycalls.yfilter)) leaf_name_data.push_back(csbhistorystatsactiveemergencycalls.get_name_leafdata());
    if (csbhistorystatsactivee2emergencycalls.is_set || is_set(csbhistorystatsactivee2emergencycalls.yfilter)) leaf_name_data.push_back(csbhistorystatsactivee2emergencycalls.get_name_leafdata());
    if (csbhistorystatsimsrxactivecalls.is_set || is_set(csbhistorystatsimsrxactivecalls.yfilter)) leaf_name_data.push_back(csbhistorystatsimsrxactivecalls.get_name_leafdata());
    if (csbhistorystatsimsrxcallsetupfailures.is_set || is_set(csbhistorystatsimsrxcallsetupfailures.yfilter)) leaf_name_data.push_back(csbhistorystatsimsrxcallsetupfailures.get_name_leafdata());
    if (csbhistorystatsimsrxcallrenegotiationattempts.is_set || is_set(csbhistorystatsimsrxcallrenegotiationattempts.yfilter)) leaf_name_data.push_back(csbhistorystatsimsrxcallrenegotiationattempts.get_name_leafdata());
    if (csbhistorystatsimsrxcallrenegotiationfailures.is_set || is_set(csbhistorystatsimsrxcallrenegotiationfailures.yfilter)) leaf_name_data.push_back(csbhistorystatsimsrxcallrenegotiationfailures.get_name_leafdata());
    if (csbhistorystatsaudiotranscodedcalls.is_set || is_set(csbhistorystatsaudiotranscodedcalls.yfilter)) leaf_name_data.push_back(csbhistorystatsaudiotranscodedcalls.get_name_leafdata());
    if (csbhistorystatsfaxtranscodedcalls.is_set || is_set(csbhistorystatsfaxtranscodedcalls.yfilter)) leaf_name_data.push_back(csbhistorystatsfaxtranscodedcalls.get_name_leafdata());
    if (csbhistorystatsrtpdisallowedfailures.is_set || is_set(csbhistorystatsrtpdisallowedfailures.yfilter)) leaf_name_data.push_back(csbhistorystatsrtpdisallowedfailures.get_name_leafdata());
    if (csbhistorystatssrtpdisallowedfailures.is_set || is_set(csbhistorystatssrtpdisallowedfailures.yfilter)) leaf_name_data.push_back(csbhistorystatssrtpdisallowedfailures.get_name_leafdata());
    if (csbhistorystatsnonsrtpcalls.is_set || is_set(csbhistorystatsnonsrtpcalls.yfilter)) leaf_name_data.push_back(csbhistorystatsnonsrtpcalls.get_name_leafdata());
    if (csbhistorystatssrtpnoniwcalls.is_set || is_set(csbhistorystatssrtpnoniwcalls.yfilter)) leaf_name_data.push_back(csbhistorystatssrtpnoniwcalls.get_name_leafdata());
    if (csbhistorystatssrtpiwcalls.is_set || is_set(csbhistorystatssrtpiwcalls.yfilter)) leaf_name_data.push_back(csbhistorystatssrtpiwcalls.get_name_leafdata());
    if (csbhistorystatsdtmfiw2833calls.is_set || is_set(csbhistorystatsdtmfiw2833calls.yfilter)) leaf_name_data.push_back(csbhistorystatsdtmfiw2833calls.get_name_leafdata());
    if (csbhistorystatsdtmfiwinbandcalls.is_set || is_set(csbhistorystatsdtmfiwinbandcalls.yfilter)) leaf_name_data.push_back(csbhistorystatsdtmfiwinbandcalls.get_name_leafdata());
    if (csbhistorystatsdtmfiw2833inbandcalls.is_set || is_set(csbhistorystatsdtmfiw2833inbandcalls.yfilter)) leaf_name_data.push_back(csbhistorystatsdtmfiw2833inbandcalls.get_name_leafdata());
    if (csbhistorystatstotaltapsrequested.is_set || is_set(csbhistorystatstotaltapsrequested.yfilter)) leaf_name_data.push_back(csbhistorystatstotaltapsrequested.get_name_leafdata());
    if (csbhistorystatstotaltapssucceeded.is_set || is_set(csbhistorystatstotaltapssucceeded.yfilter)) leaf_name_data.push_back(csbhistorystatstotaltapssucceeded.get_name_leafdata());
    if (csbhistorystatscurrenttaps.is_set || is_set(csbhistorystatscurrenttaps.yfilter)) leaf_name_data.push_back(csbhistorystatscurrenttaps.get_name_leafdata());
    if (csbhistorystatsipseccalls.is_set || is_set(csbhistorystatsipseccalls.yfilter)) leaf_name_data.push_back(csbhistorystatsipseccalls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csbHistoryStatsInterval")
    {
        csbhistorystatsinterval = value;
        csbhistorystatsinterval.value_namespace = name_space;
        csbhistorystatsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsElements")
    {
        csbhistorystatselements = value;
        csbhistorystatselements.value_namespace = name_space;
        csbhistorystatselements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsActiveCalls")
    {
        csbhistorystatsactivecalls = value;
        csbhistorystatsactivecalls.value_namespace = name_space;
        csbhistorystatsactivecalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsTotalCallAttempts")
    {
        csbhistorystatstotalcallattempts = value;
        csbhistorystatstotalcallattempts.value_namespace = name_space;
        csbhistorystatstotalcallattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsFailedCallAttempts")
    {
        csbhistorystatsfailedcallattempts = value;
        csbhistorystatsfailedcallattempts.value_namespace = name_space;
        csbhistorystatsfailedcallattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallRoutingFailure")
    {
        csbhistorystatscallroutingfailure = value;
        csbhistorystatscallroutingfailure.value_namespace = name_space;
        csbhistorystatscallroutingfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallResourceFailure")
    {
        csbhistorystatscallresourcefailure = value;
        csbhistorystatscallresourcefailure.value_namespace = name_space;
        csbhistorystatscallresourcefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallMediaFailure")
    {
        csbhistorystatscallmediafailure = value;
        csbhistorystatscallmediafailure.value_namespace = name_space;
        csbhistorystatscallmediafailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsFailSigFailure")
    {
        csbhistorystatsfailsigfailure = value;
        csbhistorystatsfailsigfailure.value_namespace = name_space;
        csbhistorystatsfailsigfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsActiveCallFailure")
    {
        csbhistorystatsactivecallfailure = value;
        csbhistorystatsactivecallfailure.value_namespace = name_space;
        csbhistorystatsactivecallfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCongestionFailure")
    {
        csbhistorystatscongestionfailure = value;
        csbhistorystatscongestionfailure.value_namespace = name_space;
        csbhistorystatscongestionfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupPolicyFailure")
    {
        csbhistorystatscallsetuppolicyfailure = value;
        csbhistorystatscallsetuppolicyfailure.value_namespace = name_space;
        csbhistorystatscallsetuppolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupNAPolicyFailure")
    {
        csbhistorystatscallsetupnapolicyfailure = value;
        csbhistorystatscallsetupnapolicyfailure.value_namespace = name_space;
        csbhistorystatscallsetupnapolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupRoutingPolicyFailure")
    {
        csbhistorystatscallsetuproutingpolicyfailure = value;
        csbhistorystatscallsetuproutingpolicyfailure.value_namespace = name_space;
        csbhistorystatscallsetuproutingpolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupCACPolicyFailure")
    {
        csbhistorystatscallsetupcacpolicyfailure = value;
        csbhistorystatscallsetupcacpolicyfailure.value_namespace = name_space;
        csbhistorystatscallsetupcacpolicyfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupCACCallLimitFailure")
    {
        csbhistorystatscallsetupcaccalllimitfailure = value;
        csbhistorystatscallsetupcaccalllimitfailure.value_namespace = name_space;
        csbhistorystatscallsetupcaccalllimitfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupCACRateLimitFailure")
    {
        csbhistorystatscallsetupcacratelimitfailure = value;
        csbhistorystatscallsetupcacratelimitfailure.value_namespace = name_space;
        csbhistorystatscallsetupcacratelimitfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupCACBandwidthFailure")
    {
        csbhistorystatscallsetupcacbandwidthfailure = value;
        csbhistorystatscallsetupcacbandwidthfailure.value_namespace = name_space;
        csbhistorystatscallsetupcacbandwidthfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupCACMediaLimitFailure")
    {
        csbhistorystatscallsetupcacmedialimitfailure = value;
        csbhistorystatscallsetupcacmedialimitfailure.value_namespace = name_space;
        csbhistorystatscallsetupcacmedialimitfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCallSetupCACMediaUpdateFailure")
    {
        csbhistorystatscallsetupcacmediaupdatefailure = value;
        csbhistorystatscallsetupcacmediaupdatefailure.value_namespace = name_space;
        csbhistorystatscallsetupcacmediaupdatefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsTimestamp")
    {
        csbhistorystatstimestamp = value;
        csbhistorystatstimestamp.value_namespace = name_space;
        csbhistorystatstimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistroyStatsTranscodedCalls")
    {
        csbhistroystatstranscodedcalls = value;
        csbhistroystatstranscodedcalls.value_namespace = name_space;
        csbhistroystatstranscodedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistroyStatsTransratedCalls")
    {
        csbhistroystatstransratedcalls = value;
        csbhistroystatstransratedcalls.value_namespace = name_space;
        csbhistroystatstransratedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsTotalCallUpdateFailure")
    {
        csbhistorystatstotalcallupdatefailure = value;
        csbhistorystatstotalcallupdatefailure.value_namespace = name_space;
        csbhistorystatstotalcallupdatefailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsActiveIpv6Calls")
    {
        csbhistorystatsactiveipv6calls = value;
        csbhistorystatsactiveipv6calls.value_namespace = name_space;
        csbhistorystatsactiveipv6calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsActiveEmergencyCalls")
    {
        csbhistorystatsactiveemergencycalls = value;
        csbhistorystatsactiveemergencycalls.value_namespace = name_space;
        csbhistorystatsactiveemergencycalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsActiveE2EmergencyCalls")
    {
        csbhistorystatsactivee2emergencycalls = value;
        csbhistorystatsactivee2emergencycalls.value_namespace = name_space;
        csbhistorystatsactivee2emergencycalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsImsRxActiveCalls")
    {
        csbhistorystatsimsrxactivecalls = value;
        csbhistorystatsimsrxactivecalls.value_namespace = name_space;
        csbhistorystatsimsrxactivecalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsImsRxCallSetupFailures")
    {
        csbhistorystatsimsrxcallsetupfailures = value;
        csbhistorystatsimsrxcallsetupfailures.value_namespace = name_space;
        csbhistorystatsimsrxcallsetupfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsImsRxCallRenegotiationAttempts")
    {
        csbhistorystatsimsrxcallrenegotiationattempts = value;
        csbhistorystatsimsrxcallrenegotiationattempts.value_namespace = name_space;
        csbhistorystatsimsrxcallrenegotiationattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsImsRxCallRenegotiationFailures")
    {
        csbhistorystatsimsrxcallrenegotiationfailures = value;
        csbhistorystatsimsrxcallrenegotiationfailures.value_namespace = name_space;
        csbhistorystatsimsrxcallrenegotiationfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsAudioTranscodedCalls")
    {
        csbhistorystatsaudiotranscodedcalls = value;
        csbhistorystatsaudiotranscodedcalls.value_namespace = name_space;
        csbhistorystatsaudiotranscodedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsFaxTranscodedCalls")
    {
        csbhistorystatsfaxtranscodedcalls = value;
        csbhistorystatsfaxtranscodedcalls.value_namespace = name_space;
        csbhistorystatsfaxtranscodedcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsRtpDisallowedFailures")
    {
        csbhistorystatsrtpdisallowedfailures = value;
        csbhistorystatsrtpdisallowedfailures.value_namespace = name_space;
        csbhistorystatsrtpdisallowedfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsSrtpDisallowedFailures")
    {
        csbhistorystatssrtpdisallowedfailures = value;
        csbhistorystatssrtpdisallowedfailures.value_namespace = name_space;
        csbhistorystatssrtpdisallowedfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsNonSrtpCalls")
    {
        csbhistorystatsnonsrtpcalls = value;
        csbhistorystatsnonsrtpcalls.value_namespace = name_space;
        csbhistorystatsnonsrtpcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsSrtpNonIwCalls")
    {
        csbhistorystatssrtpnoniwcalls = value;
        csbhistorystatssrtpnoniwcalls.value_namespace = name_space;
        csbhistorystatssrtpnoniwcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsSrtpIwCalls")
    {
        csbhistorystatssrtpiwcalls = value;
        csbhistorystatssrtpiwcalls.value_namespace = name_space;
        csbhistorystatssrtpiwcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsDtmfIw2833Calls")
    {
        csbhistorystatsdtmfiw2833calls = value;
        csbhistorystatsdtmfiw2833calls.value_namespace = name_space;
        csbhistorystatsdtmfiw2833calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsDtmfIwInbandCalls")
    {
        csbhistorystatsdtmfiwinbandcalls = value;
        csbhistorystatsdtmfiwinbandcalls.value_namespace = name_space;
        csbhistorystatsdtmfiwinbandcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsDtmfIw2833InbandCalls")
    {
        csbhistorystatsdtmfiw2833inbandcalls = value;
        csbhistorystatsdtmfiw2833inbandcalls.value_namespace = name_space;
        csbhistorystatsdtmfiw2833inbandcalls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsTotalTapsRequested")
    {
        csbhistorystatstotaltapsrequested = value;
        csbhistorystatstotaltapsrequested.value_namespace = name_space;
        csbhistorystatstotaltapsrequested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsTotalTapsSucceeded")
    {
        csbhistorystatstotaltapssucceeded = value;
        csbhistorystatstotaltapssucceeded.value_namespace = name_space;
        csbhistorystatstotaltapssucceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsCurrentTaps")
    {
        csbhistorystatscurrenttaps = value;
        csbhistorystatscurrenttaps.value_namespace = name_space;
        csbhistorystatscurrenttaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbHistoryStatsIpsecCalls")
    {
        csbhistorystatsipseccalls = value;
        csbhistorystatsipseccalls.value_namespace = name_space;
        csbhistorystatsipseccalls.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsInterval")
    {
        csbhistorystatsinterval.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsElements")
    {
        csbhistorystatselements.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsActiveCalls")
    {
        csbhistorystatsactivecalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsTotalCallAttempts")
    {
        csbhistorystatstotalcallattempts.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsFailedCallAttempts")
    {
        csbhistorystatsfailedcallattempts.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallRoutingFailure")
    {
        csbhistorystatscallroutingfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallResourceFailure")
    {
        csbhistorystatscallresourcefailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallMediaFailure")
    {
        csbhistorystatscallmediafailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsFailSigFailure")
    {
        csbhistorystatsfailsigfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsActiveCallFailure")
    {
        csbhistorystatsactivecallfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCongestionFailure")
    {
        csbhistorystatscongestionfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupPolicyFailure")
    {
        csbhistorystatscallsetuppolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupNAPolicyFailure")
    {
        csbhistorystatscallsetupnapolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupRoutingPolicyFailure")
    {
        csbhistorystatscallsetuproutingpolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupCACPolicyFailure")
    {
        csbhistorystatscallsetupcacpolicyfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupCACCallLimitFailure")
    {
        csbhistorystatscallsetupcaccalllimitfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupCACRateLimitFailure")
    {
        csbhistorystatscallsetupcacratelimitfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupCACBandwidthFailure")
    {
        csbhistorystatscallsetupcacbandwidthfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupCACMediaLimitFailure")
    {
        csbhistorystatscallsetupcacmedialimitfailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCallSetupCACMediaUpdateFailure")
    {
        csbhistorystatscallsetupcacmediaupdatefailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsTimestamp")
    {
        csbhistorystatstimestamp.yfilter = yfilter;
    }
    if(value_path == "csbHistroyStatsTranscodedCalls")
    {
        csbhistroystatstranscodedcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistroyStatsTransratedCalls")
    {
        csbhistroystatstransratedcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsTotalCallUpdateFailure")
    {
        csbhistorystatstotalcallupdatefailure.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsActiveIpv6Calls")
    {
        csbhistorystatsactiveipv6calls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsActiveEmergencyCalls")
    {
        csbhistorystatsactiveemergencycalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsActiveE2EmergencyCalls")
    {
        csbhistorystatsactivee2emergencycalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsImsRxActiveCalls")
    {
        csbhistorystatsimsrxactivecalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsImsRxCallSetupFailures")
    {
        csbhistorystatsimsrxcallsetupfailures.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsImsRxCallRenegotiationAttempts")
    {
        csbhistorystatsimsrxcallrenegotiationattempts.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsImsRxCallRenegotiationFailures")
    {
        csbhistorystatsimsrxcallrenegotiationfailures.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsAudioTranscodedCalls")
    {
        csbhistorystatsaudiotranscodedcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsFaxTranscodedCalls")
    {
        csbhistorystatsfaxtranscodedcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsRtpDisallowedFailures")
    {
        csbhistorystatsrtpdisallowedfailures.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsSrtpDisallowedFailures")
    {
        csbhistorystatssrtpdisallowedfailures.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsNonSrtpCalls")
    {
        csbhistorystatsnonsrtpcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsSrtpNonIwCalls")
    {
        csbhistorystatssrtpnoniwcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsSrtpIwCalls")
    {
        csbhistorystatssrtpiwcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsDtmfIw2833Calls")
    {
        csbhistorystatsdtmfiw2833calls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsDtmfIwInbandCalls")
    {
        csbhistorystatsdtmfiwinbandcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsDtmfIw2833InbandCalls")
    {
        csbhistorystatsdtmfiw2833inbandcalls.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsTotalTapsRequested")
    {
        csbhistorystatstotaltapsrequested.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsTotalTapsSucceeded")
    {
        csbhistorystatstotaltapssucceeded.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsCurrentTaps")
    {
        csbhistorystatscurrenttaps.yfilter = yfilter;
    }
    if(value_path == "csbHistoryStatsIpsecCalls")
    {
        csbhistorystatsipseccalls.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbHistoryStatsInterval" || name == "csbHistoryStatsElements" || name == "csbHistoryStatsActiveCalls" || name == "csbHistoryStatsTotalCallAttempts" || name == "csbHistoryStatsFailedCallAttempts" || name == "csbHistoryStatsCallRoutingFailure" || name == "csbHistoryStatsCallResourceFailure" || name == "csbHistoryStatsCallMediaFailure" || name == "csbHistoryStatsFailSigFailure" || name == "csbHistoryStatsActiveCallFailure" || name == "csbHistoryStatsCongestionFailure" || name == "csbHistoryStatsCallSetupPolicyFailure" || name == "csbHistoryStatsCallSetupNAPolicyFailure" || name == "csbHistoryStatsCallSetupRoutingPolicyFailure" || name == "csbHistoryStatsCallSetupCACPolicyFailure" || name == "csbHistoryStatsCallSetupCACCallLimitFailure" || name == "csbHistoryStatsCallSetupCACRateLimitFailure" || name == "csbHistoryStatsCallSetupCACBandwidthFailure" || name == "csbHistoryStatsCallSetupCACMediaLimitFailure" || name == "csbHistoryStatsCallSetupCACMediaUpdateFailure" || name == "csbHistoryStatsTimestamp" || name == "csbHistroyStatsTranscodedCalls" || name == "csbHistroyStatsTransratedCalls" || name == "csbHistoryStatsTotalCallUpdateFailure" || name == "csbHistoryStatsActiveIpv6Calls" || name == "csbHistoryStatsActiveEmergencyCalls" || name == "csbHistoryStatsActiveE2EmergencyCalls" || name == "csbHistoryStatsImsRxActiveCalls" || name == "csbHistoryStatsImsRxCallSetupFailures" || name == "csbHistoryStatsImsRxCallRenegotiationAttempts" || name == "csbHistoryStatsImsRxCallRenegotiationFailures" || name == "csbHistoryStatsAudioTranscodedCalls" || name == "csbHistoryStatsFaxTranscodedCalls" || name == "csbHistoryStatsRtpDisallowedFailures" || name == "csbHistoryStatsSrtpDisallowedFailures" || name == "csbHistoryStatsNonSrtpCalls" || name == "csbHistoryStatsSrtpNonIwCalls" || name == "csbHistoryStatsSrtpIwCalls" || name == "csbHistoryStatsDtmfIw2833Calls" || name == "csbHistoryStatsDtmfIwInbandCalls" || name == "csbHistoryStatsDtmfIw2833InbandCalls" || name == "csbHistoryStatsTotalTapsRequested" || name == "csbHistoryStatsTotalTapsSucceeded" || name == "csbHistoryStatsCurrentTaps" || name == "csbHistoryStatsIpsecCalls")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsTable()
    :
    csbperflowstatsentry(this, {"csbcallstatsinstanceindex", "csbcallstatsserviceindex", "csbperflowstatsvdbeid", "csbperflowstatsgateid", "csbperflowstatsflowpairid", "csbperflowstatssideid"})
{

    yang_name = "csbPerFlowStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::~CsbPerFlowStatsTable()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csbperflowstatsentry.len(); index++)
    {
        if(csbperflowstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::has_operation() const
{
    for (std::size_t index=0; index<csbperflowstatsentry.len(); index++)
    {
        if(csbperflowstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbPerFlowStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbPerFlowStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry>();
        ent_->parent = this;
        csbperflowstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csbperflowstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbPerFlowStatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::CsbPerFlowStatsEntry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbperflowstatsvdbeid{YType::int32, "csbPerFlowStatsVdbeId"},
    csbperflowstatsgateid{YType::int32, "csbPerFlowStatsGateId"},
    csbperflowstatsflowpairid{YType::int32, "csbPerFlowStatsFlowPairId"},
    csbperflowstatssideid{YType::enumeration, "csbPerFlowStatsSideId"},
    csbperflowstatsflowtype{YType::enumeration, "csbPerFlowStatsFlowType"},
    csbperflowstatsrtppktssent{YType::uint64, "csbPerFlowStatsRTPPktsSent"},
    csbperflowstatsrtppktsrcvd{YType::uint64, "csbPerFlowStatsRTPPktsRcvd"},
    csbperflowstatsrtppktsdiscard{YType::uint64, "csbPerFlowStatsRTPPktsDiscard"},
    csbperflowstatsrtpoctetssent{YType::uint64, "csbPerFlowStatsRTPOctetsSent"},
    csbperflowstatsrtpoctetsrcvd{YType::uint64, "csbPerFlowStatsRTPOctetsRcvd"},
    csbperflowstatsrtpoctetsdiscard{YType::uint64, "csbPerFlowStatsRTPOctetsDiscard"},
    csbperflowstatsrtcppktssent{YType::uint64, "csbPerFlowStatsRTCPPktsSent"},
    csbperflowstatsrtcppktsrcvd{YType::uint64, "csbPerFlowStatsRTCPPktsRcvd"},
    csbperflowstatsrtcppktslost{YType::uint64, "csbPerFlowStatsRTCPPktsLost"},
    csbperflowstatsepjitter{YType::uint64, "csbPerFlowStatsEPJitter"},
    csbperflowstatstmanpermbs{YType::uint32, "csbPerFlowStatsTmanPerMbs"},
    csbperflowstatstmanpersdr{YType::uint32, "csbPerFlowStatsTmanPerSdr"},
    csbperflowstatsdscpsettings{YType::str, "csbPerFlowStatsDscpSettings"},
    csbperflowstatsadrstatus{YType::str, "csbPerFlowStatsAdrStatus"},
    csbperflowstatsqasettings{YType::str, "csbPerFlowStatsQASettings"},
    csbperflowstatsrtppktslost{YType::uint64, "csbPerFlowStatsRTPPktsLost"}
{

    yang_name = "csbPerFlowStatsEntry"; yang_parent_name = "csbPerFlowStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::~CsbPerFlowStatsEntry()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbperflowstatsvdbeid.is_set
	|| csbperflowstatsgateid.is_set
	|| csbperflowstatsflowpairid.is_set
	|| csbperflowstatssideid.is_set
	|| csbperflowstatsflowtype.is_set
	|| csbperflowstatsrtppktssent.is_set
	|| csbperflowstatsrtppktsrcvd.is_set
	|| csbperflowstatsrtppktsdiscard.is_set
	|| csbperflowstatsrtpoctetssent.is_set
	|| csbperflowstatsrtpoctetsrcvd.is_set
	|| csbperflowstatsrtpoctetsdiscard.is_set
	|| csbperflowstatsrtcppktssent.is_set
	|| csbperflowstatsrtcppktsrcvd.is_set
	|| csbperflowstatsrtcppktslost.is_set
	|| csbperflowstatsepjitter.is_set
	|| csbperflowstatstmanpermbs.is_set
	|| csbperflowstatstmanpersdr.is_set
	|| csbperflowstatsdscpsettings.is_set
	|| csbperflowstatsadrstatus.is_set
	|| csbperflowstatsqasettings.is_set
	|| csbperflowstatsrtppktslost.is_set;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbperflowstatsvdbeid.yfilter)
	|| ydk::is_set(csbperflowstatsgateid.yfilter)
	|| ydk::is_set(csbperflowstatsflowpairid.yfilter)
	|| ydk::is_set(csbperflowstatssideid.yfilter)
	|| ydk::is_set(csbperflowstatsflowtype.yfilter)
	|| ydk::is_set(csbperflowstatsrtppktssent.yfilter)
	|| ydk::is_set(csbperflowstatsrtppktsrcvd.yfilter)
	|| ydk::is_set(csbperflowstatsrtppktsdiscard.yfilter)
	|| ydk::is_set(csbperflowstatsrtpoctetssent.yfilter)
	|| ydk::is_set(csbperflowstatsrtpoctetsrcvd.yfilter)
	|| ydk::is_set(csbperflowstatsrtpoctetsdiscard.yfilter)
	|| ydk::is_set(csbperflowstatsrtcppktssent.yfilter)
	|| ydk::is_set(csbperflowstatsrtcppktsrcvd.yfilter)
	|| ydk::is_set(csbperflowstatsrtcppktslost.yfilter)
	|| ydk::is_set(csbperflowstatsepjitter.yfilter)
	|| ydk::is_set(csbperflowstatstmanpermbs.yfilter)
	|| ydk::is_set(csbperflowstatstmanpersdr.yfilter)
	|| ydk::is_set(csbperflowstatsdscpsettings.yfilter)
	|| ydk::is_set(csbperflowstatsadrstatus.yfilter)
	|| ydk::is_set(csbperflowstatsqasettings.yfilter)
	|| ydk::is_set(csbperflowstatsrtppktslost.yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbPerFlowStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbPerFlowStatsEntry";
    ADD_KEY_TOKEN(csbcallstatsinstanceindex, "csbCallStatsInstanceIndex");
    ADD_KEY_TOKEN(csbcallstatsserviceindex, "csbCallStatsServiceIndex");
    ADD_KEY_TOKEN(csbperflowstatsvdbeid, "csbPerFlowStatsVdbeId");
    ADD_KEY_TOKEN(csbperflowstatsgateid, "csbPerFlowStatsGateId");
    ADD_KEY_TOKEN(csbperflowstatsflowpairid, "csbPerFlowStatsFlowPairId");
    ADD_KEY_TOKEN(csbperflowstatssideid, "csbPerFlowStatsSideId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbperflowstatsvdbeid.is_set || is_set(csbperflowstatsvdbeid.yfilter)) leaf_name_data.push_back(csbperflowstatsvdbeid.get_name_leafdata());
    if (csbperflowstatsgateid.is_set || is_set(csbperflowstatsgateid.yfilter)) leaf_name_data.push_back(csbperflowstatsgateid.get_name_leafdata());
    if (csbperflowstatsflowpairid.is_set || is_set(csbperflowstatsflowpairid.yfilter)) leaf_name_data.push_back(csbperflowstatsflowpairid.get_name_leafdata());
    if (csbperflowstatssideid.is_set || is_set(csbperflowstatssideid.yfilter)) leaf_name_data.push_back(csbperflowstatssideid.get_name_leafdata());
    if (csbperflowstatsflowtype.is_set || is_set(csbperflowstatsflowtype.yfilter)) leaf_name_data.push_back(csbperflowstatsflowtype.get_name_leafdata());
    if (csbperflowstatsrtppktssent.is_set || is_set(csbperflowstatsrtppktssent.yfilter)) leaf_name_data.push_back(csbperflowstatsrtppktssent.get_name_leafdata());
    if (csbperflowstatsrtppktsrcvd.is_set || is_set(csbperflowstatsrtppktsrcvd.yfilter)) leaf_name_data.push_back(csbperflowstatsrtppktsrcvd.get_name_leafdata());
    if (csbperflowstatsrtppktsdiscard.is_set || is_set(csbperflowstatsrtppktsdiscard.yfilter)) leaf_name_data.push_back(csbperflowstatsrtppktsdiscard.get_name_leafdata());
    if (csbperflowstatsrtpoctetssent.is_set || is_set(csbperflowstatsrtpoctetssent.yfilter)) leaf_name_data.push_back(csbperflowstatsrtpoctetssent.get_name_leafdata());
    if (csbperflowstatsrtpoctetsrcvd.is_set || is_set(csbperflowstatsrtpoctetsrcvd.yfilter)) leaf_name_data.push_back(csbperflowstatsrtpoctetsrcvd.get_name_leafdata());
    if (csbperflowstatsrtpoctetsdiscard.is_set || is_set(csbperflowstatsrtpoctetsdiscard.yfilter)) leaf_name_data.push_back(csbperflowstatsrtpoctetsdiscard.get_name_leafdata());
    if (csbperflowstatsrtcppktssent.is_set || is_set(csbperflowstatsrtcppktssent.yfilter)) leaf_name_data.push_back(csbperflowstatsrtcppktssent.get_name_leafdata());
    if (csbperflowstatsrtcppktsrcvd.is_set || is_set(csbperflowstatsrtcppktsrcvd.yfilter)) leaf_name_data.push_back(csbperflowstatsrtcppktsrcvd.get_name_leafdata());
    if (csbperflowstatsrtcppktslost.is_set || is_set(csbperflowstatsrtcppktslost.yfilter)) leaf_name_data.push_back(csbperflowstatsrtcppktslost.get_name_leafdata());
    if (csbperflowstatsepjitter.is_set || is_set(csbperflowstatsepjitter.yfilter)) leaf_name_data.push_back(csbperflowstatsepjitter.get_name_leafdata());
    if (csbperflowstatstmanpermbs.is_set || is_set(csbperflowstatstmanpermbs.yfilter)) leaf_name_data.push_back(csbperflowstatstmanpermbs.get_name_leafdata());
    if (csbperflowstatstmanpersdr.is_set || is_set(csbperflowstatstmanpersdr.yfilter)) leaf_name_data.push_back(csbperflowstatstmanpersdr.get_name_leafdata());
    if (csbperflowstatsdscpsettings.is_set || is_set(csbperflowstatsdscpsettings.yfilter)) leaf_name_data.push_back(csbperflowstatsdscpsettings.get_name_leafdata());
    if (csbperflowstatsadrstatus.is_set || is_set(csbperflowstatsadrstatus.yfilter)) leaf_name_data.push_back(csbperflowstatsadrstatus.get_name_leafdata());
    if (csbperflowstatsqasettings.is_set || is_set(csbperflowstatsqasettings.yfilter)) leaf_name_data.push_back(csbperflowstatsqasettings.get_name_leafdata());
    if (csbperflowstatsrtppktslost.is_set || is_set(csbperflowstatsrtppktslost.yfilter)) leaf_name_data.push_back(csbperflowstatsrtppktslost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csbPerFlowStatsVdbeId")
    {
        csbperflowstatsvdbeid = value;
        csbperflowstatsvdbeid.value_namespace = name_space;
        csbperflowstatsvdbeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsGateId")
    {
        csbperflowstatsgateid = value;
        csbperflowstatsgateid.value_namespace = name_space;
        csbperflowstatsgateid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsFlowPairId")
    {
        csbperflowstatsflowpairid = value;
        csbperflowstatsflowpairid.value_namespace = name_space;
        csbperflowstatsflowpairid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsSideId")
    {
        csbperflowstatssideid = value;
        csbperflowstatssideid.value_namespace = name_space;
        csbperflowstatssideid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsFlowType")
    {
        csbperflowstatsflowtype = value;
        csbperflowstatsflowtype.value_namespace = name_space;
        csbperflowstatsflowtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTPPktsSent")
    {
        csbperflowstatsrtppktssent = value;
        csbperflowstatsrtppktssent.value_namespace = name_space;
        csbperflowstatsrtppktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTPPktsRcvd")
    {
        csbperflowstatsrtppktsrcvd = value;
        csbperflowstatsrtppktsrcvd.value_namespace = name_space;
        csbperflowstatsrtppktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTPPktsDiscard")
    {
        csbperflowstatsrtppktsdiscard = value;
        csbperflowstatsrtppktsdiscard.value_namespace = name_space;
        csbperflowstatsrtppktsdiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsSent")
    {
        csbperflowstatsrtpoctetssent = value;
        csbperflowstatsrtpoctetssent.value_namespace = name_space;
        csbperflowstatsrtpoctetssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsRcvd")
    {
        csbperflowstatsrtpoctetsrcvd = value;
        csbperflowstatsrtpoctetsrcvd.value_namespace = name_space;
        csbperflowstatsrtpoctetsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsDiscard")
    {
        csbperflowstatsrtpoctetsdiscard = value;
        csbperflowstatsrtpoctetsdiscard.value_namespace = name_space;
        csbperflowstatsrtpoctetsdiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsSent")
    {
        csbperflowstatsrtcppktssent = value;
        csbperflowstatsrtcppktssent.value_namespace = name_space;
        csbperflowstatsrtcppktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsRcvd")
    {
        csbperflowstatsrtcppktsrcvd = value;
        csbperflowstatsrtcppktsrcvd.value_namespace = name_space;
        csbperflowstatsrtcppktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsLost")
    {
        csbperflowstatsrtcppktslost = value;
        csbperflowstatsrtcppktslost.value_namespace = name_space;
        csbperflowstatsrtcppktslost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsEPJitter")
    {
        csbperflowstatsepjitter = value;
        csbperflowstatsepjitter.value_namespace = name_space;
        csbperflowstatsepjitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsTmanPerMbs")
    {
        csbperflowstatstmanpermbs = value;
        csbperflowstatstmanpermbs.value_namespace = name_space;
        csbperflowstatstmanpermbs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsTmanPerSdr")
    {
        csbperflowstatstmanpersdr = value;
        csbperflowstatstmanpersdr.value_namespace = name_space;
        csbperflowstatstmanpersdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsDscpSettings")
    {
        csbperflowstatsdscpsettings = value;
        csbperflowstatsdscpsettings.value_namespace = name_space;
        csbperflowstatsdscpsettings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsAdrStatus")
    {
        csbperflowstatsadrstatus = value;
        csbperflowstatsadrstatus.value_namespace = name_space;
        csbperflowstatsadrstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsQASettings")
    {
        csbperflowstatsqasettings = value;
        csbperflowstatsqasettings.value_namespace = name_space;
        csbperflowstatsqasettings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbPerFlowStatsRTPPktsLost")
    {
        csbperflowstatsrtppktslost = value;
        csbperflowstatsrtppktslost.value_namespace = name_space;
        csbperflowstatsrtppktslost.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsVdbeId")
    {
        csbperflowstatsvdbeid.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsGateId")
    {
        csbperflowstatsgateid.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsFlowPairId")
    {
        csbperflowstatsflowpairid.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsSideId")
    {
        csbperflowstatssideid.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsFlowType")
    {
        csbperflowstatsflowtype.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTPPktsSent")
    {
        csbperflowstatsrtppktssent.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTPPktsRcvd")
    {
        csbperflowstatsrtppktsrcvd.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTPPktsDiscard")
    {
        csbperflowstatsrtppktsdiscard.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsSent")
    {
        csbperflowstatsrtpoctetssent.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsRcvd")
    {
        csbperflowstatsrtpoctetsrcvd.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsDiscard")
    {
        csbperflowstatsrtpoctetsdiscard.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsSent")
    {
        csbperflowstatsrtcppktssent.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsRcvd")
    {
        csbperflowstatsrtcppktsrcvd.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsLost")
    {
        csbperflowstatsrtcppktslost.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsEPJitter")
    {
        csbperflowstatsepjitter.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsTmanPerMbs")
    {
        csbperflowstatstmanpermbs.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsTmanPerSdr")
    {
        csbperflowstatstmanpersdr.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsDscpSettings")
    {
        csbperflowstatsdscpsettings.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsAdrStatus")
    {
        csbperflowstatsadrstatus.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsQASettings")
    {
        csbperflowstatsqasettings.yfilter = yfilter;
    }
    if(value_path == "csbPerFlowStatsRTPPktsLost")
    {
        csbperflowstatsrtppktslost.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbPerFlowStatsVdbeId" || name == "csbPerFlowStatsGateId" || name == "csbPerFlowStatsFlowPairId" || name == "csbPerFlowStatsSideId" || name == "csbPerFlowStatsFlowType" || name == "csbPerFlowStatsRTPPktsSent" || name == "csbPerFlowStatsRTPPktsRcvd" || name == "csbPerFlowStatsRTPPktsDiscard" || name == "csbPerFlowStatsRTPOctetsSent" || name == "csbPerFlowStatsRTPOctetsRcvd" || name == "csbPerFlowStatsRTPOctetsDiscard" || name == "csbPerFlowStatsRTCPPktsSent" || name == "csbPerFlowStatsRTCPPktsRcvd" || name == "csbPerFlowStatsRTCPPktsLost" || name == "csbPerFlowStatsEPJitter" || name == "csbPerFlowStatsTmanPerMbs" || name == "csbPerFlowStatsTmanPerSdr" || name == "csbPerFlowStatsDscpSettings" || name == "csbPerFlowStatsAdrStatus" || name == "csbPerFlowStatsQASettings" || name == "csbPerFlowStatsRTPPktsLost")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsTable()
    :
    csbh248statsentry(this, {"csbcallstatsinstanceindex", "csbcallstatsserviceindex", "csbh248statsctrlrindex"})
{

    yang_name = "csbH248StatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::~CsbH248StatsTable()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csbh248statsentry.len(); index++)
    {
        if(csbh248statsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::has_operation() const
{
    for (std::size_t index=0; index<csbh248statsentry.len(); index++)
    {
        if(csbh248statsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbH248StatsEntry")
    {
        auto ent_ = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry>();
        ent_->parent = this;
        csbh248statsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csbh248statsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbH248StatsEntry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::CsbH248StatsEntry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbh248statsctrlrindex{YType::int32, "csbH248StatsCtrlrIndex"},
    csbh248statsrequestssent{YType::uint32, "csbH248StatsRequestsSent"},
    csbh248statsrequestsrcvd{YType::uint32, "csbH248StatsRequestsRcvd"},
    csbh248statsrequestsfailed{YType::uint32, "csbH248StatsRequestsFailed"},
    csbh248statsrequestsretried{YType::uint32, "csbH248StatsRequestsRetried"},
    csbh248statsrepliessent{YType::uint32, "csbH248StatsRepliesSent"},
    csbh248statsrepliesrcvd{YType::uint32, "csbH248StatsRepliesRcvd"},
    csbh248statsrepliesretried{YType::uint32, "csbH248StatsRepliesRetried"},
    csbh248statssegpktssent{YType::uint32, "csbH248StatsSegPktsSent"},
    csbh248statssegpktsrcvd{YType::uint32, "csbH248StatsSegPktsRcvd"},
    csbh248statsestablishedtime{YType::str, "csbH248StatsEstablishedTime"},
    csbh248statstmaxtimeoutval{YType::int32, "csbH248StatsTMaxTimeoutVal"},
    csbh248statsrtt{YType::uint32, "csbH248StatsRTT"},
    csbh248statslt{YType::uint32, "csbH248StatsLT"}
{

    yang_name = "csbH248StatsEntry"; yang_parent_name = "csbH248StatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::~CsbH248StatsEntry()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbh248statsctrlrindex.is_set
	|| csbh248statsrequestssent.is_set
	|| csbh248statsrequestsrcvd.is_set
	|| csbh248statsrequestsfailed.is_set
	|| csbh248statsrequestsretried.is_set
	|| csbh248statsrepliessent.is_set
	|| csbh248statsrepliesrcvd.is_set
	|| csbh248statsrepliesretried.is_set
	|| csbh248statssegpktssent.is_set
	|| csbh248statssegpktsrcvd.is_set
	|| csbh248statsestablishedtime.is_set
	|| csbh248statstmaxtimeoutval.is_set
	|| csbh248statsrtt.is_set
	|| csbh248statslt.is_set;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbh248statsctrlrindex.yfilter)
	|| ydk::is_set(csbh248statsrequestssent.yfilter)
	|| ydk::is_set(csbh248statsrequestsrcvd.yfilter)
	|| ydk::is_set(csbh248statsrequestsfailed.yfilter)
	|| ydk::is_set(csbh248statsrequestsretried.yfilter)
	|| ydk::is_set(csbh248statsrepliessent.yfilter)
	|| ydk::is_set(csbh248statsrepliesrcvd.yfilter)
	|| ydk::is_set(csbh248statsrepliesretried.yfilter)
	|| ydk::is_set(csbh248statssegpktssent.yfilter)
	|| ydk::is_set(csbh248statssegpktsrcvd.yfilter)
	|| ydk::is_set(csbh248statsestablishedtime.yfilter)
	|| ydk::is_set(csbh248statstmaxtimeoutval.yfilter)
	|| ydk::is_set(csbh248statsrtt.yfilter)
	|| ydk::is_set(csbh248statslt.yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbH248StatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsEntry";
    ADD_KEY_TOKEN(csbcallstatsinstanceindex, "csbCallStatsInstanceIndex");
    ADD_KEY_TOKEN(csbcallstatsserviceindex, "csbCallStatsServiceIndex");
    ADD_KEY_TOKEN(csbh248statsctrlrindex, "csbH248StatsCtrlrIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbh248statsctrlrindex.is_set || is_set(csbh248statsctrlrindex.yfilter)) leaf_name_data.push_back(csbh248statsctrlrindex.get_name_leafdata());
    if (csbh248statsrequestssent.is_set || is_set(csbh248statsrequestssent.yfilter)) leaf_name_data.push_back(csbh248statsrequestssent.get_name_leafdata());
    if (csbh248statsrequestsrcvd.is_set || is_set(csbh248statsrequestsrcvd.yfilter)) leaf_name_data.push_back(csbh248statsrequestsrcvd.get_name_leafdata());
    if (csbh248statsrequestsfailed.is_set || is_set(csbh248statsrequestsfailed.yfilter)) leaf_name_data.push_back(csbh248statsrequestsfailed.get_name_leafdata());
    if (csbh248statsrequestsretried.is_set || is_set(csbh248statsrequestsretried.yfilter)) leaf_name_data.push_back(csbh248statsrequestsretried.get_name_leafdata());
    if (csbh248statsrepliessent.is_set || is_set(csbh248statsrepliessent.yfilter)) leaf_name_data.push_back(csbh248statsrepliessent.get_name_leafdata());
    if (csbh248statsrepliesrcvd.is_set || is_set(csbh248statsrepliesrcvd.yfilter)) leaf_name_data.push_back(csbh248statsrepliesrcvd.get_name_leafdata());
    if (csbh248statsrepliesretried.is_set || is_set(csbh248statsrepliesretried.yfilter)) leaf_name_data.push_back(csbh248statsrepliesretried.get_name_leafdata());
    if (csbh248statssegpktssent.is_set || is_set(csbh248statssegpktssent.yfilter)) leaf_name_data.push_back(csbh248statssegpktssent.get_name_leafdata());
    if (csbh248statssegpktsrcvd.is_set || is_set(csbh248statssegpktsrcvd.yfilter)) leaf_name_data.push_back(csbh248statssegpktsrcvd.get_name_leafdata());
    if (csbh248statsestablishedtime.is_set || is_set(csbh248statsestablishedtime.yfilter)) leaf_name_data.push_back(csbh248statsestablishedtime.get_name_leafdata());
    if (csbh248statstmaxtimeoutval.is_set || is_set(csbh248statstmaxtimeoutval.yfilter)) leaf_name_data.push_back(csbh248statstmaxtimeoutval.get_name_leafdata());
    if (csbh248statsrtt.is_set || is_set(csbh248statsrtt.yfilter)) leaf_name_data.push_back(csbh248statsrtt.get_name_leafdata());
    if (csbh248statslt.is_set || is_set(csbh248statslt.yfilter)) leaf_name_data.push_back(csbh248statslt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csbH248StatsCtrlrIndex")
    {
        csbh248statsctrlrindex = value;
        csbh248statsctrlrindex.value_namespace = name_space;
        csbh248statsctrlrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsSent")
    {
        csbh248statsrequestssent = value;
        csbh248statsrequestssent.value_namespace = name_space;
        csbh248statsrequestssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsRcvd")
    {
        csbh248statsrequestsrcvd = value;
        csbh248statsrequestsrcvd.value_namespace = name_space;
        csbh248statsrequestsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsFailed")
    {
        csbh248statsrequestsfailed = value;
        csbh248statsrequestsfailed.value_namespace = name_space;
        csbh248statsrequestsfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsRetried")
    {
        csbh248statsrequestsretried = value;
        csbh248statsrequestsretried.value_namespace = name_space;
        csbh248statsrequestsretried.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRepliesSent")
    {
        csbh248statsrepliessent = value;
        csbh248statsrepliessent.value_namespace = name_space;
        csbh248statsrepliessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRepliesRcvd")
    {
        csbh248statsrepliesrcvd = value;
        csbh248statsrepliesrcvd.value_namespace = name_space;
        csbh248statsrepliesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRepliesRetried")
    {
        csbh248statsrepliesretried = value;
        csbh248statsrepliesretried.value_namespace = name_space;
        csbh248statsrepliesretried.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsSegPktsSent")
    {
        csbh248statssegpktssent = value;
        csbh248statssegpktssent.value_namespace = name_space;
        csbh248statssegpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsSegPktsRcvd")
    {
        csbh248statssegpktsrcvd = value;
        csbh248statssegpktsrcvd.value_namespace = name_space;
        csbh248statssegpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsEstablishedTime")
    {
        csbh248statsestablishedtime = value;
        csbh248statsestablishedtime.value_namespace = name_space;
        csbh248statsestablishedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsTMaxTimeoutVal")
    {
        csbh248statstmaxtimeoutval = value;
        csbh248statstmaxtimeoutval.value_namespace = name_space;
        csbh248statstmaxtimeoutval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRTT")
    {
        csbh248statsrtt = value;
        csbh248statsrtt.value_namespace = name_space;
        csbh248statsrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsLT")
    {
        csbh248statslt = value;
        csbh248statslt.value_namespace = name_space;
        csbh248statslt.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsCtrlrIndex")
    {
        csbh248statsctrlrindex.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsSent")
    {
        csbh248statsrequestssent.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsRcvd")
    {
        csbh248statsrequestsrcvd.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsFailed")
    {
        csbh248statsrequestsfailed.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsRetried")
    {
        csbh248statsrequestsretried.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRepliesSent")
    {
        csbh248statsrepliessent.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRepliesRcvd")
    {
        csbh248statsrepliesrcvd.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRepliesRetried")
    {
        csbh248statsrepliesretried.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsSegPktsSent")
    {
        csbh248statssegpktssent.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsSegPktsRcvd")
    {
        csbh248statssegpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsEstablishedTime")
    {
        csbh248statsestablishedtime.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsTMaxTimeoutVal")
    {
        csbh248statstmaxtimeoutval.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRTT")
    {
        csbh248statsrtt.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsLT")
    {
        csbh248statslt.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbH248StatsCtrlrIndex" || name == "csbH248StatsRequestsSent" || name == "csbH248StatsRequestsRcvd" || name == "csbH248StatsRequestsFailed" || name == "csbH248StatsRequestsRetried" || name == "csbH248StatsRepliesSent" || name == "csbH248StatsRepliesRcvd" || name == "csbH248StatsRepliesRetried" || name == "csbH248StatsSegPktsSent" || name == "csbH248StatsSegPktsRcvd" || name == "csbH248StatsEstablishedTime" || name == "csbH248StatsTMaxTimeoutVal" || name == "csbH248StatsRTT" || name == "csbH248StatsLT")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Table()
    :
    csbh248statsrev1entry(this, {"csbcallstatsinstanceindex", "csbcallstatsserviceindex", "csbh248statsvdbeid"})
{

    yang_name = "csbH248StatsRev1Table"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::~CsbH248StatsRev1Table()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csbh248statsrev1entry.len(); index++)
    {
        if(csbh248statsrev1entry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::has_operation() const
{
    for (std::size_t index=0; index<csbh248statsrev1entry.len(); index++)
    {
        if(csbh248statsrev1entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsRev1Table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbH248StatsRev1Entry")
    {
        auto ent_ = std::make_shared<CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry>();
        ent_->parent = this;
        csbh248statsrev1entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csbh248statsrev1entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbH248StatsRev1Entry")
        return true;
    return false;
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::CsbH248StatsRev1Entry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbh248statsvdbeid{YType::int32, "csbH248StatsVdbeId"},
    csbh248statsrequestssentrev1{YType::uint32, "csbH248StatsRequestsSentRev1"},
    csbh248statsrequestsrcvdrev1{YType::uint32, "csbH248StatsRequestsRcvdRev1"},
    csbh248statsrequestsfailedrev1{YType::uint32, "csbH248StatsRequestsFailedRev1"},
    csbh248statsrequestsretriedrev1{YType::uint32, "csbH248StatsRequestsRetriedRev1"},
    csbh248statsrepliessentrev1{YType::uint32, "csbH248StatsRepliesSentRev1"},
    csbh248statsrepliesrcvdrev1{YType::uint32, "csbH248StatsRepliesRcvdRev1"},
    csbh248statsrepliesretriedrev1{YType::uint32, "csbH248StatsRepliesRetriedRev1"},
    csbh248statssegpktssentrev1{YType::uint32, "csbH248StatsSegPktsSentRev1"},
    csbh248statssegpktsrcvdrev1{YType::uint32, "csbH248StatsSegPktsRcvdRev1"},
    csbh248statsestablishedtimerev1{YType::str, "csbH248StatsEstablishedTimeRev1"},
    csbh248statstmaxtimeoutvalrev1{YType::int32, "csbH248StatsTMaxTimeoutValRev1"},
    csbh248statsrttrev1{YType::uint32, "csbH248StatsRTTRev1"},
    csbh248statsltrev1{YType::uint32, "csbH248StatsLTRev1"}
{

    yang_name = "csbH248StatsRev1Entry"; yang_parent_name = "csbH248StatsRev1Table"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::~CsbH248StatsRev1Entry()
{
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::has_data() const
{
    if (is_presence_container) return true;
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbh248statsvdbeid.is_set
	|| csbh248statsrequestssentrev1.is_set
	|| csbh248statsrequestsrcvdrev1.is_set
	|| csbh248statsrequestsfailedrev1.is_set
	|| csbh248statsrequestsretriedrev1.is_set
	|| csbh248statsrepliessentrev1.is_set
	|| csbh248statsrepliesrcvdrev1.is_set
	|| csbh248statsrepliesretriedrev1.is_set
	|| csbh248statssegpktssentrev1.is_set
	|| csbh248statssegpktsrcvdrev1.is_set
	|| csbh248statsestablishedtimerev1.is_set
	|| csbh248statstmaxtimeoutvalrev1.is_set
	|| csbh248statsrttrev1.is_set
	|| csbh248statsltrev1.is_set;
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csbcallstatsinstanceindex.yfilter)
	|| ydk::is_set(csbcallstatsserviceindex.yfilter)
	|| ydk::is_set(csbh248statsvdbeid.yfilter)
	|| ydk::is_set(csbh248statsrequestssentrev1.yfilter)
	|| ydk::is_set(csbh248statsrequestsrcvdrev1.yfilter)
	|| ydk::is_set(csbh248statsrequestsfailedrev1.yfilter)
	|| ydk::is_set(csbh248statsrequestsretriedrev1.yfilter)
	|| ydk::is_set(csbh248statsrepliessentrev1.yfilter)
	|| ydk::is_set(csbh248statsrepliesrcvdrev1.yfilter)
	|| ydk::is_set(csbh248statsrepliesretriedrev1.yfilter)
	|| ydk::is_set(csbh248statssegpktssentrev1.yfilter)
	|| ydk::is_set(csbh248statssegpktsrcvdrev1.yfilter)
	|| ydk::is_set(csbh248statsestablishedtimerev1.yfilter)
	|| ydk::is_set(csbh248statstmaxtimeoutvalrev1.yfilter)
	|| ydk::is_set(csbh248statsrttrev1.yfilter)
	|| ydk::is_set(csbh248statsltrev1.yfilter);
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbH248StatsRev1Table/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsRev1Entry";
    ADD_KEY_TOKEN(csbcallstatsinstanceindex, "csbCallStatsInstanceIndex");
    ADD_KEY_TOKEN(csbcallstatsserviceindex, "csbCallStatsServiceIndex");
    ADD_KEY_TOKEN(csbh248statsvdbeid, "csbH248StatsVdbeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.yfilter)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.yfilter)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbh248statsvdbeid.is_set || is_set(csbh248statsvdbeid.yfilter)) leaf_name_data.push_back(csbh248statsvdbeid.get_name_leafdata());
    if (csbh248statsrequestssentrev1.is_set || is_set(csbh248statsrequestssentrev1.yfilter)) leaf_name_data.push_back(csbh248statsrequestssentrev1.get_name_leafdata());
    if (csbh248statsrequestsrcvdrev1.is_set || is_set(csbh248statsrequestsrcvdrev1.yfilter)) leaf_name_data.push_back(csbh248statsrequestsrcvdrev1.get_name_leafdata());
    if (csbh248statsrequestsfailedrev1.is_set || is_set(csbh248statsrequestsfailedrev1.yfilter)) leaf_name_data.push_back(csbh248statsrequestsfailedrev1.get_name_leafdata());
    if (csbh248statsrequestsretriedrev1.is_set || is_set(csbh248statsrequestsretriedrev1.yfilter)) leaf_name_data.push_back(csbh248statsrequestsretriedrev1.get_name_leafdata());
    if (csbh248statsrepliessentrev1.is_set || is_set(csbh248statsrepliessentrev1.yfilter)) leaf_name_data.push_back(csbh248statsrepliessentrev1.get_name_leafdata());
    if (csbh248statsrepliesrcvdrev1.is_set || is_set(csbh248statsrepliesrcvdrev1.yfilter)) leaf_name_data.push_back(csbh248statsrepliesrcvdrev1.get_name_leafdata());
    if (csbh248statsrepliesretriedrev1.is_set || is_set(csbh248statsrepliesretriedrev1.yfilter)) leaf_name_data.push_back(csbh248statsrepliesretriedrev1.get_name_leafdata());
    if (csbh248statssegpktssentrev1.is_set || is_set(csbh248statssegpktssentrev1.yfilter)) leaf_name_data.push_back(csbh248statssegpktssentrev1.get_name_leafdata());
    if (csbh248statssegpktsrcvdrev1.is_set || is_set(csbh248statssegpktsrcvdrev1.yfilter)) leaf_name_data.push_back(csbh248statssegpktsrcvdrev1.get_name_leafdata());
    if (csbh248statsestablishedtimerev1.is_set || is_set(csbh248statsestablishedtimerev1.yfilter)) leaf_name_data.push_back(csbh248statsestablishedtimerev1.get_name_leafdata());
    if (csbh248statstmaxtimeoutvalrev1.is_set || is_set(csbh248statstmaxtimeoutvalrev1.yfilter)) leaf_name_data.push_back(csbh248statstmaxtimeoutvalrev1.get_name_leafdata());
    if (csbh248statsrttrev1.is_set || is_set(csbh248statsrttrev1.yfilter)) leaf_name_data.push_back(csbh248statsrttrev1.get_name_leafdata());
    if (csbh248statsltrev1.is_set || is_set(csbh248statsltrev1.yfilter)) leaf_name_data.push_back(csbh248statsltrev1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csbH248StatsVdbeId")
    {
        csbh248statsvdbeid = value;
        csbh248statsvdbeid.value_namespace = name_space;
        csbh248statsvdbeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsSentRev1")
    {
        csbh248statsrequestssentrev1 = value;
        csbh248statsrequestssentrev1.value_namespace = name_space;
        csbh248statsrequestssentrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsRcvdRev1")
    {
        csbh248statsrequestsrcvdrev1 = value;
        csbh248statsrequestsrcvdrev1.value_namespace = name_space;
        csbh248statsrequestsrcvdrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsFailedRev1")
    {
        csbh248statsrequestsfailedrev1 = value;
        csbh248statsrequestsfailedrev1.value_namespace = name_space;
        csbh248statsrequestsfailedrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRequestsRetriedRev1")
    {
        csbh248statsrequestsretriedrev1 = value;
        csbh248statsrequestsretriedrev1.value_namespace = name_space;
        csbh248statsrequestsretriedrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRepliesSentRev1")
    {
        csbh248statsrepliessentrev1 = value;
        csbh248statsrepliessentrev1.value_namespace = name_space;
        csbh248statsrepliessentrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRepliesRcvdRev1")
    {
        csbh248statsrepliesrcvdrev1 = value;
        csbh248statsrepliesrcvdrev1.value_namespace = name_space;
        csbh248statsrepliesrcvdrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRepliesRetriedRev1")
    {
        csbh248statsrepliesretriedrev1 = value;
        csbh248statsrepliesretriedrev1.value_namespace = name_space;
        csbh248statsrepliesretriedrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsSegPktsSentRev1")
    {
        csbh248statssegpktssentrev1 = value;
        csbh248statssegpktssentrev1.value_namespace = name_space;
        csbh248statssegpktssentrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsSegPktsRcvdRev1")
    {
        csbh248statssegpktsrcvdrev1 = value;
        csbh248statssegpktsrcvdrev1.value_namespace = name_space;
        csbh248statssegpktsrcvdrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsEstablishedTimeRev1")
    {
        csbh248statsestablishedtimerev1 = value;
        csbh248statsestablishedtimerev1.value_namespace = name_space;
        csbh248statsestablishedtimerev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsTMaxTimeoutValRev1")
    {
        csbh248statstmaxtimeoutvalrev1 = value;
        csbh248statstmaxtimeoutvalrev1.value_namespace = name_space;
        csbh248statstmaxtimeoutvalrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsRTTRev1")
    {
        csbh248statsrttrev1 = value;
        csbh248statsrttrev1.value_namespace = name_space;
        csbh248statsrttrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csbH248StatsLTRev1")
    {
        csbh248statsltrev1 = value;
        csbh248statsltrev1.value_namespace = name_space;
        csbh248statsltrev1.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsVdbeId")
    {
        csbh248statsvdbeid.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsSentRev1")
    {
        csbh248statsrequestssentrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsRcvdRev1")
    {
        csbh248statsrequestsrcvdrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsFailedRev1")
    {
        csbh248statsrequestsfailedrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRequestsRetriedRev1")
    {
        csbh248statsrequestsretriedrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRepliesSentRev1")
    {
        csbh248statsrepliessentrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRepliesRcvdRev1")
    {
        csbh248statsrepliesrcvdrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRepliesRetriedRev1")
    {
        csbh248statsrepliesretriedrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsSegPktsSentRev1")
    {
        csbh248statssegpktssentrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsSegPktsRcvdRev1")
    {
        csbh248statssegpktsrcvdrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsEstablishedTimeRev1")
    {
        csbh248statsestablishedtimerev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsTMaxTimeoutValRev1")
    {
        csbh248statstmaxtimeoutvalrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsRTTRev1")
    {
        csbh248statsrttrev1.yfilter = yfilter;
    }
    if(value_path == "csbH248StatsLTRev1")
    {
        csbh248statsltrev1.yfilter = yfilter;
    }
}

bool CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csbCallStatsInstanceIndex" || name == "csbCallStatsServiceIndex" || name == "csbH248StatsVdbeId" || name == "csbH248StatsRequestsSentRev1" || name == "csbH248StatsRequestsRcvdRev1" || name == "csbH248StatsRequestsFailedRev1" || name == "csbH248StatsRequestsRetriedRev1" || name == "csbH248StatsRepliesSentRev1" || name == "csbH248StatsRepliesRcvdRev1" || name == "csbH248StatsRepliesRetriedRev1" || name == "csbH248StatsSegPktsSentRev1" || name == "csbH248StatsSegPktsRcvdRev1" || name == "csbH248StatsEstablishedTimeRev1" || name == "csbH248StatsTMaxTimeoutValRev1" || name == "csbH248StatsRTTRev1" || name == "csbH248StatsLTRev1")
        return true;
    return false;
}

const Enum::YLeaf CiscoSbcPeriodicStatsInterval::fiveMinute {1, "fiveMinute"};
const Enum::YLeaf CiscoSbcPeriodicStatsInterval::fifteenMinute {2, "fifteenMinute"};
const Enum::YLeaf CiscoSbcPeriodicStatsInterval::oneHour {3, "oneHour"};
const Enum::YLeaf CiscoSbcPeriodicStatsInterval::oneDay {4, "oneDay"};

const Enum::YLeaf CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::CsbPerFlowStatsSideId::sideA {1, "sideA"};
const Enum::YLeaf CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::CsbPerFlowStatsSideId::sideB {2, "sideB"};

const Enum::YLeaf CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::CsbPerFlowStatsFlowType::media {1, "media"};
const Enum::YLeaf CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::CsbPerFlowStatsFlowType::signalling {2, "signalling"};


}
}

