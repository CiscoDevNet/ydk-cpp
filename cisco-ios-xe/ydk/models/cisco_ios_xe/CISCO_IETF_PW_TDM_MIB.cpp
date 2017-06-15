
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_TDM_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_PW_TDM_MIB {

CiscoIetfPwTdmMib::CiscoIetfPwTdmMib()
    :
    cpwctdmcfgtable_(std::make_shared<CiscoIetfPwTdmMib::Cpwctdmcfgtable>())
	,cpwctdmobjects_(std::make_shared<CiscoIetfPwTdmMib::Cpwctdmobjects>())
	,cpwctdmperf1dayintervaltable_(std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable>())
	,cpwctdmperfcurrenttable_(std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable>())
	,cpwctdmperfintervaltable_(std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperfintervaltable>())
	,cpwctdmtable_(std::make_shared<CiscoIetfPwTdmMib::Cpwctdmtable>())
{
    cpwctdmcfgtable_->parent = this;

    cpwctdmobjects_->parent = this;

    cpwctdmperf1dayintervaltable_->parent = this;

    cpwctdmperfcurrenttable_->parent = this;

    cpwctdmperfintervaltable_->parent = this;

    cpwctdmtable_->parent = this;

    yang_name = "CISCO-IETF-PW-TDM-MIB"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB";
}

CiscoIetfPwTdmMib::~CiscoIetfPwTdmMib()
{
}

bool CiscoIetfPwTdmMib::has_data() const
{
    return (cpwctdmcfgtable_ !=  nullptr && cpwctdmcfgtable_->has_data())
	|| (cpwctdmobjects_ !=  nullptr && cpwctdmobjects_->has_data())
	|| (cpwctdmperf1dayintervaltable_ !=  nullptr && cpwctdmperf1dayintervaltable_->has_data())
	|| (cpwctdmperfcurrenttable_ !=  nullptr && cpwctdmperfcurrenttable_->has_data())
	|| (cpwctdmperfintervaltable_ !=  nullptr && cpwctdmperfintervaltable_->has_data())
	|| (cpwctdmtable_ !=  nullptr && cpwctdmtable_->has_data());
}

bool CiscoIetfPwTdmMib::has_operation() const
{
    return is_set(operation)
	|| (cpwctdmcfgtable_ !=  nullptr && cpwctdmcfgtable_->has_operation())
	|| (cpwctdmobjects_ !=  nullptr && cpwctdmobjects_->has_operation())
	|| (cpwctdmperf1dayintervaltable_ !=  nullptr && cpwctdmperf1dayintervaltable_->has_operation())
	|| (cpwctdmperfcurrenttable_ !=  nullptr && cpwctdmperfcurrenttable_->has_operation())
	|| (cpwctdmperfintervaltable_ !=  nullptr && cpwctdmperfintervaltable_->has_operation())
	|| (cpwctdmtable_ !=  nullptr && cpwctdmtable_->has_operation());
}

std::string CiscoIetfPwTdmMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfPwTdmMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMCfgTable")
    {
        if(cpwctdmcfgtable_ == nullptr)
        {
            cpwctdmcfgtable_ = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmcfgtable>();
        }
        return cpwctdmcfgtable_;
    }

    if(child_yang_name == "cpwCTDMObjects")
    {
        if(cpwctdmobjects_ == nullptr)
        {
            cpwctdmobjects_ = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmobjects>();
        }
        return cpwctdmobjects_;
    }

    if(child_yang_name == "cpwCTDMPerf1DayIntervalTable")
    {
        if(cpwctdmperf1dayintervaltable_ == nullptr)
        {
            cpwctdmperf1dayintervaltable_ = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable>();
        }
        return cpwctdmperf1dayintervaltable_;
    }

    if(child_yang_name == "cpwCTDMPerfCurrentTable")
    {
        if(cpwctdmperfcurrenttable_ == nullptr)
        {
            cpwctdmperfcurrenttable_ = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable>();
        }
        return cpwctdmperfcurrenttable_;
    }

    if(child_yang_name == "cpwCTDMPerfIntervalTable")
    {
        if(cpwctdmperfintervaltable_ == nullptr)
        {
            cpwctdmperfintervaltable_ = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperfintervaltable>();
        }
        return cpwctdmperfintervaltable_;
    }

    if(child_yang_name == "cpwCTDMTable")
    {
        if(cpwctdmtable_ == nullptr)
        {
            cpwctdmtable_ = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmtable>();
        }
        return cpwctdmtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwctdmcfgtable_ != nullptr)
    {
        children["cpwCTDMCfgTable"] = cpwctdmcfgtable_;
    }

    if(cpwctdmobjects_ != nullptr)
    {
        children["cpwCTDMObjects"] = cpwctdmobjects_;
    }

    if(cpwctdmperf1dayintervaltable_ != nullptr)
    {
        children["cpwCTDMPerf1DayIntervalTable"] = cpwctdmperf1dayintervaltable_;
    }

    if(cpwctdmperfcurrenttable_ != nullptr)
    {
        children["cpwCTDMPerfCurrentTable"] = cpwctdmperfcurrenttable_;
    }

    if(cpwctdmperfintervaltable_ != nullptr)
    {
        children["cpwCTDMPerfIntervalTable"] = cpwctdmperfintervaltable_;
    }

    if(cpwctdmtable_ != nullptr)
    {
        children["cpwCTDMTable"] = cpwctdmtable_;
    }

    return children;
}

void CiscoIetfPwTdmMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfPwTdmMib>();
}

std::string CiscoIetfPwTdmMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfPwTdmMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfPwTdmMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfPwTdmMib::Cpwctdmobjects::Cpwctdmobjects()
    :
    cpwctdmcfgindexnext{YType::uint32, "cpwCTDMCfgIndexNext"}
{
    yang_name = "cpwCTDMObjects"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB";
}

CiscoIetfPwTdmMib::Cpwctdmobjects::~Cpwctdmobjects()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmobjects::has_data() const
{
    return cpwctdmcfgindexnext.is_set;
}

bool CiscoIetfPwTdmMib::Cpwctdmobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwctdmcfgindexnext.operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMObjects";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwctdmcfgindexnext.is_set || is_set(cpwctdmcfgindexnext.operation)) leaf_name_data.push_back(cpwctdmcfgindexnext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwCTDMCfgIndexNext")
    {
        cpwctdmcfgindexnext = value;
    }
}

CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmtable()
{
    yang_name = "cpwCTDMTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB";
}

CiscoIetfPwTdmMib::Cpwctdmtable::~Cpwctdmtable()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmtable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmentry_.size(); index++)
    {
        if(cpwctdmentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwTdmMib::Cpwctdmtable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmentry_.size(); index++)
    {
        if(cpwctdmentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMEntry")
    {
        for(auto const & c : cpwctdmentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry>();
        c->parent = this;
        cpwctdmentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::Cpwctdmentry()
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
    yang_name = "cpwCTDMEntry"; yang_parent_name = "cpwCTDMTable";
}

CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::~Cpwctdmentry()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::has_data() const
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

bool CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwcgentdmcfgindex.operation)
	|| is_set(cpwcreltdmcfgindex.operation)
	|| is_set(cpwctdmconfigerror.operation)
	|| is_set(cpwctdmcurrentindications.operation)
	|| is_set(cpwctdmifindex.operation)
	|| is_set(cpwctdmlastestimestamp.operation)
	|| is_set(cpwctdmlatchedindications.operation)
	|| is_set(cpwctdmrate.operation)
	|| is_set(cpwctdmtimeelapsed.operation)
	|| is_set(cpwctdmvaliddayintervals.operation)
	|| is_set(cpwctdmvalidintervals.operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwcgentdmcfgindex.is_set || is_set(cpwcgentdmcfgindex.operation)) leaf_name_data.push_back(cpwcgentdmcfgindex.get_name_leafdata());
    if (cpwcreltdmcfgindex.is_set || is_set(cpwcreltdmcfgindex.operation)) leaf_name_data.push_back(cpwcreltdmcfgindex.get_name_leafdata());
    if (cpwctdmconfigerror.is_set || is_set(cpwctdmconfigerror.operation)) leaf_name_data.push_back(cpwctdmconfigerror.get_name_leafdata());
    if (cpwctdmcurrentindications.is_set || is_set(cpwctdmcurrentindications.operation)) leaf_name_data.push_back(cpwctdmcurrentindications.get_name_leafdata());
    if (cpwctdmifindex.is_set || is_set(cpwctdmifindex.operation)) leaf_name_data.push_back(cpwctdmifindex.get_name_leafdata());
    if (cpwctdmlastestimestamp.is_set || is_set(cpwctdmlastestimestamp.operation)) leaf_name_data.push_back(cpwctdmlastestimestamp.get_name_leafdata());
    if (cpwctdmlatchedindications.is_set || is_set(cpwctdmlatchedindications.operation)) leaf_name_data.push_back(cpwctdmlatchedindications.get_name_leafdata());
    if (cpwctdmrate.is_set || is_set(cpwctdmrate.operation)) leaf_name_data.push_back(cpwctdmrate.get_name_leafdata());
    if (cpwctdmtimeelapsed.is_set || is_set(cpwctdmtimeelapsed.operation)) leaf_name_data.push_back(cpwctdmtimeelapsed.get_name_leafdata());
    if (cpwctdmvaliddayintervals.is_set || is_set(cpwctdmvaliddayintervals.operation)) leaf_name_data.push_back(cpwctdmvaliddayintervals.get_name_leafdata());
    if (cpwctdmvalidintervals.is_set || is_set(cpwctdmvalidintervals.operation)) leaf_name_data.push_back(cpwctdmvalidintervals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmtable::Cpwctdmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwCGenTDMCfgIndex")
    {
        cpwcgentdmcfgindex = value;
    }
    if(value_path == "cpwCRelTDMCfgIndex")
    {
        cpwcreltdmcfgindex = value;
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
    }
    if(value_path == "cpwCTDMLastEsTimeStamp")
    {
        cpwctdmlastestimestamp = value;
    }
    if(value_path == "cpwCTDMLatchedIndications")
    {
        cpwctdmlatchedindications[value] = true;
    }
    if(value_path == "cpwCTDMRate")
    {
        cpwctdmrate = value;
    }
    if(value_path == "cpwCTDMTimeElapsed")
    {
        cpwctdmtimeelapsed = value;
    }
    if(value_path == "cpwCTDMValidDayIntervals")
    {
        cpwctdmvaliddayintervals = value;
    }
    if(value_path == "cpwCTDMValidIntervals")
    {
        cpwctdmvalidintervals = value;
    }
}

CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgtable()
{
    yang_name = "cpwCTDMCfgTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB";
}

CiscoIetfPwTdmMib::Cpwctdmcfgtable::~Cpwctdmcfgtable()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmcfgtable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmcfgentry_.size(); index++)
    {
        if(cpwctdmcfgentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwTdmMib::Cpwctdmcfgtable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmcfgentry_.size(); index++)
    {
        if(cpwctdmcfgentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmcfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMCfgTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmcfgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmcfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMCfgEntry")
    {
        for(auto const & c : cpwctdmcfgentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry>();
        c->parent = this;
        cpwctdmcfgentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmcfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmcfgentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmcfgtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgentry()
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
    yang_name = "cpwCTDMCfgEntry"; yang_parent_name = "cpwCTDMCfgTable";
}

CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::~Cpwctdmcfgentry()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::has_data() const
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

bool CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwctdmcfgindex.operation)
	|| is_set(cpwctdmcfgalarmthreshold.operation)
	|| is_set(cpwctdmcfgavepktlosstimewindow.operation)
	|| is_set(cpwctdmcfgclearalarmthreshold.operation)
	|| is_set(cpwctdmcfgconferr.operation)
	|| is_set(cpwctdmcfgconsecmisspktsoutsynch.operation)
	|| is_set(cpwctdmcfgconsecpktsinsynch.operation)
	|| is_set(cpwctdmcfgexcessivepktlossthreshold.operation)
	|| is_set(cpwctdmcfgjtrbfrdepth.operation)
	|| is_set(cpwctdmcfgmissingpktstoses.operation)
	|| is_set(cpwctdmcfgpayloadsize.operation)
	|| is_set(cpwctdmcfgpayloadsuppression.operation)
	|| is_set(cpwctdmcfgpktreorder.operation)
	|| is_set(cpwctdmcfgpktreplacepolicy.operation)
	|| is_set(cpwctdmcfgrowstatus.operation)
	|| is_set(cpwctdmcfgrtphdrused.operation)
	|| is_set(cpwctdmcfgsetup2synchtimeout.operation)
	|| is_set(cpwctdmcfgstoragetype.operation)
	|| is_set(cpwctdmcfgtimestampmode.operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMCfgEntry" <<"[cpwCTDMCfgIndex='" <<cpwctdmcfgindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMCfgTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwctdmcfgindex.is_set || is_set(cpwctdmcfgindex.operation)) leaf_name_data.push_back(cpwctdmcfgindex.get_name_leafdata());
    if (cpwctdmcfgalarmthreshold.is_set || is_set(cpwctdmcfgalarmthreshold.operation)) leaf_name_data.push_back(cpwctdmcfgalarmthreshold.get_name_leafdata());
    if (cpwctdmcfgavepktlosstimewindow.is_set || is_set(cpwctdmcfgavepktlosstimewindow.operation)) leaf_name_data.push_back(cpwctdmcfgavepktlosstimewindow.get_name_leafdata());
    if (cpwctdmcfgclearalarmthreshold.is_set || is_set(cpwctdmcfgclearalarmthreshold.operation)) leaf_name_data.push_back(cpwctdmcfgclearalarmthreshold.get_name_leafdata());
    if (cpwctdmcfgconferr.is_set || is_set(cpwctdmcfgconferr.operation)) leaf_name_data.push_back(cpwctdmcfgconferr.get_name_leafdata());
    if (cpwctdmcfgconsecmisspktsoutsynch.is_set || is_set(cpwctdmcfgconsecmisspktsoutsynch.operation)) leaf_name_data.push_back(cpwctdmcfgconsecmisspktsoutsynch.get_name_leafdata());
    if (cpwctdmcfgconsecpktsinsynch.is_set || is_set(cpwctdmcfgconsecpktsinsynch.operation)) leaf_name_data.push_back(cpwctdmcfgconsecpktsinsynch.get_name_leafdata());
    if (cpwctdmcfgexcessivepktlossthreshold.is_set || is_set(cpwctdmcfgexcessivepktlossthreshold.operation)) leaf_name_data.push_back(cpwctdmcfgexcessivepktlossthreshold.get_name_leafdata());
    if (cpwctdmcfgjtrbfrdepth.is_set || is_set(cpwctdmcfgjtrbfrdepth.operation)) leaf_name_data.push_back(cpwctdmcfgjtrbfrdepth.get_name_leafdata());
    if (cpwctdmcfgmissingpktstoses.is_set || is_set(cpwctdmcfgmissingpktstoses.operation)) leaf_name_data.push_back(cpwctdmcfgmissingpktstoses.get_name_leafdata());
    if (cpwctdmcfgpayloadsize.is_set || is_set(cpwctdmcfgpayloadsize.operation)) leaf_name_data.push_back(cpwctdmcfgpayloadsize.get_name_leafdata());
    if (cpwctdmcfgpayloadsuppression.is_set || is_set(cpwctdmcfgpayloadsuppression.operation)) leaf_name_data.push_back(cpwctdmcfgpayloadsuppression.get_name_leafdata());
    if (cpwctdmcfgpktreorder.is_set || is_set(cpwctdmcfgpktreorder.operation)) leaf_name_data.push_back(cpwctdmcfgpktreorder.get_name_leafdata());
    if (cpwctdmcfgpktreplacepolicy.is_set || is_set(cpwctdmcfgpktreplacepolicy.operation)) leaf_name_data.push_back(cpwctdmcfgpktreplacepolicy.get_name_leafdata());
    if (cpwctdmcfgrowstatus.is_set || is_set(cpwctdmcfgrowstatus.operation)) leaf_name_data.push_back(cpwctdmcfgrowstatus.get_name_leafdata());
    if (cpwctdmcfgrtphdrused.is_set || is_set(cpwctdmcfgrtphdrused.operation)) leaf_name_data.push_back(cpwctdmcfgrtphdrused.get_name_leafdata());
    if (cpwctdmcfgsetup2synchtimeout.is_set || is_set(cpwctdmcfgsetup2synchtimeout.operation)) leaf_name_data.push_back(cpwctdmcfgsetup2synchtimeout.get_name_leafdata());
    if (cpwctdmcfgstoragetype.is_set || is_set(cpwctdmcfgstoragetype.operation)) leaf_name_data.push_back(cpwctdmcfgstoragetype.get_name_leafdata());
    if (cpwctdmcfgtimestampmode.is_set || is_set(cpwctdmcfgtimestampmode.operation)) leaf_name_data.push_back(cpwctdmcfgtimestampmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwCTDMCfgIndex")
    {
        cpwctdmcfgindex = value;
    }
    if(value_path == "cpwCTDMCfgAlarmThreshold")
    {
        cpwctdmcfgalarmthreshold = value;
    }
    if(value_path == "cpwCTDMCfgAvePktLossTimeWindow")
    {
        cpwctdmcfgavepktlosstimewindow = value;
    }
    if(value_path == "cpwCTDMCfgClearAlarmThreshold")
    {
        cpwctdmcfgclearalarmthreshold = value;
    }
    if(value_path == "cpwCTDMCfgConfErr")
    {
        cpwctdmcfgconferr[value] = true;
    }
    if(value_path == "cpwCTDMCfgConsecMissPktsOutSynch")
    {
        cpwctdmcfgconsecmisspktsoutsynch = value;
    }
    if(value_path == "cpwCTDMCfgConsecPktsInSynch")
    {
        cpwctdmcfgconsecpktsinsynch = value;
    }
    if(value_path == "cpwCTDMCfgExcessivePktLossThreshold")
    {
        cpwctdmcfgexcessivepktlossthreshold = value;
    }
    if(value_path == "cpwCTDMCfgJtrBfrDepth")
    {
        cpwctdmcfgjtrbfrdepth = value;
    }
    if(value_path == "cpwCTDMCfgMissingPktsToSes")
    {
        cpwctdmcfgmissingpktstoses = value;
    }
    if(value_path == "cpwCTDMCfgPayloadSize")
    {
        cpwctdmcfgpayloadsize = value;
    }
    if(value_path == "cpwCTDMCfgPayloadSuppression")
    {
        cpwctdmcfgpayloadsuppression = value;
    }
    if(value_path == "cpwCTDMCfgPktReorder")
    {
        cpwctdmcfgpktreorder = value;
    }
    if(value_path == "cpwCTDMCfgPktReplacePolicy")
    {
        cpwctdmcfgpktreplacepolicy = value;
    }
    if(value_path == "cpwCTDMCfgRowStatus")
    {
        cpwctdmcfgrowstatus = value;
    }
    if(value_path == "cpwCTDMCfgRtpHdrUsed")
    {
        cpwctdmcfgrtphdrused = value;
    }
    if(value_path == "cpwCTDMCfgSetUp2SynchTimeOut")
    {
        cpwctdmcfgsetup2synchtimeout = value;
    }
    if(value_path == "cpwCTDMCfgStorageType")
    {
        cpwctdmcfgstoragetype = value;
    }
    if(value_path == "cpwCTDMCfgTimestampMode")
    {
        cpwctdmcfgtimestampmode = value;
    }
}

CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrenttable()
{
    yang_name = "cpwCTDMPerfCurrentTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB";
}

CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::~Cpwctdmperfcurrenttable()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmperfcurrententry_.size(); index++)
    {
        if(cpwctdmperfcurrententry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmperfcurrententry_.size(); index++)
    {
        if(cpwctdmperfcurrententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfCurrentTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMPerfCurrentEntry")
    {
        for(auto const & c : cpwctdmperfcurrententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry>();
        c->parent = this;
        cpwctdmperfcurrententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmperfcurrententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::Cpwctdmperfcurrententry()
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
    yang_name = "cpwCTDMPerfCurrentEntry"; yang_parent_name = "cpwCTDMPerfCurrentTable";
}

CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::~Cpwctdmperfcurrententry()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::has_data() const
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

bool CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwctdmperfcurrentess.operation)
	|| is_set(cpwctdmperfcurrentfc.operation)
	|| is_set(cpwctdmperfcurrentjtrbfrunderruns.operation)
	|| is_set(cpwctdmperfcurrentmalformedpkt.operation)
	|| is_set(cpwctdmperfcurrentmisorderdropped.operation)
	|| is_set(cpwctdmperfcurrentmissingpkts.operation)
	|| is_set(cpwctdmperfcurrentpktsreorder.operation)
	|| is_set(cpwctdmperfcurrentsess.operation)
	|| is_set(cpwctdmperfcurrentuass.operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfCurrentEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMPerfCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwctdmperfcurrentess.is_set || is_set(cpwctdmperfcurrentess.operation)) leaf_name_data.push_back(cpwctdmperfcurrentess.get_name_leafdata());
    if (cpwctdmperfcurrentfc.is_set || is_set(cpwctdmperfcurrentfc.operation)) leaf_name_data.push_back(cpwctdmperfcurrentfc.get_name_leafdata());
    if (cpwctdmperfcurrentjtrbfrunderruns.is_set || is_set(cpwctdmperfcurrentjtrbfrunderruns.operation)) leaf_name_data.push_back(cpwctdmperfcurrentjtrbfrunderruns.get_name_leafdata());
    if (cpwctdmperfcurrentmalformedpkt.is_set || is_set(cpwctdmperfcurrentmalformedpkt.operation)) leaf_name_data.push_back(cpwctdmperfcurrentmalformedpkt.get_name_leafdata());
    if (cpwctdmperfcurrentmisorderdropped.is_set || is_set(cpwctdmperfcurrentmisorderdropped.operation)) leaf_name_data.push_back(cpwctdmperfcurrentmisorderdropped.get_name_leafdata());
    if (cpwctdmperfcurrentmissingpkts.is_set || is_set(cpwctdmperfcurrentmissingpkts.operation)) leaf_name_data.push_back(cpwctdmperfcurrentmissingpkts.get_name_leafdata());
    if (cpwctdmperfcurrentpktsreorder.is_set || is_set(cpwctdmperfcurrentpktsreorder.operation)) leaf_name_data.push_back(cpwctdmperfcurrentpktsreorder.get_name_leafdata());
    if (cpwctdmperfcurrentsess.is_set || is_set(cpwctdmperfcurrentsess.operation)) leaf_name_data.push_back(cpwctdmperfcurrentsess.get_name_leafdata());
    if (cpwctdmperfcurrentuass.is_set || is_set(cpwctdmperfcurrentuass.operation)) leaf_name_data.push_back(cpwctdmperfcurrentuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwCTDMPerfCurrentESs")
    {
        cpwctdmperfcurrentess = value;
    }
    if(value_path == "cpwCTDMPerfCurrentFC")
    {
        cpwctdmperfcurrentfc = value;
    }
    if(value_path == "cpwCTDMPerfCurrentJtrBfrUnderruns")
    {
        cpwctdmperfcurrentjtrbfrunderruns = value;
    }
    if(value_path == "cpwCTDMPerfCurrentMalformedPkt")
    {
        cpwctdmperfcurrentmalformedpkt = value;
    }
    if(value_path == "cpwCTDMPerfCurrentMisOrderDropped")
    {
        cpwctdmperfcurrentmisorderdropped = value;
    }
    if(value_path == "cpwCTDMPerfCurrentMissingPkts")
    {
        cpwctdmperfcurrentmissingpkts = value;
    }
    if(value_path == "cpwCTDMPerfCurrentPktsReOrder")
    {
        cpwctdmperfcurrentpktsreorder = value;
    }
    if(value_path == "cpwCTDMPerfCurrentSESs")
    {
        cpwctdmperfcurrentsess = value;
    }
    if(value_path == "cpwCTDMPerfCurrentUASs")
    {
        cpwctdmperfcurrentuass = value;
    }
}

CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervaltable()
{
    yang_name = "cpwCTDMPerfIntervalTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB";
}

CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::~Cpwctdmperfintervaltable()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmperfintervalentry_.size(); index++)
    {
        if(cpwctdmperfintervalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmperfintervalentry_.size(); index++)
    {
        if(cpwctdmperfintervalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfIntervalTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMPerfIntervalEntry")
    {
        for(auto const & c : cpwctdmperfintervalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry>();
        c->parent = this;
        cpwctdmperfintervalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmperfintervalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::Cpwctdmperfintervalentry()
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
    yang_name = "cpwCTDMPerfIntervalEntry"; yang_parent_name = "cpwCTDMPerfIntervalTable";
}

CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::~Cpwctdmperfintervalentry()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::has_data() const
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

bool CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwctdmperfintervalnumber.operation)
	|| is_set(cpwctdmperfintervalduration.operation)
	|| is_set(cpwctdmperfintervaless.operation)
	|| is_set(cpwctdmperfintervalfc.operation)
	|| is_set(cpwctdmperfintervaljtrbfrunderruns.operation)
	|| is_set(cpwctdmperfintervalmalformedpkt.operation)
	|| is_set(cpwctdmperfintervalmisorderdropped.operation)
	|| is_set(cpwctdmperfintervalmissingpkts.operation)
	|| is_set(cpwctdmperfintervalpktsreorder.operation)
	|| is_set(cpwctdmperfintervalsess.operation)
	|| is_set(cpwctdmperfintervaluass.operation)
	|| is_set(cpwctdmperfintervalvaliddata.operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerfIntervalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwCTDMPerfIntervalNumber='" <<cpwctdmperfintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMPerfIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwctdmperfintervalnumber.is_set || is_set(cpwctdmperfintervalnumber.operation)) leaf_name_data.push_back(cpwctdmperfintervalnumber.get_name_leafdata());
    if (cpwctdmperfintervalduration.is_set || is_set(cpwctdmperfintervalduration.operation)) leaf_name_data.push_back(cpwctdmperfintervalduration.get_name_leafdata());
    if (cpwctdmperfintervaless.is_set || is_set(cpwctdmperfintervaless.operation)) leaf_name_data.push_back(cpwctdmperfintervaless.get_name_leafdata());
    if (cpwctdmperfintervalfc.is_set || is_set(cpwctdmperfintervalfc.operation)) leaf_name_data.push_back(cpwctdmperfintervalfc.get_name_leafdata());
    if (cpwctdmperfintervaljtrbfrunderruns.is_set || is_set(cpwctdmperfintervaljtrbfrunderruns.operation)) leaf_name_data.push_back(cpwctdmperfintervaljtrbfrunderruns.get_name_leafdata());
    if (cpwctdmperfintervalmalformedpkt.is_set || is_set(cpwctdmperfintervalmalformedpkt.operation)) leaf_name_data.push_back(cpwctdmperfintervalmalformedpkt.get_name_leafdata());
    if (cpwctdmperfintervalmisorderdropped.is_set || is_set(cpwctdmperfintervalmisorderdropped.operation)) leaf_name_data.push_back(cpwctdmperfintervalmisorderdropped.get_name_leafdata());
    if (cpwctdmperfintervalmissingpkts.is_set || is_set(cpwctdmperfintervalmissingpkts.operation)) leaf_name_data.push_back(cpwctdmperfintervalmissingpkts.get_name_leafdata());
    if (cpwctdmperfintervalpktsreorder.is_set || is_set(cpwctdmperfintervalpktsreorder.operation)) leaf_name_data.push_back(cpwctdmperfintervalpktsreorder.get_name_leafdata());
    if (cpwctdmperfintervalsess.is_set || is_set(cpwctdmperfintervalsess.operation)) leaf_name_data.push_back(cpwctdmperfintervalsess.get_name_leafdata());
    if (cpwctdmperfintervaluass.is_set || is_set(cpwctdmperfintervaluass.operation)) leaf_name_data.push_back(cpwctdmperfintervaluass.get_name_leafdata());
    if (cpwctdmperfintervalvaliddata.is_set || is_set(cpwctdmperfintervalvaliddata.operation)) leaf_name_data.push_back(cpwctdmperfintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwCTDMPerfIntervalNumber")
    {
        cpwctdmperfintervalnumber = value;
    }
    if(value_path == "cpwCTDMPerfIntervalDuration")
    {
        cpwctdmperfintervalduration = value;
    }
    if(value_path == "cpwCTDMPerfIntervalESs")
    {
        cpwctdmperfintervaless = value;
    }
    if(value_path == "cpwCTDMPerfIntervalFC")
    {
        cpwctdmperfintervalfc = value;
    }
    if(value_path == "cpwCTDMPerfIntervalJtrBfrUnderruns")
    {
        cpwctdmperfintervaljtrbfrunderruns = value;
    }
    if(value_path == "cpwCTDMPerfIntervalMalformedPkt")
    {
        cpwctdmperfintervalmalformedpkt = value;
    }
    if(value_path == "cpwCTDMPerfIntervalMisOrderDropped")
    {
        cpwctdmperfintervalmisorderdropped = value;
    }
    if(value_path == "cpwCTDMPerfIntervalMissingPkts")
    {
        cpwctdmperfintervalmissingpkts = value;
    }
    if(value_path == "cpwCTDMPerfIntervalPktsReOrder")
    {
        cpwctdmperfintervalpktsreorder = value;
    }
    if(value_path == "cpwCTDMPerfIntervalSESs")
    {
        cpwctdmperfintervalsess = value;
    }
    if(value_path == "cpwCTDMPerfIntervalUASs")
    {
        cpwctdmperfintervaluass = value;
    }
    if(value_path == "cpwCTDMPerfIntervalValidData")
    {
        cpwctdmperfintervalvaliddata = value;
    }
}

CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervaltable()
{
    yang_name = "cpwCTDMPerf1DayIntervalTable"; yang_parent_name = "CISCO-IETF-PW-TDM-MIB";
}

CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::~Cpwctdmperf1Dayintervaltable()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::has_data() const
{
    for (std::size_t index=0; index<cpwctdmperf1dayintervalentry_.size(); index++)
    {
        if(cpwctdmperf1dayintervalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwctdmperf1dayintervalentry_.size(); index++)
    {
        if(cpwctdmperf1dayintervalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerf1DayIntervalTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwCTDMPerf1DayIntervalEntry")
    {
        for(auto const & c : cpwctdmperf1dayintervalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry>();
        c->parent = this;
        cpwctdmperf1dayintervalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwctdmperf1dayintervalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::Cpwctdmperf1Dayintervalentry()
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
    yang_name = "cpwCTDMPerf1DayIntervalEntry"; yang_parent_name = "cpwCTDMPerf1DayIntervalTable";
}

CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::~Cpwctdmperf1Dayintervalentry()
{
}

bool CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::has_data() const
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

bool CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwctdmperf1dayintervalnumber.operation)
	|| is_set(cpwctdmperf1dayintervalduration.operation)
	|| is_set(cpwctdmperf1dayintervaless.operation)
	|| is_set(cpwctdmperf1dayintervalfc.operation)
	|| is_set(cpwctdmperf1dayintervaljtrbfrunderruns.operation)
	|| is_set(cpwctdmperf1dayintervalmalformedpkt.operation)
	|| is_set(cpwctdmperf1dayintervalmisorderdropped.operation)
	|| is_set(cpwctdmperf1dayintervalmissingpkts.operation)
	|| is_set(cpwctdmperf1dayintervalpktsreorder.operation)
	|| is_set(cpwctdmperf1dayintervalsess.operation)
	|| is_set(cpwctdmperf1dayintervaluass.operation)
	|| is_set(cpwctdmperf1dayintervalvaliddata.operation);
}

std::string CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwCTDMPerf1DayIntervalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwCTDMPerf1DayIntervalNumber='" <<cpwctdmperf1dayintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-TDM-MIB:CISCO-IETF-PW-TDM-MIB/cpwCTDMPerf1DayIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwctdmperf1dayintervalnumber.is_set || is_set(cpwctdmperf1dayintervalnumber.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalnumber.get_name_leafdata());
    if (cpwctdmperf1dayintervalduration.is_set || is_set(cpwctdmperf1dayintervalduration.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalduration.get_name_leafdata());
    if (cpwctdmperf1dayintervaless.is_set || is_set(cpwctdmperf1dayintervaless.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervaless.get_name_leafdata());
    if (cpwctdmperf1dayintervalfc.is_set || is_set(cpwctdmperf1dayintervalfc.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalfc.get_name_leafdata());
    if (cpwctdmperf1dayintervaljtrbfrunderruns.is_set || is_set(cpwctdmperf1dayintervaljtrbfrunderruns.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervaljtrbfrunderruns.get_name_leafdata());
    if (cpwctdmperf1dayintervalmalformedpkt.is_set || is_set(cpwctdmperf1dayintervalmalformedpkt.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalmalformedpkt.get_name_leafdata());
    if (cpwctdmperf1dayintervalmisorderdropped.is_set || is_set(cpwctdmperf1dayintervalmisorderdropped.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalmisorderdropped.get_name_leafdata());
    if (cpwctdmperf1dayintervalmissingpkts.is_set || is_set(cpwctdmperf1dayintervalmissingpkts.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalmissingpkts.get_name_leafdata());
    if (cpwctdmperf1dayintervalpktsreorder.is_set || is_set(cpwctdmperf1dayintervalpktsreorder.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalpktsreorder.get_name_leafdata());
    if (cpwctdmperf1dayintervalsess.is_set || is_set(cpwctdmperf1dayintervalsess.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalsess.get_name_leafdata());
    if (cpwctdmperf1dayintervaluass.is_set || is_set(cpwctdmperf1dayintervaluass.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervaluass.get_name_leafdata());
    if (cpwctdmperf1dayintervalvaliddata.is_set || is_set(cpwctdmperf1dayintervalvaliddata.operation)) leaf_name_data.push_back(cpwctdmperf1dayintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwTdmMib::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalNumber")
    {
        cpwctdmperf1dayintervalnumber = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalDuration")
    {
        cpwctdmperf1dayintervalduration = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalESs")
    {
        cpwctdmperf1dayintervaless = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalFC")
    {
        cpwctdmperf1dayintervalfc = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalJtrBfrUnderruns")
    {
        cpwctdmperf1dayintervaljtrbfrunderruns = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMalformedPkt")
    {
        cpwctdmperf1dayintervalmalformedpkt = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMisOrderDropped")
    {
        cpwctdmperf1dayintervalmisorderdropped = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalMissingPkts")
    {
        cpwctdmperf1dayintervalmissingpkts = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalPktsReOrder")
    {
        cpwctdmperf1dayintervalpktsreorder = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalSESs")
    {
        cpwctdmperf1dayintervalsess = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalUASs")
    {
        cpwctdmperf1dayintervaluass = value;
    }
    if(value_path == "cpwCTDMPerf1DayIntervalValidData")
    {
        cpwctdmperf1dayintervalvaliddata = value;
    }
}

const Enum::YLeaf CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgpayloadsuppressionEnum::enable {1, "enable"};
const Enum::YLeaf CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgpayloadsuppressionEnum::disable {2, "disable"};

const Enum::YLeaf CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgpktreplacepolicyEnum::ais {1, "ais"};
const Enum::YLeaf CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgpktreplacepolicyEnum::implementationSpecific {2, "implementationSpecific"};

const Enum::YLeaf CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgtimestampmodeEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgtimestampmodeEnum::absolute {2, "absolute"};
const Enum::YLeaf CiscoIetfPwTdmMib::Cpwctdmcfgtable::Cpwctdmcfgentry::CpwctdmcfgtimestampmodeEnum::differential {3, "differential"};


}
}

