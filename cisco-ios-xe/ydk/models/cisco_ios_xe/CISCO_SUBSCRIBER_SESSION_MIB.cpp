
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_SESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_SESSION_MIB {

CISCOSUBSCRIBERSESSIONMIB::CISCOSUBSCRIBERSESSIONMIB()
    :
    csubjob(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJob>())
    , csubaggthresh(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh>())
    , csubsessiontable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable>())
    , csubsessionbytypetable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable>())
    , csubaggstatstable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable>())
    , csubaggstatsinttable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable>())
    , csubaggstatsthreshtable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable>())
    , csubjobtable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobTable>())
    , csubjobmatchparamstable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable>())
    , csubjobqueryparamstable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable>())
    , csubjobqueuetable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable>())
    , csubjobreporttable(std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable>())
{
    csubjob->parent = this;
    csubaggthresh->parent = this;
    csubsessiontable->parent = this;
    csubsessionbytypetable->parent = this;
    csubaggstatstable->parent = this;
    csubaggstatsinttable->parent = this;
    csubaggstatsthreshtable->parent = this;
    csubjobtable->parent = this;
    csubjobmatchparamstable->parent = this;
    csubjobqueryparamstable->parent = this;
    csubjobqueuetable->parent = this;
    csubjobreporttable->parent = this;

    yang_name = "CISCO-SUBSCRIBER-SESSION-MIB"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::~CISCOSUBSCRIBERSESSIONMIB()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::has_data() const
{
    if (is_presence_container) return true;
    return (csubjob !=  nullptr && csubjob->has_data())
	|| (csubaggthresh !=  nullptr && csubaggthresh->has_data())
	|| (csubsessiontable !=  nullptr && csubsessiontable->has_data())
	|| (csubsessionbytypetable !=  nullptr && csubsessionbytypetable->has_data())
	|| (csubaggstatstable !=  nullptr && csubaggstatstable->has_data())
	|| (csubaggstatsinttable !=  nullptr && csubaggstatsinttable->has_data())
	|| (csubaggstatsthreshtable !=  nullptr && csubaggstatsthreshtable->has_data())
	|| (csubjobtable !=  nullptr && csubjobtable->has_data())
	|| (csubjobmatchparamstable !=  nullptr && csubjobmatchparamstable->has_data())
	|| (csubjobqueryparamstable !=  nullptr && csubjobqueryparamstable->has_data())
	|| (csubjobqueuetable !=  nullptr && csubjobqueuetable->has_data())
	|| (csubjobreporttable !=  nullptr && csubjobreporttable->has_data());
}

bool CISCOSUBSCRIBERSESSIONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (csubjob !=  nullptr && csubjob->has_operation())
	|| (csubaggthresh !=  nullptr && csubaggthresh->has_operation())
	|| (csubsessiontable !=  nullptr && csubsessiontable->has_operation())
	|| (csubsessionbytypetable !=  nullptr && csubsessionbytypetable->has_operation())
	|| (csubaggstatstable !=  nullptr && csubaggstatstable->has_operation())
	|| (csubaggstatsinttable !=  nullptr && csubaggstatsinttable->has_operation())
	|| (csubaggstatsthreshtable !=  nullptr && csubaggstatsthreshtable->has_operation())
	|| (csubjobtable !=  nullptr && csubjobtable->has_operation())
	|| (csubjobmatchparamstable !=  nullptr && csubjobmatchparamstable->has_operation())
	|| (csubjobqueryparamstable !=  nullptr && csubjobqueryparamstable->has_operation())
	|| (csubjobqueuetable !=  nullptr && csubjobqueuetable->has_operation())
	|| (csubjobreporttable !=  nullptr && csubjobreporttable->has_operation());
}

std::string CISCOSUBSCRIBERSESSIONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJob")
    {
        if(csubjob == nullptr)
        {
            csubjob = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJob>();
        }
        return csubjob;
    }

    if(child_yang_name == "csubAggThresh")
    {
        if(csubaggthresh == nullptr)
        {
            csubaggthresh = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh>();
        }
        return csubaggthresh;
    }

    if(child_yang_name == "csubSessionTable")
    {
        if(csubsessiontable == nullptr)
        {
            csubsessiontable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable>();
        }
        return csubsessiontable;
    }

    if(child_yang_name == "csubSessionByTypeTable")
    {
        if(csubsessionbytypetable == nullptr)
        {
            csubsessionbytypetable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable>();
        }
        return csubsessionbytypetable;
    }

    if(child_yang_name == "csubAggStatsTable")
    {
        if(csubaggstatstable == nullptr)
        {
            csubaggstatstable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable>();
        }
        return csubaggstatstable;
    }

    if(child_yang_name == "csubAggStatsIntTable")
    {
        if(csubaggstatsinttable == nullptr)
        {
            csubaggstatsinttable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable>();
        }
        return csubaggstatsinttable;
    }

    if(child_yang_name == "csubAggStatsThreshTable")
    {
        if(csubaggstatsthreshtable == nullptr)
        {
            csubaggstatsthreshtable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable>();
        }
        return csubaggstatsthreshtable;
    }

    if(child_yang_name == "csubJobTable")
    {
        if(csubjobtable == nullptr)
        {
            csubjobtable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobTable>();
        }
        return csubjobtable;
    }

    if(child_yang_name == "csubJobMatchParamsTable")
    {
        if(csubjobmatchparamstable == nullptr)
        {
            csubjobmatchparamstable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable>();
        }
        return csubjobmatchparamstable;
    }

    if(child_yang_name == "csubJobQueryParamsTable")
    {
        if(csubjobqueryparamstable == nullptr)
        {
            csubjobqueryparamstable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable>();
        }
        return csubjobqueryparamstable;
    }

    if(child_yang_name == "csubJobQueueTable")
    {
        if(csubjobqueuetable == nullptr)
        {
            csubjobqueuetable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable>();
        }
        return csubjobqueuetable;
    }

    if(child_yang_name == "csubJobReportTable")
    {
        if(csubjobreporttable == nullptr)
        {
            csubjobreporttable = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable>();
        }
        return csubjobreporttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csubjob != nullptr)
    {
        _children["csubJob"] = csubjob;
    }

    if(csubaggthresh != nullptr)
    {
        _children["csubAggThresh"] = csubaggthresh;
    }

    if(csubsessiontable != nullptr)
    {
        _children["csubSessionTable"] = csubsessiontable;
    }

    if(csubsessionbytypetable != nullptr)
    {
        _children["csubSessionByTypeTable"] = csubsessionbytypetable;
    }

    if(csubaggstatstable != nullptr)
    {
        _children["csubAggStatsTable"] = csubaggstatstable;
    }

    if(csubaggstatsinttable != nullptr)
    {
        _children["csubAggStatsIntTable"] = csubaggstatsinttable;
    }

    if(csubaggstatsthreshtable != nullptr)
    {
        _children["csubAggStatsThreshTable"] = csubaggstatsthreshtable;
    }

    if(csubjobtable != nullptr)
    {
        _children["csubJobTable"] = csubjobtable;
    }

    if(csubjobmatchparamstable != nullptr)
    {
        _children["csubJobMatchParamsTable"] = csubjobmatchparamstable;
    }

    if(csubjobqueryparamstable != nullptr)
    {
        _children["csubJobQueryParamsTable"] = csubjobqueryparamstable;
    }

    if(csubjobqueuetable != nullptr)
    {
        _children["csubJobQueueTable"] = csubjobqueuetable;
    }

    if(csubjobreporttable != nullptr)
    {
        _children["csubJobReportTable"] = csubjobreporttable;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::clone_ptr() const
{
    return std::make_shared<CISCOSUBSCRIBERSESSIONMIB>();
}

std::string CISCOSUBSCRIBERSESSIONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOSUBSCRIBERSESSIONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOSUBSCRIBERSESSIONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOSUBSCRIBERSESSIONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOSUBSCRIBERSESSIONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJob" || name == "csubAggThresh" || name == "csubSessionTable" || name == "csubSessionByTypeTable" || name == "csubAggStatsTable" || name == "csubAggStatsIntTable" || name == "csubAggStatsThreshTable" || name == "csubJobTable" || name == "csubJobMatchParamsTable" || name == "csubJobQueryParamsTable" || name == "csubJobQueueTable" || name == "csubJobReportTable")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJob::CsubJob()
    :
    csubjobfinishednotifyenable{YType::boolean, "csubJobFinishedNotifyEnable"},
    csubjobindexedattributes{YType::bits, "csubJobIndexedAttributes"},
    csubjobidnext{YType::uint32, "csubJobIdNext"},
    csubjobmaxnumber{YType::uint32, "csubJobMaxNumber"},
    csubjobmaxlife{YType::uint32, "csubJobMaxLife"},
    csubjobcount{YType::uint32, "csubJobCount"}
{

    yang_name = "csubJob"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJob::~CsubJob()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJob::has_data() const
{
    if (is_presence_container) return true;
    return csubjobfinishednotifyenable.is_set
	|| csubjobindexedattributes.is_set
	|| csubjobidnext.is_set
	|| csubjobmaxnumber.is_set
	|| csubjobmaxlife.is_set
	|| csubjobcount.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJob::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobfinishednotifyenable.yfilter)
	|| ydk::is_set(csubjobindexedattributes.yfilter)
	|| ydk::is_set(csubjobidnext.yfilter)
	|| ydk::is_set(csubjobmaxnumber.yfilter)
	|| ydk::is_set(csubjobmaxlife.yfilter)
	|| ydk::is_set(csubjobcount.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJob::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJob::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJob";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJob::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobfinishednotifyenable.is_set || is_set(csubjobfinishednotifyenable.yfilter)) leaf_name_data.push_back(csubjobfinishednotifyenable.get_name_leafdata());
    if (csubjobindexedattributes.is_set || is_set(csubjobindexedattributes.yfilter)) leaf_name_data.push_back(csubjobindexedattributes.get_name_leafdata());
    if (csubjobidnext.is_set || is_set(csubjobidnext.yfilter)) leaf_name_data.push_back(csubjobidnext.get_name_leafdata());
    if (csubjobmaxnumber.is_set || is_set(csubjobmaxnumber.yfilter)) leaf_name_data.push_back(csubjobmaxnumber.get_name_leafdata());
    if (csubjobmaxlife.is_set || is_set(csubjobmaxlife.yfilter)) leaf_name_data.push_back(csubjobmaxlife.get_name_leafdata());
    if (csubjobcount.is_set || is_set(csubjobcount.yfilter)) leaf_name_data.push_back(csubjobcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJob::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJob::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJob::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobFinishedNotifyEnable")
    {
        csubjobfinishednotifyenable = value;
        csubjobfinishednotifyenable.value_namespace = name_space;
        csubjobfinishednotifyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobIndexedAttributes")
    {
        csubjobindexedattributes[value] = true;
    }
    if(value_path == "csubJobIdNext")
    {
        csubjobidnext = value;
        csubjobidnext.value_namespace = name_space;
        csubjobidnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMaxNumber")
    {
        csubjobmaxnumber = value;
        csubjobmaxnumber.value_namespace = name_space;
        csubjobmaxnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMaxLife")
    {
        csubjobmaxlife = value;
        csubjobmaxlife.value_namespace = name_space;
        csubjobmaxlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobCount")
    {
        csubjobcount = value;
        csubjobcount.value_namespace = name_space;
        csubjobcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJob::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobFinishedNotifyEnable")
    {
        csubjobfinishednotifyenable.yfilter = yfilter;
    }
    if(value_path == "csubJobIndexedAttributes")
    {
        csubjobindexedattributes.yfilter = yfilter;
    }
    if(value_path == "csubJobIdNext")
    {
        csubjobidnext.yfilter = yfilter;
    }
    if(value_path == "csubJobMaxNumber")
    {
        csubjobmaxnumber.yfilter = yfilter;
    }
    if(value_path == "csubJobMaxLife")
    {
        csubjobmaxlife.yfilter = yfilter;
    }
    if(value_path == "csubJobCount")
    {
        csubjobcount.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJob::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobFinishedNotifyEnable" || name == "csubJobIndexedAttributes" || name == "csubJobIdNext" || name == "csubJobMaxNumber" || name == "csubJobMaxLife" || name == "csubJobCount")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::CsubAggThresh()
    :
    csubaggstatsthreshnotifenable{YType::boolean, "csubAggStatsThreshNotifEnable"}
{

    yang_name = "csubAggThresh"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::~CsubAggThresh()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::has_data() const
{
    if (is_presence_container) return true;
    return csubaggstatsthreshnotifenable.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubaggstatsthreshnotifenable.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggThresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatsthreshnotifenable.is_set || is_set(csubaggstatsthreshnotifenable.yfilter)) leaf_name_data.push_back(csubaggstatsthreshnotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubAggStatsThreshNotifEnable")
    {
        csubaggstatsthreshnotifenable = value;
        csubaggstatsthreshnotifenable.value_namespace = name_space;
        csubaggstatsthreshnotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubAggStatsThreshNotifEnable")
    {
        csubaggstatsthreshnotifenable.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsThreshNotifEnable")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionTable()
    :
    csubsessionentry(this, {"ifindex"})
{

    yang_name = "csubSessionTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::~CsubSessionTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubsessionentry.len(); index++)
    {
        if(csubsessionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::has_operation() const
{
    for (std::size_t index=0; index<csubsessionentry.len(); index++)
    {
        if(csubsessionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubSessionEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry>();
        ent_->parent = this;
        csubsessionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubsessionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionEntry()
    :
    ifindex{YType::str, "ifIndex"},
    csubsessiontype{YType::enumeration, "csubSessionType"},
    csubsessionipaddrassignment{YType::enumeration, "csubSessionIpAddrAssignment"},
    csubsessionstate{YType::enumeration, "csubSessionState"},
    csubsessionauthenticated{YType::boolean, "csubSessionAuthenticated"},
    csubsessionredundancymode{YType::enumeration, "csubSessionRedundancyMode"},
    csubsessioncreationtime{YType::str, "csubSessionCreationTime"},
    csubsessionderivedcfg{YType::str, "csubSessionDerivedCfg"},
    csubsessionavailableidentities{YType::bits, "csubSessionAvailableIdentities"},
    csubsessionsubscriberlabel{YType::uint32, "csubSessionSubscriberLabel"},
    csubsessionmacaddress{YType::str, "csubSessionMacAddress"},
    csubsessionnativevrf{YType::str, "csubSessionNativeVrf"},
    csubsessionnativeipaddrtype{YType::enumeration, "csubSessionNativeIpAddrType"},
    csubsessionnativeipaddr{YType::str, "csubSessionNativeIpAddr"},
    csubsessionnativeipmask{YType::str, "csubSessionNativeIpMask"},
    csubsessiondomainvrf{YType::str, "csubSessionDomainVrf"},
    csubsessiondomainipaddrtype{YType::enumeration, "csubSessionDomainIpAddrType"},
    csubsessiondomainipaddr{YType::str, "csubSessionDomainIpAddr"},
    csubsessiondomainipmask{YType::str, "csubSessionDomainIpMask"},
    csubsessionpbhk{YType::str, "csubSessionPbhk"},
    csubsessionremoteid{YType::str, "csubSessionRemoteId"},
    csubsessioncircuitid{YType::str, "csubSessionCircuitId"},
    csubsessionnasport{YType::str, "csubSessionNasPort"},
    csubsessiondomain{YType::str, "csubSessionDomain"},
    csubsessionusername{YType::str, "csubSessionUsername"},
    csubsessionacctsessionid{YType::uint32, "csubSessionAcctSessionId"},
    csubsessiondnis{YType::str, "csubSessionDnis"},
    csubsessionmedia{YType::enumeration, "csubSessionMedia"},
    csubsessionmlpnegotiated{YType::boolean, "csubSessionMlpNegotiated"},
    csubsessionprotocol{YType::enumeration, "csubSessionProtocol"},
    csubsessiondhcpclass{YType::str, "csubSessionDhcpClass"},
    csubsessiontunnelname{YType::str, "csubSessionTunnelName"},
    csubsessionlocationidentifier{YType::str, "csubSessionLocationIdentifier"},
    csubsessionserviceidentifier{YType::str, "csubSessionServiceIdentifier"},
    csubsessionlastchanged{YType::str, "csubSessionLastChanged"},
    csubsessionnativeipaddrtype2{YType::enumeration, "csubSessionNativeIpAddrType2"},
    csubsessionnativeipaddr2{YType::str, "csubSessionNativeIpAddr2"},
    csubsessionnativeipmask2{YType::str, "csubSessionNativeIpMask2"}
{

    yang_name = "csubSessionEntry"; yang_parent_name = "csubSessionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::~CsubSessionEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| csubsessiontype.is_set
	|| csubsessionipaddrassignment.is_set
	|| csubsessionstate.is_set
	|| csubsessionauthenticated.is_set
	|| csubsessionredundancymode.is_set
	|| csubsessioncreationtime.is_set
	|| csubsessionderivedcfg.is_set
	|| csubsessionavailableidentities.is_set
	|| csubsessionsubscriberlabel.is_set
	|| csubsessionmacaddress.is_set
	|| csubsessionnativevrf.is_set
	|| csubsessionnativeipaddrtype.is_set
	|| csubsessionnativeipaddr.is_set
	|| csubsessionnativeipmask.is_set
	|| csubsessiondomainvrf.is_set
	|| csubsessiondomainipaddrtype.is_set
	|| csubsessiondomainipaddr.is_set
	|| csubsessiondomainipmask.is_set
	|| csubsessionpbhk.is_set
	|| csubsessionremoteid.is_set
	|| csubsessioncircuitid.is_set
	|| csubsessionnasport.is_set
	|| csubsessiondomain.is_set
	|| csubsessionusername.is_set
	|| csubsessionacctsessionid.is_set
	|| csubsessiondnis.is_set
	|| csubsessionmedia.is_set
	|| csubsessionmlpnegotiated.is_set
	|| csubsessionprotocol.is_set
	|| csubsessiondhcpclass.is_set
	|| csubsessiontunnelname.is_set
	|| csubsessionlocationidentifier.is_set
	|| csubsessionserviceidentifier.is_set
	|| csubsessionlastchanged.is_set
	|| csubsessionnativeipaddrtype2.is_set
	|| csubsessionnativeipaddr2.is_set
	|| csubsessionnativeipmask2.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(csubsessiontype.yfilter)
	|| ydk::is_set(csubsessionipaddrassignment.yfilter)
	|| ydk::is_set(csubsessionstate.yfilter)
	|| ydk::is_set(csubsessionauthenticated.yfilter)
	|| ydk::is_set(csubsessionredundancymode.yfilter)
	|| ydk::is_set(csubsessioncreationtime.yfilter)
	|| ydk::is_set(csubsessionderivedcfg.yfilter)
	|| ydk::is_set(csubsessionavailableidentities.yfilter)
	|| ydk::is_set(csubsessionsubscriberlabel.yfilter)
	|| ydk::is_set(csubsessionmacaddress.yfilter)
	|| ydk::is_set(csubsessionnativevrf.yfilter)
	|| ydk::is_set(csubsessionnativeipaddrtype.yfilter)
	|| ydk::is_set(csubsessionnativeipaddr.yfilter)
	|| ydk::is_set(csubsessionnativeipmask.yfilter)
	|| ydk::is_set(csubsessiondomainvrf.yfilter)
	|| ydk::is_set(csubsessiondomainipaddrtype.yfilter)
	|| ydk::is_set(csubsessiondomainipaddr.yfilter)
	|| ydk::is_set(csubsessiondomainipmask.yfilter)
	|| ydk::is_set(csubsessionpbhk.yfilter)
	|| ydk::is_set(csubsessionremoteid.yfilter)
	|| ydk::is_set(csubsessioncircuitid.yfilter)
	|| ydk::is_set(csubsessionnasport.yfilter)
	|| ydk::is_set(csubsessiondomain.yfilter)
	|| ydk::is_set(csubsessionusername.yfilter)
	|| ydk::is_set(csubsessionacctsessionid.yfilter)
	|| ydk::is_set(csubsessiondnis.yfilter)
	|| ydk::is_set(csubsessionmedia.yfilter)
	|| ydk::is_set(csubsessionmlpnegotiated.yfilter)
	|| ydk::is_set(csubsessionprotocol.yfilter)
	|| ydk::is_set(csubsessiondhcpclass.yfilter)
	|| ydk::is_set(csubsessiontunnelname.yfilter)
	|| ydk::is_set(csubsessionlocationidentifier.yfilter)
	|| ydk::is_set(csubsessionserviceidentifier.yfilter)
	|| ydk::is_set(csubsessionlastchanged.yfilter)
	|| ydk::is_set(csubsessionnativeipaddrtype2.yfilter)
	|| ydk::is_set(csubsessionnativeipaddr2.yfilter)
	|| ydk::is_set(csubsessionnativeipmask2.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubSessionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csubsessiontype.is_set || is_set(csubsessiontype.yfilter)) leaf_name_data.push_back(csubsessiontype.get_name_leafdata());
    if (csubsessionipaddrassignment.is_set || is_set(csubsessionipaddrassignment.yfilter)) leaf_name_data.push_back(csubsessionipaddrassignment.get_name_leafdata());
    if (csubsessionstate.is_set || is_set(csubsessionstate.yfilter)) leaf_name_data.push_back(csubsessionstate.get_name_leafdata());
    if (csubsessionauthenticated.is_set || is_set(csubsessionauthenticated.yfilter)) leaf_name_data.push_back(csubsessionauthenticated.get_name_leafdata());
    if (csubsessionredundancymode.is_set || is_set(csubsessionredundancymode.yfilter)) leaf_name_data.push_back(csubsessionredundancymode.get_name_leafdata());
    if (csubsessioncreationtime.is_set || is_set(csubsessioncreationtime.yfilter)) leaf_name_data.push_back(csubsessioncreationtime.get_name_leafdata());
    if (csubsessionderivedcfg.is_set || is_set(csubsessionderivedcfg.yfilter)) leaf_name_data.push_back(csubsessionderivedcfg.get_name_leafdata());
    if (csubsessionavailableidentities.is_set || is_set(csubsessionavailableidentities.yfilter)) leaf_name_data.push_back(csubsessionavailableidentities.get_name_leafdata());
    if (csubsessionsubscriberlabel.is_set || is_set(csubsessionsubscriberlabel.yfilter)) leaf_name_data.push_back(csubsessionsubscriberlabel.get_name_leafdata());
    if (csubsessionmacaddress.is_set || is_set(csubsessionmacaddress.yfilter)) leaf_name_data.push_back(csubsessionmacaddress.get_name_leafdata());
    if (csubsessionnativevrf.is_set || is_set(csubsessionnativevrf.yfilter)) leaf_name_data.push_back(csubsessionnativevrf.get_name_leafdata());
    if (csubsessionnativeipaddrtype.is_set || is_set(csubsessionnativeipaddrtype.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddrtype.get_name_leafdata());
    if (csubsessionnativeipaddr.is_set || is_set(csubsessionnativeipaddr.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddr.get_name_leafdata());
    if (csubsessionnativeipmask.is_set || is_set(csubsessionnativeipmask.yfilter)) leaf_name_data.push_back(csubsessionnativeipmask.get_name_leafdata());
    if (csubsessiondomainvrf.is_set || is_set(csubsessiondomainvrf.yfilter)) leaf_name_data.push_back(csubsessiondomainvrf.get_name_leafdata());
    if (csubsessiondomainipaddrtype.is_set || is_set(csubsessiondomainipaddrtype.yfilter)) leaf_name_data.push_back(csubsessiondomainipaddrtype.get_name_leafdata());
    if (csubsessiondomainipaddr.is_set || is_set(csubsessiondomainipaddr.yfilter)) leaf_name_data.push_back(csubsessiondomainipaddr.get_name_leafdata());
    if (csubsessiondomainipmask.is_set || is_set(csubsessiondomainipmask.yfilter)) leaf_name_data.push_back(csubsessiondomainipmask.get_name_leafdata());
    if (csubsessionpbhk.is_set || is_set(csubsessionpbhk.yfilter)) leaf_name_data.push_back(csubsessionpbhk.get_name_leafdata());
    if (csubsessionremoteid.is_set || is_set(csubsessionremoteid.yfilter)) leaf_name_data.push_back(csubsessionremoteid.get_name_leafdata());
    if (csubsessioncircuitid.is_set || is_set(csubsessioncircuitid.yfilter)) leaf_name_data.push_back(csubsessioncircuitid.get_name_leafdata());
    if (csubsessionnasport.is_set || is_set(csubsessionnasport.yfilter)) leaf_name_data.push_back(csubsessionnasport.get_name_leafdata());
    if (csubsessiondomain.is_set || is_set(csubsessiondomain.yfilter)) leaf_name_data.push_back(csubsessiondomain.get_name_leafdata());
    if (csubsessionusername.is_set || is_set(csubsessionusername.yfilter)) leaf_name_data.push_back(csubsessionusername.get_name_leafdata());
    if (csubsessionacctsessionid.is_set || is_set(csubsessionacctsessionid.yfilter)) leaf_name_data.push_back(csubsessionacctsessionid.get_name_leafdata());
    if (csubsessiondnis.is_set || is_set(csubsessiondnis.yfilter)) leaf_name_data.push_back(csubsessiondnis.get_name_leafdata());
    if (csubsessionmedia.is_set || is_set(csubsessionmedia.yfilter)) leaf_name_data.push_back(csubsessionmedia.get_name_leafdata());
    if (csubsessionmlpnegotiated.is_set || is_set(csubsessionmlpnegotiated.yfilter)) leaf_name_data.push_back(csubsessionmlpnegotiated.get_name_leafdata());
    if (csubsessionprotocol.is_set || is_set(csubsessionprotocol.yfilter)) leaf_name_data.push_back(csubsessionprotocol.get_name_leafdata());
    if (csubsessiondhcpclass.is_set || is_set(csubsessiondhcpclass.yfilter)) leaf_name_data.push_back(csubsessiondhcpclass.get_name_leafdata());
    if (csubsessiontunnelname.is_set || is_set(csubsessiontunnelname.yfilter)) leaf_name_data.push_back(csubsessiontunnelname.get_name_leafdata());
    if (csubsessionlocationidentifier.is_set || is_set(csubsessionlocationidentifier.yfilter)) leaf_name_data.push_back(csubsessionlocationidentifier.get_name_leafdata());
    if (csubsessionserviceidentifier.is_set || is_set(csubsessionserviceidentifier.yfilter)) leaf_name_data.push_back(csubsessionserviceidentifier.get_name_leafdata());
    if (csubsessionlastchanged.is_set || is_set(csubsessionlastchanged.yfilter)) leaf_name_data.push_back(csubsessionlastchanged.get_name_leafdata());
    if (csubsessionnativeipaddrtype2.is_set || is_set(csubsessionnativeipaddrtype2.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddrtype2.get_name_leafdata());
    if (csubsessionnativeipaddr2.is_set || is_set(csubsessionnativeipaddr2.yfilter)) leaf_name_data.push_back(csubsessionnativeipaddr2.get_name_leafdata());
    if (csubsessionnativeipmask2.is_set || is_set(csubsessionnativeipmask2.yfilter)) leaf_name_data.push_back(csubsessionnativeipmask2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionType")
    {
        csubsessiontype = value;
        csubsessiontype.value_namespace = name_space;
        csubsessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionIpAddrAssignment")
    {
        csubsessionipaddrassignment = value;
        csubsessionipaddrassignment.value_namespace = name_space;
        csubsessionipaddrassignment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionState")
    {
        csubsessionstate = value;
        csubsessionstate.value_namespace = name_space;
        csubsessionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionAuthenticated")
    {
        csubsessionauthenticated = value;
        csubsessionauthenticated.value_namespace = name_space;
        csubsessionauthenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionRedundancyMode")
    {
        csubsessionredundancymode = value;
        csubsessionredundancymode.value_namespace = name_space;
        csubsessionredundancymode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csubSessionAvailableIdentities")
    {
        csubsessionavailableidentities[value] = true;
    }
    if(value_path == "csubSessionSubscriberLabel")
    {
        csubsessionsubscriberlabel = value;
        csubsessionsubscriberlabel.value_namespace = name_space;
        csubsessionsubscriberlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionMacAddress")
    {
        csubsessionmacaddress = value;
        csubsessionmacaddress.value_namespace = name_space;
        csubsessionmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeVrf")
    {
        csubsessionnativevrf = value;
        csubsessionnativevrf.value_namespace = name_space;
        csubsessionnativevrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddrType")
    {
        csubsessionnativeipaddrtype = value;
        csubsessionnativeipaddrtype.value_namespace = name_space;
        csubsessionnativeipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddr")
    {
        csubsessionnativeipaddr = value;
        csubsessionnativeipaddr.value_namespace = name_space;
        csubsessionnativeipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpMask")
    {
        csubsessionnativeipmask = value;
        csubsessionnativeipmask.value_namespace = name_space;
        csubsessionnativeipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainVrf")
    {
        csubsessiondomainvrf = value;
        csubsessiondomainvrf.value_namespace = name_space;
        csubsessiondomainvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainIpAddrType")
    {
        csubsessiondomainipaddrtype = value;
        csubsessiondomainipaddrtype.value_namespace = name_space;
        csubsessiondomainipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainIpAddr")
    {
        csubsessiondomainipaddr = value;
        csubsessiondomainipaddr.value_namespace = name_space;
        csubsessiondomainipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomainIpMask")
    {
        csubsessiondomainipmask = value;
        csubsessiondomainipmask.value_namespace = name_space;
        csubsessiondomainipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionPbhk")
    {
        csubsessionpbhk = value;
        csubsessionpbhk.value_namespace = name_space;
        csubsessionpbhk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionRemoteId")
    {
        csubsessionremoteid = value;
        csubsessionremoteid.value_namespace = name_space;
        csubsessionremoteid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionCircuitId")
    {
        csubsessioncircuitid = value;
        csubsessioncircuitid.value_namespace = name_space;
        csubsessioncircuitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNasPort")
    {
        csubsessionnasport = value;
        csubsessionnasport.value_namespace = name_space;
        csubsessionnasport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDomain")
    {
        csubsessiondomain = value;
        csubsessiondomain.value_namespace = name_space;
        csubsessiondomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionUsername")
    {
        csubsessionusername = value;
        csubsessionusername.value_namespace = name_space;
        csubsessionusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionAcctSessionId")
    {
        csubsessionacctsessionid = value;
        csubsessionacctsessionid.value_namespace = name_space;
        csubsessionacctsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDnis")
    {
        csubsessiondnis = value;
        csubsessiondnis.value_namespace = name_space;
        csubsessiondnis.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csubSessionProtocol")
    {
        csubsessionprotocol = value;
        csubsessionprotocol.value_namespace = name_space;
        csubsessionprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDhcpClass")
    {
        csubsessiondhcpclass = value;
        csubsessiondhcpclass.value_namespace = name_space;
        csubsessiondhcpclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionTunnelName")
    {
        csubsessiontunnelname = value;
        csubsessiontunnelname.value_namespace = name_space;
        csubsessiontunnelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionLocationIdentifier")
    {
        csubsessionlocationidentifier = value;
        csubsessionlocationidentifier.value_namespace = name_space;
        csubsessionlocationidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionServiceIdentifier")
    {
        csubsessionserviceidentifier = value;
        csubsessionserviceidentifier.value_namespace = name_space;
        csubsessionserviceidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionLastChanged")
    {
        csubsessionlastchanged = value;
        csubsessionlastchanged.value_namespace = name_space;
        csubsessionlastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddrType2")
    {
        csubsessionnativeipaddrtype2 = value;
        csubsessionnativeipaddrtype2.value_namespace = name_space;
        csubsessionnativeipaddrtype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpAddr2")
    {
        csubsessionnativeipaddr2 = value;
        csubsessionnativeipaddr2.value_namespace = name_space;
        csubsessionnativeipaddr2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionNativeIpMask2")
    {
        csubsessionnativeipmask2 = value;
        csubsessionnativeipmask2.value_namespace = name_space;
        csubsessionnativeipmask2.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "csubSessionType")
    {
        csubsessiontype.yfilter = yfilter;
    }
    if(value_path == "csubSessionIpAddrAssignment")
    {
        csubsessionipaddrassignment.yfilter = yfilter;
    }
    if(value_path == "csubSessionState")
    {
        csubsessionstate.yfilter = yfilter;
    }
    if(value_path == "csubSessionAuthenticated")
    {
        csubsessionauthenticated.yfilter = yfilter;
    }
    if(value_path == "csubSessionRedundancyMode")
    {
        csubsessionredundancymode.yfilter = yfilter;
    }
    if(value_path == "csubSessionCreationTime")
    {
        csubsessioncreationtime.yfilter = yfilter;
    }
    if(value_path == "csubSessionDerivedCfg")
    {
        csubsessionderivedcfg.yfilter = yfilter;
    }
    if(value_path == "csubSessionAvailableIdentities")
    {
        csubsessionavailableidentities.yfilter = yfilter;
    }
    if(value_path == "csubSessionSubscriberLabel")
    {
        csubsessionsubscriberlabel.yfilter = yfilter;
    }
    if(value_path == "csubSessionMacAddress")
    {
        csubsessionmacaddress.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeVrf")
    {
        csubsessionnativevrf.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddrType")
    {
        csubsessionnativeipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddr")
    {
        csubsessionnativeipaddr.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpMask")
    {
        csubsessionnativeipmask.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainVrf")
    {
        csubsessiondomainvrf.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainIpAddrType")
    {
        csubsessiondomainipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainIpAddr")
    {
        csubsessiondomainipaddr.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomainIpMask")
    {
        csubsessiondomainipmask.yfilter = yfilter;
    }
    if(value_path == "csubSessionPbhk")
    {
        csubsessionpbhk.yfilter = yfilter;
    }
    if(value_path == "csubSessionRemoteId")
    {
        csubsessionremoteid.yfilter = yfilter;
    }
    if(value_path == "csubSessionCircuitId")
    {
        csubsessioncircuitid.yfilter = yfilter;
    }
    if(value_path == "csubSessionNasPort")
    {
        csubsessionnasport.yfilter = yfilter;
    }
    if(value_path == "csubSessionDomain")
    {
        csubsessiondomain.yfilter = yfilter;
    }
    if(value_path == "csubSessionUsername")
    {
        csubsessionusername.yfilter = yfilter;
    }
    if(value_path == "csubSessionAcctSessionId")
    {
        csubsessionacctsessionid.yfilter = yfilter;
    }
    if(value_path == "csubSessionDnis")
    {
        csubsessiondnis.yfilter = yfilter;
    }
    if(value_path == "csubSessionMedia")
    {
        csubsessionmedia.yfilter = yfilter;
    }
    if(value_path == "csubSessionMlpNegotiated")
    {
        csubsessionmlpnegotiated.yfilter = yfilter;
    }
    if(value_path == "csubSessionProtocol")
    {
        csubsessionprotocol.yfilter = yfilter;
    }
    if(value_path == "csubSessionDhcpClass")
    {
        csubsessiondhcpclass.yfilter = yfilter;
    }
    if(value_path == "csubSessionTunnelName")
    {
        csubsessiontunnelname.yfilter = yfilter;
    }
    if(value_path == "csubSessionLocationIdentifier")
    {
        csubsessionlocationidentifier.yfilter = yfilter;
    }
    if(value_path == "csubSessionServiceIdentifier")
    {
        csubsessionserviceidentifier.yfilter = yfilter;
    }
    if(value_path == "csubSessionLastChanged")
    {
        csubsessionlastchanged.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddrType2")
    {
        csubsessionnativeipaddrtype2.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpAddr2")
    {
        csubsessionnativeipaddr2.yfilter = yfilter;
    }
    if(value_path == "csubSessionNativeIpMask2")
    {
        csubsessionnativeipmask2.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "csubSessionType" || name == "csubSessionIpAddrAssignment" || name == "csubSessionState" || name == "csubSessionAuthenticated" || name == "csubSessionRedundancyMode" || name == "csubSessionCreationTime" || name == "csubSessionDerivedCfg" || name == "csubSessionAvailableIdentities" || name == "csubSessionSubscriberLabel" || name == "csubSessionMacAddress" || name == "csubSessionNativeVrf" || name == "csubSessionNativeIpAddrType" || name == "csubSessionNativeIpAddr" || name == "csubSessionNativeIpMask" || name == "csubSessionDomainVrf" || name == "csubSessionDomainIpAddrType" || name == "csubSessionDomainIpAddr" || name == "csubSessionDomainIpMask" || name == "csubSessionPbhk" || name == "csubSessionRemoteId" || name == "csubSessionCircuitId" || name == "csubSessionNasPort" || name == "csubSessionDomain" || name == "csubSessionUsername" || name == "csubSessionAcctSessionId" || name == "csubSessionDnis" || name == "csubSessionMedia" || name == "csubSessionMlpNegotiated" || name == "csubSessionProtocol" || name == "csubSessionDhcpClass" || name == "csubSessionTunnelName" || name == "csubSessionLocationIdentifier" || name == "csubSessionServiceIdentifier" || name == "csubSessionLastChanged" || name == "csubSessionNativeIpAddrType2" || name == "csubSessionNativeIpAddr2" || name == "csubSessionNativeIpMask2")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeTable()
    :
    csubsessionbytypeentry(this, {"csubsessionbytype", "csubsessionifindex"})
{

    yang_name = "csubSessionByTypeTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::~CsubSessionByTypeTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubsessionbytypeentry.len(); index++)
    {
        if(csubsessionbytypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::has_operation() const
{
    for (std::size_t index=0; index<csubsessionbytypeentry.len(); index++)
    {
        if(csubsessionbytypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionByTypeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubSessionByTypeEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry>();
        ent_->parent = this;
        csubsessionbytypeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubsessionbytypeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionByTypeEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::CsubSessionByTypeEntry()
    :
    csubsessionbytype{YType::enumeration, "csubSessionByType"},
    csubsessionifindex{YType::int32, "csubSessionIfIndex"}
{

    yang_name = "csubSessionByTypeEntry"; yang_parent_name = "csubSessionByTypeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::~CsubSessionByTypeEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubsessionbytype.is_set
	|| csubsessionifindex.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubsessionbytype.yfilter)
	|| ydk::is_set(csubsessionifindex.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubSessionByTypeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionByTypeEntry";
    ADD_KEY_TOKEN(csubsessionbytype, "csubSessionByType");
    ADD_KEY_TOKEN(csubsessionifindex, "csubSessionIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubsessionbytype.is_set || is_set(csubsessionbytype.yfilter)) leaf_name_data.push_back(csubsessionbytype.get_name_leafdata());
    if (csubsessionifindex.is_set || is_set(csubsessionifindex.yfilter)) leaf_name_data.push_back(csubsessionifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSUBSCRIBERSESSIONMIB::CsubSessionByTypeTable::CsubSessionByTypeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionByType" || name == "csubSessionIfIndex")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsTable()
    :
    csubaggstatsentry(this, {"csubaggstatspointtype", "csubaggstatspoint", "csubaggstatssessiontype"})
{

    yang_name = "csubAggStatsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::~CsubAggStatsTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubaggstatsentry.len(); index++)
    {
        if(csubaggstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsentry.len(); index++)
    {
        if(csubaggstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry>();
        ent_->parent = this;
        csubaggstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubaggstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::CsubAggStatsEntry()
    :
    csubaggstatspointtype{YType::enumeration, "csubAggStatsPointType"},
    csubaggstatspoint{YType::uint32, "csubAggStatsPoint"},
    csubaggstatssessiontype{YType::enumeration, "csubAggStatsSessionType"},
    csubaggstatspendingsessions{YType::uint32, "csubAggStatsPendingSessions"},
    csubaggstatsupsessions{YType::uint32, "csubAggStatsUpSessions"},
    csubaggstatsauthsessions{YType::uint32, "csubAggStatsAuthSessions"},
    csubaggstatsunauthsessions{YType::uint32, "csubAggStatsUnAuthSessions"},
    csubaggstatslightweightsessions{YType::uint32, "csubAggStatsLightWeightSessions"},
    csubaggstatsredsessions{YType::uint32, "csubAggStatsRedSessions"},
    csubaggstatshighupsessions{YType::uint32, "csubAggStatsHighUpSessions"},
    csubaggstatsavgsessionuptime{YType::uint32, "csubAggStatsAvgSessionUptime"},
    csubaggstatsavgsessionrpm{YType::uint32, "csubAggStatsAvgSessionRPM"},
    csubaggstatsavgsessionrph{YType::uint32, "csubAggStatsAvgSessionRPH"},
    csubaggstatsthrottleengagements{YType::uint64, "csubAggStatsThrottleEngagements"},
    csubaggstatstotalcreatedsessions{YType::uint64, "csubAggStatsTotalCreatedSessions"},
    csubaggstatstotalfailedsessions{YType::uint64, "csubAggStatsTotalFailedSessions"},
    csubaggstatstotalupsessions{YType::uint64, "csubAggStatsTotalUpSessions"},
    csubaggstatstotalauthsessions{YType::uint64, "csubAggStatsTotalAuthSessions"},
    csubaggstatstotaldiscsessions{YType::uint64, "csubAggStatsTotalDiscSessions"},
    csubaggstatstotallightweightsessions{YType::uint64, "csubAggStatsTotalLightWeightSessions"},
    csubaggstatstotalflowsup{YType::uint64, "csubAggStatsTotalFlowsUp"},
    csubaggstatsdaycreatedsessions{YType::uint32, "csubAggStatsDayCreatedSessions"},
    csubaggstatsdayfailedsessions{YType::uint32, "csubAggStatsDayFailedSessions"},
    csubaggstatsdayupsessions{YType::uint32, "csubAggStatsDayUpSessions"},
    csubaggstatsdayauthsessions{YType::uint32, "csubAggStatsDayAuthSessions"},
    csubaggstatsdaydiscsessions{YType::uint32, "csubAggStatsDayDiscSessions"},
    csubaggstatscurrtimeelapsed{YType::uint32, "csubAggStatsCurrTimeElapsed"},
    csubaggstatscurrvalidintervals{YType::uint32, "csubAggStatsCurrValidIntervals"},
    csubaggstatscurrinvalidintervals{YType::uint32, "csubAggStatsCurrInvalidIntervals"},
    csubaggstatscurrflowsup{YType::uint32, "csubAggStatsCurrFlowsUp"},
    csubaggstatscurrcreatedsessions{YType::uint32, "csubAggStatsCurrCreatedSessions"},
    csubaggstatscurrfailedsessions{YType::uint32, "csubAggStatsCurrFailedSessions"},
    csubaggstatscurrupsessions{YType::uint32, "csubAggStatsCurrUpSessions"},
    csubaggstatscurrauthsessions{YType::uint32, "csubAggStatsCurrAuthSessions"},
    csubaggstatscurrdiscsessions{YType::uint32, "csubAggStatsCurrDiscSessions"},
    csubaggstatsdiscontinuitytime{YType::str, "csubAggStatsDiscontinuityTime"}
{

    yang_name = "csubAggStatsEntry"; yang_parent_name = "csubAggStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::~CsubAggStatsEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubaggstatspointtype.is_set
	|| csubaggstatspoint.is_set
	|| csubaggstatssessiontype.is_set
	|| csubaggstatspendingsessions.is_set
	|| csubaggstatsupsessions.is_set
	|| csubaggstatsauthsessions.is_set
	|| csubaggstatsunauthsessions.is_set
	|| csubaggstatslightweightsessions.is_set
	|| csubaggstatsredsessions.is_set
	|| csubaggstatshighupsessions.is_set
	|| csubaggstatsavgsessionuptime.is_set
	|| csubaggstatsavgsessionrpm.is_set
	|| csubaggstatsavgsessionrph.is_set
	|| csubaggstatsthrottleengagements.is_set
	|| csubaggstatstotalcreatedsessions.is_set
	|| csubaggstatstotalfailedsessions.is_set
	|| csubaggstatstotalupsessions.is_set
	|| csubaggstatstotalauthsessions.is_set
	|| csubaggstatstotaldiscsessions.is_set
	|| csubaggstatstotallightweightsessions.is_set
	|| csubaggstatstotalflowsup.is_set
	|| csubaggstatsdaycreatedsessions.is_set
	|| csubaggstatsdayfailedsessions.is_set
	|| csubaggstatsdayupsessions.is_set
	|| csubaggstatsdayauthsessions.is_set
	|| csubaggstatsdaydiscsessions.is_set
	|| csubaggstatscurrtimeelapsed.is_set
	|| csubaggstatscurrvalidintervals.is_set
	|| csubaggstatscurrinvalidintervals.is_set
	|| csubaggstatscurrflowsup.is_set
	|| csubaggstatscurrcreatedsessions.is_set
	|| csubaggstatscurrfailedsessions.is_set
	|| csubaggstatscurrupsessions.is_set
	|| csubaggstatscurrauthsessions.is_set
	|| csubaggstatscurrdiscsessions.is_set
	|| csubaggstatsdiscontinuitytime.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubaggstatspointtype.yfilter)
	|| ydk::is_set(csubaggstatspoint.yfilter)
	|| ydk::is_set(csubaggstatssessiontype.yfilter)
	|| ydk::is_set(csubaggstatspendingsessions.yfilter)
	|| ydk::is_set(csubaggstatsupsessions.yfilter)
	|| ydk::is_set(csubaggstatsauthsessions.yfilter)
	|| ydk::is_set(csubaggstatsunauthsessions.yfilter)
	|| ydk::is_set(csubaggstatslightweightsessions.yfilter)
	|| ydk::is_set(csubaggstatsredsessions.yfilter)
	|| ydk::is_set(csubaggstatshighupsessions.yfilter)
	|| ydk::is_set(csubaggstatsavgsessionuptime.yfilter)
	|| ydk::is_set(csubaggstatsavgsessionrpm.yfilter)
	|| ydk::is_set(csubaggstatsavgsessionrph.yfilter)
	|| ydk::is_set(csubaggstatsthrottleengagements.yfilter)
	|| ydk::is_set(csubaggstatstotalcreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalupsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalauthsessions.yfilter)
	|| ydk::is_set(csubaggstatstotaldiscsessions.yfilter)
	|| ydk::is_set(csubaggstatstotallightweightsessions.yfilter)
	|| ydk::is_set(csubaggstatstotalflowsup.yfilter)
	|| ydk::is_set(csubaggstatsdaycreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatsdayfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatsdayupsessions.yfilter)
	|| ydk::is_set(csubaggstatsdayauthsessions.yfilter)
	|| ydk::is_set(csubaggstatsdaydiscsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrtimeelapsed.yfilter)
	|| ydk::is_set(csubaggstatscurrvalidintervals.yfilter)
	|| ydk::is_set(csubaggstatscurrinvalidintervals.yfilter)
	|| ydk::is_set(csubaggstatscurrflowsup.yfilter)
	|| ydk::is_set(csubaggstatscurrcreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrupsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrauthsessions.yfilter)
	|| ydk::is_set(csubaggstatscurrdiscsessions.yfilter)
	|| ydk::is_set(csubaggstatsdiscontinuitytime.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsEntry";
    ADD_KEY_TOKEN(csubaggstatspointtype, "csubAggStatsPointType");
    ADD_KEY_TOKEN(csubaggstatspoint, "csubAggStatsPoint");
    ADD_KEY_TOKEN(csubaggstatssessiontype, "csubAggStatsSessionType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatspointtype.is_set || is_set(csubaggstatspointtype.yfilter)) leaf_name_data.push_back(csubaggstatspointtype.get_name_leafdata());
    if (csubaggstatspoint.is_set || is_set(csubaggstatspoint.yfilter)) leaf_name_data.push_back(csubaggstatspoint.get_name_leafdata());
    if (csubaggstatssessiontype.is_set || is_set(csubaggstatssessiontype.yfilter)) leaf_name_data.push_back(csubaggstatssessiontype.get_name_leafdata());
    if (csubaggstatspendingsessions.is_set || is_set(csubaggstatspendingsessions.yfilter)) leaf_name_data.push_back(csubaggstatspendingsessions.get_name_leafdata());
    if (csubaggstatsupsessions.is_set || is_set(csubaggstatsupsessions.yfilter)) leaf_name_data.push_back(csubaggstatsupsessions.get_name_leafdata());
    if (csubaggstatsauthsessions.is_set || is_set(csubaggstatsauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsauthsessions.get_name_leafdata());
    if (csubaggstatsunauthsessions.is_set || is_set(csubaggstatsunauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsunauthsessions.get_name_leafdata());
    if (csubaggstatslightweightsessions.is_set || is_set(csubaggstatslightweightsessions.yfilter)) leaf_name_data.push_back(csubaggstatslightweightsessions.get_name_leafdata());
    if (csubaggstatsredsessions.is_set || is_set(csubaggstatsredsessions.yfilter)) leaf_name_data.push_back(csubaggstatsredsessions.get_name_leafdata());
    if (csubaggstatshighupsessions.is_set || is_set(csubaggstatshighupsessions.yfilter)) leaf_name_data.push_back(csubaggstatshighupsessions.get_name_leafdata());
    if (csubaggstatsavgsessionuptime.is_set || is_set(csubaggstatsavgsessionuptime.yfilter)) leaf_name_data.push_back(csubaggstatsavgsessionuptime.get_name_leafdata());
    if (csubaggstatsavgsessionrpm.is_set || is_set(csubaggstatsavgsessionrpm.yfilter)) leaf_name_data.push_back(csubaggstatsavgsessionrpm.get_name_leafdata());
    if (csubaggstatsavgsessionrph.is_set || is_set(csubaggstatsavgsessionrph.yfilter)) leaf_name_data.push_back(csubaggstatsavgsessionrph.get_name_leafdata());
    if (csubaggstatsthrottleengagements.is_set || is_set(csubaggstatsthrottleengagements.yfilter)) leaf_name_data.push_back(csubaggstatsthrottleengagements.get_name_leafdata());
    if (csubaggstatstotalcreatedsessions.is_set || is_set(csubaggstatstotalcreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalcreatedsessions.get_name_leafdata());
    if (csubaggstatstotalfailedsessions.is_set || is_set(csubaggstatstotalfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalfailedsessions.get_name_leafdata());
    if (csubaggstatstotalupsessions.is_set || is_set(csubaggstatstotalupsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalupsessions.get_name_leafdata());
    if (csubaggstatstotalauthsessions.is_set || is_set(csubaggstatstotalauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotalauthsessions.get_name_leafdata());
    if (csubaggstatstotaldiscsessions.is_set || is_set(csubaggstatstotaldiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotaldiscsessions.get_name_leafdata());
    if (csubaggstatstotallightweightsessions.is_set || is_set(csubaggstatstotallightweightsessions.yfilter)) leaf_name_data.push_back(csubaggstatstotallightweightsessions.get_name_leafdata());
    if (csubaggstatstotalflowsup.is_set || is_set(csubaggstatstotalflowsup.yfilter)) leaf_name_data.push_back(csubaggstatstotalflowsup.get_name_leafdata());
    if (csubaggstatsdaycreatedsessions.is_set || is_set(csubaggstatsdaycreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdaycreatedsessions.get_name_leafdata());
    if (csubaggstatsdayfailedsessions.is_set || is_set(csubaggstatsdayfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdayfailedsessions.get_name_leafdata());
    if (csubaggstatsdayupsessions.is_set || is_set(csubaggstatsdayupsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdayupsessions.get_name_leafdata());
    if (csubaggstatsdayauthsessions.is_set || is_set(csubaggstatsdayauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdayauthsessions.get_name_leafdata());
    if (csubaggstatsdaydiscsessions.is_set || is_set(csubaggstatsdaydiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatsdaydiscsessions.get_name_leafdata());
    if (csubaggstatscurrtimeelapsed.is_set || is_set(csubaggstatscurrtimeelapsed.yfilter)) leaf_name_data.push_back(csubaggstatscurrtimeelapsed.get_name_leafdata());
    if (csubaggstatscurrvalidintervals.is_set || is_set(csubaggstatscurrvalidintervals.yfilter)) leaf_name_data.push_back(csubaggstatscurrvalidintervals.get_name_leafdata());
    if (csubaggstatscurrinvalidintervals.is_set || is_set(csubaggstatscurrinvalidintervals.yfilter)) leaf_name_data.push_back(csubaggstatscurrinvalidintervals.get_name_leafdata());
    if (csubaggstatscurrflowsup.is_set || is_set(csubaggstatscurrflowsup.yfilter)) leaf_name_data.push_back(csubaggstatscurrflowsup.get_name_leafdata());
    if (csubaggstatscurrcreatedsessions.is_set || is_set(csubaggstatscurrcreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrcreatedsessions.get_name_leafdata());
    if (csubaggstatscurrfailedsessions.is_set || is_set(csubaggstatscurrfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrfailedsessions.get_name_leafdata());
    if (csubaggstatscurrupsessions.is_set || is_set(csubaggstatscurrupsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrupsessions.get_name_leafdata());
    if (csubaggstatscurrauthsessions.is_set || is_set(csubaggstatscurrauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrauthsessions.get_name_leafdata());
    if (csubaggstatscurrdiscsessions.is_set || is_set(csubaggstatscurrdiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatscurrdiscsessions.get_name_leafdata());
    if (csubaggstatsdiscontinuitytime.is_set || is_set(csubaggstatsdiscontinuitytime.yfilter)) leaf_name_data.push_back(csubaggstatsdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csubAggStatsPendingSessions")
    {
        csubaggstatspendingsessions = value;
        csubaggstatspendingsessions.value_namespace = name_space;
        csubaggstatspendingsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsUpSessions")
    {
        csubaggstatsupsessions = value;
        csubaggstatsupsessions.value_namespace = name_space;
        csubaggstatsupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAuthSessions")
    {
        csubaggstatsauthsessions = value;
        csubaggstatsauthsessions.value_namespace = name_space;
        csubaggstatsauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsUnAuthSessions")
    {
        csubaggstatsunauthsessions = value;
        csubaggstatsunauthsessions.value_namespace = name_space;
        csubaggstatsunauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsLightWeightSessions")
    {
        csubaggstatslightweightsessions = value;
        csubaggstatslightweightsessions.value_namespace = name_space;
        csubaggstatslightweightsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsRedSessions")
    {
        csubaggstatsredsessions = value;
        csubaggstatsredsessions.value_namespace = name_space;
        csubaggstatsredsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsHighUpSessions")
    {
        csubaggstatshighupsessions = value;
        csubaggstatshighupsessions.value_namespace = name_space;
        csubaggstatshighupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAvgSessionUptime")
    {
        csubaggstatsavgsessionuptime = value;
        csubaggstatsavgsessionuptime.value_namespace = name_space;
        csubaggstatsavgsessionuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAvgSessionRPM")
    {
        csubaggstatsavgsessionrpm = value;
        csubaggstatsavgsessionrpm.value_namespace = name_space;
        csubaggstatsavgsessionrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsAvgSessionRPH")
    {
        csubaggstatsavgsessionrph = value;
        csubaggstatsavgsessionrph.value_namespace = name_space;
        csubaggstatsavgsessionrph.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsThrottleEngagements")
    {
        csubaggstatsthrottleengagements = value;
        csubaggstatsthrottleengagements.value_namespace = name_space;
        csubaggstatsthrottleengagements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalCreatedSessions")
    {
        csubaggstatstotalcreatedsessions = value;
        csubaggstatstotalcreatedsessions.value_namespace = name_space;
        csubaggstatstotalcreatedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalFailedSessions")
    {
        csubaggstatstotalfailedsessions = value;
        csubaggstatstotalfailedsessions.value_namespace = name_space;
        csubaggstatstotalfailedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalUpSessions")
    {
        csubaggstatstotalupsessions = value;
        csubaggstatstotalupsessions.value_namespace = name_space;
        csubaggstatstotalupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalAuthSessions")
    {
        csubaggstatstotalauthsessions = value;
        csubaggstatstotalauthsessions.value_namespace = name_space;
        csubaggstatstotalauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalDiscSessions")
    {
        csubaggstatstotaldiscsessions = value;
        csubaggstatstotaldiscsessions.value_namespace = name_space;
        csubaggstatstotaldiscsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalLightWeightSessions")
    {
        csubaggstatstotallightweightsessions = value;
        csubaggstatstotallightweightsessions.value_namespace = name_space;
        csubaggstatstotallightweightsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsTotalFlowsUp")
    {
        csubaggstatstotalflowsup = value;
        csubaggstatstotalflowsup.value_namespace = name_space;
        csubaggstatstotalflowsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDayCreatedSessions")
    {
        csubaggstatsdaycreatedsessions = value;
        csubaggstatsdaycreatedsessions.value_namespace = name_space;
        csubaggstatsdaycreatedsessions.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csubAggStatsDayAuthSessions")
    {
        csubaggstatsdayauthsessions = value;
        csubaggstatsdayauthsessions.value_namespace = name_space;
        csubaggstatsdayauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDayDiscSessions")
    {
        csubaggstatsdaydiscsessions = value;
        csubaggstatsdaydiscsessions.value_namespace = name_space;
        csubaggstatsdaydiscsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrTimeElapsed")
    {
        csubaggstatscurrtimeelapsed = value;
        csubaggstatscurrtimeelapsed.value_namespace = name_space;
        csubaggstatscurrtimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrValidIntervals")
    {
        csubaggstatscurrvalidintervals = value;
        csubaggstatscurrvalidintervals.value_namespace = name_space;
        csubaggstatscurrvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrInvalidIntervals")
    {
        csubaggstatscurrinvalidintervals = value;
        csubaggstatscurrinvalidintervals.value_namespace = name_space;
        csubaggstatscurrinvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrFlowsUp")
    {
        csubaggstatscurrflowsup = value;
        csubaggstatscurrflowsup.value_namespace = name_space;
        csubaggstatscurrflowsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrCreatedSessions")
    {
        csubaggstatscurrcreatedsessions = value;
        csubaggstatscurrcreatedsessions.value_namespace = name_space;
        csubaggstatscurrcreatedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrFailedSessions")
    {
        csubaggstatscurrfailedsessions = value;
        csubaggstatscurrfailedsessions.value_namespace = name_space;
        csubaggstatscurrfailedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrUpSessions")
    {
        csubaggstatscurrupsessions = value;
        csubaggstatscurrupsessions.value_namespace = name_space;
        csubaggstatscurrupsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrAuthSessions")
    {
        csubaggstatscurrauthsessions = value;
        csubaggstatscurrauthsessions.value_namespace = name_space;
        csubaggstatscurrauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsCurrDiscSessions")
    {
        csubaggstatscurrdiscsessions = value;
        csubaggstatscurrdiscsessions.value_namespace = name_space;
        csubaggstatscurrdiscsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsDiscontinuityTime")
    {
        csubaggstatsdiscontinuitytime = value;
        csubaggstatsdiscontinuitytime.value_namespace = name_space;
        csubaggstatsdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "csubAggStatsPendingSessions")
    {
        csubaggstatspendingsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsUpSessions")
    {
        csubaggstatsupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAuthSessions")
    {
        csubaggstatsauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsUnAuthSessions")
    {
        csubaggstatsunauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsLightWeightSessions")
    {
        csubaggstatslightweightsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsRedSessions")
    {
        csubaggstatsredsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsHighUpSessions")
    {
        csubaggstatshighupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAvgSessionUptime")
    {
        csubaggstatsavgsessionuptime.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAvgSessionRPM")
    {
        csubaggstatsavgsessionrpm.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsAvgSessionRPH")
    {
        csubaggstatsavgsessionrph.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsThrottleEngagements")
    {
        csubaggstatsthrottleengagements.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalCreatedSessions")
    {
        csubaggstatstotalcreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalFailedSessions")
    {
        csubaggstatstotalfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalUpSessions")
    {
        csubaggstatstotalupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalAuthSessions")
    {
        csubaggstatstotalauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalDiscSessions")
    {
        csubaggstatstotaldiscsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalLightWeightSessions")
    {
        csubaggstatstotallightweightsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsTotalFlowsUp")
    {
        csubaggstatstotalflowsup.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayCreatedSessions")
    {
        csubaggstatsdaycreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayFailedSessions")
    {
        csubaggstatsdayfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayUpSessions")
    {
        csubaggstatsdayupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayAuthSessions")
    {
        csubaggstatsdayauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDayDiscSessions")
    {
        csubaggstatsdaydiscsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrTimeElapsed")
    {
        csubaggstatscurrtimeelapsed.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrValidIntervals")
    {
        csubaggstatscurrvalidintervals.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrInvalidIntervals")
    {
        csubaggstatscurrinvalidintervals.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrFlowsUp")
    {
        csubaggstatscurrflowsup.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrCreatedSessions")
    {
        csubaggstatscurrcreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrFailedSessions")
    {
        csubaggstatscurrfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrUpSessions")
    {
        csubaggstatscurrupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrAuthSessions")
    {
        csubaggstatscurrauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsCurrDiscSessions")
    {
        csubaggstatscurrdiscsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsDiscontinuityTime")
    {
        csubaggstatsdiscontinuitytime.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsPointType" || name == "csubAggStatsPoint" || name == "csubAggStatsSessionType" || name == "csubAggStatsPendingSessions" || name == "csubAggStatsUpSessions" || name == "csubAggStatsAuthSessions" || name == "csubAggStatsUnAuthSessions" || name == "csubAggStatsLightWeightSessions" || name == "csubAggStatsRedSessions" || name == "csubAggStatsHighUpSessions" || name == "csubAggStatsAvgSessionUptime" || name == "csubAggStatsAvgSessionRPM" || name == "csubAggStatsAvgSessionRPH" || name == "csubAggStatsThrottleEngagements" || name == "csubAggStatsTotalCreatedSessions" || name == "csubAggStatsTotalFailedSessions" || name == "csubAggStatsTotalUpSessions" || name == "csubAggStatsTotalAuthSessions" || name == "csubAggStatsTotalDiscSessions" || name == "csubAggStatsTotalLightWeightSessions" || name == "csubAggStatsTotalFlowsUp" || name == "csubAggStatsDayCreatedSessions" || name == "csubAggStatsDayFailedSessions" || name == "csubAggStatsDayUpSessions" || name == "csubAggStatsDayAuthSessions" || name == "csubAggStatsDayDiscSessions" || name == "csubAggStatsCurrTimeElapsed" || name == "csubAggStatsCurrValidIntervals" || name == "csubAggStatsCurrInvalidIntervals" || name == "csubAggStatsCurrFlowsUp" || name == "csubAggStatsCurrCreatedSessions" || name == "csubAggStatsCurrFailedSessions" || name == "csubAggStatsCurrUpSessions" || name == "csubAggStatsCurrAuthSessions" || name == "csubAggStatsCurrDiscSessions" || name == "csubAggStatsDiscontinuityTime")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntTable()
    :
    csubaggstatsintentry(this, {"csubaggstatspointtype", "csubaggstatspoint", "csubaggstatssessiontype", "csubaggstatsintnumber"})
{

    yang_name = "csubAggStatsIntTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::~CsubAggStatsIntTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubaggstatsintentry.len(); index++)
    {
        if(csubaggstatsintentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsintentry.len(); index++)
    {
        if(csubaggstatsintentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsIntTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsIntEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry>();
        ent_->parent = this;
        csubaggstatsintentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubaggstatsintentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsIntEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::CsubAggStatsIntEntry()
    :
    csubaggstatspointtype{YType::enumeration, "csubAggStatsPointType"},
    csubaggstatspoint{YType::str, "csubAggStatsPoint"},
    csubaggstatssessiontype{YType::enumeration, "csubAggStatsSessionType"},
    csubaggstatsintnumber{YType::uint32, "csubAggStatsIntNumber"},
    csubaggstatsintvalid{YType::boolean, "csubAggStatsIntValid"},
    csubaggstatsintcreatedsessions{YType::uint32, "csubAggStatsIntCreatedSessions"},
    csubaggstatsintfailedsessions{YType::uint32, "csubAggStatsIntFailedSessions"},
    csubaggstatsintupsessions{YType::uint32, "csubAggStatsIntUpSessions"},
    csubaggstatsintauthsessions{YType::uint32, "csubAggStatsIntAuthSessions"},
    csubaggstatsintdiscsessions{YType::uint32, "csubAggStatsIntDiscSessions"}
{

    yang_name = "csubAggStatsIntEntry"; yang_parent_name = "csubAggStatsIntTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::~CsubAggStatsIntEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubaggstatspointtype.is_set
	|| csubaggstatspoint.is_set
	|| csubaggstatssessiontype.is_set
	|| csubaggstatsintnumber.is_set
	|| csubaggstatsintvalid.is_set
	|| csubaggstatsintcreatedsessions.is_set
	|| csubaggstatsintfailedsessions.is_set
	|| csubaggstatsintupsessions.is_set
	|| csubaggstatsintauthsessions.is_set
	|| csubaggstatsintdiscsessions.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubaggstatspointtype.yfilter)
	|| ydk::is_set(csubaggstatspoint.yfilter)
	|| ydk::is_set(csubaggstatssessiontype.yfilter)
	|| ydk::is_set(csubaggstatsintnumber.yfilter)
	|| ydk::is_set(csubaggstatsintvalid.yfilter)
	|| ydk::is_set(csubaggstatsintcreatedsessions.yfilter)
	|| ydk::is_set(csubaggstatsintfailedsessions.yfilter)
	|| ydk::is_set(csubaggstatsintupsessions.yfilter)
	|| ydk::is_set(csubaggstatsintauthsessions.yfilter)
	|| ydk::is_set(csubaggstatsintdiscsessions.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsIntTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsIntEntry";
    ADD_KEY_TOKEN(csubaggstatspointtype, "csubAggStatsPointType");
    ADD_KEY_TOKEN(csubaggstatspoint, "csubAggStatsPoint");
    ADD_KEY_TOKEN(csubaggstatssessiontype, "csubAggStatsSessionType");
    ADD_KEY_TOKEN(csubaggstatsintnumber, "csubAggStatsIntNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatspointtype.is_set || is_set(csubaggstatspointtype.yfilter)) leaf_name_data.push_back(csubaggstatspointtype.get_name_leafdata());
    if (csubaggstatspoint.is_set || is_set(csubaggstatspoint.yfilter)) leaf_name_data.push_back(csubaggstatspoint.get_name_leafdata());
    if (csubaggstatssessiontype.is_set || is_set(csubaggstatssessiontype.yfilter)) leaf_name_data.push_back(csubaggstatssessiontype.get_name_leafdata());
    if (csubaggstatsintnumber.is_set || is_set(csubaggstatsintnumber.yfilter)) leaf_name_data.push_back(csubaggstatsintnumber.get_name_leafdata());
    if (csubaggstatsintvalid.is_set || is_set(csubaggstatsintvalid.yfilter)) leaf_name_data.push_back(csubaggstatsintvalid.get_name_leafdata());
    if (csubaggstatsintcreatedsessions.is_set || is_set(csubaggstatsintcreatedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintcreatedsessions.get_name_leafdata());
    if (csubaggstatsintfailedsessions.is_set || is_set(csubaggstatsintfailedsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintfailedsessions.get_name_leafdata());
    if (csubaggstatsintupsessions.is_set || is_set(csubaggstatsintupsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintupsessions.get_name_leafdata());
    if (csubaggstatsintauthsessions.is_set || is_set(csubaggstatsintauthsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintauthsessions.get_name_leafdata());
    if (csubaggstatsintdiscsessions.is_set || is_set(csubaggstatsintdiscsessions.yfilter)) leaf_name_data.push_back(csubaggstatsintdiscsessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "csubAggStatsIntValid")
    {
        csubaggstatsintvalid = value;
        csubaggstatsintvalid.value_namespace = name_space;
        csubaggstatsintvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntCreatedSessions")
    {
        csubaggstatsintcreatedsessions = value;
        csubaggstatsintcreatedsessions.value_namespace = name_space;
        csubaggstatsintcreatedsessions.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csubAggStatsIntAuthSessions")
    {
        csubaggstatsintauthsessions = value;
        csubaggstatsintauthsessions.value_namespace = name_space;
        csubaggstatsintauthsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubAggStatsIntDiscSessions")
    {
        csubaggstatsintdiscsessions = value;
        csubaggstatsintdiscsessions.value_namespace = name_space;
        csubaggstatsintdiscsessions.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "csubAggStatsIntValid")
    {
        csubaggstatsintvalid.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntCreatedSessions")
    {
        csubaggstatsintcreatedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntFailedSessions")
    {
        csubaggstatsintfailedsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntUpSessions")
    {
        csubaggstatsintupsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntAuthSessions")
    {
        csubaggstatsintauthsessions.yfilter = yfilter;
    }
    if(value_path == "csubAggStatsIntDiscSessions")
    {
        csubaggstatsintdiscsessions.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsIntTable::CsubAggStatsIntEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsPointType" || name == "csubAggStatsPoint" || name == "csubAggStatsSessionType" || name == "csubAggStatsIntNumber" || name == "csubAggStatsIntValid" || name == "csubAggStatsIntCreatedSessions" || name == "csubAggStatsIntFailedSessions" || name == "csubAggStatsIntUpSessions" || name == "csubAggStatsIntAuthSessions" || name == "csubAggStatsIntDiscSessions")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshTable()
    :
    csubaggstatsthreshentry(this, {"csubsessionrisingthresh"})
{

    yang_name = "csubAggStatsThreshTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::~CsubAggStatsThreshTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubaggstatsthreshentry.len(); index++)
    {
        if(csubaggstatsthreshentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsthreshentry.len(); index++)
    {
        if(csubaggstatsthreshentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsThreshTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsThreshEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry>();
        ent_->parent = this;
        csubaggstatsthreshentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubaggstatsthreshentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubAggStatsThreshEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::CsubAggStatsThreshEntry()
    :
    csubsessionrisingthresh{YType::uint32, "csubSessionRisingThresh"},
    csubsessionfallingthresh{YType::uint32, "csubSessionFallingThresh"},
    csubsessiondeltapercentfallingthresh{YType::uint32, "csubSessionDeltaPercentFallingThresh"},
    csubsessionthreshevalinterval{YType::uint32, "csubSessionThreshEvalInterval"}
{

    yang_name = "csubAggStatsThreshEntry"; yang_parent_name = "csubAggStatsThreshTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::~CsubAggStatsThreshEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubsessionrisingthresh.is_set
	|| csubsessionfallingthresh.is_set
	|| csubsessiondeltapercentfallingthresh.is_set
	|| csubsessionthreshevalinterval.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubsessionrisingthresh.yfilter)
	|| ydk::is_set(csubsessionfallingthresh.yfilter)
	|| ydk::is_set(csubsessiondeltapercentfallingthresh.yfilter)
	|| ydk::is_set(csubsessionthreshevalinterval.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsThreshTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsThreshEntry";
    ADD_KEY_TOKEN(csubsessionrisingthresh, "csubSessionRisingThresh");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubsessionrisingthresh.is_set || is_set(csubsessionrisingthresh.yfilter)) leaf_name_data.push_back(csubsessionrisingthresh.get_name_leafdata());
    if (csubsessionfallingthresh.is_set || is_set(csubsessionfallingthresh.yfilter)) leaf_name_data.push_back(csubsessionfallingthresh.get_name_leafdata());
    if (csubsessiondeltapercentfallingthresh.is_set || is_set(csubsessiondeltapercentfallingthresh.yfilter)) leaf_name_data.push_back(csubsessiondeltapercentfallingthresh.get_name_leafdata());
    if (csubsessionthreshevalinterval.is_set || is_set(csubsessionthreshevalinterval.yfilter)) leaf_name_data.push_back(csubsessionthreshevalinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubSessionRisingThresh")
    {
        csubsessionrisingthresh = value;
        csubsessionrisingthresh.value_namespace = name_space;
        csubsessionrisingthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionFallingThresh")
    {
        csubsessionfallingthresh = value;
        csubsessionfallingthresh.value_namespace = name_space;
        csubsessionfallingthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionDeltaPercentFallingThresh")
    {
        csubsessiondeltapercentfallingthresh = value;
        csubsessiondeltapercentfallingthresh.value_namespace = name_space;
        csubsessiondeltapercentfallingthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubSessionThreshEvalInterval")
    {
        csubsessionthreshevalinterval = value;
        csubsessionthreshevalinterval.value_namespace = name_space;
        csubsessionthreshevalinterval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubSessionRisingThresh")
    {
        csubsessionrisingthresh.yfilter = yfilter;
    }
    if(value_path == "csubSessionFallingThresh")
    {
        csubsessionfallingthresh.yfilter = yfilter;
    }
    if(value_path == "csubSessionDeltaPercentFallingThresh")
    {
        csubsessiondeltapercentfallingthresh.yfilter = yfilter;
    }
    if(value_path == "csubSessionThreshEvalInterval")
    {
        csubsessionthreshevalinterval.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsThreshTable::CsubAggStatsThreshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubSessionRisingThresh" || name == "csubSessionFallingThresh" || name == "csubSessionDeltaPercentFallingThresh" || name == "csubSessionThreshEvalInterval")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobTable()
    :
    csubjobentry(this, {"csubjobid"})
{

    yang_name = "csubJobTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::~CsubJobTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubjobentry.len(); index++)
    {
        if(csubjobentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::has_operation() const
{
    for (std::size_t index=0; index<csubjobentry.len(); index++)
    {
        if(csubjobentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry>();
        ent_->parent = this;
        csubjobentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubjobentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobEntry()
    :
    csubjobid{YType::uint32, "csubJobId"},
    csubjobstatus{YType::enumeration, "csubJobStatus"},
    csubjobstorage{YType::enumeration, "csubJobStorage"},
    csubjobtype{YType::enumeration, "csubJobType"},
    csubjobcontrol{YType::enumeration, "csubJobControl"},
    csubjobstate{YType::enumeration, "csubJobState"},
    csubjobstartedtime{YType::uint32, "csubJobStartedTime"},
    csubjobfinishedtime{YType::uint32, "csubJobFinishedTime"},
    csubjobfinishedreason{YType::enumeration, "csubJobFinishedReason"}
{

    yang_name = "csubJobEntry"; yang_parent_name = "csubJobTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::~CsubJobEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubjobid.is_set
	|| csubjobstatus.is_set
	|| csubjobstorage.is_set
	|| csubjobtype.is_set
	|| csubjobcontrol.is_set
	|| csubjobstate.is_set
	|| csubjobstartedtime.is_set
	|| csubjobfinishedtime.is_set
	|| csubjobfinishedreason.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobstatus.yfilter)
	|| ydk::is_set(csubjobstorage.yfilter)
	|| ydk::is_set(csubjobtype.yfilter)
	|| ydk::is_set(csubjobcontrol.yfilter)
	|| ydk::is_set(csubjobstate.yfilter)
	|| ydk::is_set(csubjobstartedtime.yfilter)
	|| ydk::is_set(csubjobfinishedtime.yfilter)
	|| ydk::is_set(csubjobfinishedreason.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobEntry";
    ADD_KEY_TOKEN(csubjobid, "csubJobId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobstatus.is_set || is_set(csubjobstatus.yfilter)) leaf_name_data.push_back(csubjobstatus.get_name_leafdata());
    if (csubjobstorage.is_set || is_set(csubjobstorage.yfilter)) leaf_name_data.push_back(csubjobstorage.get_name_leafdata());
    if (csubjobtype.is_set || is_set(csubjobtype.yfilter)) leaf_name_data.push_back(csubjobtype.get_name_leafdata());
    if (csubjobcontrol.is_set || is_set(csubjobcontrol.yfilter)) leaf_name_data.push_back(csubjobcontrol.get_name_leafdata());
    if (csubjobstate.is_set || is_set(csubjobstate.yfilter)) leaf_name_data.push_back(csubjobstate.get_name_leafdata());
    if (csubjobstartedtime.is_set || is_set(csubjobstartedtime.yfilter)) leaf_name_data.push_back(csubjobstartedtime.get_name_leafdata());
    if (csubjobfinishedtime.is_set || is_set(csubjobfinishedtime.yfilter)) leaf_name_data.push_back(csubjobfinishedtime.get_name_leafdata());
    if (csubjobfinishedreason.is_set || is_set(csubjobfinishedreason.yfilter)) leaf_name_data.push_back(csubjobfinishedreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
        csubjobid.value_namespace = name_space;
        csubjobid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csubJobControl")
    {
        csubjobcontrol = value;
        csubjobcontrol.value_namespace = name_space;
        csubjobcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobState")
    {
        csubjobstate = value;
        csubjobstate.value_namespace = name_space;
        csubjobstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobStartedTime")
    {
        csubjobstartedtime = value;
        csubjobstartedtime.value_namespace = name_space;
        csubjobstartedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobFinishedTime")
    {
        csubjobfinishedtime = value;
        csubjobfinishedtime.value_namespace = name_space;
        csubjobfinishedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobFinishedReason")
    {
        csubjobfinishedreason = value;
        csubjobfinishedreason.value_namespace = name_space;
        csubjobfinishedreason.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobId")
    {
        csubjobid.yfilter = yfilter;
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
    if(value_path == "csubJobControl")
    {
        csubjobcontrol.yfilter = yfilter;
    }
    if(value_path == "csubJobState")
    {
        csubjobstate.yfilter = yfilter;
    }
    if(value_path == "csubJobStartedTime")
    {
        csubjobstartedtime.yfilter = yfilter;
    }
    if(value_path == "csubJobFinishedTime")
    {
        csubjobfinishedtime.yfilter = yfilter;
    }
    if(value_path == "csubJobFinishedReason")
    {
        csubjobfinishedreason.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobStatus" || name == "csubJobStorage" || name == "csubJobType" || name == "csubJobControl" || name == "csubJobState" || name == "csubJobStartedTime" || name == "csubJobFinishedTime" || name == "csubJobFinishedReason")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsTable()
    :
    csubjobmatchparamsentry(this, {"csubjobid"})
{

    yang_name = "csubJobMatchParamsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::~CsubJobMatchParamsTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubjobmatchparamsentry.len(); index++)
    {
        if(csubjobmatchparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::has_operation() const
{
    for (std::size_t index=0; index<csubjobmatchparamsentry.len(); index++)
    {
        if(csubjobmatchparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobMatchParamsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobMatchParamsEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry>();
        ent_->parent = this;
        csubjobmatchparamsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubjobmatchparamsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobMatchParamsEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::CsubJobMatchParamsEntry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobmatchidentities{YType::bits, "csubJobMatchIdentities"},
    csubjobmatchotherparams{YType::bits, "csubJobMatchOtherParams"},
    csubjobmatchsubscriberlabel{YType::uint32, "csubJobMatchSubscriberLabel"},
    csubjobmatchmacaddress{YType::str, "csubJobMatchMacAddress"},
    csubjobmatchnativevrf{YType::str, "csubJobMatchNativeVrf"},
    csubjobmatchnativeipaddrtype{YType::enumeration, "csubJobMatchNativeIpAddrType"},
    csubjobmatchnativeipaddr{YType::str, "csubJobMatchNativeIpAddr"},
    csubjobmatchnativeipmask{YType::str, "csubJobMatchNativeIpMask"},
    csubjobmatchdomainvrf{YType::str, "csubJobMatchDomainVrf"},
    csubjobmatchdomainipaddrtype{YType::enumeration, "csubJobMatchDomainIpAddrType"},
    csubjobmatchdomainipaddr{YType::str, "csubJobMatchDomainIpAddr"},
    csubjobmatchdomainipmask{YType::str, "csubJobMatchDomainIpMask"},
    csubjobmatchpbhk{YType::str, "csubJobMatchPbhk"},
    csubjobmatchremoteid{YType::str, "csubJobMatchRemoteId"},
    csubjobmatchcircuitid{YType::str, "csubJobMatchCircuitId"},
    csubjobmatchnasport{YType::str, "csubJobMatchNasPort"},
    csubjobmatchdomain{YType::str, "csubJobMatchDomain"},
    csubjobmatchusername{YType::str, "csubJobMatchUsername"},
    csubjobmatchacctsessionid{YType::uint32, "csubJobMatchAcctSessionId"},
    csubjobmatchdnis{YType::str, "csubJobMatchDnis"},
    csubjobmatchmedia{YType::enumeration, "csubJobMatchMedia"},
    csubjobmatchmlpnegotiated{YType::boolean, "csubJobMatchMlpNegotiated"},
    csubjobmatchprotocol{YType::enumeration, "csubJobMatchProtocol"},
    csubjobmatchservicename{YType::str, "csubJobMatchServiceName"},
    csubjobmatchdhcpclass{YType::str, "csubJobMatchDhcpClass"},
    csubjobmatchtunnelname{YType::str, "csubJobMatchTunnelName"},
    csubjobmatchdanglingduration{YType::uint32, "csubJobMatchDanglingDuration"},
    csubjobmatchstate{YType::enumeration, "csubJobMatchState"},
    csubjobmatchauthenticated{YType::boolean, "csubJobMatchAuthenticated"},
    csubjobmatchredundancymode{YType::enumeration, "csubJobMatchRedundancyMode"}
{

    yang_name = "csubJobMatchParamsEntry"; yang_parent_name = "csubJobMatchParamsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::~CsubJobMatchParamsEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubjobid.is_set
	|| csubjobmatchidentities.is_set
	|| csubjobmatchotherparams.is_set
	|| csubjobmatchsubscriberlabel.is_set
	|| csubjobmatchmacaddress.is_set
	|| csubjobmatchnativevrf.is_set
	|| csubjobmatchnativeipaddrtype.is_set
	|| csubjobmatchnativeipaddr.is_set
	|| csubjobmatchnativeipmask.is_set
	|| csubjobmatchdomainvrf.is_set
	|| csubjobmatchdomainipaddrtype.is_set
	|| csubjobmatchdomainipaddr.is_set
	|| csubjobmatchdomainipmask.is_set
	|| csubjobmatchpbhk.is_set
	|| csubjobmatchremoteid.is_set
	|| csubjobmatchcircuitid.is_set
	|| csubjobmatchnasport.is_set
	|| csubjobmatchdomain.is_set
	|| csubjobmatchusername.is_set
	|| csubjobmatchacctsessionid.is_set
	|| csubjobmatchdnis.is_set
	|| csubjobmatchmedia.is_set
	|| csubjobmatchmlpnegotiated.is_set
	|| csubjobmatchprotocol.is_set
	|| csubjobmatchservicename.is_set
	|| csubjobmatchdhcpclass.is_set
	|| csubjobmatchtunnelname.is_set
	|| csubjobmatchdanglingduration.is_set
	|| csubjobmatchstate.is_set
	|| csubjobmatchauthenticated.is_set
	|| csubjobmatchredundancymode.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobmatchidentities.yfilter)
	|| ydk::is_set(csubjobmatchotherparams.yfilter)
	|| ydk::is_set(csubjobmatchsubscriberlabel.yfilter)
	|| ydk::is_set(csubjobmatchmacaddress.yfilter)
	|| ydk::is_set(csubjobmatchnativevrf.yfilter)
	|| ydk::is_set(csubjobmatchnativeipaddrtype.yfilter)
	|| ydk::is_set(csubjobmatchnativeipaddr.yfilter)
	|| ydk::is_set(csubjobmatchnativeipmask.yfilter)
	|| ydk::is_set(csubjobmatchdomainvrf.yfilter)
	|| ydk::is_set(csubjobmatchdomainipaddrtype.yfilter)
	|| ydk::is_set(csubjobmatchdomainipaddr.yfilter)
	|| ydk::is_set(csubjobmatchdomainipmask.yfilter)
	|| ydk::is_set(csubjobmatchpbhk.yfilter)
	|| ydk::is_set(csubjobmatchremoteid.yfilter)
	|| ydk::is_set(csubjobmatchcircuitid.yfilter)
	|| ydk::is_set(csubjobmatchnasport.yfilter)
	|| ydk::is_set(csubjobmatchdomain.yfilter)
	|| ydk::is_set(csubjobmatchusername.yfilter)
	|| ydk::is_set(csubjobmatchacctsessionid.yfilter)
	|| ydk::is_set(csubjobmatchdnis.yfilter)
	|| ydk::is_set(csubjobmatchmedia.yfilter)
	|| ydk::is_set(csubjobmatchmlpnegotiated.yfilter)
	|| ydk::is_set(csubjobmatchprotocol.yfilter)
	|| ydk::is_set(csubjobmatchservicename.yfilter)
	|| ydk::is_set(csubjobmatchdhcpclass.yfilter)
	|| ydk::is_set(csubjobmatchtunnelname.yfilter)
	|| ydk::is_set(csubjobmatchdanglingduration.yfilter)
	|| ydk::is_set(csubjobmatchstate.yfilter)
	|| ydk::is_set(csubjobmatchauthenticated.yfilter)
	|| ydk::is_set(csubjobmatchredundancymode.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobMatchParamsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobMatchParamsEntry";
    ADD_KEY_TOKEN(csubjobid, "csubJobId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobmatchidentities.is_set || is_set(csubjobmatchidentities.yfilter)) leaf_name_data.push_back(csubjobmatchidentities.get_name_leafdata());
    if (csubjobmatchotherparams.is_set || is_set(csubjobmatchotherparams.yfilter)) leaf_name_data.push_back(csubjobmatchotherparams.get_name_leafdata());
    if (csubjobmatchsubscriberlabel.is_set || is_set(csubjobmatchsubscriberlabel.yfilter)) leaf_name_data.push_back(csubjobmatchsubscriberlabel.get_name_leafdata());
    if (csubjobmatchmacaddress.is_set || is_set(csubjobmatchmacaddress.yfilter)) leaf_name_data.push_back(csubjobmatchmacaddress.get_name_leafdata());
    if (csubjobmatchnativevrf.is_set || is_set(csubjobmatchnativevrf.yfilter)) leaf_name_data.push_back(csubjobmatchnativevrf.get_name_leafdata());
    if (csubjobmatchnativeipaddrtype.is_set || is_set(csubjobmatchnativeipaddrtype.yfilter)) leaf_name_data.push_back(csubjobmatchnativeipaddrtype.get_name_leafdata());
    if (csubjobmatchnativeipaddr.is_set || is_set(csubjobmatchnativeipaddr.yfilter)) leaf_name_data.push_back(csubjobmatchnativeipaddr.get_name_leafdata());
    if (csubjobmatchnativeipmask.is_set || is_set(csubjobmatchnativeipmask.yfilter)) leaf_name_data.push_back(csubjobmatchnativeipmask.get_name_leafdata());
    if (csubjobmatchdomainvrf.is_set || is_set(csubjobmatchdomainvrf.yfilter)) leaf_name_data.push_back(csubjobmatchdomainvrf.get_name_leafdata());
    if (csubjobmatchdomainipaddrtype.is_set || is_set(csubjobmatchdomainipaddrtype.yfilter)) leaf_name_data.push_back(csubjobmatchdomainipaddrtype.get_name_leafdata());
    if (csubjobmatchdomainipaddr.is_set || is_set(csubjobmatchdomainipaddr.yfilter)) leaf_name_data.push_back(csubjobmatchdomainipaddr.get_name_leafdata());
    if (csubjobmatchdomainipmask.is_set || is_set(csubjobmatchdomainipmask.yfilter)) leaf_name_data.push_back(csubjobmatchdomainipmask.get_name_leafdata());
    if (csubjobmatchpbhk.is_set || is_set(csubjobmatchpbhk.yfilter)) leaf_name_data.push_back(csubjobmatchpbhk.get_name_leafdata());
    if (csubjobmatchremoteid.is_set || is_set(csubjobmatchremoteid.yfilter)) leaf_name_data.push_back(csubjobmatchremoteid.get_name_leafdata());
    if (csubjobmatchcircuitid.is_set || is_set(csubjobmatchcircuitid.yfilter)) leaf_name_data.push_back(csubjobmatchcircuitid.get_name_leafdata());
    if (csubjobmatchnasport.is_set || is_set(csubjobmatchnasport.yfilter)) leaf_name_data.push_back(csubjobmatchnasport.get_name_leafdata());
    if (csubjobmatchdomain.is_set || is_set(csubjobmatchdomain.yfilter)) leaf_name_data.push_back(csubjobmatchdomain.get_name_leafdata());
    if (csubjobmatchusername.is_set || is_set(csubjobmatchusername.yfilter)) leaf_name_data.push_back(csubjobmatchusername.get_name_leafdata());
    if (csubjobmatchacctsessionid.is_set || is_set(csubjobmatchacctsessionid.yfilter)) leaf_name_data.push_back(csubjobmatchacctsessionid.get_name_leafdata());
    if (csubjobmatchdnis.is_set || is_set(csubjobmatchdnis.yfilter)) leaf_name_data.push_back(csubjobmatchdnis.get_name_leafdata());
    if (csubjobmatchmedia.is_set || is_set(csubjobmatchmedia.yfilter)) leaf_name_data.push_back(csubjobmatchmedia.get_name_leafdata());
    if (csubjobmatchmlpnegotiated.is_set || is_set(csubjobmatchmlpnegotiated.yfilter)) leaf_name_data.push_back(csubjobmatchmlpnegotiated.get_name_leafdata());
    if (csubjobmatchprotocol.is_set || is_set(csubjobmatchprotocol.yfilter)) leaf_name_data.push_back(csubjobmatchprotocol.get_name_leafdata());
    if (csubjobmatchservicename.is_set || is_set(csubjobmatchservicename.yfilter)) leaf_name_data.push_back(csubjobmatchservicename.get_name_leafdata());
    if (csubjobmatchdhcpclass.is_set || is_set(csubjobmatchdhcpclass.yfilter)) leaf_name_data.push_back(csubjobmatchdhcpclass.get_name_leafdata());
    if (csubjobmatchtunnelname.is_set || is_set(csubjobmatchtunnelname.yfilter)) leaf_name_data.push_back(csubjobmatchtunnelname.get_name_leafdata());
    if (csubjobmatchdanglingduration.is_set || is_set(csubjobmatchdanglingduration.yfilter)) leaf_name_data.push_back(csubjobmatchdanglingduration.get_name_leafdata());
    if (csubjobmatchstate.is_set || is_set(csubjobmatchstate.yfilter)) leaf_name_data.push_back(csubjobmatchstate.get_name_leafdata());
    if (csubjobmatchauthenticated.is_set || is_set(csubjobmatchauthenticated.yfilter)) leaf_name_data.push_back(csubjobmatchauthenticated.get_name_leafdata());
    if (csubjobmatchredundancymode.is_set || is_set(csubjobmatchredundancymode.yfilter)) leaf_name_data.push_back(csubjobmatchredundancymode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
        csubjobid.value_namespace = name_space;
        csubjobid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchIdentities")
    {
        csubjobmatchidentities[value] = true;
    }
    if(value_path == "csubJobMatchOtherParams")
    {
        csubjobmatchotherparams[value] = true;
    }
    if(value_path == "csubJobMatchSubscriberLabel")
    {
        csubjobmatchsubscriberlabel = value;
        csubjobmatchsubscriberlabel.value_namespace = name_space;
        csubjobmatchsubscriberlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchMacAddress")
    {
        csubjobmatchmacaddress = value;
        csubjobmatchmacaddress.value_namespace = name_space;
        csubjobmatchmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeVrf")
    {
        csubjobmatchnativevrf = value;
        csubjobmatchnativevrf.value_namespace = name_space;
        csubjobmatchnativevrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeIpAddrType")
    {
        csubjobmatchnativeipaddrtype = value;
        csubjobmatchnativeipaddrtype.value_namespace = name_space;
        csubjobmatchnativeipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeIpAddr")
    {
        csubjobmatchnativeipaddr = value;
        csubjobmatchnativeipaddr.value_namespace = name_space;
        csubjobmatchnativeipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNativeIpMask")
    {
        csubjobmatchnativeipmask = value;
        csubjobmatchnativeipmask.value_namespace = name_space;
        csubjobmatchnativeipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainVrf")
    {
        csubjobmatchdomainvrf = value;
        csubjobmatchdomainvrf.value_namespace = name_space;
        csubjobmatchdomainvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainIpAddrType")
    {
        csubjobmatchdomainipaddrtype = value;
        csubjobmatchdomainipaddrtype.value_namespace = name_space;
        csubjobmatchdomainipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainIpAddr")
    {
        csubjobmatchdomainipaddr = value;
        csubjobmatchdomainipaddr.value_namespace = name_space;
        csubjobmatchdomainipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomainIpMask")
    {
        csubjobmatchdomainipmask = value;
        csubjobmatchdomainipmask.value_namespace = name_space;
        csubjobmatchdomainipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchPbhk")
    {
        csubjobmatchpbhk = value;
        csubjobmatchpbhk.value_namespace = name_space;
        csubjobmatchpbhk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchRemoteId")
    {
        csubjobmatchremoteid = value;
        csubjobmatchremoteid.value_namespace = name_space;
        csubjobmatchremoteid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchCircuitId")
    {
        csubjobmatchcircuitid = value;
        csubjobmatchcircuitid.value_namespace = name_space;
        csubjobmatchcircuitid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchNasPort")
    {
        csubjobmatchnasport = value;
        csubjobmatchnasport.value_namespace = name_space;
        csubjobmatchnasport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDomain")
    {
        csubjobmatchdomain = value;
        csubjobmatchdomain.value_namespace = name_space;
        csubjobmatchdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchUsername")
    {
        csubjobmatchusername = value;
        csubjobmatchusername.value_namespace = name_space;
        csubjobmatchusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchAcctSessionId")
    {
        csubjobmatchacctsessionid = value;
        csubjobmatchacctsessionid.value_namespace = name_space;
        csubjobmatchacctsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDnis")
    {
        csubjobmatchdnis = value;
        csubjobmatchdnis.value_namespace = name_space;
        csubjobmatchdnis.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csubJobMatchProtocol")
    {
        csubjobmatchprotocol = value;
        csubjobmatchprotocol.value_namespace = name_space;
        csubjobmatchprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchServiceName")
    {
        csubjobmatchservicename = value;
        csubjobmatchservicename.value_namespace = name_space;
        csubjobmatchservicename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDhcpClass")
    {
        csubjobmatchdhcpclass = value;
        csubjobmatchdhcpclass.value_namespace = name_space;
        csubjobmatchdhcpclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchTunnelName")
    {
        csubjobmatchtunnelname = value;
        csubjobmatchtunnelname.value_namespace = name_space;
        csubjobmatchtunnelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchDanglingDuration")
    {
        csubjobmatchdanglingduration = value;
        csubjobmatchdanglingduration.value_namespace = name_space;
        csubjobmatchdanglingduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchState")
    {
        csubjobmatchstate = value;
        csubjobmatchstate.value_namespace = name_space;
        csubjobmatchstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchAuthenticated")
    {
        csubjobmatchauthenticated = value;
        csubjobmatchauthenticated.value_namespace = name_space;
        csubjobmatchauthenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csubJobMatchRedundancyMode")
    {
        csubjobmatchredundancymode = value;
        csubjobmatchredundancymode.value_namespace = name_space;
        csubjobmatchredundancymode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobId")
    {
        csubjobid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchIdentities")
    {
        csubjobmatchidentities.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchOtherParams")
    {
        csubjobmatchotherparams.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchSubscriberLabel")
    {
        csubjobmatchsubscriberlabel.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchMacAddress")
    {
        csubjobmatchmacaddress.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeVrf")
    {
        csubjobmatchnativevrf.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeIpAddrType")
    {
        csubjobmatchnativeipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeIpAddr")
    {
        csubjobmatchnativeipaddr.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNativeIpMask")
    {
        csubjobmatchnativeipmask.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainVrf")
    {
        csubjobmatchdomainvrf.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainIpAddrType")
    {
        csubjobmatchdomainipaddrtype.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainIpAddr")
    {
        csubjobmatchdomainipaddr.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomainIpMask")
    {
        csubjobmatchdomainipmask.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchPbhk")
    {
        csubjobmatchpbhk.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchRemoteId")
    {
        csubjobmatchremoteid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchCircuitId")
    {
        csubjobmatchcircuitid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchNasPort")
    {
        csubjobmatchnasport.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDomain")
    {
        csubjobmatchdomain.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchUsername")
    {
        csubjobmatchusername.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchAcctSessionId")
    {
        csubjobmatchacctsessionid.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDnis")
    {
        csubjobmatchdnis.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchMedia")
    {
        csubjobmatchmedia.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchMlpNegotiated")
    {
        csubjobmatchmlpnegotiated.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchProtocol")
    {
        csubjobmatchprotocol.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchServiceName")
    {
        csubjobmatchservicename.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDhcpClass")
    {
        csubjobmatchdhcpclass.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchTunnelName")
    {
        csubjobmatchtunnelname.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchDanglingDuration")
    {
        csubjobmatchdanglingduration.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchState")
    {
        csubjobmatchstate.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchAuthenticated")
    {
        csubjobmatchauthenticated.yfilter = yfilter;
    }
    if(value_path == "csubJobMatchRedundancyMode")
    {
        csubjobmatchredundancymode.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobMatchParamsTable::CsubJobMatchParamsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobMatchIdentities" || name == "csubJobMatchOtherParams" || name == "csubJobMatchSubscriberLabel" || name == "csubJobMatchMacAddress" || name == "csubJobMatchNativeVrf" || name == "csubJobMatchNativeIpAddrType" || name == "csubJobMatchNativeIpAddr" || name == "csubJobMatchNativeIpMask" || name == "csubJobMatchDomainVrf" || name == "csubJobMatchDomainIpAddrType" || name == "csubJobMatchDomainIpAddr" || name == "csubJobMatchDomainIpMask" || name == "csubJobMatchPbhk" || name == "csubJobMatchRemoteId" || name == "csubJobMatchCircuitId" || name == "csubJobMatchNasPort" || name == "csubJobMatchDomain" || name == "csubJobMatchUsername" || name == "csubJobMatchAcctSessionId" || name == "csubJobMatchDnis" || name == "csubJobMatchMedia" || name == "csubJobMatchMlpNegotiated" || name == "csubJobMatchProtocol" || name == "csubJobMatchServiceName" || name == "csubJobMatchDhcpClass" || name == "csubJobMatchTunnelName" || name == "csubJobMatchDanglingDuration" || name == "csubJobMatchState" || name == "csubJobMatchAuthenticated" || name == "csubJobMatchRedundancyMode")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsTable()
    :
    csubjobqueryparamsentry(this, {"csubjobid"})
{

    yang_name = "csubJobQueryParamsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::~CsubJobQueryParamsTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubjobqueryparamsentry.len(); index++)
    {
        if(csubjobqueryparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::has_operation() const
{
    for (std::size_t index=0; index<csubjobqueryparamsentry.len(); index++)
    {
        if(csubjobqueryparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueryParamsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobQueryParamsEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry>();
        ent_->parent = this;
        csubjobqueryparamsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubjobqueryparamsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobQueryParamsEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::CsubJobQueryParamsEntry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobquerysortkey1{YType::enumeration, "csubJobQuerySortKey1"},
    csubjobquerysortkey2{YType::enumeration, "csubJobQuerySortKey2"},
    csubjobquerysortkey3{YType::enumeration, "csubJobQuerySortKey3"},
    csubjobqueryresultingreportsize{YType::uint32, "csubJobQueryResultingReportSize"}
{

    yang_name = "csubJobQueryParamsEntry"; yang_parent_name = "csubJobQueryParamsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::~CsubJobQueryParamsEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubjobid.is_set
	|| csubjobquerysortkey1.is_set
	|| csubjobquerysortkey2.is_set
	|| csubjobquerysortkey3.is_set
	|| csubjobqueryresultingreportsize.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobquerysortkey1.yfilter)
	|| ydk::is_set(csubjobquerysortkey2.yfilter)
	|| ydk::is_set(csubjobquerysortkey3.yfilter)
	|| ydk::is_set(csubjobqueryresultingreportsize.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobQueryParamsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueryParamsEntry";
    ADD_KEY_TOKEN(csubjobid, "csubJobId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobquerysortkey1.is_set || is_set(csubjobquerysortkey1.yfilter)) leaf_name_data.push_back(csubjobquerysortkey1.get_name_leafdata());
    if (csubjobquerysortkey2.is_set || is_set(csubjobquerysortkey2.yfilter)) leaf_name_data.push_back(csubjobquerysortkey2.get_name_leafdata());
    if (csubjobquerysortkey3.is_set || is_set(csubjobquerysortkey3.yfilter)) leaf_name_data.push_back(csubjobquerysortkey3.get_name_leafdata());
    if (csubjobqueryresultingreportsize.is_set || is_set(csubjobqueryresultingreportsize.yfilter)) leaf_name_data.push_back(csubjobqueryresultingreportsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
        csubjobid.value_namespace = name_space;
        csubjobid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "csubJobQueryResultingReportSize")
    {
        csubjobqueryresultingreportsize = value;
        csubjobqueryresultingreportsize.value_namespace = name_space;
        csubjobqueryresultingreportsize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csubJobId")
    {
        csubjobid.yfilter = yfilter;
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
    if(value_path == "csubJobQueryResultingReportSize")
    {
        csubjobqueryresultingreportsize.yfilter = yfilter;
    }
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueryParamsTable::CsubJobQueryParamsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobQuerySortKey1" || name == "csubJobQuerySortKey2" || name == "csubJobQuerySortKey3" || name == "csubJobQueryResultingReportSize")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueTable()
    :
    csubjobqueueentry(this, {"csubjobqueuenumber"})
{

    yang_name = "csubJobQueueTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::~CsubJobQueueTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubjobqueueentry.len(); index++)
    {
        if(csubjobqueueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::has_operation() const
{
    for (std::size_t index=0; index<csubjobqueueentry.len(); index++)
    {
        if(csubjobqueueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueueTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobQueueEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry>();
        ent_->parent = this;
        csubjobqueueentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubjobqueueentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobQueueEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::CsubJobQueueEntry()
    :
    csubjobqueuenumber{YType::uint32, "csubJobQueueNumber"},
    csubjobqueuejobid{YType::uint32, "csubJobQueueJobId"}
{

    yang_name = "csubJobQueueEntry"; yang_parent_name = "csubJobQueueTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::~CsubJobQueueEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubjobqueuenumber.is_set
	|| csubjobqueuejobid.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobqueuenumber.yfilter)
	|| ydk::is_set(csubjobqueuejobid.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobQueueTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueueEntry";
    ADD_KEY_TOKEN(csubjobqueuenumber, "csubJobQueueNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobqueuenumber.is_set || is_set(csubjobqueuenumber.yfilter)) leaf_name_data.push_back(csubjobqueuenumber.get_name_leafdata());
    if (csubjobqueuejobid.is_set || is_set(csubjobqueuejobid.yfilter)) leaf_name_data.push_back(csubjobqueuejobid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobQueueTable::CsubJobQueueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobQueueNumber" || name == "csubJobQueueJobId")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportTable()
    :
    csubjobreportentry(this, {"csubjobid", "csubjobreportid"})
{

    yang_name = "csubJobReportTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::~CsubJobReportTable()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csubjobreportentry.len(); index++)
    {
        if(csubjobreportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::has_operation() const
{
    for (std::size_t index=0; index<csubjobreportentry.len(); index++)
    {
        if(csubjobreportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobReportTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobReportEntry")
    {
        auto ent_ = std::make_shared<CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry>();
        ent_->parent = this;
        csubjobreportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csubjobreportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobReportEntry")
        return true;
    return false;
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::CsubJobReportEntry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobreportid{YType::uint32, "csubJobReportId"},
    csubjobreportsession{YType::int32, "csubJobReportSession"}
{

    yang_name = "csubJobReportEntry"; yang_parent_name = "csubJobReportTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::~CsubJobReportEntry()
{
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::has_data() const
{
    if (is_presence_container) return true;
    return csubjobid.is_set
	|| csubjobreportid.is_set
	|| csubjobreportsession.is_set;
}

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csubjobid.yfilter)
	|| ydk::is_set(csubjobreportid.yfilter)
	|| ydk::is_set(csubjobreportsession.yfilter);
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobReportTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobReportEntry";
    ADD_KEY_TOKEN(csubjobid, "csubJobId");
    ADD_KEY_TOKEN(csubjobreportid, "csubJobReportId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.yfilter)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobreportid.is_set || is_set(csubjobreportid.yfilter)) leaf_name_data.push_back(csubjobreportid.get_name_leafdata());
    if (csubjobreportsession.is_set || is_set(csubjobreportsession.yfilter)) leaf_name_data.push_back(csubjobreportsession.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSUBSCRIBERSESSIONMIB::CsubJobReportTable::CsubJobReportEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csubJobId" || name == "csubJobReportId" || name == "csubJobReportSession")
        return true;
    return false;
}

const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::none {1, "none"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::other {2, "other"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::static_ {3, "static"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::localPool {4, "localPool"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::dhcpv4 {5, "dhcpv4"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::dhcpv6 {6, "dhcpv6"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::userProfileIpAddr {7, "userProfileIpAddr"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::userProfileIpSubnet {8, "userProfileIpSubnet"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubSessionTable::CsubSessionEntry::CsubSessionIpAddrAssignment::userProfileNamedPool {9, "userProfileNamedPool"};

const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::CsubAggStatsPointType::physical {1, "physical"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubAggStatsTable::CsubAggStatsEntry::CsubAggStatsPointType::interface {2, "interface"};

const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobType::noop {1, "noop"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobType::query {2, "query"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobType::clear {3, "clear"};

const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobControl::noop {1, "noop"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobControl::start {2, "start"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobControl::abort {3, "abort"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobControl::release {4, "release"};

const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobState::idle {1, "idle"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobState::pending {2, "pending"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobState::inProgress {3, "inProgress"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobState::finished {4, "finished"};

const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobFinishedReason::invalid {1, "invalid"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobFinishedReason::other {2, "other"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobFinishedReason::normal {3, "normal"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobFinishedReason::aborted {4, "aborted"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobFinishedReason::insufficientResources {5, "insufficientResources"};
const Enum::YLeaf CISCOSUBSCRIBERSESSIONMIB::CsubJobTable::CsubJobEntry::CsubJobFinishedReason::error {6, "error"};


}
}

