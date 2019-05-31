
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_122.hpp"
#include "Cisco_IOS_XE_native_123.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::HalfOpenSessions()
    :
    number{YType::uint32, "number"}
        ,
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging>())
{
    aggressive_aging->parent = this;

    yang_name = "half-open-sessions"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::~HalfOpenSessions()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/max-incomplete/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging>();
        }
        return aggressive_aging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "number")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "half-open-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/max-incomplete/half-open-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "per-box"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/per-box/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::PerBox::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::Session()
    :
    packet{YType::uint8, "packet"},
    total{YType::uint32, "total"}
{

    yang_name = "session"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::~Session()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::has_data() const
{
    if (is_presence_container) return true;
    return packet.is_set
	|| total.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet" || name == "total")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::Vrf()
    :
    id{YType::str, "id"},
    inspect{YType::str, "inspect"}
{

    yang_name = "vrf"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| inspect.is_set;
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global-deprecate/inspect/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobalDeprecate::Inspect::Global::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "inspect")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::InspectGlobal()
    :
    icmp_unreachable_allow{YType::empty, "icmp-unreachable-allow"},
    multi_tenancy{YType::empty, "multi-tenancy"}
        ,
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobal::AggressiveAging>())
    , alert(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Alert>())
    , inspect(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Inspect>())
    , lisp(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Lisp>())
    , log(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp>())
    , zone_mismatch(std::make_shared<Native::ParameterMap::Type::InspectGlobal::ZoneMismatch>())
{
    aggressive_aging->parent = this;
    alert->parent = this;
    inspect->parent = this;
    lisp->parent = this;
    log->parent = this;
    max_incomplete->parent = this;
    tcp->parent = this;
    zone_mismatch->parent = this;

    yang_name = "inspect-global"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::InspectGlobal::~InspectGlobal()
{
}

bool Native::ParameterMap::Type::InspectGlobal::has_data() const
{
    if (is_presence_container) return true;
    return icmp_unreachable_allow.is_set
	|| multi_tenancy.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data())
	|| (alert !=  nullptr && alert->has_data())
	|| (inspect !=  nullptr && inspect->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (zone_mismatch !=  nullptr && zone_mismatch->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp_unreachable_allow.yfilter)
	|| ydk::is_set(multi_tenancy.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation())
	|| (alert !=  nullptr && alert->has_operation())
	|| (inspect !=  nullptr && inspect->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (zone_mismatch !=  nullptr && zone_mismatch->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp_unreachable_allow.is_set || is_set(icmp_unreachable_allow.yfilter)) leaf_name_data.push_back(icmp_unreachable_allow.get_name_leafdata());
    if (multi_tenancy.is_set || is_set(multi_tenancy.yfilter)) leaf_name_data.push_back(multi_tenancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobal::AggressiveAging>();
        }
        return aggressive_aging;
    }

    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "inspect")
    {
        if(inspect == nullptr)
        {
            inspect = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Inspect>();
        }
        return inspect;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log>();
        }
        return log;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "zone-mismatch")
    {
        if(zone_mismatch == nullptr)
        {
            zone_mismatch = std::make_shared<Native::ParameterMap::Type::InspectGlobal::ZoneMismatch>();
        }
        return zone_mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(inspect != nullptr)
    {
        _children["inspect"] = inspect;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(zone_mismatch != nullptr)
    {
        _children["zone-mismatch"] = zone_mismatch;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp-unreachable-allow")
    {
        icmp_unreachable_allow = value;
        icmp_unreachable_allow.value_namespace = name_space;
        icmp_unreachable_allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-tenancy")
    {
        multi_tenancy = value;
        multi_tenancy.value_namespace = name_space;
        multi_tenancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp-unreachable-allow")
    {
        icmp_unreachable_allow.yfilter = yfilter;
    }
    if(value_path == "multi-tenancy")
    {
        multi_tenancy.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "alert" || name == "inspect" || name == "lisp" || name == "log" || name == "max-incomplete" || name == "tcp" || name == "zone-mismatch" || name == "icmp-unreachable-allow" || name == "multi-tenancy")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobal::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Alert::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Inspect::Inspect()
    :
    name{YType::str, "name"}
        ,
    vrf(this, {"id"})
{

    yang_name = "inspect"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Inspect::~Inspect()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Inspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Inspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Inspect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::Vrf()
    :
    id{YType::str, "id"},
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "inspect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/inspect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Inspect::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Lisp::Lisp()
    :
    inner_packet_inspection{YType::empty, "inner-packet-inspection"}
{

    yang_name = "lisp"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Lisp::~Lisp()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return inner_packet_inspection.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_packet_inspection.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Lisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_packet_inspection.is_set || is_set(inner_packet_inspection.yfilter)) leaf_name_data.push_back(inner_packet_inspection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection = value;
        inner_packet_inspection.value_namespace = name_space;
        inner_packet_inspection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-packet-inspection")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
        ,
    flow_export(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "log"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::~Log()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::has_data() const
{
    if (is_presence_container) return true;
    return dropped_packets.is_set
	|| (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_export != nullptr)
    {
        _children["flow-export"] = flow_export;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export" || name == "dropped-packets")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::FlowExport()
    :
    template_(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template>())
    , v9(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9>())
{
    template_->parent = this;
    v9->parent = this;

    yang_name = "flow-export"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::~FlowExport()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::has_data() const
{
    if (is_presence_container) return true;
    return (template_ !=  nullptr && template_->has_data())
	|| (v9 !=  nullptr && v9->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (v9 !=  nullptr && v9->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template>();
        }
        return template_;
    }

    if(child_yang_name == "v9")
    {
        if(v9 == nullptr)
        {
            v9 = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9>();
        }
        return v9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    if(v9 != nullptr)
    {
        _children["v9"] = v9;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "v9")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::Template()
    :
    timeout_rate{YType::uint32, "timeout-rate"}
{

    yang_name = "template"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::~Template()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::has_data() const
{
    if (is_presence_container) return true;
    return timeout_rate.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_rate.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_rate.is_set || is_set(timeout_rate.yfilter)) leaf_name_data.push_back(timeout_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate = value;
        timeout_rate.value_namespace = name_space;
        timeout_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-rate")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::V9()
    :
    udp(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp>())
{
    udp->parent = this;

    yang_name = "v9"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::~V9()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Udp()
    :
    destination(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination>())
{
    destination->parent = this;

    yang_name = "udp"; yang_parent_name = "v9"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::~Udp()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/v9/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::Destination()
    :
    dst_ip{YType::str, "dst-ip"},
    dst_port{YType::uint16, "dst-port"}
{

    yang_name = "destination"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::~Destination()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::has_data() const
{
    if (is_presence_container) return true;
    return dst_ip.is_set
	|| dst_port.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(dst_port.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/log/flow-export/v9/udp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (dst_port.is_set || is_set(dst_port.yfilter)) leaf_name_data.push_back(dst_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-port")
    {
        dst_port = value;
        dst_port.value_namespace = name_space;
        dst_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "dst-port")
    {
        dst_port.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Log::FlowExport::V9::Udp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "dst-port")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::MaxIncomplete()
    :
    icmp{YType::uint32, "icmp"},
    tcp{YType::uint32, "tcp"},
    udp{YType::uint32, "udp"}
        ,
    half_open_sessions(std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions>())
{
    half_open_sessions->parent = this;

    yang_name = "max-incomplete"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return icmp.is_set
	|| tcp.is_set
	|| udp.is_set
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp.yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp.is_set || is_set(icmp.yfilter)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "half-open-sessions")
    {
        if(half_open_sessions == nullptr)
        {
            half_open_sessions = std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions>();
        }
        return half_open_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(half_open_sessions != nullptr)
    {
        _children["half-open-sessions"] = half_open_sessions;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp")
    {
        icmp = value;
        icmp.value_namespace = name_space;
        icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp")
    {
        icmp.yfilter = yfilter;
    }
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-open-sessions" || name == "icmp" || name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::HalfOpenSessions()
    :
    number{YType::uint32, "number"}
        ,
    aggressive_aging(std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging>())
{
    aggressive_aging->parent = this;

    yang_name = "half-open-sessions"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::~HalfOpenSessions()
{
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/max-incomplete/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging>();
        }
        return aggressive_aging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggressive_aging != nullptr)
    {
        _children["aggressive-aging"] = aggressive_aging;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "number")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::AggressiveAging()
    :
    high{YType::uint64, "high"},
    low{YType::uint64, "low"},
    high_percent{YType::uint8, "high-percent"},
    low_percent{YType::uint8, "low-percent"}
{

    yang_name = "aggressive-aging"; yang_parent_name = "half-open-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_data() const
{
    if (is_presence_container) return true;
    return high.is_set
	|| low.is_set
	|| high_percent.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high_percent.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/max-incomplete/half-open-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high_percent.is_set || is_set(high_percent.yfilter)) leaf_name_data.push_back(high_percent.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-percent")
    {
        high_percent = value;
        high_percent.value_namespace = name_space;
        high_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high-percent")
    {
        high_percent.yfilter = yfilter;
    }
    if(value_path == "low-percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::MaxIncomplete::HalfOpenSessions::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low" || name == "high-percent" || name == "low-percent")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood>())
    , window_scale_enforcement(std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement>())
{
    syn_flood->parent = this;
    window_scale_enforcement->parent = this;

    yang_name = "tcp"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data())
	|| (window_scale_enforcement !=  nullptr && window_scale_enforcement->has_data());
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation())
	|| (window_scale_enforcement !=  nullptr && window_scale_enforcement->has_operation());
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    if(child_yang_name == "window-scale-enforcement")
    {
        if(window_scale_enforcement == nullptr)
        {
            window_scale_enforcement = std::make_shared<Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement>();
        }
        return window_scale_enforcement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    if(window_scale_enforcement != nullptr)
    {
        _children["window-scale-enforcement"] = window_scale_enforcement;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood" || name == "window-scale-enforcement")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::WindowScaleEnforcement()
    :
    loose{YType::empty, "loose"}
{

    yang_name = "window-scale-enforcement"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::~WindowScaleEnforcement()
{
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::has_data() const
{
    if (is_presence_container) return true;
    return loose.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loose.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-scale-enforcement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loose.is_set || is_set(loose.yfilter)) leaf_name_data.push_back(loose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loose")
    {
        loose = value;
        loose.value_namespace = name_space;
        loose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loose")
    {
        loose.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::Tcp::WindowScaleEnforcement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::ZoneMismatch()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "zone-mismatch"; yang_parent_name = "inspect-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::~ZoneMismatch()
{
}

bool Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::has_data() const
{
    if (is_presence_container) return true;
    return drop.is_set;
}

bool Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:inspect-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectGlobal::ZoneMismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::InspectVrf()
    :
    name{YType::str, "name"}
        ,
    alert(std::make_shared<Native::ParameterMap::Type::InspectVrf::Alert>())
    , max_incomplete(std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete>())
    , session(std::make_shared<Native::ParameterMap::Type::InspectVrf::Session>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp>())
{
    alert->parent = this;
    max_incomplete->parent = this;
    session->parent = this;
    tcp->parent = this;

    yang_name = "inspect-vrf"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectVrf::~InspectVrf()
{
}

bool Native::ParameterMap::Type::InspectVrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (alert !=  nullptr && alert->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::Type::InspectVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (alert !=  nullptr && alert->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::Type::InspectVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect-vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::InspectVrf::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::ParameterMap::Type::InspectVrf::Session>();
        }
        return session;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(max_incomplete != nullptr)
    {
        _children["max-incomplete"] = max_incomplete;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert" || name == "max-incomplete" || name == "session" || name == "tcp" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::InspectVrf::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::MaxIncomplete()
    :
    icmp{YType::uint32, "icmp"},
    tcp{YType::uint32, "tcp"},
    udp{YType::uint32, "udp"}
        ,
    half_open_sessions(std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions>())
{
    half_open_sessions->parent = this;

    yang_name = "max-incomplete"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::has_data() const
{
    if (is_presence_container) return true;
    return icmp.is_set
	|| tcp.is_set
	|| udp.is_set
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_data());
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp.yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (half_open_sessions !=  nullptr && half_open_sessions->has_operation());
}

std::string Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp.is_set || is_set(icmp.yfilter)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "half-open-sessions")
    {
        if(half_open_sessions == nullptr)
        {
            half_open_sessions = std::make_shared<Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions>();
        }
        return half_open_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(half_open_sessions != nullptr)
    {
        _children["half-open-sessions"] = half_open_sessions;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp")
    {
        icmp = value;
        icmp.value_namespace = name_space;
        icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp")
    {
        icmp.yfilter = yfilter;
    }
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-open-sessions" || name == "icmp" || name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::HalfOpenSessions()
    :
    number{YType::uint32, "number"}
{

    yang_name = "half-open-sessions"; yang_parent_name = "max-incomplete"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::~HalfOpenSessions()
{
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "half-open-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::MaxIncomplete::HalfOpenSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Session::Session()
    :
    total{YType::uint32, "total"}
{

    yang_name = "session"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Session::~Session()
{
}

bool Native::ParameterMap::Type::InspectVrf::Session::has_data() const
{
    if (is_presence_container) return true;
    return total.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "inspect-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectVrf::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectVrf::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::SynFlood()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set;
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectVrf::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::InspectZone()
    :
    name{YType::str, "name"},
    max_destination{YType::uint32, "max-destination"}
        ,
    alert(std::make_shared<Native::ParameterMap::Type::InspectZone::Alert>())
    , tcp(std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp>())
    , threat_detection(std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection>())
{
    alert->parent = this;
    tcp->parent = this;
    threat_detection->parent = this;

    yang_name = "inspect-zone"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::InspectZone::~InspectZone()
{
}

bool Native::ParameterMap::Type::InspectZone::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| max_destination.is_set
	|| (alert !=  nullptr && alert->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (threat_detection !=  nullptr && threat_detection->has_data());
}

bool Native::ParameterMap::Type::InspectZone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(max_destination.yfilter)
	|| (alert !=  nullptr && alert->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (threat_detection !=  nullptr && threat_detection->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::InspectZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:inspect-zone";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (max_destination.is_set || is_set(max_destination.yfilter)) leaf_name_data.push_back(max_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alert")
    {
        if(alert == nullptr)
        {
            alert = std::make_shared<Native::ParameterMap::Type::InspectZone::Alert>();
        }
        return alert;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "threat-detection")
    {
        if(threat_detection == nullptr)
        {
            threat_detection = std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection>();
        }
        return threat_detection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alert != nullptr)
    {
        _children["alert"] = alert;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(threat_detection != nullptr)
    {
        _children["threat-detection"] = threat_detection;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-destination")
    {
        max_destination = value;
        max_destination.value_namespace = name_space;
        max_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "max-destination")
    {
        max_destination.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alert" || name == "tcp" || name == "threat-detection" || name == "name" || name == "max-destination")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Alert::Alert()
    :
    on{YType::empty, "on"}
{

    yang_name = "alert"; yang_parent_name = "inspect-zone"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Alert::~Alert()
{
}

bool Native::ParameterMap::Type::InspectZone::Alert::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set;
}

bool Native::ParameterMap::Type::InspectZone::Alert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter);
}

std::string Native::ParameterMap::Type::InspectZone::Alert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Alert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Alert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Alert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectZone::Alert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::Alert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::Alert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "inspect-zone"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Tcp::~Tcp()
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::Type::InspectZone::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syn_flood != nullptr)
    {
        _children["syn-flood"] = syn_flood;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectZone::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::SynFlood()
    :
    rate(std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate>())
{
    rate->parent = this;

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::has_data() const
{
    if (is_presence_container) return true;
    return (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::Rate()
    :
    per_destination{YType::uint32, "per-destination"}
{

    yang_name = "rate"; yang_parent_name = "syn-flood"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::~Rate()
{
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::has_data() const
{
    if (is_presence_container) return true;
    return per_destination.is_set;
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_destination.yfilter);
}

std::string Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_destination.is_set || is_set(per_destination.yfilter)) leaf_name_data.push_back(per_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-destination")
    {
        per_destination = value;
        per_destination.value_namespace = name_space;
        per_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-destination")
    {
        per_destination.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::Tcp::SynFlood::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-destination")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::ThreatDetection()
    :
    basic_threat{YType::empty, "basic-threat"}
        ,
    rate(std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate>())
{
    rate->parent = this;

    yang_name = "threat-detection"; yang_parent_name = "inspect-zone"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::~ThreatDetection()
{
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::has_data() const
{
    if (is_presence_container) return true;
    return basic_threat.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(basic_threat.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::ThreatDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::ThreatDetection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic_threat.is_set || is_set(basic_threat.yfilter)) leaf_name_data.push_back(basic_threat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::ThreatDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::ThreatDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basic-threat")
    {
        basic_threat = value;
        basic_threat.value_namespace = name_space;
        basic_threat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basic-threat")
    {
        basic_threat.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "basic-threat")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::Rate()
    :
    fw_drop(std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop>())
    , inspect_drop(std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop>())
    , syn_attack(std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack>())
{
    fw_drop->parent = this;
    inspect_drop->parent = this;
    syn_attack->parent = this;

    yang_name = "rate"; yang_parent_name = "threat-detection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::~Rate()
{
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (fw_drop !=  nullptr && fw_drop->has_data())
	|| (inspect_drop !=  nullptr && inspect_drop->has_data())
	|| (syn_attack !=  nullptr && syn_attack->has_data());
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (fw_drop !=  nullptr && fw_drop->has_operation())
	|| (inspect_drop !=  nullptr && inspect_drop->has_operation())
	|| (syn_attack !=  nullptr && syn_attack->has_operation());
}

std::string Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-drop")
    {
        if(fw_drop == nullptr)
        {
            fw_drop = std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop>();
        }
        return fw_drop;
    }

    if(child_yang_name == "inspect-drop")
    {
        if(inspect_drop == nullptr)
        {
            inspect_drop = std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop>();
        }
        return inspect_drop;
    }

    if(child_yang_name == "syn-attack")
    {
        if(syn_attack == nullptr)
        {
            syn_attack = std::make_shared<Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack>();
        }
        return syn_attack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fw_drop != nullptr)
    {
        _children["fw-drop"] = fw_drop;
    }

    if(inspect_drop != nullptr)
    {
        _children["inspect-drop"] = inspect_drop;
    }

    if(syn_attack != nullptr)
    {
        _children["syn-attack"] = syn_attack;
    }

    return _children;
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fw-drop" || name == "inspect-drop" || name == "syn-attack")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::FwDrop()
    :
    average_time_frame{YType::uint16, "average-time-frame"},
    average_threshold{YType::uint32, "average-threshold"},
    burst_threshold{YType::uint32, "burst-threshold"}
{

    yang_name = "fw-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::~FwDrop()
{
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::has_data() const
{
    if (is_presence_container) return true;
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::FwDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::InspectDrop()
    :
    average_time_frame{YType::uint16, "average-time-frame"},
    average_threshold{YType::uint32, "average-threshold"},
    burst_threshold{YType::uint32, "burst-threshold"}
{

    yang_name = "inspect-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::~InspectDrop()
{
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::has_data() const
{
    if (is_presence_container) return true;
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::InspectDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::SynAttack()
    :
    average_time_frame{YType::uint16, "average-time-frame"},
    average_threshold{YType::uint32, "average-threshold"},
    burst_threshold{YType::uint32, "burst-threshold"}
{

    yang_name = "syn-attack"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::~SynAttack()
{
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::has_data() const
{
    if (is_presence_container) return true;
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-attack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::InspectZone::ThreatDetection::Rate::SynAttack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::Type::Regex::Regex()
    :
    name{YType::str, "name"}
        ,
    pattern(this, {"regexp"})
{

    yang_name = "regex"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::Regex::~Regex()
{
}

bool Native::ParameterMap::Type::Regex::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pattern.len(); index++)
    {
        if(pattern[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::ParameterMap::Type::Regex::has_operation() const
{
    for (std::size_t index=0; index<pattern.len(); index++)
    {
        if(pattern[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Type::Regex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Regex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:regex";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Regex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Regex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pattern")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::Regex::Pattern>();
        ent_->parent = this;
        pattern.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Regex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pattern.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ParameterMap::Type::Regex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Regex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Regex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pattern" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Type::Regex::Pattern::Pattern()
    :
    regexp{YType::str, "regexp"}
{

    yang_name = "pattern"; yang_parent_name = "regex"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Regex::Pattern::~Pattern()
{
}

bool Native::ParameterMap::Type::Regex::Pattern::has_data() const
{
    if (is_presence_container) return true;
    return regexp.is_set;
}

bool Native::ParameterMap::Type::Regex::Pattern::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regexp.yfilter);
}

std::string Native::ParameterMap::Type::Regex::Pattern::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pattern";
    ADD_KEY_TOKEN(regexp, "regexp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Regex::Pattern::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regexp.is_set || is_set(regexp.yfilter)) leaf_name_data.push_back(regexp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Regex::Pattern::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Regex::Pattern::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Regex::Pattern::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regexp")
    {
        regexp = value;
        regexp.value_namespace = name_space;
        regexp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Regex::Pattern::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regexp")
    {
        regexp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Regex::Pattern::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regexp")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Webauth()
    :
    name{YType::str, "name"},
    captive_bypass_portal{YType::empty, "captive-bypass-portal"},
    logout_window_disabled{YType::empty, "logout-window-disabled"},
    max_http_conns{YType::uint8, "max-http-conns"},
    success_window_disable{YType::empty, "success-window-disable"},
    type{YType::enumeration, "type"}
        ,
    consent(std::make_shared<Native::ParameterMap::Type::Webauth::Consent>())
    , custom_page(std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage>())
    , login_auth_bypass(std::make_shared<Native::ParameterMap::Type::Webauth::LoginAuthBypass>())
    , redirect(std::make_shared<Native::ParameterMap::Type::Webauth::Redirect>())
    , sleeping_client(std::make_shared<Native::ParameterMap::Type::Webauth::SleepingClient>())
    , timeout(std::make_shared<Native::ParameterMap::Type::Webauth::Timeout>())
{
    consent->parent = this;
    custom_page->parent = this;
    login_auth_bypass->parent = this;
    redirect->parent = this;
    sleeping_client->parent = this;
    timeout->parent = this;

    yang_name = "webauth"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::Webauth::~Webauth()
{
}

bool Native::ParameterMap::Type::Webauth::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| captive_bypass_portal.is_set
	|| logout_window_disabled.is_set
	|| max_http_conns.is_set
	|| success_window_disable.is_set
	|| type.is_set
	|| (consent !=  nullptr && consent->has_data())
	|| (custom_page !=  nullptr && custom_page->has_data())
	|| (login_auth_bypass !=  nullptr && login_auth_bypass->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (sleeping_client !=  nullptr && sleeping_client->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::ParameterMap::Type::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(captive_bypass_portal.yfilter)
	|| ydk::is_set(logout_window_disabled.yfilter)
	|| ydk::is_set(max_http_conns.yfilter)
	|| ydk::is_set(success_window_disable.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (consent !=  nullptr && consent->has_operation())
	|| (custom_page !=  nullptr && custom_page->has_operation())
	|| (login_auth_bypass !=  nullptr && login_auth_bypass->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (sleeping_client !=  nullptr && sleeping_client->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::ParameterMap::Type::Webauth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:webauth";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (captive_bypass_portal.is_set || is_set(captive_bypass_portal.yfilter)) leaf_name_data.push_back(captive_bypass_portal.get_name_leafdata());
    if (logout_window_disabled.is_set || is_set(logout_window_disabled.yfilter)) leaf_name_data.push_back(logout_window_disabled.get_name_leafdata());
    if (max_http_conns.is_set || is_set(max_http_conns.yfilter)) leaf_name_data.push_back(max_http_conns.get_name_leafdata());
    if (success_window_disable.is_set || is_set(success_window_disable.yfilter)) leaf_name_data.push_back(success_window_disable.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consent")
    {
        if(consent == nullptr)
        {
            consent = std::make_shared<Native::ParameterMap::Type::Webauth::Consent>();
        }
        return consent;
    }

    if(child_yang_name == "custom-page")
    {
        if(custom_page == nullptr)
        {
            custom_page = std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage>();
        }
        return custom_page;
    }

    if(child_yang_name == "login-auth-bypass")
    {
        if(login_auth_bypass == nullptr)
        {
            login_auth_bypass = std::make_shared<Native::ParameterMap::Type::Webauth::LoginAuthBypass>();
        }
        return login_auth_bypass;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::ParameterMap::Type::Webauth::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "sleeping-client")
    {
        if(sleeping_client == nullptr)
        {
            sleeping_client = std::make_shared<Native::ParameterMap::Type::Webauth::SleepingClient>();
        }
        return sleeping_client;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::ParameterMap::Type::Webauth::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(consent != nullptr)
    {
        _children["consent"] = consent;
    }

    if(custom_page != nullptr)
    {
        _children["custom-page"] = custom_page;
    }

    if(login_auth_bypass != nullptr)
    {
        _children["login-auth-bypass"] = login_auth_bypass;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(sleeping_client != nullptr)
    {
        _children["sleeping-client"] = sleeping_client;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void Native::ParameterMap::Type::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captive-bypass-portal")
    {
        captive_bypass_portal = value;
        captive_bypass_portal.value_namespace = name_space;
        captive_bypass_portal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logout-window-disabled")
    {
        logout_window_disabled = value;
        logout_window_disabled.value_namespace = name_space;
        logout_window_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-http-conns")
    {
        max_http_conns = value;
        max_http_conns.value_namespace = name_space;
        max_http_conns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-window-disable")
    {
        success_window_disable = value;
        success_window_disable.value_namespace = name_space;
        success_window_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "captive-bypass-portal")
    {
        captive_bypass_portal.yfilter = yfilter;
    }
    if(value_path == "logout-window-disabled")
    {
        logout_window_disabled.yfilter = yfilter;
    }
    if(value_path == "max-http-conns")
    {
        max_http_conns.yfilter = yfilter;
    }
    if(value_path == "success-window-disable")
    {
        success_window_disable.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consent" || name == "custom-page" || name == "login-auth-bypass" || name == "redirect" || name == "sleeping-client" || name == "timeout" || name == "name" || name == "captive-bypass-portal" || name == "logout-window-disabled" || name == "max-http-conns" || name == "success-window-disable" || name == "type")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Consent::Consent()
    :
    email{YType::empty, "email"}
{

    yang_name = "consent"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Consent::~Consent()
{
}

bool Native::ParameterMap::Type::Webauth::Consent::has_data() const
{
    if (is_presence_container) return true;
    return email.is_set;
}

bool Native::ParameterMap::Type::Webauth::Consent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(email.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::Consent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Consent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Consent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Consent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::Consent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Consent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Consent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "email")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::CustomPage::CustomPage()
    :
    login(std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Login>())
    , failure(std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Failure>())
    , success(std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Success>())
{
    login->parent = this;
    failure->parent = this;
    success->parent = this;

    yang_name = "custom-page"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::CustomPage::~CustomPage()
{
}

bool Native::ParameterMap::Type::Webauth::CustomPage::has_data() const
{
    if (is_presence_container) return true;
    return (login !=  nullptr && login->has_data())
	|| (failure !=  nullptr && failure->has_data())
	|| (success !=  nullptr && success->has_data());
}

bool Native::ParameterMap::Type::Webauth::CustomPage::has_operation() const
{
    return is_set(yfilter)
	|| (login !=  nullptr && login->has_operation())
	|| (failure !=  nullptr && failure->has_operation())
	|| (success !=  nullptr && success->has_operation());
}

std::string Native::ParameterMap::Type::Webauth::CustomPage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom-page";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::CustomPage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::CustomPage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Login>();
        }
        return login;
    }

    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "success")
    {
        if(success == nullptr)
        {
            success = std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Success>();
        }
        return success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::CustomPage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(login != nullptr)
    {
        _children["login"] = login;
    }

    if(failure != nullptr)
    {
        _children["failure"] = failure;
    }

    if(success != nullptr)
    {
        _children["success"] = success;
    }

    return _children;
}

void Native::ParameterMap::Type::Webauth::CustomPage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Webauth::CustomPage::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Webauth::CustomPage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login" || name == "failure" || name == "success")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::CustomPage::Login::Login()
    :
    device{YType::str, "device"}
        ,
    expired(std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired>())
{
    expired->parent = this;

    yang_name = "login"; yang_parent_name = "custom-page"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::CustomPage::Login::~Login()
{
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Login::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set
	|| (expired !=  nullptr && expired->has_data());
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter)
	|| (expired !=  nullptr && expired->has_operation());
}

std::string Native::ParameterMap::Type::Webauth::CustomPage::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::CustomPage::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::CustomPage::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expired")
    {
        if(expired == nullptr)
        {
            expired = std::make_shared<Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired>();
        }
        return expired;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::CustomPage::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expired != nullptr)
    {
        _children["expired"] = expired;
    }

    return _children;
}

void Native::ParameterMap::Type::Webauth::CustomPage::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::CustomPage::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expired" || name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::Expired()
    :
    device{YType::str, "device"}
{

    yang_name = "expired"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::~Expired()
{
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expired";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Login::Expired::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::CustomPage::Failure::Failure()
    :
    device{YType::str, "device"}
{

    yang_name = "failure"; yang_parent_name = "custom-page"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::CustomPage::Failure::~Failure()
{
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Failure::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::CustomPage::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::CustomPage::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::CustomPage::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::CustomPage::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::CustomPage::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::CustomPage::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::CustomPage::Success::Success()
    :
    device{YType::str, "device"}
{

    yang_name = "success"; yang_parent_name = "custom-page"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::CustomPage::Success::~Success()
{
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Success::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Success::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::CustomPage::Success::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::CustomPage::Success::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::CustomPage::Success::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::CustomPage::Success::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::CustomPage::Success::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::CustomPage::Success::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::CustomPage::Success::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::LoginAuthBypass::LoginAuthBypass()
    :
    ip_access_list(std::make_shared<Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList>())
{
    ip_access_list->parent = this;

    yang_name = "login-auth-bypass"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::LoginAuthBypass::~LoginAuthBypass()
{
}

bool Native::ParameterMap::Type::Webauth::LoginAuthBypass::has_data() const
{
    if (is_presence_container) return true;
    return (ip_access_list !=  nullptr && ip_access_list->has_data());
}

bool Native::ParameterMap::Type::Webauth::LoginAuthBypass::has_operation() const
{
    return is_set(yfilter)
	|| (ip_access_list !=  nullptr && ip_access_list->has_operation());
}

std::string Native::ParameterMap::Type::Webauth::LoginAuthBypass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login-auth-bypass";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::LoginAuthBypass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::LoginAuthBypass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-access-list")
    {
        if(ip_access_list == nullptr)
        {
            ip_access_list = std::make_shared<Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList>();
        }
        return ip_access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::LoginAuthBypass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_access_list != nullptr)
    {
        _children["ip-access-list"] = ip_access_list;
    }

    return _children;
}

void Native::ParameterMap::Type::Webauth::LoginAuthBypass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Webauth::LoginAuthBypass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Webauth::LoginAuthBypass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-access-list")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::IpAccessList()
    :
    name{YType::str, "name"},
    domain_name_list{YType::str, "domain-name-list"}
{

    yang_name = "ip-access-list"; yang_parent_name = "login-auth-bypass"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::~IpAccessList()
{
}

bool Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| domain_name_list.is_set;
}

bool Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain_name_list.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain_name_list.is_set || is_set(domain_name_list.yfilter)) leaf_name_data.push_back(domain_name_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name-list")
    {
        domain_name_list = value;
        domain_name_list.value_namespace = name_space;
        domain_name_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain-name-list")
    {
        domain_name_list.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::LoginAuthBypass::IpAccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain-name-list")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Redirect::Redirect()
    :
    for_login{YType::str, "for-login"},
    on_failure{YType::str, "on-failure"},
    on_success{YType::str, "on-success"}
        ,
    append(std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append>())
    , portal(std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Portal>())
{
    append->parent = this;
    portal->parent = this;

    yang_name = "redirect"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Redirect::~Redirect()
{
}

bool Native::ParameterMap::Type::Webauth::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return for_login.is_set
	|| on_failure.is_set
	|| on_success.is_set
	|| (append !=  nullptr && append->has_data())
	|| (portal !=  nullptr && portal->has_data());
}

bool Native::ParameterMap::Type::Webauth::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_login.yfilter)
	|| ydk::is_set(on_failure.yfilter)
	|| ydk::is_set(on_success.yfilter)
	|| (append !=  nullptr && append->has_operation())
	|| (portal !=  nullptr && portal->has_operation());
}

std::string Native::ParameterMap::Type::Webauth::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_login.is_set || is_set(for_login.yfilter)) leaf_name_data.push_back(for_login.get_name_leafdata());
    if (on_failure.is_set || is_set(on_failure.yfilter)) leaf_name_data.push_back(on_failure.get_name_leafdata());
    if (on_success.is_set || is_set(on_success.yfilter)) leaf_name_data.push_back(on_success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "append")
    {
        if(append == nullptr)
        {
            append = std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append>();
        }
        return append;
    }

    if(child_yang_name == "portal")
    {
        if(portal == nullptr)
        {
            portal = std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Portal>();
        }
        return portal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(append != nullptr)
    {
        _children["append"] = append;
    }

    if(portal != nullptr)
    {
        _children["portal"] = portal;
    }

    return _children;
}

void Native::ParameterMap::Type::Webauth::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for-login")
    {
        for_login = value;
        for_login.value_namespace = name_space;
        for_login.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-failure")
    {
        on_failure = value;
        on_failure.value_namespace = name_space;
        on_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-success")
    {
        on_success = value;
        on_success.value_namespace = name_space;
        on_success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for-login")
    {
        for_login.yfilter = yfilter;
    }
    if(value_path == "on-failure")
    {
        on_failure.yfilter = yfilter;
    }
    if(value_path == "on-success")
    {
        on_success.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "append" || name == "portal" || name == "for-login" || name == "on-failure" || name == "on-success")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Redirect::Append::Append()
    :
    ap_mac(std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac>())
    , client_mac(std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac>())
    , wlan_ssid(std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid>())
{
    ap_mac->parent = this;
    client_mac->parent = this;
    wlan_ssid->parent = this;

    yang_name = "append"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Redirect::Append::~Append()
{
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::has_data() const
{
    if (is_presence_container) return true;
    return (ap_mac !=  nullptr && ap_mac->has_data())
	|| (client_mac !=  nullptr && client_mac->has_data())
	|| (wlan_ssid !=  nullptr && wlan_ssid->has_data());
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::has_operation() const
{
    return is_set(yfilter)
	|| (ap_mac !=  nullptr && ap_mac->has_operation())
	|| (client_mac !=  nullptr && client_mac->has_operation())
	|| (wlan_ssid !=  nullptr && wlan_ssid->has_operation());
}

std::string Native::ParameterMap::Type::Webauth::Redirect::Append::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Redirect::Append::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Redirect::Append::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ap-mac")
    {
        if(ap_mac == nullptr)
        {
            ap_mac = std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac>();
        }
        return ap_mac;
    }

    if(child_yang_name == "client-mac")
    {
        if(client_mac == nullptr)
        {
            client_mac = std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac>();
        }
        return client_mac;
    }

    if(child_yang_name == "wlan-ssid")
    {
        if(wlan_ssid == nullptr)
        {
            wlan_ssid = std::make_shared<Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid>();
        }
        return wlan_ssid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Redirect::Append::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ap_mac != nullptr)
    {
        _children["ap-mac"] = ap_mac;
    }

    if(client_mac != nullptr)
    {
        _children["client-mac"] = client_mac;
    }

    if(wlan_ssid != nullptr)
    {
        _children["wlan-ssid"] = wlan_ssid;
    }

    return _children;
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ap-mac" || name == "client-mac" || name == "wlan-ssid")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::ApMac()
    :
    tag{YType::str, "tag"}
{

    yang_name = "ap-mac"; yang_parent_name = "append"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::~ApMac()
{
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ap-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::ApMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::ClientMac()
    :
    tag{YType::str, "tag"}
{

    yang_name = "client-mac"; yang_parent_name = "append"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::~ClientMac()
{
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::ClientMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::WlanSsid()
    :
    tag{YType::str, "tag"}
{

    yang_name = "wlan-ssid"; yang_parent_name = "append"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::~WlanSsid()
{
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wlan-ssid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Redirect::Append::WlanSsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Redirect::Portal::Portal()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "portal"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Redirect::Portal::~Portal()
{
}

bool Native::ParameterMap::Type::Webauth::Redirect::Portal::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::ParameterMap::Type::Webauth::Redirect::Portal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::Redirect::Portal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Redirect::Portal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Redirect::Portal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Redirect::Portal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::Redirect::Portal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Redirect::Portal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Redirect::Portal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::SleepingClient::SleepingClient()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "sleeping-client"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::SleepingClient::~SleepingClient()
{
}

bool Native::ParameterMap::Type::Webauth::SleepingClient::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::ParameterMap::Type::Webauth::SleepingClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::SleepingClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sleeping-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::SleepingClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::SleepingClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::SleepingClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::SleepingClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::SleepingClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::SleepingClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Timeout::Timeout()
    :
    init_state(nullptr) // presence node
    , fin_wait(std::make_shared<Native::ParameterMap::Type::Webauth::Timeout::FinWait>())
{
    fin_wait->parent = this;

    yang_name = "timeout"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Timeout::~Timeout()
{
}

bool Native::ParameterMap::Type::Webauth::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return (init_state !=  nullptr && init_state->has_data())
	|| (fin_wait !=  nullptr && fin_wait->has_data());
}

bool Native::ParameterMap::Type::Webauth::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (init_state !=  nullptr && init_state->has_operation())
	|| (fin_wait !=  nullptr && fin_wait->has_operation());
}

std::string Native::ParameterMap::Type::Webauth::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-state")
    {
        if(init_state == nullptr)
        {
            init_state = std::make_shared<Native::ParameterMap::Type::Webauth::Timeout::InitState>();
        }
        return init_state;
    }

    if(child_yang_name == "fin-wait")
    {
        if(fin_wait == nullptr)
        {
            fin_wait = std::make_shared<Native::ParameterMap::Type::Webauth::Timeout::FinWait>();
        }
        return fin_wait;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(init_state != nullptr)
    {
        _children["init-state"] = init_state;
    }

    if(fin_wait != nullptr)
    {
        _children["fin-wait"] = fin_wait;
    }

    return _children;
}

void Native::ParameterMap::Type::Webauth::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Webauth::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Webauth::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-state" || name == "fin-wait")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Timeout::InitState::InitState()
    :
    sec{YType::uint32, "sec"}
{

    yang_name = "init-state"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ParameterMap::Type::Webauth::Timeout::InitState::~InitState()
{
}

bool Native::ParameterMap::Type::Webauth::Timeout::InitState::has_data() const
{
    if (is_presence_container) return true;
    return sec.is_set;
}

bool Native::ParameterMap::Type::Webauth::Timeout::InitState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::Timeout::InitState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Timeout::InitState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Timeout::InitState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Timeout::InitState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::Timeout::InitState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Timeout::InitState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Timeout::InitState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec")
        return true;
    return false;
}

Native::ParameterMap::Type::Webauth::Timeout::FinWait::FinWait()
    :
    msec{YType::uint32, "msec"}
{

    yang_name = "fin-wait"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ParameterMap::Type::Webauth::Timeout::FinWait::~FinWait()
{
}

bool Native::ParameterMap::Type::Webauth::Timeout::FinWait::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set;
}

bool Native::ParameterMap::Type::Webauth::Timeout::FinWait::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::ParameterMap::Type::Webauth::Timeout::FinWait::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fin-wait";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Webauth::Timeout::FinWait::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Webauth::Timeout::FinWait::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Webauth::Timeout::FinWait::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Webauth::Timeout::FinWait::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Webauth::Timeout::FinWait::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Webauth::Timeout::FinWait::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::WebauthGlobal()
    :
    webauth(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth>())
{
    webauth->parent = this;

    yang_name = "webauth-global"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::~WebauthGlobal()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::has_data() const
{
    if (is_presence_container) return true;
    return (webauth !=  nullptr && webauth->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:webauth-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(webauth != nullptr)
    {
        _children["webauth"] = webauth;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::WebauthGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::WebauthGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "webauth")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Webauth()
    :
    global(nullptr) // presence node
{

    yang_name = "webauth"; yang_parent_name = "webauth-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::~Webauth()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Global()
    :
    captive_bypass_portal{YType::empty, "captive-bypass-portal"},
    intercept_https_enable{YType::empty, "intercept-https-enable"},
    logout_window_disabled{YType::empty, "logout-window-disabled"},
    max_http_conns{YType::uint8, "max-http-conns"},
    success_window_disable{YType::empty, "success-window-disable"},
    type{YType::enumeration, "type"}
        ,
    consent(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent>())
    , custom_page(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage>())
    , login_auth_bypass(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass>())
    , redirect(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect>())
    , sleeping_client(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient>())
    , timeout(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout>())
    , virtual_ip(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp>())
    , watch_list(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList>())
{
    consent->parent = this;
    custom_page->parent = this;
    login_auth_bypass->parent = this;
    redirect->parent = this;
    sleeping_client->parent = this;
    timeout->parent = this;
    virtual_ip->parent = this;
    watch_list->parent = this;

    yang_name = "global"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::~Global()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::has_data() const
{
    if (is_presence_container) return true;
    return captive_bypass_portal.is_set
	|| intercept_https_enable.is_set
	|| logout_window_disabled.is_set
	|| max_http_conns.is_set
	|| success_window_disable.is_set
	|| type.is_set
	|| (consent !=  nullptr && consent->has_data())
	|| (custom_page !=  nullptr && custom_page->has_data())
	|| (login_auth_bypass !=  nullptr && login_auth_bypass->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (sleeping_client !=  nullptr && sleeping_client->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (virtual_ip !=  nullptr && virtual_ip->has_data())
	|| (watch_list !=  nullptr && watch_list->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(captive_bypass_portal.yfilter)
	|| ydk::is_set(intercept_https_enable.yfilter)
	|| ydk::is_set(logout_window_disabled.yfilter)
	|| ydk::is_set(max_http_conns.yfilter)
	|| ydk::is_set(success_window_disable.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (consent !=  nullptr && consent->has_operation())
	|| (custom_page !=  nullptr && custom_page->has_operation())
	|| (login_auth_bypass !=  nullptr && login_auth_bypass->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (sleeping_client !=  nullptr && sleeping_client->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (virtual_ip !=  nullptr && virtual_ip->has_operation())
	|| (watch_list !=  nullptr && watch_list->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (captive_bypass_portal.is_set || is_set(captive_bypass_portal.yfilter)) leaf_name_data.push_back(captive_bypass_portal.get_name_leafdata());
    if (intercept_https_enable.is_set || is_set(intercept_https_enable.yfilter)) leaf_name_data.push_back(intercept_https_enable.get_name_leafdata());
    if (logout_window_disabled.is_set || is_set(logout_window_disabled.yfilter)) leaf_name_data.push_back(logout_window_disabled.get_name_leafdata());
    if (max_http_conns.is_set || is_set(max_http_conns.yfilter)) leaf_name_data.push_back(max_http_conns.get_name_leafdata());
    if (success_window_disable.is_set || is_set(success_window_disable.yfilter)) leaf_name_data.push_back(success_window_disable.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consent")
    {
        if(consent == nullptr)
        {
            consent = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent>();
        }
        return consent;
    }

    if(child_yang_name == "custom-page")
    {
        if(custom_page == nullptr)
        {
            custom_page = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage>();
        }
        return custom_page;
    }

    if(child_yang_name == "login-auth-bypass")
    {
        if(login_auth_bypass == nullptr)
        {
            login_auth_bypass = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass>();
        }
        return login_auth_bypass;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "sleeping-client")
    {
        if(sleeping_client == nullptr)
        {
            sleeping_client = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient>();
        }
        return sleeping_client;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "virtual-ip")
    {
        if(virtual_ip == nullptr)
        {
            virtual_ip = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp>();
        }
        return virtual_ip;
    }

    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList>();
        }
        return watch_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(consent != nullptr)
    {
        _children["consent"] = consent;
    }

    if(custom_page != nullptr)
    {
        _children["custom-page"] = custom_page;
    }

    if(login_auth_bypass != nullptr)
    {
        _children["login-auth-bypass"] = login_auth_bypass;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(sleeping_client != nullptr)
    {
        _children["sleeping-client"] = sleeping_client;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    if(virtual_ip != nullptr)
    {
        _children["virtual-ip"] = virtual_ip;
    }

    if(watch_list != nullptr)
    {
        _children["watch-list"] = watch_list;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "captive-bypass-portal")
    {
        captive_bypass_portal = value;
        captive_bypass_portal.value_namespace = name_space;
        captive_bypass_portal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intercept-https-enable")
    {
        intercept_https_enable = value;
        intercept_https_enable.value_namespace = name_space;
        intercept_https_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logout-window-disabled")
    {
        logout_window_disabled = value;
        logout_window_disabled.value_namespace = name_space;
        logout_window_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-http-conns")
    {
        max_http_conns = value;
        max_http_conns.value_namespace = name_space;
        max_http_conns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-window-disable")
    {
        success_window_disable = value;
        success_window_disable.value_namespace = name_space;
        success_window_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "captive-bypass-portal")
    {
        captive_bypass_portal.yfilter = yfilter;
    }
    if(value_path == "intercept-https-enable")
    {
        intercept_https_enable.yfilter = yfilter;
    }
    if(value_path == "logout-window-disabled")
    {
        logout_window_disabled.yfilter = yfilter;
    }
    if(value_path == "max-http-conns")
    {
        max_http_conns.yfilter = yfilter;
    }
    if(value_path == "success-window-disable")
    {
        success_window_disable.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consent" || name == "custom-page" || name == "login-auth-bypass" || name == "redirect" || name == "sleeping-client" || name == "timeout" || name == "virtual-ip" || name == "watch-list" || name == "captive-bypass-portal" || name == "intercept-https-enable" || name == "logout-window-disabled" || name == "max-http-conns" || name == "success-window-disable" || name == "type")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::Consent()
    :
    email{YType::empty, "email"}
{

    yang_name = "consent"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::~Consent()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::has_data() const
{
    if (is_presence_container) return true;
    return email.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(email.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Consent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "email")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::CustomPage()
    :
    login(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login>())
    , failure(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure>())
    , success(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success>())
{
    login->parent = this;
    failure->parent = this;
    success->parent = this;

    yang_name = "custom-page"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::~CustomPage()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::has_data() const
{
    if (is_presence_container) return true;
    return (login !=  nullptr && login->has_data())
	|| (failure !=  nullptr && failure->has_data())
	|| (success !=  nullptr && success->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::has_operation() const
{
    return is_set(yfilter)
	|| (login !=  nullptr && login->has_operation())
	|| (failure !=  nullptr && failure->has_operation())
	|| (success !=  nullptr && success->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom-page";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login>();
        }
        return login;
    }

    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "success")
    {
        if(success == nullptr)
        {
            success = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success>();
        }
        return success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(login != nullptr)
    {
        _children["login"] = login;
    }

    if(failure != nullptr)
    {
        _children["failure"] = failure;
    }

    if(success != nullptr)
    {
        _children["success"] = success;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login" || name == "failure" || name == "success")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Login()
    :
    device{YType::str, "device"}
        ,
    expired(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired>())
{
    expired->parent = this;

    yang_name = "login"; yang_parent_name = "custom-page"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::~Login()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set
	|| (expired !=  nullptr && expired->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter)
	|| (expired !=  nullptr && expired->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/custom-page/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expired")
    {
        if(expired == nullptr)
        {
            expired = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired>();
        }
        return expired;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expired != nullptr)
    {
        _children["expired"] = expired;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expired" || name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::Expired()
    :
    device{YType::str, "device"}
{

    yang_name = "expired"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::~Expired()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/custom-page/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expired";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Login::Expired::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::Failure()
    :
    device{YType::str, "device"}
{

    yang_name = "failure"; yang_parent_name = "custom-page"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::~Failure()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/custom-page/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::Success()
    :
    device{YType::str, "device"}
{

    yang_name = "success"; yang_parent_name = "custom-page"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::~Success()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/custom-page/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::CustomPage::Success::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::LoginAuthBypass()
    :
    ip_access_list(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList>())
{
    ip_access_list->parent = this;

    yang_name = "login-auth-bypass"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::~LoginAuthBypass()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::has_data() const
{
    if (is_presence_container) return true;
    return (ip_access_list !=  nullptr && ip_access_list->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::has_operation() const
{
    return is_set(yfilter)
	|| (ip_access_list !=  nullptr && ip_access_list->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login-auth-bypass";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-access-list")
    {
        if(ip_access_list == nullptr)
        {
            ip_access_list = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList>();
        }
        return ip_access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_access_list != nullptr)
    {
        _children["ip-access-list"] = ip_access_list;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-access-list")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::IpAccessList()
    :
    name{YType::str, "name"},
    domain_name_list{YType::str, "domain-name-list"}
{

    yang_name = "ip-access-list"; yang_parent_name = "login-auth-bypass"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::~IpAccessList()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| domain_name_list.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain_name_list.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/login-auth-bypass/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain_name_list.is_set || is_set(domain_name_list.yfilter)) leaf_name_data.push_back(domain_name_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name-list")
    {
        domain_name_list = value;
        domain_name_list.value_namespace = name_space;
        domain_name_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain-name-list")
    {
        domain_name_list.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::LoginAuthBypass::IpAccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain-name-list")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Redirect()
    :
    for_login{YType::str, "for-login"},
    on_failure{YType::str, "on-failure"},
    on_success{YType::str, "on-success"}
        ,
    append(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append>())
    , portal(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal>())
{
    append->parent = this;
    portal->parent = this;

    yang_name = "redirect"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::~Redirect()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return for_login.is_set
	|| on_failure.is_set
	|| on_success.is_set
	|| (append !=  nullptr && append->has_data())
	|| (portal !=  nullptr && portal->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_login.yfilter)
	|| ydk::is_set(on_failure.yfilter)
	|| ydk::is_set(on_success.yfilter)
	|| (append !=  nullptr && append->has_operation())
	|| (portal !=  nullptr && portal->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_login.is_set || is_set(for_login.yfilter)) leaf_name_data.push_back(for_login.get_name_leafdata());
    if (on_failure.is_set || is_set(on_failure.yfilter)) leaf_name_data.push_back(on_failure.get_name_leafdata());
    if (on_success.is_set || is_set(on_success.yfilter)) leaf_name_data.push_back(on_success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "append")
    {
        if(append == nullptr)
        {
            append = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append>();
        }
        return append;
    }

    if(child_yang_name == "portal")
    {
        if(portal == nullptr)
        {
            portal = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal>();
        }
        return portal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(append != nullptr)
    {
        _children["append"] = append;
    }

    if(portal != nullptr)
    {
        _children["portal"] = portal;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for-login")
    {
        for_login = value;
        for_login.value_namespace = name_space;
        for_login.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-failure")
    {
        on_failure = value;
        on_failure.value_namespace = name_space;
        on_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-success")
    {
        on_success = value;
        on_success.value_namespace = name_space;
        on_success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for-login")
    {
        for_login.yfilter = yfilter;
    }
    if(value_path == "on-failure")
    {
        on_failure.yfilter = yfilter;
    }
    if(value_path == "on-success")
    {
        on_success.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "append" || name == "portal" || name == "for-login" || name == "on-failure" || name == "on-success")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::Append()
    :
    ap_mac(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac>())
    , client_mac(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac>())
    , wlan_ssid(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid>())
{
    ap_mac->parent = this;
    client_mac->parent = this;
    wlan_ssid->parent = this;

    yang_name = "append"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::~Append()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::has_data() const
{
    if (is_presence_container) return true;
    return (ap_mac !=  nullptr && ap_mac->has_data())
	|| (client_mac !=  nullptr && client_mac->has_data())
	|| (wlan_ssid !=  nullptr && wlan_ssid->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::has_operation() const
{
    return is_set(yfilter)
	|| (ap_mac !=  nullptr && ap_mac->has_operation())
	|| (client_mac !=  nullptr && client_mac->has_operation())
	|| (wlan_ssid !=  nullptr && wlan_ssid->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/redirect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "append";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ap-mac")
    {
        if(ap_mac == nullptr)
        {
            ap_mac = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac>();
        }
        return ap_mac;
    }

    if(child_yang_name == "client-mac")
    {
        if(client_mac == nullptr)
        {
            client_mac = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac>();
        }
        return client_mac;
    }

    if(child_yang_name == "wlan-ssid")
    {
        if(wlan_ssid == nullptr)
        {
            wlan_ssid = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid>();
        }
        return wlan_ssid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ap_mac != nullptr)
    {
        _children["ap-mac"] = ap_mac;
    }

    if(client_mac != nullptr)
    {
        _children["client-mac"] = client_mac;
    }

    if(wlan_ssid != nullptr)
    {
        _children["wlan-ssid"] = wlan_ssid;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ap-mac" || name == "client-mac" || name == "wlan-ssid")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::ApMac()
    :
    tag{YType::str, "tag"}
{

    yang_name = "ap-mac"; yang_parent_name = "append"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::~ApMac()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/redirect/append/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ap-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ApMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::ClientMac()
    :
    tag{YType::str, "tag"}
{

    yang_name = "client-mac"; yang_parent_name = "append"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::~ClientMac()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/redirect/append/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::ClientMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::WlanSsid()
    :
    tag{YType::str, "tag"}
{

    yang_name = "wlan-ssid"; yang_parent_name = "append"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::~WlanSsid()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/redirect/append/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wlan-ssid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Append::WlanSsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::Portal()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "portal"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::~Portal()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/redirect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Redirect::Portal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::SleepingClient()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "sleeping-client"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::~SleepingClient()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sleeping-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::SleepingClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::Timeout()
    :
    init_state(nullptr) // presence node
    , fin_wait(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait>())
{
    fin_wait->parent = this;

    yang_name = "timeout"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::~Timeout()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return (init_state !=  nullptr && init_state->has_data())
	|| (fin_wait !=  nullptr && fin_wait->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (init_state !=  nullptr && init_state->has_operation())
	|| (fin_wait !=  nullptr && fin_wait->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-state")
    {
        if(init_state == nullptr)
        {
            init_state = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState>();
        }
        return init_state;
    }

    if(child_yang_name == "fin-wait")
    {
        if(fin_wait == nullptr)
        {
            fin_wait = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait>();
        }
        return fin_wait;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(init_state != nullptr)
    {
        _children["init-state"] = init_state;
    }

    if(fin_wait != nullptr)
    {
        _children["fin-wait"] = fin_wait;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-state" || name == "fin-wait")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::InitState()
    :
    sec{YType::uint32, "sec"}
{

    yang_name = "init-state"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::~InitState()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::has_data() const
{
    if (is_presence_container) return true;
    return sec.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/timeout/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::InitState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::FinWait()
    :
    msec{YType::uint32, "msec"}
{

    yang_name = "fin-wait"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::~FinWait()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/timeout/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fin-wait";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Timeout::FinWait::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::VirtualIp()
    :
    ipv4(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4>())
    , ipv6(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "virtual-ip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::~VirtualIp()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::Ipv4()
    :
    address{YType::str, "address"},
    virtual_host{YType::str, "virtual-host"}
{

    yang_name = "ipv4"; yang_parent_name = "virtual-ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::~Ipv4()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| virtual_host.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(virtual_host.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/virtual-ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_host.is_set || is_set(virtual_host.yfilter)) leaf_name_data.push_back(virtual_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-host")
    {
        virtual_host = value;
        virtual_host.value_namespace = name_space;
        virtual_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "virtual-host")
    {
        virtual_host.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "virtual-host")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::Ipv6()
    :
    address{YType::str, "address"},
    virtual_host{YType::str, "virtual-host"}
{

    yang_name = "ipv6"; yang_parent_name = "virtual-ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::~Ipv6()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| virtual_host.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(virtual_host.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/virtual-ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_host.is_set || is_set(virtual_host.yfilter)) leaf_name_data.push_back(virtual_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-host")
    {
        virtual_host = value;
        virtual_host.value_namespace = name_space;
        virtual_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "virtual-host")
    {
        virtual_host.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::VirtualIp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "virtual-host")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::WatchList()
    :
    enabled{YType::empty, "enabled"},
    dynamic_expiry_timeout{YType::uint32, "dynamic-expiry-timeout"}
        ,
    add_item(std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem>())
{
    add_item->parent = this;

    yang_name = "watch-list"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::~WatchList()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| dynamic_expiry_timeout.is_set
	|| (add_item !=  nullptr && add_item->has_data());
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(dynamic_expiry_timeout.yfilter)
	|| (add_item !=  nullptr && add_item->has_operation());
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (dynamic_expiry_timeout.is_set || is_set(dynamic_expiry_timeout.yfilter)) leaf_name_data.push_back(dynamic_expiry_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "add-item")
    {
        if(add_item == nullptr)
        {
            add_item = std::make_shared<Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem>();
        }
        return add_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(add_item != nullptr)
    {
        _children["add-item"] = add_item;
    }

    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout = value;
        dynamic_expiry_timeout.value_namespace = name_space;
        dynamic_expiry_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add-item" || name == "enabled" || name == "dynamic-expiry-timeout")
        return true;
    return false;
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::AddItem()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "add-item"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::~AddItem()
{
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-policy:webauth-global/webauth/global/watch-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::WatchList::AddItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::Type::Umbrella::Umbrella()
    :
    global(nullptr) // presence node
{

    yang_name = "umbrella"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::Umbrella::~Umbrella()
{
}

bool Native::ParameterMap::Type::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Native::ParameterMap::Type::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::ParameterMap::Type::Umbrella::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Type::Umbrella::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::ParameterMap::Type::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::ParameterMap::Type::Umbrella::Global::Global()
    :
    token{YType::str, "token"},
    local_domain{YType::str, "local-domain"},
    dnscrypt{YType::boolean, "dnscrypt"},
    public_key{YType::str, "public-key"},
    udp_timeout{YType::uint8, "udp-timeout"}
        ,
    resolver(std::make_shared<Native::ParameterMap::Type::Umbrella::Global::Resolver>())
{
    resolver->parent = this;

    yang_name = "global"; yang_parent_name = "umbrella"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ParameterMap::Type::Umbrella::Global::~Global()
{
}

bool Native::ParameterMap::Type::Umbrella::Global::has_data() const
{
    if (is_presence_container) return true;
    return token.is_set
	|| local_domain.is_set
	|| dnscrypt.is_set
	|| public_key.is_set
	|| udp_timeout.is_set
	|| (resolver !=  nullptr && resolver->has_data());
}

bool Native::ParameterMap::Type::Umbrella::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(token.yfilter)
	|| ydk::is_set(local_domain.yfilter)
	|| ydk::is_set(dnscrypt.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(udp_timeout.yfilter)
	|| (resolver !=  nullptr && resolver->has_operation());
}

std::string Native::ParameterMap::Type::Umbrella::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-umbrella:umbrella/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Umbrella::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Umbrella::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (token.is_set || is_set(token.yfilter)) leaf_name_data.push_back(token.get_name_leafdata());
    if (local_domain.is_set || is_set(local_domain.yfilter)) leaf_name_data.push_back(local_domain.get_name_leafdata());
    if (dnscrypt.is_set || is_set(dnscrypt.yfilter)) leaf_name_data.push_back(dnscrypt.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (udp_timeout.is_set || is_set(udp_timeout.yfilter)) leaf_name_data.push_back(udp_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Umbrella::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolver")
    {
        if(resolver == nullptr)
        {
            resolver = std::make_shared<Native::ParameterMap::Type::Umbrella::Global::Resolver>();
        }
        return resolver;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Umbrella::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(resolver != nullptr)
    {
        _children["resolver"] = resolver;
    }

    return _children;
}

void Native::ParameterMap::Type::Umbrella::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "token")
    {
        token = value;
        token.value_namespace = name_space;
        token.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-domain")
    {
        local_domain = value;
        local_domain.value_namespace = name_space;
        local_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnscrypt")
    {
        dnscrypt = value;
        dnscrypt.value_namespace = name_space;
        dnscrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-timeout")
    {
        udp_timeout = value;
        udp_timeout.value_namespace = name_space;
        udp_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Umbrella::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "token")
    {
        token.yfilter = yfilter;
    }
    if(value_path == "local-domain")
    {
        local_domain.yfilter = yfilter;
    }
    if(value_path == "dnscrypt")
    {
        dnscrypt.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "udp-timeout")
    {
        udp_timeout.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Umbrella::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolver" || name == "token" || name == "local-domain" || name == "dnscrypt" || name == "public-key" || name == "udp-timeout")
        return true;
    return false;
}

Native::ParameterMap::Type::Umbrella::Global::Resolver::Resolver()
    :
    ipv4(this, {"address"})
    , ipv6(this, {"address"})
{

    yang_name = "resolver"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::Umbrella::Global::Resolver::~Resolver()
{
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ParameterMap::Type::Umbrella::Global::Resolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-umbrella:umbrella/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Umbrella::Global::Resolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Umbrella::Global::Resolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Umbrella::Global::Resolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Umbrella::Global::Resolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ParameterMap::Type::Umbrella::Global::Resolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Type::Umbrella::Global::Resolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::Ipv4()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "resolver"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::~Ipv4()
{
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-umbrella:umbrella/global/resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "resolver"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::~Ipv6()
{
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parameter-map/type/Cisco-IOS-XE-umbrella:umbrella/global/resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Type::Umbrella::Global::Resolver::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Ppp::Ppp()
    :
    analysis_module(std::make_shared<Native::Ppp::AnalysisModule>())
    , packet(std::make_shared<Native::Ppp::Packet>())
{
    analysis_module->parent = this;
    packet->parent = this;

    yang_name = "ppp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ppp::~Ppp()
{
}

bool Native::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return (analysis_module !=  nullptr && analysis_module->has_data())
	|| (packet !=  nullptr && packet->has_data());
}

bool Native::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| (analysis_module !=  nullptr && analysis_module->has_operation())
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-nam:analysis-module")
    {
        if(analysis_module == nullptr)
        {
            analysis_module = std::make_shared<Native::Ppp::AnalysisModule>();
        }
        return analysis_module;
    }

    if(child_yang_name == "Cisco-IOS-XE-ppp:packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Ppp::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(analysis_module != nullptr)
    {
        _children["Cisco-IOS-XE-nam:analysis-module"] = analysis_module;
    }

    if(packet != nullptr)
    {
        _children["Cisco-IOS-XE-ppp:packet"] = packet;
    }

    return _children;
}

void Native::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "analysis-module" || name == "packet")
        return true;
    return false;
}

Native::Ppp::AnalysisModule::AnalysisModule()
    :
    monitoring(std::make_shared<Native::Ppp::AnalysisModule::Monitoring>())
{
    monitoring->parent = this;

    yang_name = "analysis-module"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ppp::AnalysisModule::~AnalysisModule()
{
}

bool Native::Ppp::AnalysisModule::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Ppp::AnalysisModule::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Ppp::AnalysisModule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ppp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::AnalysisModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nam:analysis-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::AnalysisModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ppp::AnalysisModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Ppp::AnalysisModule::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ppp::AnalysisModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitoring != nullptr)
    {
        _children["monitoring"] = monitoring;
    }

    return _children;
}

void Native::Ppp::AnalysisModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ppp::AnalysisModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ppp::AnalysisModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Ppp::AnalysisModule::Monitoring::Monitoring()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "monitoring"; yang_parent_name = "analysis-module"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ppp::AnalysisModule::Monitoring::~Monitoring()
{
}

bool Native::Ppp::AnalysisModule::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Ppp::AnalysisModule::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Ppp::AnalysisModule::Monitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ppp/Cisco-IOS-XE-nam:analysis-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::AnalysisModule::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::AnalysisModule::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ppp::AnalysisModule::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ppp::AnalysisModule::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ppp::AnalysisModule::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ppp::AnalysisModule::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Ppp::AnalysisModule::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Ppp::Packet::Packet()
    :
    throttle{YType::uint32, "throttle"},
    allow_time{YType::uint32, "allow_time"},
    block_time{YType::uint32, "block_time"}
{

    yang_name = "packet"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ppp::Packet::~Packet()
{
}

bool Native::Ppp::Packet::has_data() const
{
    if (is_presence_container) return true;
    return throttle.is_set
	|| allow_time.is_set
	|| block_time.is_set;
}

bool Native::Ppp::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(allow_time.yfilter)
	|| ydk::is_set(block_time.yfilter);
}

std::string Native::Ppp::Packet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ppp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp:packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (allow_time.is_set || is_set(allow_time.yfilter)) leaf_name_data.push_back(allow_time.get_name_leafdata());
    if (block_time.is_set || is_set(block_time.yfilter)) leaf_name_data.push_back(block_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ppp::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ppp::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ppp::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow_time")
    {
        allow_time = value;
        allow_time.value_namespace = name_space;
        allow_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_time")
    {
        block_time = value;
        block_time.value_namespace = name_space;
        block_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ppp::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "allow_time")
    {
        allow_time.yfilter = yfilter;
    }
    if(value_path == "block_time")
    {
        block_time.yfilter = yfilter;
    }
}

bool Native::Ppp::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "allow_time" || name == "block_time")
        return true;
    return false;
}

Native::Mac::Mac()
    :
    address_table(std::make_shared<Native::Mac::AddressTable>())
    , access_list(std::make_shared<Native::Mac::AccessList>())
{
    address_table->parent = this;
    access_list->parent = this;

    yang_name = "mac"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::~Mac()
{
}

bool Native::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (address_table !=  nullptr && address_table->has_data())
	|| (access_list !=  nullptr && access_list->has_data());
}

bool Native::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (address_table !=  nullptr && address_table->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Native::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-table")
    {
        if(address_table == nullptr)
        {
            address_table = std::make_shared<Native::Mac::AddressTable>();
        }
        return address_table;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Mac::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_table != nullptr)
    {
        _children["address-table"] = address_table;
    }

    if(access_list != nullptr)
    {
        _children["Cisco-IOS-XE-acl:access-list"] = access_list;
    }

    return _children;
}

void Native::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-table" || name == "access-list")
        return true;
    return false;
}

Native::Mac::AddressTable::AddressTable()
    :
    control_packet_learn{YType::empty, "control-packet-learn"}
        ,
    aging_time(std::make_shared<Native::Mac::AddressTable::AgingTime>())
    , learning(std::make_shared<Native::Mac::AddressTable::Learning>())
    , notification(std::make_shared<Native::Mac::AddressTable::Notification>())
    , static_(std::make_shared<Native::Mac::AddressTable::Static>())
{
    aging_time->parent = this;
    learning->parent = this;
    notification->parent = this;
    static_->parent = this;

    yang_name = "address-table"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AddressTable::~AddressTable()
{
}

bool Native::Mac::AddressTable::has_data() const
{
    if (is_presence_container) return true;
    return control_packet_learn.is_set
	|| (aging_time !=  nullptr && aging_time->has_data())
	|| (learning !=  nullptr && learning->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mac::AddressTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_packet_learn.yfilter)
	|| (aging_time !=  nullptr && aging_time->has_operation())
	|| (learning !=  nullptr && learning->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mac::AddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_packet_learn.is_set || is_set(control_packet_learn.yfilter)) leaf_name_data.push_back(control_packet_learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging-time")
    {
        if(aging_time == nullptr)
        {
            aging_time = std::make_shared<Native::Mac::AddressTable::AgingTime>();
        }
        return aging_time;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Mac::AddressTable::Learning>();
        }
        return learning;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Mac::AddressTable::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mac::AddressTable::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aging_time != nullptr)
    {
        _children["aging-time"] = aging_time;
    }

    if(learning != nullptr)
    {
        _children["learning"] = learning;
    }

    if(notification != nullptr)
    {
        _children["notification"] = notification;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Mac::AddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn = value;
        control_packet_learn.value_namespace = name_space;
        control_packet_learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-time" || name == "learning" || name == "notification" || name == "static" || name == "control-packet-learn")
        return true;
    return false;
}

Native::Mac::AddressTable::AgingTime::AgingTime()
    :
    val{YType::uint32, "val"},
    routed_mac{YType::empty, "routed-mac"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "aging-time"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AddressTable::AgingTime::~AgingTime()
{
}

bool Native::Mac::AddressTable::AgingTime::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| routed_mac.is_set
	|| vlan.is_set;
}

bool Native::Mac::AddressTable::AgingTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(routed_mac.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::AgingTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::AgingTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::AgingTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (routed_mac.is_set || is_set(routed_mac.yfilter)) leaf_name_data.push_back(routed_mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::AgingTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::AgingTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mac::AddressTable::AgingTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routed-mac")
    {
        routed_mac = value;
        routed_mac.value_namespace = name_space;
        routed_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::AgingTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "routed-mac")
    {
        routed_mac.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::AgingTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "routed-mac" || name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Learning::Learning()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "learning"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AddressTable::Learning::~Learning()
{
}

bool Native::Mac::AddressTable::Learning::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Mac::AddressTable::Learning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mac::AddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Notification()
    :
    mac_move{YType::empty, "mac-move"}
        ,
    change(nullptr) // presence node
    , threshold(nullptr) // presence node
{

    yang_name = "notification"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AddressTable::Notification::~Notification()
{
}

bool Native::Mac::AddressTable::Notification::has_data() const
{
    if (is_presence_container) return true;
    return mac_move.is_set
	|| (change !=  nullptr && change->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Mac::AddressTable::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_move.yfilter)
	|| (change !=  nullptr && change->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Mac::AddressTable::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_move.is_set || is_set(mac_move.yfilter)) leaf_name_data.push_back(mac_move.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mac::AddressTable::Notification::Change>();
        }
        return change;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Mac::AddressTable::Notification::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(change != nullptr)
    {
        _children["change"] = change;
    }

    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Mac::AddressTable::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-move")
    {
        mac_move = value;
        mac_move.value_namespace = name_space;
        mac_move.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-move")
    {
        mac_move.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "threshold" || name == "mac-move")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Change::Change()
    :
    history_size{YType::uint16, "history-size"},
    interval{YType::uint32, "interval"}
{

    yang_name = "change"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mac::AddressTable::Notification::Change::~Change()
{
}

bool Native::Mac::AddressTable::Notification::Change::has_data() const
{
    if (is_presence_container) return true;
    return history_size.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Change::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_size.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Change::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Change::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.yfilter)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::Notification::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::Notification::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mac::AddressTable::Notification::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history-size")
    {
        history_size = value;
        history_size.value_namespace = name_space;
        history_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history-size")
    {
        history_size.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-size" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Threshold()
    :
    interval{YType::uint32, "interval"}
        ,
    limit(std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>())
{
    limit->parent = this;

    yang_name = "threshold"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Mac::AddressTable::Notification::Threshold::~Threshold()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Mac::AddressTable::Notification::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::Notification::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::Notification::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Mac::AddressTable::Notification::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Limit::Limit()
    :
    percentage{YType::uint8, "percentage"},
    interval{YType::uint32, "interval"}
{

    yang_name = "limit"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AddressTable::Notification::Threshold::Limit::~Limit()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_data() const
{
    if (is_presence_container) return true;
    return percentage.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::Notification::Threshold::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::Notification::Threshold::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percentage" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Static::Static()
    :
    mac_address{YType::str, "mac-address"},
    vlan{YType::uint16, "vlan"},
    drop{YType::empty, "drop"},
    interface{YType::str, "interface"}
{

    yang_name = "static"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AddressTable::Static::~Static()
{
}

bool Native::Mac::AddressTable::Static::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| vlan.is_set
	|| drop.is_set
	|| interface.is_set;
}

bool Native::Mac::AddressTable::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Mac::AddressTable::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AddressTable::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AddressTable::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mac::AddressTable::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "vlan" || name == "drop" || name == "interface")
        return true;
    return false;
}

Native::Mac::AccessList::AccessList()
    :
    extended(this, {"id"})
{

    yang_name = "access-list"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AccessList::~AccessList()
{
}

bool Native::Mac::AccessList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended.len(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mac::AccessList::has_operation() const
{
    for (std::size_t index=0; index<extended.len(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mac::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        auto ent_ = std::make_shared<Native::Mac::AccessList::Extended>();
        ent_->parent = this;
        extended.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mac::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Extended()
    :
    id{YType::str, "id"}
        ,
    entry(this, {"action", "values"})
{

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mac::AccessList::Extended::~Extended()
{
}

bool Native::Mac::AccessList::Extended::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return id.is_set;
}

bool Native::Mac::AccessList::Extended::has_operation() const
{
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Mac::AccessList::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/Cisco-IOS-XE-acl:access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto ent_ = std::make_shared<Native::Mac::AccessList::Extended::Entry>();
        ent_->parent = this;
        entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Mac::AccessList::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "id")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Entry::Entry()
    :
    action{YType::enumeration, "action"},
    values{YType::str, "values"}
{

    yang_name = "entry"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mac::AccessList::Extended::Entry::~Entry()
{
}

bool Native::Mac::AccessList::Extended::Entry::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| values.is_set;
}

bool Native::Mac::AccessList::Extended::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(values.yfilter);
}

std::string Native::Mac::AccessList::Extended::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    ADD_KEY_TOKEN(action, "action");
    ADD_KEY_TOKEN(values, "values");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (values.is_set || is_set(values.yfilter)) leaf_name_data.push_back(values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mac::AccessList::Extended::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mac::AccessList::Extended::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mac::AccessList::Extended::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "values")
    {
        values = value;
        values.value_namespace = name_space;
        values.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "values")
    {
        values.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "values")
        return true;
    return false;
}

Native::Tacacs::Tacacs()
    :
    server(this, {"name"})
{

    yang_name = "tacacs"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Tacacs::~Tacacs()
{
}

bool Native::Tacacs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Tacacs::has_operation() const
{
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:server")
    {
        auto ent_ = std::make_shared<Native::Tacacs::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Tacacs::Server::Server()
    :
    name{YType::str, "name"},
    port{YType::uint16, "port"},
    timeout{YType::uint16, "timeout"}
        ,
    address(std::make_shared<Native::Tacacs::Server::Address>())
    , key(std::make_shared<Native::Tacacs::Server::Key>())
{
    address->parent = this;
    key->parent = this;

    yang_name = "server"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Tacacs::Server::~Server()
{
}

bool Native::Tacacs::Server::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| port.is_set
	|| timeout.is_set
	|| (address !=  nullptr && address->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::Tacacs::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Tacacs::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Tacacs::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Tacacs::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Tacacs::Server::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Tacacs::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Tacacs::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "key" || name == "name" || name == "port" || name == "timeout")
        return true;
    return false;
}

Native::Tacacs::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Tacacs::Server::Address::~Address()
{
}

bool Native::Tacacs::Server::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Tacacs::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Tacacs::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Tacacs::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Tacacs::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Tacacs::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Tacacs::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Tacacs::Server::Key::~Key()
{
}

bool Native::Tacacs::Server::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Tacacs::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Tacacs::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Tacacs::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Tacacs::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Tacacs::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::TacacsServer::TacacsServer()
    :
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
        ,
    host(this, {"name"})
    , directed_request(nullptr) // presence node
    , key(std::make_shared<Native::TacacsServer::Key>())
{
    key->parent = this;

    yang_name = "tacacs-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TacacsServer::~TacacsServer()
{
}

bool Native::TacacsServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return timeout.is_set
	|| (directed_request !=  nullptr && directed_request->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::TacacsServer::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (directed_request !=  nullptr && directed_request->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::TacacsServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TacacsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:host")
    {
        auto ent_ = std::make_shared<Native::TacacsServer::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:directed-request")
    {
        if(directed_request == nullptr)
        {
            directed_request = std::make_shared<Native::TacacsServer::DirectedRequest>();
        }
        return directed_request;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::TacacsServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TacacsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(directed_request != nullptr)
    {
        _children["Cisco-IOS-XE-aaa:directed-request"] = directed_request;
    }

    if(key != nullptr)
    {
        _children["Cisco-IOS-XE-aaa:key"] = key;
    }

    return _children;
}

void Native::TacacsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-aaa:timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "directed-request" || name == "key" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::Host::Host()
    :
    name{YType::str, "name"},
    port{YType::uint16, "port"},
    key{YType::str, "key"},
    encryption_key{YType::str, "encryption-key"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "host"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TacacsServer::Host::~Host()
{
}

bool Native::TacacsServer::Host::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| port.is_set
	|| key.is_set
	|| encryption_key.is_set
	|| timeout.is_set;
}

bool Native::TacacsServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption_key.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::TacacsServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption_key.is_set || is_set(encryption_key.yfilter)) leaf_name_data.push_back(encryption_key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TacacsServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TacacsServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::TacacsServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-key")
    {
        encryption_key = value;
        encryption_key.value_namespace = name_space;
        encryption_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption-key")
    {
        encryption_key.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "port" || name == "key" || name == "encryption-key" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::DirectedRequest::DirectedRequest()
    :
    restricted{YType::empty, "restricted"},
    no_truncate{YType::empty, "no-truncate"}
{

    yang_name = "directed-request"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::TacacsServer::DirectedRequest::~DirectedRequest()
{
}

bool Native::TacacsServer::DirectedRequest::has_data() const
{
    if (is_presence_container) return true;
    return restricted.is_set
	|| no_truncate.is_set;
}

bool Native::TacacsServer::DirectedRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restricted.yfilter)
	|| ydk::is_set(no_truncate.yfilter);
}

std::string Native::TacacsServer::DirectedRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::DirectedRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:directed-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::DirectedRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restricted.is_set || is_set(restricted.yfilter)) leaf_name_data.push_back(restricted.get_name_leafdata());
    if (no_truncate.is_set || is_set(no_truncate.yfilter)) leaf_name_data.push_back(no_truncate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TacacsServer::DirectedRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TacacsServer::DirectedRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::TacacsServer::DirectedRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restricted")
    {
        restricted = value;
        restricted.value_namespace = name_space;
        restricted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-truncate")
    {
        no_truncate = value;
        no_truncate.value_namespace = name_space;
        no_truncate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::DirectedRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restricted")
    {
        restricted.yfilter = yfilter;
    }
    if(value_path == "no-truncate")
    {
        no_truncate.yfilter = yfilter;
    }
}

bool Native::TacacsServer::DirectedRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restricted" || name == "no-truncate")
        return true;
    return false;
}

Native::TacacsServer::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TacacsServer::Key::~Key()
{
}

bool Native::TacacsServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::TacacsServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::TacacsServer::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TacacsServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TacacsServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::TacacsServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Software::Software()
    :
    auto_upgrade(std::make_shared<Native::Software::AutoUpgrade>())
{
    auto_upgrade->parent = this;

    yang_name = "software"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Software::~Software()
{
}

bool Native::Software::has_data() const
{
    if (is_presence_container) return true;
    return (auto_upgrade !=  nullptr && auto_upgrade->has_data());
}

bool Native::Software::has_operation() const
{
    return is_set(yfilter)
	|| (auto_upgrade !=  nullptr && auto_upgrade->has_operation());
}

std::string Native::Software::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Software::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Software::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Software::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-upgrade")
    {
        if(auto_upgrade == nullptr)
        {
            auto_upgrade = std::make_shared<Native::Software::AutoUpgrade>();
        }
        return auto_upgrade;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Software::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_upgrade != nullptr)
    {
        _children["auto-upgrade"] = auto_upgrade;
    }

    return _children;
}

void Native::Software::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Software::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Software::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-upgrade")
        return true;
    return false;
}

Native::Software::AutoUpgrade::AutoUpgrade()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "auto-upgrade"; yang_parent_name = "software"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Software::AutoUpgrade::~AutoUpgrade()
{
}

bool Native::Software::AutoUpgrade::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Software::AutoUpgrade::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Software::AutoUpgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/software/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Software::AutoUpgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Software::AutoUpgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Software::AutoUpgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Software::AutoUpgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Software::AutoUpgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Software::AutoUpgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Software::AutoUpgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Upgrade::Upgrade()
    :
    fpd(std::make_shared<Native::Upgrade::Fpd>())
{
    fpd->parent = this;

    yang_name = "upgrade"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Upgrade::~Upgrade()
{
}

bool Native::Upgrade::has_data() const
{
    if (is_presence_container) return true;
    return (fpd !=  nullptr && fpd->has_data());
}

bool Native::Upgrade::has_operation() const
{
    return is_set(yfilter)
	|| (fpd !=  nullptr && fpd->has_operation());
}

std::string Native::Upgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Upgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Upgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Upgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd")
    {
        if(fpd == nullptr)
        {
            fpd = std::make_shared<Native::Upgrade::Fpd>();
        }
        return fpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Upgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fpd != nullptr)
    {
        _children["fpd"] = fpd;
    }

    return _children;
}

void Native::Upgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Upgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Upgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd")
        return true;
    return false;
}

Native::Upgrade::Fpd::Fpd()
    :
    auto_{YType::empty, "auto"},
    path{YType::str, "path"}
{

    yang_name = "fpd"; yang_parent_name = "upgrade"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Upgrade::Fpd::~Fpd()
{
}

bool Native::Upgrade::Fpd::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set
	|| path.is_set;
}

bool Native::Upgrade::Fpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Native::Upgrade::Fpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/upgrade/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Upgrade::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Upgrade::Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Upgrade::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Upgrade::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Upgrade::Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Upgrade::Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Native::Upgrade::Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "path")
        return true;
    return false;
}

Native::Vtp::Vtp()
    :
    file{YType::str, "Cisco-IOS-XE-vtp:file"},
    pruning{YType::empty, "Cisco-IOS-XE-vtp:pruning"},
    version{YType::uint8, "Cisco-IOS-XE-vtp:version"},
    domain{YType::str, "Cisco-IOS-XE-vtp:domain"}
        ,
    interface(std::make_shared<Native::Vtp::Interface>())
    , password(std::make_shared<Native::Vtp::Password>())
    , mode(std::make_shared<Native::Vtp::Mode>())
{
    interface->parent = this;
    password->parent = this;
    mode->parent = this;

    yang_name = "vtp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vtp::~Vtp()
{
}

bool Native::Vtp::has_data() const
{
    if (is_presence_container) return true;
    return file.is_set
	|| pruning.is_set
	|| version.is_set
	|| domain.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Vtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(pruning.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Vtp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (pruning.is_set || is_set(pruning.yfilter)) leaf_name_data.push_back(pruning.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-vtp:interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Vtp::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "Cisco-IOS-XE-vtp:password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Vtp::Password>();
        }
        return password;
    }

    if(child_yang_name == "Cisco-IOS-XE-vtp:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Vtp::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["Cisco-IOS-XE-vtp:interface"] = interface;
    }

    if(password != nullptr)
    {
        _children["Cisco-IOS-XE-vtp:password"] = password;
    }

    if(mode != nullptr)
    {
        _children["Cisco-IOS-XE-vtp:mode"] = mode;
    }

    return _children;
}

void Native::Vtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-vtp:file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vtp:pruning")
    {
        pruning = value;
        pruning.value_namespace = name_space;
        pruning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vtp:version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vtp:domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "pruning")
    {
        pruning.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Vtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "password" || name == "mode" || name == "file" || name == "pruning" || name == "version" || name == "domain")
        return true;
    return false;
}

Native::Vtp::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    only{YType::empty, "only"}
{

    yang_name = "interface"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vtp::Interface::~Interface()
{
}

bool Native::Vtp::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| only.is_set;
}

bool Native::Vtp::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(only.yfilter);
}

std::string Native::Vtp::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (only.is_set || is_set(only.yfilter)) leaf_name_data.push_back(only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vtp::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only")
    {
        only = value;
        only.value_namespace = name_space;
        only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "only")
    {
        only.yfilter = yfilter;
    }
}

bool Native::Vtp::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "only")
        return true;
    return false;
}

Native::Vtp::Password::Password()
    :
    password{YType::str, "password"},
    hidden{YType::empty, "hidden"},
    secret{YType::empty, "secret"}
{

    yang_name = "password"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vtp::Password::~Password()
{
}

bool Native::Vtp::Password::has_data() const
{
    if (is_presence_container) return true;
    return password.is_set
	|| hidden.is_set
	|| secret.is_set;
}

bool Native::Vtp::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(hidden.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Vtp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (hidden.is_set || is_set(hidden.yfilter)) leaf_name_data.push_back(hidden.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vtp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hidden")
    {
        hidden = value;
        hidden.value_namespace = name_space;
        hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "hidden")
    {
        hidden.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Vtp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "hidden" || name == "secret")
        return true;
    return false;
}

Native::Vtp::Mode::Mode()
    :
    client(nullptr) // presence node
    , off(nullptr) // presence node
    , server(nullptr) // presence node
    , transparent(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vtp::Mode::~Mode()
{
}

bool Native::Vtp::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (client !=  nullptr && client->has_data())
	|| (off !=  nullptr && off->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transparent !=  nullptr && transparent->has_data());
}

bool Native::Vtp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (off !=  nullptr && off->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transparent !=  nullptr && transparent->has_operation());
}

std::string Native::Vtp::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Vtp::Mode::Client>();
        }
        return client;
    }

    if(child_yang_name == "off")
    {
        if(off == nullptr)
        {
            off = std::make_shared<Native::Vtp::Mode::Off>();
        }
        return off;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Vtp::Mode::Server>();
        }
        return server;
    }

    if(child_yang_name == "transparent")
    {
        if(transparent == nullptr)
        {
            transparent = std::make_shared<Native::Vtp::Mode::Transparent>();
        }
        return transparent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(off != nullptr)
    {
        _children["off"] = off;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(transparent != nullptr)
    {
        _children["transparent"] = transparent;
    }

    return _children;
}

void Native::Vtp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vtp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vtp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "off" || name == "server" || name == "transparent")
        return true;
    return false;
}

Native::Vtp::Mode::Client::Client()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "client"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Vtp::Mode::Client::~Client()
{
}

bool Native::Vtp::Mode::Client::has_data() const
{
    if (is_presence_container) return true;
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::Mode::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::Mode::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vtp::Mode::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Off::Off()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "off"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Vtp::Mode::Off::~Off()
{
}

bool Native::Vtp::Mode::Off::has_data() const
{
    if (is_presence_container) return true;
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Off::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Off::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Off::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Off::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::Mode::Off::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::Mode::Off::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vtp::Mode::Off::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Off::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Off::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Server::Server()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "server"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Vtp::Mode::Server::~Server()
{
}

bool Native::Vtp::Mode::Server::has_data() const
{
    if (is_presence_container) return true;
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::Mode::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::Mode::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vtp::Mode::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Transparent::Transparent()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "transparent"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Vtp::Mode::Transparent::~Transparent()
{
}

bool Native::Vtp::Mode::Transparent::has_data() const
{
    if (is_presence_container) return true;
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Transparent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Transparent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Transparent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transparent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Transparent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vtp::Mode::Transparent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vtp::Mode::Transparent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vtp::Mode::Transparent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Transparent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Transparent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Xconnect::Xconnect()
    :
    logging(std::make_shared<Native::Xconnect::Logging>())
{
    logging->parent = this;

    yang_name = "xconnect"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Xconnect::~Xconnect()
{
}

bool Native::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return (logging !=  nullptr && logging->has_data());
}

bool Native::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Xconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Xconnect::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:logging"] = logging;
    }

    return _children;
}

void Native::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::Xconnect::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
        ,
    pseudowire(std::make_shared<Native::Xconnect::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Xconnect::Logging::~Logging()
{
}

bool Native::Xconnect::Logging::has_data() const
{
    if (is_presence_container) return true;
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::Xconnect::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::Xconnect::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Xconnect::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::Xconnect::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Xconnect::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pseudowire != nullptr)
    {
        _children["pseudowire"] = pseudowire;
    }

    return _children;
}

void Native::Xconnect::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "redundancy")
        return true;
    return false;
}

Native::Xconnect::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{

    yang_name = "pseudowire"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Xconnect::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::Xconnect::Logging::Pseudowire::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set;
}

bool Native::Xconnect::Logging::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Xconnect::Logging::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/xconnect/Cisco-IOS-XE-l2vpn:logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::Logging::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Xconnect::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Xconnect::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Xconnect::Logging::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Fabric::Fabric()
    :
    switching_mode(std::make_shared<Native::Fabric::SwitchingMode>())
{
    switching_mode->parent = this;

    yang_name = "fabric"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fabric::~Fabric()
{
}

bool Native::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (switching_mode !=  nullptr && switching_mode->has_data());
}

bool Native::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (switching_mode !=  nullptr && switching_mode->has_operation());
}

std::string Native::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switching-mode")
    {
        if(switching_mode == nullptr)
        {
            switching_mode = std::make_shared<Native::Fabric::SwitchingMode>();
        }
        return switching_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switching_mode != nullptr)
    {
        _children["switching-mode"] = switching_mode;
    }

    return _children;
}

void Native::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::SwitchingMode()
    :
    allow(std::make_shared<Native::Fabric::SwitchingMode::Allow>())
    , force(std::make_shared<Native::Fabric::SwitchingMode::Force>())
{
    allow->parent = this;
    force->parent = this;

    yang_name = "switching-mode"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fabric::SwitchingMode::~SwitchingMode()
{
}

bool Native::Fabric::SwitchingMode::has_data() const
{
    if (is_presence_container) return true;
    return (allow !=  nullptr && allow->has_data())
	|| (force !=  nullptr && force->has_data());
}

bool Native::Fabric::SwitchingMode::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation())
	|| (force !=  nullptr && force->has_operation());
}

std::string Native::Fabric::SwitchingMode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fabric::SwitchingMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Fabric::SwitchingMode::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "force")
    {
        if(force == nullptr)
        {
            force = std::make_shared<Native::Fabric::SwitchingMode::Force>();
        }
        return force;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fabric::SwitchingMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allow != nullptr)
    {
        _children["allow"] = allow;
    }

    if(force != nullptr)
    {
        _children["force"] = force;
    }

    return _children;
}

void Native::Fabric::SwitchingMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::SwitchingMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::SwitchingMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "force")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Allow()
    :
    bus_mode{YType::empty, "bus-mode"}
        ,
    truncated(nullptr) // presence node
{

    yang_name = "allow"; yang_parent_name = "switching-mode"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fabric::SwitchingMode::Allow::~Allow()
{
}

bool Native::Fabric::SwitchingMode::Allow::has_data() const
{
    if (is_presence_container) return true;
    return bus_mode.is_set
	|| (truncated !=  nullptr && truncated->has_data());
}

bool Native::Fabric::SwitchingMode::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter)
	|| (truncated !=  nullptr && truncated->has_operation());
}

std::string Native::Fabric::SwitchingMode::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fabric::SwitchingMode::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "truncated")
    {
        if(truncated == nullptr)
        {
            truncated = std::make_shared<Native::Fabric::SwitchingMode::Allow::Truncated>();
        }
        return truncated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fabric::SwitchingMode::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(truncated != nullptr)
    {
        _children["truncated"] = truncated;
    }

    return _children;
}

void Native::Fabric::SwitchingMode::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "truncated" || name == "bus-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Truncated::Truncated()
    :
    threshold{YType::uint8, "threshold"}
{

    yang_name = "truncated"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Fabric::SwitchingMode::Allow::Truncated::~Truncated()
{
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Fabric::SwitchingMode::Allow::Truncated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/allow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Allow::Truncated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "truncated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Allow::Truncated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fabric::SwitchingMode::Allow::Truncated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fabric::SwitchingMode::Allow::Truncated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Force::Force()
    :
    bus_mode{YType::empty, "bus-mode"}
{

    yang_name = "force"; yang_parent_name = "switching-mode"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Fabric::SwitchingMode::Force::~Force()
{
}

bool Native::Fabric::SwitchingMode::Force::has_data() const
{
    if (is_presence_container) return true;
    return bus_mode.is_set;
}

bool Native::Fabric::SwitchingMode::Force::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter);
}

std::string Native::Fabric::SwitchingMode::Force::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Force::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Force::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Fabric::SwitchingMode::Force::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Fabric::SwitchingMode::Force::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Fabric::SwitchingMode::Force::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Force::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Force::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bus-mode")
        return true;
    return false;
}

Native::PortChannel::PortChannel()
    :
    auto_{YType::empty, "Cisco-IOS-XE-ethernet:auto"}
        ,
    load_balance(std::make_shared<Native::PortChannel::LoadBalance>())
    , load_balancing(std::make_shared<Native::PortChannel::LoadBalancing>())
{
    load_balance->parent = this;
    load_balancing->parent = this;

    yang_name = "port-channel"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::PortChannel::~PortChannel()
{
}

bool Native::PortChannel::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data());
}

bool Native::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation());
}

std::string Native::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-channel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ethernet:load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::PortChannel::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::PortChannel::LoadBalancing>();
        }
        return load_balancing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(load_balance != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:load-balance"] = load_balance;
    }

    if(load_balancing != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:load-balancing"] = load_balancing;
    }

    return _children;
}

void Native::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ethernet:auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance" || name == "load-balancing" || name == "auto")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::LoadBalance()
    :
    load_balance{YType::enumeration, "load-balance"}
        ,
    extended(nullptr) // presence node
{

    yang_name = "load-balance"; yang_parent_name = "port-channel"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::PortChannel::LoadBalance::~LoadBalance()
{
}

bool Native::PortChannel::LoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return load_balance.is_set
	|| (extended !=  nullptr && extended->has_data());
}

bool Native::PortChannel::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| (extended !=  nullptr && extended->has_operation());
}

std::string Native::PortChannel::LoadBalance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PortChannel::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        if(extended == nullptr)
        {
            extended = std::make_shared<Native::PortChannel::LoadBalance::Extended>();
        }
        return extended;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PortChannel::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extended != nullptr)
    {
        _children["extended"] = extended;
    }

    return _children;
}

void Native::PortChannel::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "load-balance")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::Extended::Extended()
    :
    extended{YType::enumeration, "extended"}
{

    yang_name = "extended"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::PortChannel::LoadBalance::Extended::~Extended()
{
}

bool Native::PortChannel::LoadBalance::Extended::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : extended.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::PortChannel::LoadBalance::Extended::has_operation() const
{
    for (auto const & leaf : extended.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::PortChannel::LoadBalance::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/Cisco-IOS-XE-ethernet:load-balance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalance::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalance::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_name_datas = extended.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_name_datas.begin(), extended_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PortChannel::LoadBalance::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PortChannel::LoadBalance::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PortChannel::LoadBalance::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended.append(value);
    }
}

void Native::PortChannel::LoadBalance::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::PortChannel::LoadBalancing::LoadBalancing()
    :
    vlan_manual{YType::empty, "vlan-manual"}
{

    yang_name = "load-balancing"; yang_parent_name = "port-channel"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::PortChannel::LoadBalancing::~LoadBalancing()
{
}

bool Native::PortChannel::LoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return vlan_manual.is_set;
}

bool Native::PortChannel::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_manual.yfilter);
}

std::string Native::PortChannel::LoadBalancing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_manual.is_set || is_set(vlan_manual.yfilter)) leaf_name_data.push_back(vlan_manual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PortChannel::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PortChannel::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PortChannel::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual = value;
        vlan_manual.value_namespace = name_space;
        vlan_manual.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-manual")
        return true;
    return false;
}

Native::Key::Key()
    :
    chain(this, {"name"})
{

    yang_name = "key"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Key::~Key()
{
}

bool Native::Key::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chain.len(); index++)
    {
        if(chain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Key::has_operation() const
{
    for (std::size_t index=0; index<chain.len(); index++)
    {
        if(chain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-crypto:chain")
    {
        auto ent_ = std::make_shared<Native::Key::Chain>();
        ent_->parent = this;
        chain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : chain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain")
        return true;
    return false;
}

Native::Key::Chain::Chain()
    :
    name{YType::str, "name"},
    macsec{YType::empty, "macsec"}
        ,
    key(this, {"id"})
{

    yang_name = "chain"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Key::Chain::~Chain()
{
}

bool Native::Key::Chain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return name.is_set
	|| macsec.is_set;
}

bool Native::Key::Chain::has_operation() const
{
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(macsec.yfilter);
}

std::string Native::Key::Chain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Key::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:chain";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (macsec.is_set || is_set(macsec.yfilter)) leaf_name_data.push_back(macsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        auto ent_ = std::make_shared<Native::Key::Chain::Key_>();
        ent_->parent = this;
        key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Key::Chain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec")
    {
        macsec = value;
        macsec.value_namespace = name_space;
        macsec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        macsec.yfilter = yfilter;
    }
}

bool Native::Key::Chain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "macsec")
        return true;
    return false;
}

Native::Key::Chain::Key_::Key_()
    :
    id{YType::str, "id"},
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"}
        ,
    key_string(std::make_shared<Native::Key::Chain::Key_::KeyString>())
    , lifetime(std::make_shared<Native::Key::Chain::Key_::Lifetime>())
    , lifetime_local(std::make_shared<Native::Key::Chain::Key_::LifetimeLocal>())
{
    key_string->parent = this;
    lifetime->parent = this;
    lifetime_local->parent = this;

    yang_name = "key"; yang_parent_name = "chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Key::Chain::Key_::~Key_()
{
}

bool Native::Key::Chain::Key_::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cryptographic_algorithm.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (lifetime_local !=  nullptr && lifetime_local->has_data());
}

bool Native::Key::Chain::Key_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cryptographic_algorithm.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (lifetime_local !=  nullptr && lifetime_local->has_operation());
}

std::string Native::Key::Chain::Key_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.yfilter)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::Key_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Key::Chain::Key_::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Key::Chain::Key_::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "lifetime-local")
    {
        if(lifetime_local == nullptr)
        {
            lifetime_local = std::make_shared<Native::Key::Chain::Key_::LifetimeLocal>();
        }
        return lifetime_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::Key_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(lifetime_local != nullptr)
    {
        _children["lifetime-local"] = lifetime_local;
    }

    return _children;
}

void Native::Key::Chain::Key_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
        cryptographic_algorithm.value_namespace = name_space;
        cryptographic_algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "lifetime" || name == "lifetime-local" || name == "id" || name == "cryptographic-algorithm")
        return true;
    return false;
}

Native::Key::Chain::Key_::KeyString::KeyString()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key-string"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Key::Chain::Key_::KeyString::~KeyString()
{
}

bool Native::Key::Chain::Key_::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Key::Chain::Key_::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Key::Chain::Key_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::Key_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::Key_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Key::Chain::Key_::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Key::Chain::Key_::Lifetime::Lifetime()
    :
    lifetime_group(std::make_shared<Native::Key::Chain::Key_::Lifetime::LifetimeGroup>())
{
    lifetime_group->parent = this;

    yang_name = "lifetime"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Key::Chain::Key_::Lifetime::~Lifetime()
{
}

bool Native::Key::Chain::Key_::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return (lifetime_group !=  nullptr && lifetime_group->has_data());
}

bool Native::Key::Chain::Key_::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| (lifetime_group !=  nullptr && lifetime_group->has_operation());
}

std::string Native::Key::Chain::Key_::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::Key_::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime-group")
    {
        if(lifetime_group == nullptr)
        {
            lifetime_group = std::make_shared<Native::Key::Chain::Key_::Lifetime::LifetimeGroup>();
        }
        return lifetime_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::Key_::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime_group != nullptr)
    {
        _children["lifetime-group"] = lifetime_group;
    }

    return _children;
}

void Native::Key::Chain::Key_::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::Chain::Key_::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::Chain::Key_::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime-group")
        return true;
    return false;
}

Native::Key::Chain::Key_::Lifetime::LifetimeGroup::LifetimeGroup()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    duration{YType::uint32, "duration"},
    hh_mm_ss1{YType::str, "hh-mm-ss1"},
    date3{YType::uint8, "date3"},
    month3{YType::str, "month3"},
    date4{YType::uint8, "date4"},
    month4{YType::str, "month4"},
    year1{YType::uint16, "year1"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "lifetime-group"; yang_parent_name = "lifetime"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Key::Chain::Key_::Lifetime::LifetimeGroup::~LifetimeGroup()
{
}

bool Native::Key::Chain::Key_::Lifetime::LifetimeGroup::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set
	|| date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| duration.is_set
	|| hh_mm_ss1.is_set
	|| date3.is_set
	|| month3.is_set
	|| date4.is_set
	|| month4.is_set
	|| year1.is_set
	|| infinite.is_set;
}

bool Native::Key::Chain::Key_::Lifetime::LifetimeGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(hh_mm_ss1.yfilter)
	|| ydk::is_set(date3.yfilter)
	|| ydk::is_set(month3.yfilter)
	|| ydk::is_set(date4.yfilter)
	|| ydk::is_set(month4.yfilter)
	|| ydk::is_set(year1.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (hh_mm_ss1.is_set || is_set(hh_mm_ss1.yfilter)) leaf_name_data.push_back(hh_mm_ss1.get_name_leafdata());
    if (date3.is_set || is_set(date3.yfilter)) leaf_name_data.push_back(date3.get_name_leafdata());
    if (month3.is_set || is_set(month3.yfilter)) leaf_name_data.push_back(month3.get_name_leafdata());
    if (date4.is_set || is_set(date4.yfilter)) leaf_name_data.push_back(date4.get_name_leafdata());
    if (month4.is_set || is_set(month4.yfilter)) leaf_name_data.push_back(month4.get_name_leafdata());
    if (year1.is_set || is_set(year1.yfilter)) leaf_name_data.push_back(year1.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Key::Chain::Key_::Lifetime::LifetimeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1 = value;
        hh_mm_ss1.value_namespace = name_space;
        hh_mm_ss1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date3")
    {
        date3 = value;
        date3.value_namespace = name_space;
        date3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month3")
    {
        month3 = value;
        month3.value_namespace = name_space;
        month3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date4")
    {
        date4 = value;
        date4.value_namespace = name_space;
        date4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month4")
    {
        month4 = value;
        month4.value_namespace = name_space;
        month4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year1")
    {
        year1 = value;
        year1.value_namespace = name_space;
        year1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::Lifetime::LifetimeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1.yfilter = yfilter;
    }
    if(value_path == "date3")
    {
        date3.yfilter = yfilter;
    }
    if(value_path == "month3")
    {
        month3.yfilter = yfilter;
    }
    if(value_path == "date4")
    {
        date4.yfilter = yfilter;
    }
    if(value_path == "month4")
    {
        month4.yfilter = yfilter;
    }
    if(value_path == "year1")
    {
        year1.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::Lifetime::LifetimeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss" || name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "duration" || name == "hh-mm-ss1" || name == "date3" || name == "month3" || name == "date4" || name == "month4" || name == "year1" || name == "infinite")
        return true;
    return false;
}

const Enum::YLeaf Native::ParameterMap::Type::Webauth::Type_::authbypass {0, "authbypass"};
const Enum::YLeaf Native::ParameterMap::Type::Webauth::Type_::consent {1, "consent"};
const Enum::YLeaf Native::ParameterMap::Type::Webauth::Type_::webauth {2, "webauth"};
const Enum::YLeaf Native::ParameterMap::Type::Webauth::Type_::webconsent {3, "webconsent"};

const Enum::YLeaf Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Type_::authbypass {0, "authbypass"};
const Enum::YLeaf Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Type_::consent {1, "consent"};
const Enum::YLeaf Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Type_::webauth {2, "webauth"};
const Enum::YLeaf Native::ParameterMap::Type::WebauthGlobal::Webauth::Global::Type_::webconsent {3, "webconsent"};

const Enum::YLeaf Native::Mac::AccessList::Extended::Entry::Action::deny {0, "deny"};
const Enum::YLeaf Native::Mac::AccessList::Extended::Entry::Action::permit {1, "permit"};

const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mixed_ip_port {2, "dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_port {3, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::mpls {4, "mpls"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_ip {5, "src-dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mac {6, "src-dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mixed_ip_port {7, "src-dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_port {8, "src-dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_ip {9, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mac {10, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mixed_ip_port {11, "src-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_port {12, "src-port"};

const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_port {2, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::ipv6_label {3, "ipv6-label"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::l3_proto {4, "l3-proto"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_ip {5, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_mac {6, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_port {7, "src-port"};

const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_128_cmac {0, "aes-128-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_256_cmac {1, "aes-256-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_1 {2, "hmac-sha-1"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_256 {3, "hmac-sha-256"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_384 {4, "hmac-sha-384"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_512 {5, "hmac-sha-512"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::md5 {6, "md5"};

const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_7 {2, "7"};


}
}

