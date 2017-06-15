
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB.hpp"

namespace ydk {
namespace CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB {

CiscoSessBorderCtrlrCallStatsMib::CiscoSessBorderCtrlrCallStatsMib()
    :
    csbcallstatsinstancetable_(std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable>())
	,csbcallstatstable_(std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable>())
	,csbcurrperiodicstatstable_(std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable>())
	,csbh248statsrev1table_(std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table>())
	,csbh248statstable_(std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable>())
	,csbhistorystatstable_(std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable>())
	,csbperflowstatstable_(std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable>())
{
    csbcallstatsinstancetable_->parent = this;

    csbcallstatstable_->parent = this;

    csbcurrperiodicstatstable_->parent = this;

    csbh248statsrev1table_->parent = this;

    csbh248statstable_->parent = this;

    csbhistorystatstable_->parent = this;

    csbperflowstatstable_->parent = this;

    yang_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::~CiscoSessBorderCtrlrCallStatsMib()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::has_data() const
{
    return (csbcallstatsinstancetable_ !=  nullptr && csbcallstatsinstancetable_->has_data())
	|| (csbcallstatstable_ !=  nullptr && csbcallstatstable_->has_data())
	|| (csbcurrperiodicstatstable_ !=  nullptr && csbcurrperiodicstatstable_->has_data())
	|| (csbh248statsrev1table_ !=  nullptr && csbh248statsrev1table_->has_data())
	|| (csbh248statstable_ !=  nullptr && csbh248statstable_->has_data())
	|| (csbhistorystatstable_ !=  nullptr && csbhistorystatstable_->has_data())
	|| (csbperflowstatstable_ !=  nullptr && csbperflowstatstable_->has_data());
}

bool CiscoSessBorderCtrlrCallStatsMib::has_operation() const
{
    return is_set(operation)
	|| (csbcallstatsinstancetable_ !=  nullptr && csbcallstatsinstancetable_->has_operation())
	|| (csbcallstatstable_ !=  nullptr && csbcallstatstable_->has_operation())
	|| (csbcurrperiodicstatstable_ !=  nullptr && csbcurrperiodicstatstable_->has_operation())
	|| (csbh248statsrev1table_ !=  nullptr && csbh248statsrev1table_->has_operation())
	|| (csbh248statstable_ !=  nullptr && csbh248statstable_->has_operation())
	|| (csbhistorystatstable_ !=  nullptr && csbhistorystatstable_->has_operation())
	|| (csbperflowstatstable_ !=  nullptr && csbperflowstatstable_->has_operation());
}

std::string CiscoSessBorderCtrlrCallStatsMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCallStatsInstanceTable")
    {
        if(csbcallstatsinstancetable_ == nullptr)
        {
            csbcallstatsinstancetable_ = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable>();
        }
        return csbcallstatsinstancetable_;
    }

    if(child_yang_name == "csbCallStatsTable")
    {
        if(csbcallstatstable_ == nullptr)
        {
            csbcallstatstable_ = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable>();
        }
        return csbcallstatstable_;
    }

    if(child_yang_name == "csbCurrPeriodicStatsTable")
    {
        if(csbcurrperiodicstatstable_ == nullptr)
        {
            csbcurrperiodicstatstable_ = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable>();
        }
        return csbcurrperiodicstatstable_;
    }

    if(child_yang_name == "csbH248StatsRev1Table")
    {
        if(csbh248statsrev1table_ == nullptr)
        {
            csbh248statsrev1table_ = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table>();
        }
        return csbh248statsrev1table_;
    }

    if(child_yang_name == "csbH248StatsTable")
    {
        if(csbh248statstable_ == nullptr)
        {
            csbh248statstable_ = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable>();
        }
        return csbh248statstable_;
    }

    if(child_yang_name == "csbHistoryStatsTable")
    {
        if(csbhistorystatstable_ == nullptr)
        {
            csbhistorystatstable_ = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable>();
        }
        return csbhistorystatstable_;
    }

    if(child_yang_name == "csbPerFlowStatsTable")
    {
        if(csbperflowstatstable_ == nullptr)
        {
            csbperflowstatstable_ = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable>();
        }
        return csbperflowstatstable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csbcallstatsinstancetable_ != nullptr)
    {
        children["csbCallStatsInstanceTable"] = csbcallstatsinstancetable_;
    }

    if(csbcallstatstable_ != nullptr)
    {
        children["csbCallStatsTable"] = csbcallstatstable_;
    }

    if(csbcurrperiodicstatstable_ != nullptr)
    {
        children["csbCurrPeriodicStatsTable"] = csbcurrperiodicstatstable_;
    }

    if(csbh248statsrev1table_ != nullptr)
    {
        children["csbH248StatsRev1Table"] = csbh248statsrev1table_;
    }

    if(csbh248statstable_ != nullptr)
    {
        children["csbH248StatsTable"] = csbh248statstable_;
    }

    if(csbhistorystatstable_ != nullptr)
    {
        children["csbHistoryStatsTable"] = csbhistorystatstable_;
    }

    if(csbperflowstatstable_ != nullptr)
    {
        children["csbPerFlowStatsTable"] = csbperflowstatstable_;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::clone_ptr() const
{
    return std::make_shared<CiscoSessBorderCtrlrCallStatsMib>();
}

std::string CiscoSessBorderCtrlrCallStatsMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoSessBorderCtrlrCallStatsMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoSessBorderCtrlrCallStatsMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstancetable()
{
    yang_name = "csbCallStatsInstanceTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::~Csbcallstatsinstancetable()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::has_data() const
{
    for (std::size_t index=0; index<csbcallstatsinstanceentry_.size(); index++)
    {
        if(csbcallstatsinstanceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::has_operation() const
{
    for (std::size_t index=0; index<csbcallstatsinstanceentry_.size(); index++)
    {
        if(csbcallstatsinstanceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsInstanceTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCallStatsInstanceEntry")
    {
        for(auto const & c : csbcallstatsinstanceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry>();
        c->parent = this;
        csbcallstatsinstanceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbcallstatsinstanceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::Csbcallstatsinstanceentry()
    :
    csbcallstatsinstanceindex{YType::uint32, "csbCallStatsInstanceIndex"},
    csbcallstatsinstancephysicalindex{YType::int32, "csbCallStatsInstancePhysicalIndex"}
{
    yang_name = "csbCallStatsInstanceEntry"; yang_parent_name = "csbCallStatsInstanceTable";
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::~Csbcallstatsinstanceentry()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsinstancephysicalindex.is_set;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsinstancephysicalindex.operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsInstanceEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbCallStatsInstanceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsinstancephysicalindex.is_set || is_set(csbcallstatsinstancephysicalindex.operation)) leaf_name_data.push_back(csbcallstatsinstancephysicalindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsInstancePhysicalIndex")
    {
        csbcallstatsinstancephysicalindex = value;
    }
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatstable()
{
    yang_name = "csbCallStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::~Csbcallstatstable()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::has_data() const
{
    for (std::size_t index=0; index<csbcallstatsentry_.size(); index++)
    {
        if(csbcallstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbcallstatsentry_.size(); index++)
    {
        if(csbcallstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCallStatsEntry")
    {
        for(auto const & c : csbcallstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry>();
        c->parent = this;
        csbcallstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbcallstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::Csbcallstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::uint32, "csbCallStatsServiceIndex"},
    csbcallstatsactivetranscodeflows{YType::uint32, "csbCallStatsActiveTranscodeFlows"},
    csbcallstatsavailableflows{YType::uint32, "csbCallStatsAvailableFlows"},
    csbcallstatsavailablepktrate{YType::uint32, "csbCallStatsAvailablePktRate"},
    csbcallstatsavailabletranscodeflows{YType::uint32, "csbCallStatsAvailableTranscodeFlows"},
    csbcallstatscallshigh{YType::uint32, "csbCallStatsCallsHigh"},
    csbcallstatscallslow{YType::uint32, "csbCallStatsCallsLow"},
    csbcallstatsnomediacount{YType::uint32, "csbCallStatsNoMediaCount"},
    csbcallstatspeakflows{YType::uint32, "csbCallStatsPeakFlows"},
    csbcallstatspeaksigflows{YType::uint32, "csbCallStatsPeakSigFlows"},
    csbcallstatspeaktranscodeflows{YType::uint32, "csbCallStatsPeakTranscodeFlows"},
    csbcallstatsrate1sec{YType::uint32, "csbCallStatsRate1Sec"},
    csbcallstatsrouteerrors{YType::uint32, "csbCallStatsRouteErrors"},
    csbcallstatsrtpoctetsdiscard{YType::uint64, "csbCallStatsRTPOctetsDiscard"},
    csbcallstatsrtpoctetsrcvd{YType::uint64, "csbCallStatsRTPOctetsRcvd"},
    csbcallstatsrtpoctetssent{YType::uint64, "csbCallStatsRTPOctetsSent"},
    csbcallstatsrtppktsdiscard{YType::uint64, "csbCallStatsRTPPktsDiscard"},
    csbcallstatsrtppktsrcvd{YType::uint64, "csbCallStatsRTPPktsRcvd"},
    csbcallstatsrtppktssent{YType::uint64, "csbCallStatsRTPPktsSent"},
    csbcallstatssbcname{YType::str, "csbCallStatsSbcName"},
    csbcallstatstotalflows{YType::uint32, "csbCallStatsTotalFlows"},
    csbcallstatstotalsigflows{YType::uint32, "csbCallStatsTotalSigFlows"},
    csbcallstatstotaltranscodeflows{YType::uint32, "csbCallStatsTotalTranscodeFlows"},
    csbcallstatsunclassifiedpkts{YType::uint64, "csbCallStatsUnclassifiedPkts"},
    csbcallstatsusedflows{YType::uint32, "csbCallStatsUsedFlows"},
    csbcallstatsusedsigflows{YType::uint32, "csbCallStatsUsedSigFlows"}
{
    yang_name = "csbCallStatsEntry"; yang_parent_name = "csbCallStatsTable";
}

CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::~Csbcallstatsentry()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbcallstatsactivetranscodeflows.is_set
	|| csbcallstatsavailableflows.is_set
	|| csbcallstatsavailablepktrate.is_set
	|| csbcallstatsavailabletranscodeflows.is_set
	|| csbcallstatscallshigh.is_set
	|| csbcallstatscallslow.is_set
	|| csbcallstatsnomediacount.is_set
	|| csbcallstatspeakflows.is_set
	|| csbcallstatspeaksigflows.is_set
	|| csbcallstatspeaktranscodeflows.is_set
	|| csbcallstatsrate1sec.is_set
	|| csbcallstatsrouteerrors.is_set
	|| csbcallstatsrtpoctetsdiscard.is_set
	|| csbcallstatsrtpoctetsrcvd.is_set
	|| csbcallstatsrtpoctetssent.is_set
	|| csbcallstatsrtppktsdiscard.is_set
	|| csbcallstatsrtppktsrcvd.is_set
	|| csbcallstatsrtppktssent.is_set
	|| csbcallstatssbcname.is_set
	|| csbcallstatstotalflows.is_set
	|| csbcallstatstotalsigflows.is_set
	|| csbcallstatstotaltranscodeflows.is_set
	|| csbcallstatsunclassifiedpkts.is_set
	|| csbcallstatsusedflows.is_set
	|| csbcallstatsusedsigflows.is_set;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbcallstatsactivetranscodeflows.operation)
	|| is_set(csbcallstatsavailableflows.operation)
	|| is_set(csbcallstatsavailablepktrate.operation)
	|| is_set(csbcallstatsavailabletranscodeflows.operation)
	|| is_set(csbcallstatscallshigh.operation)
	|| is_set(csbcallstatscallslow.operation)
	|| is_set(csbcallstatsnomediacount.operation)
	|| is_set(csbcallstatspeakflows.operation)
	|| is_set(csbcallstatspeaksigflows.operation)
	|| is_set(csbcallstatspeaktranscodeflows.operation)
	|| is_set(csbcallstatsrate1sec.operation)
	|| is_set(csbcallstatsrouteerrors.operation)
	|| is_set(csbcallstatsrtpoctetsdiscard.operation)
	|| is_set(csbcallstatsrtpoctetsrcvd.operation)
	|| is_set(csbcallstatsrtpoctetssent.operation)
	|| is_set(csbcallstatsrtppktsdiscard.operation)
	|| is_set(csbcallstatsrtppktsrcvd.operation)
	|| is_set(csbcallstatsrtppktssent.operation)
	|| is_set(csbcallstatssbcname.operation)
	|| is_set(csbcallstatstotalflows.operation)
	|| is_set(csbcallstatstotalsigflows.operation)
	|| is_set(csbcallstatstotaltranscodeflows.operation)
	|| is_set(csbcallstatsunclassifiedpkts.operation)
	|| is_set(csbcallstatsusedflows.operation)
	|| is_set(csbcallstatsusedsigflows.operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCallStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbCallStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbcallstatsactivetranscodeflows.is_set || is_set(csbcallstatsactivetranscodeflows.operation)) leaf_name_data.push_back(csbcallstatsactivetranscodeflows.get_name_leafdata());
    if (csbcallstatsavailableflows.is_set || is_set(csbcallstatsavailableflows.operation)) leaf_name_data.push_back(csbcallstatsavailableflows.get_name_leafdata());
    if (csbcallstatsavailablepktrate.is_set || is_set(csbcallstatsavailablepktrate.operation)) leaf_name_data.push_back(csbcallstatsavailablepktrate.get_name_leafdata());
    if (csbcallstatsavailabletranscodeflows.is_set || is_set(csbcallstatsavailabletranscodeflows.operation)) leaf_name_data.push_back(csbcallstatsavailabletranscodeflows.get_name_leafdata());
    if (csbcallstatscallshigh.is_set || is_set(csbcallstatscallshigh.operation)) leaf_name_data.push_back(csbcallstatscallshigh.get_name_leafdata());
    if (csbcallstatscallslow.is_set || is_set(csbcallstatscallslow.operation)) leaf_name_data.push_back(csbcallstatscallslow.get_name_leafdata());
    if (csbcallstatsnomediacount.is_set || is_set(csbcallstatsnomediacount.operation)) leaf_name_data.push_back(csbcallstatsnomediacount.get_name_leafdata());
    if (csbcallstatspeakflows.is_set || is_set(csbcallstatspeakflows.operation)) leaf_name_data.push_back(csbcallstatspeakflows.get_name_leafdata());
    if (csbcallstatspeaksigflows.is_set || is_set(csbcallstatspeaksigflows.operation)) leaf_name_data.push_back(csbcallstatspeaksigflows.get_name_leafdata());
    if (csbcallstatspeaktranscodeflows.is_set || is_set(csbcallstatspeaktranscodeflows.operation)) leaf_name_data.push_back(csbcallstatspeaktranscodeflows.get_name_leafdata());
    if (csbcallstatsrate1sec.is_set || is_set(csbcallstatsrate1sec.operation)) leaf_name_data.push_back(csbcallstatsrate1sec.get_name_leafdata());
    if (csbcallstatsrouteerrors.is_set || is_set(csbcallstatsrouteerrors.operation)) leaf_name_data.push_back(csbcallstatsrouteerrors.get_name_leafdata());
    if (csbcallstatsrtpoctetsdiscard.is_set || is_set(csbcallstatsrtpoctetsdiscard.operation)) leaf_name_data.push_back(csbcallstatsrtpoctetsdiscard.get_name_leafdata());
    if (csbcallstatsrtpoctetsrcvd.is_set || is_set(csbcallstatsrtpoctetsrcvd.operation)) leaf_name_data.push_back(csbcallstatsrtpoctetsrcvd.get_name_leafdata());
    if (csbcallstatsrtpoctetssent.is_set || is_set(csbcallstatsrtpoctetssent.operation)) leaf_name_data.push_back(csbcallstatsrtpoctetssent.get_name_leafdata());
    if (csbcallstatsrtppktsdiscard.is_set || is_set(csbcallstatsrtppktsdiscard.operation)) leaf_name_data.push_back(csbcallstatsrtppktsdiscard.get_name_leafdata());
    if (csbcallstatsrtppktsrcvd.is_set || is_set(csbcallstatsrtppktsrcvd.operation)) leaf_name_data.push_back(csbcallstatsrtppktsrcvd.get_name_leafdata());
    if (csbcallstatsrtppktssent.is_set || is_set(csbcallstatsrtppktssent.operation)) leaf_name_data.push_back(csbcallstatsrtppktssent.get_name_leafdata());
    if (csbcallstatssbcname.is_set || is_set(csbcallstatssbcname.operation)) leaf_name_data.push_back(csbcallstatssbcname.get_name_leafdata());
    if (csbcallstatstotalflows.is_set || is_set(csbcallstatstotalflows.operation)) leaf_name_data.push_back(csbcallstatstotalflows.get_name_leafdata());
    if (csbcallstatstotalsigflows.is_set || is_set(csbcallstatstotalsigflows.operation)) leaf_name_data.push_back(csbcallstatstotalsigflows.get_name_leafdata());
    if (csbcallstatstotaltranscodeflows.is_set || is_set(csbcallstatstotaltranscodeflows.operation)) leaf_name_data.push_back(csbcallstatstotaltranscodeflows.get_name_leafdata());
    if (csbcallstatsunclassifiedpkts.is_set || is_set(csbcallstatsunclassifiedpkts.operation)) leaf_name_data.push_back(csbcallstatsunclassifiedpkts.get_name_leafdata());
    if (csbcallstatsusedflows.is_set || is_set(csbcallstatsusedflows.operation)) leaf_name_data.push_back(csbcallstatsusedflows.get_name_leafdata());
    if (csbcallstatsusedsigflows.is_set || is_set(csbcallstatsusedsigflows.operation)) leaf_name_data.push_back(csbcallstatsusedsigflows.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbCallStatsActiveTranscodeFlows")
    {
        csbcallstatsactivetranscodeflows = value;
    }
    if(value_path == "csbCallStatsAvailableFlows")
    {
        csbcallstatsavailableflows = value;
    }
    if(value_path == "csbCallStatsAvailablePktRate")
    {
        csbcallstatsavailablepktrate = value;
    }
    if(value_path == "csbCallStatsAvailableTranscodeFlows")
    {
        csbcallstatsavailabletranscodeflows = value;
    }
    if(value_path == "csbCallStatsCallsHigh")
    {
        csbcallstatscallshigh = value;
    }
    if(value_path == "csbCallStatsCallsLow")
    {
        csbcallstatscallslow = value;
    }
    if(value_path == "csbCallStatsNoMediaCount")
    {
        csbcallstatsnomediacount = value;
    }
    if(value_path == "csbCallStatsPeakFlows")
    {
        csbcallstatspeakflows = value;
    }
    if(value_path == "csbCallStatsPeakSigFlows")
    {
        csbcallstatspeaksigflows = value;
    }
    if(value_path == "csbCallStatsPeakTranscodeFlows")
    {
        csbcallstatspeaktranscodeflows = value;
    }
    if(value_path == "csbCallStatsRate1Sec")
    {
        csbcallstatsrate1sec = value;
    }
    if(value_path == "csbCallStatsRouteErrors")
    {
        csbcallstatsrouteerrors = value;
    }
    if(value_path == "csbCallStatsRTPOctetsDiscard")
    {
        csbcallstatsrtpoctetsdiscard = value;
    }
    if(value_path == "csbCallStatsRTPOctetsRcvd")
    {
        csbcallstatsrtpoctetsrcvd = value;
    }
    if(value_path == "csbCallStatsRTPOctetsSent")
    {
        csbcallstatsrtpoctetssent = value;
    }
    if(value_path == "csbCallStatsRTPPktsDiscard")
    {
        csbcallstatsrtppktsdiscard = value;
    }
    if(value_path == "csbCallStatsRTPPktsRcvd")
    {
        csbcallstatsrtppktsrcvd = value;
    }
    if(value_path == "csbCallStatsRTPPktsSent")
    {
        csbcallstatsrtppktssent = value;
    }
    if(value_path == "csbCallStatsSbcName")
    {
        csbcallstatssbcname = value;
    }
    if(value_path == "csbCallStatsTotalFlows")
    {
        csbcallstatstotalflows = value;
    }
    if(value_path == "csbCallStatsTotalSigFlows")
    {
        csbcallstatstotalsigflows = value;
    }
    if(value_path == "csbCallStatsTotalTranscodeFlows")
    {
        csbcallstatstotaltranscodeflows = value;
    }
    if(value_path == "csbCallStatsUnclassifiedPkts")
    {
        csbcallstatsunclassifiedpkts = value;
    }
    if(value_path == "csbCallStatsUsedFlows")
    {
        csbcallstatsusedflows = value;
    }
    if(value_path == "csbCallStatsUsedSigFlows")
    {
        csbcallstatsusedsigflows = value;
    }
}

CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatstable()
{
    yang_name = "csbCurrPeriodicStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::~Csbcurrperiodicstatstable()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::has_data() const
{
    for (std::size_t index=0; index<csbcurrperiodicstatsentry_.size(); index++)
    {
        if(csbcurrperiodicstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbcurrperiodicstatsentry_.size(); index++)
    {
        if(csbcurrperiodicstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCurrPeriodicStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbCurrPeriodicStatsEntry")
    {
        for(auto const & c : csbcurrperiodicstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry>();
        c->parent = this;
        csbcurrperiodicstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbcurrperiodicstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::Csbcurrperiodicstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbcurrperiodicstatsinterval{YType::enumeration, "csbCurrPeriodicStatsInterval"},
    csbcurrperiodicipseccalls{YType::uint32, "csbCurrPeriodicIpsecCalls"},
    csbcurrperiodicstatsactivatingcalls{YType::uint32, "csbCurrPeriodicStatsActivatingCalls"},
    csbcurrperiodicstatsactivecallfailure{YType::uint32, "csbCurrPeriodicStatsActiveCallFailure"},
    csbcurrperiodicstatsactivecalls{YType::uint32, "csbCurrPeriodicStatsActiveCalls"},
    csbcurrperiodicstatsactivee2emergencycalls{YType::uint32, "csbCurrPeriodicStatsActiveE2EmergencyCalls"},
    csbcurrperiodicstatsactiveemergencycalls{YType::uint32, "csbCurrPeriodicStatsActiveEmergencyCalls"},
    csbcurrperiodicstatsactiveipv6calls{YType::uint32, "csbCurrPeriodicStatsActiveIpv6Calls"},
    csbcurrperiodicstatsaudiotranscodedcalls{YType::uint32, "csbCurrPeriodicStatsAudioTranscodedCalls"},
    csbcurrperiodicstatscallmediafailure{YType::uint32, "csbCurrPeriodicStatsCallMediaFailure"},
    csbcurrperiodicstatscallresourcefailure{YType::uint32, "csbCurrPeriodicStatsCallResourceFailure"},
    csbcurrperiodicstatscallroutingfailure{YType::uint32, "csbCurrPeriodicStatsCallRoutingFailure"},
    csbcurrperiodicstatscallsetupcacbandwidthfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACBandwidthFailure"},
    csbcurrperiodicstatscallsetupcaccalllimitfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACCallLimitFailure"},
    csbcurrperiodicstatscallsetupcacmedialimitfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACMediaLimitFailure"},
    csbcurrperiodicstatscallsetupcacmediaupdatefailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACMediaUpdateFailure"},
    csbcurrperiodicstatscallsetupcacpolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACPolicyFailure"},
    csbcurrperiodicstatscallsetupcacratelimitfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupCACRateLimitFailure"},
    csbcurrperiodicstatscallsetupnapolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupNAPolicyFailure"},
    csbcurrperiodicstatscallsetuppolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupPolicyFailure"},
    csbcurrperiodicstatscallsetuproutingpolicyfailure{YType::uint32, "csbCurrPeriodicStatsCallSetupRoutingPolicyFailure"},
    csbcurrperiodicstatscallsigfailure{YType::uint32, "csbCurrPeriodicStatsCallSigFailure"},
    csbcurrperiodicstatscongestionfailure{YType::uint32, "csbCurrPeriodicStatsCongestionFailure"},
    csbcurrperiodicstatscurrenttaps{YType::uint32, "csbCurrPeriodicStatsCurrentTaps"},
    csbcurrperiodicstatsdeactivatingcalls{YType::uint32, "csbCurrPeriodicStatsDeactivatingCalls"},
    csbcurrperiodicstatsdtmfiw2833calls{YType::uint32, "csbCurrPeriodicStatsDtmfIw2833Calls"},
    csbcurrperiodicstatsdtmfiw2833inbandcalls{YType::uint32, "csbCurrPeriodicStatsDtmfIw2833InbandCalls"},
    csbcurrperiodicstatsdtmfiwinbandcalls{YType::uint32, "csbCurrPeriodicStatsDtmfIwInbandCalls"},
    csbcurrperiodicstatsfailedcallattempts{YType::uint32, "csbCurrPeriodicStatsFailedCallAttempts"},
    csbcurrperiodicstatsfaxtranscodedcalls{YType::uint32, "csbCurrPeriodicStatsFaxTranscodedCalls"},
    csbcurrperiodicstatsimsrxactivecalls{YType::uint32, "csbCurrPeriodicStatsImsRxActiveCalls"},
    csbcurrperiodicstatsimsrxcallrenegotiationattempts{YType::uint32, "csbCurrPeriodicStatsImsRxCallRenegotiationAttempts"},
    csbcurrperiodicstatsimsrxcallrenegotiationfailures{YType::uint32, "csbCurrPeriodicStatsImsRxCallRenegotiationFailures"},
    csbcurrperiodicstatsimsrxcallsetupfaiures{YType::uint32, "csbCurrPeriodicStatsImsRxCallSetupFaiures"},
    csbcurrperiodicstatsnonsrtpcalls{YType::uint32, "csbCurrPeriodicStatsNonSrtpCalls"},
    csbcurrperiodicstatsrtpdisallowedfailures{YType::uint32, "csbCurrPeriodicStatsRtpDisallowedFailures"},
    csbcurrperiodicstatssrtpdisallowedfailures{YType::uint32, "csbCurrPeriodicStatsSrtpDisallowedFailures"},
    csbcurrperiodicstatssrtpiwcalls{YType::uint32, "csbCurrPeriodicStatsSrtpIwCalls"},
    csbcurrperiodicstatssrtpnoniwcalls{YType::uint32, "csbCurrPeriodicStatsSrtpNonIwCalls"},
    csbcurrperiodicstatstimestamp{YType::str, "csbCurrPeriodicStatsTimestamp"},
    csbcurrperiodicstatstotalcallattempts{YType::uint32, "csbCurrPeriodicStatsTotalCallAttempts"},
    csbcurrperiodicstatstotalcallupdatefailure{YType::uint32, "csbCurrPeriodicStatsTotalCallUpdateFailure"},
    csbcurrperiodicstatstotaltapsrequested{YType::uint32, "csbCurrPeriodicStatsTotalTapsRequested"},
    csbcurrperiodicstatstotaltapssucceeded{YType::uint32, "csbCurrPeriodicStatsTotalTapsSucceeded"},
    csbcurrperiodicstatstranscodedcalls{YType::uint32, "csbCurrPeriodicStatsTranscodedCalls"},
    csbcurrperiodicstatstransratedcalls{YType::uint32, "csbCurrPeriodicStatsTransratedCalls"}
{
    yang_name = "csbCurrPeriodicStatsEntry"; yang_parent_name = "csbCurrPeriodicStatsTable";
}

CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::~Csbcurrperiodicstatsentry()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbcurrperiodicstatsinterval.is_set
	|| csbcurrperiodicipseccalls.is_set
	|| csbcurrperiodicstatsactivatingcalls.is_set
	|| csbcurrperiodicstatsactivecallfailure.is_set
	|| csbcurrperiodicstatsactivecalls.is_set
	|| csbcurrperiodicstatsactivee2emergencycalls.is_set
	|| csbcurrperiodicstatsactiveemergencycalls.is_set
	|| csbcurrperiodicstatsactiveipv6calls.is_set
	|| csbcurrperiodicstatsaudiotranscodedcalls.is_set
	|| csbcurrperiodicstatscallmediafailure.is_set
	|| csbcurrperiodicstatscallresourcefailure.is_set
	|| csbcurrperiodicstatscallroutingfailure.is_set
	|| csbcurrperiodicstatscallsetupcacbandwidthfailure.is_set
	|| csbcurrperiodicstatscallsetupcaccalllimitfailure.is_set
	|| csbcurrperiodicstatscallsetupcacmedialimitfailure.is_set
	|| csbcurrperiodicstatscallsetupcacmediaupdatefailure.is_set
	|| csbcurrperiodicstatscallsetupcacpolicyfailure.is_set
	|| csbcurrperiodicstatscallsetupcacratelimitfailure.is_set
	|| csbcurrperiodicstatscallsetupnapolicyfailure.is_set
	|| csbcurrperiodicstatscallsetuppolicyfailure.is_set
	|| csbcurrperiodicstatscallsetuproutingpolicyfailure.is_set
	|| csbcurrperiodicstatscallsigfailure.is_set
	|| csbcurrperiodicstatscongestionfailure.is_set
	|| csbcurrperiodicstatscurrenttaps.is_set
	|| csbcurrperiodicstatsdeactivatingcalls.is_set
	|| csbcurrperiodicstatsdtmfiw2833calls.is_set
	|| csbcurrperiodicstatsdtmfiw2833inbandcalls.is_set
	|| csbcurrperiodicstatsdtmfiwinbandcalls.is_set
	|| csbcurrperiodicstatsfailedcallattempts.is_set
	|| csbcurrperiodicstatsfaxtranscodedcalls.is_set
	|| csbcurrperiodicstatsimsrxactivecalls.is_set
	|| csbcurrperiodicstatsimsrxcallrenegotiationattempts.is_set
	|| csbcurrperiodicstatsimsrxcallrenegotiationfailures.is_set
	|| csbcurrperiodicstatsimsrxcallsetupfaiures.is_set
	|| csbcurrperiodicstatsnonsrtpcalls.is_set
	|| csbcurrperiodicstatsrtpdisallowedfailures.is_set
	|| csbcurrperiodicstatssrtpdisallowedfailures.is_set
	|| csbcurrperiodicstatssrtpiwcalls.is_set
	|| csbcurrperiodicstatssrtpnoniwcalls.is_set
	|| csbcurrperiodicstatstimestamp.is_set
	|| csbcurrperiodicstatstotalcallattempts.is_set
	|| csbcurrperiodicstatstotalcallupdatefailure.is_set
	|| csbcurrperiodicstatstotaltapsrequested.is_set
	|| csbcurrperiodicstatstotaltapssucceeded.is_set
	|| csbcurrperiodicstatstranscodedcalls.is_set
	|| csbcurrperiodicstatstransratedcalls.is_set;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbcurrperiodicstatsinterval.operation)
	|| is_set(csbcurrperiodicipseccalls.operation)
	|| is_set(csbcurrperiodicstatsactivatingcalls.operation)
	|| is_set(csbcurrperiodicstatsactivecallfailure.operation)
	|| is_set(csbcurrperiodicstatsactivecalls.operation)
	|| is_set(csbcurrperiodicstatsactivee2emergencycalls.operation)
	|| is_set(csbcurrperiodicstatsactiveemergencycalls.operation)
	|| is_set(csbcurrperiodicstatsactiveipv6calls.operation)
	|| is_set(csbcurrperiodicstatsaudiotranscodedcalls.operation)
	|| is_set(csbcurrperiodicstatscallmediafailure.operation)
	|| is_set(csbcurrperiodicstatscallresourcefailure.operation)
	|| is_set(csbcurrperiodicstatscallroutingfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetupcacbandwidthfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetupcaccalllimitfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetupcacmedialimitfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetupcacmediaupdatefailure.operation)
	|| is_set(csbcurrperiodicstatscallsetupcacpolicyfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetupcacratelimitfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetupnapolicyfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetuppolicyfailure.operation)
	|| is_set(csbcurrperiodicstatscallsetuproutingpolicyfailure.operation)
	|| is_set(csbcurrperiodicstatscallsigfailure.operation)
	|| is_set(csbcurrperiodicstatscongestionfailure.operation)
	|| is_set(csbcurrperiodicstatscurrenttaps.operation)
	|| is_set(csbcurrperiodicstatsdeactivatingcalls.operation)
	|| is_set(csbcurrperiodicstatsdtmfiw2833calls.operation)
	|| is_set(csbcurrperiodicstatsdtmfiw2833inbandcalls.operation)
	|| is_set(csbcurrperiodicstatsdtmfiwinbandcalls.operation)
	|| is_set(csbcurrperiodicstatsfailedcallattempts.operation)
	|| is_set(csbcurrperiodicstatsfaxtranscodedcalls.operation)
	|| is_set(csbcurrperiodicstatsimsrxactivecalls.operation)
	|| is_set(csbcurrperiodicstatsimsrxcallrenegotiationattempts.operation)
	|| is_set(csbcurrperiodicstatsimsrxcallrenegotiationfailures.operation)
	|| is_set(csbcurrperiodicstatsimsrxcallsetupfaiures.operation)
	|| is_set(csbcurrperiodicstatsnonsrtpcalls.operation)
	|| is_set(csbcurrperiodicstatsrtpdisallowedfailures.operation)
	|| is_set(csbcurrperiodicstatssrtpdisallowedfailures.operation)
	|| is_set(csbcurrperiodicstatssrtpiwcalls.operation)
	|| is_set(csbcurrperiodicstatssrtpnoniwcalls.operation)
	|| is_set(csbcurrperiodicstatstimestamp.operation)
	|| is_set(csbcurrperiodicstatstotalcallattempts.operation)
	|| is_set(csbcurrperiodicstatstotalcallupdatefailure.operation)
	|| is_set(csbcurrperiodicstatstotaltapsrequested.operation)
	|| is_set(csbcurrperiodicstatstotaltapssucceeded.operation)
	|| is_set(csbcurrperiodicstatstranscodedcalls.operation)
	|| is_set(csbcurrperiodicstatstransratedcalls.operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbCurrPeriodicStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbCurrPeriodicStatsInterval='" <<csbcurrperiodicstatsinterval <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbCurrPeriodicStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbcurrperiodicstatsinterval.is_set || is_set(csbcurrperiodicstatsinterval.operation)) leaf_name_data.push_back(csbcurrperiodicstatsinterval.get_name_leafdata());
    if (csbcurrperiodicipseccalls.is_set || is_set(csbcurrperiodicipseccalls.operation)) leaf_name_data.push_back(csbcurrperiodicipseccalls.get_name_leafdata());
    if (csbcurrperiodicstatsactivatingcalls.is_set || is_set(csbcurrperiodicstatsactivatingcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsactivatingcalls.get_name_leafdata());
    if (csbcurrperiodicstatsactivecallfailure.is_set || is_set(csbcurrperiodicstatsactivecallfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatsactivecallfailure.get_name_leafdata());
    if (csbcurrperiodicstatsactivecalls.is_set || is_set(csbcurrperiodicstatsactivecalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsactivecalls.get_name_leafdata());
    if (csbcurrperiodicstatsactivee2emergencycalls.is_set || is_set(csbcurrperiodicstatsactivee2emergencycalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsactivee2emergencycalls.get_name_leafdata());
    if (csbcurrperiodicstatsactiveemergencycalls.is_set || is_set(csbcurrperiodicstatsactiveemergencycalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsactiveemergencycalls.get_name_leafdata());
    if (csbcurrperiodicstatsactiveipv6calls.is_set || is_set(csbcurrperiodicstatsactiveipv6calls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsactiveipv6calls.get_name_leafdata());
    if (csbcurrperiodicstatsaudiotranscodedcalls.is_set || is_set(csbcurrperiodicstatsaudiotranscodedcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsaudiotranscodedcalls.get_name_leafdata());
    if (csbcurrperiodicstatscallmediafailure.is_set || is_set(csbcurrperiodicstatscallmediafailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallmediafailure.get_name_leafdata());
    if (csbcurrperiodicstatscallresourcefailure.is_set || is_set(csbcurrperiodicstatscallresourcefailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallresourcefailure.get_name_leafdata());
    if (csbcurrperiodicstatscallroutingfailure.is_set || is_set(csbcurrperiodicstatscallroutingfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallroutingfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacbandwidthfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacbandwidthfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacbandwidthfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcaccalllimitfailure.is_set || is_set(csbcurrperiodicstatscallsetupcaccalllimitfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcaccalllimitfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacmedialimitfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacmedialimitfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacmedialimitfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacmediaupdatefailure.is_set || is_set(csbcurrperiodicstatscallsetupcacmediaupdatefailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacmediaupdatefailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacpolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacpolicyfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacpolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupcacratelimitfailure.is_set || is_set(csbcurrperiodicstatscallsetupcacratelimitfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupcacratelimitfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetupnapolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetupnapolicyfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetupnapolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetuppolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetuppolicyfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetuppolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsetuproutingpolicyfailure.is_set || is_set(csbcurrperiodicstatscallsetuproutingpolicyfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsetuproutingpolicyfailure.get_name_leafdata());
    if (csbcurrperiodicstatscallsigfailure.is_set || is_set(csbcurrperiodicstatscallsigfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscallsigfailure.get_name_leafdata());
    if (csbcurrperiodicstatscongestionfailure.is_set || is_set(csbcurrperiodicstatscongestionfailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatscongestionfailure.get_name_leafdata());
    if (csbcurrperiodicstatscurrenttaps.is_set || is_set(csbcurrperiodicstatscurrenttaps.operation)) leaf_name_data.push_back(csbcurrperiodicstatscurrenttaps.get_name_leafdata());
    if (csbcurrperiodicstatsdeactivatingcalls.is_set || is_set(csbcurrperiodicstatsdeactivatingcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsdeactivatingcalls.get_name_leafdata());
    if (csbcurrperiodicstatsdtmfiw2833calls.is_set || is_set(csbcurrperiodicstatsdtmfiw2833calls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsdtmfiw2833calls.get_name_leafdata());
    if (csbcurrperiodicstatsdtmfiw2833inbandcalls.is_set || is_set(csbcurrperiodicstatsdtmfiw2833inbandcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsdtmfiw2833inbandcalls.get_name_leafdata());
    if (csbcurrperiodicstatsdtmfiwinbandcalls.is_set || is_set(csbcurrperiodicstatsdtmfiwinbandcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsdtmfiwinbandcalls.get_name_leafdata());
    if (csbcurrperiodicstatsfailedcallattempts.is_set || is_set(csbcurrperiodicstatsfailedcallattempts.operation)) leaf_name_data.push_back(csbcurrperiodicstatsfailedcallattempts.get_name_leafdata());
    if (csbcurrperiodicstatsfaxtranscodedcalls.is_set || is_set(csbcurrperiodicstatsfaxtranscodedcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsfaxtranscodedcalls.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxactivecalls.is_set || is_set(csbcurrperiodicstatsimsrxactivecalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxactivecalls.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxcallrenegotiationattempts.is_set || is_set(csbcurrperiodicstatsimsrxcallrenegotiationattempts.operation)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxcallrenegotiationattempts.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxcallrenegotiationfailures.is_set || is_set(csbcurrperiodicstatsimsrxcallrenegotiationfailures.operation)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxcallrenegotiationfailures.get_name_leafdata());
    if (csbcurrperiodicstatsimsrxcallsetupfaiures.is_set || is_set(csbcurrperiodicstatsimsrxcallsetupfaiures.operation)) leaf_name_data.push_back(csbcurrperiodicstatsimsrxcallsetupfaiures.get_name_leafdata());
    if (csbcurrperiodicstatsnonsrtpcalls.is_set || is_set(csbcurrperiodicstatsnonsrtpcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatsnonsrtpcalls.get_name_leafdata());
    if (csbcurrperiodicstatsrtpdisallowedfailures.is_set || is_set(csbcurrperiodicstatsrtpdisallowedfailures.operation)) leaf_name_data.push_back(csbcurrperiodicstatsrtpdisallowedfailures.get_name_leafdata());
    if (csbcurrperiodicstatssrtpdisallowedfailures.is_set || is_set(csbcurrperiodicstatssrtpdisallowedfailures.operation)) leaf_name_data.push_back(csbcurrperiodicstatssrtpdisallowedfailures.get_name_leafdata());
    if (csbcurrperiodicstatssrtpiwcalls.is_set || is_set(csbcurrperiodicstatssrtpiwcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatssrtpiwcalls.get_name_leafdata());
    if (csbcurrperiodicstatssrtpnoniwcalls.is_set || is_set(csbcurrperiodicstatssrtpnoniwcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatssrtpnoniwcalls.get_name_leafdata());
    if (csbcurrperiodicstatstimestamp.is_set || is_set(csbcurrperiodicstatstimestamp.operation)) leaf_name_data.push_back(csbcurrperiodicstatstimestamp.get_name_leafdata());
    if (csbcurrperiodicstatstotalcallattempts.is_set || is_set(csbcurrperiodicstatstotalcallattempts.operation)) leaf_name_data.push_back(csbcurrperiodicstatstotalcallattempts.get_name_leafdata());
    if (csbcurrperiodicstatstotalcallupdatefailure.is_set || is_set(csbcurrperiodicstatstotalcallupdatefailure.operation)) leaf_name_data.push_back(csbcurrperiodicstatstotalcallupdatefailure.get_name_leafdata());
    if (csbcurrperiodicstatstotaltapsrequested.is_set || is_set(csbcurrperiodicstatstotaltapsrequested.operation)) leaf_name_data.push_back(csbcurrperiodicstatstotaltapsrequested.get_name_leafdata());
    if (csbcurrperiodicstatstotaltapssucceeded.is_set || is_set(csbcurrperiodicstatstotaltapssucceeded.operation)) leaf_name_data.push_back(csbcurrperiodicstatstotaltapssucceeded.get_name_leafdata());
    if (csbcurrperiodicstatstranscodedcalls.is_set || is_set(csbcurrperiodicstatstranscodedcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatstranscodedcalls.get_name_leafdata());
    if (csbcurrperiodicstatstransratedcalls.is_set || is_set(csbcurrperiodicstatstransratedcalls.operation)) leaf_name_data.push_back(csbcurrperiodicstatstransratedcalls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbCurrPeriodicStatsInterval")
    {
        csbcurrperiodicstatsinterval = value;
    }
    if(value_path == "csbCurrPeriodicIpsecCalls")
    {
        csbcurrperiodicipseccalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsActivatingCalls")
    {
        csbcurrperiodicstatsactivatingcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsActiveCallFailure")
    {
        csbcurrperiodicstatsactivecallfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsActiveCalls")
    {
        csbcurrperiodicstatsactivecalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsActiveE2EmergencyCalls")
    {
        csbcurrperiodicstatsactivee2emergencycalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsActiveEmergencyCalls")
    {
        csbcurrperiodicstatsactiveemergencycalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsActiveIpv6Calls")
    {
        csbcurrperiodicstatsactiveipv6calls = value;
    }
    if(value_path == "csbCurrPeriodicStatsAudioTranscodedCalls")
    {
        csbcurrperiodicstatsaudiotranscodedcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallMediaFailure")
    {
        csbcurrperiodicstatscallmediafailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallResourceFailure")
    {
        csbcurrperiodicstatscallresourcefailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallRoutingFailure")
    {
        csbcurrperiodicstatscallroutingfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACBandwidthFailure")
    {
        csbcurrperiodicstatscallsetupcacbandwidthfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACCallLimitFailure")
    {
        csbcurrperiodicstatscallsetupcaccalllimitfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACMediaLimitFailure")
    {
        csbcurrperiodicstatscallsetupcacmedialimitfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACMediaUpdateFailure")
    {
        csbcurrperiodicstatscallsetupcacmediaupdatefailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACPolicyFailure")
    {
        csbcurrperiodicstatscallsetupcacpolicyfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupCACRateLimitFailure")
    {
        csbcurrperiodicstatscallsetupcacratelimitfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupNAPolicyFailure")
    {
        csbcurrperiodicstatscallsetupnapolicyfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupPolicyFailure")
    {
        csbcurrperiodicstatscallsetuppolicyfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSetupRoutingPolicyFailure")
    {
        csbcurrperiodicstatscallsetuproutingpolicyfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCallSigFailure")
    {
        csbcurrperiodicstatscallsigfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCongestionFailure")
    {
        csbcurrperiodicstatscongestionfailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsCurrentTaps")
    {
        csbcurrperiodicstatscurrenttaps = value;
    }
    if(value_path == "csbCurrPeriodicStatsDeactivatingCalls")
    {
        csbcurrperiodicstatsdeactivatingcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIw2833Calls")
    {
        csbcurrperiodicstatsdtmfiw2833calls = value;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIw2833InbandCalls")
    {
        csbcurrperiodicstatsdtmfiw2833inbandcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsDtmfIwInbandCalls")
    {
        csbcurrperiodicstatsdtmfiwinbandcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsFailedCallAttempts")
    {
        csbcurrperiodicstatsfailedcallattempts = value;
    }
    if(value_path == "csbCurrPeriodicStatsFaxTranscodedCalls")
    {
        csbcurrperiodicstatsfaxtranscodedcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxActiveCalls")
    {
        csbcurrperiodicstatsimsrxactivecalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallRenegotiationAttempts")
    {
        csbcurrperiodicstatsimsrxcallrenegotiationattempts = value;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallRenegotiationFailures")
    {
        csbcurrperiodicstatsimsrxcallrenegotiationfailures = value;
    }
    if(value_path == "csbCurrPeriodicStatsImsRxCallSetupFaiures")
    {
        csbcurrperiodicstatsimsrxcallsetupfaiures = value;
    }
    if(value_path == "csbCurrPeriodicStatsNonSrtpCalls")
    {
        csbcurrperiodicstatsnonsrtpcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsRtpDisallowedFailures")
    {
        csbcurrperiodicstatsrtpdisallowedfailures = value;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpDisallowedFailures")
    {
        csbcurrperiodicstatssrtpdisallowedfailures = value;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpIwCalls")
    {
        csbcurrperiodicstatssrtpiwcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsSrtpNonIwCalls")
    {
        csbcurrperiodicstatssrtpnoniwcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsTimestamp")
    {
        csbcurrperiodicstatstimestamp = value;
    }
    if(value_path == "csbCurrPeriodicStatsTotalCallAttempts")
    {
        csbcurrperiodicstatstotalcallattempts = value;
    }
    if(value_path == "csbCurrPeriodicStatsTotalCallUpdateFailure")
    {
        csbcurrperiodicstatstotalcallupdatefailure = value;
    }
    if(value_path == "csbCurrPeriodicStatsTotalTapsRequested")
    {
        csbcurrperiodicstatstotaltapsrequested = value;
    }
    if(value_path == "csbCurrPeriodicStatsTotalTapsSucceeded")
    {
        csbcurrperiodicstatstotaltapssucceeded = value;
    }
    if(value_path == "csbCurrPeriodicStatsTranscodedCalls")
    {
        csbcurrperiodicstatstranscodedcalls = value;
    }
    if(value_path == "csbCurrPeriodicStatsTransratedCalls")
    {
        csbcurrperiodicstatstransratedcalls = value;
    }
}

CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatstable()
{
    yang_name = "csbHistoryStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::~Csbhistorystatstable()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::has_data() const
{
    for (std::size_t index=0; index<csbhistorystatsentry_.size(); index++)
    {
        if(csbhistorystatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::has_operation() const
{
    for (std::size_t index=0; index<csbhistorystatsentry_.size(); index++)
    {
        if(csbhistorystatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbHistoryStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbHistoryStatsEntry")
    {
        for(auto const & c : csbhistorystatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry>();
        c->parent = this;
        csbhistorystatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbhistorystatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::Csbhistorystatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbhistorystatsinterval{YType::enumeration, "csbHistoryStatsInterval"},
    csbhistorystatselements{YType::uint32, "csbHistoryStatsElements"},
    csbhistorystatsactivecallfailure{YType::uint32, "csbHistoryStatsActiveCallFailure"},
    csbhistorystatsactivecalls{YType::uint32, "csbHistoryStatsActiveCalls"},
    csbhistorystatsactivee2emergencycalls{YType::uint32, "csbHistoryStatsActiveE2EmergencyCalls"},
    csbhistorystatsactiveemergencycalls{YType::uint32, "csbHistoryStatsActiveEmergencyCalls"},
    csbhistorystatsactiveipv6calls{YType::uint32, "csbHistoryStatsActiveIpv6Calls"},
    csbhistorystatsaudiotranscodedcalls{YType::uint32, "csbHistoryStatsAudioTranscodedCalls"},
    csbhistorystatscallmediafailure{YType::uint32, "csbHistoryStatsCallMediaFailure"},
    csbhistorystatscallresourcefailure{YType::uint32, "csbHistoryStatsCallResourceFailure"},
    csbhistorystatscallroutingfailure{YType::uint32, "csbHistoryStatsCallRoutingFailure"},
    csbhistorystatscallsetupcacbandwidthfailure{YType::uint32, "csbHistoryStatsCallSetupCACBandwidthFailure"},
    csbhistorystatscallsetupcaccalllimitfailure{YType::uint32, "csbHistoryStatsCallSetupCACCallLimitFailure"},
    csbhistorystatscallsetupcacmedialimitfailure{YType::uint32, "csbHistoryStatsCallSetupCACMediaLimitFailure"},
    csbhistorystatscallsetupcacmediaupdatefailure{YType::uint32, "csbHistoryStatsCallSetupCACMediaUpdateFailure"},
    csbhistorystatscallsetupcacpolicyfailure{YType::uint32, "csbHistoryStatsCallSetupCACPolicyFailure"},
    csbhistorystatscallsetupcacratelimitfailure{YType::uint32, "csbHistoryStatsCallSetupCACRateLimitFailure"},
    csbhistorystatscallsetupnapolicyfailure{YType::uint32, "csbHistoryStatsCallSetupNAPolicyFailure"},
    csbhistorystatscallsetuppolicyfailure{YType::uint32, "csbHistoryStatsCallSetupPolicyFailure"},
    csbhistorystatscallsetuproutingpolicyfailure{YType::uint32, "csbHistoryStatsCallSetupRoutingPolicyFailure"},
    csbhistorystatscongestionfailure{YType::uint32, "csbHistoryStatsCongestionFailure"},
    csbhistorystatscurrenttaps{YType::uint32, "csbHistoryStatsCurrentTaps"},
    csbhistorystatsdtmfiw2833calls{YType::uint32, "csbHistoryStatsDtmfIw2833Calls"},
    csbhistorystatsdtmfiw2833inbandcalls{YType::uint32, "csbHistoryStatsDtmfIw2833InbandCalls"},
    csbhistorystatsdtmfiwinbandcalls{YType::uint32, "csbHistoryStatsDtmfIwInbandCalls"},
    csbhistorystatsfailedcallattempts{YType::uint32, "csbHistoryStatsFailedCallAttempts"},
    csbhistorystatsfailsigfailure{YType::uint32, "csbHistoryStatsFailSigFailure"},
    csbhistorystatsfaxtranscodedcalls{YType::uint32, "csbHistoryStatsFaxTranscodedCalls"},
    csbhistorystatsimsrxactivecalls{YType::uint32, "csbHistoryStatsImsRxActiveCalls"},
    csbhistorystatsimsrxcallrenegotiationattempts{YType::uint32, "csbHistoryStatsImsRxCallRenegotiationAttempts"},
    csbhistorystatsimsrxcallrenegotiationfailures{YType::uint32, "csbHistoryStatsImsRxCallRenegotiationFailures"},
    csbhistorystatsimsrxcallsetupfailures{YType::uint32, "csbHistoryStatsImsRxCallSetupFailures"},
    csbhistorystatsipseccalls{YType::uint32, "csbHistoryStatsIpsecCalls"},
    csbhistorystatsnonsrtpcalls{YType::uint32, "csbHistoryStatsNonSrtpCalls"},
    csbhistorystatsrtpdisallowedfailures{YType::uint32, "csbHistoryStatsRtpDisallowedFailures"},
    csbhistorystatssrtpdisallowedfailures{YType::uint32, "csbHistoryStatsSrtpDisallowedFailures"},
    csbhistorystatssrtpiwcalls{YType::uint32, "csbHistoryStatsSrtpIwCalls"},
    csbhistorystatssrtpnoniwcalls{YType::uint32, "csbHistoryStatsSrtpNonIwCalls"},
    csbhistorystatstimestamp{YType::str, "csbHistoryStatsTimestamp"},
    csbhistorystatstotalcallattempts{YType::uint32, "csbHistoryStatsTotalCallAttempts"},
    csbhistorystatstotalcallupdatefailure{YType::uint32, "csbHistoryStatsTotalCallUpdateFailure"},
    csbhistorystatstotaltapsrequested{YType::uint32, "csbHistoryStatsTotalTapsRequested"},
    csbhistorystatstotaltapssucceeded{YType::uint32, "csbHistoryStatsTotalTapsSucceeded"},
    csbhistroystatstranscodedcalls{YType::uint32, "csbHistroyStatsTranscodedCalls"},
    csbhistroystatstransratedcalls{YType::uint32, "csbHistroyStatsTransratedCalls"}
{
    yang_name = "csbHistoryStatsEntry"; yang_parent_name = "csbHistoryStatsTable";
}

CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::~Csbhistorystatsentry()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbhistorystatsinterval.is_set
	|| csbhistorystatselements.is_set
	|| csbhistorystatsactivecallfailure.is_set
	|| csbhistorystatsactivecalls.is_set
	|| csbhistorystatsactivee2emergencycalls.is_set
	|| csbhistorystatsactiveemergencycalls.is_set
	|| csbhistorystatsactiveipv6calls.is_set
	|| csbhistorystatsaudiotranscodedcalls.is_set
	|| csbhistorystatscallmediafailure.is_set
	|| csbhistorystatscallresourcefailure.is_set
	|| csbhistorystatscallroutingfailure.is_set
	|| csbhistorystatscallsetupcacbandwidthfailure.is_set
	|| csbhistorystatscallsetupcaccalllimitfailure.is_set
	|| csbhistorystatscallsetupcacmedialimitfailure.is_set
	|| csbhistorystatscallsetupcacmediaupdatefailure.is_set
	|| csbhistorystatscallsetupcacpolicyfailure.is_set
	|| csbhistorystatscallsetupcacratelimitfailure.is_set
	|| csbhistorystatscallsetupnapolicyfailure.is_set
	|| csbhistorystatscallsetuppolicyfailure.is_set
	|| csbhistorystatscallsetuproutingpolicyfailure.is_set
	|| csbhistorystatscongestionfailure.is_set
	|| csbhistorystatscurrenttaps.is_set
	|| csbhistorystatsdtmfiw2833calls.is_set
	|| csbhistorystatsdtmfiw2833inbandcalls.is_set
	|| csbhistorystatsdtmfiwinbandcalls.is_set
	|| csbhistorystatsfailedcallattempts.is_set
	|| csbhistorystatsfailsigfailure.is_set
	|| csbhistorystatsfaxtranscodedcalls.is_set
	|| csbhistorystatsimsrxactivecalls.is_set
	|| csbhistorystatsimsrxcallrenegotiationattempts.is_set
	|| csbhistorystatsimsrxcallrenegotiationfailures.is_set
	|| csbhistorystatsimsrxcallsetupfailures.is_set
	|| csbhistorystatsipseccalls.is_set
	|| csbhistorystatsnonsrtpcalls.is_set
	|| csbhistorystatsrtpdisallowedfailures.is_set
	|| csbhistorystatssrtpdisallowedfailures.is_set
	|| csbhistorystatssrtpiwcalls.is_set
	|| csbhistorystatssrtpnoniwcalls.is_set
	|| csbhistorystatstimestamp.is_set
	|| csbhistorystatstotalcallattempts.is_set
	|| csbhistorystatstotalcallupdatefailure.is_set
	|| csbhistorystatstotaltapsrequested.is_set
	|| csbhistorystatstotaltapssucceeded.is_set
	|| csbhistroystatstranscodedcalls.is_set
	|| csbhistroystatstransratedcalls.is_set;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbhistorystatsinterval.operation)
	|| is_set(csbhistorystatselements.operation)
	|| is_set(csbhistorystatsactivecallfailure.operation)
	|| is_set(csbhistorystatsactivecalls.operation)
	|| is_set(csbhistorystatsactivee2emergencycalls.operation)
	|| is_set(csbhistorystatsactiveemergencycalls.operation)
	|| is_set(csbhistorystatsactiveipv6calls.operation)
	|| is_set(csbhistorystatsaudiotranscodedcalls.operation)
	|| is_set(csbhistorystatscallmediafailure.operation)
	|| is_set(csbhistorystatscallresourcefailure.operation)
	|| is_set(csbhistorystatscallroutingfailure.operation)
	|| is_set(csbhistorystatscallsetupcacbandwidthfailure.operation)
	|| is_set(csbhistorystatscallsetupcaccalllimitfailure.operation)
	|| is_set(csbhistorystatscallsetupcacmedialimitfailure.operation)
	|| is_set(csbhistorystatscallsetupcacmediaupdatefailure.operation)
	|| is_set(csbhistorystatscallsetupcacpolicyfailure.operation)
	|| is_set(csbhistorystatscallsetupcacratelimitfailure.operation)
	|| is_set(csbhistorystatscallsetupnapolicyfailure.operation)
	|| is_set(csbhistorystatscallsetuppolicyfailure.operation)
	|| is_set(csbhistorystatscallsetuproutingpolicyfailure.operation)
	|| is_set(csbhistorystatscongestionfailure.operation)
	|| is_set(csbhistorystatscurrenttaps.operation)
	|| is_set(csbhistorystatsdtmfiw2833calls.operation)
	|| is_set(csbhistorystatsdtmfiw2833inbandcalls.operation)
	|| is_set(csbhistorystatsdtmfiwinbandcalls.operation)
	|| is_set(csbhistorystatsfailedcallattempts.operation)
	|| is_set(csbhistorystatsfailsigfailure.operation)
	|| is_set(csbhistorystatsfaxtranscodedcalls.operation)
	|| is_set(csbhistorystatsimsrxactivecalls.operation)
	|| is_set(csbhistorystatsimsrxcallrenegotiationattempts.operation)
	|| is_set(csbhistorystatsimsrxcallrenegotiationfailures.operation)
	|| is_set(csbhistorystatsimsrxcallsetupfailures.operation)
	|| is_set(csbhistorystatsipseccalls.operation)
	|| is_set(csbhistorystatsnonsrtpcalls.operation)
	|| is_set(csbhistorystatsrtpdisallowedfailures.operation)
	|| is_set(csbhistorystatssrtpdisallowedfailures.operation)
	|| is_set(csbhistorystatssrtpiwcalls.operation)
	|| is_set(csbhistorystatssrtpnoniwcalls.operation)
	|| is_set(csbhistorystatstimestamp.operation)
	|| is_set(csbhistorystatstotalcallattempts.operation)
	|| is_set(csbhistorystatstotalcallupdatefailure.operation)
	|| is_set(csbhistorystatstotaltapsrequested.operation)
	|| is_set(csbhistorystatstotaltapssucceeded.operation)
	|| is_set(csbhistroystatstranscodedcalls.operation)
	|| is_set(csbhistroystatstransratedcalls.operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbHistoryStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbHistoryStatsInterval='" <<csbhistorystatsinterval <<"']" <<"[csbHistoryStatsElements='" <<csbhistorystatselements <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbHistoryStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbhistorystatsinterval.is_set || is_set(csbhistorystatsinterval.operation)) leaf_name_data.push_back(csbhistorystatsinterval.get_name_leafdata());
    if (csbhistorystatselements.is_set || is_set(csbhistorystatselements.operation)) leaf_name_data.push_back(csbhistorystatselements.get_name_leafdata());
    if (csbhistorystatsactivecallfailure.is_set || is_set(csbhistorystatsactivecallfailure.operation)) leaf_name_data.push_back(csbhistorystatsactivecallfailure.get_name_leafdata());
    if (csbhistorystatsactivecalls.is_set || is_set(csbhistorystatsactivecalls.operation)) leaf_name_data.push_back(csbhistorystatsactivecalls.get_name_leafdata());
    if (csbhistorystatsactivee2emergencycalls.is_set || is_set(csbhistorystatsactivee2emergencycalls.operation)) leaf_name_data.push_back(csbhistorystatsactivee2emergencycalls.get_name_leafdata());
    if (csbhistorystatsactiveemergencycalls.is_set || is_set(csbhistorystatsactiveemergencycalls.operation)) leaf_name_data.push_back(csbhistorystatsactiveemergencycalls.get_name_leafdata());
    if (csbhistorystatsactiveipv6calls.is_set || is_set(csbhistorystatsactiveipv6calls.operation)) leaf_name_data.push_back(csbhistorystatsactiveipv6calls.get_name_leafdata());
    if (csbhistorystatsaudiotranscodedcalls.is_set || is_set(csbhistorystatsaudiotranscodedcalls.operation)) leaf_name_data.push_back(csbhistorystatsaudiotranscodedcalls.get_name_leafdata());
    if (csbhistorystatscallmediafailure.is_set || is_set(csbhistorystatscallmediafailure.operation)) leaf_name_data.push_back(csbhistorystatscallmediafailure.get_name_leafdata());
    if (csbhistorystatscallresourcefailure.is_set || is_set(csbhistorystatscallresourcefailure.operation)) leaf_name_data.push_back(csbhistorystatscallresourcefailure.get_name_leafdata());
    if (csbhistorystatscallroutingfailure.is_set || is_set(csbhistorystatscallroutingfailure.operation)) leaf_name_data.push_back(csbhistorystatscallroutingfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacbandwidthfailure.is_set || is_set(csbhistorystatscallsetupcacbandwidthfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetupcacbandwidthfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcaccalllimitfailure.is_set || is_set(csbhistorystatscallsetupcaccalllimitfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetupcaccalllimitfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacmedialimitfailure.is_set || is_set(csbhistorystatscallsetupcacmedialimitfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetupcacmedialimitfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacmediaupdatefailure.is_set || is_set(csbhistorystatscallsetupcacmediaupdatefailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetupcacmediaupdatefailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacpolicyfailure.is_set || is_set(csbhistorystatscallsetupcacpolicyfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetupcacpolicyfailure.get_name_leafdata());
    if (csbhistorystatscallsetupcacratelimitfailure.is_set || is_set(csbhistorystatscallsetupcacratelimitfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetupcacratelimitfailure.get_name_leafdata());
    if (csbhistorystatscallsetupnapolicyfailure.is_set || is_set(csbhistorystatscallsetupnapolicyfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetupnapolicyfailure.get_name_leafdata());
    if (csbhistorystatscallsetuppolicyfailure.is_set || is_set(csbhistorystatscallsetuppolicyfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetuppolicyfailure.get_name_leafdata());
    if (csbhistorystatscallsetuproutingpolicyfailure.is_set || is_set(csbhistorystatscallsetuproutingpolicyfailure.operation)) leaf_name_data.push_back(csbhistorystatscallsetuproutingpolicyfailure.get_name_leafdata());
    if (csbhistorystatscongestionfailure.is_set || is_set(csbhistorystatscongestionfailure.operation)) leaf_name_data.push_back(csbhistorystatscongestionfailure.get_name_leafdata());
    if (csbhistorystatscurrenttaps.is_set || is_set(csbhistorystatscurrenttaps.operation)) leaf_name_data.push_back(csbhistorystatscurrenttaps.get_name_leafdata());
    if (csbhistorystatsdtmfiw2833calls.is_set || is_set(csbhistorystatsdtmfiw2833calls.operation)) leaf_name_data.push_back(csbhistorystatsdtmfiw2833calls.get_name_leafdata());
    if (csbhistorystatsdtmfiw2833inbandcalls.is_set || is_set(csbhistorystatsdtmfiw2833inbandcalls.operation)) leaf_name_data.push_back(csbhistorystatsdtmfiw2833inbandcalls.get_name_leafdata());
    if (csbhistorystatsdtmfiwinbandcalls.is_set || is_set(csbhistorystatsdtmfiwinbandcalls.operation)) leaf_name_data.push_back(csbhistorystatsdtmfiwinbandcalls.get_name_leafdata());
    if (csbhistorystatsfailedcallattempts.is_set || is_set(csbhistorystatsfailedcallattempts.operation)) leaf_name_data.push_back(csbhistorystatsfailedcallattempts.get_name_leafdata());
    if (csbhistorystatsfailsigfailure.is_set || is_set(csbhistorystatsfailsigfailure.operation)) leaf_name_data.push_back(csbhistorystatsfailsigfailure.get_name_leafdata());
    if (csbhistorystatsfaxtranscodedcalls.is_set || is_set(csbhistorystatsfaxtranscodedcalls.operation)) leaf_name_data.push_back(csbhistorystatsfaxtranscodedcalls.get_name_leafdata());
    if (csbhistorystatsimsrxactivecalls.is_set || is_set(csbhistorystatsimsrxactivecalls.operation)) leaf_name_data.push_back(csbhistorystatsimsrxactivecalls.get_name_leafdata());
    if (csbhistorystatsimsrxcallrenegotiationattempts.is_set || is_set(csbhistorystatsimsrxcallrenegotiationattempts.operation)) leaf_name_data.push_back(csbhistorystatsimsrxcallrenegotiationattempts.get_name_leafdata());
    if (csbhistorystatsimsrxcallrenegotiationfailures.is_set || is_set(csbhistorystatsimsrxcallrenegotiationfailures.operation)) leaf_name_data.push_back(csbhistorystatsimsrxcallrenegotiationfailures.get_name_leafdata());
    if (csbhistorystatsimsrxcallsetupfailures.is_set || is_set(csbhistorystatsimsrxcallsetupfailures.operation)) leaf_name_data.push_back(csbhistorystatsimsrxcallsetupfailures.get_name_leafdata());
    if (csbhistorystatsipseccalls.is_set || is_set(csbhistorystatsipseccalls.operation)) leaf_name_data.push_back(csbhistorystatsipseccalls.get_name_leafdata());
    if (csbhistorystatsnonsrtpcalls.is_set || is_set(csbhistorystatsnonsrtpcalls.operation)) leaf_name_data.push_back(csbhistorystatsnonsrtpcalls.get_name_leafdata());
    if (csbhistorystatsrtpdisallowedfailures.is_set || is_set(csbhistorystatsrtpdisallowedfailures.operation)) leaf_name_data.push_back(csbhistorystatsrtpdisallowedfailures.get_name_leafdata());
    if (csbhistorystatssrtpdisallowedfailures.is_set || is_set(csbhistorystatssrtpdisallowedfailures.operation)) leaf_name_data.push_back(csbhistorystatssrtpdisallowedfailures.get_name_leafdata());
    if (csbhistorystatssrtpiwcalls.is_set || is_set(csbhistorystatssrtpiwcalls.operation)) leaf_name_data.push_back(csbhistorystatssrtpiwcalls.get_name_leafdata());
    if (csbhistorystatssrtpnoniwcalls.is_set || is_set(csbhistorystatssrtpnoniwcalls.operation)) leaf_name_data.push_back(csbhistorystatssrtpnoniwcalls.get_name_leafdata());
    if (csbhistorystatstimestamp.is_set || is_set(csbhistorystatstimestamp.operation)) leaf_name_data.push_back(csbhistorystatstimestamp.get_name_leafdata());
    if (csbhistorystatstotalcallattempts.is_set || is_set(csbhistorystatstotalcallattempts.operation)) leaf_name_data.push_back(csbhistorystatstotalcallattempts.get_name_leafdata());
    if (csbhistorystatstotalcallupdatefailure.is_set || is_set(csbhistorystatstotalcallupdatefailure.operation)) leaf_name_data.push_back(csbhistorystatstotalcallupdatefailure.get_name_leafdata());
    if (csbhistorystatstotaltapsrequested.is_set || is_set(csbhistorystatstotaltapsrequested.operation)) leaf_name_data.push_back(csbhistorystatstotaltapsrequested.get_name_leafdata());
    if (csbhistorystatstotaltapssucceeded.is_set || is_set(csbhistorystatstotaltapssucceeded.operation)) leaf_name_data.push_back(csbhistorystatstotaltapssucceeded.get_name_leafdata());
    if (csbhistroystatstranscodedcalls.is_set || is_set(csbhistroystatstranscodedcalls.operation)) leaf_name_data.push_back(csbhistroystatstranscodedcalls.get_name_leafdata());
    if (csbhistroystatstransratedcalls.is_set || is_set(csbhistroystatstransratedcalls.operation)) leaf_name_data.push_back(csbhistroystatstransratedcalls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbHistoryStatsInterval")
    {
        csbhistorystatsinterval = value;
    }
    if(value_path == "csbHistoryStatsElements")
    {
        csbhistorystatselements = value;
    }
    if(value_path == "csbHistoryStatsActiveCallFailure")
    {
        csbhistorystatsactivecallfailure = value;
    }
    if(value_path == "csbHistoryStatsActiveCalls")
    {
        csbhistorystatsactivecalls = value;
    }
    if(value_path == "csbHistoryStatsActiveE2EmergencyCalls")
    {
        csbhistorystatsactivee2emergencycalls = value;
    }
    if(value_path == "csbHistoryStatsActiveEmergencyCalls")
    {
        csbhistorystatsactiveemergencycalls = value;
    }
    if(value_path == "csbHistoryStatsActiveIpv6Calls")
    {
        csbhistorystatsactiveipv6calls = value;
    }
    if(value_path == "csbHistoryStatsAudioTranscodedCalls")
    {
        csbhistorystatsaudiotranscodedcalls = value;
    }
    if(value_path == "csbHistoryStatsCallMediaFailure")
    {
        csbhistorystatscallmediafailure = value;
    }
    if(value_path == "csbHistoryStatsCallResourceFailure")
    {
        csbhistorystatscallresourcefailure = value;
    }
    if(value_path == "csbHistoryStatsCallRoutingFailure")
    {
        csbhistorystatscallroutingfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupCACBandwidthFailure")
    {
        csbhistorystatscallsetupcacbandwidthfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupCACCallLimitFailure")
    {
        csbhistorystatscallsetupcaccalllimitfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupCACMediaLimitFailure")
    {
        csbhistorystatscallsetupcacmedialimitfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupCACMediaUpdateFailure")
    {
        csbhistorystatscallsetupcacmediaupdatefailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupCACPolicyFailure")
    {
        csbhistorystatscallsetupcacpolicyfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupCACRateLimitFailure")
    {
        csbhistorystatscallsetupcacratelimitfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupNAPolicyFailure")
    {
        csbhistorystatscallsetupnapolicyfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupPolicyFailure")
    {
        csbhistorystatscallsetuppolicyfailure = value;
    }
    if(value_path == "csbHistoryStatsCallSetupRoutingPolicyFailure")
    {
        csbhistorystatscallsetuproutingpolicyfailure = value;
    }
    if(value_path == "csbHistoryStatsCongestionFailure")
    {
        csbhistorystatscongestionfailure = value;
    }
    if(value_path == "csbHistoryStatsCurrentTaps")
    {
        csbhistorystatscurrenttaps = value;
    }
    if(value_path == "csbHistoryStatsDtmfIw2833Calls")
    {
        csbhistorystatsdtmfiw2833calls = value;
    }
    if(value_path == "csbHistoryStatsDtmfIw2833InbandCalls")
    {
        csbhistorystatsdtmfiw2833inbandcalls = value;
    }
    if(value_path == "csbHistoryStatsDtmfIwInbandCalls")
    {
        csbhistorystatsdtmfiwinbandcalls = value;
    }
    if(value_path == "csbHistoryStatsFailedCallAttempts")
    {
        csbhistorystatsfailedcallattempts = value;
    }
    if(value_path == "csbHistoryStatsFailSigFailure")
    {
        csbhistorystatsfailsigfailure = value;
    }
    if(value_path == "csbHistoryStatsFaxTranscodedCalls")
    {
        csbhistorystatsfaxtranscodedcalls = value;
    }
    if(value_path == "csbHistoryStatsImsRxActiveCalls")
    {
        csbhistorystatsimsrxactivecalls = value;
    }
    if(value_path == "csbHistoryStatsImsRxCallRenegotiationAttempts")
    {
        csbhistorystatsimsrxcallrenegotiationattempts = value;
    }
    if(value_path == "csbHistoryStatsImsRxCallRenegotiationFailures")
    {
        csbhistorystatsimsrxcallrenegotiationfailures = value;
    }
    if(value_path == "csbHistoryStatsImsRxCallSetupFailures")
    {
        csbhistorystatsimsrxcallsetupfailures = value;
    }
    if(value_path == "csbHistoryStatsIpsecCalls")
    {
        csbhistorystatsipseccalls = value;
    }
    if(value_path == "csbHistoryStatsNonSrtpCalls")
    {
        csbhistorystatsnonsrtpcalls = value;
    }
    if(value_path == "csbHistoryStatsRtpDisallowedFailures")
    {
        csbhistorystatsrtpdisallowedfailures = value;
    }
    if(value_path == "csbHistoryStatsSrtpDisallowedFailures")
    {
        csbhistorystatssrtpdisallowedfailures = value;
    }
    if(value_path == "csbHistoryStatsSrtpIwCalls")
    {
        csbhistorystatssrtpiwcalls = value;
    }
    if(value_path == "csbHistoryStatsSrtpNonIwCalls")
    {
        csbhistorystatssrtpnoniwcalls = value;
    }
    if(value_path == "csbHistoryStatsTimestamp")
    {
        csbhistorystatstimestamp = value;
    }
    if(value_path == "csbHistoryStatsTotalCallAttempts")
    {
        csbhistorystatstotalcallattempts = value;
    }
    if(value_path == "csbHistoryStatsTotalCallUpdateFailure")
    {
        csbhistorystatstotalcallupdatefailure = value;
    }
    if(value_path == "csbHistoryStatsTotalTapsRequested")
    {
        csbhistorystatstotaltapsrequested = value;
    }
    if(value_path == "csbHistoryStatsTotalTapsSucceeded")
    {
        csbhistorystatstotaltapssucceeded = value;
    }
    if(value_path == "csbHistroyStatsTranscodedCalls")
    {
        csbhistroystatstranscodedcalls = value;
    }
    if(value_path == "csbHistroyStatsTransratedCalls")
    {
        csbhistroystatstransratedcalls = value;
    }
}

CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatstable()
{
    yang_name = "csbPerFlowStatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::~Csbperflowstatstable()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::has_data() const
{
    for (std::size_t index=0; index<csbperflowstatsentry_.size(); index++)
    {
        if(csbperflowstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::has_operation() const
{
    for (std::size_t index=0; index<csbperflowstatsentry_.size(); index++)
    {
        if(csbperflowstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbPerFlowStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbPerFlowStatsEntry")
    {
        for(auto const & c : csbperflowstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry>();
        c->parent = this;
        csbperflowstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbperflowstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::Csbperflowstatsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbperflowstatsvdbeid{YType::int32, "csbPerFlowStatsVdbeId"},
    csbperflowstatsgateid{YType::int32, "csbPerFlowStatsGateId"},
    csbperflowstatsflowpairid{YType::int32, "csbPerFlowStatsFlowPairId"},
    csbperflowstatssideid{YType::enumeration, "csbPerFlowStatsSideId"},
    csbperflowstatsadrstatus{YType::str, "csbPerFlowStatsAdrStatus"},
    csbperflowstatsdscpsettings{YType::str, "csbPerFlowStatsDscpSettings"},
    csbperflowstatsepjitter{YType::uint64, "csbPerFlowStatsEPJitter"},
    csbperflowstatsflowtype{YType::enumeration, "csbPerFlowStatsFlowType"},
    csbperflowstatsqasettings{YType::str, "csbPerFlowStatsQASettings"},
    csbperflowstatsrtcppktslost{YType::uint64, "csbPerFlowStatsRTCPPktsLost"},
    csbperflowstatsrtcppktsrcvd{YType::uint64, "csbPerFlowStatsRTCPPktsRcvd"},
    csbperflowstatsrtcppktssent{YType::uint64, "csbPerFlowStatsRTCPPktsSent"},
    csbperflowstatsrtpoctetsdiscard{YType::uint64, "csbPerFlowStatsRTPOctetsDiscard"},
    csbperflowstatsrtpoctetsrcvd{YType::uint64, "csbPerFlowStatsRTPOctetsRcvd"},
    csbperflowstatsrtpoctetssent{YType::uint64, "csbPerFlowStatsRTPOctetsSent"},
    csbperflowstatsrtppktsdiscard{YType::uint64, "csbPerFlowStatsRTPPktsDiscard"},
    csbperflowstatsrtppktslost{YType::uint64, "csbPerFlowStatsRTPPktsLost"},
    csbperflowstatsrtppktsrcvd{YType::uint64, "csbPerFlowStatsRTPPktsRcvd"},
    csbperflowstatsrtppktssent{YType::uint64, "csbPerFlowStatsRTPPktsSent"},
    csbperflowstatstmanpermbs{YType::uint32, "csbPerFlowStatsTmanPerMbs"},
    csbperflowstatstmanpersdr{YType::uint32, "csbPerFlowStatsTmanPerSdr"}
{
    yang_name = "csbPerFlowStatsEntry"; yang_parent_name = "csbPerFlowStatsTable";
}

CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::~Csbperflowstatsentry()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbperflowstatsvdbeid.is_set
	|| csbperflowstatsgateid.is_set
	|| csbperflowstatsflowpairid.is_set
	|| csbperflowstatssideid.is_set
	|| csbperflowstatsadrstatus.is_set
	|| csbperflowstatsdscpsettings.is_set
	|| csbperflowstatsepjitter.is_set
	|| csbperflowstatsflowtype.is_set
	|| csbperflowstatsqasettings.is_set
	|| csbperflowstatsrtcppktslost.is_set
	|| csbperflowstatsrtcppktsrcvd.is_set
	|| csbperflowstatsrtcppktssent.is_set
	|| csbperflowstatsrtpoctetsdiscard.is_set
	|| csbperflowstatsrtpoctetsrcvd.is_set
	|| csbperflowstatsrtpoctetssent.is_set
	|| csbperflowstatsrtppktsdiscard.is_set
	|| csbperflowstatsrtppktslost.is_set
	|| csbperflowstatsrtppktsrcvd.is_set
	|| csbperflowstatsrtppktssent.is_set
	|| csbperflowstatstmanpermbs.is_set
	|| csbperflowstatstmanpersdr.is_set;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbperflowstatsvdbeid.operation)
	|| is_set(csbperflowstatsgateid.operation)
	|| is_set(csbperflowstatsflowpairid.operation)
	|| is_set(csbperflowstatssideid.operation)
	|| is_set(csbperflowstatsadrstatus.operation)
	|| is_set(csbperflowstatsdscpsettings.operation)
	|| is_set(csbperflowstatsepjitter.operation)
	|| is_set(csbperflowstatsflowtype.operation)
	|| is_set(csbperflowstatsqasettings.operation)
	|| is_set(csbperflowstatsrtcppktslost.operation)
	|| is_set(csbperflowstatsrtcppktsrcvd.operation)
	|| is_set(csbperflowstatsrtcppktssent.operation)
	|| is_set(csbperflowstatsrtpoctetsdiscard.operation)
	|| is_set(csbperflowstatsrtpoctetsrcvd.operation)
	|| is_set(csbperflowstatsrtpoctetssent.operation)
	|| is_set(csbperflowstatsrtppktsdiscard.operation)
	|| is_set(csbperflowstatsrtppktslost.operation)
	|| is_set(csbperflowstatsrtppktsrcvd.operation)
	|| is_set(csbperflowstatsrtppktssent.operation)
	|| is_set(csbperflowstatstmanpermbs.operation)
	|| is_set(csbperflowstatstmanpersdr.operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbPerFlowStatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbPerFlowStatsVdbeId='" <<csbperflowstatsvdbeid <<"']" <<"[csbPerFlowStatsGateId='" <<csbperflowstatsgateid <<"']" <<"[csbPerFlowStatsFlowPairId='" <<csbperflowstatsflowpairid <<"']" <<"[csbPerFlowStatsSideId='" <<csbperflowstatssideid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbPerFlowStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbperflowstatsvdbeid.is_set || is_set(csbperflowstatsvdbeid.operation)) leaf_name_data.push_back(csbperflowstatsvdbeid.get_name_leafdata());
    if (csbperflowstatsgateid.is_set || is_set(csbperflowstatsgateid.operation)) leaf_name_data.push_back(csbperflowstatsgateid.get_name_leafdata());
    if (csbperflowstatsflowpairid.is_set || is_set(csbperflowstatsflowpairid.operation)) leaf_name_data.push_back(csbperflowstatsflowpairid.get_name_leafdata());
    if (csbperflowstatssideid.is_set || is_set(csbperflowstatssideid.operation)) leaf_name_data.push_back(csbperflowstatssideid.get_name_leafdata());
    if (csbperflowstatsadrstatus.is_set || is_set(csbperflowstatsadrstatus.operation)) leaf_name_data.push_back(csbperflowstatsadrstatus.get_name_leafdata());
    if (csbperflowstatsdscpsettings.is_set || is_set(csbperflowstatsdscpsettings.operation)) leaf_name_data.push_back(csbperflowstatsdscpsettings.get_name_leafdata());
    if (csbperflowstatsepjitter.is_set || is_set(csbperflowstatsepjitter.operation)) leaf_name_data.push_back(csbperflowstatsepjitter.get_name_leafdata());
    if (csbperflowstatsflowtype.is_set || is_set(csbperflowstatsflowtype.operation)) leaf_name_data.push_back(csbperflowstatsflowtype.get_name_leafdata());
    if (csbperflowstatsqasettings.is_set || is_set(csbperflowstatsqasettings.operation)) leaf_name_data.push_back(csbperflowstatsqasettings.get_name_leafdata());
    if (csbperflowstatsrtcppktslost.is_set || is_set(csbperflowstatsrtcppktslost.operation)) leaf_name_data.push_back(csbperflowstatsrtcppktslost.get_name_leafdata());
    if (csbperflowstatsrtcppktsrcvd.is_set || is_set(csbperflowstatsrtcppktsrcvd.operation)) leaf_name_data.push_back(csbperflowstatsrtcppktsrcvd.get_name_leafdata());
    if (csbperflowstatsrtcppktssent.is_set || is_set(csbperflowstatsrtcppktssent.operation)) leaf_name_data.push_back(csbperflowstatsrtcppktssent.get_name_leafdata());
    if (csbperflowstatsrtpoctetsdiscard.is_set || is_set(csbperflowstatsrtpoctetsdiscard.operation)) leaf_name_data.push_back(csbperflowstatsrtpoctetsdiscard.get_name_leafdata());
    if (csbperflowstatsrtpoctetsrcvd.is_set || is_set(csbperflowstatsrtpoctetsrcvd.operation)) leaf_name_data.push_back(csbperflowstatsrtpoctetsrcvd.get_name_leafdata());
    if (csbperflowstatsrtpoctetssent.is_set || is_set(csbperflowstatsrtpoctetssent.operation)) leaf_name_data.push_back(csbperflowstatsrtpoctetssent.get_name_leafdata());
    if (csbperflowstatsrtppktsdiscard.is_set || is_set(csbperflowstatsrtppktsdiscard.operation)) leaf_name_data.push_back(csbperflowstatsrtppktsdiscard.get_name_leafdata());
    if (csbperflowstatsrtppktslost.is_set || is_set(csbperflowstatsrtppktslost.operation)) leaf_name_data.push_back(csbperflowstatsrtppktslost.get_name_leafdata());
    if (csbperflowstatsrtppktsrcvd.is_set || is_set(csbperflowstatsrtppktsrcvd.operation)) leaf_name_data.push_back(csbperflowstatsrtppktsrcvd.get_name_leafdata());
    if (csbperflowstatsrtppktssent.is_set || is_set(csbperflowstatsrtppktssent.operation)) leaf_name_data.push_back(csbperflowstatsrtppktssent.get_name_leafdata());
    if (csbperflowstatstmanpermbs.is_set || is_set(csbperflowstatstmanpermbs.operation)) leaf_name_data.push_back(csbperflowstatstmanpermbs.get_name_leafdata());
    if (csbperflowstatstmanpersdr.is_set || is_set(csbperflowstatstmanpersdr.operation)) leaf_name_data.push_back(csbperflowstatstmanpersdr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbPerFlowStatsVdbeId")
    {
        csbperflowstatsvdbeid = value;
    }
    if(value_path == "csbPerFlowStatsGateId")
    {
        csbperflowstatsgateid = value;
    }
    if(value_path == "csbPerFlowStatsFlowPairId")
    {
        csbperflowstatsflowpairid = value;
    }
    if(value_path == "csbPerFlowStatsSideId")
    {
        csbperflowstatssideid = value;
    }
    if(value_path == "csbPerFlowStatsAdrStatus")
    {
        csbperflowstatsadrstatus = value;
    }
    if(value_path == "csbPerFlowStatsDscpSettings")
    {
        csbperflowstatsdscpsettings = value;
    }
    if(value_path == "csbPerFlowStatsEPJitter")
    {
        csbperflowstatsepjitter = value;
    }
    if(value_path == "csbPerFlowStatsFlowType")
    {
        csbperflowstatsflowtype = value;
    }
    if(value_path == "csbPerFlowStatsQASettings")
    {
        csbperflowstatsqasettings = value;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsLost")
    {
        csbperflowstatsrtcppktslost = value;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsRcvd")
    {
        csbperflowstatsrtcppktsrcvd = value;
    }
    if(value_path == "csbPerFlowStatsRTCPPktsSent")
    {
        csbperflowstatsrtcppktssent = value;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsDiscard")
    {
        csbperflowstatsrtpoctetsdiscard = value;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsRcvd")
    {
        csbperflowstatsrtpoctetsrcvd = value;
    }
    if(value_path == "csbPerFlowStatsRTPOctetsSent")
    {
        csbperflowstatsrtpoctetssent = value;
    }
    if(value_path == "csbPerFlowStatsRTPPktsDiscard")
    {
        csbperflowstatsrtppktsdiscard = value;
    }
    if(value_path == "csbPerFlowStatsRTPPktsLost")
    {
        csbperflowstatsrtppktslost = value;
    }
    if(value_path == "csbPerFlowStatsRTPPktsRcvd")
    {
        csbperflowstatsrtppktsrcvd = value;
    }
    if(value_path == "csbPerFlowStatsRTPPktsSent")
    {
        csbperflowstatsrtppktssent = value;
    }
    if(value_path == "csbPerFlowStatsTmanPerMbs")
    {
        csbperflowstatstmanpermbs = value;
    }
    if(value_path == "csbPerFlowStatsTmanPerSdr")
    {
        csbperflowstatstmanpersdr = value;
    }
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statstable()
{
    yang_name = "csbH248StatsTable"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::~Csbh248Statstable()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::has_data() const
{
    for (std::size_t index=0; index<csbh248statsentry_.size(); index++)
    {
        if(csbh248statsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::has_operation() const
{
    for (std::size_t index=0; index<csbh248statsentry_.size(); index++)
    {
        if(csbh248statsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbH248StatsEntry")
    {
        for(auto const & c : csbh248statsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry>();
        c->parent = this;
        csbh248statsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbh248statsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::Csbh248Statsentry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbh248statsctrlrindex{YType::int32, "csbH248StatsCtrlrIndex"},
    csbh248statsestablishedtime{YType::str, "csbH248StatsEstablishedTime"},
    csbh248statslt{YType::uint32, "csbH248StatsLT"},
    csbh248statsrepliesrcvd{YType::uint32, "csbH248StatsRepliesRcvd"},
    csbh248statsrepliesretried{YType::uint32, "csbH248StatsRepliesRetried"},
    csbh248statsrepliessent{YType::uint32, "csbH248StatsRepliesSent"},
    csbh248statsrequestsfailed{YType::uint32, "csbH248StatsRequestsFailed"},
    csbh248statsrequestsrcvd{YType::uint32, "csbH248StatsRequestsRcvd"},
    csbh248statsrequestsretried{YType::uint32, "csbH248StatsRequestsRetried"},
    csbh248statsrequestssent{YType::uint32, "csbH248StatsRequestsSent"},
    csbh248statsrtt{YType::uint32, "csbH248StatsRTT"},
    csbh248statssegpktsrcvd{YType::uint32, "csbH248StatsSegPktsRcvd"},
    csbh248statssegpktssent{YType::uint32, "csbH248StatsSegPktsSent"},
    csbh248statstmaxtimeoutval{YType::int32, "csbH248StatsTMaxTimeoutVal"}
{
    yang_name = "csbH248StatsEntry"; yang_parent_name = "csbH248StatsTable";
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::~Csbh248Statsentry()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbh248statsctrlrindex.is_set
	|| csbh248statsestablishedtime.is_set
	|| csbh248statslt.is_set
	|| csbh248statsrepliesrcvd.is_set
	|| csbh248statsrepliesretried.is_set
	|| csbh248statsrepliessent.is_set
	|| csbh248statsrequestsfailed.is_set
	|| csbh248statsrequestsrcvd.is_set
	|| csbh248statsrequestsretried.is_set
	|| csbh248statsrequestssent.is_set
	|| csbh248statsrtt.is_set
	|| csbh248statssegpktsrcvd.is_set
	|| csbh248statssegpktssent.is_set
	|| csbh248statstmaxtimeoutval.is_set;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbh248statsctrlrindex.operation)
	|| is_set(csbh248statsestablishedtime.operation)
	|| is_set(csbh248statslt.operation)
	|| is_set(csbh248statsrepliesrcvd.operation)
	|| is_set(csbh248statsrepliesretried.operation)
	|| is_set(csbh248statsrepliessent.operation)
	|| is_set(csbh248statsrequestsfailed.operation)
	|| is_set(csbh248statsrequestsrcvd.operation)
	|| is_set(csbh248statsrequestsretried.operation)
	|| is_set(csbh248statsrequestssent.operation)
	|| is_set(csbh248statsrtt.operation)
	|| is_set(csbh248statssegpktsrcvd.operation)
	|| is_set(csbh248statssegpktssent.operation)
	|| is_set(csbh248statstmaxtimeoutval.operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsEntry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbH248StatsCtrlrIndex='" <<csbh248statsctrlrindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbH248StatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbh248statsctrlrindex.is_set || is_set(csbh248statsctrlrindex.operation)) leaf_name_data.push_back(csbh248statsctrlrindex.get_name_leafdata());
    if (csbh248statsestablishedtime.is_set || is_set(csbh248statsestablishedtime.operation)) leaf_name_data.push_back(csbh248statsestablishedtime.get_name_leafdata());
    if (csbh248statslt.is_set || is_set(csbh248statslt.operation)) leaf_name_data.push_back(csbh248statslt.get_name_leafdata());
    if (csbh248statsrepliesrcvd.is_set || is_set(csbh248statsrepliesrcvd.operation)) leaf_name_data.push_back(csbh248statsrepliesrcvd.get_name_leafdata());
    if (csbh248statsrepliesretried.is_set || is_set(csbh248statsrepliesretried.operation)) leaf_name_data.push_back(csbh248statsrepliesretried.get_name_leafdata());
    if (csbh248statsrepliessent.is_set || is_set(csbh248statsrepliessent.operation)) leaf_name_data.push_back(csbh248statsrepliessent.get_name_leafdata());
    if (csbh248statsrequestsfailed.is_set || is_set(csbh248statsrequestsfailed.operation)) leaf_name_data.push_back(csbh248statsrequestsfailed.get_name_leafdata());
    if (csbh248statsrequestsrcvd.is_set || is_set(csbh248statsrequestsrcvd.operation)) leaf_name_data.push_back(csbh248statsrequestsrcvd.get_name_leafdata());
    if (csbh248statsrequestsretried.is_set || is_set(csbh248statsrequestsretried.operation)) leaf_name_data.push_back(csbh248statsrequestsretried.get_name_leafdata());
    if (csbh248statsrequestssent.is_set || is_set(csbh248statsrequestssent.operation)) leaf_name_data.push_back(csbh248statsrequestssent.get_name_leafdata());
    if (csbh248statsrtt.is_set || is_set(csbh248statsrtt.operation)) leaf_name_data.push_back(csbh248statsrtt.get_name_leafdata());
    if (csbh248statssegpktsrcvd.is_set || is_set(csbh248statssegpktsrcvd.operation)) leaf_name_data.push_back(csbh248statssegpktsrcvd.get_name_leafdata());
    if (csbh248statssegpktssent.is_set || is_set(csbh248statssegpktssent.operation)) leaf_name_data.push_back(csbh248statssegpktssent.get_name_leafdata());
    if (csbh248statstmaxtimeoutval.is_set || is_set(csbh248statstmaxtimeoutval.operation)) leaf_name_data.push_back(csbh248statstmaxtimeoutval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbH248StatsCtrlrIndex")
    {
        csbh248statsctrlrindex = value;
    }
    if(value_path == "csbH248StatsEstablishedTime")
    {
        csbh248statsestablishedtime = value;
    }
    if(value_path == "csbH248StatsLT")
    {
        csbh248statslt = value;
    }
    if(value_path == "csbH248StatsRepliesRcvd")
    {
        csbh248statsrepliesrcvd = value;
    }
    if(value_path == "csbH248StatsRepliesRetried")
    {
        csbh248statsrepliesretried = value;
    }
    if(value_path == "csbH248StatsRepliesSent")
    {
        csbh248statsrepliessent = value;
    }
    if(value_path == "csbH248StatsRequestsFailed")
    {
        csbh248statsrequestsfailed = value;
    }
    if(value_path == "csbH248StatsRequestsRcvd")
    {
        csbh248statsrequestsrcvd = value;
    }
    if(value_path == "csbH248StatsRequestsRetried")
    {
        csbh248statsrequestsretried = value;
    }
    if(value_path == "csbH248StatsRequestsSent")
    {
        csbh248statsrequestssent = value;
    }
    if(value_path == "csbH248StatsRTT")
    {
        csbh248statsrtt = value;
    }
    if(value_path == "csbH248StatsSegPktsRcvd")
    {
        csbh248statssegpktsrcvd = value;
    }
    if(value_path == "csbH248StatsSegPktsSent")
    {
        csbh248statssegpktssent = value;
    }
    if(value_path == "csbH248StatsTMaxTimeoutVal")
    {
        csbh248statstmaxtimeoutval = value;
    }
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Table()
{
    yang_name = "csbH248StatsRev1Table"; yang_parent_name = "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB";
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::~Csbh248Statsrev1Table()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::has_data() const
{
    for (std::size_t index=0; index<csbh248statsrev1entry_.size(); index++)
    {
        if(csbh248statsrev1entry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::has_operation() const
{
    for (std::size_t index=0; index<csbh248statsrev1entry_.size(); index++)
    {
        if(csbh248statsrev1entry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsRev1Table";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csbH248StatsRev1Entry")
    {
        for(auto const & c : csbh248statsrev1entry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry>();
        c->parent = this;
        csbh248statsrev1entry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csbh248statsrev1entry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::set_value(const std::string & value_path, std::string value)
{
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::Csbh248Statsrev1Entry()
    :
    csbcallstatsinstanceindex{YType::str, "csbCallStatsInstanceIndex"},
    csbcallstatsserviceindex{YType::str, "csbCallStatsServiceIndex"},
    csbh248statsvdbeid{YType::int32, "csbH248StatsVdbeId"},
    csbh248statsestablishedtimerev1{YType::str, "csbH248StatsEstablishedTimeRev1"},
    csbh248statsltrev1{YType::uint32, "csbH248StatsLTRev1"},
    csbh248statsrepliesrcvdrev1{YType::uint32, "csbH248StatsRepliesRcvdRev1"},
    csbh248statsrepliesretriedrev1{YType::uint32, "csbH248StatsRepliesRetriedRev1"},
    csbh248statsrepliessentrev1{YType::uint32, "csbH248StatsRepliesSentRev1"},
    csbh248statsrequestsfailedrev1{YType::uint32, "csbH248StatsRequestsFailedRev1"},
    csbh248statsrequestsrcvdrev1{YType::uint32, "csbH248StatsRequestsRcvdRev1"},
    csbh248statsrequestsretriedrev1{YType::uint32, "csbH248StatsRequestsRetriedRev1"},
    csbh248statsrequestssentrev1{YType::uint32, "csbH248StatsRequestsSentRev1"},
    csbh248statsrttrev1{YType::uint32, "csbH248StatsRTTRev1"},
    csbh248statssegpktsrcvdrev1{YType::uint32, "csbH248StatsSegPktsRcvdRev1"},
    csbh248statssegpktssentrev1{YType::uint32, "csbH248StatsSegPktsSentRev1"},
    csbh248statstmaxtimeoutvalrev1{YType::int32, "csbH248StatsTMaxTimeoutValRev1"}
{
    yang_name = "csbH248StatsRev1Entry"; yang_parent_name = "csbH248StatsRev1Table";
}

CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::~Csbh248Statsrev1Entry()
{
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::has_data() const
{
    return csbcallstatsinstanceindex.is_set
	|| csbcallstatsserviceindex.is_set
	|| csbh248statsvdbeid.is_set
	|| csbh248statsestablishedtimerev1.is_set
	|| csbh248statsltrev1.is_set
	|| csbh248statsrepliesrcvdrev1.is_set
	|| csbh248statsrepliesretriedrev1.is_set
	|| csbh248statsrepliessentrev1.is_set
	|| csbh248statsrequestsfailedrev1.is_set
	|| csbh248statsrequestsrcvdrev1.is_set
	|| csbh248statsrequestsretriedrev1.is_set
	|| csbh248statsrequestssentrev1.is_set
	|| csbh248statsrttrev1.is_set
	|| csbh248statssegpktsrcvdrev1.is_set
	|| csbh248statssegpktssentrev1.is_set
	|| csbh248statstmaxtimeoutvalrev1.is_set;
}

bool CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(csbcallstatsinstanceindex.operation)
	|| is_set(csbcallstatsserviceindex.operation)
	|| is_set(csbh248statsvdbeid.operation)
	|| is_set(csbh248statsestablishedtimerev1.operation)
	|| is_set(csbh248statsltrev1.operation)
	|| is_set(csbh248statsrepliesrcvdrev1.operation)
	|| is_set(csbh248statsrepliesretriedrev1.operation)
	|| is_set(csbh248statsrepliessentrev1.operation)
	|| is_set(csbh248statsrequestsfailedrev1.operation)
	|| is_set(csbh248statsrequestsrcvdrev1.operation)
	|| is_set(csbh248statsrequestsretriedrev1.operation)
	|| is_set(csbh248statsrequestssentrev1.operation)
	|| is_set(csbh248statsrttrev1.operation)
	|| is_set(csbh248statssegpktsrcvdrev1.operation)
	|| is_set(csbh248statssegpktssentrev1.operation)
	|| is_set(csbh248statstmaxtimeoutvalrev1.operation);
}

std::string CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csbH248StatsRev1Entry" <<"[csbCallStatsInstanceIndex='" <<csbcallstatsinstanceindex <<"']" <<"[csbCallStatsServiceIndex='" <<csbcallstatsserviceindex <<"']" <<"[csbH248StatsVdbeId='" <<csbh248statsvdbeid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB/csbH248StatsRev1Table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csbcallstatsinstanceindex.is_set || is_set(csbcallstatsinstanceindex.operation)) leaf_name_data.push_back(csbcallstatsinstanceindex.get_name_leafdata());
    if (csbcallstatsserviceindex.is_set || is_set(csbcallstatsserviceindex.operation)) leaf_name_data.push_back(csbcallstatsserviceindex.get_name_leafdata());
    if (csbh248statsvdbeid.is_set || is_set(csbh248statsvdbeid.operation)) leaf_name_data.push_back(csbh248statsvdbeid.get_name_leafdata());
    if (csbh248statsestablishedtimerev1.is_set || is_set(csbh248statsestablishedtimerev1.operation)) leaf_name_data.push_back(csbh248statsestablishedtimerev1.get_name_leafdata());
    if (csbh248statsltrev1.is_set || is_set(csbh248statsltrev1.operation)) leaf_name_data.push_back(csbh248statsltrev1.get_name_leafdata());
    if (csbh248statsrepliesrcvdrev1.is_set || is_set(csbh248statsrepliesrcvdrev1.operation)) leaf_name_data.push_back(csbh248statsrepliesrcvdrev1.get_name_leafdata());
    if (csbh248statsrepliesretriedrev1.is_set || is_set(csbh248statsrepliesretriedrev1.operation)) leaf_name_data.push_back(csbh248statsrepliesretriedrev1.get_name_leafdata());
    if (csbh248statsrepliessentrev1.is_set || is_set(csbh248statsrepliessentrev1.operation)) leaf_name_data.push_back(csbh248statsrepliessentrev1.get_name_leafdata());
    if (csbh248statsrequestsfailedrev1.is_set || is_set(csbh248statsrequestsfailedrev1.operation)) leaf_name_data.push_back(csbh248statsrequestsfailedrev1.get_name_leafdata());
    if (csbh248statsrequestsrcvdrev1.is_set || is_set(csbh248statsrequestsrcvdrev1.operation)) leaf_name_data.push_back(csbh248statsrequestsrcvdrev1.get_name_leafdata());
    if (csbh248statsrequestsretriedrev1.is_set || is_set(csbh248statsrequestsretriedrev1.operation)) leaf_name_data.push_back(csbh248statsrequestsretriedrev1.get_name_leafdata());
    if (csbh248statsrequestssentrev1.is_set || is_set(csbh248statsrequestssentrev1.operation)) leaf_name_data.push_back(csbh248statsrequestssentrev1.get_name_leafdata());
    if (csbh248statsrttrev1.is_set || is_set(csbh248statsrttrev1.operation)) leaf_name_data.push_back(csbh248statsrttrev1.get_name_leafdata());
    if (csbh248statssegpktsrcvdrev1.is_set || is_set(csbh248statssegpktsrcvdrev1.operation)) leaf_name_data.push_back(csbh248statssegpktsrcvdrev1.get_name_leafdata());
    if (csbh248statssegpktssentrev1.is_set || is_set(csbh248statssegpktssentrev1.operation)) leaf_name_data.push_back(csbh248statssegpktssentrev1.get_name_leafdata());
    if (csbh248statstmaxtimeoutvalrev1.is_set || is_set(csbh248statstmaxtimeoutvalrev1.operation)) leaf_name_data.push_back(csbh248statstmaxtimeoutvalrev1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csbCallStatsInstanceIndex")
    {
        csbcallstatsinstanceindex = value;
    }
    if(value_path == "csbCallStatsServiceIndex")
    {
        csbcallstatsserviceindex = value;
    }
    if(value_path == "csbH248StatsVdbeId")
    {
        csbh248statsvdbeid = value;
    }
    if(value_path == "csbH248StatsEstablishedTimeRev1")
    {
        csbh248statsestablishedtimerev1 = value;
    }
    if(value_path == "csbH248StatsLTRev1")
    {
        csbh248statsltrev1 = value;
    }
    if(value_path == "csbH248StatsRepliesRcvdRev1")
    {
        csbh248statsrepliesrcvdrev1 = value;
    }
    if(value_path == "csbH248StatsRepliesRetriedRev1")
    {
        csbh248statsrepliesretriedrev1 = value;
    }
    if(value_path == "csbH248StatsRepliesSentRev1")
    {
        csbh248statsrepliessentrev1 = value;
    }
    if(value_path == "csbH248StatsRequestsFailedRev1")
    {
        csbh248statsrequestsfailedrev1 = value;
    }
    if(value_path == "csbH248StatsRequestsRcvdRev1")
    {
        csbh248statsrequestsrcvdrev1 = value;
    }
    if(value_path == "csbH248StatsRequestsRetriedRev1")
    {
        csbh248statsrequestsretriedrev1 = value;
    }
    if(value_path == "csbH248StatsRequestsSentRev1")
    {
        csbh248statsrequestssentrev1 = value;
    }
    if(value_path == "csbH248StatsRTTRev1")
    {
        csbh248statsrttrev1 = value;
    }
    if(value_path == "csbH248StatsSegPktsRcvdRev1")
    {
        csbh248statssegpktsrcvdrev1 = value;
    }
    if(value_path == "csbH248StatsSegPktsSentRev1")
    {
        csbh248statssegpktssentrev1 = value;
    }
    if(value_path == "csbH248StatsTMaxTimeoutValRev1")
    {
        csbh248statstmaxtimeoutvalrev1 = value;
    }
}

const Enum::YLeaf CiscosbcperiodicstatsintervalEnum::fiveMinute {1, "fiveMinute"};
const Enum::YLeaf CiscosbcperiodicstatsintervalEnum::fifteenMinute {2, "fifteenMinute"};
const Enum::YLeaf CiscosbcperiodicstatsintervalEnum::oneHour {3, "oneHour"};
const Enum::YLeaf CiscosbcperiodicstatsintervalEnum::oneDay {4, "oneDay"};

const Enum::YLeaf CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::CsbperflowstatssideidEnum::sideA {1, "sideA"};
const Enum::YLeaf CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::CsbperflowstatssideidEnum::sideB {2, "sideB"};

const Enum::YLeaf CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::CsbperflowstatsflowtypeEnum::media {1, "media"};
const Enum::YLeaf CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::CsbperflowstatsflowtypeEnum::signalling {2, "signalling"};


}
}

