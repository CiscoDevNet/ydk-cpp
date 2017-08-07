
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_SESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_SESSION_MIB {

CiscoSubscriberSessionMib::CiscoSubscriberSessionMib()
    :
    csubaggstatsinttable(std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsinttable>())
	,csubaggstatstable(std::make_shared<CiscoSubscriberSessionMib::Csubaggstatstable>())
	,csubaggstatsthreshtable(std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsthreshtable>())
	,csubaggthresh(std::make_shared<CiscoSubscriberSessionMib::Csubaggthresh>())
	,csubjob(std::make_shared<CiscoSubscriberSessionMib::Csubjob>())
	,csubjobmatchparamstable(std::make_shared<CiscoSubscriberSessionMib::Csubjobmatchparamstable>())
	,csubjobqueryparamstable(std::make_shared<CiscoSubscriberSessionMib::Csubjobqueryparamstable>())
	,csubjobqueuetable(std::make_shared<CiscoSubscriberSessionMib::Csubjobqueuetable>())
	,csubjobreporttable(std::make_shared<CiscoSubscriberSessionMib::Csubjobreporttable>())
	,csubjobtable(std::make_shared<CiscoSubscriberSessionMib::Csubjobtable>())
	,csubsessionbytypetable(std::make_shared<CiscoSubscriberSessionMib::Csubsessionbytypetable>())
	,csubsessiontable(std::make_shared<CiscoSubscriberSessionMib::Csubsessiontable>())
{
    csubaggstatsinttable->parent = this;

    csubaggstatstable->parent = this;

    csubaggstatsthreshtable->parent = this;

    csubaggthresh->parent = this;

    csubjob->parent = this;

    csubjobmatchparamstable->parent = this;

    csubjobqueryparamstable->parent = this;

    csubjobqueuetable->parent = this;

    csubjobreporttable->parent = this;

    csubjobtable->parent = this;

    csubsessionbytypetable->parent = this;

    csubsessiontable->parent = this;

    yang_name = "CISCO-SUBSCRIBER-SESSION-MIB"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::~CiscoSubscriberSessionMib()
{
}

bool CiscoSubscriberSessionMib::has_data() const
{
    return (csubaggstatsinttable !=  nullptr && csubaggstatsinttable->has_data())
	|| (csubaggstatstable !=  nullptr && csubaggstatstable->has_data())
	|| (csubaggstatsthreshtable !=  nullptr && csubaggstatsthreshtable->has_data())
	|| (csubaggthresh !=  nullptr && csubaggthresh->has_data())
	|| (csubjob !=  nullptr && csubjob->has_data())
	|| (csubjobmatchparamstable !=  nullptr && csubjobmatchparamstable->has_data())
	|| (csubjobqueryparamstable !=  nullptr && csubjobqueryparamstable->has_data())
	|| (csubjobqueuetable !=  nullptr && csubjobqueuetable->has_data())
	|| (csubjobreporttable !=  nullptr && csubjobreporttable->has_data())
	|| (csubjobtable !=  nullptr && csubjobtable->has_data())
	|| (csubsessionbytypetable !=  nullptr && csubsessionbytypetable->has_data())
	|| (csubsessiontable !=  nullptr && csubsessiontable->has_data());
}

bool CiscoSubscriberSessionMib::has_operation() const
{
    return is_set(yfilter)
	|| (csubaggstatsinttable !=  nullptr && csubaggstatsinttable->has_operation())
	|| (csubaggstatstable !=  nullptr && csubaggstatstable->has_operation())
	|| (csubaggstatsthreshtable !=  nullptr && csubaggstatsthreshtable->has_operation())
	|| (csubaggthresh !=  nullptr && csubaggthresh->has_operation())
	|| (csubjob !=  nullptr && csubjob->has_operation())
	|| (csubjobmatchparamstable !=  nullptr && csubjobmatchparamstable->has_operation())
	|| (csubjobqueryparamstable !=  nullptr && csubjobqueryparamstable->has_operation())
	|| (csubjobqueuetable !=  nullptr && csubjobqueuetable->has_operation())
	|| (csubjobreporttable !=  nullptr && csubjobreporttable->has_operation())
	|| (csubjobtable !=  nullptr && csubjobtable->has_operation())
	|| (csubsessionbytypetable !=  nullptr && csubsessionbytypetable->has_operation())
	|| (csubsessiontable !=  nullptr && csubsessiontable->has_operation());
}

std::string CiscoSubscriberSessionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoSubscriberSessionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsIntTable")
    {
        if(csubaggstatsinttable == nullptr)
        {
            csubaggstatsinttable = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsinttable>();
        }
        return csubaggstatsinttable;
    }

    if(child_yang_name == "csubAggStatsTable")
    {
        if(csubaggstatstable == nullptr)
        {
            csubaggstatstable = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatstable>();
        }
        return csubaggstatstable;
    }

    if(child_yang_name == "csubAggStatsThreshTable")
    {
        if(csubaggstatsthreshtable == nullptr)
        {
            csubaggstatsthreshtable = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsthreshtable>();
        }
        return csubaggstatsthreshtable;
    }

    if(child_yang_name == "csubAggThresh")
    {
        if(csubaggthresh == nullptr)
        {
            csubaggthresh = std::make_shared<CiscoSubscriberSessionMib::Csubaggthresh>();
        }
        return csubaggthresh;
    }

    if(child_yang_name == "csubJob")
    {
        if(csubjob == nullptr)
        {
            csubjob = std::make_shared<CiscoSubscriberSessionMib::Csubjob>();
        }
        return csubjob;
    }

    if(child_yang_name == "csubJobMatchParamsTable")
    {
        if(csubjobmatchparamstable == nullptr)
        {
            csubjobmatchparamstable = std::make_shared<CiscoSubscriberSessionMib::Csubjobmatchparamstable>();
        }
        return csubjobmatchparamstable;
    }

    if(child_yang_name == "csubJobQueryParamsTable")
    {
        if(csubjobqueryparamstable == nullptr)
        {
            csubjobqueryparamstable = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueryparamstable>();
        }
        return csubjobqueryparamstable;
    }

    if(child_yang_name == "csubJobQueueTable")
    {
        if(csubjobqueuetable == nullptr)
        {
            csubjobqueuetable = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueuetable>();
        }
        return csubjobqueuetable;
    }

    if(child_yang_name == "csubJobReportTable")
    {
        if(csubjobreporttable == nullptr)
        {
            csubjobreporttable = std::make_shared<CiscoSubscriberSessionMib::Csubjobreporttable>();
        }
        return csubjobreporttable;
    }

    if(child_yang_name == "csubJobTable")
    {
        if(csubjobtable == nullptr)
        {
            csubjobtable = std::make_shared<CiscoSubscriberSessionMib::Csubjobtable>();
        }
        return csubjobtable;
    }

    if(child_yang_name == "csubSessionByTypeTable")
    {
        if(csubsessionbytypetable == nullptr)
        {
            csubsessionbytypetable = std::make_shared<CiscoSubscriberSessionMib::Csubsessionbytypetable>();
        }
        return csubsessionbytypetable;
    }

    if(child_yang_name == "csubSessionTable")
    {
        if(csubsessiontable == nullptr)
        {
            csubsessiontable = std::make_shared<CiscoSubscriberSessionMib::Csubsessiontable>();
        }
        return csubsessiontable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csubaggstatsinttable != nullptr)
    {
        children["csubAggStatsIntTable"] = csubaggstatsinttable;
    }

    if(csubaggstatstable != nullptr)
    {
        children["csubAggStatsTable"] = csubaggstatstable;
    }

    if(csubaggstatsthreshtable != nullptr)
    {
        children["csubAggStatsThreshTable"] = csubaggstatsthreshtable;
    }

    if(csubaggthresh != nullptr)
    {
        children["csubAggThresh"] = csubaggthresh;
    }

    if(csubjob != nullptr)
    {
        children["csubJob"] = csubjob;
    }

    if(csubjobmatchparamstable != nullptr)
    {
        children["csubJobMatchParamsTable"] = csubjobmatchparamstable;
    }

    if(csubjobqueryparamstable != nullptr)
    {
        children["csubJobQueryParamsTable"] = csubjobqueryparamstable;
    }

    if(csubjobqueuetable != nullptr)
    {
        children["csubJobQueueTable"] = csubjobqueuetable;
    }

    if(csubjobreporttable != nullptr)
    {
        children["csubJobReportTable"] = csubjobreporttable;
    }

    if(csubjobtable != nullptr)
    {
        children["csubJobTable"] = csubjobtable;
    }

    if(csubsessionbytypetable != nullptr)
    {
        children["csubSessionByTypeTable"] = csubsessionbytypetable;
    }

    if(csubsessiontable != nullptr)
    {
        children["csubSessionTable"] = csubsessiontable;
    }

    return children;
}

void CiscoSubscriberSessionMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::clone_ptr() const
{
    return std::make_shared<CiscoSubscriberSessionMib>();
}

std::string CiscoSubscriberSessionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoSubscriberSessionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoSubscriberSessionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoSubscriberSessionMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoSubscriberSessionMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsIntTable" || name == "csubAggStatsTable" || name == "csubAggStatsThreshTable" || name == "csubAggThresh" || name == "csubJob" || name == "csubJobMatchParamsTable" || name == "csubJobQueryParamsTable" || name == "csubJobQueueTable" || name == "csubJobReportTable" || name == "csubJobTable" || name == "csubSessionByTypeTable" || name == "csubSessionTable")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjob::Csubjob()
    :
    csubjobcount{YType::uint32, "csubJobCount"},
    csubjobfinishednotifyenable{YType::boolean, "csubJobFinishedNotifyEnable"},
    csubjobidnext{YType::uint32, "csubJobIdNext"},
    csubjobindexedattributes{YType::bits, "csubJobIndexedAttributes"},
    csubjobmaxlife{YType::uint32, "csubJobMaxLife"},
    csubjobmaxnumber{YType::uint32, "csubJobMaxNumber"}
{
    yang_name = "csubJob"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjob::~Csubjob()
{
}

bool CiscoSubscriberSessionMib::Csubjob::has_data() const
{
    return csubjobcount.is_set
	|| csubjobfinishednotifyenable.is_set
	|| csubjobidnext.is_set
	|| csubjobindexedattributes.is_set
	|| csubjobmaxlife.is_set
	|| csubjobmaxnumber.is_set;
}

bool CiscoSubscriberSessionMib::Csubjob::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobcount.yfilter)
	|| ydk::is_set(csubjobfinishednotifyenable.yfilter)
	|| ydk::is_set(csubjobidnext.yfilter)
	|| ydk::is_set(csubjobindexedattributes.yfilter)
	|| ydk::is_set(csubjobmaxlife.yfilter)
	|| ydk::is_set(csubjobmaxnumber.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjob::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJob";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjob::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobcount.is_set || is_set(csubjobcount.yfilter)) leaf_name_data.push_back(csubjobcount.get_name_leafdata());
    if (csubjobfinishednotifyenable.is_set || is_set(csubjobfinishednotifyenable.yfilter)) leaf_name_data.push_back(csubjobfinishednotifyenable.get_name_leafdata());
    if (csubjobidnext.is_set || is_set(csubjobidnext.yfilter)) leaf_name_data.push_back(csubjobidnext.get_name_leafdata());
    if (csubjobindexedattributes.is_set || is_set(csubjobindexedattributes.yfilter)) leaf_name_data.push_back(csubjobindexedattributes.get_name_leafdata());
    if (csubjobmaxlife.is_set || is_set(csubjobmaxlife.yfilter)) leaf_name_data.push_back(csubjobmaxlife.get_name_leafdata());
    if (csubjobmaxnumber.is_set || is_set(csubjobmaxnumber.yfilter)) leaf_name_data.push_back(csubjobmaxnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjob::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjob::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjob::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobCount")
    {
        csubjobcount = value;
        csubjobcount.value_namespace = name_space;
        csubjobcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobFinishedNotifyEnable")
    {
        csubjobfinishednotifyenable = value;
        csubjobfinishednotifyenable.value_namespace = name_space;
        csubjobfinishednotifyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobIdNext")
    {
        csubjobidnext = value;
        csubjobidnext.value_namespace = name_space;
        csubjobidnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobIndexedAttributes")
    {
        csubjobindexedattributes[value] = true;
    }
    if(value_path == "csubJobMaxLife")
    {
        csubjobmaxlife = value;
        csubjobmaxlife.value_namespace = name_space;
        csubjobmaxlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMaxNumber")
    {
        csubjobmaxnumber = value;
        csubjobmaxnumber.value_namespace = name_space;
        csubjobmaxnumber.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubjob::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobCount")
    {
        csubjobcount.yfilter = yfilter;
    }
    if(value_path == "csubJobFinishedNotifyEnable")
    {
        csubjobfinishednotifyenable.yfilter = yfilter;
    }
    if(value_path == "csubJobIdNext")
    {
        csubjobidnext.yfilter = yfilter;
    }
    if(value_path == "csubJobIndexedAttributes")
    {
        csubjobindexedattributes.yfilter = yfilter;
    }
    if(value_path == "csubJobMaxLife")
    {
        csubjobmaxlife.yfilter = yfilter;
    }
    if(value_path == "csubJobMaxNumber")
    {
        csubjobmaxnumber.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubjob::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobCount" || name == "csubJobFinishedNotifyEnable" || name == "csubJobIdNext" || name == "csubJobIndexedAttributes" || name == "csubJobMaxLife" || name == "csubJobMaxNumber")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubaggthresh::Csubaggthresh()
    :
    csubaggstatsthreshnotifenable{YType::boolean, "csubAggStatsThreshNotifEnable"}
{
    yang_name = "csubAggThresh"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggthresh::~Csubaggthresh()
{
}

bool CiscoSubscriberSessionMib::Csubaggthresh::has_data() const
{
    return csubaggstatsthreshnotifenable.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggthresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubaggstatsthreshnotifenable.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubaggthresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggThresh";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggthresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatsthreshnotifenable.is_set || is_set(csubaggstatsthreshnotifenable.yfilter)) leaf_name_data.push_back(csubaggstatsthreshnotifenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggthresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggthresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggthresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubAggStatsThreshNotifEnable")
    {
        csubaggstatsthreshnotifenable = value;
        csubaggstatsthreshnotifenable.value_namespace = name_space;
        csubaggstatsthreshnotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubaggthresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubAggStatsThreshNotifEnable")
    {
        csubaggstatsthreshnotifenable.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubaggthresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsThreshNotifEnable")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubsessiontable::Csubsessiontable()
{
    yang_name = "csubSessionTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubsessiontable::~Csubsessiontable()
{
}

bool CiscoSubscriberSessionMib::Csubsessiontable::has_data() const
{
    for (std::size_t index=0; index<csubsessionentry.size(); index++)
    {
        if(csubsessionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubsessiontable::has_operation() const
{
    for (std::size_t index=0; index<csubsessionentry.size(); index++)
    {
        if(csubsessionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubsessiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubSessionEntry")
    {
        for(auto const & c : csubsessionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry>();
        c->parent = this;
        csubsessionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubsessionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubsessiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubsessiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubsessiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionentry()
    :
    ifindex{YType::str, "ifIndex"},
    csubsessionacctsessionid{YType::uint32, "csubSessionAcctSessionId"},
    csubsessionauthenticated{YType::boolean, "csubSessionAuthenticated"},
    csubsessionavailableidentities{YType::bits, "csubSessionAvailableIdentities"},
    csubsessioncircuitid{YType::str, "csubSessionCircuitId"},
    csubsessioncreationtime{YType::str, "csubSessionCreationTime"},
    csubsessionderivedcfg{YType::str, "csubSessionDerivedCfg"},
    csubsessiondhcpclass{YType::str, "csubSessionDhcpClass"},
    csubsessiondnis{YType::str, "csubSessionDnis"},
    csubsessiondomain{YType::str, "csubSessionDomain"},
    csubsessiondomainipaddr{YType::str, "csubSessionDomainIpAddr"},
    csubsessiondomainipaddrtype{YType::enumeration, "csubSessionDomainIpAddrType"},
    csubsessiondomainipmask{YType::str, "csubSessionDomainIpMask"},
    csubsessiondomainvrf{YType::str, "csubSessionDomainVrf"},
    csubsessionipaddrassignment{YType::enumeration, "csubSessionIpAddrAssignment"},
    csubsessionlastchanged{YType::str, "csubSessionLastChanged"},
    csubsessionlocationidentifier{YType::str, "csubSessionLocationIdentifier"},
    csubsessionmacaddress{YType::str, "csubSessionMacAddress"},
    csubsessionmedia{YType::enumeration, "csubSessionMedia"},
    csubsessionmlpnegotiated{YType::boolean, "csubSessionMlpNegotiated"},
    csubsessionnasport{YType::str, "csubSessionNasPort"},
    csubsessionnativeipaddr{YType::str, "csubSessionNativeIpAddr"},
    csubsessionnativeipaddr2{YType::str, "csubSessionNativeIpAddr2"},
    csubsessionnativeipaddrtype{YType::enumeration, "csubSessionNativeIpAddrType"},
    csubsessionnativeipaddrtype2{YType::enumeration, "csubSessionNativeIpAddrType2"},
    csubsessionnativeipmask{YType::str, "csubSessionNativeIpMask"},
    csubsessionnativeipmask2{YType::str, "csubSessionNativeIpMask2"},
    csubsessionnativevrf{YType::str, "csubSessionNativeVrf"},
    csubsessionpbhk{YType::str, "csubSessionPbhk"},
    csubsessionprotocol{YType::enumeration, "csubSessionProtocol"},
    csubsessionredundancymode{YType::enumeration, "csubSessionRedundancyMode"},
    csubsessionremoteid{YType::str, "csubSessionRemoteId"},
    csubsessionserviceidentifier{YType::str, "csubSessionServiceIdentifier"},
    csubsessionstate{YType::enumeration, "csubSessionState"},
    csubsessionsubscriberlabel{YType::uint32, "csubSessionSubscriberLabel"},
    csubsessiontunnelname{YType::str, "csubSessionTunnelName"},
    csubsessiontype{YType::enumeration, "csubSessionType"},
    csubsessionusername{YType::str, "csubSessionUsername"}
{
    yang_name = "csubSessionEntry"; yang_parent_name = "csubSessionTable";
}

CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::~Csubsessionentry()
{
}

bool CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::has_data() const
{
    return ifindex.is_set
	|| csubsessionacctsessionid.is_set
	|| csubsessionauthenticated.is_set
	|| csubsessionavailableidentities.is_set
	|| csubsessioncircuitid.is_set
	|| csubsessioncreationtime.is_set
	|| csubsessionderivedcfg.is_set
	|| csubsessiondhcpclass.is_set
	|| csubsessiondnis.is_set
	|| csubsessiondomain.is_set
	|| csubsessiondomainipaddr.is_set
	|| csubsessiondomainipaddrtype.is_set
	|| csubsessiondomainipmask.is_set
	|| csubsessiondomainvrf.is_set
	|| csubsessionipaddrassignment.is_set
	|| csubsessionlastchanged.is_set
	|| csubsessionlocationidentifier.is_set
	|| csubsessionmacaddress.is_set
	|| csubsessionmedia.is_set
	|| csubsessionmlpnegotiated.is_set
	|| csubsessionnasport.is_set
	|| csubsessionnativeipaddr.is_set
	|| csubsessionnativeipaddr2.is_set
	|| csubsessionnativeipaddrtype.is_set
	|| csubsessionnativeipaddrtype2.is_set
	|| csubsessionnativeipmask.is_set
	|| csubsessionnativeipmask2.is_set
	|| csubsessionnativevrf.is_set
	|| csubsessionpbhk.is_set
	|| csubsessionprotocol.is_set
	|| csubsessionredundancymode.is_set
	|| csubsessionremoteid.is_set
	|| csubsessionserviceidentifier.is_set
	|| csubsessionstate.is_set
	|| csubsessionsubscriberlabel.is_set
	|| csubsessiontunnelname.is_set
	|| csubsessiontype.is_set
	|| csubsessionusername.is_set;
}

bool CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csubsessionacctsessionid.yfilter)
	|| ydk::is_set(csubsessionauthenticated.yfilter)
	|| ydk::is_set(csubsessionavailableidentities.yfilter)
	|| ydk::is_set(csubsessioncircuitid.yfilter)
	|| ydk::is_set(csubsessioncreationtime.yfilter)
	|| ydk::is_set(csubsessionderivedcfg.yfilter)
	|| ydk::is_set(csubsessiondhcpclass.yfilter)
	|| ydk::is_set(csubsessiondnis.yfilter)
	|| ydk::is_set(csubsessiondomain.yfilter)
	|| ydk::is_set(csubsessiondomainipaddr.yfilter)
	|| ydk::is_set(csubsessiondomainipaddrtype.yfilter)
	|| ydk::is_set(csubsessiondomainipmask.yfilter)
	|| ydk::is_set(csubsessiondomainvrf.yfilter)
	|| ydk::is_set(csubsessionipaddrassignment.yfilter)
	|| ydk::is_set(csubsessionlastchanged.yfilter)
	|| ydk::is_set(csubsessionlocationidentifier.yfilter)
	|| ydk::is_set(csubsessionmacaddress.yfilter)
	|| ydk::is_set(csubsessionmedia.yfilter)
	|| ydk::is_set(csubsessionmlpnegotiated.yfilter)
	|| ydk::is_set(csubsessionnasport.yfilter)
	|| ydk::is_set(csubsessionnativeipaddr.yfilter)
	|| ydk::is_set(csubsessionnativeipaddr2.yfilter)
	|| ydk::is_set(csubsessionnativeipaddrtype.yfilter)
	|| ydk::is_set(csubsessionnativeipaddrtype2.yfilter)
	|| ydk::is_set(csubsessionnativeipmask.yfilter)
	|| ydk::is_set(csubsessionnativeipmask2.yfilter)
	|| ydk::is_set(csubsessionnativevrf.yfilter)
	|| ydk::is_set(csubsessionpbhk.yfilter)
	|| ydk::is_set(csubsessionprotocol.yfilter)
	|| ydk::is_set(csubsessionredundancymode.yfilter)
	|| ydk::is_set(csubsessionremoteid.yfilter)
	|| ydk::is_set(csubsessionserviceidentifier.yfilter)
	|| ydk::is_set(csubsessionstate.yfilter)
	|| ydk::is_set(csubsessionsubscriberlabel.yfilter)
	|| ydk::is_set(csubsessiontunnelname.yfilter)
	|| ydk::is_set(csubsessiontype.yfilter)
	|| ydk::is_set(csubsessionusername.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubSessionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csubsessionacctsessionid.is_set || is_set(csubsessionacctsessionid.yfilter)) leaf_name_data.push_back(csubsessionacctsessionid.get_name_leafdata());
    if (csubsessionauthenticated.is_set || is_set(csubsessionauthenticated.yfilter)) leaf_name_data.push_back(csubsessionauthenticated.get_name_leafdata());
    if (csubsessionavailableidentities.is_set || is_set(csubsessionavailableidentities.yfilter)) leaf_name_data.push_back(csubsessionavailableidentities.get_name_leafdata());
    if (csubsessioncircuitid.is_set || is_set(csubsessioncircuitid.yfilter)) leaf_name_data.push_back(csubsessioncircuitid.get_name_leafdata());
    if (csubsessioncreationtime.is_set || is_set(csubsessioncreationtime.yfilter)) leaf_name_data.push_back(csubsessioncreationtime.get_name_leafdata());
    if (csubsessionderivedcfg.is_set || is_set(csubsessionderivedcfg.yfilter)) leaf_name_data.push_back(csubsessionderivedcfg.get_name_leafdata());
    if (csubsessiondhcpclass.is_set || is_set(csubsessiondhcpclass.yfilter)) leaf_name_data.push_back(csubsessiondhcpclass.get_name_leafdata());
    if (csubsessiondnis.is_set || is_set(csubsessiondnis.yfilter)) leaf_name_data.push_back(csubsessiondnis.get_name_leafdata());
    if (csubsessiondomain.is_set || is_set(csubsessiondomain.yfilter)) leaf_name_data.push_back(csubsessiondomain.get_name_leafdata());
    if (csubsessiondomainipaddr.is_set || is_set(csubsessiondomainipaddr.yfilter)) leaf_name_data.push_back(csubsessiondomainipaddr.get_name_leafdata());
    if (csubsessiondomainipaddrtype.is_set || is_set(csubsessiondomainipaddrtype.yfilter)) leaf_name_data.push_back(csubsessiondomainipaddrtype.get_name_leafdata());
    if (csubsessiondomainipmask.is_set || is_set(csubsessiondomainipmask.yfilter)) leaf_name_data.push_back(csubsessiondomainipmask.get_name_leafdata());
    if (csubsessiondomainvrf.is_set || is_set(csubsessiondomainvrf.yfilter)) leaf_name_data.push_back(csubsessiondomainvrf.get_name_leafdata());
    if (csubsessionipaddrassignment.is_set || is_set(csubsessionipaddrassignment.yfilter)) leaf_name_data.push_back(csubsessionipaddrassignment.get_name_leafdata());
    if (csubsessionlastchanged.is_set || is_set(csubsessionlastchanged.yfilter)) leaf_name_data.push_back(csubsessionlastchanged.get_name_leafdata());
    if (csubsessionlocationidentifier.is_set || is_set(csubsessionlocationidentifier.yfilter)) leaf_name_data.push_back(csubsessionlocationidentifier.get_name_leafdata());
    if (csubsessionmacaddress.is_set || is_set(csubsessionmacaddress.yfilter)) leaf_name_data.push_back(csubsessionmacaddress.get_name_leafdata());
    if (csubsessionmedia.is_set || is_set(csubsessionmedia.yfilter)) leaf_name_data.push_back(csubsessionmedia.get_name_leafdata());
    if (csubsessionmlpnegotiated.is_set || is_set(csubsessionmlpnegotiated.yfilter)) leaf_name_data.push_back(csubsessionmlpnegotiated.get_name_leafdata());
    if (csubsessionnasport.is_set || is_set(csubsessionnasport.yfilter)) leaf_name_data.push_back(csubsessionnasport.get_name_leafdata());
    if (csubsessionnativeipaddr.is_set || is_set(csubsessionnativeipaddr.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddr.get_name_leafdata());
    if (csubsessionnativeipaddr2.is_set || is_set(csubsessionnativeipaddr2.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddr2.get_name_leafdata());
    if (csubsessionnativeipaddrtype.is_set || is_set(csubsessionnativeipaddrtype.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddrtype.get_name_leafdata());
    if (csubsessionnativeipaddrtype2.is_set || is_set(csubsessionnativeipaddrtype2.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddrtype2.get_name_leafdata());
    if (csubsessionnativeipmask.is_set || is_set(csubsessionnativeipmask.yfilter)) leaf_name_data.push_back(csubsessionnativeipmask.get_name_leafdata());
    if (csubsessionnativeipmask2.is_set || is_set(csubsessionnativeipmask2.yfilter)) leaf_name_data.push_back(csubsessionnativeipmask2.get_name_leafdata());
    if (csubsessionnativevrf.is_set || is_set(csubsessionnativevrf.yfilter)) leaf_name_data.push_back(csubsessionnativevrf.get_name_leafdata());
    if (csubsessionpbhk.is_set || is_set(csubsessionpbhk.yfilter)) leaf_name_data.push_back(csubsessionpbhk.get_name_leafdata());
    if (csubsessionprotocol.is_set || is_set(csubsessionprotocol.yfilter)) leaf_name_data.push_back(csubsessionprotocol.get_name_leafdata());
    if (csubsessionredundancymode.is_set || is_set(csubsessionredundancymode.yfilter)) leaf_name_data.push_back(csubsessionredundancymode.get_name_leafdata());
    if (csubsessionremoteid.is_set || is_set(csubsessionremoteid.yfilter)) leaf_name_data.push_back(csubsessionremoteid.get_name_leafdata());
    if (csubsessionserviceidentifier.is_set || is_set(csubsessionserviceidentifier.yfilter)) leaf_name_data.push_back(csubsessionserviceidentifier.get_name_leafdata());
    if (csubsessionstate.is_set || is_set(csubsessionstate.yfilter)) leaf_name_data.push_back(csubsessionstate.get_name_leafdata());
    if (csubsessionsubscriberlabel.is_set || is_set(csubsessionsubscriberlabel.yfilter)) leaf_name_data.push_back(csubsessionsubscriberlabel.get_name_leafdata());
    if (csubsessiontunnelname.is_set || is_set(csubsessiontunnelname.yfilter)) leaf_name_data.push_back(csubsessiontunnelname.get_name_leafdata());
    if (csubsessiontype.is_set || is_set(csubsessiontype.yfilter)) leaf_name_data.push_back(csubsessiontype.get_name_leafdata());
    if (csubsessionusername.is_set || is_set(csubsessionusername.yfilter)) leaf_name_data.push_back(csubsessionusername.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionAcctSessionId")
    {
        csubsessionacctsessionid = value;
        csubsessionacctsessionid.value_namespace = name_space;
        csubsessionacctsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionAuthenticated")
    {
        csubsessionauthenticated = value;
        csubsessionauthenticated.value_namespace = name_space;
        csubsessionauthenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionAvailableIdentities")
    {
        csubsessionavailableidentities[value] = true;
    }
    if(value_path == "csubSessionCircuitId")
    {
        csubsessioncircuitid = value;
        csubsessioncircuitid.value_namespace = name_space;
        csubsessioncircuitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionCreationTime")
    {
        csubsessioncreationtime = value;
        csubsessioncreationtime.value_namespace = name_space;
        csubsessioncreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDerivedCfg")
    {
        csubsessionderivedcfg = value;
        csubsessionderivedcfg.value_namespace = name_space;
        csubsessionderivedcfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDhcpClass")
    {
        csubsessiondhcpclass = value;
        csubsessiondhcpclass.value_namespace = name_space;
        csubsessiondhcpclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDnis")
    {
        csubsessiondnis = value;
        csubsessiondnis.value_namespace = name_space;
        csubsessiondnis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomain")
    {
        csubsessiondomain = value;
        csubsessiondomain.value_namespace = name_space;
        csubsessiondomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainIpAddr")
    {
        csubsessiondomainipaddr = value;
        csubsessiondomainipaddr.value_namespace = name_space;
        csubsessiondomainipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainIpAddrType")
    {
        csubsessiondomainipaddrtype = value;
        csubsessiondomainipaddrtype.value_namespace = name_space;
        csubsessiondomainipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainIpMask")
    {
        csubsessiondomainipmask = value;
        csubsessiondomainipmask.value_namespace = name_space;
        csubsessiondomainipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainVrf")
    {
        csubsessiondomainvrf = value;
        csubsessiondomainvrf.value_namespace = name_space;
        csubsessiondomainvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionIpAddrAssignment")
    {
        csubsessionipaddrassignment = value;
        csubsessionipaddrassignment.value_namespace = name_space;
        csubsessionipaddrassignment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionLastChanged")
    {
        csubsessionlastchanged = value;
        csubsessionlastchanged.value_namespace = name_space;
        csubsessionlastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionLocationIdentifier")
    {
        csubsessionlocationidentifier = value;
        csubsessionlocationidentifier.value_namespace = name_space;
        csubsessionlocationidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionMacAddress")
    {
        csubsessionmacaddress = value;
        csubsessionmacaddress.value_namespace = name_space;
        csubsessionmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionMedia")
    {
        csubsessionmedia = value;
        csubsessionmedia.value_namespace = name_space;
        csubsessionmedia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionMlpNegotiated")
    {
        csubsessionmlpnegotiated = value;
        csubsessionmlpnegotiated.value_namespace = name_space;
        csubsessionmlpnegotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNasPort")
    {
        csubsessionnasport = value;
        csubsessionnasport.value_namespace = name_space;
        csubsessionnasport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddr")
    {
        csubsessionnativeipaddr = value;
        csubsessionnativeipaddr.value_namespace = name_space;
        csubsessionnativeipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddr2")
    {
        csubsessionnativeipaddr2 = value;
        csubsessionnativeipaddr2.value_namespace = name_space;
        csubsessionnativeipaddr2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddrType")
    {
        csubsessionnativeipaddrtype = value;
        csubsessionnativeipaddrtype.value_namespace = name_space;
        csubsessionnativeipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddrType2")
    {
        csubsessionnativeipaddrtype2 = value;
        csubsessionnativeipaddrtype2.value_namespace = name_space;
        csubsessionnativeipaddrtype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpMask")
    {
        csubsessionnativeipmask = value;
        csubsessionnativeipmask.value_namespace = name_space;
        csubsessionnativeipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpMask2")
    {
        csubsessionnativeipmask2 = value;
        csubsessionnativeipmask2.value_namespace = name_space;
        csubsessionnativeipmask2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeVrf")
    {
        csubsessionnativevrf = value;
        csubsessionnativevrf.value_namespace = name_space;
        csubsessionnativevrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionPbhk")
    {
        csubsessionpbhk = value;
        csubsessionpbhk.value_namespace = name_space;
        csubsessionpbhk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionProtocol")
    {
        csubsessionprotocol = value;
        csubsessionprotocol.value_namespace = name_space;
        csubsessionprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionRedundancyMode")
    {
        csubsessionredundancymode = value;
        csubsessionredundancymode.value_namespace = name_space;
        csubsessionredundancymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionRemoteId")
    {
        csubsessionremoteid = value;
        csubsessionremoteid.value_namespace = name_space;
        csubsessionremoteid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionServiceIdentifier")
    {
        csubsessionserviceidentifier = value;
        csubsessionserviceidentifier.value_namespace = name_space;
        csubsessionserviceidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionState")
    {
        csubsessionstate = value;
        csubsessionstate.value_namespace = name_space;
        csubsessionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionSubscriberLabel")
    {
        csubsessionsubscriberlabel = value;
        csubsessionsubscriberlabel.value_namespace = name_space;
        csubsessionsubscriberlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionTunnelName")
    {
        csubsessiontunnelname = value;
        csubsessiontunnelname.value_namespace = name_space;
        csubsessiontunnelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionType")
    {
        csubsessiontype = value;
        csubsessiontype.value_namespace = name_space;
        csubsessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionUsername")
    {
        csubsessionusername = value;
        csubsessionusername.value_namespace = name_space;
        csubsessionusername.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "csubSessionAcctSessionId")
    {
        csubsessionacctsessionid.yfilter = yfilter;
    }
    if(value_path == "csubSessionAuthenticated")
    {
        csubsessionauthenticated.yfilter = yfilter;
    }
    if(value_path == "csubSessionAvailableIdentities")
    {
        csubsessionavailableidentities.yfilter = yfilter;
    }
    if(value_path == "csubSessionCircuitId")
    {
        csubsessioncircuitid.yfilter = yfilter;
    }
    if(value_path == "csubSessionCreationTime")
    {
        csubsessioncreationtime.yfilter = yfilter;
    }
    if(value_path == "csubSessionDerivedCfg")
    {
        csubsessionderivedcfg.yfilter = yfilter;
    }
    if(value_path == "csubSessionDhcpClass")
    {
        csubsessiondhcpclass.yfilter = yfilter;
    }
    if(value_path == "csubSessionDnis")
    {
        csubsessiondnis.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomain")
    {
        csubsessiondomain.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainIpAddr")
    {
        csubsessiondomainipaddr.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainIpAddrType")
    {
        csubsessiondomainipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainIpMask")
    {
        csubsessiondomainipmask.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainVrf")
    {
        csubsessiondomainvrf.yfilter = yfilter;
    }
    if(value_path == "csubSessionIpAddrAssignment")
    {
        csubsessionipaddrassignment.yfilter = yfilter;
    }
    if(value_path == "csubSessionLastChanged")
    {
        csubsessionlastchanged.yfilter = yfilter;
    }
    if(value_path == "csubSessionLocationIdentifier")
    {
        csubsessionlocationidentifier.yfilter = yfilter;
    }
    if(value_path == "csubSessionMacAddress")
    {
        csubsessionmacaddress.yfilter = yfilter;
    }
    if(value_path == "csubSessionMedia")
    {
        csubsessionmedia.yfilter = yfilter;
    }
    if(value_path == "csubSessionMlpNegotiated")
    {
        csubsessionmlpnegotiated.yfilter = yfilter;
    }
    if(value_path == "csubSessionNasPort")
    {
        csubsessionnasport.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddr")
    {
        csubsessionnativeipaddr.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddr2")
    {
        csubsessionnativeipaddr2.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddrType")
    {
        csubsessionnativeipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddrType2")
    {
        csubsessionnativeipaddrtype2.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpMask")
    {
        csubsessionnativeipmask.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpMask2")
    {
        csubsessionnativeipmask2.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeVrf")
    {
        csubsessionnativevrf.yfilter = yfilter;
    }
    if(value_path == "csubSessionPbhk")
    {
        csubsessionpbhk.yfilter = yfilter;
    }
    if(value_path == "csubSessionProtocol")
    {
        csubsessionprotocol.yfilter = yfilter;
    }
    if(value_path == "csubSessionRedundancyMode")
    {
        csubsessionredundancymode.yfilter = yfilter;
    }
    if(value_path == "csubSessionRemoteId")
    {
        csubsessionremoteid.yfilter = yfilter;
    }
    if(value_path == "csubSessionServiceIdentifier")
    {
        csubsessionserviceidentifier.yfilter = yfilter;
    }
    if(value_path == "csubSessionState")
    {
        csubsessionstate.yfilter = yfilter;
    }
    if(value_path == "csubSessionSubscriberLabel")
    {
        csubsessionsubscriberlabel.yfilter = yfilter;
    }
    if(value_path == "csubSessionTunnelName")
    {
        csubsessiontunnelname.yfilter = yfilter;
    }
    if(value_path == "csubSessionType")
    {
        csubsessiontype.yfilter = yfilter;
    }
    if(value_path == "csubSessionUsername")
    {
        csubsessionusername.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "csubSessionAcctSessionId" || name == "csubSessionAuthenticated" || name == "csubSessionAvailableIdentities" || name == "csubSessionCircuitId" || name == "csubSessionCreationTime" || name == "csubSessionDerivedCfg" || name == "csubSessionDhcpClass" || name == "csubSessionDnis" || name == "csubSessionDomain" || name == "csubSessionDomainIpAddr" || name == "csubSessionDomainIpAddrType" || name == "csubSessionDomainIpMask" || name == "csubSessionDomainVrf" || name == "csubSessionIpAddrAssignment" || name == "csubSessionLastChanged" || name == "csubSessionLocationIdentifier" || name == "csubSessionMacAddress" || name == "csubSessionMedia" || name == "csubSessionMlpNegotiated" || name == "csubSessionNasPort" || name == "csubSessionNativeIpAddr" || name == "csubSessionNativeIpAddr2" || name == "csubSessionNativeIpAddrType" || name == "csubSessionNativeIpAddrType2" || name == "csubSessionNativeIpMask" || name == "csubSessionNativeIpMask2" || name == "csubSessionNativeVrf" || name == "csubSessionPbhk" || name == "csubSessionProtocol" || name == "csubSessionRedundancyMode" || name == "csubSessionRemoteId" || name == "csubSessionServiceIdentifier" || name == "csubSessionState" || name == "csubSessionSubscriberLabel" || name == "csubSessionTunnelName" || name == "csubSessionType" || name == "csubSessionUsername")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypetable()
{
    yang_name = "csubSessionByTypeTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::~Csubsessionbytypetable()
{
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::has_data() const
{
    for (std::size_t index=0; index<csubsessionbytypeentry.size(); index++)
    {
        if(csubsessionbytypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::has_operation() const
{
    for (std::size_t index=0; index<csubsessionbytypeentry.size(); index++)
    {
        if(csubsessionbytypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubsessionbytypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionByTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessionbytypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessionbytypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubSessionByTypeEntry")
    {
        for(auto const & c : csubsessionbytypeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry>();
        c->parent = this;
        csubsessionbytypeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessionbytypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubsessionbytypeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubsessionbytypetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubsessionbytypetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionByTypeEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::Csubsessionbytypeentry()
    :
    csubsessionbytype{YType::enumeration, "csubSessionByType"},
    csubsessionifindex{YType::int32, "csubSessionIfIndex"}
{
    yang_name = "csubSessionByTypeEntry"; yang_parent_name = "csubSessionByTypeTable";
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::~Csubsessionbytypeentry()
{
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::has_data() const
{
    return csubsessionbytype.is_set
	|| csubsessionifindex.is_set;
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubsessionbytype.yfilter)
	|| ydk::is_set(csubsessionifindex.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionByTypeEntry" <<"[csubSessionByType='" <<csubsessionbytype <<"']" <<"[csubSessionIfIndex='" <<csubsessionifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubSessionByTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubsessionbytype.is_set || is_set(csubsessionbytype.yfilter)) leaf_name_data.push_back(csubsessionbytype.get_name_leafdata());
    if (csubsessionifindex.is_set || is_set(csubsessionifindex.yfilter)) leaf_name_data.push_back(csubsessionifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubSessionByType")
    {
        csubsessionbytype = value;
        csubsessionbytype.value_namespace = name_space;
        csubsessionbytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionIfIndex")
    {
        csubsessionifindex = value;
        csubsessionifindex.value_namespace = name_space;
        csubsessionifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubSessionByType")
    {
        csubsessionbytype.yfilter = yfilter;
    }
    if(value_path == "csubSessionIfIndex")
    {
        csubsessionifindex.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionByType" || name == "csubSessionIfIndex")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatstable()
{
    yang_name = "csubAggStatsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggstatstable::~Csubaggstatstable()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::has_data() const
{
    for (std::size_t index=0; index<csubaggstatsentry.size(); index++)
    {
        if(csubaggstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsentry.size(); index++)
    {
        if(csubaggstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubaggstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsEntry")
    {
        for(auto const & c : csubaggstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry>();
        c->parent = this;
        csubaggstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubaggstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubaggstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::Csubaggstatsentry()
    :
    csubaggstatspointtype{YType::enumeration, "csubAggStatsPointType"},
    csubaggstatspoint{YType::uint32, "csubAggStatsPoint"},
    csubaggstatssessiontype{YType::enumeration, "csubAggStatsSessionType"},
    csubaggstatsauthsessions{YType::uint32, "csubAggStatsAuthSessions"},
    csubaggstatsavgsessionrph{YType::uint32, "csubAggStatsAvgSessionRPH"},
    csubaggstatsavgsessionrpm{YType::uint32, "csubAggStatsAvgSessionRPM"},
    csubaggstatsavgsessionuptime{YType::uint32, "csubAggStatsAvgSessionUptime"},
    csubaggstatscurrauthsessions{YType::uint32, "csubAggStatsCurrAuthSessions"},
    csubaggstatscurrcreatedsessions{YType::uint32, "csubAggStatsCurrCreatedSessions"},
    csubaggstatscurrdiscsessions{YType::uint32, "csubAggStatsCurrDiscSessions"},
    csubaggstatscurrfailedsessions{YType::uint32, "csubAggStatsCurrFailedSessions"},
    csubaggstatscurrflowsup{YType::uint32, "csubAggStatsCurrFlowsUp"},
    csubaggstatscurrinvalidintervals{YType::uint32, "csubAggStatsCurrInvalidIntervals"},
    csubaggstatscurrtimeelapsed{YType::uint32, "csubAggStatsCurrTimeElapsed"},
    csubaggstatscurrupsessions{YType::uint32, "csubAggStatsCurrUpSessions"},
    csubaggstatscurrvalidintervals{YType::uint32, "csubAggStatsCurrValidIntervals"},
    csubaggstatsdayauthsessions{YType::uint32, "csubAggStatsDayAuthSessions"},
    csubaggstatsdaycreatedsessions{YType::uint32, "csubAggStatsDayCreatedSessions"},
    csubaggstatsdaydiscsessions{YType::uint32, "csubAggStatsDayDiscSessions"},
    csubaggstatsdayfailedsessions{YType::uint32, "csubAggStatsDayFailedSessions"},
    csubaggstatsdayupsessions{YType::uint32, "csubAggStatsDayUpSessions"},
    csubaggstatsdiscontinuitytime{YType::str, "csubAggStatsDiscontinuityTime"},
    csubaggstatshighupsessions{YType::uint32, "csubAggStatsHighUpSessions"},
    csubaggstatslightweightsessions{YType::uint32, "csubAggStatsLightWeightSessions"},
    csubaggstatspendingsessions{YType::uint32, "csubAggStatsPendingSessions"},
    csubaggstatsredsessions{YType::uint32, "csubAggStatsRedSessions"},
    csubaggstatsthrottleengagements{YType::uint64, "csubAggStatsThrottleEngagements"},
    csubaggstatstotalauthsessions{YType::uint64, "csubAggStatsTotalAuthSessions"},
    csubaggstatstotalcreatedsessions{YType::uint64, "csubAggStatsTotalCreatedSessions"},
    csubaggstatstotaldiscsessions{YType::uint64, "csubAggStatsTotalDiscSessions"},
    csubaggstatstotalfailedsessions{YType::uint64, "csubAggStatsTotalFailedSessions"},
    csubaggstatstotalflowsup{YType::uint64, "csubAggStatsTotalFlowsUp"},
    csubaggstatstotallightweightsessions{YType::uint64, "csubAggStatsTotalLightWeightSessions"},
    csubaggstatstotalupsessions{YType::uint64, "csubAggStatsTotalUpSessions"},
    csubaggstatsunauthsessions{YType::uint32, "csubAggStatsUnAuthSessions"},
    csubaggstatsupsessions{YType::uint32, "csubAggStatsUpSessions"}
{
    yang_name = "csubAggStatsEntry"; yang_parent_name = "csubAggStatsTable";
}

CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::~Csubaggstatsentry()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::has_data() const
{
    return csubaggstatspointtype.is_set
	|| csubaggstatspoint.is_set
	|| csubaggstatssessiontype.is_set
	|| csubaggstatsauthsessions.is_set
	|| csubaggstatsavgsessionrph.is_set
	|| csubaggstatsavgsessionrpm.is_set
	|| csubaggstatsavgsessionuptime.is_set
	|| csubaggstatscurrauthsessions.is_set
	|| csubaggstatscurrcreatedsessions.is_set
	|| csubaggstatscurrdiscsessions.is_set
	|| csubaggstatscurrfailedsessions.is_set
	|| csubaggstatscurrflowsup.is_set
	|| csubaggstatscurrinvalidintervals.is_set
	|| csubaggstatscurrtimeelapsed.is_set
	|| csubaggstatscurrupsessions.is_set
	|| csubaggstatscurrvalidintervals.is_set
	|| csubaggstatsdayauthsessions.is_set
	|| csubaggstatsdaycreatedsessions.is_set
	|| csubaggstatsdaydiscsessions.is_set
	|| csubaggstatsdayfailedsessions.is_set
	|| csubaggstatsdayupsessions.is_set
	|| csubaggstatsdiscontinuitytime.is_set
	|| csubaggstatshighupsessions.is_set
	|| csubaggstatslightweightsessions.is_set
	|| csubaggstatspendingsessions.is_set
	|| csubaggstatsredsessions.is_set
	|| csubaggstatsthrottleengagements.is_set
	|| csubaggstatstotalauthsessions.is_set
	|| csubaggstatstotalcreatedsessions.is_set
	|| csubaggstatstotaldiscsessions.is_set
	|| csubaggstatstotalfailedsessions.is_set
	|| csubaggstatstotalflowsup.is_set
	|| csubaggstatstotallightweightsessions.is_set
	|| csubaggstatstotalupsessions.is_set
	|| csubaggstatsunauthsessions.is_set
	|| csubaggstatsupsessions.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubaggstatspointtype.yfilter)
	|| ydk::is_set(csubaggstatspoint.yfilter)
	|| ydk::is_set(csubaggstatssessiontype.yfilter)
	|| ydk::is_set(csubaggstatsauthsessions.yfilter)
	|| ydk::is_set(csubaggstatsavgsessionrph.yfilter)
	|| ydk::is_set(csubaggstatsavgsessionrpm.yfilter)
	|| ydk::is_set(csubaggstatsavgsessionuptime.yfilter)
	|| ydk::is_set(csubaggstatscurrauthsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrcreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrdiscsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrflowsup.yfilter)
	|| ydk::is_set(csubaggstatscurrinvalidintervals.yfilter)
	|| ydk::is_set(csubaggstatscurrtimeelapsed.yfilter)
	|| ydk::is_set(csubaggstatscurrupsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrvalidintervals.yfilter)
	|| ydk::is_set(csubaggstatsdayauthsessions.yfilter)
	|| ydk::is_set(csubaggstatsdaycreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatsdaydiscsessions.yfilter)
	|| ydk::is_set(csubaggstatsdayfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatsdayupsessions.yfilter)
	|| ydk::is_set(csubaggstatsdiscontinuitytime.yfilter)
	|| ydk::is_set(csubaggstatshighupsessions.yfilter)
	|| ydk::is_set(csubaggstatslightweightsessions.yfilter)
	|| ydk::is_set(csubaggstatspendingsessions.yfilter)
	|| ydk::is_set(csubaggstatsredsessions.yfilter)
	|| ydk::is_set(csubaggstatsthrottleengagements.yfilter)
	|| ydk::is_set(csubaggstatstotalauthsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalcreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatstotaldiscsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalflowsup.yfilter)
	|| ydk::is_set(csubaggstatstotallightweightsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalupsessions.yfilter)
	|| ydk::is_set(csubaggstatsunauthsessions.yfilter)
	|| ydk::is_set(csubaggstatsupsessions.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsEntry" <<"[csubAggStatsPointType='" <<csubaggstatspointtype <<"']" <<"[csubAggStatsPoint='" <<csubaggstatspoint <<"']" <<"[csubAggStatsSessionType='" <<csubaggstatssessiontype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatspointtype.is_set || is_set(csubaggstatspointtype.yfilter)) leaf_name_data.push_back(csubaggstatspointtype.get_name_leafdata());
    if (csubaggstatspoint.is_set || is_set(csubaggstatspoint.yfilter)) leaf_name_data.push_back(csubaggstatspoint.get_name_leafdata());
    if (csubaggstatssessiontype.is_set || is_set(csubaggstatssessiontype.yfilter)) leaf_name_data.push_back(csubaggstatssessiontype.get_name_leafdata());
    if (csubaggstatsauthsessions.is_set || is_set(csubaggstatsauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsauthsessions.get_name_leafdata());
    if (csubaggstatsavgsessionrph.is_set || is_set(csubaggstatsavgsessionrph.yfilter)) leaf_name_data.push_back(csubaggstatsavgsessionrph.get_name_leafdata());
    if (csubaggstatsavgsessionrpm.is_set || is_set(csubaggstatsavgsessionrpm.yfilter)) leaf_name_data.push_back(csubaggstatsavgsessionrpm.get_name_leafdata());
    if (csubaggstatsavgsessionuptime.is_set || is_set(csubaggstatsavgsessionuptime.yfilter)) leaf_name_data.push_back(csubaggstatsavgsessionuptime.get_name_leafdata());
    if (csubaggstatscurrauthsessions.is_set || is_set(csubaggstatscurrauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrauthsessions.get_name_leafdata());
    if (csubaggstatscurrcreatedsessions.is_set || is_set(csubaggstatscurrcreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrcreatedsessions.get_name_leafdata());
    if (csubaggstatscurrdiscsessions.is_set || is_set(csubaggstatscurrdiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrdiscsessions.get_name_leafdata());
    if (csubaggstatscurrfailedsessions.is_set || is_set(csubaggstatscurrfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrfailedsessions.get_name_leafdata());
    if (csubaggstatscurrflowsup.is_set || is_set(csubaggstatscurrflowsup.yfilter)) leaf_name_data.push_back(csubaggstatscurrflowsup.get_name_leafdata());
    if (csubaggstatscurrinvalidintervals.is_set || is_set(csubaggstatscurrinvalidintervals.yfilter)) leaf_name_data.push_back(csubaggstatscurrinvalidintervals.get_name_leafdata());
    if (csubaggstatscurrtimeelapsed.is_set || is_set(csubaggstatscurrtimeelapsed.yfilter)) leaf_name_data.push_back(csubaggstatscurrtimeelapsed.get_name_leafdata());
    if (csubaggstatscurrupsessions.is_set || is_set(csubaggstatscurrupsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrupsessions.get_name_leafdata());
    if (csubaggstatscurrvalidintervals.is_set || is_set(csubaggstatscurrvalidintervals.yfilter)) leaf_name_data.push_back(csubaggstatscurrvalidintervals.get_name_leafdata());
    if (csubaggstatsdayauthsessions.is_set || is_set(csubaggstatsdayauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdayauthsessions.get_name_leafdata());
    if (csubaggstatsdaycreatedsessions.is_set || is_set(csubaggstatsdaycreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdaycreatedsessions.get_name_leafdata());
    if (csubaggstatsdaydiscsessions.is_set || is_set(csubaggstatsdaydiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdaydiscsessions.get_name_leafdata());
    if (csubaggstatsdayfailedsessions.is_set || is_set(csubaggstatsdayfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdayfailedsessions.get_name_leafdata());
    if (csubaggstatsdayupsessions.is_set || is_set(csubaggstatsdayupsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdayupsessions.get_name_leafdata());
    if (csubaggstatsdiscontinuitytime.is_set || is_set(csubaggstatsdiscontinuitytime.yfilter)) leaf_name_data.push_back(csubaggstatsdiscontinuitytime.get_name_leafdata());
    if (csubaggstatshighupsessions.is_set || is_set(csubaggstatshighupsessions.yfilter)) leaf_name_data.push_back(csubaggstatshighupsessions.get_name_leafdata());
    if (csubaggstatslightweightsessions.is_set || is_set(csubaggstatslightweightsessions.yfilter)) leaf_name_data.push_back(csubaggstatslightweightsessions.get_name_leafdata());
    if (csubaggstatspendingsessions.is_set || is_set(csubaggstatspendingsessions.yfilter)) leaf_name_data.push_back(csubaggstatspendingsessions.get_name_leafdata());
    if (csubaggstatsredsessions.is_set || is_set(csubaggstatsredsessions.yfilter)) leaf_name_data.push_back(csubaggstatsredsessions.get_name_leafdata());
    if (csubaggstatsthrottleengagements.is_set || is_set(csubaggstatsthrottleengagements.yfilter)) leaf_name_data.push_back(csubaggstatsthrottleengagements.get_name_leafdata());
    if (csubaggstatstotalauthsessions.is_set || is_set(csubaggstatstotalauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalauthsessions.get_name_leafdata());
    if (csubaggstatstotalcreatedsessions.is_set || is_set(csubaggstatstotalcreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalcreatedsessions.get_name_leafdata());
    if (csubaggstatstotaldiscsessions.is_set || is_set(csubaggstatstotaldiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotaldiscsessions.get_name_leafdata());
    if (csubaggstatstotalfailedsessions.is_set || is_set(csubaggstatstotalfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalfailedsessions.get_name_leafdata());
    if (csubaggstatstotalflowsup.is_set || is_set(csubaggstatstotalflowsup.yfilter)) leaf_name_data.push_back(csubaggstatstotalflowsup.get_name_leafdata());
    if (csubaggstatstotallightweightsessions.is_set || is_set(csubaggstatstotallightweightsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotallightweightsessions.get_name_leafdata());
    if (csubaggstatstotalupsessions.is_set || is_set(csubaggstatstotalupsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalupsessions.get_name_leafdata());
    if (csubaggstatsunauthsessions.is_set || is_set(csubaggstatsunauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsunauthsessions.get_name_leafdata());
    if (csubaggstatsupsessions.is_set || is_set(csubaggstatsupsessions.yfilter)) leaf_name_data.push_back(csubaggstatsupsessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubAggStatsPointType")
    {
        csubaggstatspointtype = value;
        csubaggstatspointtype.value_namespace = name_space;
        csubaggstatspointtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsPoint")
    {
        csubaggstatspoint = value;
        csubaggstatspoint.value_namespace = name_space;
        csubaggstatspoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsSessionType")
    {
        csubaggstatssessiontype = value;
        csubaggstatssessiontype.value_namespace = name_space;
        csubaggstatssessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAuthSessions")
    {
        csubaggstatsauthsessions = value;
        csubaggstatsauthsessions.value_namespace = name_space;
        csubaggstatsauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAvgSessionRPH")
    {
        csubaggstatsavgsessionrph = value;
        csubaggstatsavgsessionrph.value_namespace = name_space;
        csubaggstatsavgsessionrph.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAvgSessionRPM")
    {
        csubaggstatsavgsessionrpm = value;
        csubaggstatsavgsessionrpm.value_namespace = name_space;
        csubaggstatsavgsessionrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAvgSessionUptime")
    {
        csubaggstatsavgsessionuptime = value;
        csubaggstatsavgsessionuptime.value_namespace = name_space;
        csubaggstatsavgsessionuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrAuthSessions")
    {
        csubaggstatscurrauthsessions = value;
        csubaggstatscurrauthsessions.value_namespace = name_space;
        csubaggstatscurrauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrCreatedSessions")
    {
        csubaggstatscurrcreatedsessions = value;
        csubaggstatscurrcreatedsessions.value_namespace = name_space;
        csubaggstatscurrcreatedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrDiscSessions")
    {
        csubaggstatscurrdiscsessions = value;
        csubaggstatscurrdiscsessions.value_namespace = name_space;
        csubaggstatscurrdiscsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrFailedSessions")
    {
        csubaggstatscurrfailedsessions = value;
        csubaggstatscurrfailedsessions.value_namespace = name_space;
        csubaggstatscurrfailedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrFlowsUp")
    {
        csubaggstatscurrflowsup = value;
        csubaggstatscurrflowsup.value_namespace = name_space;
        csubaggstatscurrflowsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrInvalidIntervals")
    {
        csubaggstatscurrinvalidintervals = value;
        csubaggstatscurrinvalidintervals.value_namespace = name_space;
        csubaggstatscurrinvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrTimeElapsed")
    {
        csubaggstatscurrtimeelapsed = value;
        csubaggstatscurrtimeelapsed.value_namespace = name_space;
        csubaggstatscurrtimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrUpSessions")
    {
        csubaggstatscurrupsessions = value;
        csubaggstatscurrupsessions.value_namespace = name_space;
        csubaggstatscurrupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrValidIntervals")
    {
        csubaggstatscurrvalidintervals = value;
        csubaggstatscurrvalidintervals.value_namespace = name_space;
        csubaggstatscurrvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDayAuthSessions")
    {
        csubaggstatsdayauthsessions = value;
        csubaggstatsdayauthsessions.value_namespace = name_space;
        csubaggstatsdayauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDayCreatedSessions")
    {
        csubaggstatsdaycreatedsessions = value;
        csubaggstatsdaycreatedsessions.value_namespace = name_space;
        csubaggstatsdaycreatedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDayDiscSessions")
    {
        csubaggstatsdaydiscsessions = value;
        csubaggstatsdaydiscsessions.value_namespace = name_space;
        csubaggstatsdaydiscsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDayFailedSessions")
    {
        csubaggstatsdayfailedsessions = value;
        csubaggstatsdayfailedsessions.value_namespace = name_space;
        csubaggstatsdayfailedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDayUpSessions")
    {
        csubaggstatsdayupsessions = value;
        csubaggstatsdayupsessions.value_namespace = name_space;
        csubaggstatsdayupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDiscontinuityTime")
    {
        csubaggstatsdiscontinuitytime = value;
        csubaggstatsdiscontinuitytime.value_namespace = name_space;
        csubaggstatsdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsHighUpSessions")
    {
        csubaggstatshighupsessions = value;
        csubaggstatshighupsessions.value_namespace = name_space;
        csubaggstatshighupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsLightWeightSessions")
    {
        csubaggstatslightweightsessions = value;
        csubaggstatslightweightsessions.value_namespace = name_space;
        csubaggstatslightweightsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsPendingSessions")
    {
        csubaggstatspendingsessions = value;
        csubaggstatspendingsessions.value_namespace = name_space;
        csubaggstatspendingsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsRedSessions")
    {
        csubaggstatsredsessions = value;
        csubaggstatsredsessions.value_namespace = name_space;
        csubaggstatsredsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsThrottleEngagements")
    {
        csubaggstatsthrottleengagements = value;
        csubaggstatsthrottleengagements.value_namespace = name_space;
        csubaggstatsthrottleengagements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalAuthSessions")
    {
        csubaggstatstotalauthsessions = value;
        csubaggstatstotalauthsessions.value_namespace = name_space;
        csubaggstatstotalauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalCreatedSessions")
    {
        csubaggstatstotalcreatedsessions = value;
        csubaggstatstotalcreatedsessions.value_namespace = name_space;
        csubaggstatstotalcreatedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalDiscSessions")
    {
        csubaggstatstotaldiscsessions = value;
        csubaggstatstotaldiscsessions.value_namespace = name_space;
        csubaggstatstotaldiscsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalFailedSessions")
    {
        csubaggstatstotalfailedsessions = value;
        csubaggstatstotalfailedsessions.value_namespace = name_space;
        csubaggstatstotalfailedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalFlowsUp")
    {
        csubaggstatstotalflowsup = value;
        csubaggstatstotalflowsup.value_namespace = name_space;
        csubaggstatstotalflowsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalLightWeightSessions")
    {
        csubaggstatstotallightweightsessions = value;
        csubaggstatstotallightweightsessions.value_namespace = name_space;
        csubaggstatstotallightweightsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalUpSessions")
    {
        csubaggstatstotalupsessions = value;
        csubaggstatstotalupsessions.value_namespace = name_space;
        csubaggstatstotalupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsUnAuthSessions")
    {
        csubaggstatsunauthsessions = value;
        csubaggstatsunauthsessions.value_namespace = name_space;
        csubaggstatsunauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsUpSessions")
    {
        csubaggstatsupsessions = value;
        csubaggstatsupsessions.value_namespace = name_space;
        csubaggstatsupsessions.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubAggStatsPointType")
    {
        csubaggstatspointtype.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsPoint")
    {
        csubaggstatspoint.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsSessionType")
    {
        csubaggstatssessiontype.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAuthSessions")
    {
        csubaggstatsauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAvgSessionRPH")
    {
        csubaggstatsavgsessionrph.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAvgSessionRPM")
    {
        csubaggstatsavgsessionrpm.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAvgSessionUptime")
    {
        csubaggstatsavgsessionuptime.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrAuthSessions")
    {
        csubaggstatscurrauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrCreatedSessions")
    {
        csubaggstatscurrcreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrDiscSessions")
    {
        csubaggstatscurrdiscsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrFailedSessions")
    {
        csubaggstatscurrfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrFlowsUp")
    {
        csubaggstatscurrflowsup.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrInvalidIntervals")
    {
        csubaggstatscurrinvalidintervals.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrTimeElapsed")
    {
        csubaggstatscurrtimeelapsed.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrUpSessions")
    {
        csubaggstatscurrupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrValidIntervals")
    {
        csubaggstatscurrvalidintervals.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayAuthSessions")
    {
        csubaggstatsdayauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayCreatedSessions")
    {
        csubaggstatsdaycreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayDiscSessions")
    {
        csubaggstatsdaydiscsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayFailedSessions")
    {
        csubaggstatsdayfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayUpSessions")
    {
        csubaggstatsdayupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDiscontinuityTime")
    {
        csubaggstatsdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsHighUpSessions")
    {
        csubaggstatshighupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsLightWeightSessions")
    {
        csubaggstatslightweightsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsPendingSessions")
    {
        csubaggstatspendingsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsRedSessions")
    {
        csubaggstatsredsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsThrottleEngagements")
    {
        csubaggstatsthrottleengagements.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalAuthSessions")
    {
        csubaggstatstotalauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalCreatedSessions")
    {
        csubaggstatstotalcreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalDiscSessions")
    {
        csubaggstatstotaldiscsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalFailedSessions")
    {
        csubaggstatstotalfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalFlowsUp")
    {
        csubaggstatstotalflowsup.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalLightWeightSessions")
    {
        csubaggstatstotallightweightsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalUpSessions")
    {
        csubaggstatstotalupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsUnAuthSessions")
    {
        csubaggstatsunauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsUpSessions")
    {
        csubaggstatsupsessions.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsPointType" || name == "csubAggStatsPoint" || name == "csubAggStatsSessionType" || name == "csubAggStatsAuthSessions" || name == "csubAggStatsAvgSessionRPH" || name == "csubAggStatsAvgSessionRPM" || name == "csubAggStatsAvgSessionUptime" || name == "csubAggStatsCurrAuthSessions" || name == "csubAggStatsCurrCreatedSessions" || name == "csubAggStatsCurrDiscSessions" || name == "csubAggStatsCurrFailedSessions" || name == "csubAggStatsCurrFlowsUp" || name == "csubAggStatsCurrInvalidIntervals" || name == "csubAggStatsCurrTimeElapsed" || name == "csubAggStatsCurrUpSessions" || name == "csubAggStatsCurrValidIntervals" || name == "csubAggStatsDayAuthSessions" || name == "csubAggStatsDayCreatedSessions" || name == "csubAggStatsDayDiscSessions" || name == "csubAggStatsDayFailedSessions" || name == "csubAggStatsDayUpSessions" || name == "csubAggStatsDiscontinuityTime" || name == "csubAggStatsHighUpSessions" || name == "csubAggStatsLightWeightSessions" || name == "csubAggStatsPendingSessions" || name == "csubAggStatsRedSessions" || name == "csubAggStatsThrottleEngagements" || name == "csubAggStatsTotalAuthSessions" || name == "csubAggStatsTotalCreatedSessions" || name == "csubAggStatsTotalDiscSessions" || name == "csubAggStatsTotalFailedSessions" || name == "csubAggStatsTotalFlowsUp" || name == "csubAggStatsTotalLightWeightSessions" || name == "csubAggStatsTotalUpSessions" || name == "csubAggStatsUnAuthSessions" || name == "csubAggStatsUpSessions")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsinttable()
{
    yang_name = "csubAggStatsIntTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::~Csubaggstatsinttable()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::has_data() const
{
    for (std::size_t index=0; index<csubaggstatsintentry.size(); index++)
    {
        if(csubaggstatsintentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsintentry.size(); index++)
    {
        if(csubaggstatsintentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsinttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsIntTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsinttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsinttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsIntEntry")
    {
        for(auto const & c : csubaggstatsintentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry>();
        c->parent = this;
        csubaggstatsintentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsinttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubaggstatsintentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsinttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubaggstatsinttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsIntEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::Csubaggstatsintentry()
    :
    csubaggstatspointtype{YType::enumeration, "csubAggStatsPointType"},
    csubaggstatspoint{YType::str, "csubAggStatsPoint"},
    csubaggstatssessiontype{YType::enumeration, "csubAggStatsSessionType"},
    csubaggstatsintnumber{YType::uint32, "csubAggStatsIntNumber"},
    csubaggstatsintauthsessions{YType::uint32, "csubAggStatsIntAuthSessions"},
    csubaggstatsintcreatedsessions{YType::uint32, "csubAggStatsIntCreatedSessions"},
    csubaggstatsintdiscsessions{YType::uint32, "csubAggStatsIntDiscSessions"},
    csubaggstatsintfailedsessions{YType::uint32, "csubAggStatsIntFailedSessions"},
    csubaggstatsintupsessions{YType::uint32, "csubAggStatsIntUpSessions"},
    csubaggstatsintvalid{YType::boolean, "csubAggStatsIntValid"}
{
    yang_name = "csubAggStatsIntEntry"; yang_parent_name = "csubAggStatsIntTable";
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::~Csubaggstatsintentry()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::has_data() const
{
    return csubaggstatspointtype.is_set
	|| csubaggstatspoint.is_set
	|| csubaggstatssessiontype.is_set
	|| csubaggstatsintnumber.is_set
	|| csubaggstatsintauthsessions.is_set
	|| csubaggstatsintcreatedsessions.is_set
	|| csubaggstatsintdiscsessions.is_set
	|| csubaggstatsintfailedsessions.is_set
	|| csubaggstatsintupsessions.is_set
	|| csubaggstatsintvalid.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubaggstatspointtype.yfilter)
	|| ydk::is_set(csubaggstatspoint.yfilter)
	|| ydk::is_set(csubaggstatssessiontype.yfilter)
	|| ydk::is_set(csubaggstatsintnumber.yfilter)
	|| ydk::is_set(csubaggstatsintauthsessions.yfilter)
	|| ydk::is_set(csubaggstatsintcreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatsintdiscsessions.yfilter)
	|| ydk::is_set(csubaggstatsintfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatsintupsessions.yfilter)
	|| ydk::is_set(csubaggstatsintvalid.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsIntEntry" <<"[csubAggStatsPointType='" <<csubaggstatspointtype <<"']" <<"[csubAggStatsPoint='" <<csubaggstatspoint <<"']" <<"[csubAggStatsSessionType='" <<csubaggstatssessiontype <<"']" <<"[csubAggStatsIntNumber='" <<csubaggstatsintnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsIntTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatspointtype.is_set || is_set(csubaggstatspointtype.yfilter)) leaf_name_data.push_back(csubaggstatspointtype.get_name_leafdata());
    if (csubaggstatspoint.is_set || is_set(csubaggstatspoint.yfilter)) leaf_name_data.push_back(csubaggstatspoint.get_name_leafdata());
    if (csubaggstatssessiontype.is_set || is_set(csubaggstatssessiontype.yfilter)) leaf_name_data.push_back(csubaggstatssessiontype.get_name_leafdata());
    if (csubaggstatsintnumber.is_set || is_set(csubaggstatsintnumber.yfilter)) leaf_name_data.push_back(csubaggstatsintnumber.get_name_leafdata());
    if (csubaggstatsintauthsessions.is_set || is_set(csubaggstatsintauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintauthsessions.get_name_leafdata());
    if (csubaggstatsintcreatedsessions.is_set || is_set(csubaggstatsintcreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintcreatedsessions.get_name_leafdata());
    if (csubaggstatsintdiscsessions.is_set || is_set(csubaggstatsintdiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintdiscsessions.get_name_leafdata());
    if (csubaggstatsintfailedsessions.is_set || is_set(csubaggstatsintfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintfailedsessions.get_name_leafdata());
    if (csubaggstatsintupsessions.is_set || is_set(csubaggstatsintupsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintupsessions.get_name_leafdata());
    if (csubaggstatsintvalid.is_set || is_set(csubaggstatsintvalid.yfilter)) leaf_name_data.push_back(csubaggstatsintvalid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubAggStatsPointType")
    {
        csubaggstatspointtype = value;
        csubaggstatspointtype.value_namespace = name_space;
        csubaggstatspointtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsPoint")
    {
        csubaggstatspoint = value;
        csubaggstatspoint.value_namespace = name_space;
        csubaggstatspoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsSessionType")
    {
        csubaggstatssessiontype = value;
        csubaggstatssessiontype.value_namespace = name_space;
        csubaggstatssessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntNumber")
    {
        csubaggstatsintnumber = value;
        csubaggstatsintnumber.value_namespace = name_space;
        csubaggstatsintnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntAuthSessions")
    {
        csubaggstatsintauthsessions = value;
        csubaggstatsintauthsessions.value_namespace = name_space;
        csubaggstatsintauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntCreatedSessions")
    {
        csubaggstatsintcreatedsessions = value;
        csubaggstatsintcreatedsessions.value_namespace = name_space;
        csubaggstatsintcreatedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntDiscSessions")
    {
        csubaggstatsintdiscsessions = value;
        csubaggstatsintdiscsessions.value_namespace = name_space;
        csubaggstatsintdiscsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntFailedSessions")
    {
        csubaggstatsintfailedsessions = value;
        csubaggstatsintfailedsessions.value_namespace = name_space;
        csubaggstatsintfailedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntUpSessions")
    {
        csubaggstatsintupsessions = value;
        csubaggstatsintupsessions.value_namespace = name_space;
        csubaggstatsintupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntValid")
    {
        csubaggstatsintvalid = value;
        csubaggstatsintvalid.value_namespace = name_space;
        csubaggstatsintvalid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubAggStatsPointType")
    {
        csubaggstatspointtype.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsPoint")
    {
        csubaggstatspoint.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsSessionType")
    {
        csubaggstatssessiontype.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntNumber")
    {
        csubaggstatsintnumber.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntAuthSessions")
    {
        csubaggstatsintauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntCreatedSessions")
    {
        csubaggstatsintcreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntDiscSessions")
    {
        csubaggstatsintdiscsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntFailedSessions")
    {
        csubaggstatsintfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntUpSessions")
    {
        csubaggstatsintupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntValid")
    {
        csubaggstatsintvalid.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsPointType" || name == "csubAggStatsPoint" || name == "csubAggStatsSessionType" || name == "csubAggStatsIntNumber" || name == "csubAggStatsIntAuthSessions" || name == "csubAggStatsIntCreatedSessions" || name == "csubAggStatsIntDiscSessions" || name == "csubAggStatsIntFailedSessions" || name == "csubAggStatsIntUpSessions" || name == "csubAggStatsIntValid")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshtable()
{
    yang_name = "csubAggStatsThreshTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::~Csubaggstatsthreshtable()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::has_data() const
{
    for (std::size_t index=0; index<csubaggstatsthreshentry.size(); index++)
    {
        if(csubaggstatsthreshentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsthreshentry.size(); index++)
    {
        if(csubaggstatsthreshentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsThreshTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsThreshEntry")
    {
        for(auto const & c : csubaggstatsthreshentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry>();
        c->parent = this;
        csubaggstatsthreshentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubaggstatsthreshentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsthreshtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubaggstatsthreshtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsThreshEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::Csubaggstatsthreshentry()
    :
    csubsessionrisingthresh{YType::uint32, "csubSessionRisingThresh"},
    csubsessiondeltapercentfallingthresh{YType::uint32, "csubSessionDeltaPercentFallingThresh"},
    csubsessionfallingthresh{YType::uint32, "csubSessionFallingThresh"},
    csubsessionthreshevalinterval{YType::uint32, "csubSessionThreshEvalInterval"}
{
    yang_name = "csubAggStatsThreshEntry"; yang_parent_name = "csubAggStatsThreshTable";
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::~Csubaggstatsthreshentry()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::has_data() const
{
    return csubsessionrisingthresh.is_set
	|| csubsessiondeltapercentfallingthresh.is_set
	|| csubsessionfallingthresh.is_set
	|| csubsessionthreshevalinterval.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubsessionrisingthresh.yfilter)
	|| ydk::is_set(csubsessiondeltapercentfallingthresh.yfilter)
	|| ydk::is_set(csubsessionfallingthresh.yfilter)
	|| ydk::is_set(csubsessionthreshevalinterval.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsThreshEntry" <<"[csubSessionRisingThresh='" <<csubsessionrisingthresh <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsThreshTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubsessionrisingthresh.is_set || is_set(csubsessionrisingthresh.yfilter)) leaf_name_data.push_back(csubsessionrisingthresh.get_name_leafdata());
    if (csubsessiondeltapercentfallingthresh.is_set || is_set(csubsessiondeltapercentfallingthresh.yfilter)) leaf_name_data.push_back(csubsessiondeltapercentfallingthresh.get_name_leafdata());
    if (csubsessionfallingthresh.is_set || is_set(csubsessionfallingthresh.yfilter)) leaf_name_data.push_back(csubsessionfallingthresh.get_name_leafdata());
    if (csubsessionthreshevalinterval.is_set || is_set(csubsessionthreshevalinterval.yfilter)) leaf_name_data.push_back(csubsessionthreshevalinterval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubSessionRisingThresh")
    {
        csubsessionrisingthresh = value;
        csubsessionrisingthresh.value_namespace = name_space;
        csubsessionrisingthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDeltaPercentFallingThresh")
    {
        csubsessiondeltapercentfallingthresh = value;
        csubsessiondeltapercentfallingthresh.value_namespace = name_space;
        csubsessiondeltapercentfallingthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionFallingThresh")
    {
        csubsessionfallingthresh = value;
        csubsessionfallingthresh.value_namespace = name_space;
        csubsessionfallingthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionThreshEvalInterval")
    {
        csubsessionthreshevalinterval = value;
        csubsessionthreshevalinterval.value_namespace = name_space;
        csubsessionthreshevalinterval.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubSessionRisingThresh")
    {
        csubsessionrisingthresh.yfilter = yfilter;
    }
    if(value_path == "csubSessionDeltaPercentFallingThresh")
    {
        csubsessiondeltapercentfallingthresh.yfilter = yfilter;
    }
    if(value_path == "csubSessionFallingThresh")
    {
        csubsessionfallingthresh.yfilter = yfilter;
    }
    if(value_path == "csubSessionThreshEvalInterval")
    {
        csubsessionthreshevalinterval.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionRisingThresh" || name == "csubSessionDeltaPercentFallingThresh" || name == "csubSessionFallingThresh" || name == "csubSessionThreshEvalInterval")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobtable::Csubjobtable()
{
    yang_name = "csubJobTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobtable::~Csubjobtable()
{
}

bool CiscoSubscriberSessionMib::Csubjobtable::has_data() const
{
    for (std::size_t index=0; index<csubjobentry.size(); index++)
    {
        if(csubjobentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobtable::has_operation() const
{
    for (std::size_t index=0; index<csubjobentry.size(); index++)
    {
        if(csubjobentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobEntry")
    {
        for(auto const & c : csubjobentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry>();
        c->parent = this;
        csubjobentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubjobtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubjobtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobentry()
    :
    csubjobid{YType::uint32, "csubJobId"},
    csubjobcontrol{YType::enumeration, "csubJobControl"},
    csubjobfinishedreason{YType::enumeration, "csubJobFinishedReason"},
    csubjobfinishedtime{YType::uint32, "csubJobFinishedTime"},
    csubjobstartedtime{YType::uint32, "csubJobStartedTime"},
    csubjobstate{YType::enumeration, "csubJobState"},
    csubjobstatus{YType::enumeration, "csubJobStatus"},
    csubjobstorage{YType::enumeration, "csubJobStorage"},
    csubjobtype{YType::enumeration, "csubJobType"}
{
    yang_name = "csubJobEntry"; yang_parent_name = "csubJobTable";
}

CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::~Csubjobentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobcontrol.is_set
	|| csubjobfinishedreason.is_set
	|| csubjobfinishedtime.is_set
	|| csubjobstartedtime.is_set
	|| csubjobstate.is_set
	|| csubjobstatus.is_set
	|| csubjobstorage.is_set
	|| csubjobtype.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobcontrol.yfilter)
	|| ydk::is_set(csubjobfinishedreason.yfilter)
	|| ydk::is_set(csubjobfinishedtime.yfilter)
	|| ydk::is_set(csubjobstartedtime.yfilter)
	|| ydk::is_set(csubjobstate.yfilter)
	|| ydk::is_set(csubjobstatus.yfilter)
	|| ydk::is_set(csubjobstorage.yfilter)
	|| ydk::is_set(csubjobtype.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobEntry" <<"[csubJobId='" <<csubjobid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobcontrol.is_set || is_set(csubjobcontrol.yfilter)) leaf_name_data.push_back(csubjobcontrol.get_name_leafdata());
    if (csubjobfinishedreason.is_set || is_set(csubjobfinishedreason.yfilter)) leaf_name_data.push_back(csubjobfinishedreason.get_name_leafdata());
    if (csubjobfinishedtime.is_set || is_set(csubjobfinishedtime.yfilter)) leaf_name_data.push_back(csubjobfinishedtime.get_name_leafdata());
    if (csubjobstartedtime.is_set || is_set(csubjobstartedtime.yfilter)) leaf_name_data.push_back(csubjobstartedtime.get_name_leafdata());
    if (csubjobstate.is_set || is_set(csubjobstate.yfilter)) leaf_name_data.push_back(csubjobstate.get_name_leafdata());
    if (csubjobstatus.is_set || is_set(csubjobstatus.yfilter)) leaf_name_data.push_back(csubjobstatus.get_name_leafdata());
    if (csubjobstorage.is_set || is_set(csubjobstorage.yfilter)) leaf_name_data.push_back(csubjobstorage.get_name_leafdata());
    if (csubjobtype.is_set || is_set(csubjobtype.yfilter)) leaf_name_data.push_back(csubjobtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
        csubjobid.value_namespace = name_space;
        csubjobid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobControl")
    {
        csubjobcontrol = value;
        csubjobcontrol.value_namespace = name_space;
        csubjobcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobFinishedReason")
    {
        csubjobfinishedreason = value;
        csubjobfinishedreason.value_namespace = name_space;
        csubjobfinishedreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobFinishedTime")
    {
        csubjobfinishedtime = value;
        csubjobfinishedtime.value_namespace = name_space;
        csubjobfinishedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobStartedTime")
    {
        csubjobstartedtime = value;
        csubjobstartedtime.value_namespace = name_space;
        csubjobstartedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobState")
    {
        csubjobstate = value;
        csubjobstate.value_namespace = name_space;
        csubjobstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobStatus")
    {
        csubjobstatus = value;
        csubjobstatus.value_namespace = name_space;
        csubjobstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobStorage")
    {
        csubjobstorage = value;
        csubjobstorage.value_namespace = name_space;
        csubjobstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobType")
    {
        csubjobtype = value;
        csubjobtype.value_namespace = name_space;
        csubjobtype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobId")
    {
        csubjobid.yfilter = yfilter;
    }
    if(value_path == "csubJobControl")
    {
        csubjobcontrol.yfilter = yfilter;
    }
    if(value_path == "csubJobFinishedReason")
    {
        csubjobfinishedreason.yfilter = yfilter;
    }
    if(value_path == "csubJobFinishedTime")
    {
        csubjobfinishedtime.yfilter = yfilter;
    }
    if(value_path == "csubJobStartedTime")
    {
        csubjobstartedtime.yfilter = yfilter;
    }
    if(value_path == "csubJobState")
    {
        csubjobstate.yfilter = yfilter;
    }
    if(value_path == "csubJobStatus")
    {
        csubjobstatus.yfilter = yfilter;
    }
    if(value_path == "csubJobStorage")
    {
        csubjobstorage.yfilter = yfilter;
    }
    if(value_path == "csubJobType")
    {
        csubjobtype.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobControl" || name == "csubJobFinishedReason" || name == "csubJobFinishedTime" || name == "csubJobStartedTime" || name == "csubJobState" || name == "csubJobStatus" || name == "csubJobStorage" || name == "csubJobType")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamstable()
{
    yang_name = "csubJobMatchParamsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::~Csubjobmatchparamstable()
{
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::has_data() const
{
    for (std::size_t index=0; index<csubjobmatchparamsentry.size(); index++)
    {
        if(csubjobmatchparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::has_operation() const
{
    for (std::size_t index=0; index<csubjobmatchparamsentry.size(); index++)
    {
        if(csubjobmatchparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobMatchParamsTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobMatchParamsEntry")
    {
        for(auto const & c : csubjobmatchparamsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry>();
        c->parent = this;
        csubjobmatchparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobmatchparamsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobmatchparamstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubjobmatchparamstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobMatchParamsEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::Csubjobmatchparamsentry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobmatchacctsessionid{YType::uint32, "csubJobMatchAcctSessionId"},
    csubjobmatchauthenticated{YType::boolean, "csubJobMatchAuthenticated"},
    csubjobmatchcircuitid{YType::str, "csubJobMatchCircuitId"},
    csubjobmatchdanglingduration{YType::uint32, "csubJobMatchDanglingDuration"},
    csubjobmatchdhcpclass{YType::str, "csubJobMatchDhcpClass"},
    csubjobmatchdnis{YType::str, "csubJobMatchDnis"},
    csubjobmatchdomain{YType::str, "csubJobMatchDomain"},
    csubjobmatchdomainipaddr{YType::str, "csubJobMatchDomainIpAddr"},
    csubjobmatchdomainipaddrtype{YType::enumeration, "csubJobMatchDomainIpAddrType"},
    csubjobmatchdomainipmask{YType::str, "csubJobMatchDomainIpMask"},
    csubjobmatchdomainvrf{YType::str, "csubJobMatchDomainVrf"},
    csubjobmatchidentities{YType::bits, "csubJobMatchIdentities"},
    csubjobmatchmacaddress{YType::str, "csubJobMatchMacAddress"},
    csubjobmatchmedia{YType::enumeration, "csubJobMatchMedia"},
    csubjobmatchmlpnegotiated{YType::boolean, "csubJobMatchMlpNegotiated"},
    csubjobmatchnasport{YType::str, "csubJobMatchNasPort"},
    csubjobmatchnativeipaddr{YType::str, "csubJobMatchNativeIpAddr"},
    csubjobmatchnativeipaddrtype{YType::enumeration, "csubJobMatchNativeIpAddrType"},
    csubjobmatchnativeipmask{YType::str, "csubJobMatchNativeIpMask"},
    csubjobmatchnativevrf{YType::str, "csubJobMatchNativeVrf"},
    csubjobmatchotherparams{YType::bits, "csubJobMatchOtherParams"},
    csubjobmatchpbhk{YType::str, "csubJobMatchPbhk"},
    csubjobmatchprotocol{YType::enumeration, "csubJobMatchProtocol"},
    csubjobmatchredundancymode{YType::enumeration, "csubJobMatchRedundancyMode"},
    csubjobmatchremoteid{YType::str, "csubJobMatchRemoteId"},
    csubjobmatchservicename{YType::str, "csubJobMatchServiceName"},
    csubjobmatchstate{YType::enumeration, "csubJobMatchState"},
    csubjobmatchsubscriberlabel{YType::uint32, "csubJobMatchSubscriberLabel"},
    csubjobmatchtunnelname{YType::str, "csubJobMatchTunnelName"},
    csubjobmatchusername{YType::str, "csubJobMatchUsername"}
{
    yang_name = "csubJobMatchParamsEntry"; yang_parent_name = "csubJobMatchParamsTable";
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::~Csubjobmatchparamsentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobmatchacctsessionid.is_set
	|| csubjobmatchauthenticated.is_set
	|| csubjobmatchcircuitid.is_set
	|| csubjobmatchdanglingduration.is_set
	|| csubjobmatchdhcpclass.is_set
	|| csubjobmatchdnis.is_set
	|| csubjobmatchdomain.is_set
	|| csubjobmatchdomainipaddr.is_set
	|| csubjobmatchdomainipaddrtype.is_set
	|| csubjobmatchdomainipmask.is_set
	|| csubjobmatchdomainvrf.is_set
	|| csubjobmatchidentities.is_set
	|| csubjobmatchmacaddress.is_set
	|| csubjobmatchmedia.is_set
	|| csubjobmatchmlpnegotiated.is_set
	|| csubjobmatchnasport.is_set
	|| csubjobmatchnativeipaddr.is_set
	|| csubjobmatchnativeipaddrtype.is_set
	|| csubjobmatchnativeipmask.is_set
	|| csubjobmatchnativevrf.is_set
	|| csubjobmatchotherparams.is_set
	|| csubjobmatchpbhk.is_set
	|| csubjobmatchprotocol.is_set
	|| csubjobmatchredundancymode.is_set
	|| csubjobmatchremoteid.is_set
	|| csubjobmatchservicename.is_set
	|| csubjobmatchstate.is_set
	|| csubjobmatchsubscriberlabel.is_set
	|| csubjobmatchtunnelname.is_set
	|| csubjobmatchusername.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobmatchacctsessionid.yfilter)
	|| ydk::is_set(csubjobmatchauthenticated.yfilter)
	|| ydk::is_set(csubjobmatchcircuitid.yfilter)
	|| ydk::is_set(csubjobmatchdanglingduration.yfilter)
	|| ydk::is_set(csubjobmatchdhcpclass.yfilter)
	|| ydk::is_set(csubjobmatchdnis.yfilter)
	|| ydk::is_set(csubjobmatchdomain.yfilter)
	|| ydk::is_set(csubjobmatchdomainipaddr.yfilter)
	|| ydk::is_set(csubjobmatchdomainipaddrtype.yfilter)
	|| ydk::is_set(csubjobmatchdomainipmask.yfilter)
	|| ydk::is_set(csubjobmatchdomainvrf.yfilter)
	|| ydk::is_set(csubjobmatchidentities.yfilter)
	|| ydk::is_set(csubjobmatchmacaddress.yfilter)
	|| ydk::is_set(csubjobmatchmedia.yfilter)
	|| ydk::is_set(csubjobmatchmlpnegotiated.yfilter)
	|| ydk::is_set(csubjobmatchnasport.yfilter)
	|| ydk::is_set(csubjobmatchnativeipaddr.yfilter)
	|| ydk::is_set(csubjobmatchnativeipaddrtype.yfilter)
	|| ydk::is_set(csubjobmatchnativeipmask.yfilter)
	|| ydk::is_set(csubjobmatchnativevrf.yfilter)
	|| ydk::is_set(csubjobmatchotherparams.yfilter)
	|| ydk::is_set(csubjobmatchpbhk.yfilter)
	|| ydk::is_set(csubjobmatchprotocol.yfilter)
	|| ydk::is_set(csubjobmatchredundancymode.yfilter)
	|| ydk::is_set(csubjobmatchremoteid.yfilter)
	|| ydk::is_set(csubjobmatchservicename.yfilter)
	|| ydk::is_set(csubjobmatchstate.yfilter)
	|| ydk::is_set(csubjobmatchsubscriberlabel.yfilter)
	|| ydk::is_set(csubjobmatchtunnelname.yfilter)
	|| ydk::is_set(csubjobmatchusername.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobMatchParamsEntry" <<"[csubJobId='" <<csubjobid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobMatchParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobmatchacctsessionid.is_set || is_set(csubjobmatchacctsessionid.yfilter)) leaf_name_data.push_back(csubjobmatchacctsessionid.get_name_leafdata());
    if (csubjobmatchauthenticated.is_set || is_set(csubjobmatchauthenticated.yfilter)) leaf_name_data.push_back(csubjobmatchauthenticated.get_name_leafdata());
    if (csubjobmatchcircuitid.is_set || is_set(csubjobmatchcircuitid.yfilter)) leaf_name_data.push_back(csubjobmatchcircuitid.get_name_leafdata());
    if (csubjobmatchdanglingduration.is_set || is_set(csubjobmatchdanglingduration.yfilter)) leaf_name_data.push_back(csubjobmatchdanglingduration.get_name_leafdata());
    if (csubjobmatchdhcpclass.is_set || is_set(csubjobmatchdhcpclass.yfilter)) leaf_name_data.push_back(csubjobmatchdhcpclass.get_name_leafdata());
    if (csubjobmatchdnis.is_set || is_set(csubjobmatchdnis.yfilter)) leaf_name_data.push_back(csubjobmatchdnis.get_name_leafdata());
    if (csubjobmatchdomain.is_set || is_set(csubjobmatchdomain.yfilter)) leaf_name_data.push_back(csubjobmatchdomain.get_name_leafdata());
    if (csubjobmatchdomainipaddr.is_set || is_set(csubjobmatchdomainipaddr.yfilter)) leaf_name_data.push_back(csubjobmatchdomainipaddr.get_name_leafdata());
    if (csubjobmatchdomainipaddrtype.is_set || is_set(csubjobmatchdomainipaddrtype.yfilter)) leaf_name_data.push_back(csubjobmatchdomainipaddrtype.get_name_leafdata());
    if (csubjobmatchdomainipmask.is_set || is_set(csubjobmatchdomainipmask.yfilter)) leaf_name_data.push_back(csubjobmatchdomainipmask.get_name_leafdata());
    if (csubjobmatchdomainvrf.is_set || is_set(csubjobmatchdomainvrf.yfilter)) leaf_name_data.push_back(csubjobmatchdomainvrf.get_name_leafdata());
    if (csubjobmatchidentities.is_set || is_set(csubjobmatchidentities.yfilter)) leaf_name_data.push_back(csubjobmatchidentities.get_name_leafdata());
    if (csubjobmatchmacaddress.is_set || is_set(csubjobmatchmacaddress.yfilter)) leaf_name_data.push_back(csubjobmatchmacaddress.get_name_leafdata());
    if (csubjobmatchmedia.is_set || is_set(csubjobmatchmedia.yfilter)) leaf_name_data.push_back(csubjobmatchmedia.get_name_leafdata());
    if (csubjobmatchmlpnegotiated.is_set || is_set(csubjobmatchmlpnegotiated.yfilter)) leaf_name_data.push_back(csubjobmatchmlpnegotiated.get_name_leafdata());
    if (csubjobmatchnasport.is_set || is_set(csubjobmatchnasport.yfilter)) leaf_name_data.push_back(csubjobmatchnasport.get_name_leafdata());
    if (csubjobmatchnativeipaddr.is_set || is_set(csubjobmatchnativeipaddr.yfilter)) leaf_name_data.push_back(csubjobmatchnativeipaddr.get_name_leafdata());
    if (csubjobmatchnativeipaddrtype.is_set || is_set(csubjobmatchnativeipaddrtype.yfilter)) leaf_name_data.push_back(csubjobmatchnativeipaddrtype.get_name_leafdata());
    if (csubjobmatchnativeipmask.is_set || is_set(csubjobmatchnativeipmask.yfilter)) leaf_name_data.push_back(csubjobmatchnativeipmask.get_name_leafdata());
    if (csubjobmatchnativevrf.is_set || is_set(csubjobmatchnativevrf.yfilter)) leaf_name_data.push_back(csubjobmatchnativevrf.get_name_leafdata());
    if (csubjobmatchotherparams.is_set || is_set(csubjobmatchotherparams.yfilter)) leaf_name_data.push_back(csubjobmatchotherparams.get_name_leafdata());
    if (csubjobmatchpbhk.is_set || is_set(csubjobmatchpbhk.yfilter)) leaf_name_data.push_back(csubjobmatchpbhk.get_name_leafdata());
    if (csubjobmatchprotocol.is_set || is_set(csubjobmatchprotocol.yfilter)) leaf_name_data.push_back(csubjobmatchprotocol.get_name_leafdata());
    if (csubjobmatchredundancymode.is_set || is_set(csubjobmatchredundancymode.yfilter)) leaf_name_data.push_back(csubjobmatchredundancymode.get_name_leafdata());
    if (csubjobmatchremoteid.is_set || is_set(csubjobmatchremoteid.yfilter)) leaf_name_data.push_back(csubjobmatchremoteid.get_name_leafdata());
    if (csubjobmatchservicename.is_set || is_set(csubjobmatchservicename.yfilter)) leaf_name_data.push_back(csubjobmatchservicename.get_name_leafdata());
    if (csubjobmatchstate.is_set || is_set(csubjobmatchstate.yfilter)) leaf_name_data.push_back(csubjobmatchstate.get_name_leafdata());
    if (csubjobmatchsubscriberlabel.is_set || is_set(csubjobmatchsubscriberlabel.yfilter)) leaf_name_data.push_back(csubjobmatchsubscriberlabel.get_name_leafdata());
    if (csubjobmatchtunnelname.is_set || is_set(csubjobmatchtunnelname.yfilter)) leaf_name_data.push_back(csubjobmatchtunnelname.get_name_leafdata());
    if (csubjobmatchusername.is_set || is_set(csubjobmatchusername.yfilter)) leaf_name_data.push_back(csubjobmatchusername.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
        csubjobid.value_namespace = name_space;
        csubjobid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchAcctSessionId")
    {
        csubjobmatchacctsessionid = value;
        csubjobmatchacctsessionid.value_namespace = name_space;
        csubjobmatchacctsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchAuthenticated")
    {
        csubjobmatchauthenticated = value;
        csubjobmatchauthenticated.value_namespace = name_space;
        csubjobmatchauthenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchCircuitId")
    {
        csubjobmatchcircuitid = value;
        csubjobmatchcircuitid.value_namespace = name_space;
        csubjobmatchcircuitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDanglingDuration")
    {
        csubjobmatchdanglingduration = value;
        csubjobmatchdanglingduration.value_namespace = name_space;
        csubjobmatchdanglingduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDhcpClass")
    {
        csubjobmatchdhcpclass = value;
        csubjobmatchdhcpclass.value_namespace = name_space;
        csubjobmatchdhcpclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDnis")
    {
        csubjobmatchdnis = value;
        csubjobmatchdnis.value_namespace = name_space;
        csubjobmatchdnis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomain")
    {
        csubjobmatchdomain = value;
        csubjobmatchdomain.value_namespace = name_space;
        csubjobmatchdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainIpAddr")
    {
        csubjobmatchdomainipaddr = value;
        csubjobmatchdomainipaddr.value_namespace = name_space;
        csubjobmatchdomainipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainIpAddrType")
    {
        csubjobmatchdomainipaddrtype = value;
        csubjobmatchdomainipaddrtype.value_namespace = name_space;
        csubjobmatchdomainipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainIpMask")
    {
        csubjobmatchdomainipmask = value;
        csubjobmatchdomainipmask.value_namespace = name_space;
        csubjobmatchdomainipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainVrf")
    {
        csubjobmatchdomainvrf = value;
        csubjobmatchdomainvrf.value_namespace = name_space;
        csubjobmatchdomainvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchIdentities")
    {
        csubjobmatchidentities[value] = true;
    }
    if(value_path == "csubJobMatchMacAddress")
    {
        csubjobmatchmacaddress = value;
        csubjobmatchmacaddress.value_namespace = name_space;
        csubjobmatchmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchMedia")
    {
        csubjobmatchmedia = value;
        csubjobmatchmedia.value_namespace = name_space;
        csubjobmatchmedia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchMlpNegotiated")
    {
        csubjobmatchmlpnegotiated = value;
        csubjobmatchmlpnegotiated.value_namespace = name_space;
        csubjobmatchmlpnegotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNasPort")
    {
        csubjobmatchnasport = value;
        csubjobmatchnasport.value_namespace = name_space;
        csubjobmatchnasport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeIpAddr")
    {
        csubjobmatchnativeipaddr = value;
        csubjobmatchnativeipaddr.value_namespace = name_space;
        csubjobmatchnativeipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeIpAddrType")
    {
        csubjobmatchnativeipaddrtype = value;
        csubjobmatchnativeipaddrtype.value_namespace = name_space;
        csubjobmatchnativeipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeIpMask")
    {
        csubjobmatchnativeipmask = value;
        csubjobmatchnativeipmask.value_namespace = name_space;
        csubjobmatchnativeipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeVrf")
    {
        csubjobmatchnativevrf = value;
        csubjobmatchnativevrf.value_namespace = name_space;
        csubjobmatchnativevrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchOtherParams")
    {
        csubjobmatchotherparams[value] = true;
    }
    if(value_path == "csubJobMatchPbhk")
    {
        csubjobmatchpbhk = value;
        csubjobmatchpbhk.value_namespace = name_space;
        csubjobmatchpbhk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchProtocol")
    {
        csubjobmatchprotocol = value;
        csubjobmatchprotocol.value_namespace = name_space;
        csubjobmatchprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchRedundancyMode")
    {
        csubjobmatchredundancymode = value;
        csubjobmatchredundancymode.value_namespace = name_space;
        csubjobmatchredundancymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchRemoteId")
    {
        csubjobmatchremoteid = value;
        csubjobmatchremoteid.value_namespace = name_space;
        csubjobmatchremoteid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchServiceName")
    {
        csubjobmatchservicename = value;
        csubjobmatchservicename.value_namespace = name_space;
        csubjobmatchservicename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchState")
    {
        csubjobmatchstate = value;
        csubjobmatchstate.value_namespace = name_space;
        csubjobmatchstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchSubscriberLabel")
    {
        csubjobmatchsubscriberlabel = value;
        csubjobmatchsubscriberlabel.value_namespace = name_space;
        csubjobmatchsubscriberlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchTunnelName")
    {
        csubjobmatchtunnelname = value;
        csubjobmatchtunnelname.value_namespace = name_space;
        csubjobmatchtunnelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchUsername")
    {
        csubjobmatchusername = value;
        csubjobmatchusername.value_namespace = name_space;
        csubjobmatchusername.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobId")
    {
        csubjobid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchAcctSessionId")
    {
        csubjobmatchacctsessionid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchAuthenticated")
    {
        csubjobmatchauthenticated.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchCircuitId")
    {
        csubjobmatchcircuitid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDanglingDuration")
    {
        csubjobmatchdanglingduration.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDhcpClass")
    {
        csubjobmatchdhcpclass.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDnis")
    {
        csubjobmatchdnis.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomain")
    {
        csubjobmatchdomain.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainIpAddr")
    {
        csubjobmatchdomainipaddr.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainIpAddrType")
    {
        csubjobmatchdomainipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainIpMask")
    {
        csubjobmatchdomainipmask.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainVrf")
    {
        csubjobmatchdomainvrf.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchIdentities")
    {
        csubjobmatchidentities.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchMacAddress")
    {
        csubjobmatchmacaddress.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchMedia")
    {
        csubjobmatchmedia.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchMlpNegotiated")
    {
        csubjobmatchmlpnegotiated.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNasPort")
    {
        csubjobmatchnasport.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeIpAddr")
    {
        csubjobmatchnativeipaddr.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeIpAddrType")
    {
        csubjobmatchnativeipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeIpMask")
    {
        csubjobmatchnativeipmask.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeVrf")
    {
        csubjobmatchnativevrf.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchOtherParams")
    {
        csubjobmatchotherparams.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchPbhk")
    {
        csubjobmatchpbhk.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchProtocol")
    {
        csubjobmatchprotocol.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchRedundancyMode")
    {
        csubjobmatchredundancymode.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchRemoteId")
    {
        csubjobmatchremoteid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchServiceName")
    {
        csubjobmatchservicename.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchState")
    {
        csubjobmatchstate.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchSubscriberLabel")
    {
        csubjobmatchsubscriberlabel.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchTunnelName")
    {
        csubjobmatchtunnelname.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchUsername")
    {
        csubjobmatchusername.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobMatchAcctSessionId" || name == "csubJobMatchAuthenticated" || name == "csubJobMatchCircuitId" || name == "csubJobMatchDanglingDuration" || name == "csubJobMatchDhcpClass" || name == "csubJobMatchDnis" || name == "csubJobMatchDomain" || name == "csubJobMatchDomainIpAddr" || name == "csubJobMatchDomainIpAddrType" || name == "csubJobMatchDomainIpMask" || name == "csubJobMatchDomainVrf" || name == "csubJobMatchIdentities" || name == "csubJobMatchMacAddress" || name == "csubJobMatchMedia" || name == "csubJobMatchMlpNegotiated" || name == "csubJobMatchNasPort" || name == "csubJobMatchNativeIpAddr" || name == "csubJobMatchNativeIpAddrType" || name == "csubJobMatchNativeIpMask" || name == "csubJobMatchNativeVrf" || name == "csubJobMatchOtherParams" || name == "csubJobMatchPbhk" || name == "csubJobMatchProtocol" || name == "csubJobMatchRedundancyMode" || name == "csubJobMatchRemoteId" || name == "csubJobMatchServiceName" || name == "csubJobMatchState" || name == "csubJobMatchSubscriberLabel" || name == "csubJobMatchTunnelName" || name == "csubJobMatchUsername")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamstable()
{
    yang_name = "csubJobQueryParamsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::~Csubjobqueryparamstable()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::has_data() const
{
    for (std::size_t index=0; index<csubjobqueryparamsentry.size(); index++)
    {
        if(csubjobqueryparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::has_operation() const
{
    for (std::size_t index=0; index<csubjobqueryparamsentry.size(); index++)
    {
        if(csubjobqueryparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueryParamsTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobQueryParamsEntry")
    {
        for(auto const & c : csubjobqueryparamsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry>();
        c->parent = this;
        csubjobqueryparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobqueryparamsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueryparamstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubjobqueryparamstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobQueryParamsEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::Csubjobqueryparamsentry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobqueryresultingreportsize{YType::uint32, "csubJobQueryResultingReportSize"},
    csubjobquerysortkey1{YType::enumeration, "csubJobQuerySortKey1"},
    csubjobquerysortkey2{YType::enumeration, "csubJobQuerySortKey2"},
    csubjobquerysortkey3{YType::enumeration, "csubJobQuerySortKey3"}
{
    yang_name = "csubJobQueryParamsEntry"; yang_parent_name = "csubJobQueryParamsTable";
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::~Csubjobqueryparamsentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobqueryresultingreportsize.is_set
	|| csubjobquerysortkey1.is_set
	|| csubjobquerysortkey2.is_set
	|| csubjobquerysortkey3.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobqueryresultingreportsize.yfilter)
	|| ydk::is_set(csubjobquerysortkey1.yfilter)
	|| ydk::is_set(csubjobquerysortkey2.yfilter)
	|| ydk::is_set(csubjobquerysortkey3.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueryParamsEntry" <<"[csubJobId='" <<csubjobid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobQueryParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobqueryresultingreportsize.is_set || is_set(csubjobqueryresultingreportsize.yfilter)) leaf_name_data.push_back(csubjobqueryresultingreportsize.get_name_leafdata());
    if (csubjobquerysortkey1.is_set || is_set(csubjobquerysortkey1.yfilter)) leaf_name_data.push_back(csubjobquerysortkey1.get_name_leafdata());
    if (csubjobquerysortkey2.is_set || is_set(csubjobquerysortkey2.yfilter)) leaf_name_data.push_back(csubjobquerysortkey2.get_name_leafdata());
    if (csubjobquerysortkey3.is_set || is_set(csubjobquerysortkey3.yfilter)) leaf_name_data.push_back(csubjobquerysortkey3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
        csubjobid.value_namespace = name_space;
        csubjobid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobQueryResultingReportSize")
    {
        csubjobqueryresultingreportsize = value;
        csubjobqueryresultingreportsize.value_namespace = name_space;
        csubjobqueryresultingreportsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobQuerySortKey1")
    {
        csubjobquerysortkey1 = value;
        csubjobquerysortkey1.value_namespace = name_space;
        csubjobquerysortkey1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobQuerySortKey2")
    {
        csubjobquerysortkey2 = value;
        csubjobquerysortkey2.value_namespace = name_space;
        csubjobquerysortkey2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobQuerySortKey3")
    {
        csubjobquerysortkey3 = value;
        csubjobquerysortkey3.value_namespace = name_space;
        csubjobquerysortkey3.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobId")
    {
        csubjobid.yfilter = yfilter;
    }
    if(value_path == "csubJobQueryResultingReportSize")
    {
        csubjobqueryresultingreportsize.yfilter = yfilter;
    }
    if(value_path == "csubJobQuerySortKey1")
    {
        csubjobquerysortkey1.yfilter = yfilter;
    }
    if(value_path == "csubJobQuerySortKey2")
    {
        csubjobquerysortkey2.yfilter = yfilter;
    }
    if(value_path == "csubJobQuerySortKey3")
    {
        csubjobquerysortkey3.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobQueryResultingReportSize" || name == "csubJobQuerySortKey1" || name == "csubJobQuerySortKey2" || name == "csubJobQuerySortKey3")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueuetable()
{
    yang_name = "csubJobQueueTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobqueuetable::~Csubjobqueuetable()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::has_data() const
{
    for (std::size_t index=0; index<csubjobqueueentry.size(); index++)
    {
        if(csubjobqueueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::has_operation() const
{
    for (std::size_t index=0; index<csubjobqueueentry.size(); index++)
    {
        if(csubjobqueueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobqueuetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueueTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueuetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueuetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobQueueEntry")
    {
        for(auto const & c : csubjobqueueentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry>();
        c->parent = this;
        csubjobqueueentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueuetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobqueueentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueuetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubjobqueuetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobQueueEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::Csubjobqueueentry()
    :
    csubjobqueuenumber{YType::uint32, "csubJobQueueNumber"},
    csubjobqueuejobid{YType::uint32, "csubJobQueueJobId"}
{
    yang_name = "csubJobQueueEntry"; yang_parent_name = "csubJobQueueTable";
}

CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::~Csubjobqueueentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::has_data() const
{
    return csubjobqueuenumber.is_set
	|| csubjobqueuejobid.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobqueuenumber.yfilter)
	|| ydk::is_set(csubjobqueuejobid.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueueEntry" <<"[csubJobQueueNumber='" <<csubjobqueuenumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobQueueTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobqueuenumber.is_set || is_set(csubjobqueuenumber.yfilter)) leaf_name_data.push_back(csubjobqueuenumber.get_name_leafdata());
    if (csubjobqueuejobid.is_set || is_set(csubjobqueuejobid.yfilter)) leaf_name_data.push_back(csubjobqueuejobid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobQueueNumber")
    {
        csubjobqueuenumber = value;
        csubjobqueuenumber.value_namespace = name_space;
        csubjobqueuenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobQueueJobId")
    {
        csubjobqueuejobid = value;
        csubjobqueuejobid.value_namespace = name_space;
        csubjobqueuejobid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobQueueNumber")
    {
        csubjobqueuenumber.yfilter = yfilter;
    }
    if(value_path == "csubJobQueueJobId")
    {
        csubjobqueuejobid.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobQueueNumber" || name == "csubJobQueueJobId")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreporttable()
{
    yang_name = "csubJobReportTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobreporttable::~Csubjobreporttable()
{
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::has_data() const
{
    for (std::size_t index=0; index<csubjobreportentry.size(); index++)
    {
        if(csubjobreportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::has_operation() const
{
    for (std::size_t index=0; index<csubjobreportentry.size(); index++)
    {
        if(csubjobreportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobreporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobReportTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobreporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobreporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobReportEntry")
    {
        for(auto const & c : csubjobreportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry>();
        c->parent = this;
        csubjobreportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobreporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobreportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobreporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSubscriberSessionMib::Csubjobreporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobReportEntry")
        return true;
    return false;
}

CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::Csubjobreportentry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobreportid{YType::uint32, "csubJobReportId"},
    csubjobreportsession{YType::int32, "csubJobReportSession"}
{
    yang_name = "csubJobReportEntry"; yang_parent_name = "csubJobReportTable";
}

CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::~Csubjobreportentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobreportid.is_set
	|| csubjobreportsession.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobreportid.yfilter)
	|| ydk::is_set(csubjobreportsession.yfilter);
}

std::string CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobReportEntry" <<"[csubJobId='" <<csubjobid <<"']" <<"[csubJobReportId='" <<csubjobreportid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobReportTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobreportid.is_set || is_set(csubjobreportid.yfilter)) leaf_name_data.push_back(csubjobreportid.get_name_leafdata());
    if (csubjobreportsession.is_set || is_set(csubjobreportsession.yfilter)) leaf_name_data.push_back(csubjobreportsession.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
        csubjobid.value_namespace = name_space;
        csubjobid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobReportId")
    {
        csubjobreportid = value;
        csubjobreportid.value_namespace = name_space;
        csubjobreportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobReportSession")
    {
        csubjobreportsession = value;
        csubjobreportsession.value_namespace = name_space;
        csubjobreportsession.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobId")
    {
        csubjobid.yfilter = yfilter;
    }
    if(value_path == "csubJobReportId")
    {
        csubjobreportid.yfilter = yfilter;
    }
    if(value_path == "csubJobReportSession")
    {
        csubjobreportsession.yfilter = yfilter;
    }
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobReportId" || name == "csubJobReportSession")
        return true;
    return false;
}

const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::none {1, "none"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::other {2, "other"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::static_ {3, "static"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::localPool {4, "localPool"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::dhcpv4 {5, "dhcpv4"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::dhcpv6 {6, "dhcpv6"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::userProfileIpAddr {7, "userProfileIpAddr"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::userProfileIpSubnet {8, "userProfileIpSubnet"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionipaddrassignment::userProfileNamedPool {9, "userProfileNamedPool"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::Csubaggstatspointtype::physical {1, "physical"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::Csubaggstatspointtype::interface {2, "interface"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobtype::noop {1, "noop"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobtype::query {2, "query"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobtype::clear {3, "clear"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobcontrol::noop {1, "noop"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobcontrol::start {2, "start"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobcontrol::abort {3, "abort"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobcontrol::release {4, "release"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobstate::idle {1, "idle"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobstate::pending {2, "pending"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobstate::inProgress {3, "inProgress"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobstate::finished {4, "finished"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobfinishedreason::invalid {1, "invalid"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobfinishedreason::other {2, "other"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobfinishedreason::normal {3, "normal"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobfinishedreason::aborted {4, "aborted"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobfinishedreason::insufficientResources {5, "insufficientResources"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobfinishedreason::error {6, "error"};


}
}

