
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_5.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_3.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Platform::Qos::Qos()
    :
    cac_policer{YType::uint16, "cac-policer"},
    marker_statistics{YType::empty, "marker-statistics"},
    performance_monitor{YType::empty, "performance-monitor"},
    punt_path_matching{YType::empty, "punt-path-matching"}
    	,
    match_statistics(std::make_shared<Native::Platform::Qos::MatchStatistics>())
{
    match_statistics->parent = this;

    yang_name = "qos"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Qos::~Qos()
{
}

bool Native::Platform::Qos::has_data() const
{
    return cac_policer.is_set
	|| marker_statistics.is_set
	|| performance_monitor.is_set
	|| punt_path_matching.is_set
	|| (match_statistics !=  nullptr && match_statistics->has_data());
}

bool Native::Platform::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cac_policer.yfilter)
	|| ydk::is_set(marker_statistics.yfilter)
	|| ydk::is_set(performance_monitor.yfilter)
	|| ydk::is_set(punt_path_matching.yfilter)
	|| (match_statistics !=  nullptr && match_statistics->has_operation());
}

std::string Native::Platform::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_policer.is_set || is_set(cac_policer.yfilter)) leaf_name_data.push_back(cac_policer.get_name_leafdata());
    if (marker_statistics.is_set || is_set(marker_statistics.yfilter)) leaf_name_data.push_back(marker_statistics.get_name_leafdata());
    if (performance_monitor.is_set || is_set(performance_monitor.yfilter)) leaf_name_data.push_back(performance_monitor.get_name_leafdata());
    if (punt_path_matching.is_set || is_set(punt_path_matching.yfilter)) leaf_name_data.push_back(punt_path_matching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-statistics")
    {
        if(match_statistics == nullptr)
        {
            match_statistics = std::make_shared<Native::Platform::Qos::MatchStatistics>();
        }
        return match_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_statistics != nullptr)
    {
        children["match-statistics"] = match_statistics;
    }

    return children;
}

void Native::Platform::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cac-policer")
    {
        cac_policer = value;
        cac_policer.value_namespace = name_space;
        cac_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-statistics")
    {
        marker_statistics = value;
        marker_statistics.value_namespace = name_space;
        marker_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitor")
    {
        performance_monitor = value;
        performance_monitor.value_namespace = name_space;
        performance_monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punt-path-matching")
    {
        punt_path_matching = value;
        punt_path_matching.value_namespace = name_space;
        punt_path_matching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cac-policer")
    {
        cac_policer.yfilter = yfilter;
    }
    if(value_path == "marker-statistics")
    {
        marker_statistics.yfilter = yfilter;
    }
    if(value_path == "performance-monitor")
    {
        performance_monitor.yfilter = yfilter;
    }
    if(value_path == "punt-path-matching")
    {
        punt_path_matching.yfilter = yfilter;
    }
}

bool Native::Platform::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-statistics" || name == "cac-policer" || name == "marker-statistics" || name == "performance-monitor" || name == "punt-path-matching")
        return true;
    return false;
}

Native::Platform::Qos::MatchStatistics::MatchStatistics()
    :
    per_filter{YType::empty, "per-filter"},
    per_ace{YType::empty, "per-ace"}
{

    yang_name = "match-statistics"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Qos::MatchStatistics::~MatchStatistics()
{
}

bool Native::Platform::Qos::MatchStatistics::has_data() const
{
    return per_filter.is_set
	|| per_ace.is_set;
}

bool Native::Platform::Qos::MatchStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_filter.yfilter)
	|| ydk::is_set(per_ace.yfilter);
}

std::string Native::Platform::Qos::MatchStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Qos::MatchStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Qos::MatchStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_filter.is_set || is_set(per_filter.yfilter)) leaf_name_data.push_back(per_filter.get_name_leafdata());
    if (per_ace.is_set || is_set(per_ace.yfilter)) leaf_name_data.push_back(per_ace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Qos::MatchStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Qos::MatchStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Qos::MatchStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-filter")
    {
        per_filter = value;
        per_filter.value_namespace = name_space;
        per_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace")
    {
        per_ace = value;
        per_ace.value_namespace = name_space;
        per_ace.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Qos::MatchStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-filter")
    {
        per_filter.yfilter = yfilter;
    }
    if(value_path == "per-ace")
    {
        per_ace.yfilter = yfilter;
    }
}

bool Native::Platform::Qos::MatchStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-filter" || name == "per-ace")
        return true;
    return false;
}

Native::Platform::Reload::Reload()
    :
    immediate{YType::empty, "immediate"}
{

    yang_name = "reload"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Reload::~Reload()
{
}

bool Native::Platform::Reload::has_data() const
{
    return immediate.is_set;
}

bool Native::Platform::Reload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate.yfilter);
}

std::string Native::Platform::Reload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate.is_set || is_set(immediate.yfilter)) leaf_name_data.push_back(immediate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate")
    {
        immediate = value;
        immediate.value_namespace = name_space;
        immediate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate")
    {
        immediate.yfilter = yfilter;
    }
}

bool Native::Platform::Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "immediate")
        return true;
    return false;
}

Native::Platform::Urpf::Urpf()
    :
    loose(std::make_shared<Native::Platform::Urpf::Loose>())
{
    loose->parent = this;

    yang_name = "urpf"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::~Urpf()
{
}

bool Native::Platform::Urpf::has_data() const
{
    return (loose !=  nullptr && loose->has_data());
}

bool Native::Platform::Urpf::has_operation() const
{
    return is_set(yfilter)
	|| (loose !=  nullptr && loose->has_operation());
}

std::string Native::Platform::Urpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:urpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose")
    {
        if(loose == nullptr)
        {
            loose = std::make_shared<Native::Platform::Urpf::Loose>();
        }
        return loose;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loose != nullptr)
    {
        children["loose"] = loose;
    }

    return children;
}

void Native::Platform::Urpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Loose()
    :
    counter(std::make_shared<Native::Platform::Urpf::Loose::Counter>())
{
    counter->parent = this;

    yang_name = "loose"; yang_parent_name = "urpf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::~Loose()
{
}

bool Native::Platform::Urpf::Loose::has_data() const
{
    return (counter !=  nullptr && counter->has_data());
}

bool Native::Platform::Urpf::Loose::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation());
}

std::string Native::Platform::Urpf::Loose::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Platform::Urpf::Loose::Counter>();
        }
        return counter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    return children;
}

void Native::Platform::Urpf::Loose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Counter()
    :
    ipv4(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4>())
	,ipv6(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "counter"; yang_parent_name = "loose"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::~Counter()
{
}

bool Native::Platform::Urpf::Loose::Counter::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Ipv4()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4::Supress>())
{
    supress->parent = this;

    yang_name = "ipv4"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::~Ipv4()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_data() const
{
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supress")
    {
        if(supress == nullptr)
        {
            supress = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4::Supress>();
        }
        return supress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supress != nullptr)
    {
        children["supress"] = supress;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supress")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{

    yang_name = "supress"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_data() const
{
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asymmetric_only.yfilter);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.yfilter)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
        asymmetric_only.value_namespace = name_space;
        asymmetric_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only.yfilter = yfilter;
    }
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asymmetric_only")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Ipv6()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6::Supress>())
{
    supress->parent = this;

    yang_name = "ipv6"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::~Ipv6()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_data() const
{
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supress")
    {
        if(supress == nullptr)
        {
            supress = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6::Supress>();
        }
        return supress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supress != nullptr)
    {
        children["supress"] = supress;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supress")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{

    yang_name = "supress"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_data() const
{
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asymmetric_only.yfilter);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.yfilter)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
        asymmetric_only.value_namespace = name_space;
        asymmetric_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only.yfilter = yfilter;
    }
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asymmetric_only")
        return true;
    return false;
}

Native::Platform::TcamThreshold::TcamThreshold()
    :
    alarm_frequency{YType::uint32, "alarm-frequency"}
{

    yang_name = "tcam-threshold"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::TcamThreshold::~TcamThreshold()
{
}

bool Native::Platform::TcamThreshold::has_data() const
{
    return alarm_frequency.is_set;
}

bool Native::Platform::TcamThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_frequency.yfilter);
}

std::string Native::Platform::TcamThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::TcamThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:tcam-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::TcamThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_frequency.is_set || is_set(alarm_frequency.yfilter)) leaf_name_data.push_back(alarm_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::TcamThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::TcamThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::TcamThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-frequency")
    {
        alarm_frequency = value;
        alarm_frequency.value_namespace = name_space;
        alarm_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::TcamThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-frequency")
    {
        alarm_frequency.yfilter = yfilter;
    }
}

bool Native::Platform::TcamThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-frequency")
        return true;
    return false;
}

Native::Platform::Trace::Trace()
{

    yang_name = "trace"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Trace::~Trace()
{
}

bool Native::Platform::Trace::has_data() const
{
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Trace::has_operation() const
{
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        for(auto const & c : runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::Trace::Runtime>();
        c->parent = this;
        runtime.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : runtime)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime")
        return true;
    return false;
}

Native::Platform::Trace::Runtime::Runtime()
    :
    slot{YType::uint8, "slot"},
    bay{YType::uint8, "bay"},
    process{YType::enumeration, "process"},
    module{YType::enumeration, "module"},
    level{YType::enumeration, "level"}
{

    yang_name = "runtime"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Trace::Runtime::~Runtime()
{
}

bool Native::Platform::Trace::Runtime::has_data() const
{
    return slot.is_set
	|| bay.is_set
	|| process.is_set
	|| module.is_set
	|| level.is_set;
}

bool Native::Platform::Trace::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(bay.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Platform::Trace::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Trace::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime" <<"[slot='" <<slot <<"']" <<"[bay='" <<bay <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Trace::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (bay.is_set || is_set(bay.yfilter)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Trace::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Trace::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Trace::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bay")
    {
        bay = value;
        bay.value_namespace = name_space;
        bay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Trace::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "bay")
    {
        bay.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Platform::Trace::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot" || name == "bay" || name == "process" || name == "module" || name == "level")
        return true;
    return false;
}

Native::Enable::Enable()
    :
    last_resort{YType::enumeration, "last-resort"},
    use_tacacs{YType::empty, "use-tacacs"}
    	,
    password(std::make_shared<Native::Enable::Password>())
	,secret(std::make_shared<Native::Enable::Secret>())
{
    password->parent = this;
    secret->parent = this;

    yang_name = "enable"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Enable::~Enable()
{
}

bool Native::Enable::has_data() const
{
    return last_resort.is_set
	|| use_tacacs.is_set
	|| (password !=  nullptr && password->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_resort.yfilter)
	|| ydk::is_set(use_tacacs.yfilter)
	|| (password !=  nullptr && password->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_resort.is_set || is_set(last_resort.yfilter)) leaf_name_data.push_back(last_resort.get_name_leafdata());
    if (use_tacacs.is_set || is_set(use_tacacs.yfilter)) leaf_name_data.push_back(use_tacacs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Enable::Password>();
        }
        return password;
    }

    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Native::Enable::Secret>();
        }
        return secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(secret != nullptr)
    {
        children["secret"] = secret;
    }

    return children;
}

void Native::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-resort")
    {
        last_resort = value;
        last_resort.value_namespace = name_space;
        last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-tacacs")
    {
        use_tacacs = value;
        use_tacacs.value_namespace = name_space;
        use_tacacs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-resort")
    {
        last_resort.yfilter = yfilter;
    }
    if(value_path == "use-tacacs")
    {
        use_tacacs.yfilter = yfilter;
    }
}

bool Native::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "secret" || name == "last-resort" || name == "use-tacacs")
        return true;
    return false;
}

Native::Enable::Password::Password()
    :
    level{YType::uint8, "level"},
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Enable::Password::~Password()
{
}

bool Native::Enable::Password::has_data() const
{
    return level.is_set
	|| type.is_set
	|| secret.is_set;
}

bool Native::Enable::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Enable::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Enable::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Enable::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Enable::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Enable::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Enable::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Enable::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type" || name == "secret")
        return true;
    return false;
}

Native::Enable::Secret::Secret()
    :
    level{YType::uint8, "level"},
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "secret"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Enable::Secret::~Secret()
{
}

bool Native::Enable::Secret::has_data() const
{
    return level.is_set
	|| type.is_set
	|| secret.is_set;
}

bool Native::Enable::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Enable::Secret::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Enable::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Enable::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Enable::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Enable::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Enable::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Enable::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type" || name == "secret")
        return true;
    return false;
}

Native::Password::Password()
    :
    encryption(std::make_shared<Native::Password::Encryption>())
{
    encryption->parent = this;

    yang_name = "password"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Password::~Password()
{
}

bool Native::Password::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Password::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Password::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Password::Encryption::Encryption()
    :
    aes{YType::empty, "aes"}
{

    yang_name = "encryption"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Password::Encryption::~Encryption()
{
}

bool Native::Password::Encryption::has_data() const
{
    return aes.is_set;
}

bool Native::Password::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes.yfilter);
}

std::string Native::Password::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Password::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Password::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes.is_set || is_set(aes.yfilter)) leaf_name_data.push_back(aes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Password::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Password::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Password::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes")
    {
        aes = value;
        aes.value_namespace = name_space;
        aes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Password::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes")
    {
        aes.yfilter = yfilter;
    }
}

bool Native::Password::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes")
        return true;
    return false;
}

Native::Eap::Eap()
{

    yang_name = "eap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Eap::~Eap()
{
}

bool Native::Eap::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Eap::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Eap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Eap::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Eap::Profile::Profile()
    :
    name{YType::str, "name"},
    pki_trustpoint{YType::str, "pki-trustpoint"}
    	,
    method(std::make_shared<Native::Eap::Profile::Method>())
{
    method->parent = this;

    yang_name = "profile"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Eap::Profile::~Profile()
{
}

bool Native::Eap::Profile::has_data() const
{
    return name.is_set
	|| pki_trustpoint.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Eap::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pki_trustpoint.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Eap::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/eap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Eap::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Eap::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Eap::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Eap::Profile::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Eap::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Eap::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
        pki_trustpoint.value_namespace = name_space;
        pki_trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Eap::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint.yfilter = yfilter;
    }
}

bool Native::Eap::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "name" || name == "pki-trustpoint")
        return true;
    return false;
}

Native::Eap::Profile::Method::Method()
    :
    fast{YType::empty, "fast"},
    gtc{YType::empty, "gtc"},
    leap{YType::empty, "leap"},
    mschapv2{YType::empty, "mschapv2"},
    peap{YType::empty, "peap"},
    md5{YType::empty, "md5"},
    tls{YType::empty, "tls"}
{

    yang_name = "method"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Eap::Profile::Method::~Method()
{
}

bool Native::Eap::Profile::Method::has_data() const
{
    return fast.is_set
	|| gtc.is_set
	|| leap.is_set
	|| mschapv2.is_set
	|| peap.is_set
	|| md5.is_set
	|| tls.is_set;
}

bool Native::Eap::Profile::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast.yfilter)
	|| ydk::is_set(gtc.yfilter)
	|| ydk::is_set(leap.yfilter)
	|| ydk::is_set(mschapv2.yfilter)
	|| ydk::is_set(peap.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(tls.yfilter);
}

std::string Native::Eap::Profile::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Eap::Profile::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast.is_set || is_set(fast.yfilter)) leaf_name_data.push_back(fast.get_name_leafdata());
    if (gtc.is_set || is_set(gtc.yfilter)) leaf_name_data.push_back(gtc.get_name_leafdata());
    if (leap.is_set || is_set(leap.yfilter)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (mschapv2.is_set || is_set(mschapv2.yfilter)) leaf_name_data.push_back(mschapv2.get_name_leafdata());
    if (peap.is_set || is_set(peap.yfilter)) leaf_name_data.push_back(peap.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (tls.is_set || is_set(tls.yfilter)) leaf_name_data.push_back(tls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Eap::Profile::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Eap::Profile::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Eap::Profile::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast")
    {
        fast = value;
        fast.value_namespace = name_space;
        fast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gtc")
    {
        gtc = value;
        gtc.value_namespace = name_space;
        gtc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap")
    {
        leap = value;
        leap.value_namespace = name_space;
        leap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mschapv2")
    {
        mschapv2 = value;
        mschapv2.value_namespace = name_space;
        mschapv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peap")
    {
        peap = value;
        peap.value_namespace = name_space;
        peap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls")
    {
        tls = value;
        tls.value_namespace = name_space;
        tls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Eap::Profile::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast")
    {
        fast.yfilter = yfilter;
    }
    if(value_path == "gtc")
    {
        gtc.yfilter = yfilter;
    }
    if(value_path == "leap")
    {
        leap.yfilter = yfilter;
    }
    if(value_path == "mschapv2")
    {
        mschapv2.yfilter = yfilter;
    }
    if(value_path == "peap")
    {
        peap.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "tls")
    {
        tls.yfilter = yfilter;
    }
}

bool Native::Eap::Profile::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast" || name == "gtc" || name == "leap" || name == "mschapv2" || name == "peap" || name == "md5" || name == "tls")
        return true;
    return false;
}

Native::Archive::Archive()
    :
    path{YType::str, "path"},
    maximum{YType::uint8, "maximum"},
    write_memory{YType::empty, "write-memory"},
    time_period{YType::uint32, "time-period"}
    	,
    log(std::make_shared<Native::Archive::Log>())
{
    log->parent = this;

    yang_name = "archive"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Archive::~Archive()
{
}

bool Native::Archive::has_data() const
{
    return path.is_set
	|| maximum.is_set
	|| write_memory.is_set
	|| time_period.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Archive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(write_memory.yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Archive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (write_memory.is_set || is_set(write_memory.yfilter)) leaf_name_data.push_back(write_memory.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Archive::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Archive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-memory")
    {
        write_memory = value;
        write_memory.value_namespace = name_space;
        write_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "write-memory")
    {
        write_memory.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool Native::Archive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log" || name == "path" || name == "maximum" || name == "write-memory" || name == "time-period")
        return true;
    return false;
}

Native::Archive::Log::Log()
    :
    config(std::make_shared<Native::Archive::Log::Config>())
{
    config->parent = this;

    yang_name = "log"; yang_parent_name = "archive"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Archive::Log::~Log()
{
}

bool Native::Archive::Log::has_data() const
{
    return (config !=  nullptr && config->has_data());
}

bool Native::Archive::Log::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Archive::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Archive::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Archive::Log::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Native::Archive::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Archive::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Archive::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Archive::Log::Config::Config()
    :
    hidekeys{YType::empty, "hidekeys"}
    	,
    logging(std::make_shared<Native::Archive::Log::Config::Logging>())
	,notify(std::make_shared<Native::Archive::Log::Config::Notify>())
{
    logging->parent = this;
    notify->parent = this;

    yang_name = "config"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Archive::Log::Config::~Config()
{
}

bool Native::Archive::Log::Config::has_data() const
{
    return hidekeys.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::Archive::Log::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hidekeys.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::Archive::Log::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hidekeys.is_set || is_set(hidekeys.yfilter)) leaf_name_data.push_back(hidekeys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Archive::Log::Config::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "notify")
    {
        if(notify == nullptr)
        {
            notify = std::make_shared<Native::Archive::Log::Config::Notify>();
        }
        return notify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(notify != nullptr)
    {
        children["notify"] = notify;
    }

    return children;
}

void Native::Archive::Log::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hidekeys")
    {
        hidekeys = value;
        hidekeys.value_namespace = name_space;
        hidekeys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hidekeys")
    {
        hidekeys.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "notify" || name == "hidekeys")
        return true;
    return false;
}

Native::Archive::Log::Config::Logging::Logging()
    :
    enable{YType::empty, "enable"},
    size{YType::uint16, "size"}
    	,
    persistent(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Archive::Log::Config::Logging::~Logging()
{
}

bool Native::Archive::Log::Config::Logging::has_data() const
{
    return enable.is_set
	|| size.is_set
	|| (persistent !=  nullptr && persistent->has_data());
}

bool Native::Archive::Log::Config::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(size.yfilter)
	|| (persistent !=  nullptr && persistent->has_operation());
}

std::string Native::Archive::Log::Config::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::Archive::Log::Config::Logging::Persistent>();
        }
        return persistent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(persistent != nullptr)
    {
        children["persistent"] = persistent;
    }

    return children;
}

void Native::Archive::Log::Config::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persistent" || name == "enable" || name == "size")
        return true;
    return false;
}

Native::Archive::Log::Config::Logging::Persistent::Persistent()
    :
    auto_{YType::empty, "auto"},
    reload{YType::empty, "reload"}
{

    yang_name = "persistent"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Archive::Log::Config::Logging::Persistent::~Persistent()
{
}

bool Native::Archive::Log::Config::Logging::Persistent::has_data() const
{
    return auto_.is_set
	|| reload.is_set;
}

bool Native::Archive::Log::Config::Logging::Persistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Archive::Log::Config::Logging::Persistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Logging::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Logging::Persistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Logging::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Logging::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Archive::Log::Config::Logging::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::Logging::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::Logging::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "reload")
        return true;
    return false;
}

Native::Archive::Log::Config::Notify::Notify()
    :
    syslog(nullptr) // presence node
{

    yang_name = "notify"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Archive::Log::Config::Notify::~Notify()
{
}

bool Native::Archive::Log::Config::Notify::has_data() const
{
    return (syslog !=  nullptr && syslog->has_data());
}

bool Native::Archive::Log::Config::Notify::has_operation() const
{
    return is_set(yfilter)
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Archive::Log::Config::Notify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Notify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Archive::Log::Config::Notify::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::Archive::Log::Config::Notify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Archive::Log::Config::Notify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Archive::Log::Config::Notify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslog")
        return true;
    return false;
}

Native::Archive::Log::Config::Notify::Syslog::Syslog()
    :
    contenttype{YType::enumeration, "contenttype"}
{

    yang_name = "syslog"; yang_parent_name = "notify"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Archive::Log::Config::Notify::Syslog::~Syslog()
{
}

bool Native::Archive::Log::Config::Notify::Syslog::has_data() const
{
    return contenttype.is_set;
}

bool Native::Archive::Log::Config::Notify::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(contenttype.yfilter);
}

std::string Native::Archive::Log::Config::Notify::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/notify/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Notify::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Notify::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contenttype.is_set || is_set(contenttype.yfilter)) leaf_name_data.push_back(contenttype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Archive::Log::Config::Notify::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Archive::Log::Config::Notify::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Archive::Log::Config::Notify::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "contenttype")
    {
        contenttype = value;
        contenttype.value_namespace = name_space;
        contenttype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::Notify::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "contenttype")
    {
        contenttype.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::Notify::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contenttype")
        return true;
    return false;
}

Native::Username::Username()
    :
    name{YType::str, "name"},
    privilege{YType::uint8, "privilege"},
    one_time{YType::empty, "one-time"}
    	,
    password(std::make_shared<Native::Username::Password>())
	,secret(std::make_shared<Native::Username::Secret>())
{
    password->parent = this;
    secret->parent = this;

    yang_name = "username"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Username::~Username()
{
}

bool Native::Username::has_data() const
{
    return name.is_set
	|| privilege.is_set
	|| one_time.is_set
	|| (password !=  nullptr && password->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(privilege.yfilter)
	|| ydk::is_set(one_time.yfilter)
	|| (password !=  nullptr && password->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());
    if (one_time.is_set || is_set(one_time.yfilter)) leaf_name_data.push_back(one_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Username::Password>();
        }
        return password;
    }

    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Native::Username::Secret>();
        }
        return secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(secret != nullptr)
    {
        children["secret"] = secret;
    }

    return children;
}

void Native::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-time")
    {
        one_time = value;
        one_time.value_namespace = name_space;
        one_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
    if(value_path == "one-time")
    {
        one_time.yfilter = yfilter;
    }
}

bool Native::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "secret" || name == "name" || name == "privilege" || name == "one-time")
        return true;
    return false;
}

Native::Username::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Username::Password::~Password()
{
}

bool Native::Username::Password::has_data() const
{
    return encryption.is_set
	|| password.is_set;
}

bool Native::Username::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Username::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Username::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Username::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Username::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Username::Secret::Secret()
    :
    encryption{YType::enumeration, "encryption"},
    secret{YType::str, "secret"}
{

    yang_name = "secret"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Username::Secret::~Secret()
{
}

bool Native::Username::Secret::has_data() const
{
    return encryption.is_set
	|| secret.is_set;
}

bool Native::Username::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Username::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Username::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Username::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Username::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Username::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "secret")
        return true;
    return false;
}

Native::Controller::Controller()
{

    yang_name = "controller"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::~Controller()
{
}

bool Native::Controller::has_data() const
{
    for (std::size_t index=0; index<controller_tx_ex_list.size(); index++)
    {
        if(controller_tx_ex_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet.size(); index++)
    {
        if(sonet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.size(); index++)
    {
        if(sonet_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wanphy.size(); index++)
    {
        if(wanphy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::has_operation() const
{
    for (std::size_t index=0; index<controller_tx_ex_list.size(); index++)
    {
        if(controller_tx_ex_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet.size(); index++)
    {
        if(sonet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.size(); index++)
    {
        if(sonet_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wanphy.size(); index++)
    {
        if(wanphy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-controller:controller-tx-ex-list")
    {
        for(auto const & c : controller_tx_ex_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::ControllerTxExList>();
        c->parent = this;
        controller_tx_ex_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:Cellular")
    {
        for(auto const & c : cellular)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Cellular>();
        c->parent = this;
        cellular.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:SONET")
    {
        for(auto const & c : sonet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET>();
        c->parent = this;
        sonet.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:SONET-ACR")
    {
        for(auto const & c : sonet_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR>();
        c->parent = this;
        sonet_acr.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:wanphy")
    {
        for(auto const & c : wanphy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Wanphy>();
        c->parent = this;
        wanphy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller_tx_ex_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cellular)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sonet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sonet_acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wanphy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-tx-ex-list" || name == "Cellular" || name == "SONET" || name == "SONET-ACR" || name == "wanphy")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::ControllerTxExList()
    :
    name{YType::enumeration, "name"},
    number{YType::str, "number"},
    atm{YType::empty, "atm"},
    framing{YType::str, "framing"},
    linecode{YType::enumeration, "linecode"}
    	,
    clock_(std::make_shared<Native::Controller::ControllerTxExList::Clock_>())
	,cablelength(std::make_shared<Native::Controller::ControllerTxExList::Cablelength>())
{
    clock_->parent = this;
    cablelength->parent = this;

    yang_name = "controller-tx-ex-list"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::ControllerTxExList::~ControllerTxExList()
{
}

bool Native::Controller::ControllerTxExList::has_data() const
{
    for (std::size_t index=0; index<channel_group.size(); index++)
    {
        if(channel_group[index]->has_data())
            return true;
    }
    return name.is_set
	|| number.is_set
	|| atm.is_set
	|| framing.is_set
	|| linecode.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (cablelength !=  nullptr && cablelength->has_data());
}

bool Native::Controller::ControllerTxExList::has_operation() const
{
    for (std::size_t index=0; index<channel_group.size(); index++)
    {
        if(channel_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(linecode.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (cablelength !=  nullptr && cablelength->has_operation());
}

std::string Native::Controller::ControllerTxExList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::ControllerTxExList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:controller-tx-ex-list" <<"[name='" <<name <<"']" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (linecode.is_set || is_set(linecode.yfilter)) leaf_name_data.push_back(linecode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::ControllerTxExList::Clock_>();
        }
        return clock_;
    }

    if(child_yang_name == "cablelength")
    {
        if(cablelength == nullptr)
        {
            cablelength = std::make_shared<Native::Controller::ControllerTxExList::Cablelength>();
        }
        return cablelength;
    }

    if(child_yang_name == "channel-group")
    {
        for(auto const & c : channel_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::ControllerTxExList::ChannelGroup>();
        c->parent = this;
        channel_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    if(cablelength != nullptr)
    {
        children["cablelength"] = cablelength;
    }

    for (auto const & c : channel_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::ControllerTxExList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linecode")
    {
        linecode = value;
        linecode.value_namespace = name_space;
        linecode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "linecode")
    {
        linecode.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "cablelength" || name == "channel-group" || name == "name" || name == "number" || name == "atm" || name == "framing" || name == "linecode")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock_::Clock_()
    :
    source(std::make_shared<Native::Controller::ControllerTxExList::Clock_::Source>())
{
    source->parent = this;

    yang_name = "clock"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Clock_::~Clock_()
{
}

bool Native::Controller::ControllerTxExList::Clock_::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Controller::ControllerTxExList::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Controller::ControllerTxExList::Clock_::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Controller::ControllerTxExList::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::ControllerTxExList::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::ControllerTxExList::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock_::Source::Source()
    :
    internal{YType::empty, "internal"},
    loop_timed{YType::empty, "loop-timed"}
    	,
    line(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Clock_::Source::~Source()
{
}

bool Native::Controller::ControllerTxExList::Clock_::Source::has_data() const
{
    return internal.is_set
	|| loop_timed.is_set
	|| (line !=  nullptr && line->has_data());
}

bool Native::Controller::ControllerTxExList::Clock_::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(loop_timed.yfilter)
	|| (line !=  nullptr && line->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock_::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock_::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (loop_timed.is_set || is_set(loop_timed.yfilter)) leaf_name_data.push_back(loop_timed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock_::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<Native::Controller::ControllerTxExList::Clock_::Source::Line>();
        }
        return line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock_::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line != nullptr)
    {
        children["line"] = line;
    }

    return children;
}

void Native::Controller::ControllerTxExList::Clock_::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-timed")
    {
        loop_timed = value;
        loop_timed.value_namespace = name_space;
        loop_timed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Clock_::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "loop-timed")
    {
        loop_timed.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Clock_::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line" || name == "internal" || name == "loop-timed")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock_::Source::Line::Line()
    :
    line_mode{YType::enumeration, "line-mode"}
{

    yang_name = "line"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Clock_::Source::Line::~Line()
{
}

bool Native::Controller::ControllerTxExList::Clock_::Source::Line::has_data() const
{
    return line_mode.is_set;
}

bool Native::Controller::ControllerTxExList::Clock_::Source::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_mode.yfilter);
}

std::string Native::Controller::ControllerTxExList::Clock_::Source::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock_::Source::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_mode.is_set || is_set(line_mode.yfilter)) leaf_name_data.push_back(line_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock_::Source::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock_::Source::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::Clock_::Source::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-mode")
    {
        line_mode = value;
        line_mode.value_namespace = name_space;
        line_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Clock_::Source::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-mode")
    {
        line_mode.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Clock_::Source::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-mode")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Cablelength::Cablelength()
    :
    long_{YType::str, "long"},
    short_{YType::str, "short"}
{

    yang_name = "cablelength"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Cablelength::~Cablelength()
{
}

bool Native::Controller::ControllerTxExList::Cablelength::has_data() const
{
    return long_.is_set
	|| short_.is_set;
}

bool Native::Controller::ControllerTxExList::Cablelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::Controller::ControllerTxExList::Cablelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cablelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Cablelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Cablelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Cablelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::Cablelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Cablelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Cablelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::ChannelGroup::ChannelGroup()
    :
    number{YType::uint8, "number"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "channel-group"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::ChannelGroup::~ChannelGroup()
{
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_data() const
{
    for (auto const & leaf : timeslots.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return number.is_set;
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_operation() const
{
    for (auto const & leaf : timeslots.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::ControllerTxExList::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::ChannelGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    auto timeslots_name_datas = timeslots.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timeslots_name_datas.begin(), timeslots_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::ChannelGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots.append(value);
    }
}

void Native::Controller::ControllerTxExList::ChannelGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::Cellular::Cellular()
    :
    id{YType::str, "id"}
    	,
    lte(std::make_shared<Native::Controller::Cellular::Lte>())
{
    lte->parent = this;

    yang_name = "Cellular"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::Cellular::~Cellular()
{
}

bool Native::Controller::Cellular::has_data() const
{
    return id.is_set
	|| (lte !=  nullptr && lte->has_data());
}

bool Native::Controller::Cellular::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lte !=  nullptr && lte->has_operation());
}

std::string Native::Controller::Cellular::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::Cellular::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:Cellular" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lte")
    {
        if(lte == nullptr)
        {
            lte = std::make_shared<Native::Controller::Cellular::Lte>();
        }
        return lte;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lte != nullptr)
    {
        children["lte"] = lte;
    }

    return children;
}

void Native::Controller::Cellular::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lte" || name == "id")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Lte()
    :
    modem(std::make_shared<Native::Controller::Cellular::Lte::Modem>())
{
    modem->parent = this;

    yang_name = "lte"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::~Lte()
{
}

bool Native::Controller::Cellular::Lte::has_data() const
{
    return (modem !=  nullptr && modem->has_data());
}

bool Native::Controller::Cellular::Lte::has_operation() const
{
    return is_set(yfilter)
	|| (modem !=  nullptr && modem->has_operation());
}

std::string Native::Controller::Cellular::Lte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Controller::Cellular::Lte::Modem>();
        }
        return modem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    return children;
}

void Native::Controller::Cellular::Lte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modem")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::Modem()
    :
    link_recovery(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>())
{
    link_recovery->parent = this;

    yang_name = "modem"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::Modem::~Modem()
{
}

bool Native::Controller::Cellular::Lte::Modem::has_data() const
{
    return (link_recovery !=  nullptr && link_recovery->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::has_operation() const
{
    return is_set(yfilter)
	|| (link_recovery !=  nullptr && link_recovery->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-recovery")
    {
        if(link_recovery == nullptr)
        {
            link_recovery = std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>();
        }
        return link_recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_recovery != nullptr)
    {
        children["link-recovery"] = link_recovery;
    }

    return children;
}

void Native::Controller::Cellular::Lte::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-recovery")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::LinkRecovery()
    :
    monitor_timer{YType::uint32, "monitor-timer"},
    wait_timer{YType::uint32, "wait-timer"},
    debounce_count{YType::uint32, "debounce-count"}
    	,
    rssi(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi>())
{
    rssi->parent = this;

    yang_name = "link-recovery"; yang_parent_name = "modem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::~LinkRecovery()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_data() const
{
    return monitor_timer.is_set
	|| wait_timer.is_set
	|| debounce_count.is_set
	|| (rssi !=  nullptr && rssi->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_timer.yfilter)
	|| ydk::is_set(wait_timer.yfilter)
	|| ydk::is_set(debounce_count.yfilter)
	|| (rssi !=  nullptr && rssi->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_timer.is_set || is_set(monitor_timer.yfilter)) leaf_name_data.push_back(monitor_timer.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.yfilter)) leaf_name_data.push_back(wait_timer.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssi")
    {
        if(rssi == nullptr)
        {
            rssi = std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi>();
        }
        return rssi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rssi != nullptr)
    {
        children["rssi"] = rssi;
    }

    return children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-timer")
    {
        monitor_timer = value;
        monitor_timer.value_namespace = name_space;
        monitor_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
        wait_timer.value_namespace = name_space;
        wait_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-timer")
    {
        monitor_timer.yfilter = yfilter;
    }
    if(value_path == "wait-timer")
    {
        wait_timer.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssi" || name == "monitor-timer" || name == "wait-timer" || name == "debounce-count")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::Rssi()
    :
    onset_threshold{YType::int32, "onset-threshold"}
{

    yang_name = "rssi"; yang_parent_name = "link-recovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::~Rssi()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_data() const
{
    return onset_threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(onset_threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onset_threshold.is_set || is_set(onset_threshold.yfilter)) leaf_name_data.push_back(onset_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "onset-threshold")
    {
        onset_threshold = value;
        onset_threshold.value_namespace = name_space;
        onset_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "onset-threshold")
    {
        onset_threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onset-threshold")
        return true;
    return false;
}

Native::Controller::SONET::SONET()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
    	,
    clock_(std::make_shared<Native::Controller::SONET::Clock_>())
	,aug(std::make_shared<Native::Controller::SONET::Aug>())
	,au_4_atm(std::make_shared<Native::Controller::SONET::Au4Atm>())
	,aps(std::make_shared<Native::Controller::SONET::Aps>())
{
    clock_->parent = this;
    aug->parent = this;
    au_4_atm->parent = this;
    aps->parent = this;

    yang_name = "SONET"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::SONET::~SONET()
{
}

bool Native::Controller::SONET::has_data() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aps !=  nullptr && aps->has_data());
}

bool Native::Controller::SONET::has_operation() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aps !=  nullptr && aps->has_operation());
}

std::string Native::Controller::SONET::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::SONET::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::SONET::Clock_>();
        }
        return clock_;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::SONET::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "au-3")
    {
        for(auto const & c : au_3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au3>();
        c->parent = this;
        au_3.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::SONET::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "au-4")
    {
        for(auto const & c : au_4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4>();
        c->parent = this;
        au_4.push_back(c);
        return c;
    }

    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::SONET::Aps>();
        }
        return aps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    if(aug != nullptr)
    {
        children["aug"] = aug;
    }

    for (auto const & c : au_3)
    {
        children[c->get_segment_path()] = c;
    }

    if(au_4_atm != nullptr)
    {
        children["au-4-atm"] = au_4_atm;
    }

    for (auto const & c : au_4)
    {
        children[c->get_segment_path()] = c;
    }

    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    return children;
}

void Native::Controller::SONET::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "aug" || name == "au-3" || name == "au-4-atm" || name == "au-4" || name == "aps" || name == "name" || name == "framing" || name == "shutdown")
        return true;
    return false;
}

Native::Controller::SONET::Clock_::Clock_()
    :
    source{YType::enumeration, "source"}
{

    yang_name = "clock"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Clock_::~Clock_()
{
}

bool Native::Controller::SONET::Clock_::has_data() const
{
    return source.is_set;
}

bool Native::Controller::SONET::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Controller::SONET::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::SONET::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "aug"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aug::~Aug()
{
}

bool Native::Controller::SONET::Aug::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONET::Aug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONET::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Au3()
    :
    number{YType::int8, "number"}
    	,
    overhead(std::make_shared<Native::Controller::SONET::Au3::Overhead>())
	,mode(std::make_shared<Native::Controller::SONET::Au3::Mode>())
{
    overhead->parent = this;
    mode->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au3::~Au3()
{
}

bool Native::Controller::SONET::Au3::has_data() const
{
    return number.is_set
	|| (overhead !=  nullptr && overhead->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Controller::SONET::Au3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (overhead !=  nullptr && overhead->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Controller::SONET::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::SONET::Au3::Overhead>();
        }
        return overhead;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::SONET::Au3::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(overhead != nullptr)
    {
        children["overhead"] = overhead;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Controller::SONET::Au3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overhead" || name == "mode" || name == "number")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{

    yang_name = "overhead"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::SONET::Au3::Overhead::has_data() const
{
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::SONET::Au3::Overhead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string Native::Controller::SONET::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::Overhead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.yfilter)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au3::Overhead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte")
    {
        byte = value;
        byte.value_namespace = name_space;
        byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::Overhead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte")
    {
        byte.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::Overhead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte" || name == "length")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "mode"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au3::Mode::~Mode()
{
}

bool Native::Controller::SONET::Au3::Mode::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONET::Au3::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONET::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au3::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONET::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::SONET::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::SONET::Au4Atm::has_data() const
{
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::SONET::Au4Atm::has_operation() const
{
    return is_set(yfilter)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::SONET::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::SONET::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(au_4 != nullptr)
    {
        children["au-4"] = au_4;
    }

    return children;
}

void Native::Controller::SONET::Au4Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "au-4")
        return true;
    return false;
}

Native::Controller::SONET::Au4Atm::Au4::Au4()
    :
    number{YType::int8, "number"},
    atm{YType::empty, "atm"}
{

    yang_name = "au-4"; yang_parent_name = "au-4-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::SONET::Au4Atm::Au4::has_data() const
{
    return number.is_set
	|| atm.is_set;
}

bool Native::Controller::SONET::Au4Atm::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONET::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4Atm::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4Atm::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4Atm::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4Atm::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONET::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    mode{YType::enumeration, "mode"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"},
    framing{YType::enumeration, "framing"}
    	,
    cem_group_timeslots(std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots>())
	,channel_group_timeslots(std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots>())
	,cem_group_unframed(std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed>())
	,framing_unframed(std::make_shared<Native::Controller::SONET::Au4::FramingUnframed>())
	,cem_group_atm(std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm>())
	,ima_group(std::make_shared<Native::Controller::SONET::Au4::ImaGroup>())
{
    cem_group_timeslots->parent = this;
    channel_group_timeslots->parent = this;
    cem_group_unframed->parent = this;
    framing_unframed->parent = this;
    cem_group_atm->parent = this;
    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::~Au4()
{
}

bool Native::Controller::SONET::Au4::has_data() const
{
    return number.is_set
	|| tug_3.is_set
	|| mode.is_set
	|| cem_group.is_set
	|| unframed.is_set
	|| framing.is_set
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::SONET::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(tug_3.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::SONET::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4" <<"[number='" <<number <<"']" <<"[tug-3='" <<tug_3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.yfilter)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::SONET::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::SONET::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cem_group_timeslots != nullptr)
    {
        children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(channel_group_timeslots != nullptr)
    {
        children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        children["cem-group-unframed"] = cem_group_unframed;
    }

    if(framing_unframed != nullptr)
    {
        children["framing-unframed"] = framing_unframed;
    }

    if(cem_group_atm != nullptr)
    {
        children["cem-group-atm"] = cem_group_atm;
    }

    if(ima_group != nullptr)
    {
        children["ima-group"] = ima_group;
    }

    return children;
}

void Native::Controller::SONET::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
        tug_3.value_namespace = name_space;
        tug_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "tug-3")
    {
        tug_3.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cem-group-timeslots" || name == "channel-group-timeslots" || name == "cem-group-unframed" || name == "framing-unframed" || name == "cem-group-atm" || name == "ima-group" || name == "number" || name == "tug-3" || name == "mode" || name == "cem-group" || name == "unframed" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::CemGroupTimeslots()
{

    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
{

    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(channel_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[channel-group='" <<channel_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "channel-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupUnframed::CemGroupUnframed()
{

    yang_name = "cem-group-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::CemGroupUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "unframed")
        return true;
    return false;
}

Native::Controller::SONET::Au4::FramingUnframed::FramingUnframed()
{

    yang_name = "framing-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::FramingUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::FramingUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::FramingUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::FramingUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{

    yang_name = "tug-2"; yang_parent_name = "framing-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(framing.yfilter);
}

std::string Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::FramingUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupAtm::CemGroupAtm()
{

    yang_name = "cem-group-atm"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupAtm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::CemGroupAtm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupAtm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupAtm::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ImaGroup::ImaGroup()
{

    yang_name = "ima-group"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::SONET::Au4::ImaGroup::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ImaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::ImaGroup::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::ImaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::ImaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::ImaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{

    yang_name = "tug-2"; yang_parent_name = "ima-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(ima_group.yfilter);
}

std::string Native::Controller::SONET::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[ima-group='" <<ima_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ImaGroup::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.yfilter)) leaf_name_data.push_back(ima_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
        ima_group.value_namespace = name_space;
        ima_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::ImaGroup::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "ima-group")
    {
        ima_group.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "ima-group")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Aps()
    :
    working{YType::int8, "working"},
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"}
    	,
    group(std::make_shared<Native::Controller::SONET::Aps::Group>())
	,protect(std::make_shared<Native::Controller::SONET::Aps::Protect>())
	,interchassis(std::make_shared<Native::Controller::SONET::Aps::Interchassis>())
{
    group->parent = this;
    protect->parent = this;
    interchassis->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::~Aps()
{
}

bool Native::Controller::SONET::Aps::has_data() const
{
    return working.is_set
	|| hspw_icrm_grp.is_set
	|| (group !=  nullptr && group->has_data())
	|| (protect !=  nullptr && protect->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Controller::SONET::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(working.yfilter)
	|| ydk::is_set(hspw_icrm_grp.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (protect !=  nullptr && protect->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Controller::SONET::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (working.is_set || is_set(working.yfilter)) leaf_name_data.push_back(working.get_name_leafdata());
    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.yfilter)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::SONET::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::SONET::Aps::Protect>();
        }
        return protect;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::SONET::Aps::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    return children;
}

void Native::Controller::SONET::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "working")
    {
        working = value;
        working.value_namespace = name_space;
        working.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
        hspw_icrm_grp.value_namespace = name_space;
        hspw_icrm_grp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "working")
    {
        working.yfilter = yfilter;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "protect" || name == "interchassis" || name == "working" || name == "hspw-icrm-grp")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Group::Group()
    :
    group_number{YType::uint8, "group-number"},
    acr{YType::int8, "acr"}
{

    yang_name = "group"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::Group::~Group()
{
}

bool Native::Controller::SONET::Aps::Group::has_data() const
{
    return group_number.is_set
	|| acr.is_set;
}

bool Native::Controller::SONET::Aps::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Controller::SONET::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aps::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-number" || name == "acr")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Protect::Protect()
    :
    number{YType::int8, "number"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "protect"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::Protect::~Protect()
{
}

bool Native::Controller::SONET::Aps::Protect::has_data() const
{
    return number.is_set
	|| ip_addr.is_set;
}

bool Native::Controller::SONET::Aps::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Controller::SONET::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aps::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ip-addr")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{

    yang_name = "interchassis"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::SONET::Aps::Interchassis::has_data() const
{
    return group.is_set;
}

bool Native::Controller::SONET::Aps::Interchassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Controller::SONET::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aps::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Controller::SONETACR::SONETACR()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
    	,
    clock_(std::make_shared<Native::Controller::SONETACR::Clock_>())
	,aug(std::make_shared<Native::Controller::SONETACR::Aug>())
	,au_4_atm(std::make_shared<Native::Controller::SONETACR::Au4Atm>())
	,aps(std::make_shared<Native::Controller::SONETACR::Aps>())
{
    clock_->parent = this;
    aug->parent = this;
    au_4_atm->parent = this;
    aps->parent = this;

    yang_name = "SONET-ACR"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::SONETACR::~SONETACR()
{
}

bool Native::Controller::SONETACR::has_data() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aps !=  nullptr && aps->has_data());
}

bool Native::Controller::SONETACR::has_operation() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aps !=  nullptr && aps->has_operation());
}

std::string Native::Controller::SONETACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::SONETACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET-ACR" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::SONETACR::Clock_>();
        }
        return clock_;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::SONETACR::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "au-3")
    {
        for(auto const & c : au_3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au3>();
        c->parent = this;
        au_3.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::SONETACR::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "au-4")
    {
        for(auto const & c : au_4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4>();
        c->parent = this;
        au_4.push_back(c);
        return c;
    }

    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::SONETACR::Aps>();
        }
        return aps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    if(aug != nullptr)
    {
        children["aug"] = aug;
    }

    for (auto const & c : au_3)
    {
        children[c->get_segment_path()] = c;
    }

    if(au_4_atm != nullptr)
    {
        children["au-4-atm"] = au_4_atm;
    }

    for (auto const & c : au_4)
    {
        children[c->get_segment_path()] = c;
    }

    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    return children;
}

void Native::Controller::SONETACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "aug" || name == "au-3" || name == "au-4-atm" || name == "au-4" || name == "aps" || name == "name" || name == "framing" || name == "shutdown")
        return true;
    return false;
}

Native::Controller::SONETACR::Clock_::Clock_()
    :
    source{YType::enumeration, "source"}
{

    yang_name = "clock"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Clock_::~Clock_()
{
}

bool Native::Controller::SONETACR::Clock_::has_data() const
{
    return source.is_set;
}

bool Native::Controller::SONETACR::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Controller::SONETACR::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::SONETACR::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "aug"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aug::~Aug()
{
}

bool Native::Controller::SONETACR::Aug::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONETACR::Aug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONETACR::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Au3()
    :
    number{YType::int8, "number"}
    	,
    overhead(std::make_shared<Native::Controller::SONETACR::Au3::Overhead>())
	,mode(std::make_shared<Native::Controller::SONETACR::Au3::Mode>())
{
    overhead->parent = this;
    mode->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au3::~Au3()
{
}

bool Native::Controller::SONETACR::Au3::has_data() const
{
    return number.is_set
	|| (overhead !=  nullptr && overhead->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Controller::SONETACR::Au3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (overhead !=  nullptr && overhead->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Controller::SONETACR::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::SONETACR::Au3::Overhead>();
        }
        return overhead;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::SONETACR::Au3::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(overhead != nullptr)
    {
        children["overhead"] = overhead;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Controller::SONETACR::Au3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overhead" || name == "mode" || name == "number")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{

    yang_name = "overhead"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::SONETACR::Au3::Overhead::has_data() const
{
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::SONETACR::Au3::Overhead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string Native::Controller::SONETACR::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::Overhead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.yfilter)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au3::Overhead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte")
    {
        byte = value;
        byte.value_namespace = name_space;
        byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::Overhead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte")
    {
        byte.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::Overhead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte" || name == "length")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "mode"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au3::Mode::~Mode()
{
}

bool Native::Controller::SONETACR::Au3::Mode::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONETACR::Au3::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONETACR::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au3::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::SONETACR::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::SONETACR::Au4Atm::has_data() const
{
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::SONETACR::Au4Atm::has_operation() const
{
    return is_set(yfilter)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::SONETACR::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::SONETACR::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(au_4 != nullptr)
    {
        children["au-4"] = au_4;
    }

    return children;
}

void Native::Controller::SONETACR::Au4Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "au-4")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4Atm::Au4::Au4()
    :
    number{YType::int8, "number"},
    atm{YType::empty, "atm"}
{

    yang_name = "au-4"; yang_parent_name = "au-4-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_data() const
{
    return number.is_set
	|| atm.is_set;
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONETACR::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4Atm::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4Atm::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4Atm::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    mode{YType::enumeration, "mode"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"},
    framing{YType::enumeration, "framing"}
    	,
    cem_group_timeslots(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots>())
	,channel_group_timeslots(std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots>())
	,cem_group_unframed(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed>())
	,framing_unframed(std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed>())
	,cem_group_atm(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm>())
	,ima_group(std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup>())
{
    cem_group_timeslots->parent = this;
    channel_group_timeslots->parent = this;
    cem_group_unframed->parent = this;
    framing_unframed->parent = this;
    cem_group_atm->parent = this;
    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::~Au4()
{
}

bool Native::Controller::SONETACR::Au4::has_data() const
{
    return number.is_set
	|| tug_3.is_set
	|| mode.is_set
	|| cem_group.is_set
	|| unframed.is_set
	|| framing.is_set
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::SONETACR::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(tug_3.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::SONETACR::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4" <<"[number='" <<number <<"']" <<"[tug-3='" <<tug_3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.yfilter)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cem_group_timeslots != nullptr)
    {
        children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(channel_group_timeslots != nullptr)
    {
        children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        children["cem-group-unframed"] = cem_group_unframed;
    }

    if(framing_unframed != nullptr)
    {
        children["framing-unframed"] = framing_unframed;
    }

    if(cem_group_atm != nullptr)
    {
        children["cem-group-atm"] = cem_group_atm;
    }

    if(ima_group != nullptr)
    {
        children["ima-group"] = ima_group;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
        tug_3.value_namespace = name_space;
        tug_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "tug-3")
    {
        tug_3.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cem-group-timeslots" || name == "channel-group-timeslots" || name == "cem-group-unframed" || name == "framing-unframed" || name == "cem-group-atm" || name == "ima-group" || name == "number" || name == "tug-3" || name == "mode" || name == "cem-group" || name == "unframed" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::CemGroupTimeslots()
{

    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
{

    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(channel_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[channel-group='" <<channel_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "channel-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::CemGroupUnframed()
{

    yang_name = "cem-group-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "unframed")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::FramingUnframed::FramingUnframed()
{

    yang_name = "framing-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::FramingUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::FramingUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::FramingUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{

    yang_name = "tug-2"; yang_parent_name = "framing-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(framing.yfilter);
}

std::string Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::CemGroupAtm()
{

    yang_name = "cem-group-atm"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupAtm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ImaGroup::ImaGroup()
{

    yang_name = "ima-group"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ImaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::ImaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::ImaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{

    yang_name = "tug-2"; yang_parent_name = "ima-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(ima_group.yfilter);
}

std::string Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[ima-group='" <<ima_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.yfilter)) leaf_name_data.push_back(ima_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
        ima_group.value_namespace = name_space;
        ima_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::ImaGroup::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "ima-group")
    {
        ima_group.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "ima-group")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Aps()
    :
    working{YType::int8, "working"},
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"}
    	,
    group(std::make_shared<Native::Controller::SONETACR::Aps::Group>())
	,protect(std::make_shared<Native::Controller::SONETACR::Aps::Protect>())
	,interchassis(std::make_shared<Native::Controller::SONETACR::Aps::Interchassis>())
{
    group->parent = this;
    protect->parent = this;
    interchassis->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::~Aps()
{
}

bool Native::Controller::SONETACR::Aps::has_data() const
{
    return working.is_set
	|| hspw_icrm_grp.is_set
	|| (group !=  nullptr && group->has_data())
	|| (protect !=  nullptr && protect->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Controller::SONETACR::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(working.yfilter)
	|| ydk::is_set(hspw_icrm_grp.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (protect !=  nullptr && protect->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Controller::SONETACR::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (working.is_set || is_set(working.yfilter)) leaf_name_data.push_back(working.get_name_leafdata());
    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.yfilter)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::SONETACR::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::SONETACR::Aps::Protect>();
        }
        return protect;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::SONETACR::Aps::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    return children;
}

void Native::Controller::SONETACR::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "working")
    {
        working = value;
        working.value_namespace = name_space;
        working.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
        hspw_icrm_grp.value_namespace = name_space;
        hspw_icrm_grp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "working")
    {
        working.yfilter = yfilter;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "protect" || name == "interchassis" || name == "working" || name == "hspw-icrm-grp")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Group::Group()
    :
    group_number{YType::uint8, "group-number"},
    acr{YType::int8, "acr"}
{

    yang_name = "group"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::Group::~Group()
{
}

bool Native::Controller::SONETACR::Aps::Group::has_data() const
{
    return group_number.is_set
	|| acr.is_set;
}

bool Native::Controller::SONETACR::Aps::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aps::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-number" || name == "acr")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Protect::Protect()
    :
    number{YType::int8, "number"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "protect"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::Protect::~Protect()
{
}

bool Native::Controller::SONETACR::Aps::Protect::has_data() const
{
    return number.is_set
	|| ip_addr.is_set;
}

bool Native::Controller::SONETACR::Aps::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aps::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ip-addr")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{

    yang_name = "interchassis"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_data() const
{
    return group.is_set;
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aps::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Controller::Wanphy::Wanphy()
    :
    name{YType::str, "name"}
{

    yang_name = "wanphy"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::Wanphy::~Wanphy()
{
}

bool Native::Controller::Wanphy::has_data() const
{
    return name.is_set;
}

bool Native::Controller::Wanphy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Controller::Wanphy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:wanphy" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Wanphy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Wanphy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Wanphy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Controller::Wanphy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vrf::~Vrf()
{
}

bool Native::Vrf::has_data() const
{
    for (std::size_t index=0; index<definition.size(); index++)
    {
        if(definition[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::has_operation() const
{
    for (std::size_t index=0; index<definition.size(); index++)
    {
        if(definition[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "definition")
    {
        for(auto const & c : definition)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition>();
        c->parent = this;
        definition.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : definition)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "definition")
        return true;
    return false;
}

Native::Vrf::Definition::Definition()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
    	,
    address_family(std::make_shared<Native::Vrf::Definition::AddressFamily>())
	,route_target(std::make_shared<Native::Vrf::Definition::RouteTarget>())
	,vpn(std::make_shared<Native::Vrf::Definition::Vpn>())
{
    address_family->parent = this;
    route_target->parent = this;
    vpn->parent = this;

    yang_name = "definition"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vrf::Definition::~Definition()
{
}

bool Native::Vrf::Definition::has_data() const
{
    return name.is_set
	|| description.is_set
	|| rd.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (route_target !=  nullptr && route_target->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Vrf::Definition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Vrf::Definition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vrf::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Vrf::Definition::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::RouteTarget>();
        }
        return route_target;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Vrf::Definition::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Vrf::Definition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "route-target" || name == "vpn" || name == "name" || name == "description" || name == "rd")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::~AddressFamily()
{
}

bool Native::Vrf::Definition::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vrf::Definition::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Ipv4()
    :
    export_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export_>())
	,maximum(nullptr) // presence node
	,mdt(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>())
	,route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>())
	,bgp(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp>())
	,import(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Import>())
{
    export_->parent = this;
    mdt->parent = this;
    route_target->parent = this;
    bgp->parent = this;
    import->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_data() const
{
    return (export_ !=  nullptr && export_->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (route_target !=  nullptr && route_target->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (export_ !=  nullptr && export_->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export_>();
        }
        return export_;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>();
        }
        return route_target;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "maximum" || name == "mdt" || name == "route-target" || name == "bgp" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export_::Export_()
    :
    map{YType::str, "map"}
{

    yang_name = "export"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_data() const
{
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::Maximum()
    :
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    reinstall{YType::uint16, "reinstall"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::~Maximum()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_data() const
{
    return routes.is_set
	|| threshold.is_set
	|| reinstall.is_set
	|| warning_only.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(reinstall.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (reinstall.is_set || is_set(reinstall.yfilter)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinstall")
    {
        reinstall = value;
        reinstall.value_namespace = name_space;
        reinstall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "reinstall")
    {
        reinstall.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "threshold" || name == "reinstall" || name == "warning-only")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Mdt()
    :
    log_reuse{YType::empty, "log-reuse"},
    mtu{YType::uint16, "mtu"},
    preference{YType::enumeration, "preference"}
    	,
    default_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_>())
	,auto_discovery(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery>())
	,data(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>())
	,overlay(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay>())
{
    default_->parent = this;
    auto_discovery->parent = this;
    data->parent = this;
    overlay->parent = this;

    yang_name = "mdt"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::~Mdt()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_data() const
{
    for (auto const & leaf : preference.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return log_reuse.is_set
	|| mtu.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (auto_discovery !=  nullptr && auto_discovery->has_data())
	|| (data !=  nullptr && data->has_data())
	|| (overlay !=  nullptr && overlay->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_operation() const
{
    for (auto const & leaf : preference.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(log_reuse.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (auto_discovery !=  nullptr && auto_discovery->has_operation())
	|| (data !=  nullptr && data->has_operation())
	|| (overlay !=  nullptr && overlay->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_reuse.is_set || is_set(log_reuse.yfilter)) leaf_name_data.push_back(log_reuse.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    auto preference_name_datas = preference.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), preference_name_datas.begin(), preference_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "auto-discovery")
    {
        if(auto_discovery == nullptr)
        {
            auto_discovery = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery>();
        }
        return auto_discovery;
    }

    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>();
        }
        return data;
    }

    if(child_yang_name == "overlay")
    {
        if(overlay == nullptr)
        {
            overlay = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay>();
        }
        return overlay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(auto_discovery != nullptr)
    {
        children["auto-discovery"] = auto_discovery;
    }

    if(data != nullptr)
    {
        children["data"] = data;
    }

    if(overlay != nullptr)
    {
        children["overlay"] = overlay;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-reuse")
    {
        log_reuse = value;
        log_reuse.value_namespace = name_space;
        log_reuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference.append(value);
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-reuse")
    {
        log_reuse.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "auto-discovery" || name == "data" || name == "overlay" || name == "log-reuse" || name == "mtu" || name == "preference")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Default_()
    :
    address{YType::str, "address"}
    	,
    mpls(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls>())
{
    mpls->parent = this;

    yang_name = "default"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::~Default_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_data() const
{
    return address.is_set
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "address")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::Mpls()
    :
    mldp{YType::str, "mldp"}
{

    yang_name = "mpls"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::~Mpls()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_data() const
{
    return mldp.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mldp.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mldp.is_set || is_set(mldp.yfilter)) leaf_name_data.push_back(mldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mldp")
    {
        mldp = value;
        mldp.value_namespace = name_space;
        mldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mldp")
    {
        mldp.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mldp")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::AutoDiscovery()
    :
    pim{YType::empty, "pim"}
{

    yang_name = "auto-discovery"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::~AutoDiscovery()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::has_data() const
{
    return pim.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Data()
    :
    list{YType::str, "list"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "data"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::~Data()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_data() const
{
    for (std::size_t index=0; index<multicast.size(); index++)
    {
        if(multicast[index]->has_data())
            return true;
    }
    return list.is_set
	|| threshold.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_operation() const
{
    for (std::size_t index=0; index<multicast.size(); index++)
    {
        if(multicast[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        for(auto const & c : multicast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast>();
        c->parent = this;
        multicast.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "list" || name == "threshold")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::Multicast()
    :
    address{YType::str, "address"},
    wildcard{YType::str, "wildcard"}
{

    yang_name = "multicast"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::~Multicast()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_data() const
{
    return address.is_set
	|| wildcard.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(wildcard.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast" <<"[address='" <<address <<"']" <<"[wildcard='" <<wildcard <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "wildcard")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::Overlay()
    :
    use_bgp{YType::empty, "use-bgp"}
{

    yang_name = "overlay"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::~Overlay()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::has_data() const
{
    return use_bgp.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_bgp.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overlay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_bgp.is_set || is_set(use_bgp.yfilter)) leaf_name_data.push_back(use_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-bgp")
    {
        use_bgp = value;
        use_bgp.value_namespace = name_space;
        use_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-bgp")
    {
        use_bgp.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-bgp")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::RouteTarget()
{

    yang_name = "route-target"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::~Bgp()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::NextHop()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::~NextHop()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_data() const
{
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Import::Import()
    :
    map{YType::str, "map"}
{

    yang_name = "import"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_data() const
{
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Ipv6()
    :
    mdt(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Mdt>())
	,route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>())
	,bgp(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp>())
	,import(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Import>())
{
    mdt->parent = this;
    route_target->parent = this;
    bgp->parent = this;
    import->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_data() const
{
    return (mdt !=  nullptr && mdt->has_data())
	|| (route_target !=  nullptr && route_target->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>();
        }
        return route_target;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt" || name == "route-target" || name == "bgp" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::Mdt()
    :
    mtu{YType::uint16, "mtu"}
{

    yang_name = "mdt"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::~Mdt()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_data() const
{
    return mtu.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::RouteTarget()
{

    yang_name = "route-target"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::~Bgp()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::NextHop()
    :
    ipv4(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4>())
	,ipv6(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::~NextHop()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::Ipv4()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "ipv4"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::~Ipv4()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_data() const
{
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::Ipv6_()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::~Ipv6_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_data() const
{
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Import::Import()
    :
    map{YType::str, "map"}
{

    yang_name = "import"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_data() const
{
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::RouteTarget()
{

    yang_name = "route-target"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::RouteTarget::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::RouteTarget::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::Vpn::Vpn()
    :
    id{YType::str, "id"}
{

    yang_name = "vpn"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::Vpn::~Vpn()
{
}

bool Native::Vrf::Definition::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::Vrf::Definition::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Vrf::Definition::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Rmon::Rmon()
{

    yang_name = "rmon"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rmon::~Rmon()
{
}

bool Native::Rmon::has_data() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rmon::has_operation() const
{
    for (std::size_t index=0; index<alarm.size(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Rmon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        for(auto const & c : alarm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rmon::Alarm>();
        c->parent = this;
        alarm.push_back(c);
        return c;
    }

    if(child_yang_name == "event")
    {
        for(auto const & c : event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rmon::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : event)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Rmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rmon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "event")
        return true;
    return false;
}

Native::Rmon::Alarm::Alarm()
    :
    number{YType::uint16, "number"},
    mib_object{YType::str, "mib-object"},
    sample_interval{YType::uint32, "sample-interval"},
    test_mode{YType::enumeration, "test-mode"},
    rising_threshold{YType::int32, "rising-threshold"},
    rising_event{YType::uint16, "rising-event"},
    falling_threshold{YType::int32, "falling-threshold"},
    falling_event{YType::uint16, "falling-event"},
    owner{YType::str, "owner"}
{

    yang_name = "alarm"; yang_parent_name = "rmon"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rmon::Alarm::~Alarm()
{
}

bool Native::Rmon::Alarm::has_data() const
{
    return number.is_set
	|| mib_object.is_set
	|| sample_interval.is_set
	|| test_mode.is_set
	|| rising_threshold.is_set
	|| rising_event.is_set
	|| falling_threshold.is_set
	|| falling_event.is_set
	|| owner.is_set;
}

bool Native::Rmon::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mib_object.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(rising_event.yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(falling_event.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Native::Rmon::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mib_object.is_set || is_set(mib_object.yfilter)) leaf_name_data.push_back(mib_object.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (rising_event.is_set || is_set(rising_event.yfilter)) leaf_name_data.push_back(rising_event.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (falling_event.is_set || is_set(falling_event.yfilter)) leaf_name_data.push_back(falling_event.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rmon::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-object")
    {
        mib_object = value;
        mib_object.value_namespace = name_space;
        mib_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-event")
    {
        rising_event = value;
        rising_event.value_namespace = name_space;
        rising_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-event")
    {
        falling_event = value;
        falling_event.value_namespace = name_space;
        falling_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mib-object")
    {
        mib_object.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-event")
    {
        rising_event.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-event")
    {
        falling_event.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Native::Rmon::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mib-object" || name == "sample-interval" || name == "test-mode" || name == "rising-threshold" || name == "rising-event" || name == "falling-threshold" || name == "falling-event" || name == "owner")
        return true;
    return false;
}

Native::Rmon::Event::Event()
    :
    number{YType::uint16, "number"}
    	,
    log(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "rmon"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Rmon::Event::~Event()
{
}

bool Native::Rmon::Event::has_data() const
{
    return number.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Rmon::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Rmon::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Rmon::Event::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Rmon::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Rmon::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log" || name == "number")
        return true;
    return false;
}

Native::Rmon::Event::Log::Log()
    :
    trap{YType::str, "trap"},
    description{YType::str, "description"},
    owner{YType::str, "owner"}
{

    yang_name = "log"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Rmon::Event::Log::~Log()
{
}

bool Native::Rmon::Event::Log::has_data() const
{
    return trap.is_set
	|| description.is_set
	|| owner.is_set;
}

bool Native::Rmon::Event::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Native::Rmon::Event::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Event::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Rmon::Event::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rmon::Event::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rmon::Event::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Event::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Native::Rmon::Event::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "description" || name == "owner")
        return true;
    return false;
}

Native::Sampler::Sampler()
    :
    name{YType::str, "name"},
    description{YType::str, "Cisco-IOS-XE-flow:description"}
    	,
    mode(std::make_shared<Native::Sampler::Mode>())
	,granularity(std::make_shared<Native::Sampler::Granularity>())
{
    mode->parent = this;
    granularity->parent = this;

    yang_name = "sampler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Sampler::~Sampler()
{
}

bool Native::Sampler::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (granularity !=  nullptr && granularity->has_data());
}

bool Native::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (granularity !=  nullptr && granularity->has_operation());
}

std::string Native::Sampler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-flow:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Sampler::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:granularity")
    {
        if(granularity == nullptr)
        {
            granularity = std::make_shared<Native::Sampler::Granularity>();
        }
        return granularity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["Cisco-IOS-XE-flow:mode"] = mode;
    }

    if(granularity != nullptr)
    {
        children["Cisco-IOS-XE-flow:granularity"] = granularity;
    }

    return children;
}

void Native::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-flow:description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "granularity" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Sampler::Mode::Mode()
    :
    deterministic(std::make_shared<Native::Sampler::Mode::Deterministic>())
	,hash(std::make_shared<Native::Sampler::Mode::Hash>())
	,random(std::make_shared<Native::Sampler::Mode::Random>())
{
    deterministic->parent = this;
    hash->parent = this;
    random->parent = this;

    yang_name = "mode"; yang_parent_name = "sampler"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::~Mode()
{
}

bool Native::Sampler::Mode::has_data() const
{
    return (deterministic !=  nullptr && deterministic->has_data())
	|| (hash !=  nullptr && hash->has_data())
	|| (random !=  nullptr && random->has_data());
}

bool Native::Sampler::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (deterministic !=  nullptr && deterministic->has_operation())
	|| (hash !=  nullptr && hash->has_operation())
	|| (random !=  nullptr && random->has_operation());
}

std::string Native::Sampler::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deterministic")
    {
        if(deterministic == nullptr)
        {
            deterministic = std::make_shared<Native::Sampler::Mode::Deterministic>();
        }
        return deterministic;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Sampler::Mode::Hash>();
        }
        return hash;
    }

    if(child_yang_name == "random")
    {
        if(random == nullptr)
        {
            random = std::make_shared<Native::Sampler::Mode::Random>();
        }
        return random;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deterministic != nullptr)
    {
        children["deterministic"] = deterministic;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    if(random != nullptr)
    {
        children["random"] = random;
    }

    return children;
}

void Native::Sampler::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Sampler::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Sampler::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deterministic" || name == "hash" || name == "random")
        return true;
    return false;
}

Native::Sampler::Mode::Deterministic::Deterministic()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "deterministic"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::Deterministic::~Deterministic()
{
}

bool Native::Sampler::Mode::Deterministic::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Deterministic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Deterministic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deterministic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Deterministic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Deterministic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Deterministic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Deterministic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Deterministic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Deterministic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Mode::Hash::Hash()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "hash"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::Hash::~Hash()
{
}

bool Native::Sampler::Mode::Hash::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Mode::Random::Random()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "random"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::Random::~Random()
{
}

bool Native::Sampler::Mode::Random::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Random::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Random::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Random::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Random::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Random::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Random::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Random::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Random::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Granularity::Granularity()
    :
    connection{YType::empty, "connection"},
    packet{YType::empty, "packet"}
{

    yang_name = "granularity"; yang_parent_name = "sampler"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Granularity::~Granularity()
{
}

bool Native::Sampler::Granularity::has_data() const
{
    return connection.is_set
	|| packet.is_set;
}

bool Native::Sampler::Granularity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection.yfilter)
	|| ydk::is_set(packet.yfilter);
}

std::string Native::Sampler::Granularity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:granularity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Granularity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection.is_set || is_set(connection.yfilter)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Granularity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Granularity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Granularity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection")
    {
        connection = value;
        connection.value_namespace = name_space;
        connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Granularity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection")
    {
        connection.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool Native::Sampler::Granularity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "packet")
        return true;
    return false;
}

Native::Flow::Flow()
{

    yang_name = "flow"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::~Flow()
{
}

bool Native::Flow::has_data() const
{
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Flow::has_operation() const
{
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-flow:record")
    {
        for(auto const & c : record)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Record>();
        c->parent = this;
        record.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:exporter")
    {
        for(auto const & c : exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : record)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : exporter)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record" || name == "exporter" || name == "monitor")
        return true;
    return false;
}

Native::Flow::Record::Record()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    description{YType::str, "description"}
    	,
    collect(std::make_shared<Native::Flow::Record::Collect>())
	,default_(std::make_shared<Native::Flow::Record::Default_>())
	,match(std::make_shared<Native::Flow::Record::Match>())
{
    collect->parent = this;
    default_->parent = this;
    match->parent = this;

    yang_name = "record"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::Record::~Record()
{
}

bool Native::Flow::Record::has_data() const
{
    return name.is_set
	|| type.is_set
	|| description.is_set
	|| (collect !=  nullptr && collect->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Flow::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (collect !=  nullptr && collect->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Flow::Record::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:record" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collect")
    {
        if(collect == nullptr)
        {
            collect = std::make_shared<Native::Flow::Record::Collect>();
        }
        return collect;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Record::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Flow::Record::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collect != nullptr)
    {
        children["collect"] = collect;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Flow::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Flow::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collect" || name == "default" || name == "match" || name == "name" || name == "type" || name == "description")
        return true;
    return false;
}

Native::Flow::Record::Collect::Collect()
    :
    application(std::make_shared<Native::Flow::Record::Collect::Application>())
	,connection(std::make_shared<Native::Flow::Record::Collect::Connection>())
	,counter(std::make_shared<Native::Flow::Record::Collect::Counter>())
	,datalink(std::make_shared<Native::Flow::Record::Collect::Datalink>())
	,flow(std::make_shared<Native::Flow::Record::Collect::Flow_>())
	,interface(std::make_shared<Native::Flow::Record::Collect::Interface>())
	,ipv4(std::make_shared<Native::Flow::Record::Collect::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Ipv6>())
	,metadata(std::make_shared<Native::Flow::Record::Collect::Metadata>())
	,monitor(std::make_shared<Native::Flow::Record::Collect::Monitor>())
	,mpls(std::make_shared<Native::Flow::Record::Collect::Mpls>())
	,network(std::make_shared<Native::Flow::Record::Collect::Network>())
	,pfr(std::make_shared<Native::Flow::Record::Collect::Pfr>())
	,policy(std::make_shared<Native::Flow::Record::Collect::Policy>())
	,routing(std::make_shared<Native::Flow::Record::Collect::Routing>())
	,services(std::make_shared<Native::Flow::Record::Collect::Services>())
	,timestamp(std::make_shared<Native::Flow::Record::Collect::Timestamp>())
	,transport(std::make_shared<Native::Flow::Record::Collect::Transport>())
{
    application->parent = this;
    connection->parent = this;
    counter->parent = this;
    datalink->parent = this;
    flow->parent = this;
    interface->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    metadata->parent = this;
    monitor->parent = this;
    mpls->parent = this;
    network->parent = this;
    pfr->parent = this;
    policy->parent = this;
    routing->parent = this;
    services->parent = this;
    timestamp->parent = this;
    transport->parent = this;

    yang_name = "collect"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::~Collect()
{
}

bool Native::Flow::Record::Collect::has_data() const
{
    return (application !=  nullptr && application->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (counter !=  nullptr && counter->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (timestamp !=  nullptr && timestamp->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::has_operation() const
{
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (counter !=  nullptr && counter->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (timestamp !=  nullptr && timestamp->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Collect::Application>();
        }
        return application;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Flow::Record::Collect::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Flow::Record::Collect::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Collect::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Flow::Record::Collect::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Flow::Record::Collect::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Flow::Record::Collect::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Flow::Record::Collect::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Network>();
        }
        return network;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::Flow::Record::Collect::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Flow::Record::Collect::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Flow::Record::Collect::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Flow::Record::Collect::Services>();
        }
        return services;
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Native::Flow::Record::Collect::Timestamp>();
        }
        return timestamp;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(datalink != nullptr)
    {
        children["datalink"] = datalink;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metadata != nullptr)
    {
        children["metadata"] = metadata;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(services != nullptr)
    {
        children["services"] = services;
    }

    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Collect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "connection" || name == "counter" || name == "datalink" || name == "flow" || name == "interface" || name == "ipv4" || name == "ipv6" || name == "metadata" || name == "monitor" || name == "mpls" || name == "network" || name == "pfr" || name == "policy" || name == "routing" || name == "services" || name == "timestamp" || name == "transport")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Application()
    :
    vendor{YType::empty, "vendor"},
    version{YType::empty, "version"}
    	,
    dns(std::make_shared<Native::Flow::Record::Collect::Application::Dns>())
	,http(std::make_shared<Native::Flow::Record::Collect::Application::Http>())
	,media(std::make_shared<Native::Flow::Record::Collect::Application::Media>())
	,name(nullptr) // presence node
	,nntp(std::make_shared<Native::Flow::Record::Collect::Application::Nntp>())
	,pop3(std::make_shared<Native::Flow::Record::Collect::Application::Pop3>())
	,rtmp(std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>())
	,rtsp(std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>())
	,sip(std::make_shared<Native::Flow::Record::Collect::Application::Sip>())
	,smtp(std::make_shared<Native::Flow::Record::Collect::Application::Smtp>())
	,ssl(std::make_shared<Native::Flow::Record::Collect::Application::Ssl>())
{
    dns->parent = this;
    http->parent = this;
    media->parent = this;
    nntp->parent = this;
    pop3->parent = this;
    rtmp->parent = this;
    rtsp->parent = this;
    sip->parent = this;
    smtp->parent = this;
    ssl->parent = this;

    yang_name = "application"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::~Application()
{
}

bool Native::Flow::Record::Collect::Application::has_data() const
{
    return vendor.is_set
	|| version.is_set
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (name !=  nullptr && name->has_data())
	|| (nntp !=  nullptr && nntp->has_data())
	|| (pop3 !=  nullptr && pop3->has_data())
	|| (rtmp !=  nullptr && rtmp->has_data())
	|| (rtsp !=  nullptr && rtsp->has_data())
	|| (sip !=  nullptr && sip->has_data())
	|| (smtp !=  nullptr && smtp->has_data())
	|| (ssl !=  nullptr && ssl->has_data());
}

bool Native::Flow::Record::Collect::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (nntp !=  nullptr && nntp->has_operation())
	|| (pop3 !=  nullptr && pop3->has_operation())
	|| (rtmp !=  nullptr && rtmp->has_operation())
	|| (rtsp !=  nullptr && rtsp->has_operation())
	|| (sip !=  nullptr && sip->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation());
}

std::string Native::Flow::Record::Collect::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Flow::Record::Collect::Application::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Flow::Record::Collect::Application::Http>();
        }
        return http;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Flow::Record::Collect::Application::Media>();
        }
        return media;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Flow::Record::Collect::Application::Name>();
        }
        return name;
    }

    if(child_yang_name == "nntp")
    {
        if(nntp == nullptr)
        {
            nntp = std::make_shared<Native::Flow::Record::Collect::Application::Nntp>();
        }
        return nntp;
    }

    if(child_yang_name == "pop3")
    {
        if(pop3 == nullptr)
        {
            pop3 = std::make_shared<Native::Flow::Record::Collect::Application::Pop3>();
        }
        return pop3;
    }

    if(child_yang_name == "rtmp")
    {
        if(rtmp == nullptr)
        {
            rtmp = std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>();
        }
        return rtmp;
    }

    if(child_yang_name == "rtsp")
    {
        if(rtsp == nullptr)
        {
            rtsp = std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>();
        }
        return rtsp;
    }

    if(child_yang_name == "sip")
    {
        if(sip == nullptr)
        {
            sip = std::make_shared<Native::Flow::Record::Collect::Application::Sip>();
        }
        return sip;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Flow::Record::Collect::Application::Smtp>();
        }
        return smtp;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Flow::Record::Collect::Application::Ssl>();
        }
        return ssl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(nntp != nullptr)
    {
        children["nntp"] = nntp;
    }

    if(pop3 != nullptr)
    {
        children["pop3"] = pop3;
    }

    if(rtmp != nullptr)
    {
        children["rtmp"] = rtmp;
    }

    if(rtsp != nullptr)
    {
        children["rtsp"] = rtsp;
    }

    if(sip != nullptr)
    {
        children["sip"] = sip;
    }

    if(smtp != nullptr)
    {
        children["smtp"] = smtp;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns" || name == "http" || name == "media" || name == "name" || name == "nntp" || name == "pop3" || name == "rtmp" || name == "rtsp" || name == "sip" || name == "smtp" || name == "ssl" || name == "vendor" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Dns::Dns()
    :
    domain_name{YType::empty, "domain-name"}
{

    yang_name = "dns"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Dns::~Dns()
{
}

bool Native::Flow::Record::Collect::Application::Dns::has_data() const
{
    return domain_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Http::Http()
    :
    host{YType::empty, "host"},
    referer{YType::empty, "referer"},
    url{YType::empty, "url"},
    user_agent{YType::empty, "user-agent"}
    	,
    uri(std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>())
{
    uri->parent = this;

    yang_name = "http"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Http::~Http()
{
}

bool Native::Flow::Record::Collect::Application::Http::has_data() const
{
    return host.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| (uri !=  nullptr && uri->has_data());
}

bool Native::Flow::Record::Collect::Application::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| (uri !=  nullptr && uri->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uri")
    {
        if(uri == nullptr)
        {
            uri = std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>();
        }
        return uri;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(uri != nullptr)
    {
        children["uri"] = uri;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uri" || name == "host" || name == "referer" || name == "url" || name == "user-agent")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Http::Uri::Uri()
    :
    statistics{YType::empty, "statistics"}
{

    yang_name = "uri"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Http::Uri::~Uri()
{
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_data() const
{
    return statistics.is_set;
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Http::Uri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Http::Uri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Http::Uri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Http::Uri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Http::Uri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Http::Uri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Media()
    :
    event{YType::empty, "event"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "media"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::~Media()
{
}

bool Native::Flow::Record::Collect::Application::Media::has_data() const
{
    return event.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "event")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Bytes()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Packets()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Application::Media::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Application::Media::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

const Enum::YLeaf Native::Platform::Trace::Runtime::Process::iomd {0, "iomd"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Module::all_modules {0, "all-modules"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Level::info {0, "info"};

const Enum::YLeaf Native::Enable::LastResort::password {0, "password"};
const Enum::YLeaf Native::Enable::LastResort::succeed {1, "succeed"};

const Enum::YLeaf Native::Enable::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Enable::Secret::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Secret::Type::Y_4 {1, "4"};
const Enum::YLeaf Native::Enable::Secret::Type::Y_5 {2, "5"};

const Enum::YLeaf Native::Archive::Path::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Archive::Path::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Archive::Path::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Archive::Path::harddisk__COLON__ {3, "harddisk:"};
const Enum::YLeaf Native::Archive::Path::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Archive::Path::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Archive::Path::pram__COLON__ {6, "pram:"};
const Enum::YLeaf Native::Archive::Path::rcp__COLON__ {7, "rcp:"};
const Enum::YLeaf Native::Archive::Path::scp__COLON__ {8, "scp:"};
const Enum::YLeaf Native::Archive::Path::tftp__COLON__ {9, "tftp:"};

const Enum::YLeaf Native::Archive::Log::Config::Notify::Syslog::Contenttype::plaintext {0, "plaintext"};
const Enum::YLeaf Native::Archive::Log::Config::Notify::Syslog::Contenttype::xml {1, "xml"};

const Enum::YLeaf Native::Username::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Username::Secret::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Secret::Encryption::Y_5 {1, "5"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Name::t1 {0, "t1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::e1 {1, "e1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::t3 {2, "t3"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::T1 {3, "T1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::E1 {4, "E1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::T3 {5, "T3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::ami {0, "ami"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::b8zs {1, "b8zs"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::hdb3 {2, "hdb3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Clock_::Source::Line::LineMode::primary {0, "primary"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Clock_::Source::Line::LineMode::secondary {1, "secondary"};

const Enum::YLeaf Native::Controller::SONET::Framing::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::SONET::Framing::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::SONET::Clock_::Source::internal {0, "internal"};
const Enum::YLeaf Native::Controller::SONET::Clock_::Source::line {1, "line"};

const Enum::YLeaf Native::Controller::SONET::Aug::Mapping::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::SONET::Aug::Mapping::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::SONET::Au3::Overhead::Byte::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::SONET::Au4::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONET::Au4::FramingUnframed::Tug2::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONETACR::Framing::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::SONETACR::Framing::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::SONETACR::Clock_::Source::internal {0, "internal"};
const Enum::YLeaf Native::Controller::SONETACR::Clock_::Source::line {1, "line"};

const Enum::YLeaf Native::Controller::SONETACR::Aug::Mapping::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::SONETACR::Aug::Mapping::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::SONETACR::Au3::Overhead::Byte::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference::mldp {0, "mldp"};
const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference::pim {1, "pim"};

const Enum::YLeaf Native::Rmon::Alarm::TestMode::absolute {0, "absolute"};
const Enum::YLeaf Native::Rmon::Alarm::TestMode::delta {1, "delta"};

const Enum::YLeaf Native::Flow::Record::Type::performance_monitor {0, "performance-monitor"};


}
}

