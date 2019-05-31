
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_ip_sla_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ip_sla_oper {

IpSlaStats::IpSlaStats()
    :
    sla_oper_entry(this, {"oper_id"})
{

    yang_name = "ip-sla-stats"; yang_parent_name = "Cisco-IOS-XE-ip-sla-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

IpSlaStats::~IpSlaStats()
{
}

bool IpSlaStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sla_oper_entry.len(); index++)
    {
        if(sla_oper_entry[index]->has_data())
            return true;
    }
    return false;
}

bool IpSlaStats::has_operation() const
{
    for (std::size_t index=0; index<sla_oper_entry.len(); index++)
    {
        if(sla_oper_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpSlaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ip-sla-oper:ip-sla-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-oper-entry")
    {
        auto ent_ = std::make_shared<IpSlaStats::SlaOperEntry>();
        ent_->parent = this;
        sla_oper_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sla_oper_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IpSlaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSlaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IpSlaStats::clone_ptr() const
{
    return std::make_shared<IpSlaStats>();
}

std::string IpSlaStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IpSlaStats::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IpSlaStats::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IpSlaStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IpSlaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-oper-entry")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::SlaOperEntry()
    :
    oper_id{YType::uint32, "oper-id"},
    oper_type{YType::enumeration, "oper-type"},
    latest_return_code{YType::enumeration, "latest-return-code"},
    success_count{YType::uint32, "success-count"},
    failure_count{YType::uint32, "failure-count"},
    latest_oper_start_time{YType::str, "latest-oper-start-time"}
        ,
    rtt_info(std::make_shared<IpSlaStats::SlaOperEntry::RttInfo>())
    , measure_stats(std::make_shared<IpSlaStats::SlaOperEntry::MeasureStats>())
    , stats(std::make_shared<IpSlaStats::SlaOperEntry::Stats>())
{
    rtt_info->parent = this;
    measure_stats->parent = this;
    stats->parent = this;

    yang_name = "sla-oper-entry"; yang_parent_name = "ip-sla-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

IpSlaStats::SlaOperEntry::~SlaOperEntry()
{
}

bool IpSlaStats::SlaOperEntry::has_data() const
{
    if (is_presence_container) return true;
    return oper_id.is_set
	|| oper_type.is_set
	|| latest_return_code.is_set
	|| success_count.is_set
	|| failure_count.is_set
	|| latest_oper_start_time.is_set
	|| (rtt_info !=  nullptr && rtt_info->has_data())
	|| (measure_stats !=  nullptr && measure_stats->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool IpSlaStats::SlaOperEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_id.yfilter)
	|| ydk::is_set(oper_type.yfilter)
	|| ydk::is_set(latest_return_code.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(failure_count.yfilter)
	|| ydk::is_set(latest_oper_start_time.yfilter)
	|| (rtt_info !=  nullptr && rtt_info->has_operation())
	|| (measure_stats !=  nullptr && measure_stats->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string IpSlaStats::SlaOperEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ip-sla-oper:ip-sla-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string IpSlaStats::SlaOperEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-oper-entry";
    ADD_KEY_TOKEN(oper_id, "oper-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_id.is_set || is_set(oper_id.yfilter)) leaf_name_data.push_back(oper_id.get_name_leafdata());
    if (oper_type.is_set || is_set(oper_type.yfilter)) leaf_name_data.push_back(oper_type.get_name_leafdata());
    if (latest_return_code.is_set || is_set(latest_return_code.yfilter)) leaf_name_data.push_back(latest_return_code.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (failure_count.is_set || is_set(failure_count.yfilter)) leaf_name_data.push_back(failure_count.get_name_leafdata());
    if (latest_oper_start_time.is_set || is_set(latest_oper_start_time.yfilter)) leaf_name_data.push_back(latest_oper_start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtt-info")
    {
        if(rtt_info == nullptr)
        {
            rtt_info = std::make_shared<IpSlaStats::SlaOperEntry::RttInfo>();
        }
        return rtt_info;
    }

    if(child_yang_name == "measure-stats")
    {
        if(measure_stats == nullptr)
        {
            measure_stats = std::make_shared<IpSlaStats::SlaOperEntry::MeasureStats>();
        }
        return measure_stats;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<IpSlaStats::SlaOperEntry::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtt_info != nullptr)
    {
        _children["rtt-info"] = rtt_info;
    }

    if(measure_stats != nullptr)
    {
        _children["measure-stats"] = measure_stats;
    }

    if(stats != nullptr)
    {
        _children["stats"] = stats;
    }

    return _children;
}

void IpSlaStats::SlaOperEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-id")
    {
        oper_id = value;
        oper_id.value_namespace = name_space;
        oper_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-type")
    {
        oper_type = value;
        oper_type.value_namespace = name_space;
        oper_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-return-code")
    {
        latest_return_code = value;
        latest_return_code.value_namespace = name_space;
        latest_return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-count")
    {
        failure_count = value;
        failure_count.value_namespace = name_space;
        failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-oper-start-time")
    {
        latest_oper_start_time = value;
        latest_oper_start_time.value_namespace = name_space;
        latest_oper_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-id")
    {
        oper_id.yfilter = yfilter;
    }
    if(value_path == "oper-type")
    {
        oper_type.yfilter = yfilter;
    }
    if(value_path == "latest-return-code")
    {
        latest_return_code.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "failure-count")
    {
        failure_count.yfilter = yfilter;
    }
    if(value_path == "latest-oper-start-time")
    {
        latest_oper_start_time.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt-info" || name == "measure-stats" || name == "stats" || name == "oper-id" || name == "oper-type" || name == "latest-return-code" || name == "success-count" || name == "failure-count" || name == "latest-oper-start-time")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::RttInfo::RttInfo()
    :
    latest_rtt(std::make_shared<IpSlaStats::SlaOperEntry::RttInfo::LatestRtt>())
    , time_to_live(std::make_shared<IpSlaStats::SlaOperEntry::RttInfo::TimeToLive>())
{
    latest_rtt->parent = this;
    time_to_live->parent = this;

    yang_name = "rtt-info"; yang_parent_name = "sla-oper-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::RttInfo::~RttInfo()
{
}

bool IpSlaStats::SlaOperEntry::RttInfo::has_data() const
{
    if (is_presence_container) return true;
    return (latest_rtt !=  nullptr && latest_rtt->has_data())
	|| (time_to_live !=  nullptr && time_to_live->has_data());
}

bool IpSlaStats::SlaOperEntry::RttInfo::has_operation() const
{
    return is_set(yfilter)
	|| (latest_rtt !=  nullptr && latest_rtt->has_operation())
	|| (time_to_live !=  nullptr && time_to_live->has_operation());
}

std::string IpSlaStats::SlaOperEntry::RttInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::RttInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::RttInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "latest-rtt")
    {
        if(latest_rtt == nullptr)
        {
            latest_rtt = std::make_shared<IpSlaStats::SlaOperEntry::RttInfo::LatestRtt>();
        }
        return latest_rtt;
    }

    if(child_yang_name == "time-to-live")
    {
        if(time_to_live == nullptr)
        {
            time_to_live = std::make_shared<IpSlaStats::SlaOperEntry::RttInfo::TimeToLive>();
        }
        return time_to_live;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::RttInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(latest_rtt != nullptr)
    {
        _children["latest-rtt"] = latest_rtt;
    }

    if(time_to_live != nullptr)
    {
        _children["time-to-live"] = time_to_live;
    }

    return _children;
}

void IpSlaStats::SlaOperEntry::RttInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSlaStats::SlaOperEntry::RttInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSlaStats::SlaOperEntry::RttInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "latest-rtt" || name == "time-to-live")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::LatestRtt()
    :
    rtt{YType::uint64, "rtt"},
    unknown{YType::empty, "unknown"},
    could_not_find{YType::empty, "could-not-find"}
{

    yang_name = "latest-rtt"; yang_parent_name = "rtt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::~LatestRtt()
{
}

bool IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set
	|| unknown.is_set
	|| could_not_find.is_set;
}

bool IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(could_not_find.yfilter);
}

std::string IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latest-rtt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (could_not_find.is_set || is_set(could_not_find.yfilter)) leaf_name_data.push_back(could_not_find.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "could-not-find")
    {
        could_not_find = value;
        could_not_find.value_namespace = name_space;
        could_not_find.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "could-not-find")
    {
        could_not_find.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::RttInfo::LatestRtt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "unknown" || name == "could-not-find")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::TimeToLive()
    :
    ttl{YType::uint64, "ttl"},
    forever{YType::empty, "forever"}
{

    yang_name = "time-to-live"; yang_parent_name = "rtt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::~TimeToLive()
{
}

bool IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::has_data() const
{
    if (is_presence_container) return true;
    return ttl.is_set
	|| forever.is_set;
}

bool IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(forever.yfilter);
}

std::string IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-to-live";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (forever.is_set || is_set(forever.yfilter)) leaf_name_data.push_back(forever.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forever")
    {
        forever = value;
        forever.value_namespace = name_space;
        forever.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "forever")
    {
        forever.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::RttInfo::TimeToLive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl" || name == "forever")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::MeasureStats::MeasureStats()
    :
    intv_start_time{YType::str, "intv-start-time"},
    init_count{YType::uint32, "init-count"},
    complete_count{YType::uint32, "complete-count"},
    valid{YType::boolean, "valid"}
{

    yang_name = "measure-stats"; yang_parent_name = "sla-oper-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::MeasureStats::~MeasureStats()
{
}

bool IpSlaStats::SlaOperEntry::MeasureStats::has_data() const
{
    if (is_presence_container) return true;
    return intv_start_time.is_set
	|| init_count.is_set
	|| complete_count.is_set
	|| valid.is_set;
}

bool IpSlaStats::SlaOperEntry::MeasureStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intv_start_time.yfilter)
	|| ydk::is_set(init_count.yfilter)
	|| ydk::is_set(complete_count.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string IpSlaStats::SlaOperEntry::MeasureStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "measure-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::MeasureStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intv_start_time.is_set || is_set(intv_start_time.yfilter)) leaf_name_data.push_back(intv_start_time.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.yfilter)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (complete_count.is_set || is_set(complete_count.yfilter)) leaf_name_data.push_back(complete_count.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::MeasureStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::MeasureStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::MeasureStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intv-start-time")
    {
        intv_start_time = value;
        intv_start_time.value_namespace = name_space;
        intv_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-count")
    {
        init_count = value;
        init_count.value_namespace = name_space;
        init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-count")
    {
        complete_count = value;
        complete_count.value_namespace = name_space;
        complete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::MeasureStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intv-start-time")
    {
        intv_start_time.yfilter = yfilter;
    }
    if(value_path == "init-count")
    {
        init_count.yfilter = yfilter;
    }
    if(value_path == "complete-count")
    {
        complete_count.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::MeasureStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intv-start-time" || name == "init-count" || name == "complete-count" || name == "valid")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::Stats()
    :
    rtt(std::make_shared<IpSlaStats::SlaOperEntry::Stats::Rtt>())
    , oneway_latency(std::make_shared<IpSlaStats::SlaOperEntry::Stats::OnewayLatency>())
    , jitter(std::make_shared<IpSlaStats::SlaOperEntry::Stats::Jitter>())
    , over_threshold(std::make_shared<IpSlaStats::SlaOperEntry::Stats::OverThreshold>())
    , packet_loss(std::make_shared<IpSlaStats::SlaOperEntry::Stats::PacketLoss>())
    , icmp_packet_loss(std::make_shared<IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss>())
    , voice_score(std::make_shared<IpSlaStats::SlaOperEntry::Stats::VoiceScore>())
{
    rtt->parent = this;
    oneway_latency->parent = this;
    jitter->parent = this;
    over_threshold->parent = this;
    packet_loss->parent = this;
    icmp_packet_loss->parent = this;
    voice_score->parent = this;

    yang_name = "stats"; yang_parent_name = "sla-oper-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::~Stats()
{
}

bool IpSlaStats::SlaOperEntry::Stats::has_data() const
{
    if (is_presence_container) return true;
    return (rtt !=  nullptr && rtt->has_data())
	|| (oneway_latency !=  nullptr && oneway_latency->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (over_threshold !=  nullptr && over_threshold->has_data())
	|| (packet_loss !=  nullptr && packet_loss->has_data())
	|| (icmp_packet_loss !=  nullptr && icmp_packet_loss->has_data())
	|| (voice_score !=  nullptr && voice_score->has_data());
}

bool IpSlaStats::SlaOperEntry::Stats::has_operation() const
{
    return is_set(yfilter)
	|| (rtt !=  nullptr && rtt->has_operation())
	|| (oneway_latency !=  nullptr && oneway_latency->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (over_threshold !=  nullptr && over_threshold->has_operation())
	|| (packet_loss !=  nullptr && packet_loss->has_operation())
	|| (icmp_packet_loss !=  nullptr && icmp_packet_loss->has_operation())
	|| (voice_score !=  nullptr && voice_score->has_operation());
}

std::string IpSlaStats::SlaOperEntry::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtt")
    {
        if(rtt == nullptr)
        {
            rtt = std::make_shared<IpSlaStats::SlaOperEntry::Stats::Rtt>();
        }
        return rtt;
    }

    if(child_yang_name == "oneway-latency")
    {
        if(oneway_latency == nullptr)
        {
            oneway_latency = std::make_shared<IpSlaStats::SlaOperEntry::Stats::OnewayLatency>();
        }
        return oneway_latency;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<IpSlaStats::SlaOperEntry::Stats::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "over-threshold")
    {
        if(over_threshold == nullptr)
        {
            over_threshold = std::make_shared<IpSlaStats::SlaOperEntry::Stats::OverThreshold>();
        }
        return over_threshold;
    }

    if(child_yang_name == "packet-loss")
    {
        if(packet_loss == nullptr)
        {
            packet_loss = std::make_shared<IpSlaStats::SlaOperEntry::Stats::PacketLoss>();
        }
        return packet_loss;
    }

    if(child_yang_name == "icmp-packet-loss")
    {
        if(icmp_packet_loss == nullptr)
        {
            icmp_packet_loss = std::make_shared<IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss>();
        }
        return icmp_packet_loss;
    }

    if(child_yang_name == "voice-score")
    {
        if(voice_score == nullptr)
        {
            voice_score = std::make_shared<IpSlaStats::SlaOperEntry::Stats::VoiceScore>();
        }
        return voice_score;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtt != nullptr)
    {
        _children["rtt"] = rtt;
    }

    if(oneway_latency != nullptr)
    {
        _children["oneway-latency"] = oneway_latency;
    }

    if(jitter != nullptr)
    {
        _children["jitter"] = jitter;
    }

    if(over_threshold != nullptr)
    {
        _children["over-threshold"] = over_threshold;
    }

    if(packet_loss != nullptr)
    {
        _children["packet-loss"] = packet_loss;
    }

    if(icmp_packet_loss != nullptr)
    {
        _children["icmp-packet-loss"] = icmp_packet_loss;
    }

    if(voice_score != nullptr)
    {
        _children["voice-score"] = voice_score;
    }

    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSlaStats::SlaOperEntry::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSlaStats::SlaOperEntry::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "oneway-latency" || name == "jitter" || name == "over-threshold" || name == "packet-loss" || name == "icmp-packet-loss" || name == "voice-score")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::Rtt::Rtt()
    :
    rtt_count{YType::uint32, "rtt-count"}
        ,
    sla_time_values(std::make_shared<IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues>())
{
    sla_time_values->parent = this;

    yang_name = "rtt"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::Rtt::~Rtt()
{
}

bool IpSlaStats::SlaOperEntry::Stats::Rtt::has_data() const
{
    if (is_presence_container) return true;
    return rtt_count.is_set
	|| (sla_time_values !=  nullptr && sla_time_values->has_data());
}

bool IpSlaStats::SlaOperEntry::Stats::Rtt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt_count.yfilter)
	|| (sla_time_values !=  nullptr && sla_time_values->has_operation());
}

std::string IpSlaStats::SlaOperEntry::Stats::Rtt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::Rtt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt_count.is_set || is_set(rtt_count.yfilter)) leaf_name_data.push_back(rtt_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::Rtt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-time-values")
    {
        if(sla_time_values == nullptr)
        {
            sla_time_values = std::make_shared<IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues>();
        }
        return sla_time_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::Rtt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sla_time_values != nullptr)
    {
        _children["sla-time-values"] = sla_time_values;
    }

    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::Rtt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt-count")
    {
        rtt_count = value;
        rtt_count.value_namespace = name_space;
        rtt_count.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::Rtt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt-count")
    {
        rtt_count.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::Rtt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-time-values" || name == "rtt-count")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::SlaTimeValues()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"},
    accuracy{YType::enumeration, "accuracy"}
{

    yang_name = "sla-time-values"; yang_parent_name = "rtt"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::~SlaTimeValues()
{
}

bool IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set
	|| accuracy.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(accuracy.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-time-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::Rtt::SlaTimeValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max" || name == "accuracy")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::OnewayLatency::OnewayLatency()
    :
    sample_count{YType::uint32, "sample-count"}
        ,
    sd(std::make_shared<IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd>())
    , ds(std::make_shared<IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds>())
{
    sd->parent = this;
    ds->parent = this;

    yang_name = "oneway-latency"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::OnewayLatency::~OnewayLatency()
{
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::has_data() const
{
    if (is_presence_container) return true;
    return sample_count.is_set
	|| (sd !=  nullptr && sd->has_data())
	|| (ds !=  nullptr && ds->has_data());
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| (sd !=  nullptr && sd->has_operation())
	|| (ds !=  nullptr && ds->has_operation());
}

std::string IpSlaStats::SlaOperEntry::Stats::OnewayLatency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oneway-latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::OnewayLatency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::OnewayLatency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sd")
    {
        if(sd == nullptr)
        {
            sd = std::make_shared<IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd>();
        }
        return sd;
    }

    if(child_yang_name == "ds")
    {
        if(ds == nullptr)
        {
            ds = std::make_shared<IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds>();
        }
        return ds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::OnewayLatency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sd != nullptr)
    {
        _children["sd"] = sd;
    }

    if(ds != nullptr)
    {
        _children["ds"] = ds;
    }

    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::OnewayLatency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::OnewayLatency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sd" || name == "ds" || name == "sample-count")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::Sd()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"},
    accuracy{YType::enumeration, "accuracy"}
{

    yang_name = "sd"; yang_parent_name = "oneway-latency"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::~Sd()
{
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set
	|| accuracy.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(accuracy.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Sd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max" || name == "accuracy")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::Ds()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"},
    accuracy{YType::enumeration, "accuracy"}
{

    yang_name = "ds"; yang_parent_name = "oneway-latency"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::~Ds()
{
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set
	|| accuracy.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(accuracy.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::OnewayLatency::Ds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max" || name == "accuracy")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::Jitter::Jitter()
    :
    sd_sample_count{YType::uint32, "sd-sample-count"},
    ds_sample_count{YType::uint32, "ds-sample-count"}
        ,
    sd(std::make_shared<IpSlaStats::SlaOperEntry::Stats::Jitter::Sd>())
    , ds(std::make_shared<IpSlaStats::SlaOperEntry::Stats::Jitter::Ds>())
{
    sd->parent = this;
    ds->parent = this;

    yang_name = "jitter"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::Jitter::~Jitter()
{
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::has_data() const
{
    if (is_presence_container) return true;
    return sd_sample_count.is_set
	|| ds_sample_count.is_set
	|| (sd !=  nullptr && sd->has_data())
	|| (ds !=  nullptr && ds->has_data());
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sd_sample_count.yfilter)
	|| ydk::is_set(ds_sample_count.yfilter)
	|| (sd !=  nullptr && sd->has_operation())
	|| (ds !=  nullptr && ds->has_operation());
}

std::string IpSlaStats::SlaOperEntry::Stats::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sd_sample_count.is_set || is_set(sd_sample_count.yfilter)) leaf_name_data.push_back(sd_sample_count.get_name_leafdata());
    if (ds_sample_count.is_set || is_set(ds_sample_count.yfilter)) leaf_name_data.push_back(ds_sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sd")
    {
        if(sd == nullptr)
        {
            sd = std::make_shared<IpSlaStats::SlaOperEntry::Stats::Jitter::Sd>();
        }
        return sd;
    }

    if(child_yang_name == "ds")
    {
        if(ds == nullptr)
        {
            ds = std::make_shared<IpSlaStats::SlaOperEntry::Stats::Jitter::Ds>();
        }
        return ds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sd != nullptr)
    {
        _children["sd"] = sd;
    }

    if(ds != nullptr)
    {
        _children["ds"] = ds;
    }

    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sd-sample-count")
    {
        sd_sample_count = value;
        sd_sample_count.value_namespace = name_space;
        sd_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds-sample-count")
    {
        ds_sample_count = value;
        ds_sample_count.value_namespace = name_space;
        ds_sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sd-sample-count")
    {
        sd_sample_count.yfilter = yfilter;
    }
    if(value_path == "ds-sample-count")
    {
        ds_sample_count.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sd" || name == "ds" || name == "sd-sample-count" || name == "ds-sample-count")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::Sd()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"},
    accuracy{YType::enumeration, "accuracy"}
{

    yang_name = "sd"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::~Sd()
{
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set
	|| accuracy.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(accuracy.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::Sd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max" || name == "accuracy")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::Ds()
    :
    min{YType::uint32, "min"},
    avg{YType::uint32, "avg"},
    max{YType::uint32, "max"},
    accuracy{YType::enumeration, "accuracy"}
{

    yang_name = "ds"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::~Ds()
{
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| avg.is_set
	|| max.is_set
	|| accuracy.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(accuracy.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::Jitter::Ds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "avg" || name == "max" || name == "accuracy")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::OverThreshold::OverThreshold()
    :
    rtt_count{YType::uint32, "rtt-count"},
    percent{YType::uint8, "percent"}
{

    yang_name = "over-threshold"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::OverThreshold::~OverThreshold()
{
}

bool IpSlaStats::SlaOperEntry::Stats::OverThreshold::has_data() const
{
    if (is_presence_container) return true;
    return rtt_count.is_set
	|| percent.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::OverThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt_count.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::OverThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "over-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::OverThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt_count.is_set || is_set(rtt_count.yfilter)) leaf_name_data.push_back(rtt_count.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::OverThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::OverThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::OverThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt-count")
    {
        rtt_count = value;
        rtt_count.value_namespace = name_space;
        rtt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::OverThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt-count")
    {
        rtt_count.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::OverThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt-count" || name == "percent")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::PacketLoss::PacketLoss()
    :
    unprocessed_packets{YType::uint32, "unprocessed-packets"},
    sd_count{YType::uint32, "sd-count"},
    ds_count{YType::uint32, "ds-count"},
    out_of_sequence{YType::uint32, "out-of-sequence"},
    drops{YType::uint32, "drops"},
    late_arrivals{YType::uint32, "late-arrivals"},
    skipped_packets{YType::uint32, "skipped-packets"}
        ,
    sd_loss(std::make_shared<IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss>())
    , ds_loss(std::make_shared<IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss>())
{
    sd_loss->parent = this;
    ds_loss->parent = this;

    yang_name = "packet-loss"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::PacketLoss::~PacketLoss()
{
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::has_data() const
{
    if (is_presence_container) return true;
    return unprocessed_packets.is_set
	|| sd_count.is_set
	|| ds_count.is_set
	|| out_of_sequence.is_set
	|| drops.is_set
	|| late_arrivals.is_set
	|| skipped_packets.is_set
	|| (sd_loss !=  nullptr && sd_loss->has_data())
	|| (ds_loss !=  nullptr && ds_loss->has_data());
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unprocessed_packets.yfilter)
	|| ydk::is_set(sd_count.yfilter)
	|| ydk::is_set(ds_count.yfilter)
	|| ydk::is_set(out_of_sequence.yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(late_arrivals.yfilter)
	|| ydk::is_set(skipped_packets.yfilter)
	|| (sd_loss !=  nullptr && sd_loss->has_operation())
	|| (ds_loss !=  nullptr && ds_loss->has_operation());
}

std::string IpSlaStats::SlaOperEntry::Stats::PacketLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::PacketLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unprocessed_packets.is_set || is_set(unprocessed_packets.yfilter)) leaf_name_data.push_back(unprocessed_packets.get_name_leafdata());
    if (sd_count.is_set || is_set(sd_count.yfilter)) leaf_name_data.push_back(sd_count.get_name_leafdata());
    if (ds_count.is_set || is_set(ds_count.yfilter)) leaf_name_data.push_back(ds_count.get_name_leafdata());
    if (out_of_sequence.is_set || is_set(out_of_sequence.yfilter)) leaf_name_data.push_back(out_of_sequence.get_name_leafdata());
    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (late_arrivals.is_set || is_set(late_arrivals.yfilter)) leaf_name_data.push_back(late_arrivals.get_name_leafdata());
    if (skipped_packets.is_set || is_set(skipped_packets.yfilter)) leaf_name_data.push_back(skipped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::PacketLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sd-loss")
    {
        if(sd_loss == nullptr)
        {
            sd_loss = std::make_shared<IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss>();
        }
        return sd_loss;
    }

    if(child_yang_name == "ds-loss")
    {
        if(ds_loss == nullptr)
        {
            ds_loss = std::make_shared<IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss>();
        }
        return ds_loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::PacketLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sd_loss != nullptr)
    {
        _children["sd-loss"] = sd_loss;
    }

    if(ds_loss != nullptr)
    {
        _children["ds-loss"] = ds_loss;
    }

    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::PacketLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unprocessed-packets")
    {
        unprocessed_packets = value;
        unprocessed_packets.value_namespace = name_space;
        unprocessed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-count")
    {
        sd_count = value;
        sd_count.value_namespace = name_space;
        sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds-count")
    {
        ds_count = value;
        ds_count.value_namespace = name_space;
        ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence")
    {
        out_of_sequence = value;
        out_of_sequence.value_namespace = name_space;
        out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "late-arrivals")
    {
        late_arrivals = value;
        late_arrivals.value_namespace = name_space;
        late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped-packets")
    {
        skipped_packets = value;
        skipped_packets.value_namespace = name_space;
        skipped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::PacketLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unprocessed-packets")
    {
        unprocessed_packets.yfilter = yfilter;
    }
    if(value_path == "sd-count")
    {
        sd_count.yfilter = yfilter;
    }
    if(value_path == "ds-count")
    {
        ds_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence")
    {
        out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "late-arrivals")
    {
        late_arrivals.yfilter = yfilter;
    }
    if(value_path == "skipped-packets")
    {
        skipped_packets.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sd-loss" || name == "ds-loss" || name == "unprocessed-packets" || name == "sd-count" || name == "ds-count" || name == "out-of-sequence" || name == "drops" || name == "late-arrivals" || name == "skipped-packets")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::SdLoss()
    :
    loss_period_count{YType::uint32, "loss-period-count"},
    loss_period_len_min{YType::uint32, "loss-period-len-min"},
    loss_period_len_max{YType::uint32, "loss-period-len-max"},
    inter_loss_period_len_min{YType::uint32, "inter-loss-period-len-min"},
    inter_loss_period_len_max{YType::uint32, "inter-loss-period-len-max"}
{

    yang_name = "sd-loss"; yang_parent_name = "packet-loss"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::~SdLoss()
{
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::has_data() const
{
    if (is_presence_container) return true;
    return loss_period_count.is_set
	|| loss_period_len_min.is_set
	|| loss_period_len_max.is_set
	|| inter_loss_period_len_min.is_set
	|| inter_loss_period_len_max.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loss_period_count.yfilter)
	|| ydk::is_set(loss_period_len_min.yfilter)
	|| ydk::is_set(loss_period_len_max.yfilter)
	|| ydk::is_set(inter_loss_period_len_min.yfilter)
	|| ydk::is_set(inter_loss_period_len_max.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_period_count.is_set || is_set(loss_period_count.yfilter)) leaf_name_data.push_back(loss_period_count.get_name_leafdata());
    if (loss_period_len_min.is_set || is_set(loss_period_len_min.yfilter)) leaf_name_data.push_back(loss_period_len_min.get_name_leafdata());
    if (loss_period_len_max.is_set || is_set(loss_period_len_max.yfilter)) leaf_name_data.push_back(loss_period_len_max.get_name_leafdata());
    if (inter_loss_period_len_min.is_set || is_set(inter_loss_period_len_min.yfilter)) leaf_name_data.push_back(inter_loss_period_len_min.get_name_leafdata());
    if (inter_loss_period_len_max.is_set || is_set(inter_loss_period_len_max.yfilter)) leaf_name_data.push_back(inter_loss_period_len_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loss-period-count")
    {
        loss_period_count = value;
        loss_period_count.value_namespace = name_space;
        loss_period_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-period-len-min")
    {
        loss_period_len_min = value;
        loss_period_len_min.value_namespace = name_space;
        loss_period_len_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-period-len-max")
    {
        loss_period_len_max = value;
        loss_period_len_max.value_namespace = name_space;
        loss_period_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-loss-period-len-min")
    {
        inter_loss_period_len_min = value;
        inter_loss_period_len_min.value_namespace = name_space;
        inter_loss_period_len_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-loss-period-len-max")
    {
        inter_loss_period_len_max = value;
        inter_loss_period_len_max.value_namespace = name_space;
        inter_loss_period_len_max.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loss-period-count")
    {
        loss_period_count.yfilter = yfilter;
    }
    if(value_path == "loss-period-len-min")
    {
        loss_period_len_min.yfilter = yfilter;
    }
    if(value_path == "loss-period-len-max")
    {
        loss_period_len_max.yfilter = yfilter;
    }
    if(value_path == "inter-loss-period-len-min")
    {
        inter_loss_period_len_min.yfilter = yfilter;
    }
    if(value_path == "inter-loss-period-len-max")
    {
        inter_loss_period_len_max.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::SdLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-period-count" || name == "loss-period-len-min" || name == "loss-period-len-max" || name == "inter-loss-period-len-min" || name == "inter-loss-period-len-max")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::DsLoss()
    :
    loss_period_count{YType::uint32, "loss-period-count"},
    loss_period_len_min{YType::uint32, "loss-period-len-min"},
    loss_period_len_max{YType::uint32, "loss-period-len-max"},
    inter_loss_period_len_min{YType::uint32, "inter-loss-period-len-min"},
    inter_loss_period_len_max{YType::uint32, "inter-loss-period-len-max"}
{

    yang_name = "ds-loss"; yang_parent_name = "packet-loss"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::~DsLoss()
{
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::has_data() const
{
    if (is_presence_container) return true;
    return loss_period_count.is_set
	|| loss_period_len_min.is_set
	|| loss_period_len_max.is_set
	|| inter_loss_period_len_min.is_set
	|| inter_loss_period_len_max.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loss_period_count.yfilter)
	|| ydk::is_set(loss_period_len_min.yfilter)
	|| ydk::is_set(loss_period_len_max.yfilter)
	|| ydk::is_set(inter_loss_period_len_min.yfilter)
	|| ydk::is_set(inter_loss_period_len_max.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_period_count.is_set || is_set(loss_period_count.yfilter)) leaf_name_data.push_back(loss_period_count.get_name_leafdata());
    if (loss_period_len_min.is_set || is_set(loss_period_len_min.yfilter)) leaf_name_data.push_back(loss_period_len_min.get_name_leafdata());
    if (loss_period_len_max.is_set || is_set(loss_period_len_max.yfilter)) leaf_name_data.push_back(loss_period_len_max.get_name_leafdata());
    if (inter_loss_period_len_min.is_set || is_set(inter_loss_period_len_min.yfilter)) leaf_name_data.push_back(inter_loss_period_len_min.get_name_leafdata());
    if (inter_loss_period_len_max.is_set || is_set(inter_loss_period_len_max.yfilter)) leaf_name_data.push_back(inter_loss_period_len_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loss-period-count")
    {
        loss_period_count = value;
        loss_period_count.value_namespace = name_space;
        loss_period_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-period-len-min")
    {
        loss_period_len_min = value;
        loss_period_len_min.value_namespace = name_space;
        loss_period_len_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-period-len-max")
    {
        loss_period_len_max = value;
        loss_period_len_max.value_namespace = name_space;
        loss_period_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-loss-period-len-min")
    {
        inter_loss_period_len_min = value;
        inter_loss_period_len_min.value_namespace = name_space;
        inter_loss_period_len_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-loss-period-len-max")
    {
        inter_loss_period_len_max = value;
        inter_loss_period_len_max.value_namespace = name_space;
        inter_loss_period_len_max.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loss-period-count")
    {
        loss_period_count.yfilter = yfilter;
    }
    if(value_path == "loss-period-len-min")
    {
        loss_period_len_min.yfilter = yfilter;
    }
    if(value_path == "loss-period-len-max")
    {
        loss_period_len_max.yfilter = yfilter;
    }
    if(value_path == "inter-loss-period-len-min")
    {
        inter_loss_period_len_min.yfilter = yfilter;
    }
    if(value_path == "inter-loss-period-len-max")
    {
        inter_loss_period_len_max.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::PacketLoss::DsLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-period-count" || name == "loss-period-len-min" || name == "loss-period-len-max" || name == "inter-loss-period-len-min" || name == "inter-loss-period-len-max")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::IcmpPacketLoss()
    :
    late_arrivals{YType::uint32, "late-arrivals"},
    out_of_sequence{YType::uint32, "out-of-sequence"},
    out_of_sequence_sd{YType::uint32, "out-of-sequence-sd"},
    out_of_sequence_ds{YType::uint32, "out-of-sequence-ds"},
    out_of_sequence_both{YType::uint32, "out-of-sequence-both"},
    skipped_packets{YType::uint32, "skipped-packets"},
    unprocessed_packets{YType::uint32, "unprocessed-packets"},
    packet_loss{YType::uint32, "packet-loss"},
    loss_period_count{YType::uint32, "loss-period-count"},
    loss_period_len_min{YType::uint32, "loss-period-len-min"},
    loss_period_len_max{YType::uint32, "loss-period-len-max"},
    inter_loss_period_len_min{YType::uint32, "inter-loss-period-len-min"},
    inter_loss_period_len_max{YType::uint32, "inter-loss-period-len-max"}
{

    yang_name = "icmp-packet-loss"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::~IcmpPacketLoss()
{
}

bool IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::has_data() const
{
    if (is_presence_container) return true;
    return late_arrivals.is_set
	|| out_of_sequence.is_set
	|| out_of_sequence_sd.is_set
	|| out_of_sequence_ds.is_set
	|| out_of_sequence_both.is_set
	|| skipped_packets.is_set
	|| unprocessed_packets.is_set
	|| packet_loss.is_set
	|| loss_period_count.is_set
	|| loss_period_len_min.is_set
	|| loss_period_len_max.is_set
	|| inter_loss_period_len_min.is_set
	|| inter_loss_period_len_max.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(late_arrivals.yfilter)
	|| ydk::is_set(out_of_sequence.yfilter)
	|| ydk::is_set(out_of_sequence_sd.yfilter)
	|| ydk::is_set(out_of_sequence_ds.yfilter)
	|| ydk::is_set(out_of_sequence_both.yfilter)
	|| ydk::is_set(skipped_packets.yfilter)
	|| ydk::is_set(unprocessed_packets.yfilter)
	|| ydk::is_set(packet_loss.yfilter)
	|| ydk::is_set(loss_period_count.yfilter)
	|| ydk::is_set(loss_period_len_min.yfilter)
	|| ydk::is_set(loss_period_len_max.yfilter)
	|| ydk::is_set(inter_loss_period_len_min.yfilter)
	|| ydk::is_set(inter_loss_period_len_max.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-packet-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (late_arrivals.is_set || is_set(late_arrivals.yfilter)) leaf_name_data.push_back(late_arrivals.get_name_leafdata());
    if (out_of_sequence.is_set || is_set(out_of_sequence.yfilter)) leaf_name_data.push_back(out_of_sequence.get_name_leafdata());
    if (out_of_sequence_sd.is_set || is_set(out_of_sequence_sd.yfilter)) leaf_name_data.push_back(out_of_sequence_sd.get_name_leafdata());
    if (out_of_sequence_ds.is_set || is_set(out_of_sequence_ds.yfilter)) leaf_name_data.push_back(out_of_sequence_ds.get_name_leafdata());
    if (out_of_sequence_both.is_set || is_set(out_of_sequence_both.yfilter)) leaf_name_data.push_back(out_of_sequence_both.get_name_leafdata());
    if (skipped_packets.is_set || is_set(skipped_packets.yfilter)) leaf_name_data.push_back(skipped_packets.get_name_leafdata());
    if (unprocessed_packets.is_set || is_set(unprocessed_packets.yfilter)) leaf_name_data.push_back(unprocessed_packets.get_name_leafdata());
    if (packet_loss.is_set || is_set(packet_loss.yfilter)) leaf_name_data.push_back(packet_loss.get_name_leafdata());
    if (loss_period_count.is_set || is_set(loss_period_count.yfilter)) leaf_name_data.push_back(loss_period_count.get_name_leafdata());
    if (loss_period_len_min.is_set || is_set(loss_period_len_min.yfilter)) leaf_name_data.push_back(loss_period_len_min.get_name_leafdata());
    if (loss_period_len_max.is_set || is_set(loss_period_len_max.yfilter)) leaf_name_data.push_back(loss_period_len_max.get_name_leafdata());
    if (inter_loss_period_len_min.is_set || is_set(inter_loss_period_len_min.yfilter)) leaf_name_data.push_back(inter_loss_period_len_min.get_name_leafdata());
    if (inter_loss_period_len_max.is_set || is_set(inter_loss_period_len_max.yfilter)) leaf_name_data.push_back(inter_loss_period_len_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "late-arrivals")
    {
        late_arrivals = value;
        late_arrivals.value_namespace = name_space;
        late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence")
    {
        out_of_sequence = value;
        out_of_sequence.value_namespace = name_space;
        out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-sd")
    {
        out_of_sequence_sd = value;
        out_of_sequence_sd.value_namespace = name_space;
        out_of_sequence_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-ds")
    {
        out_of_sequence_ds = value;
        out_of_sequence_ds.value_namespace = name_space;
        out_of_sequence_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-both")
    {
        out_of_sequence_both = value;
        out_of_sequence_both.value_namespace = name_space;
        out_of_sequence_both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped-packets")
    {
        skipped_packets = value;
        skipped_packets.value_namespace = name_space;
        skipped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unprocessed-packets")
    {
        unprocessed_packets = value;
        unprocessed_packets.value_namespace = name_space;
        unprocessed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss")
    {
        packet_loss = value;
        packet_loss.value_namespace = name_space;
        packet_loss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-period-count")
    {
        loss_period_count = value;
        loss_period_count.value_namespace = name_space;
        loss_period_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-period-len-min")
    {
        loss_period_len_min = value;
        loss_period_len_min.value_namespace = name_space;
        loss_period_len_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-period-len-max")
    {
        loss_period_len_max = value;
        loss_period_len_max.value_namespace = name_space;
        loss_period_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-loss-period-len-min")
    {
        inter_loss_period_len_min = value;
        inter_loss_period_len_min.value_namespace = name_space;
        inter_loss_period_len_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-loss-period-len-max")
    {
        inter_loss_period_len_max = value;
        inter_loss_period_len_max.value_namespace = name_space;
        inter_loss_period_len_max.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "late-arrivals")
    {
        late_arrivals.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence")
    {
        out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-sd")
    {
        out_of_sequence_sd.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-ds")
    {
        out_of_sequence_ds.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-both")
    {
        out_of_sequence_both.yfilter = yfilter;
    }
    if(value_path == "skipped-packets")
    {
        skipped_packets.yfilter = yfilter;
    }
    if(value_path == "unprocessed-packets")
    {
        unprocessed_packets.yfilter = yfilter;
    }
    if(value_path == "packet-loss")
    {
        packet_loss.yfilter = yfilter;
    }
    if(value_path == "loss-period-count")
    {
        loss_period_count.yfilter = yfilter;
    }
    if(value_path == "loss-period-len-min")
    {
        loss_period_len_min.yfilter = yfilter;
    }
    if(value_path == "loss-period-len-max")
    {
        loss_period_len_max.yfilter = yfilter;
    }
    if(value_path == "inter-loss-period-len-min")
    {
        inter_loss_period_len_min.yfilter = yfilter;
    }
    if(value_path == "inter-loss-period-len-max")
    {
        inter_loss_period_len_max.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::IcmpPacketLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "late-arrivals" || name == "out-of-sequence" || name == "out-of-sequence-sd" || name == "out-of-sequence-ds" || name == "out-of-sequence-both" || name == "skipped-packets" || name == "unprocessed-packets" || name == "packet-loss" || name == "loss-period-count" || name == "loss-period-len-min" || name == "loss-period-len-max" || name == "inter-loss-period-len-min" || name == "inter-loss-period-len-max")
        return true;
    return false;
}

IpSlaStats::SlaOperEntry::Stats::VoiceScore::VoiceScore()
    :
    icpif{YType::uint32, "icpif"},
    mos{YType::uint32, "mos"}
{

    yang_name = "voice-score"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

IpSlaStats::SlaOperEntry::Stats::VoiceScore::~VoiceScore()
{
}

bool IpSlaStats::SlaOperEntry::Stats::VoiceScore::has_data() const
{
    if (is_presence_container) return true;
    return icpif.is_set
	|| mos.is_set;
}

bool IpSlaStats::SlaOperEntry::Stats::VoiceScore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icpif.yfilter)
	|| ydk::is_set(mos.yfilter);
}

std::string IpSlaStats::SlaOperEntry::Stats::VoiceScore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice-score";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSlaStats::SlaOperEntry::Stats::VoiceScore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icpif.is_set || is_set(icpif.yfilter)) leaf_name_data.push_back(icpif.get_name_leafdata());
    if (mos.is_set || is_set(mos.yfilter)) leaf_name_data.push_back(mos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpSlaStats::SlaOperEntry::Stats::VoiceScore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpSlaStats::SlaOperEntry::Stats::VoiceScore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpSlaStats::SlaOperEntry::Stats::VoiceScore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icpif")
    {
        icpif = value;
        icpif.value_namespace = name_space;
        icpif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mos")
    {
        mos = value;
        mos.value_namespace = name_space;
        mos.value_namespace_prefix = name_space_prefix;
    }
}

void IpSlaStats::SlaOperEntry::Stats::VoiceScore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icpif")
    {
        icpif.yfilter = yfilter;
    }
    if(value_path == "mos")
    {
        mos.yfilter = yfilter;
    }
}

bool IpSlaStats::SlaOperEntry::Stats::VoiceScore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icpif" || name == "mos")
        return true;
    return false;
}

const Enum::YLeaf SlaOperType::oper_type_unknown {0, "oper-type-unknown"};
const Enum::YLeaf SlaOperType::oper_type_udp_echo {1, "oper-type-udp-echo"};
const Enum::YLeaf SlaOperType::oper_type_udp_jitter {2, "oper-type-udp-jitter"};
const Enum::YLeaf SlaOperType::oper_type_icmp_jitter {3, "oper-type-icmp-jitter"};
const Enum::YLeaf SlaOperType::oper_type_ethernet_jitter {4, "oper-type-ethernet-jitter"};
const Enum::YLeaf SlaOperType::oper_type_ethernet_echo {5, "oper-type-ethernet-echo"};
const Enum::YLeaf SlaOperType::oper_type_y1731_delay {6, "oper-type-y1731-delay"};
const Enum::YLeaf SlaOperType::oper_type_y1731_loss {7, "oper-type-y1731-loss"};
const Enum::YLeaf SlaOperType::oper_type_video {8, "oper-type-video"};
const Enum::YLeaf SlaOperType::oper_type_mcast {9, "oper-type-mcast"};
const Enum::YLeaf SlaOperType::oper_type_pong {10, "oper-type-pong"};
const Enum::YLeaf SlaOperType::oper_type_path_jitter {11, "oper-type-path-jitter"};
const Enum::YLeaf SlaOperType::oper_type_icmp_echo {12, "oper-type-icmp-echo"};

const Enum::YLeaf SlaReturnCode::ret_code_unknown {0, "ret-code-unknown"};
const Enum::YLeaf SlaReturnCode::ret_code_ok {1, "ret-code-ok"};
const Enum::YLeaf SlaReturnCode::ret_code_disconnected {2, "ret-code-disconnected"};
const Enum::YLeaf SlaReturnCode::ret_code_busy {3, "ret-code-busy"};
const Enum::YLeaf SlaReturnCode::ret_code_timeout {4, "ret-code-timeout"};
const Enum::YLeaf SlaReturnCode::ret_code_no_connection {5, "ret-code-no-connection"};
const Enum::YLeaf SlaReturnCode::ret_code_internal_error {6, "ret-code-internal-error"};
const Enum::YLeaf SlaReturnCode::ret_code_operation_failure {7, "ret-code-operation-failure"};
const Enum::YLeaf SlaReturnCode::ret_code_could_not_find {8, "ret-code-could-not-find"};

const Enum::YLeaf AccuracyType::accuracy_milliseconds {0, "accuracy-milliseconds"};
const Enum::YLeaf AccuracyType::accuracy_microseconds {1, "accuracy-microseconds"};

const Enum::YLeaf RttType::rtt_known {0, "rtt-known"};
const Enum::YLeaf RttType::rtt_unknown {1, "rtt-unknown"};
const Enum::YLeaf RttType::rtt_could_not_find {2, "rtt-could-not-find"};

const Enum::YLeaf TtlType::ttl_finite {0, "ttl-finite"};
const Enum::YLeaf TtlType::ttl_forever {1, "ttl-forever"};


}
}

